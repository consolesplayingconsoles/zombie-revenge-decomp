/* Straight-line functions with calls and guards (batch gen_ag): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010c40(int);
int FUN_0c0111ba(int, int, int, int);
int FUN_0c0146f0(int, int, int, int);
int FUN_0c015436(int, int);
int FUN_0c0154a4(void);
int FUN_0c0154c0(int, int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0844dc(int, int, int, float);
int FUN_0c08455e(float);
int FUN_0c084570(int, int, int, int, int);
extern int FUN_0c0847a2();
int FUN_0c0847a8(float, float, float);
int FUN_0c0847ce(float, float, float);
int FUN_0c0847f4(float, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c08498e(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c096094(int, int);
int FUN_0c098196(int, int, int);
int FUN_0c0981d0(int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a9e94(int, int);
int FUN_0c0a9edc(int, int);
int FUN_0c0a9f0e(int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cec9a(int, int, int, int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0db0a0(int, int);
int FUN_0c0db0e0(int, ...);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc4c0(int);
int FUN_0c0dc510(int);
int FUN_0c0dc670(void);
int FUN_0c0dc6e0(int);
int FUN_0c0dc890(int);
int FUN_0c0dc950(int);
int FUN_0c0dcb80(float, float, float);
int FUN_0c0dcbb0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dccc0(void);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(int);
extern float _builtin_sqrtf(float);
int buStat(int);
int FUN_0c0afe42(int a4, float f4);
int FUN_0c0147a4(int a4);
int FUN_0c0982fc(int a4, int a5, int a6, int a7);
int FUN_0c0a9f70(int a4);

int FUN_0c0afe42(int a4, float f4)
{
    int t13;
    int t14;
    int t29;
    int t31;
    int t36;
    float u41;
    float u45;
    int t46;
    float u86;
    float u88;
    int t131;
    int t132;
    float u143;
    int t154;
    int t163;
    int t166;
    int t167;
    int t168;
    int t164;
    int t165;
    int t176;
    int t177;
    int t188;
    int stk[18];

    if (((*(int *)0xC23ED88) & 16) != 0) {
        if ((*(int *)((a4 + 0x98))) == 0) {
            *(unsigned int *)((a4 + 0x98)) = 0x1;
        }
    } else {
        *(float *)((a4 + 0x94)) = 0.5f;
        *(float *)(((*(int *)0xC246FFC) + 0x45C)) = 0.0f;
        *(float *)(((*(int *)0xC246FFC) + 0x460)) = 0.0f;
        *(float *)(((*(int *)0xC246FFC) + 0x464)) = 0.0f;
    }
    if ((*(int *)((a4 + 0x98))) == 0) {
    } else {
        t13 = *(int *)((a4 + 0x9C));
        *(unsigned int *)((a4 + 0x9C)) = (t13 + 0x1);
        if ((int)(((t13 + 0x1) - 1) - 128) < 0) {
            t14 = ((int (*)(int, float))(FUN_0c0847a2))(0x1, f4);
            FUN_0c0844dc(0xA700, 0x3600, 0x0, 0.0f);
            FUN_0c0844dc(0xA700, 0x3600, 0x1, 0.0f);
            FUN_0c08455e(0.649999976f);
            FUN_0c0847a8(0.5f, 0.5f, 0.5f);
            FUN_0c0847ce(0.0f, 0.0f, 0.0f);
            *(float *)((a4 + 0x94)) = 1.0f;
            *(float *)(((*(int *)0xC246FFC) + 0x45C)) = 1.0f;
            *(float *)(((*(int *)0xC246FFC) + 0x460)) = 1.0f;
            *(float *)(((*(int *)0xC246FFC) + 0x464)) = 1.0f;
        }
        if (((int)(((t13 + 0x1) - 1) - 128) >= 0) && ((int)(((t13 + 0x1) - 1) - 128) < (int)0x64)) {
            t29 = (int)(384.0f - ((float)(((t13 + 0x1) - 1) - 128) * 3.19999981f));
            if ((int)(int)(384.0f - ((float)(((t13 + 0x1) - 1) - 128) * 3.19999981f)) > (int)0xFF) {
                t29 = 0xFF;
            }
            t31 = t29;
            if ((int)t29 < 0) {
                t31 = 0x0;
            }
            FUN_0c0844dc(0xA700, 0x3600, 0x0, 1.0f);
            FUN_0c0844dc(0xA700, 0x3600, 0x1, 1.0f);
            FUN_0c08455e(0.649999976f);
            t36 = ((int (*)(int))(FUN_0c0847a2))(0x1);
            FUN_0c0847f4(0.0f, ((float)t31 * 0.00392156839f));
            FUN_0c0847a8(1.0f, 1.0f, 1.0f);
            u41 = 0.5f;
            if (((*(int *)0xC23A258) & 1) != 0) {
                u41 = 1.0f;
            }
            FUN_0c0847ce(u41, 1.0f, 1.0f);
            FUN_0c084570(0xC1, 0x1F, 0x0, 0x0, 0x0);
            u45 = 0.5f;
            u45 = u45 + 0.0019607842f * (float)t31;
            *(float *)((a4 + 0x90)) = u45;
        } else {
            if ((((t13 + 0x1) - 1) - 128) == 100) {
                t46 = ((int (*)(int))(FUN_0c0847a2))(0x1);
                FUN_0c0847f4(0.539999962f, 0.5f);
                FUN_0c0847ce(0.459999979f, 0.899999976f, 0.979999959f);
                FUN_0c0844dc(0x5000, 0x1A00, 0x0, 0.75f);
                FUN_0c0844dc(0x5000, 0x1A00, 0x1, 0.75f);
                *(unsigned int *)((a4 + 0x98)) = 0x2;
            }
        }
    }
    if (!((*(float *)((a4 + 0x90))) > 0.0f)) {
    } else {
        u86 = 0.299999982f;
        if (((*(int *)0xC23A258) & 1) != 0) {
            u86 = 1.0f;
        }
        u88 = *(float *)((a4 + 0x90));
        FUN_0c0848bc(((*(float *)0xC2024C0) * ((u86 * u88))), ((*(float *)0xC2024C4) * ((u86 * u88))), ((*(float *)0xC2024C8) * ((u86 * u88))));
        FUN_0c0cbafc(0x3C9, 0x2, 0xFC007000, 0x84002000);
        *(unsigned int *)(((int)stk + 12)) = 0x0;
        *(unsigned int *)(((int)stk + 8)) = 0xC110B10;
        for (;;) {
            FUN_0c0dc510(0x0);
            FUN_0c0dcca0(0xC110AE4);
            FUN_0c0dc890((*(int *)(((int)stk + 12))));
            FUN_0c0dc510(0x0);
            FUN_0c0dcca0((*(int *)(((int)stk + 8))));
            FUN_0c0dc6e0((*(int *)(((*(int *)(((int)stk + 8))) + 0xC))));
            FUN_0c0dc890((*(int *)(((*(int *)(((int)stk + 8))) + 0x10))));
            FUN_0c0dc950((*(int *)(((*(int *)(((int)stk + 8))) + 0x14))));
            FUN_0c0dcbb0(((*(int *)(((int)stk + 8))) + 0x18));
            FUN_0c0de000(1.0f);
            FUN_0c0c465c(0x3C9);
            FUN_0c0dc4c0(0x1);
            FUN_0c0dc510(0x0);
            FUN_0c0dcca0(0xC110B34);
            FUN_0c0dc6e0((*(int *)0xC110B40));
            FUN_0c0dc890((*(int *)0xC110B44));
            FUN_0c0dc950((*(int *)0xC110B48));
            FUN_0c0dcbb0(0xC110B4C);
            FUN_0c0de000(1.0f);
            FUN_0c0c465c(0x3C9);
            FUN_0c0dc4c0(0x1);
            FUN_0c0dc4c0(0x1);
            t131 = *(int *)(((int)stk + 12));
            *(unsigned int *)(((int)stk + 12)) = (t131 + 0x4000);
            if ((int)(t131 + 0x4000) >= (int)0x10000) {
                break;
            }
        }
        t132 = ((int (*)(int, int, int, int, int, int, int, int))(FUN_0c0849da))(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
    }
    if ((*(float *)((a4 + 0x94))) != 1.0f) {
        u143 = *(float *)((a4 + 0x94));
        FUN_0c0848bc(u143, u143, u143);
    }
    t154 = 0xC1107F0;
    for (;;) {
        if ((*(short *)((t154 + 0x16))) == 0) {
            break;
        }
        FUN_0c0dc510(0x0);
        FUN_0c0dcca0(t154);
        FUN_0c0c465c((*(short *)((t154 + 0x16))));
        FUN_0c0dc4c0(0x1);
        t154 = (t154 + 0x1C);
    }
    FUN_0c0dc510(0x0);
    FUN_0c0dcca0(0xC110AE4);
    t163 = *(int *)((a4 + 0x9C));
    *(unsigned int *)(((int)stk + 20)) = (t163 - 128);
    *(unsigned int *)(((int)stk + 12)) = 0xC110AF0;
    *(unsigned int *)(((int)stk + 8)) = 0xC110AF0;
    t166 = (t163 - 128);
    t167 = 0x0;
    t168 = 0xC110AF0;
    for (;;) {
        if ((*(int *)((a4 + 0x98))) != 2) {
            t166 = 0xC110AF0;
            *(unsigned int *)(((int)stk + 16)) = (((t167 << 2) << 1) + t166);
            FUN_0c0cbafc((*(short *)(((((t167 << 2) << 1) + t166) + 0x0))), 0x9, 0xFFFFFFFF, 0x0);
            FUN_0c0cbafc((*(short *)(((*(int *)(((int)stk + 16))) + 0x0))), 0x2, 0xC00000, 0x800000);
        } else {
            t176 = t164;
            t177 = t165;
        }
        t164 = t176;
        t165 = t177;
        t166 = 0xC0DE000;
        FUN_0c0de000(1.0f);
        t165 = (*(int *)(((int)stk + 20)));
        if ((int)t165 >= 0) {
            t188 = (*(short *)(((*(int *)(((int)stk + 8))) + 0x0)));
        } else {
            t188 = (*(short *)(((*(int *)(((int)stk + 12))) + 0x2)));
        }
        FUN_0c0c465c(t188);
        if ((*(int *)((a4 + 0x98))) != 2) {
            FUN_0c0cbafc((*(short *)((t168 + 0x0))), 0x2, 0xC00000, 0x0);
            FUN_0c0cbafc((*(short *)((t168 + 0x0))), 0x9, 0xFFFFFFFF, 0xFFFFFFFF);
        }
        t165 = (*(int *)(((int)stk + 12)));
        t164 = 0x4;
        t167 = (t167 + 0x1);
        t165 = (t165 + 0x8);
        *(unsigned int *)(((int)stk + 12)) = t165;
        t166 = (*(int *)(((int)stk + 8)));
        t166 = (t166 + 0x8);
        *(unsigned int *)(((int)stk + 8)) = t166;
        t168 = (t168 + 0x8);
        if ((unsigned int)t167 >= (unsigned int)t164) {
            break;
        }
    }
    FUN_0c0dc4c0(0x1);
    return ((int (*)(void))(FUN_0c0849da))();
}

int FUN_0c0147a4(int a4)
{
    int t58;
    int t66;
    int t94;
    int t95;
    int t99;
    int t101;
    int t110;
    int t112;
    int t147;
    int t153;
    int t159;
    int t161;
    int t162;
    int t174;
    int t180;
    int stk[17];

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
    float F4;
    float F5;
    float F6;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    L_C0147A4:;
    FUN_0c0dc510(0x0);
    FUN_0c0dcca0(0xC0F409C);
    FUN_0c0c465c(0x1413);
    FUN_0c0c465c(0x141C);
    FUN_0c0c465c(0x13B0);
    R11 = (0xC23EAEC);
    R14 = (0xC0C465C);
    if (((*(int *)0xC23EAEC) == 10)) goto L_C0147F4;
    goto L_C0147E8;
    L_C0147E8:;
    if (((*(int *)((R11 + 0x0))) == 2)) goto L_C0147F4;
    goto L_C0147EE;
    L_C0147EE:;
    FUN_0c0c465c(0x141E);
    goto L_C0147F4;
    L_C0147F4:;
    *(unsigned int *)0xC23EAC4 = (FUN_0c0146f0((*(int *)0xC23EAC4), 0xC1EF2E0, (((int)stk + 4) + 0xC), (*(int *)0xC23EACC)));
    FUN_0c0dc510(0x0);
    FUN_0c0c475c(0x1427, (*(float *)0xC23EB00));
    FUN_0c0c475c(0x1425, (*(float *)0xC23EB00));
    FUN_0c0dcc70(0.0f, 0.699999988f, 0.0f);
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0xC);
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0xF);
    R12 = (0xC23EAC4);
    R13 = (0xC0DCC70);
    R8 = ((((int)stk + 4) + 0xC));
    R9 = (0x1417);
    F13 = (0.699999988f);
    F14 = (-0.699999988f);
    F15 = (0.0f);
    goto L_C01486E;
    L_C01486E:;
    if (((unsigned int)R8 < (unsigned int)(*(int *)(((int)stk + 8))))) goto L_C014844;
    goto L_C014874;
    L_C014874:;
    FUN_0c0dc4c0(0x1);
    *(unsigned int *)0xC23EAC8 = (FUN_0c0146f0((*(int *)0xC23EAC8), 0xC23EB5B, (((int)stk + 4) + 0xC), ((*(int *)0xC23EACC) ^ 0x1)));
    FUN_0c0dc510(0x0);
    FUN_0c0dcc70(3.5f, F13, F15);
    *(unsigned int *)(((int)stk + 12)) = (*(int *)(((int)stk + 4)));
    R10 = (0xC23EB5B);
    R8 = (0xC23EAC8);
    F12 = (3.5f);
    goto L_C01493A;
    L_C01493A:;
    if (((unsigned int)(*(int *)(((int)stk + 12))) < (unsigned int)(*(int *)(((int)stk + 8))))) goto L_C014904;
    goto L_C014942;
    L_C014942:;
    FUN_0c0dc4c0(0x1);
    FUN_0c0dc510(0x0);
    if (((*(int *)0xC23EACC) == 0)) goto L_C01495E;
    goto L_C014956;
    L_C014956:;
    FUN_0c0dcc70(F12, F15, F15);
    goto L_C01495E;
    L_C01495E:;
    FUN_0c0c465c(0x140F);
    FUN_0c0c465c(0x1410);
    FUN_0c0dc4c0(0x1);
    FUN_0c0dc510(0x0);
    if (((*(int *)0xC23EACC) == 0)) goto L_C014984;
    goto L_C01497E;
    L_C01497E:;
    FUN_0c0dc670();
    goto L_C014984;
    L_C014984:;
    FUN_0c0c465c(0x1426);
    FUN_0c0c465c(0x1424);
    FUN_0c0dc4c0(0x1);
    t58 = *(int *)((R11 + 0x0));
    R0 = (t58);
    R13 = (0xC23ECDC);
    R9 = (0x0);
    if ((t58 == 0)) goto L_C0149C4;
    goto L_C0149A0;
    L_C0149A0:;
    if ((R0 == 1)) goto L_C014A20;
    goto L_C0149A4;
    L_C0149A4:;
    if ((R0 == 2)) goto L_C014A48;
    goto L_C0149A8;
    L_C0149A8:;
    if ((R0 != 3)) goto L_C0149B0;
    goto L_C0149AC;
    L_C0149AC:;
    goto L_C014AC6;
    L_C014AC6:;
    t66 = *(int *)0xC2498F4;
    R4 = (R10);
    R5 = (t66);
    if (((0xC0C0 & t66) == 0)) goto L_C014B18;
    goto L_C014AD2;
    L_C014AD2:;
    *(unsigned int *)0xC23EACC = ((*(int *)0xC23EACC) ^ 0x1);
    goto L_C014BBC;
    L_C014BBC:;
    if (((*(int *)0xC52314C) == 0)) goto L_C014C2A;
    goto L_C014BC4;
    L_C014BC4:;
    R4 = (R10);
    R5 = (0xC1EF2E0);
    R6 = ((R10 + 0xF));
    goto L_C014BD8;
    L_C014BD8:;
    if (((unsigned int)R4 < (unsigned int)R6)) goto L_C014BD0;
    goto L_C014BDC;
    L_C014BDC:;
    *(unsigned int *)((R11 + 0x0)) = R9;
    goto L_C014C2A;
    L_C014C2A:;
    return (FUN_0c0dc4c0(0x1));
    L_C014BD0:;
    *(unsigned char *)((R5 + 0x0)) = R9;
    *(unsigned char *)((R4 + 0x0)) = R9;
    R4 = ((R4 + 0x1));
    R5 = ((R5 + 0x1));
    goto L_C014BD8;
    L_C014B18:;
    R14 = ((*(int *)((R8 + 0x0))));
    if (((0x4 & R5) == 0)) goto L_C014BAE;
    goto L_C014B20;
    L_C014B20:;
    R5 = (0xC0F40D0);
    R6 = (0x9);
    if (((*(int *)0xC23EACC) != 0)) goto L_C014B78;
    goto L_C014B2C;
    L_C014B2C:;
    if (((int)(*(signed char *)((R4 + (*(int *)((R12 + 0x0)))))) >= (int)R6)) goto L_C014BBC;
    goto L_C014B34;
    L_C014B34:;
    if (((int)(*(signed char *)(((*(int *)((R12 + 0x0))) + 0xC1EF2E0))) <= 0)) goto L_C014BBC;
    goto L_C014B3E;
    L_C014B3E:;
    t94 = *(int *)((R13 + 0x0));
    t95 = *(signed char *)((R5 + (*(int *)((R12 + 0x0)))));
    R4 = ((t95 + t94));
    if (((int)(t95 + t94) <= (int)0xF)) goto L_C014B5E;
    goto L_C014B4C;
    L_C014B4C:;
    FUN_0c0cc3f8(0x28A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    *(unsigned int *)0xC23EAFC = R9;
    *(unsigned int *)((R11 + 0x0)) = 0xA;
    goto L_C014BBC;
    L_C014B5E:;
    *(unsigned int *)((R13 + 0x0)) = R4;
    t99 = *(int *)((R12 + 0x0));
    *(unsigned char *)((t99 + 0xC1EF2E0)) = ((*(signed char *)((t99 + 0xC1EF2E0))) - 1);
    t101 = *(int *)((R12 + 0x0));
    *(unsigned char *)((R10 + t101)) = ((*(signed char *)((R10 + t101))) + 0x1);
    *(unsigned int *)((R8 + 0x0)) = (*(int *)((R12 + 0x0)));
    goto L_C014BBC;
    L_C014B78:;
    if (((int)(*(signed char *)((R14 + 0xC1EF2E0))) >= (int)R6)) goto L_C014BBC;
    goto L_C014B80;
    L_C014B80:;
    if (((int)(*(signed char *)((R4 + R14))) <= 0)) goto L_C014BBC;
    goto L_C014B8A;
    L_C014B8A:;
    *(unsigned int *)((R13 + 0x0)) = ((*(int *)((R13 + 0x0))) - (*(signed char *)((R5 + R14))));
    t110 = *(int *)((R8 + 0x0));
    *(unsigned char *)((R10 + t110)) = ((*(signed char *)((R10 + t110))) - 1);
    t112 = *(int *)((R8 + 0x0));
    *(unsigned char *)((t112 + 0xC1EF2E0)) = ((*(signed char *)((t112 + 0xC1EF2E0))) + 0x1);
    *(unsigned int *)((R12 + 0x0)) = (*(int *)((R8 + 0x0)));
    goto L_C014BBC;
    L_C014BAE:;
    if (((R5 & 0x8) == 0)) goto L_C014BBC;
    goto L_C014BB4;
    L_C014BB4:;
    FUN_0c010c40(0xE);
    *(unsigned int *)((R8 + 0x0)) = R14;
    goto L_C014BBC;
    L_C0149B0:;
    if ((R0 != 4)) goto L_C0149B8;
    goto L_C0149B4;
    L_C0149B4:;
    goto L_C014BE0;
    L_C014BE0:;
    FUN_0c0154a4();
    *(unsigned int *)0xC23A260 = 0x3;
    goto L_C014C2A;
    L_C0149B8:;
    if ((R0 != 10)) goto L_C0149C0;
    goto L_C0149BC;
    L_C0149BC:;
    goto L_C014C10;
    L_C014C10:;
    FUN_0c0dcca0(0xC0F45A4);
    FUN_0c0c465c(0x141F);
    if (((*(int *)0xC2498F4) == 0)) goto L_C014C2A;
    goto L_C014C26;
    L_C014C26:;
    *(unsigned int *)((R11 + 0x0)) = 0x3;
    goto L_C014C2A;
    L_C0149C0:;
    goto L_C014C2A;
    L_C014A48:;
    if (((*(int *)0xC23EB1C) != 10)) goto L_C014A56;
    goto L_C014A50;
    L_C014A50:;
    R4 = (0xC0F45BC);
    goto L_C014A58;
    L_C014A58:;
    FUN_0c0dcca0(R4);
    FUN_0c0154c0((*(int *)0xC23EB20), 0x0, 0x1);
    if (((*(int *)0xC23EB1C) == 9)) goto L_C014A74;
    goto L_C014A70;
    L_C014A70:;
    goto L_C014C2A;
    L_C014A74:;
    if (((*(int *)0xC23EB14) == 0)) goto L_C014AC0;
    goto L_C014A7C;
    L_C014A7C:;
    if (((int)(*(int *)0xC23EB24) < 0)) goto L_C014AC0;
    goto L_C014A84;
    L_C014A84:;
    FUN_0c0111ba((*(int *)0xC23EAE0), R5, R6, R7);
    FUN_0c0e2a4c((*(int *)0xC23EB14), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    *(unsigned int *)((R13 + 0x0)) = R9;
    R4 = ((R9 + R10));
    R5 = ((0xC0F40D0 + R9));
    R6 = ((R10 + 0xF));
    if (((unsigned int)(R9 + R10) < (unsigned int)(R10 + 0xF))) goto L_C014AAA;
    goto L_C014AA6;
    L_C014AA6:;
    goto L_C014C26;
    L_C014AAA:;
    t147 = (unsigned int)(R4 + 0x1) < (unsigned int)R6;
    *(unsigned int *)((R13 + 0x0)) = ((*(int *)((R13 + 0x0))) + ((short)(*(signed char *)((R4 + 0x0))) * (short)(*(signed char *)((R5 + 0x0)))));
    R4 = ((R4 + 0x1));
    R5 = ((R5 + 0x1));
    if (t147) goto L_C014AAA;
    goto L_C014ABC;
    L_C014ABC:;
    goto L_C014C26;
    L_C014AC0:;
    *(unsigned int *)((R11 + 0x0)) = 0x4;
    goto L_C014C2A;
    L_C014A56:;
    R4 = (0xC0F45B0);
    goto L_C014A58;
    L_C014A20:;
    t153 = (buStat((*(int *)0xC23EB20))) == 0;
    if (t153) goto L_C014A30;
    goto L_C014A2C;
    L_C014A2C:;
    goto L_C014C2A;
    L_C014A30:;
    FUN_0c015436((*(int *)0xC23EB20), 0x0);
    if (((int)(*(int *)0xC23EB24) < 0)) goto L_C014AC0;
    goto L_C014A40;
    L_C014A40:;
    *(unsigned int *)((R11 + 0x0)) = ((*(int *)((R11 + 0x0))) + 0x1);
    goto L_C014C2A;
    L_C0149C4:;
    *(unsigned int *)((R8 + 0x0)) = 0x1;
    *(unsigned int *)((R12 + 0x0)) = 0x1;
    t159 = *(int *)0xC23EB38;
    *(unsigned int *)0xC23EB20 = t159;
    FUN_0c0cec9a(t159, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    *(unsigned int *)0xC52314C = R9;
    *(unsigned int *)0xC23EAE0 = R9;
    *(unsigned int *)((R11 + 0x0)) = 0x1;
    goto L_C014C2A;
    L_C014904:;
    t161 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = (t161 + 0x1);
    t162 = *(signed char *)((((t161 + 0x1) - 1) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = t162;
    R3 = (t162);
    if (((int)t162 < 0)) goto L_C014932;
    goto L_C014914;
    L_C014914:;
    FUN_0c0c465c((*(int *)(((R3 << 2) + 0xC0F4568))));
    *(unsigned int *)(((int)stk + 4)) = (*(signed char *)((R10 + (*(int *)(((int)stk + 4))))));
    FUN_0c0c465c(R9);
    FUN_0c0c465c((*(int *)((((*(int *)(((int)stk + 4))) << 2) + 0xC0F4540))));
    goto L_C014932;
    L_C014932:;
    FUN_0c0dcc70(F15, F14, F15);
    goto L_C01493A;
    L_C014844:;
    t174 = *(signed char *)((R8 + 0x0));
    R10 = (t174);
    R8 = ((R8 + 0x1));
    if (((int)t174 < 0)) goto L_C014866;
    goto L_C01484A;
    L_C01484A:;
    FUN_0c0c465c((*(int *)(((R10 << 2) + 0xC0F4568))));
    t180 = *(signed char *)((R10 + 0xC1EF2E0));
    FUN_0c0c465c(R9);
    FUN_0c0c465c((*(int *)(((t180 << 2) + 0xC0F4540))));
    goto L_C014866;
    L_C014866:;
    FUN_0c0dcc70(F15, F14, F15);
    goto L_C01486E;
}

int FUN_0c0982fc(int a4, int a5, int a6, int a7)
{
    int t0;
    int t6;
    int t7;
    int t10;
    int t138;
    int t15;
    int t53;
    int t64;
    float u97;
    float u98;
    float u99;
    int t107;
    int t108;
    int t110;
    int t115;
    int t117;
    int t119;
    int t156;
    int t157;
    int t158;
    int t159;
    int t160;
    int t161;
    float u163;
    float u164;
    float u165;
    float u172;
    float u174;
    float u175;
    float u177;
    float u179;
    float u180;
    float u181;
    float u184;
    float u185;
    float u196;
    int t201;
    float u203;
    int t220;
    int t229;
    int t223;
    int t2;
    int t3;
    int t145;
    int t150;
    int t151;
    float u152;
    float u153;
    float u155;
    int t133;
    int t139;
    float u140;
    float u141;
    float u143;
    int t122;
    int t126;
    int t127;
    float u128;
    float u129;
    float u131;
    float u109;
    float u162;
    int t209;
    int t211;
    float u212;
    float u213;
    int t234;
    int stk[23];

    t0 = *(int *)((a4 + 0x30));
    FUN_0c0685a4(a4, a5, a6, a7);
    if ((t0 != 0) && (t2 = *(int *)((t0 + 0xBC)), t3 = *(int *)(((t2 << 2) + 0xC247030)), t3 == 0)) {
        FUN_0c0e19f2();
    }
    t6 = *(int *)((a4 + 0x3C));
    t7 = ((~(((~t6) + 0x1) & 0x1)) + 0x1);
    if ((int)t6 >= 0) {
        t7 = (t6 & 0x1);
    }
    if (t7 == 0) {
        t10 = *(int *)((a4 + 0x40));
        t138 = t10;
        if (t10 == 0) {
            t15 = FUN_0c0e5f1c((*(int *)((a4 + 0x3C))));
            if (a4 == 0) {
                FUN_0c098196((a4 + 0x5C), (((int)stk + 20) + 0xC), (*(int *)((a4 + 0x44))));
                FUN_0c0dc510(0x0);
                if ((*(int *)((a4 + 0x38))) != 0) {
                    FUN_0c0dccc0();
                    FUN_0c0dcc70((*(float *)((a4 + 0x48))), (*(float *)((a4 + 0x4C))), (*(float *)((a4 + 0x50))));
                    if ((*(short *)((a4 + 0x58))) != 0) {
                        FUN_0c0dc950((*(short *)((a4 + 0x56))));
                    }
                    if ((*(short *)((a4 + 0x56))) != 0) {
                        FUN_0c0dc890((*(short *)((a4 + 0x56))));
                    }
                    if ((*(short *)((a4 + 0x54))) != 0) {
                        FUN_0c0dc6e0((*(short *)((a4 + 0x54))));
                    }
                } else {
                    FUN_0c0dbda0((((((*(int *)((a4 + 0x34))) << 2) << 2) << 2) + (*(int *)((t0 + 0x3E4)))));
                }
                FUN_0c0db470((((int)stk + 20) + 0xC), ((((((t15 << 1) + t15) << 2) << 2) + (0x218 + a4)) + 0x18));
                FUN_0c0dc4c0(0x1);
            } else {
                t53 = FUN_0c0e5f1c(a4);
                *(float *)(((((((t15 << 1) + t15) << 2) << 2) + (0x218 + a4)) + 0x18)) = (*(float *)((((0x218 + a4) + ((((t53 << 1) + t53) << 2) << 2)) + 0x24)));
                *(float *)(((((((t15 << 1) + t15) << 2) << 2) + (0x218 + a4)) + 0x1C)) = (*(float *)((((0x218 + a4) + ((((t53 << 1) + t53) << 2) << 2)) + 0x28)));
                *(float *)(((((((t15 << 1) + t15) << 2) << 2) + (0x218 + a4)) + 0x20)) = (*(float *)(((((((t53 << 1) + t53) << 2) << 2) + (0x218 + a4)) + 0x2C)));
            }
            t64 = FUN_0c0981d0((a4 + 0x5C), (((int)stk + 20) + 0xC));
            if (t64 == 0) {
                *(unsigned int *)(((((((t15 << 1) + t15) << 2) << 2) + (0x218 + a4)) + 0x0)) = 0x0;
                *(unsigned int *)((a4 + 0x40)) = 0x1;
                *(unsigned int *)((a4 + 0x3C)) = 0x3C;
                t126 = 0x1;
                t127 = 0x3C;
            } else {
                FUN_0c0dc510(0x0);
                if ((*(int *)((a4 + 0x38))) != 0) {
                    FUN_0c0dccc0();
                    FUN_0c0dcc70((*(float *)((a4 + 0x48))), (*(float *)((a4 + 0x4C))), (*(float *)((a4 + 0x50))));
                    if ((*(short *)((a4 + 0x58))) != 0) {
                        FUN_0c0dc950((*(short *)((a4 + 0x56))));
                    }
                    if ((*(short *)((a4 + 0x56))) != 0) {
                        FUN_0c0dc890((*(short *)((a4 + 0x56))));
                    }
                    if ((*(short *)((a4 + 0x54))) != 0) {
                        FUN_0c0dc6e0((*(short *)((a4 + 0x54))));
                    }
                    FUN_0c0db470((((int)stk + 20) + 0xC), ((((((t15 << 1) + t15) << 2) << 2) + (0x218 + a4)) + 0x24));
                } else {
                    FUN_0c0dbda0((((((*(int *)((a4 + 0x34))) << 2) << 2) << 2) + (*(int *)((t0 + 0x3E4)))));
                    FUN_0c0db470((((int)stk + 20) + 0xC), ((((((t15 << 1) + t15) << 2) << 2) + (0x218 + a4)) + 0x24));
                    FUN_0c0db0a0(0x14, 0x3);
                    u97 = *(float *)(((int)stk + 40));
                    *(float *)(((int)stk + 16)) = u97;
                    u98 = *(float *)(((int)stk + 36));
                    *(float *)(((int)stk + 12)) = u98;
                    u99 = *(float *)(((int)stk + 32));
                    *(float *)(((int)stk + 8)) = u99;
                    FUN_0c0db0e0(0xC10BF78, u99, u98, u97);
                }
                FUN_0c0dc4c0(0x1);
                *(unsigned int *)(((((((t15 << 1) + t15) << 2) << 2) + (0x218 + a4)) + 0x0)) = 0x14;
                *(float *)(((((((t15 << 1) + t15) << 2) << 2) + (0x218 + a4)) + 0x4)) = (((float)(unsigned char)(FUN_0c0da2e0()) / 512.0f) + 0.5f);
                *(unsigned int *)(((((((t15 << 1) + t15) << 2) << 2) + (0x218 + a4)) + 0x14)) = (FUN_0c0da2e0());
                *(unsigned int *)(((((((t15 << 1) + t15) << 2) << 2) + (0x218 + a4)) + 0x8)) = ((*(int *)(((((((t15 << 1) + t15) << 2) << 2) + (0x218 + a4)) + 0x8))) + 0x1);
                *(unsigned int *)(((int)stk + 28)) = 0x0;
                t107 = 0xC09866C;
                t108 = ((((t15 << 1) + t15) * 0x1C) + (a4 + 0x74));
                for (;;) {
                    t110 = *(int *)(((int)stk + 28));
                    if ((int)t110 >= (int)0x3) {
                        break;
                    }
                    t107 = 0x24;
                    *(unsigned int *)((t108 + 0x18)) = 0x28;
                    u109 = (*(float *)(((((((t15 << 1) + t15) << 2) << 2) + (0x218 + a4)) + t107)));
                    *(float *)((t108 + 0x0)) = u109;
                    t107 = 0x28;
                    u109 = (*(float *)(((((((t15 << 1) + t15) << 2) << 2) + (0x218 + a4)) + t107)));
                    t107 = 0x4;
                    *(float *)((t108 + t107)) = u109;
                    t107 = 0x2C;
                    u109 = (*(float *)(((((((t15 << 1) + t15) << 2) << 2) + (0x218 + a4)) + t107)));
                    t107 = 0x8;
                    *(float *)((t108 + t107)) = u109;
                    t107 = (FUN_0c0da2e0());
                    t107 = (t107 & 0x7FFF);
                    t115 = t107;
                    t107 = 0xC;
                    u109 = (float)t115;
                    u109 = (u109 * 0.5f);
                    u109 = (u109 / 32767.0f);
                    u109 = (u109 + -0.25f);
                    *(float *)((t108 + t107)) = u109;
                    t107 = (FUN_0c0da2e0());
                    t107 = (t107 & 0x7FFF);
                    t117 = t107;
                    t107 = 0x10;
                    u109 = (float)t117;
                    u109 = (u109 * 0.5f);
                    u109 = (u109 / 32767.0f);
                    u109 = (u109 + -0.25f);
                    *(float *)((t108 + t107)) = u109;
                    t107 = (FUN_0c0da2e0());
                    t107 = (t107 & 0x7FFF);
                    t119 = t107;
                    t107 = 0x14;
                    u109 = (float)t119;
                    u109 = (u109 * 0.5f);
                    u109 = (u109 / 32767.0f);
                    u109 = (u109 + -0.25f);
                    *(float *)((t108 + t107)) = u109;
                    t108 = (t108 + 0x1C);
                    *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x1);
                }
                t122 = 0x0;
                t126 = t110;
                t127 = 0x3;
                u128 = -0.25f;
                u129 = 32767.0f;
                u131 = u109;
            }
            t133 = t122;
            t138 = t126;
            t139 = t127;
            u140 = u128;
            u141 = u129;
            u143 = u131;
        }
        t145 = t133;
        t150 = t138;
        t151 = t139;
        u152 = u140;
        u153 = u141;
        u155 = u143;
    }
    t156 = 0xC098674;
    t157 = t145;
    t158 = t150;
    t159 = t151;
    t160 = 0x0;
    t161 = (0x218 + a4);
    u163 = u155;
    u164 = u152;
    u165 = u153;
    for (;;) {
        if ((int)t160 >= (int)0x5) {
            break;
        }
        t158 = (*(int *)((t161 + 0x0)));
        if (t158 != 0) {
            t156 = 0x4;
            u162 = 0.0f;
            u163 = (*(float *)((t161 + t156)));
            if (u163 != u162) {
                t156 = 0x24;
                u163 = (*(float *)((t161 + t156)));
                t156 = 0x18;
                u172 = *(float *)((t161 + t156));
                t156 = 0x28;
                t159 = 0xC0A7714;
                u174 = (u172 - u163);
                u163 = (*(float *)((t161 + t156)));
                t156 = 0x1C;
                u175 = *(float *)((t161 + t156));
                t156 = 0x2C;
                u177 = (u175 - u163);
                u163 = (*(float *)((t161 + t156)));
                t156 = 0x20;
                u179 = ((*(float *)((t161 + t156))) - u163);
                u163 = u177;
                u163 = (u163 * u177);
                u180 = u163;
                u180 = u180 + u174 * u174;
                u163 = u180;
                u181 = u163;
                u181 = u181 + u179 * u179;
                u163 = u181;
                u163 = _builtin_sqrtf(u163);
                u164 = u163;
                t156 = (FUN_0c0a7714(((int)stk + 20), (((int)stk + 20) + 0x4), u174, u177, u179));
                t158 = 0xC0DC510;
                t156 = (FUN_0c0dc510(0x0));
                t156 = 0x20;
                t159 = 0xC0DCC70;
                u184 = *(float *)((t161 + t156));
                t156 = 0x1C;
                u185 = *(float *)((t161 + t156));
                t156 = 0x18;
                t156 = (FUN_0c0dcc70((*(float *)((t161 + t156))), u185, u184));
                t156 = (FUN_0c0dc890((*(int *)(((int)stk + 24)))));
                t159 = 0xC0DC6E0;
                t156 = (FUN_0c0dc6e0((*(int *)(((int)stk + 20)))));
                t158 = 0xC0DC950;
                t156 = (FUN_0c0dc950((*(int *)((t161 + 0x14)))));
                t156 = 0xC0987E4;
                u165 = u164;
                u163 = (*(float *)((t156 + 0x0)));
                t159 = 0xC0DCB80;
                u165 = (u165 * u163);
                t156 = (FUN_0c0dcb80(4.0f, 4.0f, u165));
                u196 = 4.0f;
                if (u165 > 4.0f) {
                    u196 = u165;
                }
                t158 = 0xC0DE000;
                t156 = (FUN_0c0de000(u196));
                t156 = (FUN_0c0dc890(0x3FFF));
                t159 = (*(int *)((t161 + 0x0)));
                t158 = 0xC200AEC;
                t201 = t159;
                t159 = 0xC200AF0;
                u163 = (float)t201;
                u203 = *(float *)((t159 + 0x0));
                t157 = 0xC200AE8;
                t159 = 0xC0848BC;
                u165 = u163;
                u165 = (u165 / 20.0f);
                t156 = (FUN_0c0848bc(((*(float *)((t157 + 0x0))) * u165), ((*(float *)((t158 + 0x0))) * u165), (u203 * u165)));
                t158 = 0xC0C465C;
                t156 = (FUN_0c0c465c(0x2B0));
                t159 = 0xC0DC4C0;
                t156 = (FUN_0c0dc4c0(0x1));
            } else {
                t209 = t157;
                t211 = t159;
                u212 = u162;
                u213 = u163;
            }
            u162 = u212;
            u163 = u213;
            t157 = t209;
            t158 = (*(int *)((t161 + 0x0)));
            t159 = t211;
            t158 = (t158 - 1);
            *(unsigned int *)((t161 + 0x0)) = t158;
        }
        t161 = (t161 + 0x30);
        t160 = (t160 + 0x1);
    }
    FUN_0c096094((a4 + 0x74), 0xF);
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12));
    if ((*(int *)((a4 + 0x40))) != 0) {
        t220 = *(int *)((a4 + 0x3C));
        *(unsigned int *)((a4 + 0x3C)) = (t220 - 1);
        t229 = 0x40;
        if ((int)(t220 - 1) <= 0) {
            if ((*(int *)((a4 + 0x38))) != 0) {
                t223 = *(int *)((a4 + 0x38));
                *(unsigned int *)((t223 + 0x38)) = ((*(int *)((t223 + 0x38))) - 1);
            }
            t229 = (FUN_0c0e19f2());
        }
        t234 = t229;
    } else {
        *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + 0x1);
        t234 = 0x40;
    }
    return t234;
}

int FUN_0c0a9f70(int a4)
{
    int t23;
    float u65;
    float u76;
    float u77;
    float u79;
    float u101;
    float u102;
    float u106;
    float u126;
    float u127;
    float u131;
    float u157;
    float u172;
    float u178;
    float u179;
    int t183;
    int t184;
    float u185;
    float u190;
    float u216;
    float u222;
    int t242;
    float u83;
    float u110;
    float u135;
    float u223;
    int stk[16];

    FUN_0c0dc510(0x0);
    *(unsigned short *)0xC2021AC = 0x2E38;
    if ((unsigned int)a4 < (unsigned int)0x3C0) {
        if ((int)a4 >= (int)0x5A) {
            *(unsigned short *)0xC2021AC = 0xE38;
        } else {
            if ((int)a4 >= (int)0x3C) {
                *(unsigned short *)0xC2021AC = (int)(7281.0f - (((float)(a4 - 60) * 3640.0f) / 30.0f));
            }
        }
    }
    if (((int)a4 > (int)0x3C) && ((unsigned int)a4 < (unsigned int)0x3C0)) {
        t23 = FUN_0c0e5f1c(0xC2021AC);
        if (t23 == 0) {
            FUN_0c0a9f0e(0x3);
            FUN_0c0a9f0e(0x4);
            FUN_0c0a9f0e(0x5);
        }
    }
    if (a4 == 0x3C0) {
        FUN_0c0a9f0e(0x0);
        if (a4 == 0x3C0) {
            FUN_0c0a9f0e(0x1);
            if (a4 == 0x3C0) {
                FUN_0c0a9f0e(0x2);
            }
        }
    }
    FUN_0c0dc510(0x0);
    FUN_0c0c465c(0x122E);
    FUN_0c0dc4c0(0x1);
    FUN_0c0dc510(0x0);
    *(unsigned int *)(((int)stk + 4)) = 0xC10D504;
    FUN_0c0dcc70((*(float *)0xC10D50C), (*(float *)0xC10D510), (*(float *)0xC10D514));
    FUN_0c0dc890((unsigned short)(*(short *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x14))) + 0x8))));
    u65 = *(float *)0xC2021B0;
    FUN_0c0dcb80(u65, u65, u65);
    FUN_0c0dc510(0x0);
    FUN_0c0de000((*(float *)0xC2021B0));
    FUN_0c0c465c(0x1231);
    FUN_0c0dc4c0(0x1);
    FUN_0c0dc510(0x0);
    FUN_0c0dcc70(0.0f, 0.0199999996f, 0.0381999984f);
    *(float *)(((int)stk + 8)) = (1.0f - (((float)a4 + -960.0f) / 30.0f));
    *(float *)(((int)stk + 12)) = (((float)a4 + -60.0f) / 30.0f);
    if ((int)a4 > (int)0x3C) {
        if ((unsigned int)a4 > (unsigned int)0x3C0) {
            u76 = *(float *)(((int)stk + 8));
            u77 = u76;
            if (0.0f > u76) {
                u77 = 0.0f;
            }
            u83 = u77;
        } else {
            u79 = 1.0f;
            if ((int)a4 < (int)0x5A) {
                u79 = (((float)a4 + -60.0f) / 30.0f);
            }
            u83 = u79;
        }
        FUN_0c0dc6e0((int)(u83 * 20338.3301f));
    }
    FUN_0c0de000((*(float *)0xC2021B0));
    FUN_0c0c465c(0x1236);
    FUN_0c0dc4c0(0x1);
    FUN_0c0dc510(0x0);
    if ((int)a4 > (int)0x3C) {
        if ((unsigned int)a4 > (unsigned int)0x3C0) {
            u101 = *(float *)(((int)stk + 8));
            u102 = u101;
            if (0.0f > u101) {
                u102 = 0.0f;
            }
            u110 = u102;
        } else {
            u106 = 1.0f;
            if ((int)a4 < (int)0x5A) {
                u106 = (*(float *)(((int)stk + 12)));
            }
            u110 = u106;
        }
        FUN_0c0dcc70((u110 * 0.0199999996f), 0.0f, (-(u110 * 0.389999986f)));
        FUN_0c0dc890((int)(-(u110 * 3276.7998f)));
    }
    FUN_0c0de000((*(float *)0xC2021B0));
    FUN_0c0c465c(0x1233);
    FUN_0c0dc4c0(0x1);
    FUN_0c0dc510(0x0);
    if ((int)a4 > (int)0x3C) {
        if ((unsigned int)a4 > (unsigned int)0x3C0) {
            u126 = *(float *)(((int)stk + 8));
            u127 = u126;
            if (0.0f > u126) {
                u127 = 0.0f;
            }
            u135 = u127;
        } else {
            u131 = 1.0f;
            if ((int)a4 < (int)0x5A) {
                u131 = (*(float *)(((int)stk + 12)));
            }
            u135 = u131;
        }
        FUN_0c0dcc70((u135 * 0.0199999996f), 0.0f, (-(u135 * 0.389999986f)));
        FUN_0c0dc890((int)(u135 * 3276.7998f));
    }
    FUN_0c0de000((*(float *)0xC2021B0));
    FUN_0c0c465c(0x1235);
    FUN_0c0dc4c0(0x1);
    if ((unsigned int)a4 >= (unsigned int)0x3C0) {
    } else {
        if (((*(int *)0xC23A258) & 2) != 0) {
            FUN_0c08498e(0.799999952f, 0.799999952f, 0.799999952f);
        }
        if ((int)a4 > (int)0x78) {
            FUN_0c0dc510(0x0);
            u157 = 1.0f;
            if ((int)a4 < (int)0x96) {
                u157 = (((float)a4 + -120.0f) / 30.0f);
            }
            FUN_0c0dcc70(0.0f, -0.0399999991f, 0.0f);
            FUN_0c0de000((*(float *)0xC2021B0));
            FUN_0c0c475c(0x1230, u157);
            FUN_0c0dc4c0(0x1);
        }
        if ((int)a4 <= (int)0xA5) {
        } else {
            FUN_0c0dc510(0x0);
            u172 = 1.0f;
            if ((int)a4 < (int)0xC3) {
                u172 = (((float)a4 + -165.0f) / 30.0f);
            }
            FUN_0c0dcc70(0.0f, 0.0f, -0.00999999978f);
            FUN_0c0dcb80(1.0f, u172, 1.0f);
            u178 = *(float *)0xC2021B0;
            u179 = 1.0f;
            if (u172 > 1.0f) {
                u179 = u172;
            }
            FUN_0c0de000((u179 * u178));
            t183 = (FUN_0c0c465c(0x1232));
            t184 = 0x0;
            u185 = u172;
            for (;;) {
                if ((unsigned int)t184 >= (unsigned int)0x8) {
                    break;
                }
                u185 = 1.0f;
                if (t184 == 0) {
                    if ((int)a4 > (int)0xD2) {
                        t183 = 0x1E;
                        t183 = (FUN_0c0e5dc0());
                        if ((t183 & a4) != 0) {
                        } else {
                            u185 = 0.0f;
                        }
                    }
                } else {
                    if ((int)a4 > (int)0xF0) {
                        if ((int)a4 > (int)(0xF0 + ((t184 - 1) * 0x5A))) {
                            t183 = 0xC0AA434;
                            u190 = *(float *)((t183 + 0x0));
                            if ((float)a4 > ((float)(0xF0 + ((t184 - 1) * 0x5A)) + u190)) {
                                u185 = 0.0f;
                            } else {
                                u185 = (u190 - (float)(a4 - (0xF0 + ((t184 - 1) * 0x5A))));
                                u185 = (u185 / u190);
                            }
                        }
                    }
                }
                t183 = (FUN_0c0dc510(0x0));
                t183 = 0x8;
                *(unsigned int *)(((int)stk + 4)) = (0xC10D2C0 + (((t184 << 1) + t184) << 2));
                u216 = *(float *)(((0xC10D2C0 + (((t184 << 1) + t184) << 2)) + t183));
                t183 = 0x4;
                t183 = (FUN_0c0dcc70((*(float *)(((0xC10D2C0 + (((t184 << 1) + t184) << 2)) + 0x0))), (*(float *)(((0xC10D2C0 + (((t184 << 1) + t184) << 2)) + t183))), u216));
                t183 = (FUN_0c0dc6e0(0x4F73));
                t183 = (FUN_0c0dcb80(u185, 1.0f, 1.0f));
                u222 = *(float *)0xC2021B0;
                if (u185 > 1.0f) {
                    u223 = u185;
                } else {
                    u223 = 1.0f;
                }
                t183 = (FUN_0c0de000((u223 * u222)));
                t183 = (FUN_0c0c465c(0x1234));
                t183 = (FUN_0c0dc4c0(0x1));
                t184 = (t184 + 0x1);
            }
            FUN_0c0dc4c0(0x1);
        }
    }
    FUN_0c0dc4c0(0x1);
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    FUN_0c0a9e94(a4, 0xC10D808);
    FUN_0c0a9edc(a4, 0xC10D8F8);
    t242 = FUN_0c0dc4c0(0x1);
    if (a4 == 0x595) {
        *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    }
    return t242;
}
