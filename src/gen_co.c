/* Straight-line functions with calls and guards (batch gen_co): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0236ce(int);
int FUN_0c023738(int);
int FUN_0c0336d6(int, int, int);
int FUN_0c034134(int, float);
int FUN_0c0844dc(int, int, int, float);
int FUN_0c0c4684(int);
int FUN_0c0cae8e(int);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0dc5a0(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcbb0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
float nlLength(int, int);
int FUN_0c0de000(float);
int FUN_0c0df4c0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e262a(int);
int FUN_0c0e4b20(int);
int FUN_0c0e4c34(int);
int FUN_0c0e4e88(int);
int FUN_0c0e55f0(void);
int FUN_0c0e563c(int);
int FUN_0c0e5dc0(void);
int _quick_odd_mvn(void);
int FUN_0c213912(int, int, int, int, int, int, int, int, int);
int FUN_0c229f30(int, int, int);
int FUN_0c22ad80(int);
int FUN_0c22d03a(int, int, int);
int mwlSbAllocWork(int);
int FUN_0c232f64(void);
int FUN_0c23363e(int, int, int);
int FUN_0c23370e(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxt_stat_decend(int, int, int, int);
int adxt_stat_playend(void);
int adxt_stat_playing(int);
int adxt_stat_prep(int, int, int, int);
int copy_device(void);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdGetStatus(int);
int kmSetCheapShadowMode(void);
int kmSetHSyncCallback(int, int);
int kmSetVSyncCallback(int, int);
int kmiAddSysConfigFlag(int);
int kmiAllocSysConfig(int);
int kmiGetSysConfigFlag(void);
int kmiSetSysConfigFlag(int);
int kmiWriteRegister(int, int);
int memset(int, int, int);
int mpdrv_frame_recv_main(void);
int mpdrv_frame_recv_post(void);
int mpdrv_frame_recv_pre(void);
int mpdrv_get_gunmode(void);
extern int mwRnaErrCallFunc();
int thunk_FUN_0c22b866(int, int, int);
int trigger(void);
void FUN_0c0bd788(int a4, int a5, int a6, int a7);
int FUN_0c069fba(void);
int kmiDMAtoTARequest(int a4, int a5, int a6, int a7, int a8);
int FUN_0c22b2b6(int a4, int a5, int a6, int a7);
int FUN_0c061214(int a4, int a5);
int FUN_0c232f8a(int a4, int a5, int a6, int a7);
int FUN_0c073eb4(void);
int kmActivateFrameBuffer(int a4, int a5, int a6, int a7);
int kdRecvFrame(void);
int FUN_0c0a6450(void);
int FUN_0c21375c(int a4, int a5, int a6);
int FUN_0c0603d0(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7);
int FUN_0c0bd4ac(void);
int FUN_0c02dc30(int a4);
int syChainAddHandler(int a4, int a5, int a6, int a7);
int FUN_0c02bfa8(int a4);

void FUN_0c0bd788(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t12;
    int t27;
    float t34;
    int t38;
    int t53;
    int t58;
    float t64;
    int t68;
    int t83;
    int stk[15];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F2;
    float F3;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C0BD788:;
    *(unsigned int *)(((int)stk + 8)) = R5;
    t0 = *(int *)(((((R4 << 1) + R4) << 2) + 0xC2623A0));
    t2 = *(int *)((t0 + ((((unsigned int)(*(int *)(((((R4 << 1) + R4) << 2) + 0xC24FB54))) >> 2) - 1) << 2)));
    t3 = FUN_0c0e262a((((t2 << 1) + t2) << 2));
    *(unsigned int *)(((int)stk + 12)) = t3;
    t4 = FUN_0c0e262a((((t2 << 1) + t2) << 2));
    *(unsigned int *)(((int)stk + 20)) = t4;
    R0 = (t4);
    R10 = ((t0 + 0x18));
    R11 = (t4);
    R12 = (t3);
    R13 = (0x0);
    R14 = (t2);
    R9 = (0x0);
    goto L_C0BD92C;
    L_C0BD92C:;
    t12 = *(int *)((R10 + 0x0));
    R10 = ((R10 + 0x4));
    R4 = (t12);
    if ((t12 == 0)) goto L_C0BD936;
    goto L_C0BD932;
    L_C0BD932:;
    goto L_C0BD7E4;
    L_C0BD7E4:;
    if (((R4 & 0x80000000) == 0)) goto L_C0BD7F6;
    goto L_C0BD7EC;
    L_C0BD7EC:;
    R10 = (((R10 - 4) + 0x50));
    goto L_C0BD92C;
    L_C0BD7F6:;
    R0 = (0xC0BD844);
    R8 = (0x1);
    F15 = (9.99999997e-07f);
    if (((R4 & 0x10) == 0)) goto L_C0BD8AA;
    goto L_C0BD804;
    L_C0BD804:;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)((R10 + 0x0)));
    R14 = ((R10 + 0x4));
    goto L_C0BD80A;
    L_C0BD80A:;
    if ((((*(int *)((R14 + 0x0))) & R8) != 0)) goto L_C0BD848;
    goto L_C0BD810;
    L_C0BD810:;
    R14 = ((R14 + 0x8));
    goto L_C0BD89C;
    L_C0BD89C:;
    t27 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 16)) = (t27 - 1);
    if (((t27 - 1) != 0)) goto L_C0BD80A;
    goto L_C0BD8A6;
    L_C0BD8A6:;
    goto L_C0BD924;
    L_C0BD924:;
    R10 = (R14);
    goto L_C0BD92C;
    L_C0BD848:;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 12)));
    R10 = (R9);
    if (((int)R13 <= 0)) goto L_C0BD86A;
    goto L_C0BD852;
    L_C0BD852:;
    t34 = nlLength((*(int *)(((int)stk + 4))), R14);
    F0 = (t34);
    if ((F15 > t34)) goto L_C0BD86A;
    goto L_C0BD85E;
    L_C0BD85E:;
    t38 = (int)(R10 + 0x1) < (int)R13;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
    R10 = ((R10 + 0x1));
    if (t38) goto L_C0BD852;
    goto L_C0BD86A;
    L_C0BD86A:;
    if (((int)R10 < (int)R13)) goto L_C0BD89A;
    goto L_C0BD86E;
    L_C0BD86E:;
    *(float *)((R12 + 0x0)) = (*(float *)((R14 + 0x0)));
    *(float *)((R12 + 0x4)) = (*(float *)((R14 + 0x4)));
    *(float *)((R12 + 0x8)) = (*(float *)((R14 + 0x8)));
    *(float *)((R11 + 0x0)) = (*(float *)((R14 + 0xC)));
    *(float *)((R11 + 0x4)) = (*(float *)((R14 + 0x10)));
    *(float *)((R11 + 0x8)) = (*(float *)((R14 + 0x14)));
    R0 = (0x8);
    R11 = ((R11 + 0xC));
    R12 = ((R12 + 0xC));
    R13 = ((R13 + 0x1));
    goto L_C0BD89A;
    L_C0BD89A:;
    R14 = ((R14 + 0x20));
    goto L_C0BD89C;
    L_C0BD8AA:;
    if (((R4 & 0x8) == 0)) goto L_C0BD928;
    goto L_C0BD8B0;
    L_C0BD8B0:;
    t53 = *(int *)((R10 + 0x0));
    *(unsigned int *)(((int)stk + 16)) = ((t53 << 1) + t53);
    R14 = ((R10 + 0x4));
    goto L_C0BD8BC;
    L_C0BD8BC:;
    if ((((*(int *)((R14 + 0x0))) & R8) != 0)) goto L_C0BD8C6;
    goto L_C0BD8C2;
    L_C0BD8C2:;
    R14 = ((R14 + 0x8));
    goto L_C0BD91A;
    L_C0BD91A:;
    t58 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 16)) = (t58 - 1);
    if (((t58 - 1) != 0)) goto L_C0BD8BC;
    goto L_C0BD924;
    L_C0BD8C6:;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 12)));
    R10 = (R9);
    if (((int)R13 <= 0)) goto L_C0BD8E8;
    goto L_C0BD8D0;
    L_C0BD8D0:;
    t64 = nlLength((*(int *)(((int)stk + 4))), R14);
    F0 = (t64);
    if ((F15 > t64)) goto L_C0BD8E8;
    goto L_C0BD8DC;
    L_C0BD8DC:;
    t68 = (int)(R10 + 0x1) < (int)R13;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
    R10 = ((R10 + 0x1));
    if (t68) goto L_C0BD8D0;
    goto L_C0BD8E8;
    L_C0BD8E8:;
    if (((int)R10 < (int)R13)) goto L_C0BD918;
    goto L_C0BD8EC;
    L_C0BD8EC:;
    *(float *)((R12 + 0x0)) = (*(float *)((R14 + 0x0)));
    *(float *)((R12 + 0x4)) = (*(float *)((R14 + 0x4)));
    *(float *)((R12 + 0x8)) = (*(float *)((R14 + 0x8)));
    *(float *)((R11 + 0x0)) = (*(float *)((R14 + 0xC)));
    *(float *)((R11 + 0x4)) = (*(float *)((R14 + 0x10)));
    *(float *)((R11 + 0x8)) = (*(float *)((R14 + 0x14)));
    R0 = (0x8);
    R11 = ((R11 + 0xC));
    R12 = ((R12 + 0xC));
    R13 = ((R13 + 0x1));
    goto L_C0BD918;
    L_C0BD918:;
    R14 = ((R14 + 0x20));
    goto L_C0BD91A;
    L_C0BD928:;
    goto L_C0BD928;
    L_C0BD936:;
    t83 = *(int *)(((int)stk + 8));
    *(unsigned int *)((t83 + 0x0)) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)((t83 + 0x4)) = (*(int *)(((int)stk + 20)));
    *(unsigned int *)((t83 + 0x8)) = R13;
}

int FUN_0c069fba(void)
{
    int t0;
    int t3;
    int t5;
    int t8;
    float u11;
    int t17;
    float u19;
    int t21;
    int t22;
    float u24;
    int t26;
    int t27;
    int t30;
    float u32;
    int t40;
    int t44;
    int stk[15];

    t0 = *(int *)0xC23A258;
    if ((*(int *)0xC247C4C) == t0) {
    } else {
        *(unsigned int *)0xC247C4C = t0;
        t3 = 0x2;
        if ((*(int *)0xC23ED50) == 48) {
            t3 = 0x0;
        }
        t5 = *(int *)0xC247C50;
        *(unsigned int *)0xC247C50 = (t5 + 0x1);
        if ((int)(t5 + 0x1) >= (int)0x14) {
            *(unsigned int *)0xC247C50 = 0x0;
        }
        t8 = *(int *)0xC247C50;
        u11 = (1.0f - ((float)(t8 - 16) * 0.25f));
        if ((int)t8 < (int)0x10) {
            u11 = ((float)t8 * 0.0625f);
        }
        kmSetCheapShadowMode();
        *(unsigned int *)(((int)stk + 8)) = (((t3 << 2) + 0xC0FB0CC) + 0x4);
        t17 = *(int *)((((t3 << 2) + 0xC0FB0CC) + 0x0));
        *(unsigned int *)(((int)stk + 4)) = t17;
        u19 = (float)t17;
        u19 = u19 + u11 * (float)((*(int *)(((((t3 << 2) + 0xC0FB0CC) + 0x4) + 0x0))) - t17);
        FUN_0c0844dc(0xE000, (int)u19, 0x0, 1.0f);
        t21 = *(int *)(((int)stk + 8));
        t22 = *(int *)((((t3 << 2) + 0xC0FB0CC) + 0x0));
        *(unsigned int *)(((int)stk + 4)) = t22;
        u24 = (float)t22;
        u24 = u24 + u11 * (float)((*(int *)((t21 + 0x0))) - t22);
        FUN_0c0844dc(0xE000, (int)u24, 0x1, 1.0f);
        t26 = 0x0;
        t27 = (0x0 + t3);
        for (;;) {
            nlPushMatrix(0x0);
            FUN_0c0dcca0((0xC0FB04C + (((t27 << 1) + t27) << 2)));
            t30 = *(int *)(((((t27 << 2) << 1) + 0xC0FB0AC) + 0x0));
            *(unsigned int *)(((int)stk + 4)) = t30;
            u32 = (float)t30;
            u32 = u32 + u11 * (float)((*(int *)(((((t27 << 2) << 1) + 0xC0FB0AC) + 0x4))) - t30);
            nlRotateAY((int)u32);
            FUN_0c0dcca0((0xC0FB07C + (((t27 << 1) + t27) << 2)));
            FUN_0c0dcbb0((0xC0FB0DC + (((t27 << 1) + t27) << 2)));
            FUN_0c0df4c0(0x1);
            nlScale(1.0f, 1.0f, 0.099999994f);
            FUN_0c0de000(100.0f);
            FUN_0c0c4684(0x9E);
            t40 = nlPopMatrix(0x1);
            t26 = (t26 + 0x1);
            t27 = (t27 + 0x1);
            if ((int)t26 >= (int)0x2) {
                break;
            }
        }
        t44 = t40;
    }
    return t44;
}

int kmiDMAtoTARequest(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t15;
    int t19;
    int t3;
    int t7;
    int t29;
    int t33;
    int t48;
    int t24;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xE);
    if (a6 == 0) {
        _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
        t48 = 0x103;
    } else {
        t1 = *(int *)(((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC9522DC));
        t15 = 0x100;
        t19 = a6;
        if (((*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x18))) & 3) == 0) {
            t3 = a5;
            if ((0x1F & a5) != 0) {
                t3 = ((a5 + 0x1F) & 0xFFFFFFE0);
            }
            t7 = a6;
            if ((0x1F & a6) != 0) {
                t7 = ((a6 + 0x1F) & 0xFFFFFFE0);
            }
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x0)) = (*(int *)0xC9522E4);
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x4)) = t3;
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0xC)) = a4;
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x14)) = t7;
            *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x18)) = (a7 | 0x1);
            *(unsigned int *)((a8 + 0x0)) = (((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1));
            *(unsigned int *)((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC9522DC) + 0x0)) = (((*(int *)((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC9522DC) + 0x0))) + 0x1) & 0x7);
            *(unsigned int *)0xC9522E4 = ((*(int *)0xC9522E4) + 0x1);
            t15 = 0x0;
            t19 = t7;
        }
        if (t15 == 0x100) {
        } else {
            if ((((*(int *)((((((*(int *)0xC9522F4) << 8) + 0xC9520DC) + ((((*(int *)0xC9522F0) << 2) << 2) << 1)) + 0x18))) & 3) == 0) && (t24 = *(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x18)), (t24 & 0x3) == 1)) {
                *(unsigned int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x18)) = (((*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x18))) & 0xFFFFFFFC) | 0x2);
                *(unsigned int *)0xFFA00020 = (*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x4)));
                *(unsigned int *)0xFFA00024 = (((*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0xC))) + 0xF0000000) << 1);
                *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)t19 >> 2) >> 2) >> 1);
                t29 = 0x241;
                if (((*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x18))) & 4) == 0) {
                    t29 = 0x2C1;
                }
                t33 = t29;
                if (((*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x18))) & 16) != 0) {
                    t33 = (t29 | 0x1000);
                }
                *(unsigned int *)0xFFA0002C = t33;
                *(unsigned int *)0xA05F6800 = (*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0xC)));
                *(unsigned int *)0xA05F6804 = (*(int *)(((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 8) + 0xC9520DC) + (((t1 << 2) << 2) << 1)) + 0x14)));
                *(unsigned int *)0xA05F6808 = 0x1;
                *(unsigned int *)0xC9522F0 = t1;
                *(unsigned int *)0xC9522F4 = ((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1);
                *(unsigned int *)((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC9522E8) + 0x0)) = (((*(int *)((((((unsigned int)((unsigned int)(0x8 & a7) >> 2) >> 1) << 2) + 0xC9522E8) + 0x0))) + 0x1) & 0x7);
            }
        }
        _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
        t48 = t15;
    }
    return t48;
}

int FUN_0c22b2b6(int a4, int a5, int a6, int a7)
{
    int t0;
    int t7;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 == 3) {
        adxt_stat_playing(a4);
    } else {
        if (t0 == 1) {
            FUN_0c22ad80(a4);
        } else {
            t7 = *(signed char *)((a4 + 0x1));
            if (t7 == 2) {
                adxt_stat_prep(a4, a5, a6, a7);
            } else {
                if (t7 == 4) {
                    adxt_stat_decend(a4, a5, a6, a7);
                } else {
                    if ((*(signed char *)((a4 + 0x1))) == 5) {
                        adxt_stat_playend();
                    }
                }
            }
        }
    }
    return ((int (*)(int))(0xC22B13A))(a4);
}

int FUN_0c061214(int a4, int a5)
{
    int t1;
    int t10;
    int t12;
    int t14;
    int stk[18];

    t1 = FUN_0c0e19aa(0xC060F76, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    if ((int)(*(short *)((a4 + 0xE8))) < (int)0x4) {
        t10 = 0x0;
        if ((*(signed char *)((a5 + 0x4))) != 0) {
            t10 = (*(int *)((a4 + 0x1EC)));
        }
        t14 = t10;
    } else {
        t12 = *(int *)((a4 + 0xBC));
        t14 = (((int)t12 >= 0) ? (0x1 << (t12 & 31)) : ((-(int)t12 & 31) ? ((int)0x1 >> (-(int)t12 & 31)) : ((int)0x1 >> 31)));
    }
    *(unsigned int *)((t1 + 0x1EC)) = t14;
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x8)));
    *(volatile int *)((a4 + 0xBC));
    *(volatile int *)((a4 + 0x1E8));
    _quick_odd_mvn();
    _quick_odd_mvn();
    *(unsigned int *)((t1 + 0x220)) = 0x4F;
    *(float *)((t1 + 0x24C)) = 40.0f;
    *(float *)((t1 + 0x250)) = 0.649999976f;
    *(float *)((t1 + 0x254)) = 1.02499998f;
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((*(int *)((a4 + 0x3E4))) + 0x100));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = (-(*(float *)((t1 + 0x250))));
    *(float *)(((int)stk + 24)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)((((((int)stk + 4) + 0x18) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((((int)stk + 4) + 0x18) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    *(float *)((t1 + 0x48)) = ((*(float *)(((((int)stk + 4) + 0x18) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x24) + 0x0))));
    *(float *)((t1 + 0x4C)) = ((*(float *)(((((int)stk + 4) + 0x18) + 0x4))) - (*(float *)(((((int)stk + 4) + 0x24) + 0x4))));
    *(float *)((t1 + 0x50)) = ((*(float *)(((((int)stk + 4) + 0x18) + 0x8))) - (*(float *)(((((int)stk + 4) + 0x24) + 0x8))));
    return 0x50;
}

int FUN_0c232f8a(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t6;
    int t7;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t25;
    int t26;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t36;
    int t37;
    int t40;
    int t54;
    int stk[10];

    if (((int)a4 >= (int)0x1) && ((int)a4 <= (int)0x2)) {
        t0 = FUN_0c232f64();
        if (t0 == 0) {
            t1 = ((int (*)(int))(mwRnaErrCallFunc))(0xC23862C);
        } else {
            t2 = 0x0;
            for (;;) {
                if ((int)t2 >= (int)a4) {
                    t2 = 0x0;
                    for (;;) {
                        if ((int)t2 >= (int)a4) {
                            *(unsigned short *)((t0 + 0x2)) = (FUN_0c0e4b20(a4));
                            t4 = *(short *)((t0 + 0x2));
                            if (((int)t4 >= 0) && ((int)t4 <= (int)0x7)) {
                                t6 = mwlSbAllocWork((*(short *)((t0 + 0x2))));
                                *(unsigned int *)((t0 + 0x10)) = t6;
                                if (t6 == 0) {
                                    t7 = ((int (*)(int))(mwRnaErrCallFunc))(0xC238704);
                                    FUN_0c0e4c34((*(short *)((t0 + 0x2))));
                                    return 0x0;
                                }
                                FUN_0c0e4e88((*(int *)(((*(int *)((t0 + 0x10))) + 0x4))));
                                *(unsigned char *)((t0 + 0x4C)) = 0x0;
                                *(unsigned char *)((t0 + 0x1)) = 0x0;
                                *(unsigned int *)((t0 + 0xC)) = 0x0;
                                *(unsigned int *)((t0 + 0x8)) = a4;
                                *(unsigned int *)((t0 + 0x4)) = a4;
                                FUN_0c23370e(t0, (*(int *)((t0 + 0x8))));
                                if (a4 == 2) {
                                    FUN_0c23363e(t0, 0x0, 0xFFFFFFF1);
                                    FUN_0c23363e(t0, 0x1, 0xF);
                                    *(unsigned int *)((t0 + 0x3C)) = 0xFFFFFFFF;
                                    *(unsigned int *)((t0 + 0x40)) = 0x0;
                                    *(unsigned short *)((t0 + 0x44)) = 0x0;
                                    *(unsigned short *)((t0 + 0x46)) = 0x0;
                                    *(unsigned short *)((t0 + 0x48)) = 0x0;
                                    *(unsigned short *)((t0 + 0x4A)) = 0x0;
                                    *(unsigned char *)((t0 + 0x4D)) = 0xFFFFFFFF;
                                    *(unsigned short *)((t0 + 0x4E)) = 0xFFFFFFFF;
                                    *(unsigned char *)((t0 + 0x0)) = 0x1;
                                    return t0;
                                }
                                FUN_0c23363e(t0, 0x0, 0x0);
                                *(unsigned int *)((t0 + 0x3C)) = 0xFFFFFFFF;
                                *(unsigned int *)((t0 + 0x40)) = 0x0;
                                *(unsigned short *)((t0 + 0x44)) = 0x0;
                                *(unsigned short *)((t0 + 0x46)) = 0x0;
                                *(unsigned short *)((t0 + 0x48)) = 0x0;
                                *(unsigned short *)((t0 + 0x4A)) = 0x0;
                                *(unsigned char *)((t0 + 0x4D)) = 0xFFFFFFFF;
                                *(unsigned short *)((t0 + 0x4E)) = 0xFFFFFFFF;
                                *(unsigned char *)((t0 + 0x0)) = 0x1;
                                return t0;
                            }
                            t18 = ((int (*)(int))(mwRnaErrCallFunc))(0xC2386C8);
                            return 0x0;
                        }
                        t19 = FUN_0c0e55f0();
                        if (t19 == 0) {
                            break;
                        }
                        t20 = ((t2 << 2) + (t0 + 0x28));
                        t2 = (t2 + 0x1);
                        *(unsigned int *)((t20 + 0x0)) = t19;
                    }
                    t21 = ((int (*)(int))(mwRnaErrCallFunc))(0xC238660);
                    *(unsigned int *)(((int)stk + 4)) = 0x0;
                    if ((int)t2 > 0) {
                        t22 = (t0 + 0x20);
                        t23 = (t0 + 0x28);
                        for (;;) {
                            t25 = FUN_0c0e563c((*(int *)((t23 + 0x0))));
                            if ((int)t25 < 0) {
                                t26 = ((int (*)(int))(mwRnaErrCallFunc))(0xC238694);
                            }
                            *(unsigned int *)((t22 + 0x0)) = 0x0;
                            t22 = (t22 + 0x4);
                            t29 = *(int *)(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 4)) = (t29 + 0x1);
                            t23 = (t23 + 0x4);
                            if ((int)(t29 + 0x1) >= (int)t2) {
                                break;
                            }
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t30 = FUN_0c0e55f0();
                if (t30 == 0) {
                    break;
                }
                t31 = ((t2 << 2) + (t0 + 0x20));
                t2 = (t2 + 0x1);
                *(unsigned int *)((t31 + 0x0)) = t30;
            }
            t32 = ((int (*)(int))(mwRnaErrCallFunc))(0xC238660);
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            if ((int)t2 > 0) {
                t33 = (t0 + 0x20);
                t34 = (t0 + 0x20);
                for (;;) {
                    t36 = FUN_0c0e563c((*(int *)((t33 + 0x0))));
                    if ((int)t36 < 0) {
                        t37 = ((int (*)(int))(mwRnaErrCallFunc))(0xC238694);
                    }
                    *(unsigned int *)((t34 + 0x0)) = 0x0;
                    t34 = (t34 + 0x4);
                    t40 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t40 + 0x1);
                    t33 = (t33 + 0x4);
                    if ((int)(t40 + 0x1) >= (int)t2) {
                        break;
                    }
                }
            }
        }
    } else {
        t54 = ((int (*)(int, int, int, int))(mwRnaErrCallFunc))(0xC2385FC, a5, a6, a7);
    }
    return 0x0;
}

int FUN_0c073eb4(void)
{
    int t1;
    int t3;
    int t5;
    int t7;
    int t9;

    t1 = FUN_0c0e19aa(0xC072780, 0x5E78, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    t3 = 0x259;
    for (;;) {
        FUN_0c0cbafc(t3, 0x2, 0xFC006000, 0x84002000);
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x26D) {
            break;
        }
    }
    t5 = 0x410;
    for (;;) {
        FUN_0c0cbafc(t5, 0x2, 0x6000, 0x2000);
        t5 = (t5 + 0x1);
        if ((int)t5 >= (int)0x418) {
            break;
        }
    }
    t7 = 0x1B8;
    for (;;) {
        FUN_0c0cbafc(t7, 0x2, 0x6000, 0x2000);
        t7 = (t7 + 0x1);
        if ((int)t7 >= (int)0x1D6) {
            break;
        }
    }
    t9 = 0x281;
    for (;;) {
        FUN_0c0cbafc(t9, 0x2, 0xFC006000, 0x84002000);
        t9 = (t9 + 0x1);
        if ((int)t9 >= (int)0x291) {
            break;
        }
    }
    FUN_0c0cbafc(0x3E2, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x3DD, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x3DF, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x3E3, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x3E0, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x3E1, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x3DC, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x3DE, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x3E4, 0x2, 0xFC006000, 0x84002000);
    FUN_0c0cbafc(0x294, 0x2, 0xFC006000, 0x84002000);
    FUN_0c0cbafc(0x293, 0x2, 0xFC006000, 0x84002000);
    FUN_0c0cae8e(0x3E2);
    FUN_0c0cae8e(0x3DD);
    FUN_0c0cae8e(0x3E4);
    FUN_0c0cae8e(0x3E0);
    FUN_0c0cae8e(0x3E1);
    FUN_0c0cae8e(0x3E3);
    FUN_0c0cae8e(0x3DF);
    return (FUN_0c0cae8e(0x3DC));
}

int kmActivateFrameBuffer(int a4, int a5, int a6, int a7)
{
    int t62;
    int t0;
    int t5;
    int t11;
    int t49;
    int t43;
    int t55;
    int t40;

    t62 = 0xE;
    if ((a4 != 0) && (a5 != 0)) {
        *(unsigned int *)0xC952928 = a4;
        *(unsigned int *)0xC95292C = a5;
        *(unsigned int *)0xC952930 = a7;
        *(unsigned int *)0xC952904 = a6;
        *(unsigned int *)0xC952330 = a6;
        t0 = kmiGetSysConfigFlag();
        if (t0 != 0x80000000) {
            t5 = kmiAddSysConfigFlag(0x800);
            t11 = 0x0;
            if (t5 == 0xB00) {
                kmiSetSysConfigFlag(0x80000000);
                t11 = (kmiAllocSysConfig((*(int *)0xC952940)));
            }
            t55 = t11;
        } else {
            t49 = 0xF;
            if ((*(int *)((a4 + 0x18))) != (*(int *)((a5 + 0x18)))) {
            } else {
                t43 = 0x10;
                if ((*(int *)((a4 + 0x14))) != (*(int *)((a5 + 0x14)))) {
                } else {
                    *(unsigned int *)0xC952630 = (*(int *)((a4 + 0x1C)));
                    *(unsigned int *)0xC952638 = 0x0;
                    *(unsigned int *)0xC952634 = (*(int *)((a5 + 0x1C)));
                    *(unsigned int *)0xC95263C = 0x0;
                    kmiWriteRegister(0x50, (*(int *)0xC9525CC));
                    kmiWriteRegister(0x54, (*(int *)0xC9525CC));
                    kmiWriteRegister(0x60, (*(int *)0xC952630));
                    kmiWriteRegister(0x64, (*(int *)0xC952634));
                    *(unsigned int *)0xC9525CC = (*(int *)0xC952630);
                    *(unsigned int *)0xC9525D0 = (*(int *)0xC952634);
                    if (a6 == 1) {
                        *(unsigned int *)0xC952514 = 0x0;
                        *(unsigned int *)0xC952518 = 0x0;
                        kmiWriteRegister(0x50, (*(int *)0xC9525CC));
                        t40 = (*(int *)0xC9525D0);
                    } else {
                        kmiWriteRegister(0x50, (*(int *)0xC9525CC));
                        t40 = (*(int *)0xC9525CC);
                    }
                    kmiWriteRegister(0x54, t40);
                    *(unsigned int *)0xC9525A4 = 0x1;
                    *(unsigned int *)0xC9524E4 = a7;
                    t43 = 0x0;
                }
                t49 = t43;
            }
            t55 = t49;
        }
        t62 = t55;
    }
    return t62;
}

int kdRecvFrame(void)
{
    int t0;
    int t1;
    int t3;
    int t5;
    int t10;
    int t16;
    int t41;
    int t18;
    int t19;
    int t29;
    int t36;
    int t37;
    int t38;
    int t34;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t58;
    int t62;
    int t42;
    int t44;
    int t46;
    int t26;
    int t22;
    int t30;
    int t40;
    int t69;
    int t70;
    int t72;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t1 = mpdrv_frame_recv_pre();
    if (t1 == -2) {
        *(unsigned int *)(((*(int *)0xC98E18C) + 0x10E8)) = 0x1;
    } else {
        if ((int)t1 < 0) {
            t3 = *(int *)0xC954064;
            if (t3 != 0) {
                t5 = ((int (*)(int, int, int, int))(t3))(0x2, 0xFFFFFFF8, (*(int *)0xC954034), t1);
            }
        } else {
            mpdrv_frame_recv_main();
            t10 = *(int *)0xC9542B0;
            *(unsigned short *)(((0xC95405C + (t10 << 1)) + 0x0)) = (((*(int *)0xA05F810C) & 0x3FF) + ((unsigned short)(*(short *)(((0xC954060 + (t10 << 1)) + 0x0))) * (unsigned short)((*(int *)0xA05F80DC) & 0x3FF)));
            copy_device();
            mpdrv_frame_recv_post();
            t16 = mpdrv_get_gunmode();
            t41 = t16;
            if (t16 != 0) {
                t18 = *(int *)0xC954068;
                if (t18 != 0) {
                    t19 = ((int (*)(void))(t18))();
                    if (t19 != 0) {
                        *(unsigned int *)0xC9542BC = (trigger());
                        t22 = 0xC9542BC;
                    }
                    t26 = t22;
                } else {
                    *(unsigned int *)0xC9542BC = (trigger());
                    t26 = 0xC9542BC;
                }
                t29 = *(int *)(((*(int *)0xC98E18C) + 0xFBC));
                t36 = 0xFBC;
                t37 = t26;
                t38 = t29;
                if ((t29 != 0) && (t30 = *(int *)0xC9542BC, t30 != 0)) {
                    *(unsigned int *)0xC9542B4 = (*(int *)0xA05F8040);
                    *(unsigned int *)0xA05F8040 = (*(int *)((0xFBC + (*(int *)0xC98E18C))));
                    t34 = *(int *)0xA05F80E8;
                    *(unsigned int *)0xA05F80E8 = (t34 | 0x8);
                    *(unsigned int *)0xC9542B8 = 0x1;
                    *(unsigned int *)0xC9542D8 = ((*(int *)0xC9542D8) + 0x1);
                    t36 = (t34 | 0x8);
                    t37 = 0xC9542B8;
                    t38 = 0xC9542B4;
                    t40 = 0xC9542D8;
                }
                t41 = t36;
                t42 = t37;
                t44 = t38;
                t46 = t40;
            }
            t47 = t41;
            t48 = t42;
            t49 = t44;
            t50 = t46;
            t51 = 0x0;
            t52 = 0xC95406C;
            for (;;) {
                if ((int)t51 >= (int)0x30) {
                    break;
                }
                if ((*(int *)((t52 + 0x8))) != 0) {
                    *(volatile int *)((t52 + 0x4));
                    t50 = (*(int *)((t52 + 0x0)));
                    t47 = (kdGetStatus(t50));
                    if (t47 != 0) {
                        t58 = *(int *)((t52 + 0x8));
                        *(unsigned int *)((t52 + 0x8)) = 0x0;
                        t50 = (*(int *)((t52 + 0x0)));
                        t47 = (kdGetDeviceInfo(t50));
                        t62 = t47;
                        t50 = (*(int *)((t52 + 0x0)));
                        t47 = (kdGetDevice(t50));
                        t48 = (t58);
                        t50 = (*(int *)((t52 + 0x0)));
                        t47 = (((int (*)(int, int, int, int))(t48))(t50, (*(int *)((t52 + 0x4))), t47, t62));
                    }
                } else {
                    t69 = t48;
                    t70 = t49;
                    t72 = t50;
                }
                t48 = t69;
                t52 = (t52 + 0xC);
                t49 = t70;
                t50 = t72;
                t51 = (t51 + 0x1);
            }
            *(unsigned int *)(((*(int *)0xC98E18C) + 0x10E8)) = 0x0;
            *(unsigned int *)0xC9542B0 = ((*(int *)0xC9542B0) ^ 0x1);
            *(unsigned int *)0xC954030 = ((*(int *)0xC954030) + 0x1);
        }
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t1;
}

int FUN_0c0a6450(void)
{
    int t0;
    int t7;
    int t22;
    int t23;
    int t30;
    int t39;
    int t41;
    int t47;
    int t54;
    int t59;
    int t71;
    int t75;
    int t81;
    int t85;
    int stk[11];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    L_C0A6450:;
    t0 = *(int *)0xC23A180;
    R0 = (t0);
    R12 = (0xC24FA14);
    R14 = (0x1);
    R9 = (0x0);
    if ((t0 != 2)) goto L_C0A6494;
    goto L_C0A646C;
    L_C0A646C:;
    t7 = *(short *)(((*(int *)0xC23ECFC) + 0x0));
    R0 = (t7);
    R4 = (t7);
    if ((t7 == 2)) goto L_C0A6482;
    goto L_C0A647A;
    L_C0A647A:;
    R0 = (R4);
    if ((R4 != 3)) goto L_C0A6494;
    goto L_C0A6482;
    L_C0A6482:;
    if ((((*(int *)0xC23A1A8) & 0x101) != 0)) goto L_C0A6494;
    goto L_C0A648C;
    L_C0A648C:;
    if (((*(int *)((R12 + 0x0))) != 0)) goto L_C0A6494;
    goto L_C0A6492;
    L_C0A6492:;
    *(unsigned int *)((R12 + 0x0)) = R14;
    goto L_C0A6494;
    L_C0A6494:;
    *(unsigned int *)(((int)stk + 12)) = 0xC23EDE0;
    *(unsigned int *)(((int)stk + 16)) = 0xC23EDE4;
    R5 = (R9);
    goto L_C0A65E0;
    L_C0A65E0:;
    R13 = (0x2);
    R6 = ((*(int *)0xC23A1A8));
    if (((int)R5 >= (int)0x2)) goto L_C0A65EE;
    goto L_C0A65EA;
    L_C0A65EA:;
    goto L_C0A64A2;
    L_C0A64A2:;
    t22 = *(int *)0xC23A198;
    *(unsigned int *)(((int)stk + 8)) = 0xC247030;
    *(unsigned int *)(((int)stk + 4)) = 0xC247034;
    t23 = *(int *)(((((R5 << 2) << 2) + 0xC2497C0) + 0x0));
    R0 = (t23);
    R10 = ((((R5 << 2) << 2) + 0xC2497C0));
    R11 = (t22);
    R4 = (0xC23A198);
    R7 = (0x100);
    if ((t23 != 1)) goto L_C0A657A;
    goto L_C0A64C6;
    L_C0A64C6:;
    t30 = *(short *)((R10 + 0x8));
    R0 = ((unsigned short)t30);
    if ((((unsigned short)t30 & 0x8) != 0)) goto L_C0A64D4;
    goto L_C0A64D0;
    L_C0A64D0:;
    goto L_C0A65DE;
    L_C0A65DE:;
    R5 = ((R5 + 0x1));
    goto L_C0A65E0;
    L_C0A64D4:;
    R0 = ((*(short *)((R10 + 0x4))));
    if (((*(int *)((0xC24990C + (R5 << 2)))) != 4)) goto L_C0A64E8;
    goto L_C0A64E4;
    L_C0A64E4:;
    R1 = (0xE);
    goto L_C0A64EA;
    L_C0A64EA:;
    t39 = ((unsigned short)R0 & R1) != R1;
    R0 = (((unsigned short)R0 & R1));
    if (t39) goto L_C0A6534;
    goto L_C0A64F2;
    L_C0A64F2:;
    t41 = *(int *)0xC23A180;
    R0 = (t41);
    R6 = (0xC23A260);
    if ((t41 != 1)) goto L_C0A6530;
    goto L_C0A64FC;
    L_C0A64FC:;
    *(unsigned int *)((R6 + 0x0)) = R13;
    goto L_C0A654A;
    L_C0A654A:;
    *(unsigned int *)((R4 + 0x0)) = 0xFFFFFFFF;
    goto L_C0A65DE;
    L_C0A6530:;
    *(unsigned int *)((R6 + 0x0)) = R14;
    goto L_C0A654A;
    L_C0A6534:;
    if (((int)R11 < 0)) goto L_C0A6550;
    goto L_C0A6538;
    L_C0A6538:;
    if (((int)R11 >= (int)0x10)) goto L_C0A6550;
    goto L_C0A653E;
    L_C0A653E:;
    t47 = *(int *)((R4 + 0x0));
    *(unsigned int *)((R4 + 0x0)) = (t47 & R14);
    if (((t47 & R14) != R5)) goto L_C0A65DE;
    goto L_C0A654A;
    L_C0A6550:;
    if (((int)(*(int *)((R12 + 0x0))) <= 0)) goto L_C0A65DE;
    goto L_C0A6556;
    L_C0A6556:;
    if ((R5 != 0)) goto L_C0A656A;
    goto L_C0A655A;
    L_C0A655A:;
    if (((R6 & R7) != 0)) goto L_C0A6566;
    goto L_C0A655E;
    L_C0A655E:;
    t54 = *(int *)(((*(int *)(((int)stk + 8))) + 0x0));
    R0 = (t54);
    if ((t54 != 4)) goto L_C0A65DE;
    goto L_C0A6566;
    L_C0A6566:;
    *(unsigned int *)((R4 + 0x0)) = R9;
    goto L_C0A65DE;
    L_C0A656A:;
    if (((R6 & R7) != 0)) goto L_C0A6576;
    goto L_C0A656E;
    L_C0A656E:;
    t59 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
    R0 = (t59);
    if ((t59 != 4)) goto L_C0A65DE;
    goto L_C0A6576;
    L_C0A6576:;
    *(unsigned int *)((R4 + 0x0)) = R14;
    goto L_C0A65DE;
    L_C0A64E8:;
    R1 = (0x60E);
    goto L_C0A64EA;
    L_C0A657A:;
    if (((int)R11 >= 0)) goto L_C0A65DE;
    goto L_C0A657E;
    L_C0A657E:;
    if (((int)(*(int *)((R12 + 0x0))) <= 0)) goto L_C0A65DE;
    goto L_C0A6584;
    L_C0A6584:;
    if (((*(int *)0xC23A260) != 0)) goto L_C0A65DE;
    goto L_C0A658C;
    L_C0A658C:;
    if ((R5 != 0)) goto L_C0A65B2;
    goto L_C0A6590;
    L_C0A6590:;
    if (((R7 & R6) != 0)) goto L_C0A65A8;
    goto L_C0A6594;
    L_C0A6594:;
    t71 = *(int *)(((*(int *)(((int)stk + 12))) + 0x0));
    R0 = (t71);
    if ((t71 != 5)) goto L_C0A65DE;
    goto L_C0A659C;
    L_C0A659C:;
    t75 = *(int *)(((*(int *)(((int)stk + 8))) + 0x0));
    R0 = (t75);
    if ((t75 == 4)) goto L_C0A65AE;
    goto L_C0A65A4;
    L_C0A65A4:;
    goto L_C0A65DE;
    L_C0A65AE:;
    *(unsigned int *)((R4 + 0x0)) = R13;
    goto L_C0A65DE;
    L_C0A65A8:;
    if (((R6 & 0x20000) == 0)) goto L_C0A65DE;
    goto L_C0A65AE;
    L_C0A65B2:;
    if (((R7 & R6) != 0)) goto L_C0A65D4;
    goto L_C0A65B6;
    L_C0A65B6:;
    t81 = *(int *)(((*(int *)(((int)stk + 16))) + 0x0));
    R0 = (t81);
    if ((t81 != 5)) goto L_C0A65DE;
    goto L_C0A65BE;
    L_C0A65BE:;
    t85 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
    R0 = (t85);
    if ((t85 == 4)) goto L_C0A65DA;
    goto L_C0A65C6;
    L_C0A65C6:;
    goto L_C0A65DE;
    L_C0A65DA:;
    *(unsigned int *)((R4 + 0x0)) = 0x3;
    goto L_C0A65DE;
    L_C0A65D4:;
    if (((R6 & 0x40000) == 0)) goto L_C0A65DE;
    goto L_C0A65DA;
    L_C0A65EE:;
    if (((R6 & 0x101) != 0)) goto L_C0A65F6;
    goto L_C0A65F4;
    L_C0A65F4:;
    *(unsigned int *)((R12 + 0x0)) = R9;
    goto L_C0A65F6;
    L_C0A65F6:;
    return R0;
}

int FUN_0c21375c(int a4, int a5, int a6)
{
    int t9;
    int t17;
    int t20;
    int t23;
    int t24;
    int t30;
    int t33;
    int t35;
    int t39;
    int t49;
    int stk[11];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F2;
    float F3;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_C21375C:;
    *(unsigned int *)(((int)stk + 8)) = (R6 - (((R5 + 0x1F) & 0xFFFFFFE0) - R5));
    R10 = (0x74);
    R11 = (((R5 + 0x1F) & 0xFFFFFFE0));
    R12 = (R4);
    R13 = (0x0);
    R4 = (0x0);
    R5 = (0xC239418);
    R6 = (0x8);
    goto L_C21378A;
    L_C21378A:;
    if (((*(signed char *)((((R4 * R10) + R5) + 0x0))) == 0)) goto L_C21379C;
    goto L_C213796;
    L_C213796:;
    t9 = (int)(R4 + 0x1) < (int)R6;
    R4 = ((R4 + 0x1));
    if (t9) goto L_C21378A;
    goto L_C21379C;
    L_C21379C:;
    if ((R4 == 8)) goto L_C21386E;
    goto L_C2137A2;
    L_C2137A2:;
    memset(((R4 * R10) + R5), 0x0, 0x74);
    *(unsigned char *)((((R4 * R10) + R5) + 0x3)) = R12;
    *(unsigned int *)((((R4 * R10) + R5) + 0x20)) = (((((((R12 << 8) + R12) << 2) << 2) << 1) << 1) + R11);
    *(unsigned int *)((((R4 * R10) + R5) + 0x24)) = (((((unsigned int)((unsigned int)((unsigned int)(((*(int *)(((int)stk + 8))) - ((((((R12 << 8) + R12) << 2) << 2) << 1) << 1)) - 36) >> 8) >> 2) >> 1) << 8) << 2) << 1);
    *(unsigned int *)((((R4 * R10) + R5) + 0x28)) = 0x24;
    *(unsigned int *)((((R4 * R10) + R5) + 0x2C)) = R11;
    *(unsigned int *)((((R4 * R10) + R5) + 0x30)) = 0x2000;
    *(unsigned int *)((((R4 * R10) + R5) + 0x34)) = 0x2020;
    t17 = FUN_0c22d03a((*(int *)((((R4 * R10) + R5) + 0x20))), (*(int *)((((R4 * R10) + R5) + 0x24))), (*(int *)((((R4 * R10) + R5) + 0x28))));
    *(unsigned int *)((((R4 * R10) + R5) + 0x10)) = t17;
    *(unsigned int *)((((R4 * R10) + R5) + 0x14)) = t17;
    t20 = ((R4 * R10) + R5);
    R10 = (0xC22D03A);
    R14 = t20;
    if ((t17 == 0)) goto L_C21386A;
    goto L_C213802;
    L_C213802:;
    R11 = (R13);
    if (((int)R12 <= 0)) goto L_C213848;
    goto L_C213808;
    L_C213808:;
    *(unsigned int *)(((int)stk + 8)) = (R11 << 2);
    t23 = *(int *)((R14 + 0x34));
    t24 = *(int *)((R14 + 0x30));
    *(unsigned int *)((((R11 << 2) + (R14 + 0x18)) + 0x0)) = (FUN_0c22d03a((((t23 * R11) << 1) + (*(int *)((R14 + 0x2C)))), (t24 << 1), ((t23 - t24) << 1)));
    if (((*(int *)((((R14 + 0x18) + (*(int *)(((int)stk + 8)))) + 0x0))) == 0)) goto L_C21386A;
    goto L_C213842;
    L_C213842:;
    t30 = (int)(R11 + 0x1) < (int)R12;
    R11 = ((R11 + 0x1));
    if (t30) goto L_C213808;
    goto L_C213848;
    L_C213848:;
    t33 = FUN_0c229f30((*(int *)((R14 + 0x14))), R12, (R14 + 0x18));
    *(unsigned int *)((R14 + 0x4)) = t33;
    if ((t33 == 0)) goto L_C21386A;
    goto L_C21385A;
    L_C21385A:;
    t35 = thunk_FUN_0c22b866((R14 + 0x18), R12, R6);
    *(unsigned int *)((R14 + 0xC)) = t35;
    if ((t35 != 0)) goto L_C21388C;
    goto L_C21386A;
    L_C21386A:;
    FUN_0c213912(R14, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16));
    goto L_C21386E;
    L_C21386E:;
    R0 = (0x0);
    goto L_C2138FE;
    L_C2138FE:;
    return R0;
    L_C21388C:;
    *(unsigned int *)((R14 + 0x38)) = 0x3C;
    t39 = *(int *)((R14 + 0x24));
    R2 = (t39);
    if (((int)t39 >= 0)) goto L_C21389A;
    goto L_C213896;
    L_C213896:;
    R2 = ((R2 + 0x7FF));
    goto L_C21389A;
    L_C21389A:;
    *(unsigned short *)((R14 + 0x3C)) = ((int)R2 >> 11);
    *(unsigned short *)((R14 + 0x3E)) = (int)((float)(*(short *)((R14 + 0x3C))) * (*(float *)0xC2139C0));
    *(unsigned short *)((R14 + 0x40)) = R13;
    R4 = ((R14 + 0x42));
    R5 = (R13);
    if (((int)R12 <= 0)) goto L_C2138D0;
    goto L_C2138C4;
    L_C2138C4:;
    R6 = (0xFFFFFF80);
    goto L_C2138C6;
    L_C2138C6:;
    *(unsigned short *)((R4 + 0x0)) = R6;
    t49 = (int)(R5 + 0x1) < (int)R12;
    R4 = ((R4 + 0x2));
    R5 = ((R5 + 0x1));
    if (t49) goto L_C2138C6;
    goto L_C2138D0;
    L_C2138D0:;
    *(unsigned char *)((R14 + 0x6C)) = 0x1;
    *(unsigned int *)((R14 + 0x54)) = R13;
    *(unsigned int *)((R14 + 0x58)) = R13;
    *(unsigned int *)((R14 + 0x5C)) = R13;
    *(unsigned short *)((R14 + 0x60)) = R13;
    *(unsigned int *)((R14 + 0x64)) = R13;
    *(unsigned short *)((R14 + 0x68)) = R13;
    *(unsigned short *)((R14 + 0x6A)) = R13;
    *(unsigned char *)((R14 + 0x6D)) = 0x1;
    *(unsigned char *)((R14 + 0x72)) = R13;
    *(unsigned char *)((R14 + 0x0)) = 0x1;
    R0 = (R14);
    goto L_C2138FE;
}

int FUN_0c0603d0(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7)
{
    int t1;
    int t10;
    int t12;
    int t23;
    int t14;

    t1 = FUN_0c0e19aa(0xC06078C, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    if ((int)(*(short *)((a4 + 0xE8))) < (int)0x4) {
        t10 = 0x0;
        if ((*(signed char *)((a5 + 0x4))) != 0) {
            t10 = (*(int *)((a4 + 0x1EC)));
        }
        t14 = t10;
    } else {
        t12 = *(int *)((a4 + 0xBC));
        t14 = (((int)t12 >= 0) ? (0x1 << (t12 & 31)) : ((-(int)t12 & 31) ? ((int)0x1 >> (-(int)t12 & 31)) : ((int)0x1 >> 31)));
    }
    *(unsigned int *)((t1 + 0x1EC)) = t14;
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    t23 = *(short *)((a5 + 0x8));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = (((unsigned short)t23 << 1) + (unsigned short)t23);
    *(volatile int *)((a4 + 0xBC));
    *(volatile int *)((t1 + 0x1E8));
    _quick_odd_mvn();
    _quick_odd_mvn();
    *(unsigned int *)((t1 + 0x220)) = 0x291;
    *(unsigned int *)((t1 + 0x244)) = 0x0;
    *(float *)((t1 + 0x24C)) = f5;
    *(float *)((t1 + 0x250)) = f6;
    *(float *)((t1 + 0x254)) = f7;
    *(unsigned int *)((t1 + 0x248)) = a8;
    if ((int)a8 > (int)0x8) {
        *(unsigned int *)((t1 + 0x248)) = 0x8;
    }
    *(unsigned short *)((t1 + 0x6C)) = a6;
    *(unsigned short *)((t1 + 0x6E)) = (a7 + (*(short *)((a4 + 0x6E))));
    *(unsigned short *)((t1 + 0x70)) = 0x0;
    FUN_0c0dc5a0();
    nlRotateAY((*(short *)((t1 + 0x6E))));
    nlRotateAX((*(short *)((t1 + 0x6C))));
    nlRotateAZ((*(short *)((t1 + 0x70))));
    FUN_0c0dcc70(0.0f, 0.0f, (-f4));
    FUN_0c0db840((t1 + 0x48));
    nlPopMatrix(0x1);
    FUN_0c0cbafc(0x291, 0x2, 0xFC007000, 0x84002000);
    return FUN_0c0cc3f8(0x432A9);
}

int FUN_0c0bd4ac(void)
{
    int t3;
    int t4;
    int t5;
    int t0;
    int t1;
    int t2;

    t3 = 0xC1527B4;
    t4 = 0xC1527B4;
    t5 = 0xC1527B4;
    for (;;) {
        if ((*(int *)(((t3 + 0x4) + 0x0))) == 0xC15233C) {
            t1 = 0xC15237C;
            *(unsigned int *)(((t3 + 0x4) + 0x0)) = t1;
        } else {
            t2 = 0xC15234C;
            if ((*(int *)(((t3 + 0x4) + 0x0))) == t2) {
                t0 = 0xC15238C;
                *(unsigned int *)(((t3 + 0x4) + 0x0)) = t0;
            } else {
                t1 = 0xC15235C;
                if ((*(int *)(((t3 + 0x4) + 0x0))) == t1) {
                    *(unsigned int *)(((t3 + 0x4) + 0x0)) = 0xC15239C;
                } else {
                    t0 = 0xC15236C;
                    if ((*(int *)(((t3 + 0x4) + 0x0))) == t0) {
                        *(unsigned int *)(((t3 + 0x4) + 0x0)) = 0xC1523AC;
                    }
                }
            }
        }
        t2 = 0xC1523EC;
        if ((*(int *)(((t4 + 0xC) + 0x0))) == t2) {
            t0 = 0xC15241C;
            *(unsigned int *)(((t4 + 0xC) + 0x0)) = t0;
        } else {
            t1 = 0xC1523FC;
            if ((*(int *)(((t4 + 0xC) + 0x0))) == t1) {
                *(unsigned int *)(((t4 + 0xC) + 0x0)) = 0xC15242C;
            } else {
                t0 = 0xC15240C;
                if ((*(int *)(((t4 + 0xC) + 0x0))) == t0) {
                    *(unsigned int *)(((t4 + 0xC) + 0x0)) = 0xC15243C;
                }
            }
        }
        if ((*(int *)(((t5 + 0x14) + 0x0))) == 0xC1522CC) {
            *(unsigned int *)(((t5 + 0x14) + 0x0)) = 0xC1522EC;
        } else {
            t2 = (*(int *)(((t5 + 0x14) + 0x0)));
            if (t2 == 0xC1522DC) {
                *(unsigned int *)(((t5 + 0x14) + 0x0)) = 0xC1522BC;
            }
        }
        t3 = (t3 + 0x18);
        t5 = (t5 + 0x18);
        t4 = (t4 + 0x18);
        if ((unsigned int)t3 < (unsigned int)0xC1531D4) continue;
        break;
    }
    if ((*(int *)0xC195A18) == 0xC191798) {
        *(unsigned int *)0xC195A18 = 0xC1917E8;
    }
    if ((*(int *)0xC195A1C) == 0xC191838) {
        *(unsigned int *)0xC195A1C = 0xC191888;
    }
    if ((*(int *)0xC195A20) == 0xC191608) {
        *(unsigned int *)0xC195A20 = 0xC191658;
    }
    if ((*(int *)0xC195A24) == 0xC1916A8) {
        *(unsigned int *)0xC195A24 = 0xC1916F8;
    }
    if ((*(int *)0xC195A28) == 0xC1918D8) {
        *(unsigned int *)0xC195A28 = 0xC191928;
    }
    if ((*(int *)0xC195A2C) == 0xC1919C8) {
        *(unsigned int *)0xC195A2C = 0xC191A18;
    }
    *(unsigned short *)0xC0F84CA = 0x503;
    *(unsigned short *)0xC0F84C8 = 0x503;
    *(unsigned short *)0xC0F84C4 = 0x503;
    *(unsigned short *)0xC0F84C2 = 0x503;
    return 0x503;
}

int FUN_0c02dc30(int a4)
{
    int t19;
    int t20;
    int t24;
    int t34;
    int t37;
    int t39;
    int t44;
    int t46;
    int t47;
    int t51;
    int t52;
    int t112;
    int t106;
    int t66;
    int t101;
    int t80;
    int t95;
    int t87;
    int t90;
    int t1;
    int t35;
    int t36;

    *(unsigned int *)((a4 + 0x54C)) = 0x0;
    if (((*(int *)((a4 + 0x508))) == 0) && (t1 = *(int *)((a4 + 0x4C8)), t1 != 2)) {
        if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x510))) << 2)))) != 4) {
            *(unsigned int *)((a4 + 0x50C)) = 0x0;
        }
        if ((*(int *)((a4 + 0x50C))) == 0) {
            FUN_0c0236ce(a4);
        }
    }
    t19 = FUN_0c023738(a4);
    if (t19 != 0) {
        *(unsigned int *)((a4 + 0x54C)) = 0x3;
        for (;;) {
            t20 = *(int *)((a4 + 0x4F4));
            t24 = FUN_0c034134(a4, (*(float *)((((((*(int *)(((0x54C + a4) + 0x0))) - 1) << 2) + ((*(int *)((((((t20 << 1) + t20) << 2) + 0xC1F79B4) + 0x8))) + 0x7C)) + 0x0))));
            if (t24 == 0) {
                *(unsigned int *)((a4 + 0x54C)) = ((*(int *)((a4 + 0x54C))) - 1);
                if ((int)(*(int *)((a4 + 0x54C))) <= 0) {
                    break;
                }
                continue;
            }
            break;
        }
    }
    t34 = *(int *)((a4 + 0x4F8));
    if ((t34 != 0) && ((t34 != 1) && (((t34 != 2) && (t34 != 3)) || ((t35 = *(int *)((a4 + 0x500)), t35 == 14) || (t36 = *(int *)((a4 + 0x500)), t36 == 15))))) {
    } else {
        t37 = *(int *)((a4 + 0x4F0));
        t39 = ((int (*)(int))((*(int *)(((((t37 << 2) + t37) << 2) + 0xC1F8E3C)))))(a4);
    }
    t44 = *(int *)((a4 + 0x4F4));
    t46 = ((int (*)(int))((*(int *)((((((t44 << 1) + t44) << 2) + 0xC1F79B4) + 0x0)))))(a4);
    t47 = *(int *)((a4 + 0x4F4));
    t51 = ((int (*)(int))((*(int *)((((*(int *)(((0x4F8 + a4) + 0x0))) << 2) + (*(int *)((((((t47 << 1) + t47) << 2) + 0xC1F79B4) + 0x4))))))))(a4);
    t52 = *(int *)((a4 + 0x4F8));
    t112 = t52;
    if (t52 != 4) {
        t106 = t52;
        if (t52 != 5) {
            t66 = *(int *)((a4 + 0xCC));
            t101 = 0xCC;
            if (((int)t66 >= 0) && ((int)t66 < (int)0x4)) {
                t80 = *(int *)((0xC247030 + ((*(int *)((a4 + 0xCC))) << 2)));
                t95 = t80;
                if (t80 == 4) {
                    t87 = *(int *)(((((*(int *)((a4 + 0xCC))) << 2) + 0xC246FF0) + 0x0));
                    t90 = 0xD0;
                    if ((*(int *)((t87 + 0xD0))) == (*(int *)((a4 + 0xBC)))) {
                        *(unsigned int *)((t87 + 0xD0)) = 0xFFFFFFFF;
                        *(unsigned int *)((t87 + 0x2F4)) = 0x400;
                        *(unsigned int *)((t87 + 0x1DC)) = (*(short *)((a4 + 0x6E)));
                        *(unsigned int *)((t87 + 0x1D8)) = 0x4000;
                        *(float *)((t87 + 0x1D4)) = 100.0f;
                        *(unsigned int *)((t87 + 0x1CC)) = 0x5;
                        t90 = 0x1CC;
                    }
                    t95 = t90;
                }
                t101 = t95;
            }
            t106 = t101;
        }
        t112 = t106;
    }
    return t112;
}

int syChainAddHandler(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t8;
    int t19;
    int t48;
    int stk[12];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C222164:;
    *(unsigned short *)(((int)stk + 8)) = R4;
    *(unsigned int *)(((int)stk + 4)) = R5;
    *(unsigned short *)(((int)stk + 12)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = *(short *)(((int)stk + 8));
    t2 = *(int *)((0xC9539E8 + (((int)t1 >> 4) << 2)));
    t8 = R7;
    R11 = ((R6 | 0x80000000));
    R13 = (t1);
    R4 = (t2);
    R5 = (t2);
    R7 = (0x80000000);
    R8 = t8;
    R9 = (0xC9539E8);
    goto L_C2221B0;
    L_C2221B0:;
    if ((R4 == 0)) goto L_C2221BA;
    goto L_C2221B4;
    L_C2221B4:;
    if (((unsigned int)(*(int *)((R4 + 0xC))) < (unsigned int)R11)) goto L_C2221AC;
    goto L_C2221BA;
    L_C2221BA:;
    R10 = (0xC9529E8);
    R12 = (0x1);
    R14 = (0x1);
    R6 = (0x100);
    goto L_C2221C2;
    L_C2221C2:;
    if ((((*(int *)(((((R14 << 2) << 2) + R10) + 0xC))) & R7) == 0)) goto L_C2221D6;
    goto L_C2221D0;
    L_C2221D0:;
    t19 = (unsigned int)(R14 + 0x1) < (unsigned int)R6;
    R14 = ((R14 + 0x1));
    if (t19) goto L_C2221C2;
    goto L_C2221D6;
    L_C2221D6:;
    if (((unsigned int)R14 < (unsigned int)R6)) goto L_C2221DE;
    goto L_C2221DA;
    L_C2221DA:;
    goto L_C2222E6;
    L_C2222E6:;
    R4 = (0x0);
    goto L_C2222E8;
    L_C2222E8:;
    _builtin_set_imask(((unsigned int)((((unsigned short)(*(short *)(((int)stk + 12))) & 0xF) << 2) << 2) >> 4));
    return R4;
    L_C2221DE:;
    if ((R4 != 0)) goto L_C2222B2;
    goto L_C2221E2;
    L_C2221E2:;
    if ((R5 != 0)) goto L_C2222B2;
    goto L_C2221E6;
    L_C2221E6:;
    R4 = (0x900);
    if (((int)R13 >= (int)0x900)) goto L_C222204;
    goto L_C2221EC;
    L_C2221EC:;
    *(unsigned int *)(((((int)_builtin_get_vbr()) + ((((0xFFFFFE00 + R13) >> 1) >> 1) >> 1)) + 0x200)) = 0xC222312;
    goto L_C222256;
    L_C222256:;
    *(unsigned int *)((R9 + (((int)R13 >> 4) << 2))) = (((R14 << 2) << 2) + R10);
    *(unsigned int *)(((((R14 << 2) << 2) + R10) + 0x4)) = 0x0;
    *(unsigned int *)(((((R14 << 2) << 2) + R10) + 0x0)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((((R14 << 2) << 2) + R10) + 0x8)) = R8;
    *(unsigned int *)(((((R14 << 2) << 2) + R10) + 0xC)) = R11;
    R4 = (((unsigned int)((unsigned int)((unsigned int)(unsigned char)(*(short *)(((int)stk + 8))) >> 2) >> 2) >> 1));
    if ((((int)R13 >> 8) != 10)) goto L_C22229A;
    goto L_C22228A;
    L_C22228A:;
    *(unsigned int *)0xA05F6920 = ((*(int *)0xA05F6920) | (((int)(R4 + 0xC) >= 0) ? (R12 << ((R4 + 0xC) & 31)) : ((-(int)(R4 + 0xC) & 31) ? ((int)R12 >> (-(int)(R4 + 0xC) & 31)) : ((int)R12 >> 31))));
    goto L_C2222E2;
    L_C2222E2:;
    R4 = (R14);
    goto L_C2222E8;
    L_C22229A:;
    if ((((int)R13 >> 8) != 11)) goto L_C2222E2;
    goto L_C2222A4;
    L_C2222A4:;
    *(unsigned int *)0xA05F6924 = ((*(int *)0xA05F6924) | (((int)R4 >= 0) ? (R12 << (R4 & 31)) : ((-(int)R4 & 31) ? ((int)R12 >> (-(int)R4 & 31)) : ((int)R12 >> 31))));
    goto L_C2222E2;
    L_C222204:;
    if ((R13 != R4)) goto L_C22223C;
    goto L_C222208;
    L_C222208:;
    kmSetVSyncCallback(0xC222336, 0x0);
    goto L_C222256;
    L_C22223C:;
    if ((R13 != 0x920)) goto L_C22224E;
    goto L_C222242;
    L_C222242:;
    kmSetHSyncCallback(0xC222380, 0x0);
    goto L_C222256;
    L_C22224E:;
    *(unsigned int *)((((int)_builtin_get_vbr()) + 0x22C)) = 0xC2223A6;
    goto L_C222256;
    L_C2222B2:;
    R12 = ((((R14 << 2) << 2) + R10));
    if ((R4 != (*(int *)((R9 + (((int)R13 >> 4) << 2)))))) goto L_C2222D6;
    goto L_C2222C8;
    L_C2222C8:;
    *(unsigned int *)((R12 + 0x4)) = R4;
    *(unsigned int *)((R9 + (((int)R13 >> 4) << 2))) = R12;
    goto L_C2222DA;
    L_C2222DA:;
    *(unsigned int *)((R12 + 0x0)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)((R12 + 0x8)) = R8;
    *(unsigned int *)((R12 + 0xC)) = R11;
    goto L_C2222E2;
    L_C2222D6:;
    *(unsigned int *)((R5 + 0x4)) = R12;
    *(unsigned int *)((R12 + 0x4)) = R4;
    goto L_C2222DA;
    L_C2221AC:;
    t48 = R4;
    R4 = ((*(int *)((R4 + 0x4))));
    R5 = t48;
    goto L_C2221B0;
}

int FUN_0c02bfa8(int a4)
{
    int t2;
    int t25;
    int t28;
    int t37;
    int t40;
    int t43;
    int t52;
    int t55;
    float u56;
    int t57;
    int stk[30];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R11;
    int R12;
    int R13;
    int R14;
    float F3;
    float F12;
    float F13;
    int T_;
    R4 = a4;
    L_C02BFA8:;
    *(volatile int *)((R4 + 0x304));
    *(volatile int *)((R4 + 0x308));
    t2 = FUN_0c0e5dc0();
    _quick_odd_mvn();
    _quick_odd_mvn();
    R11 = ((((int)stk + 4) + 0x2C));
    R12 = (0x0);
    R13 = (t2);
    R14 = (R4);
    if (((int)(*(int *)((R4 + 0x304))) > 0)) goto L_C02C014;
    goto L_C02BFF4;
    L_C02BFF4:;
    R0 = (0x474);
    goto L_C02C13E;
    L_C02C13E:;
    *(unsigned int *)((R14 + R0)) = R12;
    goto L_C02C140;
    L_C02C140:;
    return R0;
    L_C02C014:;
    R4 = (0x5);
    R5 = (0xC246FF0);
    R6 = (0xC246A3C);
    if (((int)((*(int *)0xC247074) + (*(int *)0xC246A3C)) >= (int)0x5)) goto L_C02C036;
    goto L_C02C02A;
    L_C02C02A:;
    if (((int)R13 > (int)0x8)) goto L_C02C036;
    goto L_C02C030;
    L_C02C030:;
    if (((int)R13 >= (int)0x3)) goto L_C02C03A;
    goto L_C02C036;
    L_C02C036:;
    *(unsigned int *)((R14 + 0x574)) = R13;
    goto L_C02C03A;
    L_C02C03A:;
    if (((*(int *)((R14 + 0x574))) == R13)) goto L_C02C06A;
    goto L_C02C042;
    L_C02C042:;
    if (((int)((*(int *)((R5 + 0x84))) + (*(int *)((R6 + 0x0)))) >= (int)R4)) goto L_C02C06A;
    goto L_C02C04E;
    L_C02C04E:;
    t25 = *(int *)((R14 + 0x3A4));
    *(unsigned int *)((R14 + 0x3A4)) = (t25 - 1);
    if (((int)(t25 - 1) >= 0)) goto L_C02C06A;
    goto L_C02C05A;
    L_C02C05A:;
    FUN_0c0336d6(R14, 0x0, 0x0);
    *(unsigned int *)((R14 + 0x3A4)) = 0x3C;
    goto L_C02C06A;
    L_C02C06A:;
    t28 = *(int *)((R14 + 0x4F8));
    R0 = (t28);
    R4 = (t28);
    if ((t28 == 12)) goto L_C02C140;
    goto L_C02C074;
    L_C02C074:;
    R0 = (R4);
    if ((R4 == 13)) goto L_C02C140;
    goto L_C02C07C;
    L_C02C07C:;
    R0 = (0x20C);
    if ((((*(int *)((R14 + 0x20C))) & 0x80000) != 0)) goto L_C02C140;
    goto L_C02C086;
    L_C02C086:;
    t37 = *(int *)((R14 + 0x4C8));
    R0 = (t37);
    if ((t37 == 9)) goto L_C02C140;
    goto L_C02C08E;
    L_C02C08E:;
    t40 = *(int *)((R14 + 0x4C8));
    R0 = (t40);
    if ((t40 == 2)) goto L_C02C140;
    goto L_C02C096;
    L_C02C096:;
    t43 = *(int *)((R14 + 0x560));
    R0 = (t43);
    R4 = (t43);
    if ((t43 == 8)) goto L_C02C140;
    goto L_C02C0A0;
    L_C02C0A0:;
    R0 = (R4);
    if ((R4 == 9)) goto L_C02C140;
    goto L_C02C0A8;
    L_C02C0A8:;
    t52 = !((float)(*(int *)((R14 + 0x310))) > ((*(float *)((R11 + (R13 << 2)))) + (float)((FUN_0c0da2e0()) & 0x3)));
    if (t52) goto L_C02C10C;
    goto L_C02C0CA;
    L_C02C0CA:;
    *(unsigned int *)((R14 + 0x4D0)) = R12;
    *(unsigned int *)((R14 + 0x4F8)) = 0xC;
    *(unsigned int *)((R14 + 0x568)) = (*(int *)((R14 + 0x310)));
    R0 = (0x310);
    goto L_C02C13E;
    L_C02C10C:;
    t55 = *(int *)((R14 + 0x564));
    u56 = *(float *)((R11 + (R13 << 2)));
    t57 = FUN_0c0da2e0();
    R0 = ((t57 & 0x3));
    if ((!((float)t55 > (u56 + (float)(t57 & 0x3))))) goto L_C02C140;
    goto L_C02C12E;
    L_C02C12E:;
    *(unsigned int *)((R14 + 0x4D0)) = R12;
    *(unsigned int *)((R14 + 0x4F8)) = 0xC;
    *(unsigned int *)((R14 + 0x564)) = R12;
    R0 = (0x56C);
    goto L_C02C13E;
}
