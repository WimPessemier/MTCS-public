///////////////////////////////////////////////////////////////////////////////
// SlalibServices.h

#pragma once

#include "TcServices.h"

const ULONG DrvID_Slalib = 0x3F000000;
#define SRVNAME_SLALIB "Slalib"

///<AutoGeneratedContent id="ClassIDs">
const CTCID CID_SlalibCSlaPointing = {0x32fcd01e,0xf2d2,0x43e6,{0xba,0xa2,0xb5,0xf1,0xf1,0x9a,0x68,0x48}};
///</AutoGeneratedContent>

///<AutoGeneratedContent id="ParameterIDs">
const PTCID PID_SlaPointingParameter = 0x00000001;
///</AutoGeneratedContent>

///<AutoGeneratedContent id="DataTypes">
#if !defined(_TC_TYPE_06ABB4F3_7DD3_4B1A_B039_ECBD677C4D84_INCLUDED_)
#define _TC_TYPE_06ABB4F3_7DD3_4B1A_B039_ECBD677C4D84_INCLUDED_
typedef struct _TmcTarget
{
	double rc;
	double dc;
	double pr;
	double pd;
	double px;
	double rv;
} TmcTarget, *PTmcTarget;
#endif // !defined(_TC_TYPE_06ABB4F3_7DD3_4B1A_B039_ECBD677C4D84_INCLUDED_)

#if !defined(_TC_TYPE_C02622A6_A90E_4D76_9B41_D873A233BF68_INCLUDED_)
#define _TC_TYPE_C02622A6_A90E_4D76_9B41_D873A233BF68_INCLUDED_
typedef struct _TmcLocation
{
	float xp;
	float yp;
	float dx;
	float dy;
	double elong;
	double phi;
	float hm;
	float tk;
	float phpa;
	float rh;
	float wlfq;
	float tlr;
} TmcLocation, *PTmcLocation;
#endif // !defined(_TC_TYPE_C02622A6_A90E_4D76_9B41_D873A233BF68_INCLUDED_)

#if !defined(_TC_TYPE_3F973A67_FE11_4F0E_AEAE_4A67C1B51A49_INCLUDED_)
#define _TC_TYPE_3F973A67_FE11_4F0E_AEAE_4A67C1B51A49_INCLUDED_
typedef struct _TmcAzEl
{
	double az;
	double el;
} TmcAzEl, *PTmcAzEl;
#endif // !defined(_TC_TYPE_3F973A67_FE11_4F0E_AEAE_4A67C1B51A49_INCLUDED_)

#if !defined(_TC_TYPE_54A037D3_9535_4FD1_9BE8_7D0C3149D38A_INCLUDED_)
#define _TC_TYPE_54A037D3_9535_4FD1_9BE8_7D0C3149D38A_INCLUDED_
typedef struct _TmcAzElFull
{
	double az;
	double azd;
	double azdd;
	double el;
	double eld;
	double eldd;
	double pa;
	double pad;
	double padd;
} TmcAzElFull, *PTmcAzElFull;
#endif // !defined(_TC_TYPE_54A037D3_9535_4FD1_9BE8_7D0C3149D38A_INCLUDED_)

#if !defined(_TC_TYPE_265D8001_F366_43E5_8220_61DD4150DBED_INCLUDED_)
#define _TC_TYPE_265D8001_F366_43E5_8220_61DD4150DBED_INCLUDED_
typedef struct _TmcRaDec
{
	double ra;
	double dec;
} TmcRaDec, *PTmcRaDec;
#endif // !defined(_TC_TYPE_265D8001_F366_43E5_8220_61DD4150DBED_INCLUDED_)

#if !defined(_TC_TYPE_7D7B0894_41AA_4C1A_8C9B_0E65D364568E_INCLUDED_)
#define _TC_TYPE_7D7B0894_41AA_4C1A_8C9B_0E65D364568E_INCLUDED_
typedef struct _TmcObserved
{
	double aob;
	double zob;
	double hob;
	double dob;
	double rob;
} TmcObserved, *PTmcObserved;
#endif // !defined(_TC_TYPE_7D7B0894_41AA_4C1A_8C9B_0E65D364568E_INCLUDED_)

#if !defined(_TC_TYPE_B8FB59A2_CB8C_4A8C_9614_DA950A58EDCF_INCLUDED_)
#define _TC_TYPE_B8FB59A2_CB8C_4A8C_9614_DA950A58EDCF_INCLUDED_
typedef struct _TmcTrue
{
	double elong;
	double phi;
	double daz;
} TmcTrue, *PTmcTrue;
#endif // !defined(_TC_TYPE_B8FB59A2_CB8C_4A8C_9614_DA950A58EDCF_INCLUDED_)

