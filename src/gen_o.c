/* Straight-line functions with calls and guards (batch gen_o): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXPD_Destroy(int);
int ADXPD_EntryMono(int, int, int, int);
int ADXPD_EntrySte(int, int, int, int, int);
int ADXPD_Reset(int);
int ADXPD_Start(int);
int ADXPD_Stop(int);
int FUN_0c0e4a04(int);
int FUN_0c0e4a5a(int);
int FUN_0c0e4d2c(int);
int FUN_0c0e5f1c(int);
int FUN_0c22d77a(int, int, int);
int FUN_0c22e3f4(int, int, int, int, int, int);
int FUN_0c22f040(int, int);
int FUN_0c22f0ec(int, int, int);
int FUN_0c22fa7e(int, int, int);
int FUN_0c233800(int, int, int);
int FUN_0c233818(int, int, int);
int FUN_0c2338cc(int, int, int, int);
int FUN_0c233d88(int);
int FUN_0c235bb8(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern int _builtin_tas(char *);
int buFbrCreateFiber(int, int, int, int);
int buFbrCreateServer(int);
int buFbrDestroyServer(int, int, int, int);
int buFbrEndFiber(int, int, int, int);
int buFbrExecFiberServer(int, int, int, int, float, float, float, float, float, float, float, float);
int buFbrInit(void);
int buFbrSleepVFiber(void);
#pragma inline_asm(iaOcbwb)
static void iaOcbwb(void *p)
{
    .DATA.W H'04B3
}
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kmiFBfree(int);
int memset(int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_setcmd(int, int, int, int, int);
int syG2DmaResume(int);
int kmiFBSortQueue(void);
int FUN_0c22fa00(int a4);
int vmsio_isready(int a4);
int kmiABSalloc(int a4, int a5);
int FUN_0c22ece0(int a4, int a5);
int kmiFBGarbageCollect(void);
int ADXB_GetOutBps(int a4);
int FUN_0c22bbe0(int a4, int a5, int a6, int a7);
int mpdrv_hreset(int a4);
int mpdrv_sdckbdisable(int a4);
int FUN_0c22d0d6(int a4, int a5);
int ADXB_EvokeExpandSte(int a4, int a5);
int syG2DmaResumeAll(void);
int syG2DmaSuspendAll(void);
int fmcalccrc(int a4, int a5, int a6, int a7);
int FUN_0c233422(int a4, int a5, int a6);
int FUN_0c23332c(void);
int mwlRnaAddFlshPos(int a4);
int FUN_0c22cdf6(int a4, int a5);
int kmiFBfreeEx(int a4, int a5);
int FUN_0c22f818(int a4, int a5);
int mpdrv_set_bwrite_ns(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int mpdrv_set_bread_ns(int a4, int a5, int a6, int a7, int a8);
int mpdrv_set_getlerr_ns(int a4, int a5, int a6, int a7, int a8);
int FUN_0c22ee60(void);
int FUN_0c22f788(void);
int mpdrv_set_getcond(int a4, int a5);
int mpdrv_set_dreq(int a4);
int mpdrv_set_dkill(int a4);
int mpdrv_set_dreset(int a4);
int mpdrv_set_allstatreq(int a4);
int mpdrv_set_getminfo(int a4, int a5, int a6);
int mpdrv_set_transagain(int a4);
int mpdrv_set_arctrl(int a4, int a5);
int mpdrv_set_setcond(int a4, int a5, int a6, int a7);
int mpdrv_set_ft4ctrl(int a4, int a5);
int mpdrv_set_end(void);
int ADXB_EvokeExpandMono(int a4, int a5);
int syG2DmaSetProtect(int a4, int a5);
int vmsfb_end(int a4, int a5, int a6, int a7);
int FUN_0c232f3c(int a4);
void FUN_0c22ee8c(int a4);
void FUN_0c22f7e0(int a4);
void syMmuDeleteEntry(int a4, int a5, int a6);
int mpdrv_set_getminfo_ns(int a4, int a5, int a6);
int FUN_0c232f64(void);
void FUN_0c22eeb2(int a4, int a5, int a6, int a7);
int mpdrv_set_arctrl_ns(int a4, int a5);
int mpdrv_set_ft4ctrl_ns(int a4, int a5);
int mpdrv_set_setcond_ns(int a4, int a5, int a6, int a7);
int ADXB_Destroy(int a4);
int FUN_0c232ed0(void);
int kmyConvertAddress64to32(int a4);
int FUN_0c23330a(int a4);
int FUN_0c233388(int a4, int a5);
int FUN_0c2333aa(int a4, int a5);
int vmsfs_memcmp(int a4, int a5);
int ADXB_Reset(int a4);
void mwRnaErrCallFunc(int a4);
int FUN_0c22cdc4(int a4);
int FUN_0c22d0a0(int a4);
int FUN_0c22fa60(int a4, int a5, int a6);
int mpdrv_set_getcond_ns(int a4, int a5);
void FUN_0c22cd34(void);
void FUN_0c22d010(void);
void kmytex_FBEnQueueEntry(int a4, int a5, int a6);
int mpdrv_stat(int a4, int a5);
int ADXB_Stop(int a4);
int FUN_0c22cd00(void);
void FUN_0c22cd18(int a4, int a5);
int FUN_0c22cfdc(void);
void FUN_0c22cff4(int a4, int a5);
int mpdrv_get_version(int a4, int a5);
int mpdrv_set_dreq_ns(int a4);
int mpdrv_set_dkill_ns(int a4);
int mpdrv_set_dreset_ns(int a4);
int mpdrv_set_allstatreq_ns(int a4);
int mpdrv_set_transagain_ns(int a4);
int vmsfb_create(int a4, int a5, int a6);
int mpdrv_frame_recv_post(void);
int mpdrv_memset_l(int a4, int a5, int a6);
int vmsfb_init(void);
int mpdrv_set_end_ns(void);
int FUN_0c23269c(void);
void memcpy2(int a4, int a5, int a6);
void FUN_0c22f806(int a4, int a5);
int mpdrv_get_deviceinfo(int a4);
int mpdrv_get_device(int a4);
int mpdrv_ischanged(int a4);
int mpdrv_recognize(int a4);
int mpdrv_get_timeout(void);
int mpdrv_optimize(int a4);
void SJRBF_Reset(int a4);
int mpdrv_get_portstatus(int a4);
int mpdrv_swapmode(int a4);
void ADXB_Start(int a4);
int kmiFBallocEx(int a4, int a5, int a6);
int mpdrv_timeout(int a4);
int mpdrv_init_memory(void);
void SJMEM_Reset(int a4);
int FUN_0c22ccd0(int a4, int a5, int a6);
int mpdrv_get_swapmode(void);
int mpdrv_nopcount(int a4);
int mpdrv_get_nopcount(void);
int mpdrv_speed(int a4);
int mpdrv_get_speed(void);
int mpdrv_debugmode(int a4);
int mpdrv_get_debugmode(void);
int mpdrv_dreqcount(int a4);
int mpdrv_get_dreqcount(void);
int mpdrv_get_optimize(void);
int mpdrv_get_lastsendaddr(void);
int mpdrv_rootplay(int a4);
int mpdrv_get_rootplay(void);
int mpdrv_gunmode(int a4);
int mpdrv_get_gunmode(void);
int mpdrv_autoflash(int a4);
int mpdrv_get_autoflash(void);
int FUN_0c232610(int a4, int a5, int a6);
int FUN_0c232624(int a4, int a5, int a6);
int FUN_0c232638(int a4, int a5, int a6);
int FUN_0c23264c(int a4, int a5, int a6);
int ADXB_EntryGetWrFunc(int a4, int a5, int a6);
int ADXB_EntryAddWrFunc(int a4, int a5, int a6);
void FUN_0c232e9c(int a4, int a5);
int vmsfb_exit(int a4, int a5, int a6, int a7);
int vmsfb_exec(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
void vmsio_init(void);
void FUN_0c22fa8e(int a4);
int mpdrv_v2p(int a4);
int vmsfb_sleep(void);
int ADXB_GetFormat(int a4);
int ADXB_GetNumLoop(int a4);
int ADXB_GetDecDtLen(int a4);
int ADXB_GetDecNumSmpl(int a4);
void FUN_0c22ba6a(void);
int FUN_0c22c6d0(void);
int FUN_0c22d40c(int a4);
int FUN_0c22d410(int a4);
int FUN_0c22d414(int a4);
int mpdrv_set_hreset_ns(int a4);
int mpdrv_p2v(int a4);
void vmsio_exit(void);
int ADXB_GetPcmBuf(int a4);
int ADXB_GetSfreq(int a4);
int ADXB_GetNumChan(int a4);
int ADXB_GetBlkSmpl(int a4);
int ADXB_GetBlkLen(int a4);
int ADXB_GetTotalNumSmpl(int a4);
int ADXB_GetCof(int a4);
int ADXB_GetLpInsNsmpl(int a4);
int ADXB_GetLpStartPos(int a4);
int ADXB_GetLpStartOfst(int a4);
int ADXB_GetLpEndPos(int a4);
int ADXB_GetLpEndOfst(int a4);
int ADXB_GetStat(int a4);
int ADXB_GetAdxpd(int a4);

int kmiFBSortQueue(void)
{
    FUN_0c22f040(0xC239EF8, 0xC239EFC);
    FUN_0c22f040(0xC239F0C, 0xC239F10);
    FUN_0c22f040(0xC239F00, 0xC239F04);
    FUN_0c22f040(0xC239F14, 0xC239F18);
    return 0x0;
}

int FUN_0c22fa00(int a4)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t10;

    if ((unsigned int)a4 < (unsigned int)0x800000) {
        t0 = a4;
        t1 = 0x0;
        if ((unsigned int)a4 >= (unsigned int)0x400000) {
            t0 = (a4 - 0x400000);
            t1 = 0x4;
        }
        t10 = ((((0xFFFFFFFC & t0) << 1) + (0x3 & t0)) + t1);
    } else {
        t3 = a4;
        t4 = 0x0;
        if ((unsigned int)a4 >= (unsigned int)0xC00000) {
            t3 = (a4 - 0x400000);
            t4 = 0x4;
        }
        t10 = (((((0xFFFFFFFC & t3) << 1) + (0x3 & t3)) + t4) + 0xFF800000);
    }
    return t10;
}

int vmsio_isready(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = *(int *)(((a4 << 2) + 0xC2382DC));
    t1 = kdGetDevice(t0);
    t2 = kdGetDeviceInfo(t0);
    if (((*(signed char *)((t1 + 0x0))) != 0) && (t4 = *(int *)((t2 + 0x0)), (t4 & 2) != 0)) {
        return 0x1;
    }
    return 0x0;
}

int kmiABSalloc(int a4, int a5)
{
    int t1;
    int t4;

    t1 = *(int *)((a5 + 0x1C));
    t4 = 0x1;
    if ((int)t1 < (int)(*(int *)0xC239EF0)) {
        t4 = 0x0;
    }
    return (FUN_0c22e3f4(t4, t1, a4, a5, 0x0, 0x1));
}

int FUN_0c22ece0(int a4, int a5)
{
    int t3;
    int t4;
    int t12;
    int t5;
    int t6;

    if ((int)a4 < (int)(*(int *)0xC239EF0)) {
        *(unsigned short *)((a5 + 0x0)) = 0x0;
    } else {
        *(unsigned short *)((a5 + 0x0)) = 0x1;
    }
    t3 = *(short *)((a5 + 0x0));
    t4 = *(int *)(((((t3 << 2) + t3) << 2) + 0xC239EF8));
    t12 = 0x0;
    if (t4 != 0) {
        t5 = t4;
        t6 = 0x0;
        for (;;) {
            if ((*(int *)((t5 + 0xC))) == a4) {
                t6 = t5;
                t5 = 0x0;
            } else {
                t5 = (*(int *)((t5 + 0x8)));
            }
            if (t5 == 0) {
                break;
            }
        }
        t12 = t6;
    }
    return t12;
}

int kmiFBGarbageCollect(void)
{
    int t0;
    int t4;

    t0 = FUN_0c22f0ec(0xC239F00, 0xC239F04, 0xC239EF8);
    t4 = t0;
    if (t0 == 0) {
        t4 = (FUN_0c22f0ec(0xC239F14, 0xC239F18, 0xC239F0C));
    }
    return t4;
}

int ADXB_GetOutBps(int a4)
{
    int t15;

    if ((*(short *)((a4 + 0xA8))) != 0) {
        if ((*(short *)((a4 + 0xA8))) == 2) {
            if ((*(short *)((a4 + 0xAA))) != 2) {
                if ((*(short *)((a4 + 0xAA))) == 1) {
                    return 0x8;
                }
                return 0x10;
            }
            return 0x4;
        }
        if (((*(short *)((a4 + 0xA8))) == 1) && (t15 = *(short *)((a4 + 0xAA)), t15 == 2)) {
            return 0x4;
        }
        return 0x10;
    }
    return 0x10;
}

int FUN_0c22bbe0(int a4, int a5, int a6, int a7)
{
    int t1;

    t1 = FUN_0c2338cc((*(int *)((a4 + 0x40))), a5, a7, a6);
    if (t1 != 0) {
        mwRnaErrCallFunc(0xC237F74);
    }
    *(unsigned int *)((a4 + 0x68)) = 0x1;
    return 0x68;
}

int mpdrv_hreset(int a4)
{
    int t0;
    int t6;

    t0 = *(int *)0xC98E18C;
    *(unsigned int *)((t0 + 0xFCC)) = ((*(int *)((t0 + 0xFCC))) + ((*(int *)(((0xFD8 + t0) + 0x0))) << 2));
    *(unsigned int *)(((*(int *)(((*(int *)0xC98E18C) + 0xFCC))) + 0x0)) = ((a4 << 16) | 0x300);
    *(unsigned int *)(((*(int *)0xC98E18C) + 0xFD8)) = 0x1;
    t6 = *(int *)0xC98E18C;
    *(unsigned int *)((t6 + 0xFDC)) = ((*(int *)((t6 + 0xFDC))) + 0x4);
    return 0x0;
}

int mpdrv_sdckbdisable(int a4)
{
    int t0;
    int t6;

    t0 = *(int *)0xC98E18C;
    *(unsigned int *)((t0 + 0xFCC)) = ((*(int *)((t0 + 0xFCC))) + ((*(int *)(((0xFD8 + t0) + 0x0))) << 2));
    *(unsigned int *)(((*(int *)(((*(int *)0xC98E18C) + 0xFCC))) + 0x0)) = ((a4 << 16) | 0x400);
    *(unsigned int *)(((*(int *)0xC98E18C) + 0xFD8)) = 0x1;
    t6 = *(int *)0xC98E18C;
    *(unsigned int *)((t6 + 0xFDC)) = ((*(int *)((t6 + 0xFDC))) + 0x4);
    return 0x0;
}

int FUN_0c22d0d6(int a4, int a5)
{
    int t7;

    if (a5 == 1) {
        return (*(int *)((a4 + 0xC)));
    }
    if (a5 == 0) {
        return (*(int *)((a4 + 0x10)));
    }
    if ((*(int *)((a4 + 0x28))) != 0) {
        t7 = ((int (*)(int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD);
    }
    return 0x0;
}

int ADXB_EvokeExpandSte(int a4, int a5)
{
    int t0;
    int t2;
    int t4;

    t0 = *(int *)(((a4 + 0x50) + 0x20));
    t2 = *(int *)((a4 + 0x8));
    t4 = *(int *)(((a4 + 0x50) + 0x14));
    ADXPD_EntrySte(t2, (*(int *)((a4 + 0x50))), (a5 << 1), (t4 + (t0 << 1)), (((*(int *)(((a4 + 0x50) + 0x1C))) << 1) + (t4 + (t0 << 1))));
    return ADXPD_Start(t2);
}

int syG2DmaResumeAll(void)
{
    int t0;

    t0 = 0x0;
    for (;;) {
        syG2DmaResume((((*(int *)0xC239F3C) + 0x4) + t0));
        t0 = (t0 + 0x34);
        if ((unsigned int)t0 >= (unsigned int)0xD0) {
            break;
        }
    }
    *(unsigned int *)0xC98CF8C = 0x0;
    return 0x0;
}

int syG2DmaSuspendAll(void)
{
    int t0;

    t0 = 0x0;
    for (;;) {
        FUN_0c233d88((((*(int *)0xC239F3C) + 0x4) + t0));
        t0 = (t0 + 0x34);
        if ((unsigned int)t0 >= (unsigned int)0xD0) {
            break;
        }
    }
    *(unsigned int *)0xC98CF8C = 0x1;
    return 0x0;
}

int fmcalccrc(int a4, int a5, int a6, int a7)
{
    int t4;
    int t5;
    int t6;
    int t7;
    int t0;
    int t2;
    int t3;

    t4 = a4;
    t5 = a5;
    t6 = 0xFFFF;
    t7 = a7;
    for (;;) {
        t4 = (t4 - 1);
        if ((int)t4 < 0) {
            break;
        }
        t7 = (unsigned short)t6;
        t0 = t7;
        t3 = 0xFFFFFFF8;
        t0 = (((int)t3 >= 0) ? (t0 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)t0 >> (-(int)t3 & 31)) : ((int)t0 >> 31)));
        t3 = (*(signed char *)((t5 + 0x0)));
        t5 = (t5 + 0x1);
        t2 = t7;
        t2 = (t2 << 8);
        t3 = (unsigned char)t3;
        t6 = t2;
        t0 = (t0 ^ t3);
        t0 = (t0 << 1);
        t6 = (t6 ^ ((*(short *)((0xC2382FC + t0)))));
    }
    return (unsigned short)(~(unsigned short)t6);
}

int FUN_0c233422(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t4;
    int stk[7];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t0 = *(int *)(((int)stk + 8));
    t1 = *(signed char *)(((int)stk + 4));
    t4 = FUN_0c233800((*(int *)(((int)stk + 8))), 0x6, (*(signed char *)(((int)stk + 4))));
    *(unsigned int *)((a6 + 0x0)) = t4;
    *(unsigned int *)((((t1 << 2) + (t0 + 0x34)) + 0x0)) = t4;
    return 0x0;
}

int FUN_0c23332c(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t7;
    int t8;

    t0 = 0xC98E6F4;
    t1 = 0xC98E6F4;
    t2 = 0xC98E6F4;
    t3 = 0xC98E6F4;
    for (;;) {
        if ((*(signed char *)((t3 + 0x0))) == 1) {
            t0 = t2;
            FUN_0c23330a(t0);
        } else {
            t7 = t0;
            t8 = t1;
        }
        t3 = (t3 + 0x50);
        t0 = t7;
        t1 = t8;
        t2 = (t2 + 0x50);
        if ((unsigned int)t3 >= (unsigned int)0xC98E974) {
            break;
        }
    }
    return 0x0;
}

int mwlRnaAddFlshPos(int a4)
{
    *(volatile int *)((a4 + 0x60));
    *(volatile int *)((a4 + 0x58));
    *(volatile int *)((a4 + 0x30));
    *(unsigned int *)(((0x58 + a4) + 0x0)) = (FUN_0c0e5f1c(a4));
    *(unsigned int *)((a4 + 0x5C)) = ((*(int *)((a4 + 0x5C))) + (*(int *)(((0x60 + a4) + 0x0))));
    *(unsigned int *)((a4 + 0x60)) = 0x0;
    return 0x60;
}

int FUN_0c22cdf6(int a4, int a5)
{
    int t5;
    int t2;

    if (a5 == 1) {
        return (*(int *)((a4 + 0xC)));
    }
    if ((a5 != 0) && (t2 = *(int *)((a4 + 0x1C)), t2 != 0)) {
        t5 = ((int (*)(int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD);
    }
    return 0x0;
}

int kmiFBfreeEx(int a4, int a5)
{
    int t0;
    int t1;
    int t5;
    int t2;

    t0 = FUN_0c22fa00(a4);
    t1 = kmiFBfree(t0);
    t5 = t1;
    if (t1 != 0) {
        t2 = FUN_0c22fa00(a5);
        t5 = (kmiFBfree(t2));
    }
    return t5;
}

int FUN_0c22f818(int a4, int a5)
{
    int t0;
    int t6;
    int t1;
    int t2;

    t0 = *(int *)((a4 + 0x0));
    t6 = 0x0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = t0;
        for (;;) {
            if ((*(int *)((t2 + 0x4))) == a5) {
                t1 = t2;
                t2 = 0x0;
            } else {
                t2 = (*(int *)((t2 + 0x4)));
            }
            if (t2 == 0) {
                break;
            }
        }
        t6 = t1;
    }
    if ((*(int *)((a4 + 0x0))) == a5) {
        *(unsigned int *)((a4 + 0x0)) = (*(int *)((a5 + 0x4)));
    } else {
        *(unsigned int *)((t6 + 0x4)) = (*(int *)((a5 + 0x4)));
    }
    return t6;
}

int mpdrv_set_bwrite_ns(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 12) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 12) + 0x4)) = ((((a6 << 16) << 8) | (a7 << 16)) | a8);
    return (mpdrv_setcmd(a4, 0xC, ((int)stk + 12), 0x2, a9));
}

int mpdrv_set_bread_ns(int a4, int a5, int a6, int a7, int a8)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 12) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 12) + 0x4)) = ((((a6 << 16) << 8) | (a7 << 16)) | a8);
    return (mpdrv_setcmd(a4, 0xB, ((int)stk + 12), 0x2, 0x0));
}

int mpdrv_set_getlerr_ns(int a4, int a5, int a6, int a7, int a8)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 12) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 12) + 0x4)) = ((((a6 << 16) << 8) | (a7 << 16)) | a8);
    return (mpdrv_setcmd(a4, 0xD, ((int)stk + 12), 0x2, 0x0));
}

int FUN_0c22ee60(void)
{
    int t0;
    int t1;

    if ((unsigned int)0xC961E58 < (unsigned int)0xC979E58) {
        t0 = 0xC961E58;
        t1 = 0xC961E58;
        for (;;) {
            if (((unsigned short)(*(short *)((t0 + 0x0))) & 0x1) == 0) {
                break;
            }
            t0 = (t0 + 0x18);
            t1 = (t1 + 0x18);
            if ((unsigned int)t0 >= (unsigned int)0xC979E58) {
                return 0x0;
            }
        }
        *(unsigned short *)((t1 + 0x0)) = 0x1;
        return t1;
    }
    return 0x0;
}

int FUN_0c22f788(void)
{
    int t0;
    int t1;

    if ((unsigned int)0xC979E58 < (unsigned int)0xC98CE58) {
        t0 = 0xC979E58;
        t1 = 0xC979E58;
        for (;;) {
            if (((unsigned short)(*(short *)((t0 + 0x0))) & 0x1) == 0) {
                break;
            }
            t0 = (t0 + 0x4C);
            t1 = (t1 + 0x4C);
            if ((unsigned int)t0 >= (unsigned int)0xC98CE58) {
                return 0x0;
            }
        }
        *(unsigned short *)((t1 + 0x0)) = 0x1;
        return t1;
    }
    return 0x0;
}

int mpdrv_set_getcond(int a4, int a5)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0xC231FAC)) == 0) {
        mpdrv_dpf(0xC238284);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getcond_ns(a4, a5);
    *(unsigned char *)(((*(int *)0xC231FAC) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_dreq(int a4)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0xC231FAC)) == 0) {
        mpdrv_dpf(0xC238284);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreq_ns(a4);
    *(unsigned char *)(((*(int *)0xC231FAC) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_dkill(int a4)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0xC231FAC)) == 0) {
        mpdrv_dpf(0xC238284);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dkill_ns(a4);
    *(unsigned char *)(((*(int *)0xC231FAC) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_dreset(int a4)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0xC231FAC)) == 0) {
        mpdrv_dpf(0xC238284);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreset_ns(a4);
    *(unsigned char *)(((*(int *)0xC231FAC) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_allstatreq(int a4)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0xC231FAC)) == 0) {
        mpdrv_dpf(0xC238284);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_allstatreq_ns(a4);
    *(unsigned char *)(((*(int *)0xC231FAC) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_getminfo(int a4, int a5, int a6)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0xC231FAC)) == 0) {
        mpdrv_dpf(0xC238284);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getminfo_ns(a4, a5, a6);
    *(unsigned char *)(((*(int *)0xC231FAC) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_transagain(int a4)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0xC231FAC)) == 0) {
        mpdrv_dpf(0xC238284);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_transagain_ns(a4);
    *(unsigned char *)(((*(int *)0xC231FAC) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_arctrl(int a4, int a5)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0xC231FAC)) == 0) {
        mpdrv_dpf(0xC238284);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_arctrl_ns(a4, a5);
    *(unsigned char *)(((*(int *)0xC231FAC) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_setcond(int a4, int a5, int a6, int a7)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0xC231FAC)) == 0) {
        mpdrv_dpf(0xC238284);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_setcond_ns(a4, a5, a6, a7);
    *(unsigned char *)(((*(int *)0xC231FAC) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_ft4ctrl(int a4, int a5)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0xC231FAC)) == 0) {
        mpdrv_dpf(0xC238284);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_ft4ctrl_ns(a4, a5);
    *(unsigned char *)(((*(int *)0xC231FAC) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_end(void)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0xC231FAC)) == 0) {
        mpdrv_dpf(0xC238284);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_end_ns();
    *(unsigned char *)(((*(int *)0xC231FAC) + 0x0)) = 0x0;
    return t2;
}

int ADXB_EvokeExpandMono(int a4, int a5)
{
    int t3;

    t3 = *(int *)((a4 + 0x8));
    ADXPD_EntryMono(t3, (*(int *)((a4 + 0x50))), a5, ((*(int *)(((a4 + 0x50) + 0x14))) + ((*(int *)(((a4 + 0x50) + 0x20))) << 1)));
    return ADXPD_Start(t3);
}

int syG2DmaSetProtect(int a4, int a5)
{
    *(unsigned int *)0xA05F78BC = (((((unsigned int)((unsigned int)((unsigned int)(a4 & 0x7F00000) >> 16) >> 2) >> 2) << 8) | ((unsigned int)((unsigned int)((unsigned int)(a5 & 0x7F00000) >> 16) >> 2) >> 2)) | 0x46590000);
    *(unsigned int *)0xC239F38 = (((((unsigned int)((unsigned int)((unsigned int)(a4 & 0x7F00000) >> 16) >> 2) >> 2) << 8) | ((unsigned int)((unsigned int)((unsigned int)(a5 & 0x7F00000) >> 16) >> 2) >> 2)) | 0x46590000);
    return 0x0;
}

int vmsfb_end(int a4, int a5, int a6, int a7)
{
    return buFbrEndFiber(a4, a5, a6, a7);
}

int FUN_0c232f3c(int a4)
{
    int t2;
    int t3;

    if (a4 != 0) {
        memset((*(int *)((a4 + 0x4))), 0x0, 0x100);
        t2 = memset(a4, 0x0, 0x8);
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t3 = t2;
    }
    return t3;
}

void FUN_0c22ee8c(int a4)
{
    int t1;
    int t2;
    int t0;

    t1 = 0xC961E58;
    t2 = 0xC961E58;
    for (;;) {
        if (t1 == a4) {
            t0 = (*(short *)((t2 + 0x0)));
            t0 = (t0 & 0xFFFE);
            *(unsigned short *)((t2 + 0x0)) = t0;
        }
        t1 = (t1 + 0x18);
        t2 = (t2 + 0x18);
        if ((unsigned int)t1 >= (unsigned int)0xC979E58) {
            break;
        }
    }
}

void FUN_0c22f7e0(int a4)
{
    int t1;
    int t2;
    int t0;

    t1 = 0xC979E58;
    t2 = 0xC979E58;
    for (;;) {
        if (t1 == a4) {
            t0 = (*(short *)((t2 + 0x0)));
            t0 = (t0 & 0xFFFE);
            *(unsigned short *)((t2 + 0x0)) = t0;
        }
        t1 = (t1 + 0x4C);
        t2 = (t2 + 0x4C);
        if ((unsigned int)t1 >= (unsigned int)0xC98CE58) {
            break;
        }
    }
}

void syMmuDeleteEntry(int a4, int a5, int a6)
{
    if ((unsigned int)a4 < (unsigned int)0x40) {
        *(unsigned int *)(((0xF6000000 + (a4 << 8)) + 0x0)) = ((*(int *)((((a4 << 8) + 0xF6000000) + 0x0))) & 0xFFFFFEFF);
        *(unsigned int *)((((a4 << 8) + 0xF7000000) + 0x0)) = 0x0;
    }
}

int mpdrv_set_getminfo_ns(int a4, int a5, int a6)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 12) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 12) + 0x4)) = ((a6 << 16) << 8);
    return (mpdrv_setcmd(a4, 0xA, ((int)stk + 12), 0x2, 0x0));
}

int FUN_0c232f64(void)
{
    int t0;
    int t1;
    int t6;

    if ((unsigned int)0xC98E6F4 < (unsigned int)0xC98E974) {
        t0 = 0xC98E6F4;
        t1 = 0xC98E6F4;
        for (;;) {
            if ((*(signed char *)((t0 + 0x0))) == 0) {
                break;
            }
            t0 = (t0 + 0x50);
            t1 = (t1 + 0x50);
            if ((unsigned int)t0 >= (unsigned int)0xC98E974) {
                return 0x0;
            }
        }
        t6 = t1;
    } else {
        t6 = 0x0;
    }
    return t6;
}

void FUN_0c22eeb2(int a4, int a5, int a6, int a7)
{
    int t1;

    if ((*(int *)((a4 + 0x0))) == 0) {
        *(unsigned int *)((a6 + 0x4)) = 0x0;
        *(unsigned int *)((a6 + 0x8)) = 0x0;
        *(unsigned int *)((a4 + 0x0)) = a6;
        *(unsigned int *)((a5 + 0x0)) = a6;
    } else {
        t1 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a6 + 0x4)) = (*(int *)((t1 + 0x4)));
        *(unsigned int *)((a6 + 0x8)) = (*(int *)((a4 + 0x0)));
        *(unsigned int *)((t1 + 0x4)) = a6;
        *(unsigned int *)((a4 + 0x0)) = a6;
    }
}

int mpdrv_set_arctrl_ns(int a4, int a5)
{
    int stk[6];

    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 12)) = 0x20;
    return (mpdrv_setcmd(a4, 0x10, (((int)stk + 4) + 0x8), 0x1, ((*(int *)(((int)stk + 16))))));
}

int mpdrv_set_ft4ctrl_ns(int a4, int a5)
{
    int stk[6];

    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 12)) = 0x10;
    return (mpdrv_setcmd(a4, 0xF, (((int)stk + 4) + 0x8), 0x1, ((*(int *)(((int)stk + 16))))));
}

int mpdrv_set_setcond_ns(int a4, int a5, int a6, int a7)
{
    int stk[7];

    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 20)) = a7;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(volatile int *)(((int)stk + 20));
    return (mpdrv_setcmd(a4, 0xE, (((int)stk + 4) + 0x8), 0x1, ((*(int *)(((int)stk + 16))))));
}

int ADXB_Destroy(int a4)
{
    int t2;
    int t3;

    if (a4 != 0) {
        ADXPD_Destroy((*(int *)((a4 + 0x8))));
        t2 = memset(a4, 0x0, 0xAC);
        *(unsigned short *)((a4 + 0x0)) = 0x0;
        t3 = t2;
    }
    return t3;
}

int FUN_0c232ed0(void)
{
    memset(0xC98E974, 0x0, 0x800);
    memset(0xC98F174, 0x0, 0x40);
    return (memset(0xC98E6F4, 0x0, 0x280));
}

int kmyConvertAddress64to32(int a4)
{
    int t0;
    int t2;

    t0 = (((unsigned int)(0xFFFFFFF8 & a4) >> 1) + (0x3 & a4));
    if ((0x4 & a4) != 0) {
        t0 = ((((unsigned int)(0xFFFFFFF8 & a4) >> 1) + (0x3 & a4)) + 0x400000);
    }
    t2 = t0;
    if ((unsigned int)a4 >= (unsigned int)0x800000) {
        t2 = (t0 + 0x400000);
    }
    return t2;
}

int FUN_0c23330a(int a4)
{
    FUN_0c0e4d2c((*(short *)((a4 + 0x2))));
    *(unsigned char *)(((0x4C + a4) + 0x0)) = (*(signed char *)((a4 + 0x1)));
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    return 0x0;
}

int FUN_0c233388(int a4, int a5)
{
    *(unsigned int *)((a5 + 0x0)) = (FUN_0c0e4a04((*(short *)((a4 + 0x2)))));
    return 0x0;
}

int FUN_0c2333aa(int a4, int a5)
{
    *(unsigned int *)((a5 + 0x0)) = (FUN_0c0e4a5a((*(short *)((a4 + 0x2)))));
    return 0x0;
}

int vmsfs_memcmp(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = a4;
    t1 = a5;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        t2 = (t2 + 0x1);
        if ((*(signed char *)((t0 + 0x0))) != (*(signed char *)((t1 + 0x0)))) {
            t3 = 0xFFFFFFFF;
        }
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x1);
        if ((int)t2 >= (int)0x200) {
            break;
        }
    }
    return t3;
}

int ADXB_Reset(int a4)
{
    int t0;
    int t3;

    t0 = *(int *)((a4 + 0x4));
    t3 = t0;
    if (t0 == 3) {
        ADXPD_Reset((*(int *)((a4 + 0x8))));
        *(unsigned int *)((a4 + 0x9C)) = 0x0;
        *(unsigned int *)((a4 + 0x4)) = 0x0;
        t3 = 0x9C;
    }
    return t3;
}

void mwRnaErrCallFunc(int a4)
{
    int t0;
    int t2;

    t0 = *(int *)0xC239F5C;
    if (t0 != 0) {
        t2 = ((int (*)(int, int))(t0))((*(int *)0xC239F60), a4);
    }
}

int FUN_0c22cdc4(int a4)
{
    int t0;
    int t1;

    if (a4 != 0) {
        t0 = memset(a4, 0x0, 0x24);
        *(unsigned int *)((a4 + 0x4)) = 0x0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c22d0a0(int a4)
{
    int t0;
    int t1;

    if (a4 != 0) {
        t0 = memset(a4, 0x0, 0x30);
        *(unsigned int *)((a4 + 0x4)) = 0x0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c22fa60(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    float u3;
    float u4;

    if ((((a4 | a5) | a6) & 7) == 0) {
        t0 = a4;
        t1 = a5;
        t2 = ((unsigned int)((unsigned int)a6 >> 2) >> 1);
        for (;;) {
            u3 = *(float *)((t1 + 0x0));
            u4 = *(float *)(((t1 + 0x0) + 4));
            t1 = (t1 + 0x8);
            t2 = (t2 - 0x1);
            *(float *)((t0 + 0x0)) = u3;
            *(float *)(((t0 + 0x0) + 4)) = u4;
            t0 = (t0 + 0x8);
            if (t2 == 0) {
                break;
            }
        }
        return ((a4 | a5) | a6);
    }
    return FUN_0c22fa7e(a4, a5, a6);
}

int mpdrv_set_getcond_ns(int a4, int a5)
{
    int stk[5];

    *(unsigned int *)(((int)stk + 12)) = a5;
    return (mpdrv_setcmd(a4, 0x9, (((int)stk + 4) + 0x8), 0x1, 0x0));
}

void FUN_0c22cd34(void)
{
    if ((int)(*(int *)0xC239EA4) <= 0) {
        *(unsigned int *)0xC239EA4 = ((*(int *)0xC239EA4) + 0x1);
        memset(0xC960DD8, 0x0, 0x480);
    return;
    }
}

void FUN_0c22d010(void)
{
    if ((int)(*(int *)0xC239EDC) <= 0) {
        *(unsigned int *)0xC239EDC = ((*(int *)0xC239EDC) + 0x1);
        memset(0xC961258, 0x0, 0xC00);
    return;
    }
}

void kmytex_FBEnQueueEntry(int a4, int a5, int a6)
{
    int t3;

    if ((*(int *)((a6 + 0x8))) == 0) {
        *(unsigned int *)((a4 + 0x0)) = a5;
        *(unsigned int *)((a5 + 0x4)) = a6;
        t3 = 0x0;
    } else {
        *(unsigned int *)(((*(int *)((a6 + 0x8))) + 0x4)) = a5;
        *(unsigned int *)((a5 + 0x4)) = a6;
        t3 = (*(int *)((a6 + 0x8)));
    }
    *(unsigned int *)((a5 + 0x8)) = t3;
    *(unsigned int *)((a6 + 0x8)) = a5;
}

int mpdrv_stat(int a4, int a5)
{
    int t1;

    t1 = *(int *)(((mpdrv_get_device(a4)) + 0x20));
    return (((t1 == a5)) ? 1 : 0);
}

int ADXB_Stop(int a4)
{
    int t1;

    t1 = ADXPD_Stop((*(int *)((a4 + 0x8))));
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    return t1;
}

int FUN_0c22cd00(void)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    return t0;
}

void FUN_0c22cd18(int a4, int a5)
{
    _builtin_set_imask(((unsigned int)(((a5 & 0xF) << 2) << 2) >> 4));
}

int FUN_0c22cfdc(void)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    return t0;
}

void FUN_0c22cff4(int a4, int a5)
{
    _builtin_set_imask(((unsigned int)(((a5 & 0xF) << 2) << 2) >> 4));
}

int mpdrv_get_version(int a4, int a5)
{
    int t4;
    int t5;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = (*(int *)0xC2382D4);
    }
    if (a5 != 0) {
        t4 = *(int *)0xC2382D8;
        *(unsigned int *)((a5 + 0x0)) = t4;
        t5 = t4;
    }
    return t5;
}

int mpdrv_set_dreq_ns(int a4)
{
    return (mpdrv_setcmd(a4, 0x1, 0x0, 0x0, 0x0));
}

int mpdrv_set_dkill_ns(int a4)
{
    return (mpdrv_setcmd(a4, 0x4, 0x0, 0x0, 0x0));
}

int mpdrv_set_dreset_ns(int a4)
{
    return (mpdrv_setcmd(a4, 0x3, 0x0, 0x0, 0x0));
}

int mpdrv_set_allstatreq_ns(int a4)
{
    return (mpdrv_setcmd(a4, 0x2, 0x0, 0x0, 0x0));
}

int mpdrv_set_transagain_ns(int a4)
{
    return (mpdrv_setcmd(a4, 0xFC, 0x0, 0x0, 0x0));
}

int vmsfb_create(int a4, int a5, int a6)
{
    return buFbrCreateFiber((*(int *)0xC98E190), a4, a5, a6);
}

int mpdrv_frame_recv_post(void)
{
    *(unsigned int *)(((*(int *)0xC98E18C) + 0xFC0)) = 0x1;
    *(unsigned char *)(((*(int *)0xC231FAC) + 0x0)) = 0x0;
    return 0x0;
}

int mpdrv_memset_l(int a4, int a5, int a6)
{
    int t0;
    int t1;

    if ((int)a6 > 0) {
        t0 = a4;
        t1 = 0x0;
        for (;;) {
            t1 = (t1 + 0x1);
            *(unsigned int *)((t0 + 0x0)) = a5;
            t0 = (t0 + 0x4);
            if ((int)t1 >= (int)a6) {
                break;
            }
        }
    }
    return a6;
}

int vmsfb_init(void)
{
    int t1;

    buFbrInit();
    t1 = buFbrCreateServer(0x8);
    *(unsigned int *)0xC98E190 = t1;
    return t1;
}

int mpdrv_set_end_ns(void)
{
    int t1;

    t1 = *(int *)(((*(int *)0xC98E18C) + 0xFCC));
    *(unsigned int *)((t1 + 0x0)) = ((*(int *)((t1 + 0x0))) | 0x80000000);
    return 0x0;
}

int FUN_0c23269c(void)
{
    FUN_0c235bb8();
    return memset(0xC98E194, 0x0, 0x560);
}

void memcpy2(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;

    if ((int)a6 > 0) {
        t0 = a4;
        t1 = a5;
        t2 = a6;
        for (;;) {
            t3 = *(short *)((t1 + 0x0));
            t1 = (t1 + 0x2);
            t2 = (t2 - 1);
            *(unsigned short *)((t0 + 0x0)) = t3;
            t0 = (t0 + 0x2);
            if ((int)t2 <= 0) {
                break;
            }
        }
    }
}

void FUN_0c22f806(int a4, int a5)
{
    int t2;

    t2 = 0x0;
    if ((*(int *)((a4 + 0x0))) == 0) {
    } else {
        t2 = (*(int *)((a4 + 0x0)));
    }
    *(unsigned int *)((a5 + 0x4)) = t2;
    *(unsigned int *)((a4 + 0x0)) = a5;
}

int mpdrv_get_deviceinfo(int a4)
{
    return (((*(int *)0xC98E18C) + 0x44C) + (a4 * 0x78));
}

int mpdrv_get_device(int a4)
{
    return (((*(int *)0xC98E18C) + 0x28) + (a4 * 0x2C));
}

int mpdrv_ischanged(int a4)
{
    return (unsigned char)(*(signed char *)(((mpdrv_get_device(a4)) + 0xC)));
}

int mpdrv_recognize(int a4)
{
    *(unsigned char *)(((mpdrv_get_device(a4)) + 0xD)) = 0x1;
    return 0x1;
}

int mpdrv_get_timeout(void)
{
    return (unsigned short)(short)((unsigned int)(*(int *)((0x10C0 + (*(int *)0xC98E18C)))) >> 16);
}

int mpdrv_optimize(int a4)
{
    *(unsigned int *)(((*(int *)0xC98E18C) + 0x10E0)) = a4;
    *(unsigned int *)(((*(int *)0xC98E18C) + 0x10E4)) = a4;
    return 0x10E4;
}

void SJRBF_Reset(int a4)
{
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = (*(int *)((a4 + 0x20)));
    *(unsigned int *)((a4 + 0x14)) = 0x0;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
}

int mpdrv_get_portstatus(int a4)
{
    return (((*(int *)0xC98E18C) + 0x4) + ((a4 << 2) << 1));
}

int mpdrv_swapmode(int a4)
{
    *(unsigned int *)(((*(int *)0xC98E18C) + 0x10C4)) = (a4 & 0x1);
    return 0x10C4;
}

void ADXB_Start(int a4)
{
    if ((*(int *)((a4 + 0x4))) == 0) {
        *(unsigned int *)((a4 + 0x4)) = 0x1;
    }
}

int kmiFBallocEx(int a4, int a5, int a6)
{
    return FUN_0c22d77a(a4, a5, a6);
}

int mpdrv_timeout(int a4)
{
    *(unsigned int *)(((*(int *)0xC98E18C) + 0x10C0)) = (a4 << 16);
    return 0x10C0;
}

int mpdrv_init_memory(void)
{
    *(unsigned int *)(((*(int *)0xC98E18C) + 0x10F4)) = 0xA05F6C00;
    return 0x10F4;
}

void SJMEM_Reset(int a4)
{
    *(unsigned int *)((a4 + 0xC)) = (*(int *)((a4 + 0x18)));
    *(unsigned int *)((a4 + 0x10)) = 0x0;
}

int FUN_0c22ccd0(int a4, int a5, int a6)
{
    return FUN_0c233818(a4, a5, a6);
}

int mpdrv_get_swapmode(void)
{
    return (*(int *)((0x10C4 + (*(int *)0xC98E18C))));
}

int mpdrv_nopcount(int a4)
{
    *(unsigned int *)(((*(int *)0xC98E18C) + 0x10CC)) = a4;
    return 0x10CC;
}

int mpdrv_get_nopcount(void)
{
    return (*(int *)((0x10CC + (*(int *)0xC98E18C))));
}

int mpdrv_speed(int a4)
{
    *(unsigned int *)(((*(int *)0xC98E18C) + 0x10D0)) = a4;
    return 0x10D0;
}

int mpdrv_get_speed(void)
{
    return (*(int *)((0x10D0 + (*(int *)0xC98E18C))));
}

int mpdrv_debugmode(int a4)
{
    *(unsigned int *)(((*(int *)0xC98E18C) + 0x10C8)) = a4;
    return 0x10C8;
}

int mpdrv_get_debugmode(void)
{
    return (*(int *)((0x10C8 + (*(int *)0xC98E18C))));
}

int mpdrv_dreqcount(int a4)
{
    *(unsigned int *)(((*(int *)0xC98E18C) + 0x10D8)) = a4;
    return 0x10D8;
}

int mpdrv_get_dreqcount(void)
{
    return (*(int *)((0x10D8 + (*(int *)0xC98E18C))));
}

int mpdrv_get_optimize(void)
{
    return (*(int *)((0x10E4 + (*(int *)0xC98E18C))));
}

int mpdrv_get_lastsendaddr(void)
{
    return (*(int *)((0x10B0 + (*(int *)0xC98E18C))));
}

int mpdrv_rootplay(int a4)
{
    *(unsigned int *)(((*(int *)0xC98E18C) + 0x10DC)) = a4;
    return 0x10DC;
}

int mpdrv_get_rootplay(void)
{
    return (*(int *)((0x10DC + (*(int *)0xC98E18C))));
}

int mpdrv_gunmode(int a4)
{
    *(unsigned int *)(((*(int *)0xC98E18C) + 0xFAC)) = a4;
    return 0xFAC;
}

int mpdrv_get_gunmode(void)
{
    return (*(int *)((0xFB0 + (*(int *)0xC98E18C))));
}

int mpdrv_autoflash(int a4)
{
    *(unsigned int *)(((*(int *)0xC98E18C) + 0xFBC)) = a4;
    return 0xFBC;
}

int mpdrv_get_autoflash(void)
{
    return (*(int *)((0xFBC + (*(int *)0xC98E18C))));
}

int FUN_0c232610(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x0);
}

int FUN_0c232624(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x1);
}

int FUN_0c232638(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x2);
}

int FUN_0c23264c(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x3);
}

int ADXB_EntryGetWrFunc(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x88)) = a5;
    *(unsigned int *)((a4 + 0x8C)) = a6;
    return 0x8C;
}

int ADXB_EntryAddWrFunc(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x90)) = a5;
    *(unsigned int *)((a4 + 0x94)) = a6;
    return 0x94;
}

void FUN_0c232e9c(int a4, int a5)
{
    *(unsigned int *)0xC239F5C = a4;
    *(unsigned int *)0xC239F60 = a5;
}

int vmsfb_exit(int a4, int a5, int a6, int a7)
{
    return buFbrDestroyServer((*(int *)0xC98E190), a5, a6, a7);
}

int vmsfb_exec(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    return buFbrExecFiberServer((*(int *)0xC98E190), a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
}

void vmsio_init(void)
{
    *(unsigned int *)0xC239F58 = 0x0;
}

void FUN_0c22fa8e(int a4)
{
    iaOcbwb((void *)a4);
}

int mpdrv_v2p(int a4)
{
    return (0xFFFFFFF & a4);
}

int vmsfb_sleep(void)
{
    return buFbrSleepVFiber();
}

int ADXB_GetFormat(int a4)
{
    return (*(short *)((a4 + 0xA8)));
}

int ADXB_GetNumLoop(int a4)
{
    return (*(short *)((a4 + 0x24)));
}

int ADXB_GetDecDtLen(int a4)
{
    return (*(int *)((a4 + 0xA4)));
}

int ADXB_GetDecNumSmpl(int a4)
{
    return (*(int *)((a4 + 0xA0)));
}

void FUN_0c22ba6a(void)
{
    
}

int FUN_0c22c6d0(void)
{
    return 0x0;
}

int FUN_0c22d40c(int a4)
{
    return (*(int *)((a4 + 0x1C)));
}

int FUN_0c22d410(int a4)
{
    return (*(int *)((a4 + 0x20)));
}

int FUN_0c22d414(int a4)
{
    return (*(int *)((a4 + 0x24)));
}

int mpdrv_set_hreset_ns(int a4)
{
    return mpdrv_hreset(a4);
}

int mpdrv_p2v(int a4)
{
    return a4;
}

void vmsio_exit(void)
{
    
}

int ADXB_GetPcmBuf(int a4)
{
    return (*(int *)((a4 + 0x3C)));
}

int ADXB_GetSfreq(int a4)
{
    return (*(int *)((a4 + 0x14)));
}

int ADXB_GetNumChan(int a4)
{
    return (*(signed char *)((a4 + 0xE)));
}

int ADXB_GetBlkSmpl(int a4)
{
    return (*(int *)((a4 + 0x10)));
}

int ADXB_GetBlkLen(int a4)
{
    return (*(signed char *)((a4 + 0xF)));
}

int ADXB_GetTotalNumSmpl(int a4)
{
    return (*(int *)((a4 + 0x18)));
}

int ADXB_GetCof(int a4)
{
    return (*(short *)((a4 + 0x1C)));
}

int ADXB_GetLpInsNsmpl(int a4)
{
    return (*(int *)((a4 + 0x20)));
}

int ADXB_GetLpStartPos(int a4)
{
    return (*(int *)((a4 + 0x28)));
}

int ADXB_GetLpStartOfst(int a4)
{
    return (*(int *)((a4 + 0x2C)));
}

int ADXB_GetLpEndPos(int a4)
{
    return (*(int *)((a4 + 0x30)));
}

int ADXB_GetLpEndOfst(int a4)
{
    return (*(int *)((a4 + 0x34)));
}

int ADXB_GetStat(int a4)
{
    return (*(int *)((a4 + 0x4)));
}

int ADXB_GetAdxpd(int a4)
{
    return (*(int *)((a4 + 0x8)));
}
