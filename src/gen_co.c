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
int thunk_kmSetCheapShadowMode(void);
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
        thunk_kmSetCheapShadowMode();
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