#if !defined(_TC_TYPE_3C73144D_8786_4CC3_8A96_15482207D5C6_INCLUDED_)
#define _TC_TYPE_3C73144D_8786_4CC3_8A96_15482207D5C6_INCLUDED_
typedef struct _TmcProcessedTarget
{
	TmcTarget given;
	TmcRaDec apparent;
	TmcAzElFull quick;
	TmcObserved observed;
	TmcAzElFull observedFull;
	bool isValid;
	bool isTooLow;
	unsigned char reserved1[6];
} TmcProcessedTarget, *PTmcProcessedTarget;
#endif // !defined(_TC_TYPE_3C73144D_8786_4CC3_8A96_15482207D5C6_INCLUDED_)

#if !defined(_TC_TYPE_62EE73BA_70FD_40B9_93FE_3DA9D4BB4C03_INCLUDED_)
#define _TC_TYPE_62EE73BA_70FD_40B9_93FE_3DA9D4BB4C03_INCLUDED_
typedef struct _TmcProcessedFeedback
{
	TmcRaDec apparent;
	TmcRaDec mean;
	bool isValid;
	bool isTooLow;
	unsigned char reserved1[6];
} TmcProcessedFeedback, *PTmcProcessedFeedback;
#endif // !defined(_TC_TYPE_62EE73BA_70FD_40B9_93FE_3DA9D4BB4C03_INCLUDED_)

#if !defined(_TC_TYPE_C2702E2A_3FE4_4238_8970_48CB963A8C03_INCLUDED_)
#define _TC_TYPE_C2702E2A_3FE4_4238_8970_48CB963A8C03_INCLUDED_
typedef struct _TmcDateTime
{
	LONG years;
	LONG months;
	LONG days;
	LONG hours;
	LONG minutes;
	LONG seconds;
	LONG microseconds;
	unsigned char reserved1[4];
	double fractionOfDay;
} TmcDateTime, *PTmcDateTime;
#endif // !defined(_TC_TYPE_C2702E2A_3FE4_4238_8970_48CB963A8C03_INCLUDED_)

#if !defined(_TC_TYPE_A09C7C15_A55B_4E57_8048_FFD0D9FEC7C2_INCLUDED_)
#define _TC_TYPE_A09C7C15_A55B_4E57_8048_FFD0D9FEC7C2_INCLUDED_
typedef struct _TmcUnixTime
{
	LONGLONG sec;
	LONGLONG usec;
} TmcUnixTime, *PTmcUnixTime;
#endif // !defined(_TC_TYPE_A09C7C15_A55B_4E57_8048_FFD0D9FEC7C2_INCLUDED_)

#if !defined(_TC_TYPE_C57F244C_5AAB_4737_9AFE_7AF51E8A94E9_INCLUDED_)
#define _TC_TYPE_C57F244C_5AAB_4737_9AFE_7AF51E8A94E9_INCLUDED_
enum TmcTimingMode : SHORT {
	LOCAL_CLOCK = 0,
	PTP_IEEE_1588 = 1
};
#endif // !defined(_TC_TYPE_C57F244C_5AAB_4737_9AFE_7AF51E8A94E9_INCLUDED_)

#if !defined(_TC_TYPE_F1B87037_4571_4C5A_B91E_A0B0FB569739_INCLUDED_)
#define _TC_TYPE_F1B87037_4571_4C5A_B91E_A0B0FB569739_INCLUDED_
typedef struct _TmcUtcTime
{
	LONGLONG dcTime;
	TmcTimingMode mode;
	unsigned char reserved1[6];
	TmcUnixTime unixTime;
	double mjd;
	TmcDateTime dateTime;
} TmcUtcTime, *PTmcUtcTime;
#endif // !defined(_TC_TYPE_F1B87037_4571_4C5A_B91E_A0B0FB569739_INCLUDED_)

#if !defined(_TC_TYPE_AE4D2CB0_EFCA_459D_9BA5_718DDD4F237D_INCLUDED_)
#define _TC_TYPE_AE4D2CB0_EFCA_459D_9BA5_718DDD4F237D_INCLUDED_
typedef struct _TmcUt1Time
{
	double mjd;
} TmcUt1Time, *PTmcUt1Time;
#endif // !defined(_TC_TYPE_AE4D2CB0_EFCA_459D_9BA5_718DDD4F237D_INCLUDED_)

