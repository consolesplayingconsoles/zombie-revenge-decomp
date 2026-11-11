/* Straight-line functions with calls and guards (batch gen_ag): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010c40(int);
int FUN_0c0111ba(int);
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
int FUN_0c0849da(void);
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
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0cec9a(int);
int FUN_0c0da2e0(void);
int FUN_0c0db0a0(int, int);
int nlPrintf(int, ...);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0dc670(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcbb0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int FUN_0c0e2a4c(int);
int _divls(void);
int _modls(int);
extern float _builtin_sqrtf(float);
int buStat(int);
int FUN_0c0afe42(int a4, float f4);
int FUN_0c0147a4(int a4);
int FUN_0c0982fc(int a4, int a5, int a6, int a7);
int FUN_0c0a9f70(int a4);
struct o45C_float { char p[0x45C]; float v; };
struct o460_float { char p[0x460]; float v; };
struct o464_float { char p[0x464]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o28_int { char p[0x28]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



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
    int R1008;
    int R1012;
    int R1016;
    int R1020;

    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);

    if (((*(int *)0xC23ED88) & 16) != 0) {
        if (((((struct o98_int *)(a4))->v)) == 0) {
            (((struct o98_uint *)(a4))->v) = 0x1;
        }
    } else {
        (((struct o94_float *)(a4))->v) = 0.5f;
        (((struct o45C_float *)((*(int *)0xC246FFC)))->v) = 0.0f;
        (((struct o460_float *)((*(int *)0xC246FFC)))->v) = 0.0f;
        (((struct o464_float *)((*(int *)0xC246FFC)))->v) = 0.0f;
    }
    if (((((struct o98_int *)(a4))->v)) == 0) {
    } else {
        t13 = (((struct o9C_int *)(a4))->v);
        (((struct o9C_uint *)(a4))->v) = (t13 + 0x1);
        if ((int)(((t13 + 0x1) - 1) - 128) < 0) {
            t14 = ((int (*)(int, float))(FUN_0c0847a2))(0x1, f4);
            FUN_0c0844dc(0xA700, 0x3600, 0x0, 0.0f);
            FUN_0c0844dc(0xA700, 0x3600, 0x1, 0.0f);
            FUN_0c08455e(0.649999976f);
            FUN_0c0847a8(0.5f, 0.5f, 0.5f);
            FUN_0c0847ce(0.0f, 0.0f, 0.0f);
            (((struct o94_float *)(a4))->v) = 1.0f;
            (((struct o45C_float *)((*(int *)0xC246FFC)))->v) = 1.0f;
            (((struct o460_float *)((*(int *)0xC246FFC)))->v) = 1.0f;
            (((struct o464_float *)((*(int *)0xC246FFC)))->v) = 1.0f;
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
            (((struct o90_float *)(a4))->v) = u45;
        } else {
            if ((((t13 + 0x1) - 1) - 128) == 100) {
                t46 = ((int (*)(int))(FUN_0c0847a2))(0x1);
                FUN_0c0847f4(0.539999962f, 0.5f);
                FUN_0c0847ce(0.459999979f, 0.899999976f, 0.979999959f);
                FUN_0c0844dc(0x5000, 0x1A00, 0x0, 0.75f);
                FUN_0c0844dc(0x5000, 0x1A00, 0x1, 0.75f);
                (((struct o98_uint *)(a4))->v) = 0x2;
            }
        }
    }
    if (!(((((struct o90_float *)(a4))->v)) > 0.0f)) {
    } else {
        u86 = 0.299999982f;
        if (((*(int *)0xC23A258) & 1) != 0) {
            u86 = 1.0f;
        }
        u88 = (((struct o90_float *)(a4))->v);
        FUN_0c0848bc((((((struct o0_float *)0xC2024C0)->v)) * ((u86 * u88))), (((((struct o4_float *)0xC2024C0)->v)) * ((u86 * u88))), (((((struct o8_float *)0xC2024C0)->v)) * ((u86 * u88))));
        FUN_0c0cbafc(0x3C9, 0x2, 0xFC007000, 0x84002000);
        R1012 = 0x0;
        R1008 = 0xC110B10;
        for (;;) {
            nlPushMatrix(0x0);
            FUN_0c0dcca0(0xC110AE4);
            nlRotateAY((R1012));
            nlPushMatrix(0x0);
            FUN_0c0dcca0((R1008));
            nlRotateAX((*(int *)(((R1008) + 0xC))));
            nlRotateAY((*(int *)(((R1008) + 0x10))));
            nlRotateAZ((*(int *)(((R1008) + 0x14))));
            FUN_0c0dcbb0(((R1008) + 0x18));
            FUN_0c0de000(1.0f);
            FUN_0c0c465c(0x3C9);
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            FUN_0c0dcca0(0xC110B34);
            nlRotateAX(((((struct o0_int *)0xC110B40)->v)));
            nlRotateAY(((((struct o4_int *)0xC110B40)->v)));
            nlRotateAZ(((((struct o8_int *)0xC110B40)->v)));
            FUN_0c0dcbb0(0xC110B4C);
            FUN_0c0de000(1.0f);
            FUN_0c0c465c(0x3C9);
            nlPopMatrix(0x1);
            nlPopMatrix(0x1);
            t131 = R1012;
            R1012 = (t131 + 0x4000);
            if ((int)(t131 + 0x4000) >= (int)0x10000) {
                break;
            }
        }
        t132 = ((int (*)(int, int, int, int, int, int, int, int))(FUN_0c0849da))(0x0, 0x0, 0x0, 0x0, R1008, R1012, R1016, R1020);
    }
    if (((((struct o94_float *)(a4))->v)) != 1.0f) {
        u143 = (((struct o94_float *)(a4))->v);
        FUN_0c0848bc(u143, u143, u143);
    }
    t154 = 0xC1107F0;
    for (;;) {
        if ((*(short *)((t154 + 0x16))) == 0) {
            break;
        }
        nlPushMatrix(0x0);
        FUN_0c0dcca0(t154);
        FUN_0c0c465c((*(short *)((t154 + 0x16))));
        nlPopMatrix(0x1);
        t154 = (t154 + 0x1C);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC110AE4);
    t163 = (((struct o9C_int *)(a4))->v);
    R1020 = (t163 - 128);
    R1012 = 0xC110AF0;
    R1008 = 0xC110AF0;
    t166 = (t163 - 128);
    t167 = 0x0;
    t168 = 0xC110AF0;
    for (;;) {
        if (((((struct o98_int *)(a4))->v)) != 2) {
            t166 = 0xC110AF0;
            R1016 = (((t167 << 2) << 1) + t166);
            FUN_0c0cbafc((*(short *)(((((t167 << 2) << 1) + t166) + 0x0))), 0x9, 0xFFFFFFFF, 0x0);
            FUN_0c0cbafc((*(short *)(((R1016) + 0x0))), 0x2, 0xC00000, 0x800000);
        } else {
            t176 = t164;
            t177 = t165;
        }
        t164 = t176;
        t165 = t177;
        t166 = 0xC0DE000;
        FUN_0c0de000(1.0f);
        t165 = (R1020);
        if ((int)t165 >= 0) {
            t188 = (*(short *)(((R1008) + 0x0)));
        } else {
            t188 = (*(short *)(((R1012) + 0x2)));
        }
        FUN_0c0c465c(t188);
        if (((((struct o98_int *)(a4))->v)) != 2) {
            FUN_0c0cbafc((*(short *)((t168 + 0x0))), 0x2, 0xC00000, 0x0);
            FUN_0c0cbafc((*(short *)((t168 + 0x0))), 0x9, 0xFFFFFFFF, 0xFFFFFFFF);
        }
        t165 = (R1012);
        t164 = 0x4;
        t167 = (t167 + 0x1);
        t165 = (t165 + 0x8);
        R1012 = t165;
        t166 = (R1008);
        t166 = (t166 + 0x8);
        R1008 = t166;
        t168 = (t168 + 0x8);
        if ((unsigned int)t167 >= (unsigned int)t164) {
            break;
        }
    }
    nlPopMatrix(0x1);
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
    int R1004;
    int R1008;
    int R1012;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R4 = a4;
    L_C0147A4:;
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F409C);
    FUN_0c0c465c(0x1413);
    FUN_0c0c465c(0x141C);
    FUN_0c0c465c(0x13B0);
    R11 = (0xC23EAEC);
    R14 = (0xC0C465C);
    if ((((((struct o28_int *)0xC23EAC4)->v)) == 10)) goto L_C0147F4;
    goto L_C0147E8;
    L_C0147E8:;
    if (((*(int *)((R11 + 0x0))) == 2)) goto L_C0147F4;
    goto L_C0147EE;
    L_C0147EE:;
    FUN_0c0c465c(0x141E);
    goto L_C0147F4;
    L_C0147F4:;
    (((struct o0_uint *)0xC23EAC4)->v) = (FUN_0c0146f0(((((struct o0_int *)0xC23EAC4)->v)), 0xC1EF2E0, (((int)stk + 4) + 0xC), ((((struct o8_int *)0xC23EAC4)->v))));
    nlPushMatrix(0x0);
    FUN_0c0c475c(0x1427, ((((struct o3C_float *)0xC23EAC4)->v)));
    FUN_0c0c475c(0x1425, ((((struct o3C_float *)0xC23EAC4)->v)));
    FUN_0c0dcc70(0.0f, 0.699999988f, 0.0f);
    R1004 = (((int)stk + 4) + 0xC);
    R1008 = (((int)stk + 4) + 0xF);
    R12 = (0xC23EAC4);
    R13 = (0xC0DCC70);
    R8 = ((((int)stk + 4) + 0xC));
    R9 = (0x1417);
    F13 = (0.699999988f);
    F14 = (-0.699999988f);
    F15 = (0.0f);
    goto L_C01486E;
    L_C01486E:;
    if (((unsigned int)R8 < (unsigned int)(R1008))) goto L_C014844;
    goto L_C014874;
    L_C014874:;
    nlPopMatrix(0x1);
    (((struct o4_uint *)0xC23EAC4)->v) = (FUN_0c0146f0(((((struct o4_int *)0xC23EAC4)->v)), 0xC23EB5B, (((int)stk + 4) + 0xC), (((((struct o8_int *)0xC23EAC4)->v)) ^ 0x1)));
    nlPushMatrix(0x0);
    FUN_0c0dcc70(3.5f, F13, F15);
    R1012 = (R1004);
    R10 = (0xC23EB5B);
    R8 = (0xC23EAC8);
    F12 = (3.5f);
    goto L_C01493A;
    L_C01493A:;
    if (((unsigned int)(R1012) < (unsigned int)(R1008))) goto L_C014904;
    goto L_C014942;
    L_C014942:;
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    if ((((((struct o8_int *)0xC23EAC4)->v)) == 0)) goto L_C01495E;
    goto L_C014956;
    L_C014956:;
    FUN_0c0dcc70(F12, F15, F15);
    goto L_C01495E;
    L_C01495E:;
    FUN_0c0c465c(0x140F);
    FUN_0c0c465c(0x1410);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    if ((((((struct o8_int *)0xC23EAC4)->v)) == 0)) goto L_C014984;
    goto L_C01497E;
    L_C01497E:;
    FUN_0c0dc670();
    goto L_C014984;
    L_C014984:;
    FUN_0c0c465c(0x1426);
    FUN_0c0c465c(0x1424);
    nlPopMatrix(0x1);
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
    (((struct o8_uint *)0xC23EAC4)->v) = (((((struct o8_int *)0xC23EAC4)->v)) ^ 0x1);
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
    return (nlPopMatrix(0x1));
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
    if ((((((struct o8_int *)0xC23EAC4)->v)) != 0)) goto L_C014B78;
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
    FUN_0c0cc3f8(0x28A9, 0x0, 0x0, 0x0);
    (((struct o38_uint *)0xC23EAC4)->v) = R9;
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
    if ((((((struct o8_int *)0xC23EB14)->v)) != 10)) goto L_C014A56;
    goto L_C014A50;
    L_C014A50:;
    R4 = (0xC0F45BC);
    goto L_C014A58;
    L_C014A58:;
    FUN_0c0dcca0(R4);
    FUN_0c0154c0(((((struct oC_int *)0xC23EB14)->v)), 0x0, 0x1);
    if ((((((struct o8_int *)0xC23EB14)->v)) == 9)) goto L_C014A74;
    goto L_C014A70;
    L_C014A70:;
    goto L_C014C2A;
    L_C014A74:;
    if ((((((struct o0_int *)0xC23EB14)->v)) == 0)) goto L_C014AC0;
    goto L_C014A7C;
    L_C014A7C:;
    if (((int)((((struct o10_int *)0xC23EB14)->v)) < 0)) goto L_C014AC0;
    goto L_C014A84;
    L_C014A84:;
    FUN_0c0111ba(((((struct o1C_int *)0xC23EAC4)->v)));
    FUN_0c0e2a4c(((((struct o0_int *)0xC23EB14)->v)));
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
    t153 = (buStat(((((struct oC_int *)0xC23EB14)->v)))) == 0;
    if (t153) goto L_C014A30;
    goto L_C014A2C;
    L_C014A2C:;
    goto L_C014C2A;
    L_C014A30:;
    FUN_0c015436(((((struct oC_int *)0xC23EB14)->v)), 0x0);
    if (((int)((((struct o10_int *)0xC23EB14)->v)) < 0)) goto L_C014AC0;
    goto L_C014A40;
    L_C014A40:;
    *(unsigned int *)((R11 + 0x0)) = ((*(int *)((R11 + 0x0))) + 0x1);
    goto L_C014C2A;
    L_C0149C4:;
    *(unsigned int *)((R8 + 0x0)) = 0x1;
    *(unsigned int *)((R12 + 0x0)) = 0x1;
    t159 = (((struct o24_int *)0xC23EB14)->v);
    (((struct oC_uint *)0xC23EB14)->v) = t159;
    FUN_0c0cec9a(t159);
    *(unsigned int *)0xC52314C = R9;
    (((struct o1C_uint *)0xC23EAC4)->v) = R9;
    *(unsigned int *)((R11 + 0x0)) = 0x1;
    goto L_C014C2A;
    L_C014904:;
    t161 = R1012;
    R1012 = (t161 + 0x1);
    t162 = *(signed char *)((((t161 + 0x1) - 1) + 0x0));
    R1004 = t162;
    R3 = (t162);
    if (((int)t162 < 0)) goto L_C014932;
    goto L_C014914;
    L_C014914:;
    FUN_0c0c465c((*(int *)(((R3 << 2) + 0xC0F4568))));
    R1004 = (*(signed char *)((R10 + (R1004))));
    FUN_0c0c465c(R9);
    FUN_0c0c465c((*(int *)((((R1004) << 2) + 0xC0F4540))));
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


