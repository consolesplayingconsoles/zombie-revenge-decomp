/* Straight-line functions with calls and guards (batch gen_q): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_GetFileRange(int, int, int);
int ADXSTM_GetCurOfst(int, int);
int ADXSTM_GetStat(int);
int ADXT_Stop(void);
int FUN_0c016c10(int);
int FUN_0c016c5e(int);
int FUN_0c01d984(int);
int FUN_0c01ecb4(int);
int FUN_0c03bd28(int, int, int, int, int);
int FUN_0c04994c(int);
int FUN_0c052064(int);
int FUN_0c052328(void);
int FUN_0c054ccc(int);
int FUN_0c054e1c(int);
int FUN_0c05518c(int, int, int);
int FUN_0c056000(int);
int FUN_0c062eb4(void);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c06f3f6(int, int);
int FUN_0c07e38c(void);
int FUN_0c085534(void);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0b719e(int);
int FUN_0c0b8b42(int);
int FUN_0c0b96a4(void);
int FUN_0c0b976e(void);
int FUN_0c0b9b8e(int);
int FUN_0c0bb1a8(int, int);
int FUN_0c0bfb5c(void);
int FUN_0c0c465c(int);
int FUN_0c0c55da(void);
int FUN_0c0c62d0(int);
int FUN_0c0c90d6(int, int, int, float, float);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cbe74(int, int, int);
int FUN_0c0cc008(int);
int FUN_0c0cc3c8(void);
int FUN_0c0cc3f8(int);
int FUN_0c0cc6ac(void);
int FUN_0c0cead0(int);
int FUN_0c0d0648(void);
int FUN_0c0d26a8(void);
int FUN_0c0d9ac0(void);
int FUN_0c0db640(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc4c0(int);
int FUN_0c0dc510(int);
int FUN_0c0dcca0(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e1e6a(int);
int FUN_0c0e2794(int, int);
extern int FUN_0c0e2a4c();
int FUN_0c0e3a08(int, int);
int FUN_0c0e40ec(int, int, int);
int FUN_0c0e44b0(int, int, int);
int FUN_0c0e54ec(int, int, int);
int FUN_0c0e61d4(void);
int FUN_0c2134b2(void);
int FUN_0c21b228(int, int, int, int);
extern float _builtin_fipr(float *, float *);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int adxf_CloseSjStm(int);
int buFbrKillFiber(int, int);
int gdFsFinish(void);
int gdFsStopRd(int);
static float iaFsrra(float x)
{
    return _builtin_fsrra(x);
}
int kmSetDisplayMode(int, int, int, int);
int kmSetPALEXTCallback(int);
int kmiDefaultInterruptHandler(int);
int kmiTXalloc(int, int);
int kmiVQalloc(int);
int pdExitPeripheral(void);
int pdVibMxIsReady(int);
int syBtExit(void);
int syCfgExit(void);
int syHwFinish(void);
int syRtcFinish(void);
int syTmrDiffCount(int, int);
int syTmrGetCount(void);
int vmsfs_c_getstate(int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int FUN_0c016530(void);
int FUN_0c016576(void);
int FUN_0c0165bc(void);
int FUN_0c01e2e8(int a4);
int FUN_0c0166c4(void);
int FUN_0c05133e(int a4);
int FUN_0c03cfb8(int a4);
int FUN_0c03d516(int a4);
int FUN_0c057de4(int a4, int a5);
int FUN_0c057f2c(int a4);
int FUN_0c062d04(void);
int FUN_0c070114(int a4, int a5);
int FUN_0c07ede6(void);
int FUN_0c07d692(int a4, int a5, int a6, int a7);
int FUN_0c010c40(int a4);
int FUN_0c0110d0(int a4);
int FUN_0c010a30(void);
int FUN_0c010624(int a4, int a5, int a6, int a7);
int FUN_0c016602(void);
int FUN_0c0169da(int a4);
int FUN_0c022252(void);
int FUN_0c032b70(int a4);
int FUN_0c04b300(int a4, int a5);
int FUN_0c057da0(int a4, int a5);
int FUN_0c058126(void);
int FUN_0c05a98a(int a4, int a5, int a6);
int FUN_0c065132(int a4, int a5);
int FUN_0c01ac48(void);
int FUN_0c086b96(int a4);
int FUN_0c0855f4(int a4);
int FUN_0c0881d4(int a4, int a5);
int FUN_0c086bda(int a4, float f4);
int FUN_0c09bd5c(int a4);
int FUN_0c0b221e(void);
int FUN_0c093792(int a4, int a5);
int FUN_0c0c490a(int a4, int a5, int a6, int a7);
int FUN_0c0ba00c(int a4);
int FUN_0c0c74a4(void);
void FUN_0c0c92b2(int a4, int a5, int a6, float f4, float f5);
int FUN_0c0cc010(int a4);
int FUN_0c0cc384(void);
int FUN_0c0cc6dc(void);
void FUN_0c0d9630(void);
float FUN_0c0dd050(int a4);
int FUN_0c0b8afe(void);
void FUN_0c0db550(int a4, int a5);
int FUN_0c0e4fbe(int a4, int a5);
int FUN_0c0e1c44(int a4);
int buDefragDisk(int a4, int a5);
int buReadDiskImage(int a4, int a5);
int buWriteDiskImage(int a4, int a5);
int syCfgIIDCheckSum(int a4);
int adxf_SetAfsFileInfo(int a4, int a5, int a6);
int adxf_ExecOne(int a4);
int kmCreateTextureSurface(int a4, int a5, int a6, int a7);
int ADXSTM_Stop(int a4);
int FUN_0c233730(int a4, int a5, int a6);
int buFbrKillFiberLevel(int a4, int a5);
int copy_device(void);

int FUN_0c016530(void)
{
    int t1;
    int t6;

    *(unsigned int *)0xC23A190 = 0x3;
    *(unsigned int *)0xC23ED44 = 0x0;
    *(unsigned int *)0xC23ED48 = 0x0;
    t1 = FUN_0c016c10((*(int *)0xC23ED50));
    *(unsigned int *)0xC23ECFC = t1;
    *(unsigned int *)0xC23ED00 = (FUN_0c016c5e((unsigned char)(*(short *)((t1 + 0x4)))));
    t6 = ((int (*)(void))((*(int *)(((*(int *)0xC23ECFC) + 0x10)))))();
    *(unsigned int *)0xC23A184 = ((*(int *)0xC23A184) + 0x1);
    return t6;
}

int FUN_0c016576(void)
{
    int t1;
    int t6;

    *(unsigned int *)0xC23A190 = 0x6;
    *(unsigned int *)0xC23ED44 = 0x0;
    *(unsigned int *)0xC23ED48 = 0x0;
    t1 = FUN_0c016c10((*(int *)0xC23ED50));
    *(unsigned int *)0xC23ECFC = t1;
    *(unsigned int *)0xC23ED00 = (FUN_0c016c5e((unsigned char)(*(short *)((t1 + 0x4)))));
    t6 = ((int (*)(void))((*(int *)(((*(int *)0xC23ECFC) + 0x10)))))();
    *(unsigned int *)0xC23A184 = ((*(int *)0xC23A184) + 0x1);
    return t6;
}

int FUN_0c0165bc(void)
{
    int t1;
    int t6;

    *(unsigned int *)0xC23A190 = 0x4;
    *(unsigned int *)0xC23ED44 = 0x0;
    *(unsigned int *)0xC23ED48 = 0x0;
    t1 = FUN_0c016c10((*(int *)0xC23ED50));
    *(unsigned int *)0xC23ECFC = t1;
    *(unsigned int *)0xC23ED00 = (FUN_0c016c5e((unsigned char)(*(short *)((t1 + 0x4)))));
    t6 = ((int (*)(void))((*(int *)(((*(int *)0xC23ECFC) + 0x10)))))();
    *(unsigned int *)0xC23A184 = ((*(int *)0xC23A184) + 0x1);
    return t6;
}

int FUN_0c01e2e8(int a4)
{
    int t0;

    t0 = FUN_0c01ecb4(a4);
    if (t0 != 0) {
        if ((*(float *)((a4 + 0xB4))) > ((*(float *)((a4 + 0x34))) + (*(float *)((a4 + 0x58))))) {
            *(float *)((a4 + 0x34)) = (*(float *)((a4 + 0xB4)));
        } else {
            *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x58 + a4) + 0x0))));
        }
    } else {
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x58 + a4) + 0x0))));
    }
    *(float *)((a4 + 0x58)) = 0.0f;
    *(float *)((a4 + 0x4C)) = 0.0f;
    return 0x4C;
}

int FUN_0c0166c4(void)
{
    int t1;
    int t6;

    *(unsigned int *)0xC23A190 = 0x5;
    *(unsigned int *)0xC23ED44 = 0x0;
    *(unsigned int *)0xC23ED48 = 0x0;
    t1 = FUN_0c016c10((*(int *)0xC23ED50));
    *(unsigned int *)0xC23ECFC = t1;
    *(unsigned int *)0xC23ED00 = (FUN_0c016c5e((unsigned char)(*(short *)((t1 + 0x4)))));
    t6 = ((int (*)(void))((*(int *)(((*(int *)0xC23ECFC) + 0x10)))))();
    *(unsigned int *)0xC23A184 = ((*(int *)0xC23A184) + 0x1);
    return t6;
}

int FUN_0c05133e(int a4)
{
    if ((*(int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0))) != 0) {
        *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x0;
        *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0) + 0x0)) = 0x0;
        FUN_0c01d984(a4);
    }
    FUN_0c0855f4(a4);
    return FUN_0c0e19f2();
}

int FUN_0c03cfb8(int a4)
{
    FUN_0c03bd28(a4, 0x1, 0x0, 0x5, 0x0);
    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        if ((*(int *)((a4 + 0x5C0))) == 0) {
            *(unsigned int *)((a4 + 0x5C0)) = 0x1;
            return FUN_0c0cc3f8(0x131A9);
        }
        return 0x5C0;
    }
    return FUN_0c0cc3f8(0x31A9);
}

int FUN_0c03d516(int a4)
{
    FUN_0c03bd28(a4, 0x1, 0x0, 0x5, 0x0);
    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        if ((*(int *)((a4 + 0x5C0))) == 0) {
            *(unsigned int *)((a4 + 0x5C0)) = 0x1;
            return FUN_0c0cc3f8(0x623A9);
        }
        return 0x5C0;
    }
    return FUN_0c0cc3f8(0x523A9);
}

int FUN_0c057de4(int a4, int a5)
{
    int t0;
    int t2;
    int t3;
    int t6;
    int t7;
    int t8;
    int t9;

    t0 = *(int *)((a4 + 0x330));
    t2 = 0x330;
    t3 = t0;
    if (t0 == 0) {
        *(unsigned int *)(((((*(int *)((a4 + 0x358))) << 2) + 0xC247604) + 0x0)) = 0x9;
        t2 = 0x358;
        t3 = 0xC247604;
    }
    t6 = t2;
    t7 = t3;
    t8 = (0x344 + a4);
    t9 = (0x34C + a4);
    for (;;) {
        if ((*(int *)((t8 + 0x0))) != 0) {
            t6 = (*(int *)((t9 + 0x0)));
            t7 = 0xC2475D4;
            t7 = (t7 + 0x30);
            t6 = (t6 << 2);
            t6 = (t6 + t7);
            *(unsigned int *)((t6 + 0x0)) = 0x9;
        }
        t8 = (t8 + 0x4);
        t9 = (t9 + 0x4);
        if ((unsigned int)t8 >= (unsigned int)((0x344 + a4) + 0x8)) {
            break;
        }
    }
    return t6;
}

int FUN_0c057f2c(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x330));
    if ((t0 != 1) && (t0 != 3)) {
        return 0x0;
    }
    FUN_0c056000(a4);
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x20C)) = 0x200000;
    *(unsigned int *)((a4 + 0x210)) = 0x54;
    *(unsigned int *)((a4 + 0x3AC)) = 0x0;
    return 0xFFFFFFFF;
}

int FUN_0c062d04(void)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC0622DC, 0x2834, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)0xC247B84 = t1;
    FUN_0c062eb4();
    FUN_0c0cbafc((*(int *)(((*(int *)0xC247B94) + 0x58))), 0x2, 0xFC000000, 0x84000000);
    return FUN_0c0cbafc((*(int *)(((*(int *)0xC247B94) + 0x5C))), 0x2, 0xFC000000, 0x84000000);
}

int FUN_0c070114(int a4, int a5)
{
    int t0;
    int t1;
    int t4;
    int t5;
    int t6;

    if ((int)a5 > 0) {
        t0 = a4;
        t1 = 0x0;
        for (;;) {
            t4 = FUN_0c0e19aa(0xC06F6F4, 0x3E4, (*(int *)(((*(int *)0xC247C64) + 0x30))));
            t5 = FUN_0c06f3f6(t4, t0);
            t1 = (t1 + 0x1);
            t0 = (t0 + 0x38);
            if ((int)t1 >= (int)a5) {
                break;
            }
        }
        t6 = t5;
    }
    return t6;
}

int FUN_0c07ede6(void)
{
    int t0;
    int t3;
    int t4;
    int t11;
    int t15;
    int stk[1];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int T_;
    L_C07EDE6:;
    t0 = *(int *)0xC23ED5C;
    R4 = (t0);
    if (((0x200 & t0) == 0)) goto L_C07EE28;
    goto L_C07EDF0;
    L_C07EDF0:;
    t3 = *(int *)0xC247CA4;
    t4 = *(short *)((t3 + 0x2));
    R0 = (t4);
    R5 = (t3);
    if (((t4 & 6) == 0)) goto L_C07EE28;
    goto L_C07EDFA;
    L_C07EDFA:;
    R6 = (0xC247CFC);
    R7 = (0x1);
    if (((R4 & 0x800) == 0)) goto L_C07EE10;
    goto L_C07EE04;
    L_C07EE04:;
    t11 = *(int *)0xC23A1A8;
    R0 = (t11);
    if (((R7 & t11) != 0)) goto L_C07EE24;
    goto L_C07EE0C;
    L_C07EE0C:;
    R1 = (0x7);
    goto L_C07EE20;
    L_C07EE20:;
    *(unsigned int *)((R6 + 0x0)) = R1;
    goto L_C07EE28;
    L_C07EE28:;
    return R0;
    L_C07EE24:;
    *(unsigned int *)((R6 + 0x0)) = 0x2;
    goto L_C07EE28;
    L_C07EE10:;
    t15 = *(short *)((R5 + 0x2));
    R0 = (t15);
    if (((t15 & 4) == 0)) goto L_C07EE28;
    goto L_C07EE16;
    L_C07EE16:;
    R0 = (0xC23A1A8);
    if (((R7 & (*(int *)0xC23A1A8)) != 0)) goto L_C07EE24;
    goto L_C07EE1E;
    L_C07EE1E:;
    R1 = (0x6);
    goto L_C07EE20;
}

int FUN_0c07d692(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;

    t1 = (FUN_0c0685a4(a4, a5, a6, a7));
    t2 = 0xC101028;
    for (;;) {
        if ((int)(*(int *)((t2 + 0xC))) < 0) {
            break;
        }
        t1 = (FUN_0c0dc510(0x0));
        t1 = (FUN_0c0dcca0(t2));
        t1 = (FUN_0c0c465c((*(int *)((t2 + 0xC)))));
        t1 = (FUN_0c0dc4c0(0x1));
        t2 = (t2 + 0x10);
    }
    return t1;
}

int FUN_0c010c40(int a4)
{
    *(unsigned int *)0xC23A190 = a4;
    *(unsigned int *)0xC23EAF0 = 0x0;
    *(unsigned int *)0xC23EAEC = 0x0;
    *(unsigned int *)0xC23EAE8 = 0x0;
    *(unsigned int *)0xC23EAE4 = 0x0;
    *(unsigned int *)0xC23EAE0 = 0x0;
    *(unsigned int *)0xC23EADC = 0x0;
    *(unsigned int *)0xC23EAD8 = 0x0;
    *(unsigned int *)0xC23EAD4 = 0x0;
    *(unsigned int *)0xC23EAD0 = 0x0;
    *(unsigned int *)0xC23EACC = 0x0;
    *(unsigned int *)0xC23EAC8 = 0x0;
    *(unsigned int *)0xC23EAC4 = 0x0;
    *(unsigned int *)0xC23EAC0 = 0x0;
    *(unsigned int *)0xC23EAF8 = 0x0;
    *(unsigned int *)0xC23EAF4 = 0x0;
    return 0xC23EAEC;
}

int FUN_0c0110d0(int a4)
{
    int t6;
    int t0;
    int t1;
    int t3;

    t6 = 0x0;
    if ((int)0x0 < (int)0x4) {
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t3 = *(int *)(((FUN_0c0cead0(t1)) + 0x50));
            t0 = (t0 << 1);
            t1 = (t1 + 0x1);
            if (t3 == 1) {
                t0 = (t0 | 0x1);
            }
            if ((int)t1 >= (int)0x4) {
                break;
            }
        }
        t6 = t0;
    }
    return t6;
}

int FUN_0c010a30(void)
{
    _builtin_set_imask(0x0);
    syCfgExit();
    FUN_0c2134b2();
    gdFsFinish();
    syRtcFinish();
    pdExitPeripheral();
    FUN_0c0d9ac0();
    syHwFinish();
    _builtin_set_imask(0xF);
    return syBtExit();
}

int FUN_0c010624(int a4, int a5, int a6, int a7)
{
    int t1;

    kmSetPALEXTCallback(0xC010618);
    t1 = a4;
    if (((0x3 & a4) != 1) && (((0x3 & a4) != 0) && ((0x3 & a4) == 2))) {
        t1 = (0x40 | a4);
    }
    return kmSetDisplayMode(t1, a5, a6, a7);
}

int FUN_0c016602(void)
{
    int t1;
    int t6;

    *(unsigned int *)0xC23A190 = 0x0;
    *(unsigned int *)0xC23ED44 = 0x0;
    *(unsigned int *)0xC23ED48 = 0x0;
    t1 = FUN_0c016c10((*(int *)0xC23ED50));
    *(unsigned int *)0xC23ECFC = t1;
    *(unsigned int *)0xC23ED00 = (FUN_0c016c5e((unsigned char)(*(short *)((t1 + 0x4)))));
    t6 = ((int (*)(void))((*(int *)(((*(int *)0xC23ECFC) + 0x10)))))();
    *(unsigned int *)0xC23A184 = ((*(int *)0xC23A184) + 0x1);
    return t6;
}

int FUN_0c0169da(int a4)
{
    FUN_0c054ccc(a4);
    FUN_0c054e1c(a4);
    *(unsigned int *)(((a4 << 2) + 0xC247584)) = 0x0;
    *(float *)(((a4 << 2) + 0xC24758C)) = 0.0f;
    *(unsigned int *)(((a4 << 2) + 0xC247594)) = (*(int *)0xC2475B4);
    *(unsigned int *)(((a4 << 2) + 0xC24759C)) = (*(int *)0xC2475B4);
    *(unsigned int *)(((a4 << 2) + 0xC23EDC0)) = 0x0;
    *(unsigned int *)(((a4 << 2) + 0xC23EDD0)) = 0x0;
    *(unsigned int *)(((a4 << 2) + 0xC23EDF0)) = 0x0;
    return FUN_0c04994c(a4);
}

int FUN_0c022252(void)
{
    int t0;
    int t3;

    t0 = FUN_0c0e1830(0xC02219E, 0x80);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x68)) = 0xFFFFFFFF;
    *(unsigned int *)0xC246494 = 0x0;
    *(unsigned int *)0xC246310 = 0x0;
    if ((*(int *)0xC23A180) == 2) {
        *(unsigned int *)(((0x50 + t0) + 0x0)) = 0xC1FD4C4;
        t3 = 0xC1FD4C4;
    } else {
        *(unsigned int *)((t0 + 0x50)) = 0xC1FD44C;
        t3 = 0x50;
    }
    return t3;
}

int FUN_0c032b70(int a4)
{
    int stk[5];

    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (-(*(float *)((a4 + 0x60)))), (-(*(float *)((a4 + 0x64)))), (-(*(float *)((a4 + 0x68)))));
    *(unsigned short *)((a4 + 0x23C)) = (*(int *)(((int)stk + 4)));
    *(unsigned short *)((a4 + 0x23E)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)((a4 + 0x4EC)) = 0x0;
    *(float *)((a4 + 0x550)) = 0.0f;
    return 0x550;
}

int FUN_0c04b300(int a4, int a5)
{
    int t1;

    if (((*(int *)((a4 + 0x394))) == 0) && (t1 = *(int *)((a5 + 0x0)), (t1 & 2) != 0)) {
        *(unsigned int *)((a4 + 0x20C)) = 0x100;
        *(unsigned int *)((a4 + 0x210)) = 0x5F;
        *(unsigned int *)((a4 + 0x2C4)) = 0x3E3;
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0x394)) = 0x1;
        *(unsigned int *)((a4 + 0x2D4)) = 0x3;
        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
        *(unsigned int *)((a4 + 0x3B0)) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c057da0(int a4, int a5)
{
    int t10;
    int t0;
    int t4;
    int t2;

    t10 = 0x0;
    if (a5 == 0) {
        t0 = *(int *)((a4 + 0xBC));
        t4 = 0x1;
        if (((int)(unsigned short)(*(short *)((((t0 * 0xE) + 0xC247998) + 0x0))) <= 0) && (t2 = *(short *)((((t0 * 0xE) + 0xC247998) + 0x2)), (int)(unsigned short)t2 <= 0)) {
            t4 = 0x0;
        }
        t10 = t4;
    }
    return FUN_0c05518c(a4, (unsigned short)(*(short *)((0xC1FE898 + ((*(int *)((a4 + 0xC0))) << 1)))), t10);
}

int FUN_0c058126(void)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t11;
    int t1;

    t0 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        t5 = *(int *)((t2 + 0xC247604));
        t11 = t5;
        if (t5 == 11) {
            t0 = 0xC2475D4;
            t0 = (t0 + t3);
            t0 = (*(int *)((t0 + 0x0)));
            t1 = (*(int *)((t0 + 0x230)));
            if (t1 != 0) {
                t1 = 0xC2475D4;
                t1 = (t1 + 0x30);
                t1 = (t1 + t4);
                *(unsigned int *)((t1 + 0x0)) = 0x9;
            }
            t11 = 0x230;
        }
        t2 = (t2 + 0x4);
        t4 = (t4 + 0x4);
        t3 = (t3 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0x30) {
            break;
        }
    }
    return t11;
}

int FUN_0c05a98a(int a4, int a5, int a6)
{
    int t19;
    int t1;
    int t11;
    int t12;
    int t13;

    t19 = 0x1C4;
    if (((int)(*(int *)((a4 + 0x1C4))) < (int)0x10) && (t1 = *(int *)((a4 + 0x1C)), t1 != 0)) {
        if ((((*(int *)0xC23A1A8) & 0x100) != 0) && (t11 = *(int *)((a4 + 0x1C4)), t12 = *(int *)(((t11 << 2) + 0xC246FF0)), t13 = *(int *)((t12 + 0x20C)), (t13 & 64) != 0)) {
        } else {
            *(unsigned int *)((t1 + 0xE0)) = 0x0;
        }
        *(unsigned int *)((t1 + 0xD8)) = (*(int *)((a4 + 0xD8)));
        *(unsigned int *)((t1 + 0xE4)) = (*(int *)((a4 + 0x1C4)));
        t19 = 0xE4;
    }
    return t19;
}

int FUN_0c065132(int a4, int a5)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC064FAC, 0x40, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x30)) = a4;
    *(unsigned int *)((t1 + 0x34)) = a5;
    FUN_0c0cbafc(0x2F1, 0x2, 0xFC007000, 0x84002000);
    return FUN_0c0cbafc(0x291, 0x2, 0xFC007000, 0x84002000);
}

int FUN_0c01ac48(void)
{
    int t5;
    int t6;

    FUN_0c085534();
    FUN_0c052064((*(int *)0xC23EDB0));
    FUN_0c052328();
    FUN_0c0c55da();
    t5 = FUN_0c0bfb5c();
    t6 = *(int *)0xC23A1A8;
    if ((0x1 & t6) != 0) {
        return FUN_0c0d0648();
    }
    if ((t6 & 0x100) != 0) {
        return FUN_0c0d26a8();
    }
    return t5;
}

int FUN_0c086b96(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC08C25A, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    FUN_0c0e61d4();
    *(unsigned short *)((t1 + 0x9A)) = 0x410;
    *(unsigned short *)((t1 + 0xA0)) = 0x14;
    *(float *)((t1 + 0x90)) = (*(float *)0xC086CA0);
    return 0x90;
}

int FUN_0c0855f4(int a4)
{
    int t2;
    int t4;
    int t6;
    int t8;
    int stk[4];

    if ((*(int *)((a4 + 0x3D4))) != 0) {
        t2 = ((int (*)(int))(FUN_0c0e2a4c))((*(int *)((a4 + 0x3E0))));
        t4 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0e2a4c))((*(int *)((a4 + 0x3DC))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        t6 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0e2a4c))((*(int *)((a4 + 0x3D8))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        t8 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0e2a4c))((*(int *)((a4 + 0x3D4))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        *(unsigned int *)((a4 + 0x3E0)) = 0x0;
        *(unsigned int *)((a4 + 0x3DC)) = 0x0;
        *(unsigned int *)((a4 + 0x3D8)) = 0x0;
        *(unsigned int *)((a4 + 0x3D4)) = 0x0;
    }
    return 0x3D4;
}

int FUN_0c0881d4(int a4, int a5)
{
    int t1;
    int t3;

    t1 = FUN_0c0e19aa(0xC088274, 0x44, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x30)) = a4;
    *(float *)((t1 + 0x34)) = 1.19999993f;
    t3 = *(short *)((a5 + 0x4));
    if (t3 != 0) {
        *(unsigned int *)((t1 + 0x3C)) = 0x3C;
    } else {
        *(unsigned int *)((t1 + 0x3C)) = 0x8;
    }
    return t3;
}

int FUN_0c086bda(int a4, float f4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC08C25A, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    FUN_0c0e61d4();
    *(float *)((t1 + 0x90)) = f4;
    *(unsigned short *)((t1 + 0x9A)) = 0x245;
    *(unsigned short *)((t1 + 0xA0)) = 0x14;
    return 0xA0;
}

int FUN_0c09bd5c(int a4)
{
    int t1;
    int t3;

    t1 = FUN_0c0e19aa(0xC09BB20, 0x184C, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)0xC24970C = 0x1;
    *(unsigned int *)((t1 + 0x30)) = a4;
    t3 = *(int *)((a4 + 0x2E8));
    *(unsigned int *)((t1 + 0x40)) = (((int)t3 >= 0) ? (0x2 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)0x2 >> (-(int)t3 & 31)) : ((int)0x2 >> 31)));
    return FUN_0c0cbafc(0x291, 0x2, 0xFC000000, 0x84000000);
}

int FUN_0c0b221e(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0B2262, 0x440);
    FUN_0c0e19d0(t0);
    *(unsigned int *)0xC247CAC = t0;
    *(unsigned int *)0xC247CB0 = t0;
    *(float *)((t0 + 0x254)) = 0.0f;
    *(float *)((t0 + 0x258)) = 10.0f;
    *(float *)((t0 + 0x25C)) = 0.0f;
    *(unsigned short *)((t0 + 0x3CC)) = 0x0;
    *(unsigned short *)((t0 + 0x3CE)) = 0x0;
    return FUN_0c0e1830(0xC0B2414, 0x30);
}

int FUN_0c093792(int a4, int a5)
{
    int t2;

    FUN_0c0bb1a8(a4, 0x1);
    t2 = FUN_0c0e19aa(0xC0937D6, 0xB4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t2);
    *(unsigned int *)(((0xA4 + t2) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x4)));
    *(unsigned int *)((t2 + 0x88)) = (*(int *)((a4 + 0xBC)));
    return 0x88;
}

int FUN_0c0c490a(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t4;
    int t5;
    int t8;
    int t3;

    t0 = *(int *)((((((unsigned short)a4 << 1) + (unsigned short)a4) << 2) + 0xC2623A0));
    if (t0 != 0) {
        t1 = 0x0;
        if (a5 != 0) {
            t1 = 0x80;
        }
        t4 = (t0 + 0x18);
        t5 = a5;
        for (;;) {
            if ((*(int *)((t4 + 0x0))) != 0) {
                t3 = (*(int *)((t4 + 0x0)));
                t3 = (t3 & 0xFFFFFF3F);
                *(unsigned int *)((t4 + 0x0)) = (t3 | t1);
                t4 = (t4 + 0x4C);
                t8 = *(int *)((t4 + 0x0));
                t4 = (t4 + 0x4);
                t5 = t8;
                t5 = ((unsigned int)t5 >> 2);
                t5 = (t5 << 2);
                t4 = (t4 + t5);
                continue;
            }
            break;
        }
    }
    return 0xC2623A0;
}

int FUN_0c0ba00c(int a4)
{
    int t0;
    float u2;
    int t3;

    t0 = FUN_0c0e1830(0xC0BA09C, 0xB4);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x88)) = a4;
    u2 = 20.0f;
    u2 = u2 + 320.0f * (float)a4;
    *(float *)((t0 + 0x30)) = u2;
    t3 = FUN_0c0b719e(a4);
    *(unsigned int *)(((0xAC + t0) + 0x0)) = t3;
    return t3;
}

int FUN_0c0c74a4(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = 0xC31FCF8;
    t1 = 0xC31FCF8;
    for (;;) {
        *(unsigned int *)((t0 + 0x10)) = 0x0;
        t2 = 0x0;
        t3 = t1;
        for (;;) {
            t2 = (t2 + 0x1);
            *(unsigned int *)((t3 + 0x0)) = 0x0;
            t3 = (t3 + 0x4);
            if ((int)t2 >= (int)0x4) {
                break;
            }
        }
        t0 = (t0 + 0x14);
        t1 = (t1 + 0x14);
        if ((unsigned int)t0 >= (unsigned int)0xC31FD20) {
            break;
        }
    }
    *(unsigned int *)0xC31FD30 = 0x0;
    t4 = 0x0;
    for (;;) {
        t5 = (0xC31FD20 + t4);
        t4 = (t4 + 0x4);
        *(unsigned int *)((t5 + 0x0)) = 0x0;
        if ((unsigned int)t4 >= (unsigned int)0x10) {
            break;
        }
    }
    return t2;
}

void FUN_0c0c92b2(int a4, int a5, int a6, float f4, float f5)
{
    int t0;
    int stk[5];

    *(unsigned int *)(((int)stk + 12)) = a5;
    t0 = *(int *)((a4 + 0x4));
    if (((int)a6 >= 0) && (((int)a6 < (int)t0) && ((a6 != (t0 - 1)) || (f4 == 0.0f)))) {
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((a6 << 2) + (*(int *)((a4 + 0x8))))));
        *(unsigned int *)(((int)stk + 4)) = (*(int *)((((a6 << 2) + (*(int *)((a4 + 0x8)))) + 0x4)));
        FUN_0c0c90d6((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x4), ((int)stk + 4), f4, f5);
    }
}

int FUN_0c0cc010(int a4)
{
    int t10;
    int t0;
    int t1;
    int t6;
    int t2;
    int t3;
    int t4;

    t10 = 0xFFFFFFFF;
    if (((int)a4 >= 0) && ((int)a4 < (int)0x4)) {
        t0 = FUN_0c0cc008(a4);
        t1 = pdVibMxIsReady(t0);
        t6 = t0;
        if (t1 == 0) {
            t2 = FUN_0c0cc008((a4 ^ 0x1));
            t3 = pdVibMxIsReady(t2);
            t4 = 0xFFFFFFFF;
            if (t3 != 0) {
                t4 = t2;
            }
            t6 = t4;
        }
        t10 = t6;
    }
    return t10;
}

int FUN_0c0cc384(void)
{
    int t0;

    *(unsigned int *)0xC522938 = 0x0;
    *(unsigned int *)0xC522934 = 0x0;
    *(unsigned int *)0xC522930 = 0x0;
    *(unsigned int *)0xC52292C = 0x0;
    *(unsigned int *)0xC522928 = 0x0;
    t0 = *(int *)0xC4BFE28;
    FUN_0c0cbe74(0x1, 0x0, t0);
    FUN_0c0e3a08(t0, 0x0);
    FUN_0c0cc3c8();
    return FUN_0c0e44b0(0x4, 0x2, 0x0);
}

int FUN_0c0cc6dc(void)
{
    int t0;

    t0 = 0x1;
    for (;;) {
        FUN_0c0e40ec(t0, 0x1100A0, 0x0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    if ((*(int *)0xC23A260) != 3) {
        FUN_0c0e40ec(0x0, 0x100A0, 0x0);
    }
    *(volatile int *)0xC5158E4;
    ADXT_Stop();
    return FUN_0c0cc6ac();
}

void FUN_0c0d9630(void)
{
    int t0;

    _builtin_set_imask(0xE);
    t0 = *(signed char *)0xFFD80004;
    *(unsigned char *)0xFFD80004 = (0xFFFFFFFE & t0);
    *(unsigned char *)0xFFD80000 = 0x1;
    *(unsigned short *)0xFFD80010 = 0x2;
    *(unsigned int *)0xFFD80008 = 0xFFFFFFFF;
    *(unsigned int *)0xFFD8000C = 0xFFFFFFFF;
    *(unsigned char *)0xFFD80004 = (t0 | 0x1);
    *(float *)0xC943EA8 = 1.27999997f;
    _builtin_set_imask(0x0);
}

float FUN_0c0dd050(int a4)
{
    float u0;
    float u1;
    float u2;
    float u5;
    float u6;
    float u3[4];
    float u4[4];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    u3[0] = u0;
    u3[1] = u1;
    u3[2] = u2;
    u3[3] = 0.0f;
    u4[0] = u0;
    u4[1] = u1;
    u4[2] = u2;
    u4[3] = 0.0f;
    u5 = _builtin_fipr(u3, u4);
    u6 = iaFsrra(u5);
    *(float *)((((a4 + 0xC) - 0x4) + 0x0)) = (u2 * u6);
    *(float *)(((((a4 + 0xC) - 0x4) - 0x4) + 0x0)) = (u1 * u6);
    *(float *)((((((a4 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = (u0 * u6);
    return _builtin_sqrtf(u5);
}

int FUN_0c0b8afe(void)
{
    FUN_0c07e38c();
    FUN_0c0b96a4();
    FUN_0c0b8b42(0x0);
    if ((*(int *)0xC204994) == 0) {
        FUN_0c0b8b42(0x1);
    }
    FUN_0c0b976e();
    FUN_0c0b9b8e(0x0);
    if ((*(int *)0xC204994) == 0) {
        FUN_0c0b9b8e(0x1);
        return FUN_0c0c62d0(0xC1125D0);
    }
    return FUN_0c0c62d0(0xC1125E0);
}

void FUN_0c0db550(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    float u3;

    if (a4 == 0) {
        if (a5 != 0) {
            FUN_0c0dbda0(a5);
    return;
        }
        return;
    }
    if (a5 == 0) {
        FUN_0c0db640(a4);
    return;
    }
    t0 = 0x10;
    t1 = a4;
    t2 = a5;
    for (;;) {
        u3 = *(float *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t0 = (t0 - 0x1);
        *(float *)((t1 + 0x0)) = u3;
        t1 = (t1 + 0x4);
        if (t0 == 0) {
            break;
        }
    }
}

int FUN_0c0e4fbe(int a4, int a5)
{
    int t1;
    int t3;
    int t11;
    int t7;
    int stk[4];

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned short *)(((((int)stk + 4) + 0x6) + 0x0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 12)));
    t1 = *(short *)(((int)stk + 10));
    if (t1 != 4) {
        if (t1 != 8) {
            t3 = t1;
            if (t1 != 16) {
            } else {
                *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x8)) = 0x0;
                t3 = 0x0;
            }
            t7 = t3;
        } else {
            *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x8)) = 0x1;
            t7 = 0x1;
        }
        t11 = t7;
    } else {
        *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x8)) = 0x3;
        t11 = 0x3;
    }
    return t11;
}

int FUN_0c0e1c44(int a4)
{
    int t7;

    FUN_0c0e2794((*(int *)0xC94C790), a4);
    FUN_0c0e1e6a(a4);
    *(unsigned int *)(((*(int *)((a4 + 0x14))) + 0x18)) = (*(int *)((a4 + 0x18)));
    *(unsigned int *)(((*(int *)((a4 + 0x18))) + 0x14)) = (*(int *)((a4 + 0x14)));
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    t7 = *(short *)((a4 + 0x2E));
    *(unsigned short *)(((0x2E + a4) + 0x0)) = ((t7 & 0xFFFC) | 0x2);
    *(unsigned int *)0xC94C7A0 = ((*(int *)0xC94C7A0) - 1);
    return ((t7 & 0xFFFC) | 0x2);
}

int buDefragDisk(int a4, int a5)
{
    int t0;
    int t3;

    t0 = vmsfs_c_getstate(a4);
    t3 = 0xFFFFFFFF;
    if (t0 != 0) {
    } else {
        vmsfs_c_setfunc(a4, 0x9);
        vmsfs_c_setparam(a4, a4, a5, 0x0, 0x0, 0x0, 0x0);
        t3 = 0x0;
    }
    return t3;
}

int buReadDiskImage(int a4, int a5)
{
    int t0;
    int t3;

    t0 = vmsfs_c_getstate(a4);
    t3 = 0xFFFFFFFF;
    if (t0 != 0) {
    } else {
        vmsfs_c_setfunc(a4, 0xF);
        vmsfs_c_setparam(a4, a4, a5, 0x0, 0x0, 0x0, 0x0);
        t3 = 0x0;
    }
    return t3;
}

int buWriteDiskImage(int a4, int a5)
{
    int t0;
    int t3;

    t0 = vmsfs_c_getstate(a4);
    t3 = 0xFFFFFFFF;
    if (t0 != 0) {
    } else {
        vmsfs_c_setfunc(a4, 0x10);
        vmsfs_c_setparam(a4, a4, a5, 0x0, 0x0, 0x0, 0x0);
        t3 = 0x0;
    }
    return t3;
}

int syCfgIIDCheckSum(int a4)
{
    int t2;
    int t3;
    int t4;
    int t10;
    int stk[3];

    *(unsigned char *)(((int)stk + 4)) = (*(signed char *)((a4 + 0x0)));
    *(unsigned char *)(((int)stk + 8)) = (*(signed char *)((a4 + 0x1)));
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        t4 = *(signed char *)(((t2 + a4) + 0x2));
        t2 = (t2 + 0x1);
        t3 = (t3 + (unsigned char)t4);
        if ((int)t2 >= (int)0x6) {
            break;
        }
    }
    if (((unsigned char)(unsigned char)t3 == (unsigned char)(*(signed char *)(((int)stk + 8)))) && (t10 = *(signed char *)(((int)stk + 4)), (unsigned char)(~(unsigned char)(unsigned char)t3) == (unsigned char)t10)) {
        return 0x1;
    }
    return 0x0;
}

int adxf_SetAfsFileInfo(int a4, int a5, int a6)
{
    int t2;
    int stk[7];

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t2 = ADXF_GetFileRange((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))), (((int)stk + 4) + 0x4));
    if ((int)t2 < 0) {
        return 0xFFFFFFFD;
    }
    *(unsigned int *)((a4 + 0xC)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)((a4 + 0x10)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)((a4 + 0x14)) = ((((*(int *)(((int)stk + 4))) << 8) << 2) << 1);
    return 0x0;
}

int adxf_ExecOne(int a4)
{
    int t0;
    int t13;
    int t6;
    int t10;
    int stk[4];

    t0 = *(signed char *)((a4 + 0x1));
    t13 = t0;
    if (t0 == 2) {
        *(unsigned char *)((a4 + 0x1)) = (ADXSTM_GetStat((*(int *)((a4 + 0x4)))));
        ADXSTM_GetCurOfst((*(int *)((a4 + 0x4))), ((int)stk + 4));
        *(unsigned int *)((a4 + 0x24)) = (*(int *)(((int)stk + 4)));
        t6 = *(signed char *)((a4 + 0x1));
        t10 = t6;
        if ((t6 != 3) && (t6 != 4)) {
        } else {
            *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) + (*(int *)((a4 + 0x24))));
            t10 = (adxf_CloseSjStm(a4));
        }
        t13 = t10;
    }
    return t13;
}

int kmCreateTextureSurface(int a4, int a5, int a6, int a7)
{
    int t0;
    int t11;
    int t6;

    t0 = FUN_0c21b228(a4, a5, a6, a7);
    t11 = t0;
    if (t0 != 0) {
    } else {
        if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
            t6 = (kmiVQalloc(a4));
        } else {
            t6 = (kmiTXalloc((*(int *)((a4 + 0x14))), a4));
        }
        if (t6 == 3) {
            kmiDefaultInterruptHandler(0x3);
        }
        t11 = t6;
    }
    return t11;
}

int ADXSTM_Stop(int a4)
{
    int t2;
    int t5;
    int t1;

    if (((*(signed char *)((a4 + 0x2))) == 1) && (t1 = *(int *)((a4 + 0x8)), t1 != 0)) {
        t2 = syTmrGetCount();
        gdFsStopRd((*(int *)((a4 + 0x8))));
        t5 = syTmrGetCount();
        *(unsigned int *)0xC239E68 = (syTmrDiffCount(t2, t5));
        *(unsigned char *)((a4 + 0x2)) = 0x0;
    }
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    return 0x1;
}

int FUN_0c233730(int a4, int a5, int a6)
{
    int t3;
    int t0;
    int t7;
    int t5;

    *(unsigned short *)((a4 + 0x48)) = a5;
    *(unsigned short *)((a4 + 0x4A)) = a6;
    t3 = 0x0;
    if ((int)(short)a5 <= 0) {
    } else {
        t0 = a5;
        if ((int)(short)a5 >= (int)0x7F) {
            t0 = 0x7F;
        }
        t3 = t0;
    }
    t7 = 0x0;
    if ((int)(short)a6 <= 0) {
    } else {
        t5 = a6;
        if ((int)(short)a6 >= (int)0x1F) {
            t5 = 0x1F;
        }
        t7 = t5;
    }
    FUN_0c0e54ec((*(short *)((a4 + 0x2))), t3, t7);
    return 0x0;
}

int buFbrKillFiberLevel(int a4, int a5)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t0;
    int t9;
    int t10;
    int t15;
    int t16;

    t1 = a4;
    t2 = a5;
    t3 = 0x0;
    t4 = (0x210 + a4);
    for (;;) {
        if ((int)t3 >= (int)(*(int *)((a4 + 0x208)))) {
            break;
        }
        t0 = (*(int *)((t4 + 0xC)));
        if ((t0 != 0) && (t9 = *(int *)((t4 + 0x10)), t10 = (t0 == 0), t0 = a5, (int)t9 <= (int)t0)) {
            t2 = t3;
            t1 = a4;
            buFbrKillFiber(t1, t2);
        } else {
            t15 = t1;
            t16 = t2;
        }
        t0 = 0x124;
        t1 = t15;
        t2 = t16;
        t3 = (t3 + 0x1);
        t4 = (t4 + t0);
    }
    return 0x208;
}

int copy_device(void)
{
    int t1;
    int t2;
    int t3;
    int t12;

    t1 = ((*(int *)0xC98E18C) + 0x28);
    t2 = 0xC953DEC;
    t3 = 0x0;
    for (;;) {
        t3 = (t3 + 0x1);
        *(unsigned char *)((t2 + 0x0)) = (*(signed char *)((t1 + 0x0)));
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((t1 + 0x1)));
        *(unsigned char *)((t2 + 0x2)) = (*(signed char *)((t1 + 0x2)));
        *(unsigned char *)((t2 + 0x3)) = (*(signed char *)((t1 + 0x3)));
        *(unsigned int *)((t2 + 0x8)) = (*(int *)((t1 + 0x10)));
        *(unsigned char *)((t2 + 0x4)) = (*(signed char *)((t1 + 0x8)));
        *(unsigned char *)((t2 + 0x5)) = (*(signed char *)((t1 + 0x9)));
        *(unsigned char *)((t2 + 0x6)) = (*(signed char *)((t1 + 0xA)));
        t12 = *(signed char *)((t1 + 0xB));
        *(unsigned char *)((t2 + 0x7)) = t12;
        *(unsigned int *)((t2 + 0xC)) = (*(int *)((t1 + 0x14)));
        t2 = (t2 + 0x18);
        t1 = (t1 + 0x2C);
        if ((int)t3 >= (int)0x18) {
            break;
        }
    }
    return t12;
}