#if !defined(_TC_TYPE_13375AAD_06C7_43A4_8083_CC02C624402D_INCLUDED_)
#define _TC_TYPE_13375AAD_06C7_43A4_8083_CC02C624402D_INCLUDED_
enum TmcAxesErrors : SHORT {
	AXES_NO_ERROR = 0,
	AXES_OBJECT_RC_OUT_OF_RANGE = 1,
	AXES_OBJECT_DC_OUT_OF_RANGE = 2,
	AXES_OBJECT_PR_OUT_OF_RANGE = 3,
	AXES_OBJECT_PD_OUT_OF_RANGE = 4,
	AXES_OBJECT_PX_OUT_OF_RANGE = 5,
	AXES_EQ_OUT_OF_RANGE = 6,
	AXES_LOCATION_XP_OUT_OF_RANGE = 7,
	AXES_LOCATION_YP_OUT_OF_RANGE = 8,
	AXES_LOCATION_DX_OUT_OF_RANGE = 9,
	AXES_LOCATION_DY_OUT_OF_RANGE = 10,
	AXES_LOCATION_ELONG_OUT_OF_RANGE = 11,
	AXES_LOCATION_PHI_OUT_OF_RANGE = 12,
	AXES_LOCATION_HM_OUT_OF_RANGE = 13,
	AXES_LOCATION_TK_OUT_OF_RANGE = 14,
	AXES_LOCATION_PHPA_OUT_OF_RANGE = 15,
	AXES_LOCATION_RH_OUT_OF_RANGE = 16,
	AXES_LOCATION_WLFQ_OUT_OF_RANGE = 17,
	AXES_LOCATION_TLR_OUT_OF_RANGE = 18,
	AXES_FEEDBACK_AZ_OUT_OF_RANGE = 19,
	AXES_FEEDBACK_EL_OUT_OF_RANGE = 20
};
#endif // !defined(_TC_TYPE_13375AAD_06C7_43A4_8083_CC02C624402D_INCLUDED_)

#if !defined(_TC_TYPE_E4A2F7D4_0FC5_4D4F_9357_F4BF73A2796C_INCLUDED_)
#define _TC_TYPE_E4A2F7D4_0FC5_4D4F_9357_F4BF73A2796C_INCLUDED_
enum TmcTimingErrors : SHORT {
	TIMING_NO_ERROR = 0,
	TIMING_DUT_OUT_OF_RANGE = 1,
	TIMING_GETCURDCTIME_FAILED = 2
};
#endif // !defined(_TC_TYPE_E4A2F7D4_0FC5_4D4F_9357_F4BF73A2796C_INCLUDED_)

#if !defined(_TC_TYPE_11CD1FB7_7412_4910_8845_C44039457207_INCLUDED_)
#define _TC_TYPE_11CD1FB7_7412_4910_8845_C44039457207_INCLUDED_
typedef struct _TmcFromIoEcatMaster
{
	LONGLONG dcToTcTimeOffset;
	LONGLONG dcToExtTimeOffset;
} TmcFromIoEcatMaster, *PTmcFromIoEcatMaster;
#endif // !defined(_TC_TYPE_11CD1FB7_7412_4910_8845_C44039457207_INCLUDED_)

#if !defined(_TC_TYPE_169C69E7_FC0E_48DA_B583_5C9F19942FE7_INCLUDED_)
#define _TC_TYPE_169C69E7_FC0E_48DA_B583_5C9F19942FE7_INCLUDED_
typedef struct _TmcFromIoEL6688
{
	ULONGLONG internalTimestamp;
	ULONGLONG externalTimestamp;
	bool notConnected;
	bool updateToggle;
	unsigned char reserved1[6];
} TmcFromIoEL6688, *PTmcFromIoEL6688;
#endif // !defined(_TC_TYPE_169C69E7_FC0E_48DA_B583_5C9F19942FE7_INCLUDED_)

#if !defined(_TC_TYPE_0BC4746A_E8E0_4416_AB33_0757C289BFCA_INCLUDED_)
#define _TC_TYPE_0BC4746A_E8E0_4416_AB33_0757C289BFCA_INCLUDED_
typedef struct _TmcFromIo
{
	TmcFromIoEL6688 fromEL6688;
	TmcFromIoEcatMaster fromEcatMaster;
} TmcFromIo, *PTmcFromIo;
#endif // !defined(_TC_TYPE_0BC4746A_E8E0_4416_AB33_0757C289BFCA_INCLUDED_)

