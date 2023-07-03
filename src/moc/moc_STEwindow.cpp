/****************************************************************************
** Meta object code from reading C++ file 'STEwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../STEwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'STEwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_STEwindow_t {
    QByteArrayData data[73];
    char stringdata0[1273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_STEwindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_STEwindow_t qt_meta_stringdata_STEwindow = {
    {
QT_MOC_LITERAL(0, 0, 9), // "STEwindow"
QT_MOC_LITERAL(1, 10, 9), // "simOpened"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 10), // "xrayOpened"
QT_MOC_LITERAL(4, 32, 13), // "neutronOpened"
QT_MOC_LITERAL(5, 46, 17), // "elecDensityOpened"
QT_MOC_LITERAL(6, 64, 17), // "neutDensityOpened"
QT_MOC_LITERAL(7, 82, 16), // "componentsOpened"
QT_MOC_LITERAL(8, 99, 7), // "openSim"
QT_MOC_LITERAL(9, 107, 10), // "displaySim"
QT_MOC_LITERAL(10, 118, 14), // "displayFourier"
QT_MOC_LITERAL(11, 133, 18), // "setFourierDefaults"
QT_MOC_LITERAL(12, 152, 9), // "deleteSim"
QT_MOC_LITERAL(13, 162, 18), // "openTrajectoryFile"
QT_MOC_LITERAL(14, 181, 20), // "cancelTrajectoryOpen"
QT_MOC_LITERAL(15, 202, 21), // "TrajectoryInfoWindow*"
QT_MOC_LITERAL(16, 224, 18), // "readTrajectoryFile"
QT_MOC_LITERAL(17, 243, 18), // "readGromacsXTCFile"
QT_MOC_LITERAL(18, 262, 14), // "TrajectoryInfo"
QT_MOC_LITERAL(19, 277, 8), // "openXray"
QT_MOC_LITERAL(20, 286, 11), // "displayXray"
QT_MOC_LITERAL(21, 298, 11), // "openNeutron"
QT_MOC_LITERAL(22, 310, 14), // "displayNeutron"
QT_MOC_LITERAL(23, 325, 15), // "openElecDensity"
QT_MOC_LITERAL(24, 341, 18), // "displayElecDensity"
QT_MOC_LITERAL(25, 360, 15), // "openNeutDensity"
QT_MOC_LITERAL(26, 376, 18), // "displayNeutDensity"
QT_MOC_LITERAL(27, 395, 14), // "openComponents"
QT_MOC_LITERAL(28, 410, 17), // "displayComponents"
QT_MOC_LITERAL(29, 428, 14), // "displayVolumes"
QT_MOC_LITERAL(30, 443, 20), // "replotXrayFormFactor"
QT_MOC_LITERAL(31, 464, 23), // "replotNeutronFormFactor"
QT_MOC_LITERAL(32, 488, 13), // "scaleXrayUser"
QT_MOC_LITERAL(33, 502, 16), // "scaleNeutronUser"
QT_MOC_LITERAL(34, 519, 20), // "calcComponentVolumes"
QT_MOC_LITERAL(35, 540, 29), // "writeElementalNumberDensities"
QT_MOC_LITERAL(36, 570, 28), // "writeParticleNumberDensities"
QT_MOC_LITERAL(37, 599, 29), // "writeComponentNumberDensities"
QT_MOC_LITERAL(38, 629, 31), // "writeElementalElectronDensities"
QT_MOC_LITERAL(39, 661, 31), // "writeComponentElectronDensities"
QT_MOC_LITERAL(40, 693, 30), // "writeElementalNeutronDensities"
QT_MOC_LITERAL(41, 724, 30), // "writeComponentNeutronDensities"
QT_MOC_LITERAL(42, 755, 16), // "writeXrayFactors"
QT_MOC_LITERAL(43, 772, 19), // "writeNeutronFactors"
QT_MOC_LITERAL(44, 792, 18), // "writeVolumetricFit"
QT_MOC_LITERAL(45, 811, 15), // "writeEverything"
QT_MOC_LITERAL(46, 827, 17), // "deleteXraySample1"
QT_MOC_LITERAL(47, 845, 17), // "deleteXraySample2"
QT_MOC_LITERAL(48, 863, 17), // "deleteXraySample3"
QT_MOC_LITERAL(49, 881, 17), // "deleteXraySample4"
QT_MOC_LITERAL(50, 899, 17), // "deleteXraySample5"
QT_MOC_LITERAL(51, 917, 20), // "deleteNeutronSample1"
QT_MOC_LITERAL(52, 938, 20), // "deleteNeutronSample2"
QT_MOC_LITERAL(53, 959, 20), // "deleteNeutronSample3"
QT_MOC_LITERAL(54, 980, 20), // "deleteNeutronSample4"
QT_MOC_LITERAL(55, 1001, 20), // "deleteNeutronSample5"
QT_MOC_LITERAL(56, 1022, 17), // "deleteElecDensity"
QT_MOC_LITERAL(57, 1040, 17), // "deleteNeutDensity"
QT_MOC_LITERAL(58, 1058, 16), // "deleteComponents"
QT_MOC_LITERAL(59, 1075, 14), // "showEDensities"
QT_MOC_LITERAL(60, 1090, 8), // "itemInfo"
QT_MOC_LITERAL(61, 1099, 2), // "on"
QT_MOC_LITERAL(62, 1102, 22), // "showNeutronSLDensities"
QT_MOC_LITERAL(63, 1125, 10), // "showXRayFF"
QT_MOC_LITERAL(64, 1136, 13), // "showNeutronFF"
QT_MOC_LITERAL(65, 1150, 16), // "showNumDensities"
QT_MOC_LITERAL(66, 1167, 12), // "showVolProbs"
QT_MOC_LITERAL(67, 1180, 15), // "setZoomToBounds"
QT_MOC_LITERAL(68, 1196, 14), // "togglePlotArea"
QT_MOC_LITERAL(69, 1211, 8), // "closeTab"
QT_MOC_LITERAL(70, 1220, 26), // "displayScatteringDensities"
QT_MOC_LITERAL(71, 1247, 14), // "setSimOpenTrue"
QT_MOC_LITERAL(72, 1262, 10) // "testButton"

    },
    "STEwindow\0simOpened\0\0xrayOpened\0"
    "neutronOpened\0elecDensityOpened\0"
    "neutDensityOpened\0componentsOpened\0"
    "openSim\0displaySim\0displayFourier\0"
    "setFourierDefaults\0deleteSim\0"
    "openTrajectoryFile\0cancelTrajectoryOpen\0"
    "TrajectoryInfoWindow*\0readTrajectoryFile\0"
    "readGromacsXTCFile\0TrajectoryInfo\0"
    "openXray\0displayXray\0openNeutron\0"
    "displayNeutron\0openElecDensity\0"
    "displayElecDensity\0openNeutDensity\0"
    "displayNeutDensity\0openComponents\0"
    "displayComponents\0displayVolumes\0"
    "replotXrayFormFactor\0replotNeutronFormFactor\0"
    "scaleXrayUser\0scaleNeutronUser\0"
    "calcComponentVolumes\0writeElementalNumberDensities\0"
    "writeParticleNumberDensities\0"
    "writeComponentNumberDensities\0"
    "writeElementalElectronDensities\0"
    "writeComponentElectronDensities\0"
    "writeElementalNeutronDensities\0"
    "writeComponentNeutronDensities\0"
    "writeXrayFactors\0writeNeutronFactors\0"
    "writeVolumetricFit\0writeEverything\0"
    "deleteXraySample1\0deleteXraySample2\0"
    "deleteXraySample3\0deleteXraySample4\0"
    "deleteXraySample5\0deleteNeutronSample1\0"
    "deleteNeutronSample2\0deleteNeutronSample3\0"
    "deleteNeutronSample4\0deleteNeutronSample5\0"
    "deleteElecDensity\0deleteNeutDensity\0"
    "deleteComponents\0showEDensities\0"
    "itemInfo\0on\0showNeutronSLDensities\0"
    "showXRayFF\0showNeutronFF\0showNumDensities\0"
    "showVolProbs\0setZoomToBounds\0"
    "togglePlotArea\0closeTab\0"
    "displayScatteringDensities\0setSimOpenTrue\0"
    "testButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_STEwindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      67,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  349,    2, 0x06 /* Public */,
       3,    1,  350,    2, 0x06 /* Public */,
       4,    1,  353,    2, 0x06 /* Public */,
       5,    0,  356,    2, 0x06 /* Public */,
       6,    0,  357,    2, 0x06 /* Public */,
       7,    0,  358,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  359,    2, 0x0a /* Public */,
       9,    0,  360,    2, 0x0a /* Public */,
      10,    0,  361,    2, 0x0a /* Public */,
      11,    0,  362,    2, 0x0a /* Public */,
      12,    0,  363,    2, 0x0a /* Public */,
      13,    0,  364,    2, 0x0a /* Public */,
      14,    1,  365,    2, 0x0a /* Public */,
      16,    1,  368,    2, 0x0a /* Public */,
      17,    1,  371,    2, 0x0a /* Public */,
      19,    0,  374,    2, 0x0a /* Public */,
      20,    1,  375,    2, 0x0a /* Public */,
      21,    0,  378,    2, 0x0a /* Public */,
      22,    1,  379,    2, 0x0a /* Public */,
      23,    0,  382,    2, 0x0a /* Public */,
      24,    0,  383,    2, 0x0a /* Public */,
      25,    0,  384,    2, 0x0a /* Public */,
      26,    0,  385,    2, 0x0a /* Public */,
      27,    0,  386,    2, 0x0a /* Public */,
      28,    0,  387,    2, 0x0a /* Public */,
      29,    0,  388,    2, 0x0a /* Public */,
      30,    0,  389,    2, 0x0a /* Public */,
      31,    0,  390,    2, 0x0a /* Public */,
      32,    0,  391,    2, 0x0a /* Public */,
      33,    0,  392,    2, 0x0a /* Public */,
      34,    0,  393,    2, 0x0a /* Public */,
      35,    0,  394,    2, 0x0a /* Public */,
      36,    0,  395,    2, 0x0a /* Public */,
      37,    0,  396,    2, 0x0a /* Public */,
      38,    0,  397,    2, 0x0a /* Public */,
      39,    0,  398,    2, 0x0a /* Public */,
      40,    0,  399,    2, 0x0a /* Public */,
      41,    0,  400,    2, 0x0a /* Public */,
      42,    0,  401,    2, 0x0a /* Public */,
      43,    0,  402,    2, 0x0a /* Public */,
      44,    0,  403,    2, 0x0a /* Public */,
      45,    0,  404,    2, 0x0a /* Public */,
      46,    0,  405,    2, 0x0a /* Public */,
      47,    0,  406,    2, 0x0a /* Public */,
      48,    0,  407,    2, 0x0a /* Public */,
      49,    0,  408,    2, 0x0a /* Public */,
      50,    0,  409,    2, 0x0a /* Public */,
      51,    0,  410,    2, 0x0a /* Public */,
      52,    0,  411,    2, 0x0a /* Public */,
      53,    0,  412,    2, 0x0a /* Public */,
      54,    0,  413,    2, 0x0a /* Public */,
      55,    0,  414,    2, 0x0a /* Public */,
      56,    0,  415,    2, 0x0a /* Public */,
      57,    0,  416,    2, 0x0a /* Public */,
      58,    0,  417,    2, 0x0a /* Public */,
      59,    3,  418,    2, 0x0a /* Public */,
      62,    3,  425,    2, 0x0a /* Public */,
      63,    3,  432,    2, 0x0a /* Public */,
      64,    3,  439,    2, 0x0a /* Public */,
      65,    3,  446,    2, 0x0a /* Public */,
      66,    3,  453,    2, 0x0a /* Public */,
      67,    0,  460,    2, 0x0a /* Public */,
      68,    0,  461,    2, 0x0a /* Public */,
      69,    1,  462,    2, 0x0a /* Public */,
      70,    0,  465,    2, 0x0a /* Public */,
      71,    0,  466,    2, 0x0a /* Public */,
      72,    0,  467,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool, QMetaType::Int,   60,   61,    2,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool, QMetaType::Int,   60,   61,    2,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool, QMetaType::Int,   60,   61,    2,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool, QMetaType::Int,   60,   61,    2,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool, QMetaType::Int,   60,   61,    2,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool, QMetaType::Int,   60,   61,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void STEwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<STEwindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->simOpened(); break;
        case 1: _t->xrayOpened((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->neutronOpened((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->elecDensityOpened(); break;
        case 4: _t->neutDensityOpened(); break;
        case 5: _t->componentsOpened(); break;
        case 6: _t->openSim(); break;
        case 7: _t->displaySim(); break;
        case 8: _t->displayFourier(); break;
        case 9: _t->setFourierDefaults(); break;
        case 10: _t->deleteSim(); break;
        case 11: _t->openTrajectoryFile(); break;
        case 12: _t->cancelTrajectoryOpen((*reinterpret_cast< TrajectoryInfoWindow*(*)>(_a[1]))); break;
        case 13: _t->readTrajectoryFile((*reinterpret_cast< TrajectoryInfoWindow*(*)>(_a[1]))); break;
        case 14: _t->readGromacsXTCFile((*reinterpret_cast< TrajectoryInfo(*)>(_a[1]))); break;
        case 15: _t->openXray(); break;
        case 16: _t->displayXray((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 17: _t->openNeutron(); break;
        case 18: _t->displayNeutron((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 19: _t->openElecDensity(); break;
        case 20: _t->displayElecDensity(); break;
        case 21: _t->openNeutDensity(); break;
        case 22: _t->displayNeutDensity(); break;
        case 23: _t->openComponents(); break;
        case 24: _t->displayComponents(); break;
        case 25: _t->displayVolumes(); break;
        case 26: _t->replotXrayFormFactor(); break;
        case 27: _t->replotNeutronFormFactor(); break;
        case 28: _t->scaleXrayUser(); break;
        case 29: _t->scaleNeutronUser(); break;
        case 30: _t->calcComponentVolumes(); break;
        case 31: _t->writeElementalNumberDensities(); break;
        case 32: _t->writeParticleNumberDensities(); break;
        case 33: _t->writeComponentNumberDensities(); break;
        case 34: _t->writeElementalElectronDensities(); break;
        case 35: _t->writeComponentElectronDensities(); break;
        case 36: _t->writeElementalNeutronDensities(); break;
        case 37: _t->writeComponentNeutronDensities(); break;
        case 38: _t->writeXrayFactors(); break;
        case 39: _t->writeNeutronFactors(); break;
        case 40: _t->writeVolumetricFit(); break;
        case 41: _t->writeEverything(); break;
        case 42: _t->deleteXraySample1(); break;
        case 43: _t->deleteXraySample2(); break;
        case 44: _t->deleteXraySample3(); break;
        case 45: _t->deleteXraySample4(); break;
        case 46: _t->deleteXraySample5(); break;
        case 47: _t->deleteNeutronSample1(); break;
        case 48: _t->deleteNeutronSample2(); break;
        case 49: _t->deleteNeutronSample3(); break;
        case 50: _t->deleteNeutronSample4(); break;
        case 51: _t->deleteNeutronSample5(); break;
        case 52: _t->deleteElecDensity(); break;
        case 53: _t->deleteNeutDensity(); break;
        case 54: _t->deleteComponents(); break;
        case 55: _t->showEDensities((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 56: _t->showNeutronSLDensities((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 57: _t->showXRayFF((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 58: _t->showNeutronFF((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 59: _t->showNumDensities((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 60: _t->showVolProbs((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 61: _t->setZoomToBounds(); break;
        case 62: _t->togglePlotArea(); break;
        case 63: _t->closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 64: _t->displayScatteringDensities(); break;
        case 65: _t->setSimOpenTrue(); break;
        case 66: _t->testButton(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TrajectoryInfoWindow* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TrajectoryInfoWindow* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (STEwindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&STEwindow::simOpened)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (STEwindow::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&STEwindow::xrayOpened)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (STEwindow::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&STEwindow::neutronOpened)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (STEwindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&STEwindow::elecDensityOpened)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (STEwindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&STEwindow::neutDensityOpened)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (STEwindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&STEwindow::componentsOpened)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject STEwindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_STEwindow.data,
    qt_meta_data_STEwindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *STEwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *STEwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_STEwindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int STEwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 67)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 67;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 67)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 67;
    }
    return _id;
}

// SIGNAL 0
void STEwindow::simOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void STEwindow::xrayOpened(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void STEwindow::neutronOpened(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void STEwindow::elecDensityOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void STEwindow::neutDensityOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void STEwindow::componentsOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
