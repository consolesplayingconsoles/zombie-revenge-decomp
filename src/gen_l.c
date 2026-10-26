/* Straight-line functions with calls and guards (batch gen_l): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int FUN_0c010250(void);
float FUN_0c0d9e90(int);
float FUN_0c0d9ee0(float);
float FUN_0c0da410(int);
float FUN_0c0da510(float);
int FUN_0c0db4d0(int, int);
int nlTransposeMatrix(void);
int FUN_0c0e2a4c(int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(int);
int FUN_0c0e631c(int, int, int);
int FUN_0c0e6f62(int, int, float);
int FUN_0c0eaa22(int, int, float, float);
int FUN_0c0eb9c2(int, int, float, float);
int FUN_0c0ed8dc(int, int, int, int);
int FUN_0c0ef250(int, int, int, int);
int FUN_0c0f24ec(int, int);
float FUN_0c0f2fe4(float);
int _INITSCT(void);
int FUN_0c20d728(int, int);
int FUN_0c20ee8e(int);
int FUN_0c20eee6(int);
int FUN_0c20fa76(int);
int syCacheInit_P2_(int);
int FUN_0c220da0(void);
int FUN_0c220da4(void);
int syIntInit(int, int);
int sySqInit(void);
int syMmuDeleteAllEntries(void);
int FUN_0c229028(void);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int buExecServer(int, int, int, int, float, float, float, float, float, float, float, float);
int fmMngExecServer(void);
int fmMngFormat(int);
int fmMngInit(int, int, int);
int gdFsGetStatG(void);
int gdFsInitOvl(void);
int gdFsLoadDirG(int, int);
int gdFsRead(int, int, int);
int gdFsReopenHn(int, int, int, int);
int kbCfgIni(int, int, int);
int kdGetDeviceInfo(int);
int kdGetDriverMode(int);
int kdGetGunLatchedPort(void);
int kdGetGunPosition(int, int);
int kdSetDriverMode(int, int);
int kdSetGunCallback(int);
int kdSetGunTrigger(int);
int kdSetHandler(int, int);
int kmiDiscardRenderPipeline(int, int, int, int);
int kmiQueryFinishDMA(int);
int kmiReadRegister(int);
int kmiRegisterCallback(int, int, int, int);
int kmiResetBoard(void);
int ntInfExit(void);
int ntInfInit(int, int);
int pdExecPeripheralServerUser(void);
int syChainAddHandler(int, int, int, int);
int syChainDeleteHandler(int);
int syChainInit(void);
int syG2SysInit(void);
int syG2Write(int, int, int, int, int, int);
int syHwCacheFinish(void);
int syRtcDateToCount(void);
int syRtcGetAndCheckCount(int);
int syRtcGetCountForce(void);
int syTmrInit(void);
int vmsfs_c_exit(void);
int vmsfs_c_getstate(int);
int vmsfs_c_setcallbackparam(int);
int vmsfs_c_setcompletecallback(int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int vmsfs_c_setprogresscallback(int);
int vmsfs_diskfree(int, int);
int vmsfs_exit(void);
int vmsfs_findfirst(int, int);
int vmsfs_getinfo(int, int);
int vmsfs_isformat(int);
int vmsfs_ismount(int);
int vmsfs_unmount(int);
int ovSearchLib(int a4);
void gdFsEntryErrFuncAllG(int a4, int a5);
float FUN_0c0f2c4c(float f4);
int FUN_0c0f3ccc(int a4, int a5, int a6);
int gdFsReadWG(int a4, int a5, int a6);
int _pd_peripheral_set_null(int a4);
int FUN_0c0e62e0(int a4, int a5, int a6);
int check_valid(int a4);
int FUN_0c0f2b34(int a4, int a5, int a6);
int syRtcMakeDayOfWeek(int a4, int a5, int a6);
void syHwFinish(void);
void buDisableServer(void);
int buMount(int a4);
int buConnect(int a4);
int syCblCheckBroadcast(int a4, int a5, int a6);
int FUN_0c0ed8a8(int a4, int a5, int a6);
int _pd_peripheral_error(int a4, int a5, int a6);
int pdGunSetTrigger(int a4);
int buExit(void);
int FUN_0c0f2fa8(Stk4 s);
void pdExecPeripheralServer(void);
int FUN_0c211376(int a4, int a5);
int syRtcCompareDate(int a4, int a5);
int FUN_0c0e5aa0(void);
int FUN_0c0e5980(int a4, int a5);
int FUN_0c0e5ad0(int a4, int a5);
int FUN_0c0e66d0(int a4, int a5);
int kmSetHSyncCallback(int a4, int a5);
int kmGetGunTriggerPos(int a4, int a5);
int syRtcExecServer(void);
int syRtcInit(void);
int syHwInit(void);
int FUN_0c0e5880(int a4, float f4, float f5);
int ovGetLibTbl(int a4);
int gdFsGetDrvStatG(void);
int syRtcAicaSetWriteFlag(void);
void hwInit(void);
int FUN_0c20d160(void);
int FUN_0c0e5810(int a4, float f4);
int kmUseAnotherModifier(int a4);
int gdFsGetLE4(int a4);
int pdGunLeave(void);
int FUN_0c2113b4(void);
int syRtcAicaSetDateLo(int a4);
int syRtcAicaSetDateHi(int a4);
int buGetDiskInfo(int a4, int a5);
int buGetDiskFree(int a4, int a5);
int buFindFirstFile(int a4, int a5);
int init_fm(int a4, int a5, int a6);
int FUN_0c0ed62c(int a4);
int FUN_0c0f3fe0(int a4, int a5);
int kmSetBackGroundPlane(int a4, int a5);
int kmQueryFinishLastTextureDMA(void);
int gdFsExecServerG(void);
int pdGunEnter(int a4);
int pdGunSetCallback(int a4);
int FUN_0c0e58b0(int a4, int a5);
int FUN_0c0e58e0(int a4, float f4);
int ntInfGetFlag(int a4);
int FUN_0c0f0574(int a4, int a5);
int FUN_0c0edc20(int a4, int a5, int a6);
int FUN_0c0f31b8(int a4, int a5);
int kmSetVSyncCallback(int a4, int a5);
int gdFsCheckMedia(int a4);
int convert_support(int a4);
int FUN_0c0e6380(void);
int ntInfGetNetworkInfo(int a4);
int FUN_0c0f2598(int a4, int a5);
void FUN_0c0f3ca8(float f4);
int syRtcDbgWriteLog(int a4, int a5, int a6);
int buUnmount(int a4);
int wait_done(void);
int FUN_0c0ed5a0(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int gdFsFinish(void);
int buExitForce(void);
int FUN_0c0e6470(int a4, int a5);
int FUN_0c0e65c0(int a4, int a5);
int ntInfIsNetworkInfo(void);
void FUN_0c0f3c88(float f4);
int kmSetEORCallback(int a4, int a5);
int kmSetStripOverRunCallback(int a4, int a5);
int kmSetTexOverflowCallback(int a4, int a5);
int kmSetEndOfVertexCallback(int a4, int a5);
int kmSetWaitVsyncCallback(int a4, int a5);
int pdGunGetLatchedPort(void);
int FUN_0c0edc60(void);
int FUN_0c0f2a30(int a4, int a5);
int kmfSetFatalErrorCallback(int a4);
int kmSetPALEXTCallback(int a4);
int syCalloc(void);
void p2_cache_set(void);
int memset(int a4, int a5, int a6);
int FUN_0c0f0558(int a4);
int kmSetGlobalClipping(int a4, int a5);
void FUN_0c20ec20(int a4);
int FUN_0c2103bc(void);
int FUN_0c21045c(void);
int FUN_0c0e5910(int a4, int a5);
void FUN_0c20ec38(int a4);
void FUN_0c20f29a(int a4);
int gdFsReinit(void);
int FUN_0c210336(void);
int FUN_0c210378(void);
int FUN_0c21038e(void);
void FUN_0c210400(void);
void FUN_0c210416(void);
int kmResetRenderer(int a4, int a5, int a6, int a7);
int syMallocChangeIF(int a4);
int realloc(void);
int syRtcDbgSetLogAddr(int a4, int a5);
int FUN_0c0f0546(int a4);
void kmiWaitVlank(void);
int syHwInit2(void);
int FUN_0c0f05a0(int a4, int a5);
int pdGetOptimize(void);
int pdGunGetFlashColor(void);
int syRtcFinish(void);
void FUN_0c0ed4e0(float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int kmfSetVertexBufferBaseAddress(int a4, int a5);
int pdGetPeripheral(int a4);
int pdSetMode(int a4);
int pdSetOptimize(int a4);
int pdGunSetFlashColor(int a4);
int FUN_0c0f3a7a(void);
int kmSetWaitVsyncCount(int a4);
void ovInit(int a4, int a5);
int gdFsSetGlobalErrG(int a4);
int pdGetPeripheralError(int a4);
int pdGetPeripheralInfo(int a4);
void pdSetThreshold(int a4, int a5);
int malloc(void);
int syFree(void);
int syMalloc(void);
int free(void);
int syRealloc(void);
int calloc(void);
int FUN_0c0e62d4(int a4, int a5, int a6, int a7);
int FUN_0c0e66c0(int a4, int a5);
int FUN_0c0ed650(int a4);
int FUN_0c0f3a72(void);
int FUN_0c20d188(void);
int FUN_0c20d190(void);
int gdFsGetGlobalErrG(void);
int gdFsGetWorkHnG(void);
int gdFsGetSysHnG(void);
int gdFsInit(void);
int gdFsOpenG(int a4, int a5);
int pdGetMode(void);
int pdGunCheck(void);
int pdGunGetPosition(int a4, int a5);
void syRtcSetServerMode(int a4);
int syRtcGetStat(void);
int buSetCompleteCallback(int a4);
int buSetProgressCallback(int a4);
int buGetVersion(void);
int buSetCallbackParam(int a4);
int buIsReady(int a4);
int buIsFormat(int a4);
int FUN_0c0e65e0(void);
void FUN_0c0eca30(void);
int kmSetForwardClipping(void);
void ovFinish(void);
int gdFsOpenFastG(int a4, int a5);
int gdFsLoadDirFastG(int a4, int a5);
void syMallocFinish(void);
int buInterruptHandler(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int buRemount(int a4);
int FUN_0c0e6f60(int a4, int a5);
int FUN_0c0eaa20(int a4, int a5, float f4, float f5);
int FUN_0c0eb9c0(int a4, int a5, float f4, float f5);
int kmSetEndOfYUVCallback(int a4, int a5);

int ovSearchLib(int a4)
{
    int t0;
    int t1;
    int stk[4];

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = ovGetLibTbl((((int)stk + 4) + 0x4));
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)((t0 + 0x0)))) {
            return 0xFFFFFFFD;
        }
        if ((*(int *)(((int)stk + 4))) == (*(int *)(((((t1 << 2) << 1) + (t0 + 0x8)) + 0x0)))) {
            break;
        }
        t1 = (t1 + 0x1);
    }
    return t1;
}

void gdFsEntryErrFuncAllG(int a4, int a5)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)(((*(int *)0xC2393C4) + 0x24)) = a4;
    *(unsigned int *)(((*(int *)0xC2393C4) + 0x28)) = a5;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

float FUN_0c0f2c4c(float f4)
{
    int stk[3];

    *(float *)(((int)stk + 4)) = (FUN_0c0f2fe4(f4));
    if (((*(int *)((((int)stk + 4) + 0x0))) & 0x7F800000) == 0x7F800000) {
        if (((*(int *)((((int)stk + 4) + 0x0))) & 0x7FFFFF) != 0) {
            *(unsigned int *)0xC94D960 = 0x44D;
        } else {
            *(unsigned int *)0xC94D960 = 0x44C;
        }
    }
    return (*(float *)(((int)stk + 4)));
}

int FUN_0c0f3ccc(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t5;
    int t7;

    if ((int)(a6 - 1) >= 0) {
        t0 = (a4 + (a6 - 1));
        t1 = (a5 + (a6 - 1));
        t2 = 0x0;
        for (;;) {
            *(unsigned char *)((t0 + 0x0)) = (((unsigned char)(*(signed char *)((t0 + 0x0))) + (unsigned char)(*(signed char *)((t1 + 0x0)))) + t2);
            t5 = FUN_0c0e5dc0();
            t2 = t5;
            t1 = (a5 - 1);
            t0 = (a4 - 1);
            if ((int)(a6 - 1) < 0) {
                break;
            }
        }
        t7 = t5;
    }
    return t7;
}

int gdFsReadWG(int a4, int a5, int a6)
{
    int t2;

    t2 = gdFsReopenHn((*(int *)(((*(int *)0xC2393C4) + 0x14))), 0x0, a4, (((a5 << 8) << 2) << 1));
    if (t2 == 0) {
        return 0xFFFFFFF3;
    }
    return (gdFsRead(t2, a5, a6));
}

int _pd_peripheral_set_null(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    if ((*(int *)0xC94DF2C) == 0) {
        *(unsigned int *)((a4 + 0x8)) = 0x0;
        *(unsigned int *)((a4 + 0xC)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0x10)) = 0x0;
        *(unsigned int *)((a4 + 0x14)) = 0x0;
    } else {
        *(unsigned int *)((a4 + 0x8)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0xC)) = 0x0;
        *(unsigned int *)((a4 + 0x10)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0x14)) = 0xFFFFFFFF;
    }
    *(unsigned short *)((a4 + 0x18)) = 0x0;
    *(unsigned short *)((a4 + 0x1A)) = 0x0;
    *(unsigned short *)((a4 + 0x22)) = 0x0;
    *(unsigned short *)((a4 + 0x20)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x24)) = 0xC236704;
    return 0x0;
}

int FUN_0c0e62e0(int a4, int a5, int a6)
{
    int t7;
    int t9;
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    if (a6 == 0) {
        return 0x0;
    }
    t7 = a4;
    t9 = a5;
    if ((unsigned int)0x0 < (unsigned int)a6) {
        t0 = a4;
        t1 = 0x0;
        t2 = a5;
        for (;;) {
            t3 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            t4 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            if ((t3 == t4) && (t1 = (t1 + 0x1), (unsigned int)t1 < (unsigned int)a6)) continue;
            break;
        }
        t7 = t0;
        t9 = t2;
    }
    return ((unsigned char)(*(signed char *)(((t7 - 1) + 0x0))) - (unsigned char)(*(signed char *)(((t9 - 1) + 0x0))));
}

int check_valid(int a4)
{
    int t0;

    t0 = *(int *)0xC20D134;
    if (t0 != 0) {
        if (a4 != 0) {
            if (a4 == 1) {
                if ((*(int *)((t0 + 0x4))) != 0x41474553) {
                    return 0xFFFFFFFD;
                }
                return 0x0;
            }
            if (a4 == 2) {
                if ((*(int *)((t0 + 0x168))) == 0x41474553) {
                    return 0x0;
                }
                return 0xFFFFFFFD;
            }
            return 0xFFFFFFFE;
        }
        if ((*(int *)((t0 + 0x4))) != 0x41474553) {
            return 0xFFFFFFFD;
        }
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c0f2b34(int a4, int a5, int a6)
{
    int t7;
    int t9;
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    if (a6 == 0) {
        return 0x0;
    }
    t7 = a4;
    t9 = a5;
    if ((unsigned int)0x0 < (unsigned int)a6) {
        t0 = a4;
        t1 = 0x0;
        t2 = a5;
        for (;;) {
            t3 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            t4 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            if ((t3 == t4) && (t1 = (t1 + 0x1), (unsigned int)t1 < (unsigned int)a6)) continue;
            break;
        }
        t7 = t0;
        t9 = t2;
    }
    return ((unsigned char)(*(signed char *)(((t7 - 1) + 0x0))) - (unsigned char)(*(signed char *)(((t9 - 1) + 0x0))));
}

int syRtcMakeDayOfWeek(int a4, int a5, int a6)
{
    FUN_0c0e5dc0();
    return (FUN_0c0e5f1c(a4));
}

void syHwFinish(void)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    syMmuDeleteAllEntries();
    syHwCacheFinish();
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

void buDisableServer(void)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    kdSetHandler((*(int *)0xC236BA0), 0x0);
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int buMount(int a4)
{
    int t0;
    int t3;

    t0 = vmsfs_c_getstate(a4);
    t3 = 0xFFFFFFFF;
    if (t0 != 0) {
    } else {
        vmsfs_c_setfunc(a4, 0x1);
        vmsfs_c_setparam(a4, a4, 0x0, 0x0, 0x0, 0x0, 0x0);
        t3 = 0x0;
    }
    return t3;
}

int buConnect(int a4)
{
    int t0;
    int t3;

    t0 = vmsfs_c_getstate(a4);
    t3 = 0xFFFFFFFF;
    if (t0 != 0) {
    } else {
        vmsfs_c_setfunc(a4, 0x12);
        vmsfs_c_setparam(a4, a4, 0x0, 0x0, 0x0, 0x0, 0x0);
        t3 = 0x0;
    }
    return t3;
}

int syCblCheckBroadcast(int a4, int a5, int a6)
{
    int t2;
    int t8;
    int t6;
    int t4;

    kbCfgIni(0x0, a5, a6);
    t2 = *(signed char *)(((FUN_0c229028()) + 0xC));
    t8 = 0x1;
    if (t2 != 49) {
        t6 = 0x2;
        if (t2 != 50) {
            t4 = 0x3;
            if (t2 != 51) {
                t4 = 0x0;
            }
            t6 = t4;
        }
        t8 = t6;
    }
    return t8;
}

int FUN_0c0ed8a8(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t1;
    int t4;

    t0 = a5;
    t2 = 0x0;
    t3 = a4;
    for (;;) {
        if (((unsigned int)t2 < (unsigned int)a6) && (t4 = *(signed char *)((t0 + 0x0)), t1 = t4, t1 != 0)) {
            t2 = (t2 + 0x1);
            t5 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            t1 = t5;
            *(unsigned char *)((t3 + 0x0)) = t1;
            t3 = (t3 + 0x1);
            continue;
        }
        break;
    }
    if ((unsigned int)t2 < (unsigned int)a6) {
        t6 = t2;
        t7 = t3;
        for (;;) {
            t6 = (t6 + 0x1);
            *(unsigned char *)((t7 + 0x0)) = 0x0;
            t7 = (t7 + 0x1);
            if ((unsigned int)t6 >= (unsigned int)a6) {
                break;
            }
        }
    }
    return a4;
}

int _pd_peripheral_error(int a4, int a5, int a6)
{
    int t0;

    t0 = *(signed char *)((a6 + 0x4));
    if ((unsigned char)t0 != 0xFC) {
        if (((unsigned char)t0 != 0xFF) && (((unsigned char)t0 != 8) && (((unsigned char)t0 != 5) && (((unsigned char)t0 != 6) && ((unsigned char)t0 != 0))))) {
            return 0xFF000000;
        }
        return 0x0;
    }
    return 0xFF0000FC;
}

int pdGunSetTrigger(int a4)
{
    int t1;
    int t13;
    int t9;
    int t5;

    if (a4 != 0) {
        if (a4 != 6) {
            if (a4 != 12) {
                t1 = a4;
                if (a4 != 18) {
                } else {
                    t1 = (kdSetGunTrigger(0x3));
                }
                t5 = t1;
            } else {
                t5 = (kdSetGunTrigger(0x2));
            }
            t9 = t5;
        } else {
            t9 = (kdSetGunTrigger(0x1));
        }
        t13 = t9;
    } else {
        t13 = (kdSetGunTrigger(0x0));
    }
    return t13;
}

int buExit(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    for (;;) {
        t1 = vmsfs_c_getstate(t0);
        if (t1 != 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            return buExitForce();
        }
    }
    return 0xFFFFFFFF;
}

int FUN_0c0f2fa8(Stk4 s)
{
    int t4;
    int stk[13];

    stk[1] = s.w[0];
    stk[2] = s.w[1];
    stk[3] = s.w[2];
    stk[4] = s.w[3];
    if (((*(int *)(((((int)stk + 4) + 0x4) + 0x0))) & 0x7FF00000) != 0x7FF00000) {
        return 0x0;
    }
    if ((((*(int *)(((((int)stk + 4) + 0x4) + 0x0))) & 0xFFFFF) == 0) && (t4 = *(int *)((((((int)stk + 4) + 0x4) - 4) + 0x0)), t4 == 0)) {
        return 0x2;
    }
    return 0x1;
}

void pdExecPeripheralServer(void)
{
    if ((*(int *)0xC236700) == 0) {
        return;
    }
    pdExecPeripheralServerUser();
}

int FUN_0c211376(int a4, int a5)
{
    int t0;
    int t1;

    t0 = (a4 & 0x9FFFFFE0);
    t1 = ((unsigned int)((unsigned int)((unsigned int)((a5 + (a4 & 0x1F)) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        _builtin_prefetch((void *)t0);
        t1 = (t1 - 0x1);
        t0 = (t0 + 0x20);
        if (t1 == 0) {
            break;
        }
    }
    return (a4 & 0x1F);
}

int syRtcCompareDate(int a4, int a5)
{
    int t4;
    int t10;
    int t7;
    int stk[5];

    *(unsigned int *)(((int)stk + 12)) = a5;
    syRtcDateToCount();
    *(volatile int *)(((int)stk + 12));
    syRtcDateToCount();
    t4 = *(int *)(((int)stk + 4));
    t10 = 0x0;
    if ((*(int *)(((int)stk + 8))) == t4) {
    } else {
        t7 = 0xFFFFFFFF;
        if ((unsigned int)(*(int *)(((int)stk + 8))) > (unsigned int)t4) {
            t7 = 0x1;
        }
        t10 = t7;
    }
    return t10;
}

int FUN_0c0e5aa0(void)
{
    nlTransposeMatrix();
    FUN_0c0db4d0(0xC94CAD0, 0xC94CAE8);
    FUN_0c0db4d0(0xC20D040, 0xC9DF200);
    return nlTransposeMatrix();
}

int FUN_0c0e5980(int a4, int a5)
{
    *(float *)((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0x14)) = (*(float *)((a5 + 0x0)));
    *(float *)((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0x18)) = (*(float *)(((a5 + 0x4) + 0x0)));
    *(float *)((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0x1C)) = (*(float *)((((a5 + 0x4) + 0x4) + 0x0)));
    *(float *)((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0x20)) = (*(float *)(((((a5 + 0x4) + 0x4) + 0x4) + 0x0)));
    return 0x20;
}

int FUN_0c0e5ad0(int a4, int a5)
{
    *(unsigned short *)(((short)((short)a4 * (short)0xB0) + 0xC94CA68)) = a5;
    *(unsigned int *)0xC20CF88 = ((*(int *)0xC20CF88) | (((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31))));
    if (a5 == 0) {
        *(unsigned int *)0xC20CF88 = ((*(int *)0xC20CF88) ^ (((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31))));
    }
    return 0xC94CA68;
}

int FUN_0c0e66d0(int a4, int a5)
{
    int t3;

    if ((int)a4 < (int)0xC) {
        t3 = (((int (*)(int))((*(int *)(((a4 << 2) + 0xC20D0D0)))))(a4));
    } else {
        t3 = (FUN_0c0e66c0(0x0, a5));
    }
    return t3;
}

int kmSetHSyncCallback(int a4, int a5)
{
    FUN_0c220da4();
    kmiRegisterCallback((*(int *)0xC239A8C), 0x2, a4, a5);
    return 0x0;
}

int kmGetGunTriggerPos(int a4, int a5)
{
    int t0;

    t0 = kmiReadRegister(0xC4);
    *(unsigned int *)((a4 + 0x0)) = (t0 & 0x3FF);
    *(unsigned int *)((a5 + 0x0)) = (((unsigned int)t0 >> 16) & 0x3FF);
    return 0x0;
}

int syRtcExecServer(void)
{
    int t6;
    int t8;
    int t7;

    if (((*(int *)0xC94DFB0) & 1) == 0) {
        *(unsigned int *)0xC94DFAC = (syRtcGetAndCheckCount((*(int *)0xC94DFAC)));
    }
    t6 = *(int *)0xC94DFB0;
    t8 = t6;
    if ((t6 & 2) != 0) {
        t7 = syRtcGetCountForce();
        *(unsigned int *)0xC94DFAC = t7;
        t8 = t7;
    }
    return t8;
}

int syRtcInit(void)
{
    *(unsigned int *)0xC94DFAC = (syRtcGetCountForce());
    *(unsigned int *)0xC94DFB0 = 0x0;
    syRtcExecServer();
    *(unsigned int *)0xC94DFB4 = (syChainAddHandler(0x900, 0xC211950, 0x5C, 0x0));
    return 0x0;
}

int syHwInit(void)
{
    hwInit();
    syIntInit((*(int *)0xC236864), (*(int *)0xC2393D4));
    sySqInit();
    syCacheInit_P2_((*(int *)0xC236860));
    return syTmrInit();
}

int FUN_0c0e5880(int a4, float f4, float f5)
{
    *(float *)((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0xA4)) = f4;
    *(float *)((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0x58)) = f5;
    *(float *)((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0x9C)) = (1.0f / (1.0f - f5));
    return 0x9C;
}

int ovGetLibTbl(int a4)
{
    int t7;

    if ((*(int *)0x8C00FFF0) == 0) {
        ovInit(0x8C00FC00, 0x78);
    }
    t7 = *(int *)0x8C00FFF0;
    *(unsigned int *)((a4 + 0x0)) = (*(int *)0x8C00FFF4);
    return t7;
}

int gdFsGetDrvStatG(void)
{
    int t3;
    int stk[4];

    t3 = ((int (*)(int))((*(int *)(((*(int *)(((*(int *)0xC2393C4) + 0xC))) + 0x20)))))(((int)stk + 4));
    if (t3 == 0) {
        return 0xFFFFFFFF;
    }
    return (*(int *)(((int)stk + 4)));
}

int syRtcAicaSetWriteFlag(void)
{
    int stk[6];

    *(unsigned short *)(((int)stk + 12)) = 0x1;
    syG2Write((((int)stk + 4) + 0x8), 0xA0710008, 0x4, 0x1, 0x0, 0x0);
    return 0x0;
}

void hwInit(void)
{
    int t0;
    int t1;

    *(unsigned short *)0xFFD00000 = 0x0;
    *(unsigned short *)0xFFD00004 = 0x0;
    *(unsigned short *)0xFFD00008 = 0x0;
    *(unsigned short *)0xFFD0000C = 0x0;
    t0 = 0xFFD00004;
    t1 = 0xC236868;
    for (;;) {
        if ((*(int *)((t1 + 0x0))) != 0) {
            t0 = (*(int *)((t1 + 0x0)));
            *(unsigned int *)((t0 + 0x0)) = (*(int *)((t1 + 0x4)));
            t1 = (t1 + 0x8);
            continue;
        }
        break;
    }
}

int FUN_0c20d160(void)
{
    int t2;

    *(volatile signed char *)(((*(int *)0xC2364E4) + 0x0));
    t2 = 0x8C00C000;
    for (;;) {
        *(unsigned int *)((t2 + 0x0)) = 0x41474553;
        t2 = (t2 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0x8C00F400) {
            break;
        }
    }
    _INITSCT();
    FUN_0c20d188();
    FUN_0c010250();
    return FUN_0c20d190();
}

int FUN_0c0e5810(int a4, float f4)
{
    *(float *)((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0xA0)) = f4;
    *(float *)((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0x98)) = (f4 * f4);
    *(float *)((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0x90)) = (1.0f / f4);
    return 0x90;
}

int kmUseAnotherModifier(int a4)
{
    int t2;

    if ((a4 & 0x1) != 0) {
        *(unsigned int *)0xC9524D0 = 0x1;
        *(unsigned int *)0xC9524D4 = a4;
        t2 = 0x0;
    } else {
        *(unsigned int *)0xC9524D0 = 0x0;
        t2 = 0xB;
    }
    *(unsigned int *)0xC9524BC = 0x3;
    return t2;
}

int gdFsGetLE4(int a4)
{
    return (((((unsigned char)(*(signed char *)((a4 + 0x1))) << 8) | ((unsigned char)(*(signed char *)((a4 + 0x2))) << 16)) | (((unsigned char)(*(signed char *)((a4 + 0x3))) << 16) << 8)) | (unsigned char)(*(signed char *)((a4 + 0x0))));
}

int pdGunLeave(void)
{
    int t3;

    kdSetDriverMode(0x8, 0x0);
    kdSetDriverMode(0x9, 0x0);
    t3 = kdSetHandler((*(int *)0xC2366FC), 0x0);
    *(unsigned int *)0xC94D9E8 = 0x0;
    return t3;
}

int FUN_0c2113b4(void)
{
    int stk[2];

    *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    return ((int (*)(void))(0xAC2113E0))();
}

int syRtcAicaSetDateLo(int a4)
{
    int stk[6];

    *(unsigned int *)(((int)stk + 12)) = a4;
    syG2Write((((int)stk + 4) + 0x8), 0xA0710004, 0x4, 0x1, 0x0, 0x0);
    return 0x0;
}

int syRtcAicaSetDateHi(int a4)
{
    int stk[6];

    *(unsigned int *)(((int)stk + 12)) = a4;
    syG2Write((((int)stk + 4) + 0x8), 0xA0710000, 0x4, 0x1, 0x0, 0x0);
    return 0x0;
}

int buGetDiskInfo(int a4, int a5)
{
    int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_getinfo(a4, a5);
}

int buGetDiskFree(int a4, int a5)
{
    int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_diskfree(a4, a5);
}

int buFindFirstFile(int a4, int a5)
{
    int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_findfirst(a4, a5);
}

int init_fm(int a4, int a5, int a6)
{
    int t0;
    int t3;

    t0 = fmMngInit(0x2, a4, a6);
    t3 = t0;
    if (t0 == -8) {
        t3 = (fmMngFormat(0x0));
    }
    return t3;
}

int FUN_0c0ed62c(int a4)
{
    int t0;
    int t4;

    if (a4 != 0) {
        t0 = *(int *)((a4 + 0x30));
        t4 = (((int (*)(int, int))((*(int *)((t0 + 0x0)))))(((*(int *)((t0 + 0x4))) + a4), 0x1));
    }
    return t4;
}

int FUN_0c0f3fe0(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = 0x0;
    t1 = 0x8;
    t2 = (0x0 + a4);
    for (;;) {
        t3 = *(short *)((a5 + 0x0));
        *(unsigned char *)((t2 + 0x0)) = (((int)(-t1) >= 0) ? ((unsigned short)t3 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((unsigned int)(unsigned short)t3 >> (-(int)(-t1) & 31)) : 0));
        t0 = (t0 + 0x1);
        t1 = (t1 - 8);
        t2 = (t2 + 0x1);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return 0x2;
}

int kmSetBackGroundPlane(int a4, int a5)
{
    int t1;

    t1 = ((int (*)(int, int))((*(int *)(((a5 << 2) + 0xC2397D4)))))(a4, a5);
    *(unsigned int *)0xC9523A0 = ((*(int *)0xC9523A0) & 0xFFF00000);
    return t1;
}

int kmQueryFinishLastTextureDMA(void)
{
    int t2;

    if ((*(int *)0xC95272C) != 1) {
        t2 = kmiQueryFinishDMA((*(int *)0xC952728));
        if (t2 == 1) {
            return 0x0;
        }
        return 0x11;
    }
    return 0x0;
}

int gdFsExecServerG(void)
{
    int t3;

    t3 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0xC2393C4) + 0xC))) + 0x40)))))();
    if ((*(int *)(((*(int *)0xC2393C4) + 0x1C))) != 0) {
        return gdFsGetStatG();
    }
    return t3;
}

int pdGunEnter(int a4)
{
    int t1;
    int t2;

    if (a4 != 0) {
        kdSetDriverMode(0x8, a4);
        t1 = kdSetDriverMode(0x9, 0xFFFFFFFF);
        *(unsigned int *)0xC94D9E8 = a4;
        t2 = t1;
    }
    return t2;
}


int FUN_0c0e58b0(int a4, int a5)
{
    float t0;
    float t1;

    t0 = FUN_0c0d9e90(a5);
    t1 = FUN_0c0da410(a5);
    return FUN_0c0e5880(a4, t1, t0);
}

int FUN_0c0e58e0(int a4, float f4)
{
    float t0;
    float t1;

    t0 = FUN_0c0d9ee0(f4);
    t1 = FUN_0c0da510(f4);
    return FUN_0c0e5880(a4, t1, t0);
}

int ntInfGetFlag(int a4)
{
    int t0;

    t0 = check_valid(0x0);
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x0)) = (*(int *)(((*(int *)0xC20D134) + 0x0)));
    }
    return t0;
}

int FUN_0c0f0574(int a4, int a5)
{
    if (((*(signed char *)((a4 + 0x0))) != 0) && ((int)(a4 - a5) >= (int)0x200)) {
        *(unsigned int *)0xC94D960 = 0x450;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0edc20(int a4, int a5, int a6)
{
    return (FUN_0c0ef250(0x1, 0x0, a4, a5));
}

int FUN_0c0f31b8(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = 0x0;
    t1 = 0x18;
    t2 = (0x0 + a4);
    for (;;) {
        t3 = *(int *)((a5 + 0x0));
        t0 = (t0 + 0x1);
        *(unsigned char *)((t2 + 0x0)) = (((int)(-t1) >= 0) ? (t3 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((unsigned int)t3 >> (-(int)(-t1) & 31)) : 0));
        t1 = (t1 - 8);
        t2 = (t2 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return 0x4;
}

int kmSetVSyncCallback(int a4, int a5)
{
    FUN_0c220da0();
    kmiRegisterCallback((*(int *)0xC239A8C), 0x1, a4, a5);
    return 0x0;
}

int gdFsCheckMedia(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = 0x0;
    t1 = (a4 + 0x1);
    t2 = 0xC23669C;
    for (;;) {
        t3 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        t4 = *(signed char *)((t2 + 0x0));
        t2 = (t2 + 0x1);
        if (t4 != t3) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x5) {
            return 0x1;
        }
    }
    return 0x0;
}

int convert_support(int a4)
{
    int t1;
    int t4;

    t1 = (((unsigned int)((unsigned int)a4 >> 8) >> 2) & 0x3FFF00);
    if ((0x20000 & a4) != 0) {
        t1 = ((((unsigned int)((unsigned int)a4 >> 8) >> 2) & 0x3FFF00) | 0xF0);
    }
    t4 = t1;
    if ((a4 & 0x10000) != 0) {
        t4 = (t1 | 0xF);
    }
    return t4;
}

int FUN_0c0e6380(void)
{
    int t0;

    t0 = *(int *)0xC20D144;
    *(unsigned int *)0xC20D144 = ((t0 * 0x41C64E6D) + 0x3039);
    return (((unsigned int)((t0 * 0x41C64E6D) + 0x3039) >> 16) & 0x7FFF);
}

int ntInfGetNetworkInfo(int a4)
{
    int t0;

    t0 = check_valid(0x0);
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x0)) = (*(int *)0xC20D134);
    }
    return t0;
}

int FUN_0c0f2598(int a4, int a5)
{
    int t0;
    int t1;

    if ((int)a5 > 0) {
        t0 = a4;
        t1 = 0x0;
        for (;;) {
            if ((*(signed char *)((t0 + 0x0))) != 0) {
                break;
            }
            t1 = (t1 + 0x1);
            t0 = (t0 + 0x1);
            if ((int)t1 >= (int)a5) {
                return 0x1;
            }
        }
        return 0x0;
    }
    return 0x1;
}

void FUN_0c0f3ca8(float f4)
{
    int t1;
    int t2;
    float u3;
    float u5;

    t1 = 0x6;
    t2 = 0xC1EEF44;
    u3 = (*(float *)0xC1EEF40);
    for (;;) {
        u5 = u3;
        u3 = (*(float *)((t2 + 0x0)));
        t2 = (t2 + 0x4);
        t1 = (t1 - 1);
        u3 = (u3 + (u5 * ((f4 * f4))));
        if ((int)t1 <= 0) {
            break;
        }
    }
}

int syRtcDbgWriteLog(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)0xC94DFB0;
    if (((t0 & 8) != 0) && (t1 = *(int *)0xC94DFC0, t2 = *(int *)0xC94DFBC, (unsigned int)t2 < (unsigned int)t1)) {
        *(unsigned int *)((t2 + 0x0)) = a4;
        *(unsigned int *)0xC94DFBC = ((*(int *)0xC94DFBC) + 0x4);
    }
    return t0;
}

int buUnmount(int a4)
{
    int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_unmount(a4);
}

int wait_done(void)
{
    int t0;

    for (;;) {
        t0 = fmMngExecServer();
        if ((t0 != 1) && (t0 != 3)) continue;
        break;
    }
    return t0;
}

int FUN_0c0ed5a0(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    _builtin_prefetch((void *)a6);
    *(float *)((((a6 - 4) - 0x4) + 0x0)) = f7;
    *(float *)(((((a6 - 4) - 0x4) - 0x4) + 0x0)) = (f6 * f7);
    *(float *)((((((a6 - 4) - 0x4) - 0x4) - 0x4) + 0x0)) = (f5 * f7);
    _builtin_prefetch((void *)((((a6 - 4) - 0x4) - 0x4) - 0x4));
    return ((((a6 - 4) - 0x4) - 0x4) - 0x4);
}

int gdFsFinish(void)
{
    int t0;
    int t2;
    int t3;

    t0 = *(int *)0xC2393D0;
    if (t0 != 0) {
        t2 = ((int (*)(void))((*(int *)((t0 + 0x14)))))();
        *(unsigned int *)0xC2393D0 = 0x0;
        t3 = t2;
    }
    return t3;
}

int buExitForce(void)
{
    *(unsigned int *)0xC2393DC = 0x0;
    kdSetHandler((*(int *)0xC236BA0), 0x0);
    vmsfs_c_exit();
    return vmsfs_exit();
}

int FUN_0c0e6470(int a4, int a5)
{
    kmSetEORCallback(a5, 0x0);
    *(unsigned int *)0xC94D6B8 = a5;
    return 0x1;
}

int FUN_0c0e65c0(int a4, int a5)
{
    kmSetTexOverflowCallback(a5, 0x0);
    *(unsigned int *)0xC94D6E4 = a5;
    return 0x1;
}

int ntInfIsNetworkInfo(void)
{
    int t1;

    ntInfInit(0x0, 0x0);
    t1 = check_valid(0x0);
    ntInfExit();
    return t1;
}

void FUN_0c0f3c88(float f4)
{
    int t1;
    int t2;
    float u3;
    float u5;

    t1 = 0x6;
    t2 = 0xC1EEF28;
    u3 = (*(float *)0xC1EEF24);
    for (;;) {
        u5 = u3;
        u3 = (*(float *)((t2 + 0x0)));
        t2 = (t2 + 0x4);
        t1 = (t1 - 1);
        u3 = (u3 + (u5 * ((f4 * f4))));
        if ((int)t1 <= 0) {
            break;
        }
    }
}

int kmSetEORCallback(int a4, int a5)
{
    kmiRegisterCallback((*(int *)0xC239A8C), 0x0, a4, a5);
    return 0x0;
}

int kmSetStripOverRunCallback(int a4, int a5)
{
    kmiRegisterCallback((*(int *)0xC239A8C), 0x4, a4, a5);
    return 0x0;
}

int kmSetTexOverflowCallback(int a4, int a5)
{
    kmiRegisterCallback((*(int *)0xC239A8C), 0x3, a4, a5);
    return 0x0;
}

int kmSetEndOfVertexCallback(int a4, int a5)
{
    kmiRegisterCallback((*(int *)0xC239A8C), 0x5, a4, a5);
    return 0x0;
}

int kmSetWaitVsyncCallback(int a4, int a5)
{
    kmiRegisterCallback((*(int *)0xC239A8C), 0x7, a4, a5);
    return 0x0;
}

int pdGunGetLatchedPort(void)
{
    int t0;
    int t4;

    t0 = kdGetGunLatchedPort();
    t4 = t0;
    if ((int)t0 > 0) {
        t4 = (*(int *)(((t0 << 2) + 0xC236710)));
    }
    return t4;
}

int FUN_0c0edc60(void)
{
    int t0;
    int stk[5];

    t0 = *(int *)0xC20CEA8;
    if (t0 != 0) {
        return ((int (*)(void))(t0))();
    }
    return ((int (*)(void))(0xC0EDC7A))();
}

int FUN_0c0f2a30(int a4, int a5)
{
    return FUN_0c0e631c(a5, (((a4 << 2) << 1) + 0xC1EEDA4), 0x8);
}

int kmfSetFatalErrorCallback(int a4)
{
    kmiRegisterCallback((*(int *)0xC239A8C), 0x8, a4, 0x0);
    return 0x0;
}

int kmSetPALEXTCallback(int a4)
{
    kmiRegisterCallback((*(int *)0xC239A8C), 0x9, a4, 0x0);
    return 0x0;
}

int syCalloc(void)
{
    int t1;

    t1 = *(int *)(((*(int *)0xC94DF78) + 0x8));
    return ((int (*)(void))(t1))();
}

void p2_cache_set(void)
{
    int t0;

    *(unsigned int *)0xFF00001C = 0x0;
    t0 = 0xF4000000;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x20);
        if ((int)t0 >= (int)0xF4004000) {
            break;
        }
    }
    *(unsigned int *)0xFF00001C = 0x800;
    *(unsigned int *)0xFF00001C = 0x0;
}

int memset(int a4, int a5, int a6)
{
    int t0;
    int t1;

    if ((unsigned int)0x0 < (unsigned int)a6) {
        t0 = a4;
        t1 = 0x0;
        for (;;) {
            t1 = (t1 + 0x1);
            *(unsigned char *)((t0 + 0x0)) = a5;
            t0 = (t0 + 0x1);
            if ((unsigned int)t1 >= (unsigned int)a6) {
                break;
            }
        }
    }
    return a4;
}

int FUN_0c0f0558(int a4)
{
    if ((*(int *)((a4 + 0x0))) == 1) {
        return 0x0;
    }
    return ((*(signed char *)((0x10 + (*(int *)((a4 + 0x4)))))) & 0x40);
}

int kmSetGlobalClipping(int a4, int a5)
{
    *(unsigned int *)0xC9524C4 = 0x1;
    *(unsigned int *)0xC9524C8 = a4;
    *(unsigned int *)0xC9524CC = a5;
    *(unsigned int *)0xC9524BC = 0x3;
    return 0x0;
}

void FUN_0c20ec20(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
}

int FUN_0c2103bc(void)
{
    int t0;
    int t1;

    t0 = *(int *)0xC2393D0;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x44));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int FUN_0c21045c(void)
{
    int t0;
    int t1;

    t0 = *(int *)0xC2393D0;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x58));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int FUN_0c0e5910(int a4, int a5)
{
    *(unsigned short *)((((short)((short)a4 * (short)0xB0) + 0xC94CA68) + 0x2)) = a5;
    return a5;
}

void FUN_0c20ec38(int a4)
{
    _builtin_set_imask(((unsigned int)((((*(int *)((a4 + 0x0))) & 0xF) << 2) << 2) >> 4));
}

void FUN_0c20f29a(int a4)
{
    int t0;

    if ((a4 != 0) && (t0 = *(int *)((a4 + 0x0)), (int)t0 >= (int)0x2)) {
        *(unsigned int *)(((a4 + 0x10) + 0x2C)) = (*(int *)(((a4 + 0x10) + 0x0)));
    }
}

int gdFsReinit(void)
{
    int t0;
    int t1;

    t0 = *(int *)0xC2393D0;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x10));
        return ((int (*)(void))(t1))();
    }
    return 0xFFFFFFFF;
}

int FUN_0c210336(void)
{
    int t0;
    int t1;

    t0 = *(int *)0xC2393D0;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x20));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int FUN_0c210378(void)
{
    int t0;
    int t1;

    t0 = *(int *)0xC2393D0;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x2C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int FUN_0c21038e(void)
{
    int t0;
    int t1;

    t0 = *(int *)0xC2393D0;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x3C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

void FUN_0c210400(void)
{
    int t0;

    t0 = *(int *)0xC2393D0;
    if (t0 != 0) {
        ((int (*)(void))((*(int *)((t0 + 0x48)))))();
    return;
    }
}

void FUN_0c210416(void)
{
    int t0;

    t0 = *(int *)0xC2393D0;
    if (t0 != 0) {
        ((int (*)(void))((*(int *)((t0 + 0x74)))))();
    return;
    }
}

int kmResetRenderer(int a4, int a5, int a6, int a7)
{
    kmiDiscardRenderPipeline(a4, a5, a6, a7);
    kmiResetBoard();
    return 0x0;
}

int syMallocChangeIF(int a4)
{
    int t0;

    t0 = *(int *)0xC94DF78;
    if (a4 == 0) {
        *(unsigned int *)0xC94DF78 = 0xC236760;
    } else {
        *(unsigned int *)0xC94DF78 = a4;
    }
    return t0;
}

int realloc(void)
{
    int t1;

    t1 = *(int *)(((*(int *)0xC94DF78) + 0xC));
    return ((int (*)(void))(t1))();
}

int syRtcDbgSetLogAddr(int a4, int a5)
{
    int t0;

    t0 = *(int *)0xC94DFB0;
    if ((t0 & 8) != 0) {
        *(unsigned int *)0xC94DFBC = a4;
        *(unsigned int *)0xC94DFC0 = a5;
    }
    return t0;
}

int FUN_0c0f0546(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x0));
    if (t0 == 1) {
        *(unsigned char *)(((*(int *)((a4 + 0x4))) + 0x0)) = 0x0;
    }
    return t0;
}

void kmiWaitVlank(void)
{
    int t0;

    t0 = *(int *)0xC95266C;
    for (;;) {
        if (t0 != (*(int *)0xC95266C)) {
            break;
        }
    }
}

int syHwInit2(void)
{
    syChainInit();
    return syG2SysInit();
}

int FUN_0c0f05a0(int a4, int a5)
{
    return (FUN_0c0f24ec(a4, a5));
}

int pdGetOptimize(void)
{
    return (kdGetDriverMode(0x0));
}

int pdGunGetFlashColor(void)
{
    return (kdGetDriverMode(0x9));
}

int syRtcFinish(void)
{
    *(unsigned int *)0xC94DFAC = 0x0;
    return syChainDeleteHandler((*(int *)0xC94DFB4));
}

void FUN_0c0ed4e0(float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    
}

int kmfSetVertexBufferBaseAddress(int a4, int a5)
{
    *(unsigned int *)0xC95273C = a4;
    *(unsigned int *)0xC952740 = a5;
    return 0x0;
}

int pdGetPeripheral(int a4)
{
    return ((a4 * 0x34) + 0xC94D9EC);
}

int pdSetMode(int a4)
{
    return kdSetDriverMode(0x5, a4);
}

int pdSetOptimize(int a4)
{
    return kdSetDriverMode(0x0, a4);
}

int pdGunSetFlashColor(int a4)
{
    return kdSetDriverMode(0x9, a4);
}

int FUN_0c0f3a7a(void)
{
    return ((int (*)(void))(0xC0F3B90))();
}

int kmSetWaitVsyncCount(int a4)
{
    *(unsigned int *)0xC9524E0 = (a4 - 1);
    return 0x0;
}

void ovInit(int a4, int a5)
{
    *(unsigned int *)0x8C00FFF0 = a4;
    *(unsigned int *)0x8C00FFF4 = a5;
}

int gdFsSetGlobalErrG(int a4)
{
    *(unsigned int *)(((*(int *)0xC2393C4) + 0x30)) = a4;
    return 0x1;
}

int pdGetPeripheralError(int a4)
{
    return (*(int *)((0xC94DECC + (a4 << 2))));
}

int pdGetPeripheralInfo(int a4)
{
    return kdGetDeviceInfo(a4);
}

void pdSetThreshold(int a4, int a5)
{
    *(unsigned char *)0xC94DF30 = a4;
    *(unsigned char *)0xC94DF31 = a5;
}

int malloc(void)
{
    int t1;

    t1 = *(int *)(((*(int *)0xC94DF78) + 0x0));
    return ((int (*)(void))(t1))();
}

int syFree(void)
{
    int t1;

    t1 = *(int *)(((*(int *)0xC94DF78) + 0x4));
    return ((int (*)(void))(t1))();
}

int syMalloc(void)
{
    int t1;

    t1 = *(int *)(((*(int *)0xC94DF78) + 0x0));
    return ((int (*)(void))(t1))();
}

int free(void)
{
    int t1;

    t1 = *(int *)(((*(int *)0xC94DF78) + 0x4));
    return ((int (*)(void))(t1))();
}

int syRealloc(void)
{
    int t1;

    t1 = *(int *)(((*(int *)0xC94DF78) + 0xC));
    return ((int (*)(void))(t1))();
}

int calloc(void)
{
    int t1;

    t1 = *(int *)(((*(int *)0xC94DF78) + 0x8));
    return ((int (*)(void))(t1))();
}

int FUN_0c0e62d4(int a4, int a5, int a6, int a7)
{
    return FUN_0c0ed8dc(a4, 0x0, 0xA, a7);
}

int FUN_0c0e66c0(int a4, int a5)
{
    *(unsigned int *)((a5 + 0x0)) = 0x0;
    return 0x0;
}

int FUN_0c0ed650(int a4)
{
    return FUN_0c0e2a4c((*(int *)((a4 + 0x3C))));
}

int FUN_0c0f3a72(void)
{
    return ((int (*)(void))(0xC0F3B90))();
}

int FUN_0c20d188(void)
{
    return FUN_0c20ee8e((*(int *)0xC23636C));
}

int FUN_0c20d190(void)
{
    return FUN_0c20eee6((*(int *)0xC23636C));
}

int gdFsGetGlobalErrG(void)
{
    return (*(int *)(((*(int *)0xC2393C4) + 0x30)));
}

int gdFsGetWorkHnG(void)
{
    return (*(int *)(((*(int *)0xC2393C4) + 0x1C)));
}

int gdFsGetSysHnG(void)
{
    return (*(int *)(((*(int *)0xC2393C4) + 0x14)));
}

int gdFsInit(void)
{
    return gdFsInitOvl();
}

int gdFsOpenG(int a4, int a5)
{
    return FUN_0c20fa76(a4);
}

int pdGetMode(void)
{
    return kdGetDriverMode(0x5);
}

int pdGunCheck(void)
{
    return kdGetDriverMode(0x8);
}

int pdGunGetPosition(int a4, int a5)
{
    return kdGetGunPosition(a4, a5);
}

void syRtcSetServerMode(int a4)
{
    *(unsigned int *)0xC94DFB0 = a4;
}

int syRtcGetStat(void)
{
    return (*(int *)0xC94DFB0);
}

int buSetCompleteCallback(int a4)
{
    return vmsfs_c_setcompletecallback(a4);
}

int buSetProgressCallback(int a4)
{
    return vmsfs_c_setprogresscallback(a4);
}

int buGetVersion(void)
{
    return (*(int *)0xC2393D8);
}

int buSetCallbackParam(int a4)
{
    return vmsfs_c_setcallbackparam(a4);
}

int buIsReady(int a4)
{
    return vmsfs_ismount(a4);
}

int buIsFormat(int a4)
{
    return vmsfs_isformat(a4);
}

int FUN_0c0e65e0(void)
{
    return 0x0;
}

void FUN_0c0eca30(void)
{
    
}

int kmSetForwardClipping(void)
{
    return 0x78;
}

void ovFinish(void)
{
    
}

int gdFsOpenFastG(int a4, int a5)
{
    return gdFsOpenG(a4, a5);
}

int gdFsLoadDirFastG(int a4, int a5)
{
    return gdFsLoadDirG(a4, a5);
}

void syMallocFinish(void)
{
    
}

int buInterruptHandler(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    return buExecServer(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
}

int buRemount(int a4)
{
    return buMount(a4);
}

int FUN_0c0e6f60(int a4, int a5)
{
    return FUN_0c0e6f62(a4, a5, 1.0f);
}

int FUN_0c0eaa20(int a4, int a5, float f4, float f5)
{
    return FUN_0c0eaa22(a4, a5, 1.0f, f5);
}

int FUN_0c0eb9c0(int a4, int a5, float f4, float f5)
{
    return FUN_0c0eb9c2(a4, a5, 1.0f, f5);
}

int kmSetEndOfYUVCallback(int a4, int a5)
{
    return FUN_0c20d728(a4, a5);
}