#if !defined(_TC_TYPE_570F9EB3_30CD_43DE_AFFC_0C5EA1F1CCAA_INCLUDED_)
#define _TC_TYPE_570F9EB3_30CD_43DE_AFFC_0C5EA1F1CCAA_INCLUDED_
typedef struct _TmcFromPlcAxes
{
	TmcTarget object;
	double epoch;
	TmcLocation location;
	TmcAzEl feedback;
} TmcFromPlcAxes, *PTmcFromPlcAxes;
#endif // !defined(_TC_TYPE_570F9EB3_30CD_43DE_AFFC_0C5EA1F1CCAA_INCLUDED_)

#if !defined(_TC_TYPE_B33C0494_9BF4_4F5E_831E_E4F25537B085_INCLUDED_)
#define _TC_TYPE_B33C0494_9BF4_4F5E_831E_E4F25537B085_INCLUDED_
typedef struct _TmcFromPlcTiming
{
	double dut;
	LONG leapSeconds;
	bool alwaysUseLocalClock;
	unsigned char reserved1[3];
} TmcFromPlcTiming, *PTmcFromPlcTiming;
#endif // !defined(_TC_TYPE_B33C0494_9BF4_4F5E_831E_E4F25537B085_INCLUDED_)

#if !defined(_TC_TYPE_D34EBA03_0E44_442C_9C6F_E74E7B748884_INCLUDED_)
#define _TC_TYPE_D34EBA03_0E44_442C_9C6F_E74E7B748884_INCLUDED_
typedef struct _TmcFromPlc
{
	TmcFromPlcAxes fromAxes;
	TmcFromPlcTiming fromTiming;
} TmcFromPlc, *PTmcFromPlc;
#endif // !defined(_TC_TYPE_D34EBA03_0E44_442C_9C6F_E74E7B748884_INCLUDED_)

#if !defined(_TC_TYPE_1FE847A0_5221_4960_84D0_57352334286F_INCLUDED_)
#define _TC_TYPE_1FE847A0_5221_4960_84D0_57352334286F_INCLUDED_
typedef struct _TmcToPlcAxes
{
	TmcTrue polmo;
	double last;
	double ha;
	TmcProcessedTarget object;
	TmcProcessedFeedback feedback;
	TmcAxesErrors error;
	unsigned char reserved1[6];
} TmcToPlcAxes, *PTmcToPlcAxes;
#endif // !defined(_TC_TYPE_1FE847A0_5221_4960_84D0_57352334286F_INCLUDED_)

#if !defined(_TC_TYPE_4C5F969B_8D2C_40D6_92AC_D840A0CCFB85_INCLUDED_)
#define _TC_TYPE_4C5F969B_8D2C_40D6_92AC_D840A0CCFB85_INCLUDED_
typedef struct _TmcToPlcTiming
{
	TmcUtcTime utc;
	TmcUt1Time ut1;
	TmcTimingErrors error;
	unsigned char reserved1[6];
} TmcToPlcTiming, *PTmcToPlcTiming;
#endif // !defined(_TC_TYPE_4C5F969B_8D2C_40D6_92AC_D840A0CCFB85_INCLUDED_)

#if !defined(_TC_TYPE_98ED4416_D59A_47EA_A53E_34ACBBCAB332_INCLUDED_)
#define _TC_TYPE_98ED4416_D59A_47EA_A53E_34ACBBCAB332_INCLUDED_
typedef struct _TmcToPlc
{
	TmcToPlcAxes toAxes;
	TmcToPlcTiming toTiming;
} TmcToPlc, *PTmcToPlc;
#endif // !defined(_TC_TYPE_98ED4416_D59A_47EA_A53E_34ACBBCAB332_INCLUDED_)

typedef struct _SlaPointingParameter
{
	ULONG data1;
	ULONG data2;
	double data3;
} SlaPointingParameter, *PSlaPointingParameter;

typedef struct _SlaPointingInputs
{
	TmcFromPlc fromPlc;
	TmcFromIo fromIo;
} SlaPointingInputs, *PSlaPointingInputs;

typedef struct _SlaPointingOutputs
{
	TmcToPlc toPlc;
	unsigned char reserved1[144];
} SlaPointingOutputs, *PSlaPointingOutputs;

///</AutoGeneratedContent>



///<AutoGeneratedContent id="DataAreaIDs">
#define ADI_SlaPointingInputs 0
#define ADI_SlaPointingOutputs 1
///</AutoGeneratedContent>

///<AutoGeneratedContent id="InterfaceIDs">
///</AutoGeneratedContent>
