/*!
 \file   LMX2594.h
 \brief  LMX2594 Clock Hardware Interface Header
 \author J Cole-Baker (For Smartest)
 \date   Jul 2018
*/


#ifndef LMX2594_H
#define LMX2594_H

#include <QList>
#include <stdint.h>

#include "globals.h"
#include "I2CComms.h"
#include "BertComponent.h"
#include "LMXFrequencyProfile.h"
#include "M24M02.h"                // Needed to read / write frequency profiles to EEPROM


/*!
 \brief LMX2594 Interface Class

 This class implements functions specific to the Texas Instruments LMX2594
 clock generator chip.

*/
class LMX2594 : public BertComponent
{
  Q_OBJECT

  public:

    LMX2594(I2CComms *comms, const uint8_t i2cAddress, const int deviceID, M24M02 *eeprom);
    ~LMX2594();

    static const uint8_t REGISTER_COUNT = 113;   // Number of registers for this LMX part

    // **** LMX Clock Synth Methods: ******************
    static bool ping(I2CComms *comms, const uint8_t i2cAddress);                        // Check to see whether the clock is connected to a particular I2C address (also initilialises I2C-SPI adaptor)
    static int getPartFromRegisterFiles(const QString searchPath, QString &partNo);     // Find the clock part number from the register def files

    void getOptions();
    int init();                                                                     // Initialise the part

#define LMX2594_SIGNALS \
    void LMXInfo(int deviceID, int indexProfile, int indexTrigOutputPower, int indexFOutOutputPower, int indexTriggerDivide, bool outputsOn, float frequency); \
    void LMXVTuneLock(int deviceID, bool isLocked); \
    void LMXSettingsChanged(int deviceID);

#define LMX2594_SLOTS \
    void GetLMXInfo();                                                         \
    void GetLMXVTuneLock();                                                    \
    void SelectProfile(int indexProfile, bool triggerResync = true);           \
    void AnyRateProfile(int D7, int D6, int D5, int D4, int D3, int D2, int D1, int D0);  \
    void ConfigureOutputs(int indexFOutOutputPower,                            \
                          int indexTrigOutputPower,                            \
                          bool outputsOn,                                      \
                          bool triggerResync = true);                          \
    void ConfigureOutputs_Debug(int ISET, int A1, int A0, int B1, int B0);     \
    void ReadTcsFrequencyProfiles(QString searchPath);                         \
    void LMXEEPROMWriteFrequencyProfiles();                                    \
    void LMXVerifyFrequencyProfiles();                                         \
    void ResetDevice();                                                        \
    void SetLMXEnable(bool enabled);

#define LMX_CONNECT_SIGNALS(CLIENT, LMX2594) \
    connect(LMX2594, SIGNAL(LMXInfo(int, int, int, int, int, bool, float)), CLIENT, SLOT(LMXInfo(int, int, int, int, int, bool, float)));               \
    connect(LMX2594, SIGNAL(LMXVTuneLock(int, bool)),                       CLIENT, SLOT(LMXVTuneLock(int, bool)));                                     \
    connect(LMX2594, SIGNAL(LMXSettingsChanged(int)),                       CLIENT, SLOT(LMXSettingsChanged(int)));                                     \
    connect(CLIENT,  SIGNAL(GetLMXInfo()),                                  LMX2594, SLOT(GetLMXInfo()));                                               \
    connect(CLIENT,  SIGNAL(GetLMXVTuneLock()),                             LMX2594, SLOT(GetLMXVTuneLock()));                                          \
    connect(CLIENT,  SIGNAL(SelectProfile(int, bool)),                      LMX2594, SLOT(SelectProfile(int, bool)));                                   \
    connect(CLIENT,  SIGNAL(AnyRateProfile(int,int,int,int,int,int,int,int)),  LMX2594, SLOT(AnyRateProfile(int,int,int,int,int,int,int,int)));        \
    connect(CLIENT,  SIGNAL(ConfigureOutputs(int, int, bool, bool)),        LMX2594, SLOT(ConfigureOutputs(int, int, bool, bool)));                     \
    connect(CLIENT,  SIGNAL(ConfigureOutputs_Debug(int, int, int, int, int)),        LMX2594, SLOT(ConfigureOutputs_Debug(int, int, int, int, int)));   \
    connect(CLIENT,  SIGNAL(ReadTcsFrequencyProfiles(QString)),             LMX2594, SLOT(ReadTcsFrequencyProfiles(QString)));                          \
    connect(CLIENT,  SIGNAL(LMXEEPROMWriteFrequencyProfiles()),             LMX2594, SLOT(LMXEEPROMWriteFrequencyProfiles()));                          \
    connect(CLIENT,  SIGNAL(LMXVerifyFrequencyProfiles()),                  LMX2594, SLOT(LMXVerifyFrequencyProfiles()));                               \
    connect(CLIENT,  SIGNAL(ResetDevice()),                                 LMX2594, SLOT(ResetDevice()));                                              \
    connect(CLIENT,  SIGNAL(SetLMXEnable(bool)),                            LMX2594, SLOT(SetLMXEnable(bool)));                                         \
    BERT_COMPONENT_CONNECT_SIGNALS(CLIENT, LMX2594)

