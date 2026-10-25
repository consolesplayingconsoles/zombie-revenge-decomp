/* Straight-line functions with calls and guards (batch gen_n): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int ADXB_GetBlkSmpl(int);
int ADXB_GetFormat(int);
int ADXB_GetLpEndOfst(int);
int ADXB_GetLpEndPos(int);
int ADXB_GetLpStartOfst(int);
int ADXB_GetLpStartPos(int);
int ADXB_GetNumChan(int);
int ADXB_GetNumLoop(int);
int ADXB_GetOutBps(int);
int ADXB_GetSfreq(int);
int ADXB_GetTotalNumSmpl(int);
int ADXB_Stop(int);
int ADXSTM_Stop(int);
int FUN_0c0e5e74(void);
int FUN_0c0e5fe4(int);
int FUN_0c0e631c(int, int, int);
int FUN_0c0edc20(int, int, int);
int FUN_0c210378(void);
int FUN_0c22b736(int, int, int, int);
int FUN_0c22b866(int, int, int, int);
int FUN_0c22b994(int);
int FUN_0c22ba6e(int);
int FUN_0c22bece(int, int, int, int);
int FUN_0c22bfa2(int, int, int, int);
int FUN_0c22c4ca(void);
int FUN_0c22c6d0(void);
int FUN_0c22c7fe(int, int, int, int);
int FUN_0c22c884(int, int, int, int);
int FUN_0c22c8bc(int, int, int, int);
int FUN_0c22c8cc(int, int, int, int);
int FUN_0c22c932(int, int, int, int);
int FUN_0c22cbe0(int, int, int, int);
int FUN_0c23269c(void);
int FUN_0c232e9c(int, int);
int FUN_0c232ed0(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxsjd_decode_exec(int);
int adxsjd_decode_prep(int);
int adxstmf_stat_exec(int);
int gdFsClose(int);
int gdFsGetStat(int);
int gdFsSeek(int, int, int);
int gdFsTell(int);
int kdGetDeviceInfo(int);
int kdRecvFrame(void);
int memset(int, int, int);
int mpdrv_get_portstatus(int);
int mpdrv_get_version(int, int);
int mpdrv_ischanged(int);
int mpdrv_recognize(int);
int mpdrv_set_allstatreq(void);
int mpdrv_set_arctrl(void);
int mpdrv_set_bread(int, ...);
int mpdrv_set_bwrite(int, ...);
int mpdrv_set_dkill(void);
int mpdrv_set_dreq(void);
int mpdrv_set_dreset(void);
int mpdrv_set_ft4ctrl(void);
int mpdrv_set_getcond(void);
int mpdrv_set_getlerr(int, ...);
int mpdrv_set_getminfo(void);
int mpdrv_set_hreset(void);
int mpdrv_set_setcond(void);
int mpdrv_set_transagain(void);
int mpdrv_stat(int);
int mwRnaGetNumData(int, int, int, int);
int pdVibSetUnitInfo(int, int, int, int, int, int);
int set_file_info(int, int, int, int);
int vmsfb_exec(int, int, int, int, float, float, float, float, float, float, float, float);
int vmsfs_c_dispatch(int, int, int);
int vmsfs_read_retry(int, int, int);
int vmsfs_write_retry(int, int, int);
int vmsio_exit(void);
int vmsio_ismount(int);
int vmsio_isready(int);
int fmMngWrite(int a4, int a5);
int search_exec_file(int a4, int a5);
int FUN_0c229d7e(Stk4 s);
int vmsfs_init_work_new(int a4);
int vmsfs_dpf(Stk4 s);
int fmMngRead(int a4, int a5);
int pdVibGetInfo(int a4, int a5);
int FUN_0c22b6fa(void);
int kdDevGetTimerInfo(int a4, int a5);
int vmsfs_isready(void);
int ADXF_Init(void);
int FUN_0c22909c(int a4, int a5, int a6);
int ADXF_Finish(void);
int kdDevGetVibrationInfo(int a4, int a5);
int vmsfs_resetwork(int a4);
int kdSetBlockWrite(Stk4 s);
void pdVibGetUnitInfoCallback(int a4, int a5, int a6, int a7);
int vmsfs_ismount(int a4);
int set_fat(int a4, int a5);
int kdDevGetFD(int a4, int a5);
int vmsfs_setdevicetype(int a4);
int search_free_dir(int a4);
int open_file_handle(void);
int ADXSJD_ExecServer(void);
int ADXSTM_Start(int a4);
int ADXSTM_GetFsizeSct(int a4, int a5);
int kdSetBlockRead(Stk4 s);
int kdSetGetLastError(Stk4 s);
int vmsfs_unmount(int a4);
void ADXCRS_Lock(int a4, int a5);
void ADXSTM_Close(int a4);
int ADXSTM_ExecServer(void);
int adxt_eos_entry(int a4);
int mwlRnaAlloc(void);
int kdSetDeviceRequest(void);
int kdSetAllStatusRequest(void);
int kdSetDeviceKill(void);
int kdSetDeviceReset(void);
int kdSetGetCondition(void);
int kdSetGetMediaInfo(void);
int kdSetSetCondition(void);
int kdSetFT4Control(void);
int kdSetARControl(void);
int kdSetTransmitAgain(void);
int kdSetResetPattern(void);
int vmsfs_c_execcallback(int a4, int a5, int a6);
int pdVibIsReady(int a4);
void ADXCRS_Unlock(void);
int ADXSTM_GetCurOfst(int a4, int a5);
int FUN_0c22b324(void);
int kdSetCallback(int a4, int a5, int a6);
void vmsfs_c_setparam(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
void vmsfs_c_setvolume(int a4, int a5);
void DECtoBCD(int a4, int a5, int a6);
int vmsfs_c_progress(int a4);
int get_fat(int a4, int a5);
int adxsjd_clear(int a4);
int ADXSTM_GetFad(int a4, int a5);
int FUN_0c22abc0(int a4, int a5);
int vmsfs_c_setcompletecallback(int a4);
int vmsfs_c_setprogresscallback(int a4);
int vmsfs_c_setcallbackparam(int a4);
void FUN_0c229058(int a4, int a5, int a6);
int ADXSTM_GetGdfsStat(int a4, int a5);
int vmsfs_c_settime(int a4, int a5);
int str_len(int a4);
int direntry_dirty(int a4, int a5);
int FUN_0c229d5a(void);
int FUN_0c229d40(void);
int ADXSJD_Stop(int a4);
int vmsfs_exit(void);
int read_sys(int a4);
int write_sys(int a4);
int direntry(int a4, int a5);
int BCDtoDEC(int a4);
int FUN_0c22904c(int a4, int a5, int a6);
int ADXSTM_Seek(int a4, int a5);
int ADXSTM_Tell(int a4);
void FUN_0c22b6c8(int a4);
int ADXSJD_Start(int a4);
void FUN_0c22b6e0(int a4);
void FUN_0c229088(int a4, int a5);
int FUN_0c229ef4(void);
int ADXRNA_SetStmHdInfo(int a4, int a5, int a6, int a7);
int ADXSJD_ExecHndl(int a4);
int syCblCheckCable(void);
int vmsfs_c_exit(void);
int FUN_0c229de6(int a4);
int FUN_0c22a638(void);
void kdSetHandler(int a4, int a5);
int vmsfs_c_getstate(int a4);
void vmsfs_c_setfunc(int a4, int a5);
void FUN_0c22907e(int a4, int a5, int a6);
int FUN_0c22a554(int a4);
int FUN_0c22a578(int a4);
int FUN_0c22a5c0(int a4);
int FUN_0c22a5cc(int a4);
int FUN_0c22a5d8(int a4);
int FUN_0c22a5e4(int a4);
int kdGetPortStatus(int a4);
int ADXSTMF_ExecHndl(int a4);
void kdGetGunPosition(int a4, int a5);
int syCblCheckCableType(void);
int FUN_0c228e94(int a4, int a5);
int FUN_0c228ea8(int a4, int a5);
int FUN_0c228ebc(int a4, int a5);
int FUN_0c228ed0(int a4, int a5);
int FUN_0c228ee4(int a4, int a5);
int FUN_0c228f0c(int a4, int a5);
int FUN_0c228f20(int a4, int a5);
int FUN_0c22a548(int a4);
int FUN_0c22a560(int a4);
int FUN_0c22a56c(int a4);
int FUN_0c22a590(int a4);
int FUN_0c22a5a8(int a4);
int ADXSTM_GetBufSize(int a4, int a5, int a6);
int FUN_0c229000(int a4, int a5, int a6);
int FUN_0c229028(int a4, int a5, int a6);
void ADXERR_EntryErrFunc(int a4, int a5);
int FUN_0c229f08(void);
int FUN_0c22a51e(int a4, int a5, int a6);
void FUN_0c22a934(void);
void kdSetGunTrigger(int a4);
int vmsfs_setretry(int a4);
int close_file_handle(int a4);
void FUN_0c229734(void);
void FUN_0c229ce0(void);
int FUN_0c22a6d8(int a4);
int ADXSTM_SetBufSize(int a4, int a5, int a6);
int kdGetStatus(int a4);
int kdIsChanged(int a4);
int kdGetVersion(int a4, int a5);
int kdRecognizeChanged(int a4);
int kdGetSystemInfo(void);
int kdGetGunLatchedPort(void);
void kdSetGunCallback(int a4);
int vmsfs_c_synch(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int thunk_FUN_0c22b736(int a4, int a5, int a6, int a7);
int thunk_FUN_0c22bece(int a4, int a5, int a6, int a7);
int thunk_FUN_0c22b6fa(void);
int thunk_FUN_0c22bfa2(int a4, int a5, int a6, int a7);
int thunk_FUN_0c22c7c2(int a4, int a5, int a6, int a7);
int thunk_FUN_0c22c8bc(int a4, int a5, int a6, int a7);
int thunk_FUN_0c22c7fe(int a4, int a5, int a6, int a7);
int thunk_FUN_0c22b866(int a4, int a5, int a6, int a7);
int thunk_FUN_0c22c932(int a4, int a5, int a6, int a7);
int thunk_FUN_0c22c8cc(int a4, int a5, int a6, int a7);
int thunk_FUN_0c22c884(int a4, int a5, int a6, int a7);
int thunk_FUN_0c22c6d0(void);
int thunk_FUN_0c22c4ca(void);
int FUN_0c22a530(int a4, int a5);
int FUN_0c22a53c(int a4, int a5);
int FUN_0c22a5f0(int a4);
void ADXSTM_EntryEosFunc(int a4, int a5, int a6);
int ADXSTM_SetReqRdSize(int a4, int a5);
int vmsfs_c_fiber0(int a4, int a5, int a6);
int vmsfs_c_fiber4(int a4, int a5, int a6);
int vmsfs_c_fiber1(int a4, int a5, int a6);
int vmsfs_c_fiber5(int a4, int a5, int a6);
int vmsfs_c_fiber2(int a4, int a5, int a6);
int vmsfs_c_fiber3(int a4, int a5, int a6);
int vmsfs_stat(void);
int check_isopen(void);
int thunk_FUN_0c22904c(int a4, int a5, int a6);
int FUN_0c229e1c(void);
void FUN_0c229e76(void);
int FUN_0c22a06c(int a4);
void FUN_0c22a070(int a4, int a5);
void FUN_0c22a080(int a4, int a5);
int FUN_0c22a512(int a4);
void FUN_0c22a516(int a4, int a5);
void FUN_0c22a528(int a4, int a5);
int ADXSTM_GetStat(int a4);
int ADXSTM_GetSj(int a4);
void ADXSTM_EntryErrFunc(void);
void adxt_stat_playend(void);
void FUN_0c22b6f6(void);
int vmsfs_c_fiber7(int a4, int a5, int a6);

int fmMngWrite(int a4, int a5)
{
    int t0;
    int t5;

    t0 = *(int *)0xC239E50;
    if (t0 == 0) {
        return 0xFFFFFFF5;
    }
    if ((*(int *)((t0 + 0x1C))) != 0) {
        return 0xFFFFFFF7;
    }
    if (((int)a4 >= 0) && (t5 = *(int *)((t0 + 0x14)), (int)a4 < (int)t5)) {
        *(unsigned int *)((t0 + 0x1C)) = 0x2;
        *(unsigned int *)(((*(int *)0xC239E50) + 0x20)) = 0x2;
        *(unsigned int *)(((*(int *)0xC239E50) + 0x28)) = a4;
        *(unsigned int *)(((*(int *)0xC239E50) + 0x30)) = a5;
        *(unsigned int *)(((*(int *)0xC239E50) + 0x24)) = 0x0;
        return 0x0;
    }
    return 0xFFFFFFFB;
}

int search_exec_file(int a4, int a5)
{
    int t1;
    int t2;
    int t6;

    t1 = (*(int *)((((a4 * 0x148) + 0xC956768) + 0x28)));
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x30)))) {
            return 0xFFFFFFFF;
        }
        t6 = *(signed char *)((t1 + 0x0));
        if ((unsigned char)t6 == 0xCC) {
            break;
        }
        t1 = (t1 + 0x20);
        t2 = (t2 + 0x1);
    }
    set_file_info(t1, a5, ((a4 * 0x148) + 0xC956768), (unsigned char)t6);
    return t2;
}

int FUN_0c229d7e(Stk4 s)
{
    int t0;
    int t3;
    int t6;
    int stk[15];

    stk[3] = s.w[0];
    stk[4] = s.w[1];
    stk[5] = s.w[2];
    stk[6] = s.w[3];
    t0 = ((((int)stk + 4) + 0x8) + 0x4);
    if ((0x3 & ((((int)stk + 4) + 0x8) + 0x4)) != 0) {
        t0 = ((((int)stk + 4) + 0x8) + 0x8);
    }
    t3 = *(int *)0xC239E60;
    t6 = (FUN_0c0edc20(0xC95CD88, s.w[0], t0));
    if (t3 != 0) {
        t6 = (((int (*)(int, int))(t3))((*(int *)0xC239E64), 0xC95CD88));
    }
    return t6;
}

int vmsfs_init_work_new(int a4)
{
    int t0;

    t0 = *(int *)0xC956764;
    if (a4 != 15) {
        if (a4 != 33) {
            if (a4 != 65) {
                if (a4 != 122) {
                    return 0xFFFFFF00;
                }
                *(unsigned int *)((t0 + 0x4)) = 0x3;
                return 0x0;
            }
            *(unsigned int *)((t0 + 0x4)) = 0x2;
            return 0x0;
        }
        *(unsigned int *)((t0 + 0x4)) = 0x1;
        return 0x0;
    }
    *(unsigned int *)((t0 + 0x4)) = 0x0;
    return 0x0;
}

int vmsfs_dpf(Stk4 s)
{
    int t0;
    int t3;
    int t5;
    int stk[15];

    stk[3] = s.w[0];
    stk[4] = s.w[1];
    stk[5] = s.w[2];
    stk[6] = s.w[3];
    t0 = ((((int)stk + 4) + 0x8) + 0x4);
    if ((0x3 & ((((int)stk + 4) + 0x8) + 0x4)) != 0) {
        t0 = ((((int)stk + 4) + 0x8) + 0x8);
    }
    t3 = *(int *)0xC239CEC;
    t5 = (FUN_0c0edc20(0xC95C674, s.w[0], t0));
    if (t3 != 0) {
        t5 = (((int (*)(int))(t3))(0xC95C674));
    }
    return t5;
}

int fmMngRead(int a4, int a5)
{
    int t0;
    int t5;

    t0 = *(int *)0xC239E50;
    if (t0 == 0) {
        return 0xFFFFFFF5;
    }
    if ((*(int *)((t0 + 0x1C))) != 0) {
        return 0xFFFFFFF7;
    }
    if (((int)a4 >= 0) && (t5 = *(int *)((t0 + 0x14)), (int)a4 < (int)t5)) {
        *(unsigned int *)((t0 + 0x1C)) = 0x1;
        *(unsigned int *)(((*(int *)0xC239E50) + 0x20)) = 0x2;
        *(unsigned int *)(((*(int *)0xC239E50) + 0x28)) = a4;
        *(unsigned int *)(((*(int *)0xC239E50) + 0x30)) = a5;
        return 0x0;
    }
    return 0xFFFFFFFB;
}

int pdVibGetInfo(int a4, int a5)
{
    int t1;
    int t2;
    int stk[6];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t1 = kdGetDeviceInfo((*(int *)(((int)stk + 8))));
    t2 = kdDevGetVibrationInfo((((int)stk + 4) + 0x8), t1);
    if ((int)t2 < 0) {
        return 0xFFFFFFFE;
    }
    *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x0)) = (*(int *)(((int)stk + 12)));
    *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x1)) = (*(signed char *)(((int)stk + 16)));
    return 0x0;
}

int FUN_0c22b6fa(void)
{
    int t2;
    int t3;

    memset(0xC95F6B0, 0x0, 0x4E0);
    memset(0xC95FB90, 0x0, 0x820);
    t2 = 0x0;
    t3 = 0xC9603B0;
    for (;;) {
        t2 = (t2 + 0x1);
        *(unsigned int *)((t3 + 0x0)) = 0x80808080;
        t3 = (t3 + 0x4);
        if ((int)t2 >= (int)0x200) {
            break;
        }
    }
    FUN_0c232ed0();
    FUN_0c22b6f6();
    return FUN_0c232e9c(0x0, 0x0);
}

int kdDevGetTimerInfo(int a4, int a5)
{
    int t0;

    t0 = kdDevGetFD(a5, 0x8);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned char *)((a4 + 0x0)) = (*(signed char *)((t0 + 0x0)));
    *(unsigned char *)((a4 + 0x1)) = (*(signed char *)((t0 + 0x1)));
    *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((t0 + 0x2)));
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((t0 + 0x3)));
    return 0x0;
}

int vmsfs_isready(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = 0x0;
    t1 = 0x1;
    t2 = 0x0;
    for (;;) {
        t3 = vmsio_isready(t2);
        t2 = (t2 + 0x1);
        if (t3 != 0) {
            t0 = (t0 | t1);
        }
        t1 = (t1 << 1);
        if ((int)t2 >= (int)0x8) {
            break;
        }
    }
    return t0;
}

int ADXF_Init(void)
{
    memset(0xC95DF88, 0x0, 0x300);
    memset(0xC95E288, 0x0, 0x400);
    memset(0xC95E68C, 0xFF, 0x1000);
    memset(0xC95F68C, 0x0, 0x20);
    *(unsigned int *)0xC95F6AC = 0x0;
    *(unsigned int *)0xC95E688 = 0x0;
    return 0xC95E688;
}

int FUN_0c22909c(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t1 = a4;
    t2 = a5;
    t3 = a6;
    t4 = 0x0;
    t5 = (((a5 << 2) << 2) << 2);
    for (;;) {
        if ((int)t5 <= 0) {
            break;
        }
        t6 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        t3 = t6;
        t2 = 0x8;
        for (;;) {
            if ((((signed char)t3) & 0x80) == 0) {
                t2 = (t2 - 1);
                t3 = (t3 << 1);
                t4 = (t4 + 0x1);
                if ((int)t2 <= 0) {
                    break;
                }
                continue;
            }
            return t4;
        }
        t5 = (t5 - 1);
    }
    return t4;
}

int ADXF_Finish(void)
{
    *(unsigned int *)0xC95E688 = 0x0;
    *(unsigned int *)0xC95F6AC = 0x0;
    memset(0xC95F68C, 0x0, 0x20);
    memset(0xC95E68C, 0xFF, 0x1000);
    memset(0xC95E288, 0x0, 0x400);
    return (memset(0xC95DF88, 0x0, 0x300));
}

int kdDevGetVibrationInfo(int a4, int a5)
{
    int t0;

    t0 = kdDevGetFD(a5, 0x100);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)((a4 + 0x0)) = (unsigned char)(*(signed char *)((t0 + 0x0)));
    *(unsigned int *)((a4 + 0x4)) = (unsigned char)(*(signed char *)((t0 + 0x1)));
    return 0x0;
}

int vmsfs_resetwork(int a4)
{
    memset(((a4 * 0x148) + 0xC956768), 0x0, 0x148);
    *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x1C)) = ((a4 * 0x4C) + 0xC95B1C8);
    return 0x0;
}

int kdSetBlockWrite(Stk4 s)
{
    int t0;

    t0 = mpdrv_set_bwrite(s.w[0], s.w[1], s.w[2]);
    if ((*(int *)(((*(int *)0xC98E18C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

void pdVibGetUnitInfoCallback(int a4, int a5, int a6, int a7)
{
    int t3;

    if ((*(int *)((((a4 * 0x1C) + 0xC95CAE8) + 0xC))) != 0) {
        t3 = pdVibSetUnitInfo(a4, a5, a6, a7, ((*(int *)((((a4 * 0x1C) + 0xC95CAE8) + 0x4)))), 0x0);
        ((int (*)(int, int))((*(int *)((((a4 * 0x1C) + 0xC95CAE8) + 0xC)))))(t3, (*(int *)((((a4 * 0x1C) + 0xC95CAE8) + 0x8))));
    return;
    }
}

int vmsfs_ismount(int a4)
{
    int t0;
    int t1;

    t0 = vmsio_ismount(a4);
    if ((t0 != 0) && (t1 = *(signed char *)((((a4 * 0x148) + 0xC956768) + 0x8)), t1 != 0)) {
        return 0x1;
    }
    return 0x0;
}

int set_fat(int a4, int a5)
{
    int t3;
    int t4;

    if ((int)a5 <= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x0)))) {
        t3 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x24));
        t4 = *(int *)(((*(int *)0xC956764) + 0x10));
        return ((int (*)(int, int))(t4))(t3, (a5 << 1));
    }
    return a5;
}

int kdDevGetFD(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)((a4 + 0x0));
    t1 = 0x0;
    t2 = (a4 + 0x4);
    t3 = 0x80000000;
    t4 = (a4 + 0x4);
    for (;;) {
        if ((t3 & t0) != 0) {
            if (a5 == t3) {
                break;
            }
            t2 = (t2 + 0x4);
            t4 = t2;
            t1 = (t1 + 0x1);
            t3 = ((unsigned int)t3 >> 1);
            if ((int)t1 >= (int)0x20) {
                return 0x0;
            }
            continue;
        }
        t1 = (t1 + 0x1);
        t3 = ((unsigned int)t3 >> 1);
        if ((int)t1 >= (int)0x20) {
            return 0x0;
        }
    }
    return t4;
}

int vmsfs_setdevicetype(int a4)
{
    int t1;
    int t4;

    *(unsigned int *)(((*(int *)0xC956764) + 0x0)) = (a4 & 0x1);
    t1 = *(int *)0xC956764;
    if ((a4 & 0x1) == 1) {
        *(unsigned int *)((t1 + 0xC)) = 0xC231FC4;
        *(unsigned int *)(((*(int *)0xC956764) + 0x10)) = 0xC231FD6;
        t4 = (a4 & 0x1);
    } else {
        *(unsigned int *)((t1 + 0xC)) = 0xC231FCE;
        *(unsigned int *)(((*(int *)0xC956764) + 0x10)) = 0xC231FDE;
        t4 = 0xC231FCE;
    }
    return t4;
}

int search_free_dir(int a4)
{
    int t1;
    int t2;

    t1 = 0x0;
    t2 = (*(int *)((((a4 * 0x148) + 0xC956768) + 0x28)));
    for (;;) {
        if ((int)t1 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x30)))) {
            return 0xFFFFFFFF;
        }
        if ((unsigned char)(*(signed char *)((t2 + 0x0))) == 0) {
            break;
        }
        t2 = (t2 + 0x20);
        t1 = (t1 + 0x1);
    }
    return t1;
}

int open_file_handle(void)
{
    int t0;
    int t1;

    t0 = 0xC95B428;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)0xC95B668)) {
            *(unsigned int *)0xC95B66C = 0xFFFFFF07;
            return 0x0;
        }
        if ((*(signed char *)((t0 + 0x0))) == 0) {
            break;
        }
        t0 = (t0 + 0x48);
        t1 = (t1 + 0x1);
    }
    *(unsigned char *)((t0 + 0x0)) = 0x1;
    *(unsigned int *)((t0 + 0xC)) = t1;
    return t0;
}

int ADXSJD_ExecServer(void)
{
    int t0;
    int t1;
    int t3;

    t0 = 0xC95CE88;
    for (;;) {
        t1 = *(signed char *)((t0 + 0x0));
        t3 = t1;
        if (t1 == 1) {
            t3 = (ADXSJD_ExecHndl(t0));
        }
        t0 = (t0 + 0x90);
        if ((unsigned int)t0 >= (unsigned int)0xC95D308) {
            break;
        }
    }
    return t3;
}

int ADXSTM_Start(int a4)
{
    if ((*(int *)((a4 + 0x14))) == 0) {
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0xC)) = 0x0;
        *(unsigned char *)((a4 + 0x1)) = 0x3;
    } else {
        *(unsigned char *)((a4 + 0x1)) = 0x2;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0xC)) = (gdFsTell((*(int *)((a4 + 0x8)))));
    }
    return 0x1;
}

int ADXSTM_GetFsizeSct(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int stk[6];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c210378();
    t1 = *(int *)(((int)stk + 12));
    t2 = *(int *)(((int)stk + 4));
    t4 = (t1 + 0x7FF);
    if ((int)(t1 + 0x7FF) < 0) {
        t4 = ((t1 + 0x7FF) + 0x7FF);
    }
    *(unsigned int *)((t2 + 0x0)) = ((int)t4 >> 11);
    return t0;
}

int kdSetBlockRead(Stk4 s)
{
    int t0;

    t0 = mpdrv_set_bread(s.w[0]);
    if ((*(int *)(((*(int *)0xC98E18C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetGetLastError(Stk4 s)
{
    int t0;

    t0 = mpdrv_set_getlerr(s.w[0]);
    if ((*(int *)(((*(int *)0xC98E18C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int vmsfs_unmount(int a4)
{
    if ((*(signed char *)((((a4 * 0x148) + 0xC956768) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    *(unsigned char *)((((a4 * 0x148) + 0xC956768) + 0x9)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0xC956768) + 0x8)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0xC956768) + 0xA)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0xC956768) + 0xB)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0xC956768) + 0xC)) = 0x0;
    *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x4)) = 0x0;
    return 0x0;
}

void ADXCRS_Lock(int a4, int a5)
{
    int t1;

    if ((*(int *)0xC239E58) == 0) {
        t1 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        *(unsigned int *)0xC239E5C = t1;
    }
    *(unsigned int *)0xC239E58 = ((*(int *)0xC239E58) + 0x1);
}

void ADXSTM_Close(int a4)
{
    if (a4 != 0) {
        ADXSTM_Stop(a4);
        if ((*(int *)((a4 + 0x8))) != 0) {
            gdFsClose((*(int *)((a4 + 0x8))));
        }
        FUN_0c22a6d8(a4);
    return;
    }
}

int ADXSTM_ExecServer(void)
{
    int t0;
    int t1;
    int t3;

    t0 = 0xC95D308;
    for (;;) {
        t1 = *(signed char *)((t0 + 0x0));
        t3 = t1;
        if (t1 == 1) {
            t3 = (ADXSTMF_ExecHndl(t0));
        }
        t0 = (t0 + 0x64);
        if ((unsigned int)t0 >= (unsigned int)0xC95DF88) {
            break;
        }
    }
    return t3;
}

int adxt_eos_entry(int a4)
{
    int t0;
    int t2;
    int t4;

    t0 = *(int *)((a4 + 0x8));
    t2 = FUN_0c22a5cc((*(int *)((a4 + 0x4))));
    t4 = t2;
    if ((int)t2 < 0) {
        t4 = (t2 + 0x7FF);
    }
    return ADXSTM_Seek(t0, ((int)t4 >> 11));
}

int mwlRnaAlloc(void)
{
    int t0;
    int t1;
    int t6;

    if ((unsigned int)0xC95F6B0 < (unsigned int)0xC95FB90) {
        t0 = 0xC95F6B0;
        t1 = 0xC95F6B0;
        for (;;) {
            if ((*(signed char *)((t0 + 0x0))) == 0) {
                break;
            }
            t0 = (t0 + 0x9C);
            t1 = (t1 + 0x9C);
            if ((unsigned int)t0 >= (unsigned int)0xC95FB90) {
                return 0x0;
            }
        }
        t6 = t1;
    } else {
        t6 = 0x0;
    }
    return t6;
}

int kdSetDeviceRequest(void)
{
    int t0;

    t0 = mpdrv_set_dreq();
    if ((*(int *)(((*(int *)0xC98E18C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetAllStatusRequest(void)
{
    int t0;

    t0 = mpdrv_set_allstatreq();
    if ((*(int *)(((*(int *)0xC98E18C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetDeviceKill(void)
{
    int t0;

    t0 = mpdrv_set_dkill();
    if ((*(int *)(((*(int *)0xC98E18C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetDeviceReset(void)
{
    int t0;

    t0 = mpdrv_set_dreset();
    if ((*(int *)(((*(int *)0xC98E18C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetGetCondition(void)
{
    int t0;

    t0 = mpdrv_set_getcond();
    if ((*(int *)(((*(int *)0xC98E18C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetGetMediaInfo(void)
{
    int t0;

    t0 = mpdrv_set_getminfo();
    if ((*(int *)(((*(int *)0xC98E18C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetSetCondition(void)
{
    int t0;

    t0 = mpdrv_set_setcond();
    if ((*(int *)(((*(int *)0xC98E18C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetFT4Control(void)
{
    int t0;

    t0 = mpdrv_set_ft4ctrl();
    if ((*(int *)(((*(int *)0xC98E18C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetARControl(void)
{
    int t0;

    t0 = mpdrv_set_arctrl();
    if ((*(int *)(((*(int *)0xC98E18C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetTransmitAgain(void)
{
    int t0;

    t0 = mpdrv_set_transagain();
    if ((*(int *)(((*(int *)0xC98E18C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetResetPattern(void)
{
    int t0;

    t0 = mpdrv_set_hreset();
    if ((*(int *)(((*(int *)0xC98E18C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int vmsfs_c_execcallback(int a4, int a5, int a6)
{
    int t1;
    int t2;

    if ((*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC954350) + 0x74))) != 0) {
        t1 = *(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC954350) + 0x74));
        t2 = *(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC954350) + 0x7C));
        return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, t2);
    }
    return 0x74;
}

int pdVibIsReady(int a4)
{
    int t1;

    t1 = *(int *)(((kdGetDeviceInfo(a4)) + 0x0));
    if ((t1 & 0x100) != 0) {
        return 0x1;
    }
    return 0x0;
}

void ADXCRS_Unlock(void)
{
    int t0;

    t0 = *(int *)0xC239E58;
    *(unsigned int *)0xC239E58 = (t0 - 1);
    if ((t0 - 1) == 0) {
        _builtin_set_imask(((unsigned int)((((*(int *)0xC239E5C) & 0xF) << 2) << 2) >> 4));
    }
}

int ADXSTM_GetCurOfst(int a4, int a5)
{
    *(unsigned int *)((a5 + 0x0)) = ((gdFsTell((*(int *)((a4 + 0x8))))) - (*(int *)((a4 + 0xC))));
    return 0x1;
}

int FUN_0c22b324(void)
{
    int stk[2];

    *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    return ((int (*)(void))(0xAC22B350))();
}

int kdSetCallback(int a4, int a5, int a6)
{
    int t1;

    t1 = *(int *)(((*(int *)0xC98E18C) + 0xFC0));
    *(unsigned int *)((((((((a4 << 1) + t1) << 1) + ((a4 << 1) + t1)) << 2) + 0xC95406C) + 0x8)) = a5;
    *(unsigned int *)((((((((a4 << 1) + t1) << 1) + ((a4 << 1) + t1)) << 2) + 0xC95406C) + 0x4)) = a6;
    *(unsigned int *)((((((((a4 << 1) + t1) << 1) + ((a4 << 1) + t1)) << 2) + 0xC95406C) + 0x0)) = a4;
    return 0x0;
}

void vmsfs_c_setparam(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    *(unsigned int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC954350) + 0x14)) = a5;
    *(unsigned int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC954350) + 0x18)) = a6;
    *(unsigned int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC954350) + 0x1C)) = a7;
    *(unsigned int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC954350) + 0x20)) = a8;
    *(unsigned int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC954350) + 0x24)) = a9;
    *(unsigned int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC954350) + 0x28)) = a10;
    *(unsigned int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC954350) + 0x4)) = 0x1;
}

void vmsfs_c_setvolume(int a4, int a5)
{
    int t0;
    int t1;
    int t2;

    t0 = ((((((a4 << 2) << 2) << 2) << 1) + 0xC954350) + 0x4C);
    t1 = a5;
    for (;;) {
        t2 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        *(unsigned char *)((t0 + 0x0)) = t2;
        t0 = (t0 + 0x1);
        if ((unsigned int)t0 >= (unsigned int)((((((a4 << 2) << 2) << 2) << 1) + 0xC954350) + 0x6C)) {
            break;
        }
    }
}

void DECtoBCD(int a4, int a5, int a6)
{
    FUN_0c0e5e74();
    FUN_0c0e5fe4(a4);
}

int vmsfs_c_progress(int a4)
{
    int t1;

    if ((*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC954350) + 0x78))) != 0) {
        t1 = *(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC954350) + 0x78));
        return ((int (*)(int))(t1))(a4);
    }
    return 0x78;
}

int get_fat(int a4, int a5)
{
    int t1;
    int t2;

    t1 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x24));
    t2 = *(int *)(((*(int *)0xC956764) + 0xC));
    return ((int (*)(int, int))(t2))(t1, (a5 << 1));
}

int adxsjd_clear(int a4)
{
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x30)) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x7FFFFFFF;
    *(unsigned int *)((a4 + 0x3C)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x40)) = 0x0;
    *(unsigned int *)((a4 + 0x44)) = 0x0;
    *(unsigned char *)((a4 + 0x3)) = 0x0;
    return 0x0;
}

int ADXSTM_GetFad(int a4, int a5)
{
    int t0;
    int stk[6];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c210378();
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = (*(int *)(((int)stk + 8)));
    return t0;
}

int FUN_0c22abc0(int a4, int a5)
{
    int t0;
    int stk[6];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c210378();
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = (*(int *)(((int)stk + 12)));
    return t0;
}

int vmsfs_c_setcompletecallback(int a4)
{
    int t0;

    t0 = 0xC954350;
    for (;;) {
        *(unsigned int *)((t0 + 0x74)) = a4;
        t0 = (t0 + 0x80);
        if ((unsigned int)t0 >= (unsigned int)0xC954750) {
            break;
        }
    }
    return 0x74;
}

int vmsfs_c_setprogresscallback(int a4)
{
    int t0;

    t0 = 0xC954350;
    for (;;) {
        *(unsigned int *)((t0 + 0x78)) = a4;
        t0 = (t0 + 0x80);
        if ((unsigned int)t0 >= (unsigned int)0xC954750) {
            break;
        }
    }
    return 0x78;
}

int vmsfs_c_setcallbackparam(int a4)
{
    int t0;

    t0 = 0xC954350;
    for (;;) {
        *(unsigned int *)((t0 + 0x7C)) = a4;
        t0 = (t0 + 0x80);
        if ((unsigned int)t0 >= (unsigned int)0xC954750) {
            break;
        }
    }
    return 0x7C;
}

void FUN_0c229058(int a4, int a5, int a6)
{
    int t0;
    int t3;
    int t4;
    int t5;
    int t6;
    int t2;

    t0 = a6;
    if ((int)a6 < 0) {
        t0 = (a6 + 0x3);
    }
    t3 = a4;
    t4 = a5;
    t5 = ((t0 >> 1) >> 1);
    for (;;) {
        t6 = ((int)t5 > 0);
        t5 = (t5 - 1);
        if (!t6) {
            break;
        }
        t2 = (*(int *)((t3 + 0x0)));
        t3 = (t3 + 0x4);
        *(unsigned int *)((t4 + 0x0)) = t2;
        t4 = (t4 + 0x4);
    }
}

int ADXSTM_GetGdfsStat(int a4, int a5)
{
    int t1;

    t1 = gdFsGetStat((*(int *)((a4 + 0x8))));
    *(unsigned int *)((a5 + 0x0)) = t1;
    return t1;
}

int vmsfs_c_settime(int a4, int a5)
{
    return FUN_0c0e631c(((((((a4 << 2) << 2) << 2) << 1) + 0xC954350) + 0x6C), a5, 0x8);
}

int str_len(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = a4;
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((*(signed char *)((t0 + 0x0))) != 0) {
            t2 = (t2 + 0x1);
            t1 = (t1 + 0x1);
            t0 = (t0 + 0x1);
            if ((int)t2 >= (int)0xC) {
                break;
            }
            continue;
        }
        break;
    }
    return t1;
}

int direntry_dirty(int a4, int a5)
{
    *(unsigned char *)(((((int)a5 >> 4) + (((a4 * 0x148) + 0xC956768) + 0x48)) + 0x0)) = 0x1;
    return (((a4 * 0x148) + 0xC956768) + 0x48);
}

int FUN_0c229d5a(void)
{
    int t0;

    t0 = memset(0xC95CD88, 0x0, 0x100);
    *(unsigned int *)0xC239E60 = 0x0;
    *(unsigned int *)0xC239E64 = 0x0;
    return t0;
}

int FUN_0c229d40(void)
{
    int t0;

    t0 = memset(0xC95CD88, 0x0, 0x100);
    *(unsigned int *)0xC239E60 = 0x0;
    *(unsigned int *)0xC239E64 = 0x0;
    return t0;
}

int ADXSJD_Stop(int a4)
{
    ADXB_Stop((*(int *)((a4 + 0x4))));
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    return 0x0;
}

int vmsfs_exit(void)
{
    memset(0xC956768, 0x0, 0xA40);
    vmsio_exit();
    return 0x0;
}

int read_sys(int a4)
{
    return vmsfs_read_retry(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x8))), (*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))));
}

int write_sys(int a4)
{
    return vmsfs_write_retry(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x8))), (*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))));
}

int direntry(int a4, int a5)
{
    return ((((a5 << 2) << 2) << 1) + (*(int *)((((a4 * 0x148) + 0xC956768) + 0x28))));
}

int BCDtoDEC(int a4)
{
    return ((((((unsigned int)((unsigned int)a4 >> 2) >> 2) << 2) + ((unsigned int)((unsigned int)a4 >> 2) >> 2)) << 1) + (a4 & 0xF));
}

int FUN_0c22904c(int a4, int a5, int a6)
{
    if ((int)a6 <= 0) {
        return 0x1;
    }
    return ((int (*)(int, int, int))(0xC229040))(a4, a5, (a6 - 1));
}

int ADXSTM_Seek(int a4, int a5)
{
    gdFsSeek((*(int *)((a4 + 0x8))), a5, 0x0);
    return gdFsTell((*(int *)((a4 + 0x8))));
}

int ADXSTM_Tell(int a4)
{
    if ((*(int *)((a4 + 0x8))) != 0) {
        return gdFsTell((*(int *)((a4 + 0x8))));
    }
    return 0x0;
}

void FUN_0c22b6c8(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
}

int ADXSJD_Start(int a4)
{
    adxsjd_clear(a4);
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    return 0x1;
}

void FUN_0c22b6e0(int a4)
{
    _builtin_set_imask(((unsigned int)((((*(int *)((a4 + 0x0))) & 0xF) << 2) << 2) >> 4));
}

void FUN_0c229088(int a4, int a5)
{
    int t0;
    int t1;

    if ((int)a5 > 0) {
        t0 = a4;
        t1 = a5;
        for (;;) {
            t1 = (t1 - 1);
            *(unsigned char *)((t0 + 0x0)) = 0xFFFFFFFF;
            t0 = (t0 + 0x1);
            if ((int)t1 <= 0) {
                break;
            }
        }
    }
}

int FUN_0c229ef4(void)
{
    FUN_0c23269c();
    return memset(0xC95CE88, 0x0, 0x480);
}

int ADXRNA_SetStmHdInfo(int a4, int a5, int a6, int a7)
{
    int stk[3];

    FUN_0c22cbe0(a4, a5, ((int)stk + 4), a7);
    return (*(int *)(((int)stk + 4)));
}

int ADXSJD_ExecHndl(int a4)
{
    int t2;

    if ((*(signed char *)((a4 + 0x1))) != 2) {
        t2 = *(signed char *)((a4 + 0x1));
        if (t2 == 1) {
            return adxsjd_decode_prep(a4);
        }
        return t2;
    }
    return adxsjd_decode_exec(a4);
}

int syCblCheckCable(void)
{
    int t0;

    t0 = syCblCheckCableType();
    return (0x3 & ((unsigned int)t0 >> 8));
}

int vmsfs_c_exit(void)
{
    memset(0xC954350, 0x0, 0x400);
    return 0x0;
}

int FUN_0c229de6(int a4)
{
    FUN_0c22ba6e(a4);
    return FUN_0c22b994(a4);
}

int FUN_0c22a638(void)
{
    memset(0xC95D308, 0x0, 0xC80);
    return 0x1;
}

void kdSetHandler(int a4, int a5)
{
    if ((unsigned int)a4 <= (unsigned int)0x1F) {
        *(unsigned int *)(((a4 << 2) + 0xC953D6C)) = a5;
    }
}

int vmsfs_c_getstate(int a4)
{
    return (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC954350) + 0x4)));
}

void vmsfs_c_setfunc(int a4, int a5)
{
    *(unsigned int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC954350) + 0x8)) = a5;
}

void FUN_0c22907e(int a4, int a5, int a6)
{
    if ((int)a6 <= 0) {
        return;
    }
    ((int (*)(int, int, int))(0xC229078))(a4, a5, (a6 - 1));
}

int FUN_0c22a554(int a4)
{
    return ADXB_GetSfreq((*(int *)((a4 + 0x4))));
}

int FUN_0c22a578(int a4)
{
    return ADXB_GetBlkSmpl((*(int *)((a4 + 0x4))));
}

int FUN_0c22a5c0(int a4)
{
    return ADXB_GetLpStartPos((*(int *)((a4 + 0x4))));
}

int FUN_0c22a5cc(int a4)
{
    return ADXB_GetLpStartOfst((*(int *)((a4 + 0x4))));
}

int FUN_0c22a5d8(int a4)
{
    return ADXB_GetLpEndPos((*(int *)((a4 + 0x4))));
}

int FUN_0c22a5e4(int a4)
{
    return ADXB_GetLpEndOfst((*(int *)((a4 + 0x4))));
}

int kdGetPortStatus(int a4)
{
    return (mpdrv_get_portstatus(a4));
}

int ADXSTMF_ExecHndl(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 == 2) {
        return adxstmf_stat_exec(a4);
    }
    return t0;
}

void kdGetGunPosition(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x0)) = (*(int *)0xC9542C8);
    *(unsigned int *)((a5 + 0x0)) = (*(int *)0xC9542CC);
}

int syCblCheckCableType(void)
{
    return ((unsigned short)(*(short *)0xFF800030) & 0x300);
}

int FUN_0c228e94(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x0);
}

int FUN_0c228ea8(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x1);
}

int FUN_0c228ebc(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x2);
}

int FUN_0c228ed0(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x3);
}

int FUN_0c228ee4(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x4);
}

int FUN_0c228f0c(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x6);
}

int FUN_0c228f20(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x7);
}

int FUN_0c22a548(int a4)
{
    return ADXB_GetFormat((*(int *)((a4 + 0x4))));
}

int FUN_0c22a560(int a4)
{
    return ADXB_GetNumChan((*(int *)((a4 + 0x4))));
}

int FUN_0c22a56c(int a4)
{
    return ADXB_GetOutBps((*(int *)((a4 + 0x4))));
}

int FUN_0c22a590(int a4)
{
    return ADXB_GetTotalNumSmpl((*(int *)((a4 + 0x4))));
}

int FUN_0c22a5a8(int a4)
{
    return ADXB_GetNumLoop((*(int *)((a4 + 0x4))));
}

int ADXSTM_GetBufSize(int a4, int a5, int a6)
{
    *(unsigned int *)((a5 + 0x0)) = (*(int *)((a4 + 0x1C)));
    *(unsigned int *)((a6 + 0x0)) = (*(int *)((a4 + 0x18)));
    return 0x1;
}

int FUN_0c229000(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B0;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x0);
}

int FUN_0c229028(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B0;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x3);
}

void ADXERR_EntryErrFunc(int a4, int a5)
{
    *(unsigned int *)0xC239E60 = a4;
    *(unsigned int *)0xC239E64 = a5;
}

int FUN_0c229f08(void)
{
    return memset(0xC95CE88, 0x0, 0x480);
}

int FUN_0c22a51e(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x48)) = a5;
    *(unsigned int *)((a4 + 0x4C)) = a6;
    return 0x4C;
}

void FUN_0c22a934(void)
{
    *(unsigned int *)0xC239E6C = ((*(int *)0xC239E6C) + 0x1);
}

void kdSetGunTrigger(int a4)
{
    *(unsigned int *)0xC9542BC = (a4 + 0x1);
}

int vmsfs_setretry(int a4)
{
    *(unsigned int *)0xC95432C = a4;
    return a4;
}

int close_file_handle(int a4)
{
    return memset(a4, 0x0, 0x48);
}

void FUN_0c229734(void)
{
    *(unsigned int *)0xC239E50 = 0x0;
}

void FUN_0c229ce0(void)
{
    *(unsigned int *)0xC239E58 = 0x0;
}

int FUN_0c22a6d8(int a4)
{
    return memset(a4, 0x0, 0x64);
}

int ADXSTM_SetBufSize(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x1C)) = a5;
    *(unsigned int *)((a4 + 0x18)) = a6;
    return 0x1;
}

int kdGetStatus(int a4)
{
    return mpdrv_stat(a4);
}

int kdIsChanged(int a4)
{
    return mpdrv_ischanged(a4);
}

int kdGetVersion(int a4, int a5)
{
    return mpdrv_get_version(a4, a5);
}

int kdRecognizeChanged(int a4)
{
    return mpdrv_recognize(a4);
}

int kdGetSystemInfo(void)
{
    return 0xC95402C;
}

int kdGetGunLatchedPort(void)
{
    return (*(int *)0xC9542C0);
}

void kdSetGunCallback(int a4)
{
    *(unsigned int *)0xC954068 = a4;
}

int vmsfs_c_synch(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    return vmsfb_exec(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
}

int thunk_FUN_0c22b736(int a4, int a5, int a6, int a7)
{
    return FUN_0c22b736(a4, a5, a6, a7);
}

int thunk_FUN_0c22bece(int a4, int a5, int a6, int a7)
{
    return FUN_0c22bece(a4, a5, a6, a7);
}

int thunk_FUN_0c22b6fa(void)
{
    return FUN_0c22b6fa();
}

int thunk_FUN_0c22bfa2(int a4, int a5, int a6, int a7)
{
    return FUN_0c22bfa2(a4, a5, a6, a7);
}

int thunk_FUN_0c22c7c2(int a4, int a5, int a6, int a7)
{
    return mwRnaGetNumData(a4, a5, a6, a7);
}

int thunk_FUN_0c22c8bc(int a4, int a5, int a6, int a7)
{
    return FUN_0c22c8bc(a4, a5, a6, a7);
}

int thunk_FUN_0c22c7fe(int a4, int a5, int a6, int a7)
{
    return FUN_0c22c7fe(a4, a5, a6, a7);
}

int thunk_FUN_0c22b866(int a4, int a5, int a6, int a7)
{
    return FUN_0c22b866(a4, a5, a6, a7);
}

int thunk_FUN_0c22c932(int a4, int a5, int a6, int a7)
{
    return FUN_0c22c932(a4, a5, a6, a7);
}

int thunk_FUN_0c22c8cc(int a4, int a5, int a6, int a7)
{
    return FUN_0c22c8cc(a4, a5, a6, a7);
}

int thunk_FUN_0c22c884(int a4, int a5, int a6, int a7)
{
    return FUN_0c22c884(a4, a5, a6, a7);
}

int thunk_FUN_0c22c6d0(void)
{
    return FUN_0c22c6d0();
}

int thunk_FUN_0c22c4ca(void)
{
    return FUN_0c22c4ca();
}

int FUN_0c22a530(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x40)) = a5;
    return 0x40;
}

int FUN_0c22a53c(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x44)) = a5;
    return 0x44;
}

int FUN_0c22a5f0(int a4)
{
    return (a4 + 0x50);
}

void ADXSTM_EntryEosFunc(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x38)) = a5;
    *(unsigned int *)((a4 + 0x3C)) = a6;
}

int ADXSTM_SetReqRdSize(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x2C)) = a5;
    return 0x1;
}

int vmsfs_c_fiber0(int a4, int a5, int a6)
{
    return vmsfs_c_dispatch(0x0, a5, a6);
}

int vmsfs_c_fiber4(int a4, int a5, int a6)
{
    return vmsfs_c_dispatch(0x4, a5, a6);
}

int vmsfs_c_fiber1(int a4, int a5, int a6)
{
    return vmsfs_c_dispatch(0x1, a5, a6);
}

int vmsfs_c_fiber5(int a4, int a5, int a6)
{
    return vmsfs_c_dispatch(0x5, a5, a6);
}

int vmsfs_c_fiber2(int a4, int a5, int a6)
{
    return vmsfs_c_dispatch(0x2, a5, a6);
}

int vmsfs_c_fiber3(int a4, int a5, int a6)
{
    return vmsfs_c_dispatch(0x3, a5, a6);
}

int vmsfs_stat(void)
{
    return 0x0;
}

int check_isopen(void)
{
    return 0x0;
}

int thunk_FUN_0c22904c(int a4, int a5, int a6)
{
    return FUN_0c22904c(a4, a5, a6);
}

int FUN_0c229e1c(void)
{
    return 0x0;
}

void FUN_0c229e76(void)
{
    
}

int FUN_0c22a06c(int a4)
{
    return (*(signed char *)((a4 + 0x1)));
}

void FUN_0c22a070(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x8)) = a5;
}

void FUN_0c22a080(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x38)) = a5;
}

int FUN_0c22a512(int a4)
{
    return (*(int *)((a4 + 0x2C)));
}

void FUN_0c22a516(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x34)) = a5;
}

void FUN_0c22a528(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x3C)) = a5;
}

int ADXSTM_GetStat(int a4)
{
    return (*(signed char *)((a4 + 0x1)));
}

int ADXSTM_GetSj(int a4)
{
    return (*(int *)((a4 + 0x4)));
}

void ADXSTM_EntryErrFunc(void)
{
    
}

void adxt_stat_playend(void)
{
    
}

void FUN_0c22b6f6(void)
{
    
}

int vmsfs_c_fiber7(int a4, int a5, int a6)
{
    return vmsfs_c_dispatch(0x7, a5, a6);
}
