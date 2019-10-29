/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BertWindow_t {
    QByteArrayData data[230];
    char stringdata0[3619];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BertWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BertWindow_t qt_meta_stringdata_BertWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BertWindow"
QT_MOC_LITERAL(1, 11, 18), // "RefreshSerialPorts"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "CommsConnect"
QT_MOC_LITERAL(4, 44, 4), // "port"
QT_MOC_LITERAL(5, 49, 15), // "CommsDisconnect"
QT_MOC_LITERAL(6, 65, 10), // "GetOptions"
QT_MOC_LITERAL(7, 76, 14), // "InitComponents"
QT_MOC_LITERAL(8, 91, 10), // "WorkerStop"
QT_MOC_LITERAL(9, 102, 10), // "CommsCheck"
QT_MOC_LITERAL(10, 113, 8), // "metaLane"
QT_MOC_LITERAL(11, 122, 14), // "GetTemperature"
QT_MOC_LITERAL(12, 137, 17), // "ConfigSetDefaults"
QT_MOC_LITERAL(13, 155, 7), // "bitRate"
QT_MOC_LITERAL(14, 163, 8), // "ConfigPG"
QT_MOC_LITERAL(15, 172, 7), // "pattern"
QT_MOC_LITERAL(16, 180, 9), // "ConfigCDR"
QT_MOC_LITERAL(17, 190, 9), // "inputLane"
QT_MOC_LITERAL(18, 200, 11), // "freqDivider"
QT_MOC_LITERAL(19, 212, 9), // "ConfigLBW"
QT_MOC_LITERAL(20, 222, 8), // "dataRate"
QT_MOC_LITERAL(21, 231, 13), // "rateDependent"
QT_MOC_LITERAL(22, 245, 11), // "rateDivider"
QT_MOC_LITERAL(23, 257, 9), // "targetLBW"
QT_MOC_LITERAL(24, 267, 9), // "SetLaneOn"
QT_MOC_LITERAL(25, 277, 4), // "lane"
QT_MOC_LITERAL(26, 282, 6), // "laneOn"
QT_MOC_LITERAL(27, 289, 15), // "powerDownOnMute"
QT_MOC_LITERAL(28, 305, 14), // "SetOutputSwing"
QT_MOC_LITERAL(29, 320, 10), // "swingIndex"
QT_MOC_LITERAL(30, 331, 15), // "SetOutputSwingB"
QT_MOC_LITERAL(31, 347, 15), // "SetLaneInverted"
QT_MOC_LITERAL(32, 363, 8), // "inverted"
QT_MOC_LITERAL(33, 372, 13), // "SetDeEmphasis"
QT_MOC_LITERAL(34, 386, 5), // "level"
QT_MOC_LITERAL(35, 392, 7), // "prePost"
QT_MOC_LITERAL(36, 400, 13), // "SetCrossPoint"
QT_MOC_LITERAL(37, 414, 15), // "crossPointIndex"
QT_MOC_LITERAL(38, 430, 10), // "SetEQBoost"
QT_MOC_LITERAL(39, 441, 12), // "eqBoostIndex"
QT_MOC_LITERAL(40, 454, 17), // "SetForceCDRBypass"
QT_MOC_LITERAL(41, 472, 14), // "forceCDRBypass"
QT_MOC_LITERAL(42, 487, 12), // "SetEDOptions"
QT_MOC_LITERAL(43, 500, 9), // "pattern01"
QT_MOC_LITERAL(44, 510, 8), // "invert01"
QT_MOC_LITERAL(45, 519, 8), // "enable01"
QT_MOC_LITERAL(46, 528, 9), // "pattern23"
QT_MOC_LITERAL(47, 538, 8), // "invert23"
QT_MOC_LITERAL(48, 547, 8), // "enable23"
QT_MOC_LITERAL(49, 556, 9), // "GetLosLol"
QT_MOC_LITERAL(50, 566, 10), // "GetEDCount"
QT_MOC_LITERAL(51, 577, 13), // "EDErrorInject"
QT_MOC_LITERAL(52, 591, 12), // "EyeScanStart"
QT_MOC_LITERAL(53, 604, 4), // "type"
QT_MOC_LITERAL(54, 609, 5), // "hStep"
QT_MOC_LITERAL(55, 615, 5), // "vStep"
QT_MOC_LITERAL(56, 621, 7), // "vOffset"
QT_MOC_LITERAL(57, 629, 8), // "countRes"
QT_MOC_LITERAL(58, 638, 13), // "EyeScanRepeat"
QT_MOC_LITERAL(59, 652, 13), // "EyeScanCancel"
QT_MOC_LITERAL(60, 666, 10), // "GetLMXInfo"
QT_MOC_LITERAL(61, 677, 15), // "GetLMXVTuneLock"
QT_MOC_LITERAL(62, 693, 13), // "SelectProfile"
QT_MOC_LITERAL(63, 707, 12), // "indexProfile"
QT_MOC_LITERAL(64, 720, 13), // "triggerResync"
QT_MOC_LITERAL(65, 734, 14), // "AnyRateProfile"
QT_MOC_LITERAL(66, 749, 2), // "D7"
QT_MOC_LITERAL(67, 752, 2), // "D6"
QT_MOC_LITERAL(68, 755, 2), // "D5"
QT_MOC_LITERAL(69, 758, 2), // "D4"
QT_MOC_LITERAL(70, 761, 2), // "D3"
QT_MOC_LITERAL(71, 764, 2), // "D2"
QT_MOC_LITERAL(72, 767, 2), // "D1"
QT_MOC_LITERAL(73, 770, 2), // "D0"
QT_MOC_LITERAL(74, 773, 16), // "ConfigureOutputs"
QT_MOC_LITERAL(75, 790, 20), // "indexFOutOutputPower"
QT_MOC_LITERAL(76, 811, 20), // "indexTrigOutputPower"
QT_MOC_LITERAL(77, 832, 9), // "outputsOn"
QT_MOC_LITERAL(78, 842, 22), // "ConfigureOutputs_Debug"
QT_MOC_LITERAL(79, 865, 4), // "ISET"
QT_MOC_LITERAL(80, 870, 2), // "A1"
QT_MOC_LITERAL(81, 873, 2), // "A0"
QT_MOC_LITERAL(82, 876, 2), // "B1"
QT_MOC_LITERAL(83, 879, 2), // "B0"
QT_MOC_LITERAL(84, 882, 24), // "ReadTcsFrequencyProfiles"
QT_MOC_LITERAL(85, 907, 10), // "searchPath"
QT_MOC_LITERAL(86, 918, 31), // "LMXEEPROMWriteFrequencyProfiles"
QT_MOC_LITERAL(87, 950, 26), // "LMXVerifyFrequencyProfiles"
QT_MOC_LITERAL(88, 977, 11), // "ResetDevice"
QT_MOC_LITERAL(89, 989, 12), // "SetLMXEnable"
QT_MOC_LITERAL(90, 1002, 7), // "enabled"
QT_MOC_LITERAL(91, 1010, 19), // "SelectTriggerDivide"
QT_MOC_LITERAL(92, 1030, 5), // "index"
QT_MOC_LITERAL(93, 1036, 20), // "SetEEPROMWriteEnable"
QT_MOC_LITERAL(94, 1057, 6), // "enable"
QT_MOC_LITERAL(95, 1064, 17), // "ReadLMXLockDetect"
QT_MOC_LITERAL(96, 1082, 17), // "EEPROMReadStrings"
QT_MOC_LITERAL(97, 1100, 8), // "deviceID"
QT_MOC_LITERAL(98, 1109, 18), // "EEPROMWriteStrings"
QT_MOC_LITERAL(99, 1128, 5), // "model"
QT_MOC_LITERAL(100, 1134, 6), // "serial"
QT_MOC_LITERAL(101, 1141, 14), // "productionDate"
QT_MOC_LITERAL(102, 1156, 15), // "calibrationDate"
QT_MOC_LITERAL(103, 1172, 13), // "warrantyStart"
QT_MOC_LITERAL(104, 1186, 11), // "warrantyEnd"
QT_MOC_LITERAL(105, 1198, 18), // "synthConfigVersion"
QT_MOC_LITERAL(106, 1217, 13), // "WriteFirmware"
QT_MOC_LITERAL(107, 1231, 15), // "GetRefClockInfo"
QT_MOC_LITERAL(108, 1247, 21), // "RefClockSelectProfile"
QT_MOC_LITERAL(109, 1269, 12), // "WorkerResult"
QT_MOC_LITERAL(110, 1282, 6), // "result"
QT_MOC_LITERAL(111, 1289, 17), // "WorkerShowMessage"
QT_MOC_LITERAL(112, 1307, 7), // "message"
QT_MOC_LITERAL(113, 1315, 6), // "append"
QT_MOC_LITERAL(114, 1322, 15), // "ListSerialPorts"
QT_MOC_LITERAL(115, 1338, 5), // "ports"
QT_MOC_LITERAL(116, 1344, 11), // "GT1724Added"
QT_MOC_LITERAL(117, 1356, 7), // "GT1724*"
QT_MOC_LITERAL(118, 1364, 6), // "gt1724"
QT_MOC_LITERAL(119, 1371, 10), // "laneOffset"
QT_MOC_LITERAL(120, 1382, 12), // "LMX2594Added"
QT_MOC_LITERAL(121, 1395, 8), // "LMX2594*"
QT_MOC_LITERAL(122, 1404, 7), // "lmx2594"
QT_MOC_LITERAL(123, 1412, 13), // "PCA9557_Added"
QT_MOC_LITERAL(124, 1426, 8), // "PCA9557*"
QT_MOC_LITERAL(125, 1435, 7), // "pca9557"
QT_MOC_LITERAL(126, 1443, 11), // "M24M02Added"
QT_MOC_LITERAL(127, 1455, 7), // "M24M02*"
QT_MOC_LITERAL(128, 1463, 6), // "m24m02"
QT_MOC_LITERAL(129, 1470, 11), // "SI5340Added"
QT_MOC_LITERAL(130, 1482, 7), // "SI5340*"
QT_MOC_LITERAL(131, 1490, 6), // "si5340"
QT_MOC_LITERAL(132, 1497, 13), // "StatusConnect"
QT_MOC_LITERAL(133, 1511, 9), // "connected"
QT_MOC_LITERAL(134, 1521, 11), // "OptionsSent"
QT_MOC_LITERAL(135, 1533, 6), // "Result"
QT_MOC_LITERAL(136, 1540, 12), // "ListPopulate"
QT_MOC_LITERAL(137, 1553, 4), // "name"
QT_MOC_LITERAL(138, 1558, 5), // "items"
QT_MOC_LITERAL(139, 1564, 12), // "defaultIndex"
QT_MOC_LITERAL(140, 1577, 10), // "ListSelect"
QT_MOC_LITERAL(141, 1588, 13), // "UpdateBoolean"
QT_MOC_LITERAL(142, 1602, 5), // "value"
QT_MOC_LITERAL(143, 1608, 12), // "UpdateString"
QT_MOC_LITERAL(144, 1621, 11), // "ShowMessage"
QT_MOC_LITERAL(145, 1633, 8), // "EDLosLol"
QT_MOC_LITERAL(146, 1642, 3), // "los"
QT_MOC_LITERAL(147, 1646, 3), // "lol"
QT_MOC_LITERAL(148, 1650, 7), // "EDCount"
QT_MOC_LITERAL(149, 1658, 6), // "locked"
QT_MOC_LITERAL(150, 1665, 4), // "bits"
QT_MOC_LITERAL(151, 1670, 9), // "bitsTotal"
QT_MOC_LITERAL(152, 1680, 6), // "errors"
QT_MOC_LITERAL(153, 1687, 11), // "errorsTotal"
QT_MOC_LITERAL(154, 1699, 21), // "EyeScanProgressUpdate"
QT_MOC_LITERAL(155, 1721, 7), // "percent"
QT_MOC_LITERAL(156, 1729, 12), // "EyeScanError"
QT_MOC_LITERAL(157, 1742, 4), // "code"
QT_MOC_LITERAL(158, 1747, 15), // "EyeScanFinished"
QT_MOC_LITERAL(159, 1763, 15), // "QVector<double>"
QT_MOC_LITERAL(160, 1779, 4), // "data"
QT_MOC_LITERAL(161, 1784, 4), // "xRes"
QT_MOC_LITERAL(162, 1789, 4), // "yRes"
QT_MOC_LITERAL(163, 1794, 7), // "LMXInfo"
QT_MOC_LITERAL(164, 1802, 18), // "indexTriggerDivide"
QT_MOC_LITERAL(165, 1821, 9), // "frequency"
QT_MOC_LITERAL(166, 1831, 12), // "LMXVTuneLock"
QT_MOC_LITERAL(167, 1844, 8), // "isLocked"
QT_MOC_LITERAL(168, 1853, 18), // "LMXSettingsChanged"
QT_MOC_LITERAL(169, 1872, 13), // "LMXLockDetect"
QT_MOC_LITERAL(170, 1886, 8), // "deviceId"
QT_MOC_LITERAL(171, 1895, 16), // "EEPROMStringData"
QT_MOC_LITERAL(172, 1912, 12), // "RefClockInfo"
QT_MOC_LITERAL(173, 1925, 11), // "frequencyIn"
QT_MOC_LITERAL(174, 1937, 12), // "frequencyOut"
QT_MOC_LITERAL(175, 1950, 13), // "descriptionIn"
QT_MOC_LITERAL(176, 1964, 14), // "descriptionOut"
QT_MOC_LITERAL(177, 1979, 23), // "RefClockSettingsChanged"
QT_MOC_LITERAL(178, 2003, 17), // "uiUpdateTimerTick"
QT_MOC_LITERAL(179, 2021, 26), // "on_tabWidget_tabBarClicked"
QT_MOC_LITERAL(180, 2048, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(181, 2076, 32), // "on_buttonPortListRefresh_clicked"
QT_MOC_LITERAL(182, 2109, 24), // "on_buttonConnect_clicked"
QT_MOC_LITERAL(183, 2134, 23), // "on_buttonResync_clicked"
QT_MOC_LITERAL(184, 2158, 31), // "on_buttonEEPROMDefaults_clicked"
QT_MOC_LITERAL(185, 2190, 28), // "on_buttonWriteEEPROM_clicked"
QT_MOC_LITERAL(186, 2219, 38), // "on_listEEPROMModel_currentInd..."
QT_MOC_LITERAL(187, 2258, 38), // "on_buttonWriteProfilesToEEPRO..."
QT_MOC_LITERAL(188, 2297, 34), // "on_buttonVerifyLMXProfiles_cl..."
QT_MOC_LITERAL(189, 2332, 34), // "on_listLMXFreq_currentIndexCh..."
QT_MOC_LITERAL(190, 2367, 45), // "on_listLMXTrigOutDivRatio_cur..."
QT_MOC_LITERAL(191, 2413, 42), // "on_listLMXTrigOutPower_curren..."
QT_MOC_LITERAL(192, 2456, 40), // "listRefClockProfiles_currentI..."
QT_MOC_LITERAL(193, 2497, 25), // "on_checkAnyRateOn_clicked"
QT_MOC_LITERAL(194, 2523, 7), // "checked"
QT_MOC_LITERAL(195, 2531, 27), // "on_buttonSetAnyRate_clicked"
QT_MOC_LITERAL(196, 2559, 27), // "on_buttonSetRFPower_clicked"
QT_MOC_LITERAL(197, 2587, 20), // "boolPGLaneOn_clicked"
QT_MOC_LITERAL(198, 2608, 26), // "boolPGLaneInverted_clicked"
QT_MOC_LITERAL(199, 2635, 35), // "listPGAmplitude_currentIndexC..."
QT_MOC_LITERAL(200, 2671, 36), // "listPGAmplitudeB_currentIndex..."
QT_MOC_LITERAL(201, 2708, 33), // "listPGPattern_currentIndexCha..."
QT_MOC_LITERAL(202, 2742, 37), // "listPGDeemphLevel_currentInde..."
QT_MOC_LITERAL(203, 2780, 38), // "listPGDeemphCursor_currentInd..."
QT_MOC_LITERAL(204, 2819, 36), // "listPGCrossPoint_currentIndex..."
QT_MOC_LITERAL(205, 2856, 35), // "listPGCDRBypass_currentIndexC..."
QT_MOC_LITERAL(206, 2892, 24), // "on_buttonEDStart_clicked"
QT_MOC_LITERAL(207, 2917, 23), // "on_buttonEDStop_clicked"
QT_MOC_LITERAL(208, 2941, 42), // "on_listEDResultDisplay_curren..."
QT_MOC_LITERAL(209, 2984, 27), // "on_checkEDEnableAll_clicked"
QT_MOC_LITERAL(210, 3012, 20), // "boolEDEnable_clicked"
QT_MOC_LITERAL(211, 3033, 7), // "channel"
QT_MOC_LITERAL(212, 3041, 33), // "listEDPattern_currentIndexCha..."
QT_MOC_LITERAL(213, 3075, 27), // "boolEDPatternInvert_clicked"
QT_MOC_LITERAL(214, 3103, 33), // "listEDEQBoost_currentIndexCha..."
QT_MOC_LITERAL(215, 3137, 27), // "buttonEDInjectError_clicked"
QT_MOC_LITERAL(216, 3165, 29), // "on_buttonEyeScanStart_clicked"
QT_MOC_LITERAL(217, 3195, 28), // "on_buttonEyeScanStop_clicked"
QT_MOC_LITERAL(218, 3224, 27), // "on_checkESEnableAll_clicked"
QT_MOC_LITERAL(219, 3252, 29), // "on_buttonBathtubStart_clicked"
QT_MOC_LITERAL(220, 3282, 28), // "on_buttonBathtubStop_clicked"
QT_MOC_LITERAL(221, 3311, 27), // "on_checkBPEnableAll_clicked"
QT_MOC_LITERAL(222, 3339, 40), // "listCDRChannelSelect_currentI..."
QT_MOC_LITERAL(223, 3380, 4), // "core"
QT_MOC_LITERAL(224, 3385, 38), // "listCDRDivideRatio_currentInd..."
QT_MOC_LITERAL(225, 3424, 29), // "on_checkCDRModeEnable_clicked"
QT_MOC_LITERAL(226, 3454, 43), // "listLoopBandwidthSelect_curre..."
QT_MOC_LITERAL(227, 3498, 38), // "listDataRateSelect_currentInd..."
QT_MOC_LITERAL(228, 3537, 41), // "listRateDividerSelect_current..."
QT_MOC_LITERAL(229, 3579, 39) // "listTargetLBWSelect_currentIn..."

    },
    "BertWindow\0RefreshSerialPorts\0\0"
    "CommsConnect\0port\0CommsDisconnect\0"
    "GetOptions\0InitComponents\0WorkerStop\0"
    "CommsCheck\0metaLane\0GetTemperature\0"
    "ConfigSetDefaults\0bitRate\0ConfigPG\0"
    "pattern\0ConfigCDR\0inputLane\0freqDivider\0"
    "ConfigLBW\0dataRate\0rateDependent\0"
    "rateDivider\0targetLBW\0SetLaneOn\0lane\0"
    "laneOn\0powerDownOnMute\0SetOutputSwing\0"
    "swingIndex\0SetOutputSwingB\0SetLaneInverted\0"
    "inverted\0SetDeEmphasis\0level\0prePost\0"
    "SetCrossPoint\0crossPointIndex\0SetEQBoost\0"
    "eqBoostIndex\0SetForceCDRBypass\0"
    "forceCDRBypass\0SetEDOptions\0pattern01\0"
    "invert01\0enable01\0pattern23\0invert23\0"
    "enable23\0GetLosLol\0GetEDCount\0"
    "EDErrorInject\0EyeScanStart\0type\0hStep\0"
    "vStep\0vOffset\0countRes\0EyeScanRepeat\0"
    "EyeScanCancel\0GetLMXInfo\0GetLMXVTuneLock\0"
    "SelectProfile\0indexProfile\0triggerResync\0"
    "AnyRateProfile\0D7\0D6\0D5\0D4\0D3\0D2\0D1\0"
    "D0\0ConfigureOutputs\0indexFOutOutputPower\0"
    "indexTrigOutputPower\0outputsOn\0"
    "ConfigureOutputs_Debug\0ISET\0A1\0A0\0B1\0"
    "B0\0ReadTcsFrequencyProfiles\0searchPath\0"
    "LMXEEPROMWriteFrequencyProfiles\0"
    "LMXVerifyFrequencyProfiles\0ResetDevice\0"
    "SetLMXEnable\0enabled\0SelectTriggerDivide\0"
    "index\0SetEEPROMWriteEnable\0enable\0"
    "ReadLMXLockDetect\0EEPROMReadStrings\0"
    "deviceID\0EEPROMWriteStrings\0model\0"
    "serial\0productionDate\0calibrationDate\0"
    "warrantyStart\0warrantyEnd\0synthConfigVersion\0"
    "WriteFirmware\0GetRefClockInfo\0"
    "RefClockSelectProfile\0WorkerResult\0"
    "result\0WorkerShowMessage\0message\0"
    "append\0ListSerialPorts\0ports\0GT1724Added\0"
    "GT1724*\0gt1724\0laneOffset\0LMX2594Added\0"
    "LMX2594*\0lmx2594\0PCA9557_Added\0PCA9557*\0"
    "pca9557\0M24M02Added\0M24M02*\0m24m02\0"
    "SI5340Added\0SI5340*\0si5340\0StatusConnect\0"
    "connected\0OptionsSent\0Result\0ListPopulate\0"
    "name\0items\0defaultIndex\0ListSelect\0"
    "UpdateBoolean\0value\0UpdateString\0"
    "ShowMessage\0EDLosLol\0los\0lol\0EDCount\0"
    "locked\0bits\0bitsTotal\0errors\0errorsTotal\0"
    "EyeScanProgressUpdate\0percent\0"
    "EyeScanError\0code\0EyeScanFinished\0"
    "QVector<double>\0data\0xRes\0yRes\0LMXInfo\0"
    "indexTriggerDivide\0frequency\0LMXVTuneLock\0"
    "isLocked\0LMXSettingsChanged\0LMXLockDetect\0"
    "deviceId\0EEPROMStringData\0RefClockInfo\0"
    "frequencyIn\0frequencyOut\0descriptionIn\0"
    "descriptionOut\0RefClockSettingsChanged\0"
    "uiUpdateTimerTick\0on_tabWidget_tabBarClicked\0"
    "on_tabWidget_currentChanged\0"
    "on_buttonPortListRefresh_clicked\0"
    "on_buttonConnect_clicked\0"
    "on_buttonResync_clicked\0"
    "on_buttonEEPROMDefaults_clicked\0"
    "on_buttonWriteEEPROM_clicked\0"
    "on_listEEPROMModel_currentIndexChanged\0"
    "on_buttonWriteProfilesToEEPROM_clicked\0"
    "on_buttonVerifyLMXProfiles_clicked\0"
    "on_listLMXFreq_currentIndexChanged\0"
    "on_listLMXTrigOutDivRatio_currentIndexChanged\0"
    "on_listLMXTrigOutPower_currentIndexChanged\0"
    "listRefClockProfiles_currentIndexChanged\0"
    "on_checkAnyRateOn_clicked\0checked\0"
    "on_buttonSetAnyRate_clicked\0"
    "on_buttonSetRFPower_clicked\0"
    "boolPGLaneOn_clicked\0boolPGLaneInverted_clicked\0"
    "listPGAmplitude_currentIndexChanged\0"
    "listPGAmplitudeB_currentIndexChanged\0"
    "listPGPattern_currentIndexChanged\0"
    "listPGDeemphLevel_currentIndexChanged\0"
    "listPGDeemphCursor_currentIndexChanged\0"
    "listPGCrossPoint_currentIndexChanged\0"
    "listPGCDRBypass_currentIndexChanged\0"
    "on_buttonEDStart_clicked\0"
    "on_buttonEDStop_clicked\0"
    "on_listEDResultDisplay_currentIndexChanged\0"
    "on_checkEDEnableAll_clicked\0"
    "boolEDEnable_clicked\0channel\0"
    "listEDPattern_currentIndexChanged\0"
    "boolEDPatternInvert_clicked\0"
    "listEDEQBoost_currentIndexChanged\0"
    "buttonEDInjectError_clicked\0"
    "on_buttonEyeScanStart_clicked\0"
    "on_buttonEyeScanStop_clicked\0"
    "on_checkESEnableAll_clicked\0"
    "on_buttonBathtubStart_clicked\0"
    "on_buttonBathtubStop_clicked\0"
    "on_checkBPEnableAll_clicked\0"
    "listCDRChannelSelect_currentIndexChanged\0"
    "core\0listCDRDivideRatio_currentIndexChanged\0"
    "on_checkCDRModeEnable_clicked\0"
    "listLoopBandwidthSelect_currentIndexChanged\0"
    "listDataRateSelect_currentIndexChanged\0"
    "listRateDividerSelect_currentIndexChanged\0"
    "listTargetLBWSelect_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BertWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     128,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      49,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  654,    2, 0x06 /* Public */,
       3,    1,  655,    2, 0x06 /* Public */,
       5,    0,  658,    2, 0x06 /* Public */,
       6,    0,  659,    2, 0x06 /* Public */,
       7,    0,  660,    2, 0x06 /* Public */,
       8,    0,  661,    2, 0x06 /* Public */,
       9,    1,  662,    2, 0x06 /* Public */,
      11,    1,  665,    2, 0x06 /* Public */,
      12,    2,  668,    2, 0x06 /* Public */,
      14,    3,  673,    2, 0x06 /* Public */,
      16,    3,  680,    2, 0x06 /* Public */,
      19,    4,  687,    2, 0x06 /* Public */,
      24,    3,  696,    2, 0x06 /* Public */,
      28,    2,  703,    2, 0x06 /* Public */,
      30,    2,  708,    2, 0x06 /* Public */,
      31,    2,  713,    2, 0x06 /* Public */,
      33,    3,  718,    2, 0x06 /* Public */,
      36,    2,  725,    2, 0x06 /* Public */,
      38,    2,  730,    2, 0x06 /* Public */,
      40,    3,  735,    2, 0x06 /* Public */,
      42,    7,  742,    2, 0x06 /* Public */,
      49,    1,  757,    2, 0x06 /* Public */,
      50,    2,  760,    2, 0x06 /* Public */,
      51,    1,  765,    2, 0x06 /* Public */,
      52,    6,  768,    2, 0x06 /* Public */,
      58,    1,  781,    2, 0x06 /* Public */,
      59,    1,  784,    2, 0x06 /* Public */,
      60,    0,  787,    2, 0x06 /* Public */,
      61,    0,  788,    2, 0x06 /* Public */,
      62,    2,  789,    2, 0x06 /* Public */,
      62,    1,  794,    2, 0x26 /* Public | MethodCloned */,
      65,    8,  797,    2, 0x06 /* Public */,
      74,    4,  814,    2, 0x06 /* Public */,
      74,    3,  823,    2, 0x26 /* Public | MethodCloned */,
      78,    5,  830,    2, 0x06 /* Public */,
      84,    1,  841,    2, 0x06 /* Public */,
      86,    0,  844,    2, 0x06 /* Public */,
      87,    0,  845,    2, 0x06 /* Public */,
      88,    0,  846,    2, 0x06 /* Public */,
      89,    1,  847,    2, 0x06 /* Public */,
      91,    1,  850,    2, 0x06 /* Public */,
      93,    1,  853,    2, 0x06 /* Public */,
      95,    0,  856,    2, 0x06 /* Public */,
      96,    1,  857,    2, 0x06 /* Public */,
      98,    8,  860,    2, 0x06 /* Public */,
     106,    1,  877,    2, 0x06 /* Public */,
     107,    0,  880,    2, 0x06 /* Public */,
     108,    2,  881,    2, 0x06 /* Public */,
     108,    1,  886,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
     109,    1,  889,    2, 0x08 /* Private */,
     111,    2,  892,    2, 0x08 /* Private */,
     111,    1,  897,    2, 0x28 /* Private | MethodCloned */,
     114,    1,  900,    2, 0x08 /* Private */,
     116,    2,  903,    2, 0x08 /* Private */,
     120,    2,  908,    2, 0x08 /* Private */,
     123,    2,  913,    2, 0x08 /* Private */,
     126,    2,  918,    2, 0x08 /* Private */,
     129,    2,  923,    2, 0x08 /* Private */,
     132,    1,  928,    2, 0x08 /* Private */,
     134,    0,  931,    2, 0x08 /* Private */,
     135,    2,  932,    2, 0x08 /* Private */,
     136,    4,  937,    2, 0x08 /* Private */,
     140,    3,  946,    2, 0x08 /* Private */,
     141,    3,  953,    2, 0x08 /* Private */,
     143,    3,  960,    2, 0x08 /* Private */,
     144,    2,  967,    2, 0x08 /* Private */,
     144,    1,  972,    2, 0x28 /* Private | MethodCloned */,
     145,    3,  975,    2, 0x08 /* Private */,
     148,    6,  982,    2, 0x08 /* Private */,
     154,    3,  995,    2, 0x08 /* Private */,
     156,    3, 1002,    2, 0x08 /* Private */,
     158,    5, 1009,    2, 0x08 /* Private */,
     163,    7, 1020,    2, 0x08 /* Private */,
     166,    2, 1035,    2, 0x08 /* Private */,
     168,    1, 1040,    2, 0x08 /* Private */,
     169,    2, 1043,    2, 0x08 /* Private */,
     171,    8, 1048,    2, 0x08 /* Private */,
     172,    6, 1065,    2, 0x08 /* Private */,
     177,    1, 1078,    2, 0x08 /* Private */,
     178,    0, 1081,    2, 0x08 /* Private */,
     179,    1, 1082,    2, 0x08 /* Private */,
     180,    1, 1085,    2, 0x08 /* Private */,
     181,    0, 1088,    2, 0x08 /* Private */,
     182,    0, 1089,    2, 0x08 /* Private */,
     183,    0, 1090,    2, 0x08 /* Private */,
     184,    0, 1091,    2, 0x08 /* Private */,
     185,    0, 1092,    2, 0x08 /* Private */,
     186,    1, 1093,    2, 0x08 /* Private */,
     187,    0, 1096,    2, 0x08 /* Private */,
     188,    0, 1097,    2, 0x08 /* Private */,
     189,    1, 1098,    2, 0x08 /* Private */,
     190,    1, 1101,    2, 0x08 /* Private */,
     191,    1, 1104,    2, 0x08 /* Private */,
     192,    1, 1107,    2, 0x08 /* Private */,
     193,    1, 1110,    2, 0x08 /* Private */,
     195,    0, 1113,    2, 0x08 /* Private */,
     196,    0, 1114,    2, 0x08 /* Private */,
     197,    2, 1115,    2, 0x08 /* Private */,
     198,    2, 1120,    2, 0x08 /* Private */,
     199,    2, 1125,    2, 0x08 /* Private */,
     200,    2, 1130,    2, 0x08 /* Private */,
     201,    2, 1135,    2, 0x08 /* Private */,
     202,    2, 1140,    2, 0x08 /* Private */,
     203,    2, 1145,    2, 0x08 /* Private */,
     204,    2, 1150,    2, 0x08 /* Private */,
     205,    2, 1155,    2, 0x08 /* Private */,
     206,    0, 1160,    2, 0x08 /* Private */,
     207,    0, 1161,    2, 0x08 /* Private */,
     208,    1, 1162,    2, 0x08 /* Private */,
     209,    1, 1165,    2, 0x08 /* Private */,
     210,    2, 1168,    2, 0x08 /* Private */,
     212,    2, 1173,    2, 0x08 /* Private */,
     213,    2, 1178,    2, 0x08 /* Private */,
     214,    2, 1183,    2, 0x08 /* Private */,
     215,    1, 1188,    2, 0x08 /* Private */,
     216,    0, 1191,    2, 0x08 /* Private */,
     217,    0, 1192,    2, 0x08 /* Private */,
     218,    1, 1193,    2, 0x08 /* Private */,
     219,    0, 1196,    2, 0x08 /* Private */,
     220,    0, 1197,    2, 0x08 /* Private */,
     221,    1, 1198,    2, 0x08 /* Private */,
     222,    2, 1201,    2, 0x08 /* Private */,
     224,    2, 1206,    2, 0x08 /* Private */,
     225,    1, 1211,    2, 0x08 /* Private */,
     226,    2, 1214,    2, 0x08 /* Private */,
     227,    2, 1219,    2, 0x08 /* Private */,
     228,    2, 1224,    2, 0x08 /* Private */,
     229,    2, 1229,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,   10,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,   10,   15,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   10,   17,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   20,   21,   22,   23,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,   25,   26,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   25,   29,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   25,   29,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   25,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   25,   34,   35,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   25,   37,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   25,   39,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,   25,   41,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,   10,   43,   44,   45,   46,   47,   48,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,   25,   13,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   25,   53,   54,   55,   56,   57,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   63,   64,
    QMetaType::Void, QMetaType::Int,   63,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   66,   67,   68,   69,   70,   71,   72,   73,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,   75,   76,   77,   64,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   75,   76,   77,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   79,   80,   81,   82,   83,
    QMetaType::Void, QMetaType::QString,   85,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   90,
    QMetaType::Void, QMetaType::Int,   92,
    QMetaType::Void, QMetaType::Bool,   94,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   97,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   97,   99,  100,  101,  102,  103,  104,  105,
    QMetaType::Void, QMetaType::Int,   97,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   63,   64,
    QMetaType::Void, QMetaType::Int,   63,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,  110,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,  112,  113,
    QMetaType::Void, QMetaType::QString,  112,
    QMetaType::Void, QMetaType::QStringList,  115,
    QMetaType::Void, 0x80000000 | 117, QMetaType::Int,  118,  119,
    QMetaType::Void, 0x80000000 | 121, QMetaType::Int,  122,   97,
    QMetaType::Void, 0x80000000 | 124, QMetaType::Int,  125,   97,
    QMetaType::Void, 0x80000000 | 127, QMetaType::Int,  128,   97,
    QMetaType::Void, 0x80000000 | 130, QMetaType::Int,  131,   97,
    QMetaType::Void, QMetaType::Bool,  133,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  110,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QStringList, QMetaType::Int,  137,   25,  138,  139,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,  137,   25,   92,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Bool,  137,   25,  142,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,  137,   25,  142,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,  112,  113,
    QMetaType::Void, QMetaType::QString,  112,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,   25,  146,  147,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   25,  149,  150,  151,  152,  153,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   25,   53,  155,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   25,   53,  157,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 159, QMetaType::Int, QMetaType::Int,   25,   53,  160,  161,  162,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Float,   97,   63,   76,   75,  164,   77,  165,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   97,  167,
    QMetaType::Void, QMetaType::Int,   97,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,  170,  167,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   97,   99,  100,  101,  102,  103,  104,  105,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::QString, QMetaType::QString,   97,   63,  173,  174,  175,  176,
    QMetaType::Void, QMetaType::Int,   97,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   92,
    QMetaType::Void, QMetaType::Int,   92,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   92,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   92,
    QMetaType::Void, QMetaType::Int,   92,
    QMetaType::Void, QMetaType::Int,   92,
    QMetaType::Void, QMetaType::Int,   92,
    QMetaType::Void, QMetaType::Bool,  194,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   25,  194,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   25,  194,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   25,   92,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   25,   92,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   25,   92,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   25,   92,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   25,   92,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   25,   92,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   25,   92,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   92,
    QMetaType::Void, QMetaType::Bool,  194,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,  211,  194,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  211,   92,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,  211,  194,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  211,   92,
    QMetaType::Void, QMetaType::Int,  211,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  194,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  194,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  223,   92,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  223,   92,
    QMetaType::Void, QMetaType::Bool,  194,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  223,   92,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  223,   92,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  223,   92,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  223,   92,

       0        // eod
};

void BertWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BertWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RefreshSerialPorts(); break;
        case 1: _t->CommsConnect((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->CommsDisconnect(); break;
        case 3: _t->GetOptions(); break;
        case 4: _t->InitComponents(); break;
        case 5: _t->WorkerStop(); break;
        case 6: _t->CommsCheck((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->GetTemperature((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->ConfigSetDefaults((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 9: _t->ConfigPG((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 10: _t->ConfigCDR((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->ConfigLBW((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 12: _t->SetLaneOn((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 13: _t->SetOutputSwing((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->SetOutputSwingB((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->SetLaneInverted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->SetDeEmphasis((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 17: _t->SetCrossPoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->SetEQBoost((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->SetForceCDRBypass((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 20: _t->SetEDOptions((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 21: _t->GetLosLol((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->GetEDCount((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 23: _t->EDErrorInject((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->EyeScanStart((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 25: _t->EyeScanRepeat((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->EyeScanCancel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->GetLMXInfo(); break;
        case 28: _t->GetLMXVTuneLock(); break;
        case 29: _t->SelectProfile((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 30: _t->SelectProfile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->AnyRateProfile((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8]))); break;
        case 32: _t->ConfigureOutputs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 33: _t->ConfigureOutputs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 34: _t->ConfigureOutputs_Debug((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 35: _t->ReadTcsFrequencyProfiles((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 36: _t->LMXEEPROMWriteFrequencyProfiles(); break;
        case 37: _t->LMXVerifyFrequencyProfiles(); break;
        case 38: _t->ResetDevice(); break;
        case 39: _t->SetLMXEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->SelectTriggerDivide((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->SetEEPROMWriteEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->ReadLMXLockDetect(); break;
        case 43: _t->EEPROMReadStrings((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->EEPROMWriteStrings((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8]))); break;
        case 45: _t->WriteFirmware((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->GetRefClockInfo(); break;
        case 47: _t->RefClockSelectProfile((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 48: _t->RefClockSelectProfile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->WorkerResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->WorkerShowMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 51: _t->WorkerShowMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 52: _t->ListSerialPorts((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 53: _t->GT1724Added((*reinterpret_cast< GT1724*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 54: _t->LMX2594Added((*reinterpret_cast< LMX2594*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 55: _t->PCA9557_Added((*reinterpret_cast< PCA9557*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 56: _t->M24M02Added((*reinterpret_cast< M24M02*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 57: _t->SI5340Added((*reinterpret_cast< SI5340*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 58: _t->StatusConnect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: _t->OptionsSent(); break;
        case 60: _t->Result((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 61: _t->ListPopulate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 62: _t->ListSelect((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 63: _t->UpdateBoolean((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 64: _t->UpdateString((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 65: _t->ShowMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 66: _t->ShowMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 67: _t->EDLosLol((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 68: _t->EDCount((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 69: _t->EyeScanProgressUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 70: _t->EyeScanError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 71: _t->EyeScanFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QVector<double>(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 72: _t->LMXInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 73: _t->LMXVTuneLock((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 74: _t->LMXSettingsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 75: _t->LMXLockDetect((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 76: _t->EEPROMStringData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8]))); break;
        case 77: _t->RefClockInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 78: _t->RefClockSettingsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 79: _t->uiUpdateTimerTick(); break;
        case 80: _t->on_tabWidget_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 81: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 82: _t->on_buttonPortListRefresh_clicked(); break;
        case 83: _t->on_buttonConnect_clicked(); break;
        case 84: _t->on_buttonResync_clicked(); break;
        case 85: _t->on_buttonEEPROMDefaults_clicked(); break;
        case 86: _t->on_buttonWriteEEPROM_clicked(); break;
        case 87: _t->on_listEEPROMModel_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 88: _t->on_buttonWriteProfilesToEEPROM_clicked(); break;
        case 89: _t->on_buttonVerifyLMXProfiles_clicked(); break;
        case 90: _t->on_listLMXFreq_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 91: _t->on_listLMXTrigOutDivRatio_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 92: _t->on_listLMXTrigOutPower_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 93: _t->listRefClockProfiles_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 94: _t->on_checkAnyRateOn_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 95: _t->on_buttonSetAnyRate_clicked(); break;
        case 96: _t->on_buttonSetRFPower_clicked(); break;
        case 97: _t->boolPGLaneOn_clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 98: _t->boolPGLaneInverted_clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 99: _t->listPGAmplitude_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 100: _t->listPGAmplitudeB_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 101: _t->listPGPattern_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 102: _t->listPGDeemphLevel_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 103: _t->listPGDeemphCursor_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 104: _t->listPGCrossPoint_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 105: _t->listPGCDRBypass_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 106: _t->on_buttonEDStart_clicked(); break;
        case 107: _t->on_buttonEDStop_clicked(); break;
        case 108: _t->on_listEDResultDisplay_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 109: _t->on_checkEDEnableAll_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 110: _t->boolEDEnable_clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 111: _t->listEDPattern_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 112: _t->boolEDPatternInvert_clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 113: _t->listEDEQBoost_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 114: _t->buttonEDInjectError_clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 115: _t->on_buttonEyeScanStart_clicked(); break;
        case 116: _t->on_buttonEyeScanStop_clicked(); break;
        case 117: _t->on_checkESEnableAll_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 118: _t->on_buttonBathtubStart_clicked(); break;
        case 119: _t->on_buttonBathtubStop_clicked(); break;
        case 120: _t->on_checkBPEnableAll_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 121: _t->listCDRChannelSelect_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 122: _t->listCDRDivideRatio_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 123: _t->on_checkCDRModeEnable_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 124: _t->listLoopBandwidthSelect_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 125: _t->listDataRateSelect_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 126: _t->listRateDividerSelect_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 127: _t->listTargetLBWSelect_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GT1724* >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LMX2594* >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PCA9557* >(); break;
            }
            break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< M24M02* >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SI5340* >(); break;
            }
            break;
        case 71:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BertWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::RefreshSerialPorts)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::CommsConnect)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::CommsDisconnect)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::GetOptions)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::InitComponents)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::WorkerStop)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::CommsCheck)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::GetTemperature)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::ConfigSetDefaults)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::ConfigPG)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::ConfigCDR)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::ConfigLBW)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::SetLaneOn)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::SetOutputSwing)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::SetOutputSwingB)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::SetLaneInverted)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::SetDeEmphasis)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::SetCrossPoint)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::SetEQBoost)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::SetForceCDRBypass)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , int , bool , bool , int , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::SetEDOptions)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::GetLosLol)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::GetEDCount)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::EDErrorInject)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , int , int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::EyeScanStart)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::EyeScanRepeat)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::EyeScanCancel)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::GetLMXInfo)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::GetLMXVTuneLock)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::SelectProfile)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , int , int , int , int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::AnyRateProfile)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , int , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::ConfigureOutputs)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::ConfigureOutputs_Debug)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::ReadTcsFrequencyProfiles)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::LMXEEPROMWriteFrequencyProfiles)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::LMXVerifyFrequencyProfiles)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::ResetDevice)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::SetLMXEnable)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::SelectTriggerDivide)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::SetEEPROMWriteEnable)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::ReadLMXLockDetect)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::EEPROMReadStrings)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , QString , QString , QString , QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::EEPROMWriteStrings)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::WriteFirmware)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::GetRefClockInfo)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (BertWindow::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BertWindow::RefClockSelectProfile)) {
                *result = 47;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BertWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_BertWindow.data,
    qt_meta_data_BertWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BertWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BertWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BertWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int BertWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 128)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 128;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 128)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 128;
    }
    return _id;
}

// SIGNAL 0
void BertWindow::RefreshSerialPorts()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BertWindow::CommsConnect(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BertWindow::CommsDisconnect()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void BertWindow::GetOptions()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void BertWindow::InitComponents()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void BertWindow::WorkerStop()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void BertWindow::CommsCheck(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void BertWindow::GetTemperature(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void BertWindow::ConfigSetDefaults(int _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void BertWindow::ConfigPG(int _t1, int _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void BertWindow::ConfigCDR(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void BertWindow::ConfigLBW(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void BertWindow::SetLaneOn(int _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void BertWindow::SetOutputSwing(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void BertWindow::SetOutputSwingB(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void BertWindow::SetLaneInverted(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void BertWindow::SetDeEmphasis(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void BertWindow::SetCrossPoint(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void BertWindow::SetEQBoost(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void BertWindow::SetForceCDRBypass(int _t1, int _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void BertWindow::SetEDOptions(int _t1, int _t2, bool _t3, bool _t4, int _t5, bool _t6, bool _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void BertWindow::GetLosLol(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void BertWindow::GetEDCount(int _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void BertWindow::EDErrorInject(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void BertWindow::EyeScanStart(int _t1, int _t2, int _t3, int _t4, int _t5, int _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void BertWindow::EyeScanRepeat(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void BertWindow::EyeScanCancel(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void BertWindow::GetLMXInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void BertWindow::GetLMXVTuneLock()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void BertWindow::SelectProfile(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 31
void BertWindow::AnyRateProfile(int _t1, int _t2, int _t3, int _t4, int _t5, int _t6, int _t7, int _t8)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void BertWindow::ConfigureOutputs(int _t1, int _t2, bool _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 34
void BertWindow::ConfigureOutputs_Debug(int _t1, int _t2, int _t3, int _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void BertWindow::ReadTcsFrequencyProfiles(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void BertWindow::LMXEEPROMWriteFrequencyProfiles()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void BertWindow::LMXVerifyFrequencyProfiles()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void BertWindow::ResetDevice()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}

// SIGNAL 39
void BertWindow::SetLMXEnable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void BertWindow::SelectTriggerDivide(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void BertWindow::SetEEPROMWriteEnable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void BertWindow::ReadLMXLockDetect()
{
    QMetaObject::activate(this, &staticMetaObject, 42, nullptr);
}

// SIGNAL 43
void BertWindow::EEPROMReadStrings(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void BertWindow::EEPROMWriteStrings(int _t1, QString _t2, QString _t3, QString _t4, QString _t5, QString _t6, QString _t7, QString _t8)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void BertWindow::WriteFirmware(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void BertWindow::GetRefClockInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 46, nullptr);
}

// SIGNAL 47
void BertWindow::RefClockSelectProfile(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