  signals:
    LMX2594_SIGNALS

  public slots:
    LMX2594_SLOTS

  private:

    // ****** CONSTANTS: *****************************************************
    static const QString PART_NO;

    // Constants for Trigger Divide Ratio and Output Power:
    // DEPRECATED static const QStringList TRIGGER_DIVIDE_LIST;
    // DEPRECATED static const size_t DEFAULT_DIVIDE_RATIO_INDEX;

    static const uint8_t POWER_M5DBM;
    static const uint8_t POWER_0DBM;
    static const uint8_t POWER_5DBM;
    static const uint8_t POWER_10DBM;
    static const uint8_t POWER_15DBM;

    static const QList<uint8_t>POWER_CONSTS;
    static const size_t DEFAULT_FOUT_POWER_INDEX;
    static const size_t DEFAULT_TRIG_POWER_INDEX;

    static const QStringList TRIGOUT_POWER_LIST;

    // Bit patterns for Register 0:
    static const uint16_t R0_NOTHING;
    static const uint16_t R0_DEFAULT;
    static const uint16_t R0_ANYRATE;

    static const uint16_t R0_RAMP_EN;
    static const uint16_t R0_VCO_PHASE_SYNC_EN;
    static const uint16_t R0_OUT_MUTE;
    static const uint16_t R0_FCAL_EN;
    static const uint16_t R0_MUXOUT_LD_SEL;
    static const uint16_t R0_RESET;
    static const uint16_t R0_POWERDOWN;
    static const uint16_t R0_FCAL_XXXX_ADJ_MASK;

    // On the LMX2594, R1 and R7 are also used as part of basic configuration
    // (CAL_CLK_DIV field and OUT_FORCE bit):
    static const uint16_t R1_DEFAULT;
    static const uint16_t R7_DEFAULT;

    //Doubler is 1 if Fvco is 7.5GHz - 8GHz, otherwise Doubler is 2
    static const uint16_t R9_OSC2;
    static const uint16_t R9_OSC1;

    // R31 contains CHDIV_DIV2 bit; R75 contains CHDIV bits:
    static const uint16_t R31_DEFAULT;
    static const uint16_t R31_CHDIV;
    static const uint16_t R37_DEFAULT;
    static const uint16_t R37_CHDIV;
    static const uint16_t R75_DEFAULT;
    static const uint16_t R39_ANYRATE;
    static const uint16_t R38_ANYRATE;
    uint16_t REGISTER[113] = { 9500, 2056,   1280,  1602, 2627,  200,  51202, 16562, 8192,  5636,
                               4312,   24,  20481, 16384, 7792, 1615,    128,   300,  100, 10167,
                              63560, 1025,      1,    124, 1818, 1572,   3504,     2, 1160, 12684,
                              12684, 17388,   915,   7713,    0,    4,     72,  1028,    0,  1000,
                                  0,     0,     0,   500,  7715, 51422,  2045,   768,  768, 16768,
                                  0,   128,  2080,     0,     0,     0,     0,   32, 32769,     1,
                                  0,   168,   802,     0,  5000,     0,   500,    0,  1000,     0,
                              50000,   129,     1,    63,     0,  2048,    12,    0,     3,    38,
                              26214,     0,  6400,     0,     1, 52736,     0,    0,     0,     0,
                                  0,     0,     0,     0,     0,     0,     0, 2184,   512,     0,
                                  0,    17, 16256,     0,     0,    33,     0,    0,     0,     0,
                                  0,     0,    0 };

    static const uint16_t R44_DEFAULT;
    static const uint16_t R44_ANYRATE;

    static const uint16_t R45_DEFAULT;
    static const uint16_t R45_OUTA_CHDIV;
    static const uint16_t R45_ANYRATE;

    static const uint16_t R46_DEFAULT;
    static const uint16_t R46_OUTB_CHDIV;

    const uint32_t LMX2594_RESET_SLEEP = 600;        // Number of milliseconds to sleep during RESET (while RESET bit HIGH).
    const uint32_t LMX2594_RESET_POST_SLEEP = 400;   // Number of milliseconds to sleep AFTER RESET, before loading other registers.

    //  **********************************************************************

    I2CComms *comms;
    const uint8_t i2cAddress;
    const int deviceID;
    M24M02 *eeprom;

    int spiAdaptorIsOpen = false;

    /****** Clock Gen State: **********************/
    uint16_t   selectedProfileIndex = 0;
    uint16_t   selectedTrigOutputPowerIndex = 0;
    uint16_t   selectedFOutOutputPowerIndex = 0;
    uint16_t   selectedTrigDivideIndex = 0;
    uint8_t    Channel_DIV = 0;
    double     RF_Output_Freq =0.0;
    double     DataRate =0.0;
    const uint32_t PLL_DEN= 4294967295;
    bool       flagOutputsOn = false;

    // Main Frequency Profiles: These are read from EEPROM
    static QList<LMXFrequencyProfile> frequencyProfiles;
    static QStringList frequencyList;
    static uint16_t profileIndexDefault;    // Index of default start-up frequency profile
    // DEPRECATED static bool frequencyProfilesOK;



    // Factory Setup Frequency Profiles: These are read from TICS Pro files (generated by TI software)
    // and used during factory set up mode (write to EEPROM). They are not directly used by the LMX.
    // They are read and populated ONLY if:
    //  -Factory mode is enabled (factory key present)
    //  -There is a directory called "clockdefs" in the same dir as the executable,
    //   and it contains some .TCS files.
    // If profiles are found as per above, they are displayed and the user has the
    // option to write them to EEPROM.
    static QList<LMXFrequencyProfile> frequencyProfilesFromFiles;
    static QStringList frequencyListFromFiles;



    // DEPRECATED static int instanceCount;

    static int getProfilesFromRegisterFiles(const QString registerFilePath, QString partNo); // Read the register values from the register def files and create frequency profiles
    // DEPRECATED static int initFrequencyProfiles(const QString registerFilePath, QString partNo);    // Read a list of frequency profile files (contain register values)

  //  static int getFirmwareFromFiles(const QString firmwareFilePath, QString partNo); // Read the register values from the register firmware files

    static int parseTcsFrequencyProfile(QStringList &fileContent, const QString partNo, LMXFrequencyProfile &profileToFill);

    static int initAdaptor(I2CComms *comms, const uint8_t i2cAddress);   // Initialise the I2C to SPI adaptor

    int initPart();                                                      // Part-specific Initialisation
    int getFrequency(int index, float *frequency) const;                 // Find the frequency (MHz) of the frequency profile at the specificed index
    int selectProfile(int index);                                        // Switch to the frequency profile specified by index
    int anyRateProfile(int,int,int,int,int,int,int,int);          //Switch to the custom frequency the user input
    int runFCal();                                                       // Run frequency calibration
    int resetDevice();                                                   // Reset the part to default settings
    int configureOutputs();                                              // Output driver setup
    void setSafeDefaults();                                              // Set safe default settings
    int resetPart(uint16_t defaultR0);                                   // Part-specific reset function: Implemented by derived versions

    void getAnyRateLMXInfo(double frequency);

    // LMX Enable / Disable:
    int setLMXEnable(bool enabled);

    // Register writing:

    int writeRegister(const uint8_t regAddress, const uint16_t regValue);

    uint16_t setRegisterBits(const uint16_t registerInputValue,
                             const uint8_t  nBits,
                             const uint8_t  shift,
                             const uint16_t value);

    int writeRegisterBits(const uint8_t  address,
                          const uint8_t  nBits,
                          const uint8_t  shift,
                          const uint16_t value,
                          const uint16_t registerDefault);

    int readRegister(const uint8_t regAddress, uint16_t *regValue);

};


#endif // LMX2594_H
