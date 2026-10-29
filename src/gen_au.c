/* Straight-line functions with calls and guards (batch gen_au): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f172(int);
int FUN_0c040266(int);
int FUN_0c041dd0(int);
int FUN_0c041f2a(int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c05473c(int, int, int, int);
int FUN_0c058e7c(int, int);
int FUN_0c069e28(void);
int FUN_0c069fba(int, int);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c096d6c(void);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0bb0f4(int);
extern int FUN_0c0c0340();
int FUN_0c0c465c(int);
int FUN_0c0c46cc(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0c8d06(int);
int FUN_0c0c932c(int, int, int, int, int, int, float, float, float, float);
int FUN_0c0ca862(int);
int FUN_0c0cf392(int);
int FUN_0c0d8c40(int, int, int);
int FUN_0c0d9ca0(float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int nlMultiMatrixRevOrder(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0dc5a0(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e57d0(int, float, float, float);
int _quick_odd_mvn(int);
int FUN_0c9de360(void);
extern float _builtin_sqrtf(float);
int FUN_0c06a1d8(int a4, int a5, float f4);
int FUN_0c04045c(int a4);
int FUN_0c0598e4(int a4);
int FUN_0c0c6ef4(int a4, int a5, int a6, int a7);
int FUN_0c0553b6(int a4, int a5, int a6);
int FUN_0c029646(int a4, int a5, int a6);
int FUN_0c0b5030(int a4, float f4);
float FUN_0c0278d0(int a4, int a5);
int FUN_0c08bb20(int a4, int a5, int a6, int a7);
int FUN_0c0a1c76(int a4);

int FUN_0c06a1d8(int a4, int a5, float f4)
{
    int t0;
    int t7;
    float u12;
    int t37;
    int t40;
    float u49;
    float u50;
    int stk[13];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R11;
    int R12;
    int R13;
    int R14;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    F4 = f4;
    L_C06A1D8:;
    t0 = *(int *)0xC23ED50;
    R0 = (t0);
    R14 = (R4);
    if ((t0 == 48)) goto L_C06A212;
    goto L_C06A1F6;
    L_C06A1F6:;
    if ((R0 == 49)) goto L_C06A212;
    goto L_C06A1FA;
    L_C06A1FA:;
    if ((R0 == 47)) goto L_C06A220;
    goto L_C06A1FE;
    L_C06A1FE:;
    if ((R0 != 43)) goto L_C06A206;
    goto L_C06A202;
    L_C06A202:;
    goto L_C06A386;
    L_C06A386:;
    t7 = *(int *)0xC23A258;
    R4 = (t7);
    R5 = (0xC247C54);
    if (((*(int *)0xC247C54) == t7)) goto L_C06A3BE;
    goto L_C06A392;
    L_C06A392:;
    *(unsigned int *)((R5 + 0x0)) = R4;
    u12 = *(float *)0xC20A268;
    *(float *)0xC20A268 = (u12 + 0.0699999928f);
    R4 = (0xC20A268);
    F4 = ((u12 + 0.0699999928f));
    F5 = (1.0f);
    if ((!((u12 + 0.0699999928f) > 1.0f))) goto L_C06A3B0;
    goto L_C06A3A8;
    L_C06A3A8:;
    *(float *)((R4 + 0x0)) = ((*(float *)((R4 + 0x0))) - F5);
    goto L_C06A3BE;
    L_C06A3BE:;
    if (((*(int *)((R14 + 0x0))) != 0xF38)) goto L_C06A3D4;
    goto L_C06A3C6;
    L_C06A3C6:;
    R0 = ((FUN_0c0c475c((*(int *)((R14 + 0x0))), 0.299999982f)));
    goto L_C06A3E4;
    L_C06A3E4:;
    return R0;
    L_C06A3D4:;
    R0 = ((FUN_0c0ca862(R14)));
    goto L_C06A3E4;
    L_C06A3B0:;
    if ((!((-1.0f) > F4))) goto L_C06A3BE;
    goto L_C06A3B8;
    L_C06A3B8:;
    *(float *)((R4 + 0x0)) = ((*(float *)((R4 + 0x0))) + F5);
    goto L_C06A3BE;
    L_C06A206:;
    if ((R0 != 44)) goto L_C06A20E;
    goto L_C06A20A;
    L_C06A20A:;
    goto L_C06A386;
    L_C06A20E:;
    goto L_C06A3DE;
    L_C06A3DE:;
    R0 = ((FUN_0c0ca862(R14)));
    goto L_C06A3E4;
    L_C06A220:;
    if ((R5 != 0)) goto L_C06A228;
    goto L_C06A224;
    L_C06A224:;
    goto L_C06A366;
    L_C06A366:;
    FUN_0c0848d6(0.939999998f, 0.849999964f, 0.519999981f);
    FUN_0c0c465c((*(int *)((R14 + 0x0))));
    R0 = ((FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12))));
    goto L_C06A3E4;
    L_C06A228:;
    FUN_0c069e28();
    t37 = *(int *)((R14 + 0x0));
    t40 = *(int *)(((((t37 << 1) + t37) << 2) + 0xC2623A0));
    R0 = (0xC2623A0);
    R11 = ((*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC))));
    R13 = (t40);
    if ((t40 != 0)) goto L_C06A24C;
    goto L_C06A248;
    L_C06A248:;
    goto L_C06A3E4;
    L_C06A24C:;
    nlPushMatrix(0x0);
    nlMultiMatrixRevOrder((0x2EC + R11));
    FUN_0c0db470((R13 + 0x8), ((int)stk + 4));
    nlPopMatrix(0x1);
    u49 = *(float *)(((int)stk + 12));
    u50 = *(float *)0xC247C44;
    nlPushMatrix(0x0);
    FUN_0c0dbda0((0x2AC + R11));
    R12 = (0xC247C44);
    R13 = (((int)(((u49 - u50) + -4950.0f) / -100.0f) - 50));
    F12 = (100.0f);
    F13 = (-50.0f);
    F14 = (75.0f);
    F15 = (0.0f);
    F5 = (75.0f);
    F6 = ((((*(float *)0xC247C44) - ((float)((int)(((u49 - u50) + -4950.0f) / -100.0f) - 50) * 100.0f)) + -50.0f));
    if (((int)((*(int *)0xC247C3C) - ((int)(((u49 - u50) + -4950.0f) / -100.0f) - 50)) >= (int)0x10)) goto L_C06A310;
    goto L_C06A2BE;
    L_C06A2BE:;
    F3 = (1000.0f);
    goto L_C06A312;
    L_C06A312:;
    FUN_0c0e57d0(0x0, (F3 + F15), F5, F6);
    F5 = (F14);
    F6 = ((((*(float *)((R12 + 0x0))) - ((float)(R13 + 0x1) * F12)) + F13));
    if (((int)(((*(int *)0xC247C3C) - R13) - 1) >= (int)0x10)) goto L_C06A344;
    goto L_C06A33E;
    L_C06A33E:;
    F3 = (1000.0f);
    goto L_C06A346;
    L_C06A346:;
    FUN_0c0e57d0(0x1, (F3 + F15), F5, F6);
    FUN_0c9de360();
    nlPopMatrix(0x1);
    R0 = ((FUN_0c0c46cc((*(int *)((R14 + 0x0))))));
    goto L_C06A3E4;
    L_C06A344:;
    F3 = (F15);
    goto L_C06A346;
    L_C06A310:;
    F3 = (0.0f);
    goto L_C06A312;
    L_C06A212:;
    FUN_0c069fba(R4, R5);
    R0 = ((FUN_0c0c465c((*(int *)((R14 + 0x0))))));
    goto L_C06A3E4;
}

int FUN_0c04045c(int a4)
{
    int t0;
    int t12;
    int t14;
    int t16;
    int t19;
    int t21;
    int t36;
    float u43;
    float u47;
    int t70;

    t0 = *(int *)((a4 + 0x4EC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    *(float *)(((0x48 + a4) + 0x0)) = ((*(float *)(((0x48 + a4) + 0x0))) - ((FUN_0c0da410(((*(short *)((a4 + 0x6E))) + 0x8000))) * 0.571428537f));
                    *(float *)(((0x50 + a4) + 0x0)) = ((*(float *)(((0x50 + a4) + 0x0))) - ((FUN_0c0d9e90(((*(short *)((a4 + 0x6E))) + 0x8000))) * 0.571428537f));
                    *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) - 390);
                    if (64.0f > _builtin_fabsf((float)((*(short *)((a4 + 0x6E))) - 16384))) {
                        *(unsigned short *)((a4 + 0x6E)) = 0x4000;
                        *(unsigned int *)((a4 + 0x4E0)) = ((*(int *)((a4 + 0x4E0))) + 0x1);
                        *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                        FUN_0c041dd0(a4);
                        *(unsigned int *)((a4 + 0x2D4)) = 0x2;
                        return 0x2D4;
                    }
                    t12 = *(int *)((a4 + 0x2EC));
                    if ((t12 & 12) != 0) {
                        return FUN_0c041dd0(a4);
                    }
                    return t12;
                }
                if (t0 == 4) {
                    FUN_0c041f2a(a4);
                    t14 = *(int *)((a4 + 0x2CC));
                    t16 = t14;
                    if (t14 == 1) {
                        *(float *)((a4 + 0x26C)) = 0.0333333313f;
                        *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                        t16 = 0x4EC;
                    }
                    return t16;
                }
                if (t0 == 5) {
                    t19 = FUN_0c040266(a4);
                    t21 = t19;
                    if (t19 != 0) {
                        *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                        t21 = 0x4EC;
                    }
                    return t21;
                }
                if (t0 == 6) {
                    return FUN_0c041f2a(a4);
                }
                return t0;
            }
            if ((*(int *)((a4 + 0x4E0))) == 2) {
                if (!(75.0f > (*(float *)((a4 + 0x38))))) {
                    *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + ((-(*(float *)(((0x38 + a4) + 0x0)))) + 75.0f));
                    *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                }
                t36 = *(int *)((a4 + 0x2EC));
                if ((t36 & 12) != 0) {
                    return FUN_0c041dd0(a4);
                }
                return t36;
            }
            return FUN_0c041f2a(a4);
        }
        *(float *)((a4 + 0x26C)) = ((*(float *)((a4 + 0x26C))) - 0.049999997f);
        *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + ((*(float *)(((0x26C + a4) + 0x0))) + 0.5f));
        u43 = (*(float *)(((a4 + 0x50) + 0x0)));
        u43 = u43 + 0.5f * (FUN_0c0d9e90(((*(short *)((a4 + 0x6E))) + 0x8000)));
        *(float *)(((a4 + 0x50) + 0x0)) = u43;
        u47 = (*(float *)(((a4 + 0x48) + 0x0)));
        u47 = u47 + 0.5f * (FUN_0c0da410(((*(short *)((a4 + 0x6E))) + 0x8000)));
        *(float *)(((a4 + 0x48) + 0x0)) = u47;
        if (110.0f > (*(float *)((a4 + 0x34)))) {
            *(unsigned int *)((a4 + 0x4E0)) = ((*(int *)((a4 + 0x4E0))) + 0x1);
            *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
            *(float *)((a4 + 0x34)) = 110.0f;
            *(float *)((a4 + 0x4C)) = 0.0f;
            FUN_0c041dd0(a4);
        }
        if ((*(int *)((a4 + 0x4E0))) == 2) {
            if (!(75.0f > (*(float *)((a4 + 0x38))))) {
                *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + ((-(*(float *)(((0x38 + a4) + 0x0)))) + 75.0f));
                *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
            }
            t70 = *(int *)((a4 + 0x2EC));
            if ((t70 & 12) != 0) {
                return FUN_0c041dd0(a4);
            }
            return t70;
        }
        return FUN_0c041f2a(a4);
    }
    FUN_0c041f2a(a4);
    *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
    *(float *)((a4 + 0x26C)) = 0.0333333313f;
    return 0x26C;
}


int FUN_0c0c6ef4(int a4, int a5, int a6, int a7)
{
    int t0;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u17;
    float u19;
    int t21;
    int t22;
    int t23;
    float u25;
    float u26;
    int t27;
    int t28;
    int t30;
    float u32;
    float u84;
    float u85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t95;
    int t101;
    int t1;
    int t2;
    int t3;
    int t24;
    float u39;
    float u40;
    float u93;
    int stk[21];

    t0 = *(int *)((a4 + 0x10C));
    *(unsigned int *)((a4 + 0x10C)) = (t0 - 1);
    if (((int)(t0 - 1) >= 0) && (t1 = *(int *)((a4 + 0x30)), t2 = *(int *)((a4 + 0xCC)), t3 = *(int *)((t1 + 0xDC)), (int)t3 <= (int)t2)) {
    } else {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    FUN_0c0db470((a4 + 0x6C), (((int)stk + 8) + 0x10));
    u11 = *(float *)(((int)stk + 32));
    if (!(u11 > -100.0f)) {
    } else {
        if (5.0f > u11) {
            u12 = *(float *)((a4 + 0xF8));
            u13 = *(float *)((a4 + 0xFC));
            u14 = *(float *)0xC247D10;
            u15 = *(float *)(((int)stk + 28));
            *(unsigned int *)(((int)stk + 8)) = (0xD0 + a4);
            u17 = ((u15 + 5.0f) / (u14 * u11));
            u19 = 293.0f;
            u19 = u19 + 320.0f * ((*(float *)(((int)stk + 24))) / ((*(float *)0xC247D0C) * u11));
            *(float *)((a4 + 0x38)) = u19;
            *(float *)((a4 + 0x40)) = (-(*(float *)(((int)stk + 32))));
            *(float *)(((int)stk + 20)) = (u13 * (1.0f + 1.0f));
            *(float *)(((int)stk + 16)) = (u12 * 0.5f);
            *(float *)(((int)stk + 12)) = (u13 * 0.5f);
            t21 = 0x4;
            t22 = (a4 + 0x78);
            t23 = (0x100 + a4);
            u25 = u19;
            u26 = (u13 * (1.0f + 1.0f));
            for (;;) {
                t27 = *(signed char *)((t23 + 0x0));
                t23 = (t23 + 0x1);
                if ((signed char)t27 == 0) {
                    break;
                }
                t28 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = (t28 + 0x4);
                u26 = (*(float *)((((t28 + 0x4) - 4) + 0x0)));
                *(float *)(((int)stk + 4)) = u26;
                t30 = *(int *)((t22 + 0x0));
                t22 = (t22 + 0x4);
                u25 = u26;
                t21 = 0x3C;
                u26 = ((-(u17 * 240.0f)) + 240.0f);
                t24 = (signed char)t27;
                u32 = u26;
                u32 = u32 + (FUN_0c0d9e90(t30)) * u25;
                u26 = u32;
                *(float *)((a4 + t21)) = u26;
                t21 = t24;
                if (t21 != 32) {
                    t21 = (signed char)t27;
                    t21 = (t21 << 1);
                    *(unsigned int *)((a4 + 0x34)) = (*(short *)((0xC1E87BA + t21)));
                    if ((int)t24 <= (int)0x41) {
                        t21 = 0x44;
                        *(float *)((a4 + t21)) = (u12 * (1.0f + 1.0f));
                        t21 = 0xC;
                        u26 = (*(float *)((((int)stk + 8) + t21)));
                    } else {
                        t21 = 0x8;
                        u26 = (*(float *)((((int)stk + 8) + t21)));
                        t21 = 0x44;
                        *(float *)((a4 + t21)) = u26;
                        t21 = 0x4;
                        u26 = (*(float *)((((int)stk + 8) + t21)));
                    }
                    t21 = 0x48;
                    *(float *)((a4 + t21)) = u26;
                    t21 = (FUN_0c0c0340((a4 + 0x34)));
                } else {
                    u39 = u25;
                    u40 = u26;
                }
                u25 = u39;
                u26 = u40;
                if ((int)t24 <= (int)0x41) {
                    t21 = 0x38;
                    u26 = (*(float *)((a4 + t21)));
                    u26 = (u26 + 18.0f);
                } else {
                    t21 = 0x38;
                    u26 = (*(float *)((a4 + t21)));
                    u26 = (u26 + 9.0f);
                }
                *(float *)((a4 + t21)) = u26;
            }
        }
    }
    u84 = *(float *)0xC0C716C;
    u85 = *(float *)0xC0C7174;
    t86 = (0xD0 + a4);
    t87 = (a4 + 0x78);
    t88 = (0xA0 + a4);
    t89 = 0xA;
    for (;;) {
        if ((int)(*(int *)((t87 + 0x0))) <= (int)0x2BFFF) {
            u93 = ((*(float *)((t86 + 0x0))) * u84);
        } else {
            u93 = ((*(float *)((t86 + 0x0))) * u85);
        }
        t89 = (t89 - 1);
        *(float *)((t86 + 0x0)) = u93;
        t95 = *(int *)((t88 + 0x0));
        t88 = (t88 + 0x4);
        t86 = (t86 + 0x4);
        *(unsigned int *)((t87 + 0x0)) = ((*(int *)((t87 + 0x0))) + t95);
        t87 = (t87 + 0x4);
        if (t89 == 0) {
            break;
        }
    }
    t101 = 0x10C;
    if ((int)(*(int *)((a4 + 0x10C))) <= (int)0x14) {
        *(float *)((a4 + 0xF8)) = ((*(float *)((a4 + 0xF8))) * 1.19999993f);
        *(float *)((a4 + 0xFC)) = ((*(float *)((a4 + 0xFC))) * 0.699999988f);
        t101 = 0xFC;
    }
    return t101;
}


int FUN_0c029646(int a4, int a5, int a6)
{
    int t11;
    int t19;
    int t24;
    int t60;
    int t61;
    int t69;
    int t62;
    int t64;
    int t74;
    int t75;
    int t83;
    int t76;
    int t78;
    int t54;
    int t32;
    int stk[24];

    *(unsigned int *)(((int)stk + 4)) = a5;
    FUN_0c0dc5a0();
    nlRotateAY(((*(short *)((a4 + 0x222))) + (*(short *)((a4 + 0x228)))));
    nlRotateAX(((*(short *)((a4 + 0x220))) + (*(short *)((a4 + 0x226)))));
    nlRotateAZ((*(short *)((a4 + 0x22A))));
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x30) + 0x4);
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x30);
    FUN_0c0a79fa((((int)stk + 4) + 0x30), ((((int)stk + 4) + 0x30) + 0x4), ((((int)stk + 4) + 0x30) + 0x8));
    nlPopMatrix(0x1);
    t11 = *(int *)(((int)stk + 4));
    if (t11 != 0) {
        if (t11 != 1) {
            t19 = t11;
            if (t11 != 2) {
            } else {
                t19 = (FUN_0c0a7714((((int)stk + 4) + 0x3C), ((((int)stk + 4) + 0x3C) + 0x4), ((*(float *)((a4 + 0x22C))) - (*(float *)((a4 + 0x518)))), ((*(float *)((a4 + 0x230))) - (*(float *)((a4 + 0x51C)))), ((*(float *)((a4 + 0x234))) - (*(float *)((a4 + 0x520))))));
            }
            t32 = t19;
        } else {
            t24 = *(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0));
            t32 = (FUN_0c0a7714((((int)stk + 4) + 0x3C), ((((int)stk + 4) + 0x3C) + 0x4), ((*(float *)((a4 + 0x22C))) - (*(float *)((t24 + 0x30)))), ((*(float *)((a4 + 0x230))) - (*(float *)((t24 + 0x34)))), ((*(float *)((a4 + 0x234))) - (*(float *)((t24 + 0x38))))));
        }
        t54 = t32;
    } else {
        nlPushMatrix(0x0);
        nlUnitMatrix();
        nlRotateAY((*(short *)((a4 + 0x228))));
        nlRotateAX((*(short *)((a4 + 0x226))));
        nlRotateAZ((*(short *)((a4 + 0x22A))));
        *(float *)(((int)stk + 28)) = 0.0f;
        *(float *)(((int)stk + 32)) = 0.0f;
        *(float *)(((int)stk + 36)) = 1.0f;
        FUN_0c0db470((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
        *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 16)));
        *(float *)((((((int)stk + 4) + 0x24) + 0x4) + 0x0)) = (*(float *)(((int)stk + 20)));
        *(float *)((((((int)stk + 4) + 0x24) + 0x8) + 0x0)) = (*(float *)(((int)stk + 24)));
        nlPopMatrix(0x1);
        t54 = (FUN_0c0a7714((((int)stk + 4) + 0x3C), ((((int)stk + 4) + 0x3C) + 0x4), (*(float *)(((((int)stk + 4) + 0x24) + 0x0))), (*(float *)(((((int)stk + 4) + 0x24) + 0x4))), (*(float *)(((((int)stk + 4) + 0x24) + 0x8)))));
    }
    t60 = *(int *)(((*(int *)(((int)stk + 8))) + 0x0));
    t61 = *(int *)(((((int)stk + 4) + 0x3C) + 0x4));
    t69 = t54;
    if (_builtin_fabsf((float)(short)(t61 - t60)) > (float)a6) {
        if (((int)(short)(t61 - t60) < (int)0x8000) && ((int)(short)(t61 - t60) > 0)) {
            t62 = *(short *)((a4 + 0x222));
            *(unsigned short *)((a4 + 0x222)) = (t62 + a6);
            if ((int)(short)(t62 + a6) > (int)0x1C00) {
                *(unsigned short *)((a4 + 0x222)) = 0x1C00;
            }
        } else {
            t64 = *(short *)((a4 + 0x222));
            *(unsigned short *)((a4 + 0x222)) = (t64 - a6);
            if ((int)(short)(t64 - a6) < (int)0xFFFFE400) {
                *(unsigned short *)((a4 + 0x222)) = 0xFFFFE400;
            }
        }
        t69 = 0x222;
    }
    t74 = *(int *)(((((int)stk + 4) + 0x3C) + 0x0));
    t75 = *(int *)(((*(int *)(((int)stk + 12))) + 0x0));
    t83 = t69;
    if (_builtin_fabsf((float)(short)(t74 - t75)) > (float)a6) {
        if (((int)(short)(t74 - t75) < (int)0x8000) && ((int)(short)(t74 - t75) > 0)) {
            t76 = *(short *)((a4 + 0x220));
            *(unsigned short *)((a4 + 0x220)) = (t76 + a6);
            if ((int)(short)(t76 + a6) > (int)0x1000) {
                *(unsigned short *)((a4 + 0x220)) = 0x1000;
            }
        } else {
            t78 = *(short *)((a4 + 0x220));
            *(unsigned short *)((a4 + 0x220)) = (t78 - a6);
            if ((int)(short)(t78 - a6) < (int)0xFFFFF000) {
                *(unsigned short *)((a4 + 0x220)) = 0xFFFFF000;
            }
        }
        t83 = 0x220;
    }
    return t83;
}

int FUN_0c0b5030(int a4, float f4)
{
    int t0;
    int t8;
    int t14;
    int t15;
    int t16;
    int t17;
    int t36;
    float u47;
    float u40;
    int t50;
    float t51;
    int t56;
    int t61;
    int t75;
    int t88;
    int t89;
    int t102;

    t0 = *(int *)((a4 + 0x44));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    if ((int)(*(int *)((a4 + 0x50))) < (int)0xA) {
                        *(float *)0xC203FF4 = ((float)(*(int *)((a4 + 0x50))) / 10.0f);
                    }
                    t8 = *(int *)((a4 + 0x50));
                    *(unsigned int *)((a4 + 0x50)) = (t8 - 1);
                    if ((int)(t8 - 1) <= 0) {
                        *(unsigned int *)((a4 + 0x50)) = 0xC;
                        *(unsigned int *)((a4 + 0x44)) = ((*(int *)((a4 + 0x44))) + 0x1);
                        *(float *)0xC203FF4 = 0.0f;
                    }
                    t14 = ((int (*)(int, float))(FUN_0c0c0340))(0xC203FC8, f4);
                } else {
                    if (t0 == 4) {
                        t15 = ((int (*)(int, float))(FUN_0c0c0340))(0xC203FC8, f4);
                        t16 = *(int *)((a4 + 0x58));
                        *(unsigned int *)((a4 + 0x58)) = (t16 - 12);
                        *(unsigned int *)((a4 + 0x5C)) = ((((t16 - 12) << 16) | ((t16 - 12) << 8)) | (t16 - 12));
                        t17 = *(int *)((a4 + 0x50));
                        *(unsigned int *)((a4 + 0x50)) = (t17 - 1);
                        if ((int)(t17 - 1) <= 0) {
                            *(unsigned int *)((a4 + 0x40)) = ((*(int *)((a4 + 0x40))) + 0x1);
                        }
                    }
                }
            } else {
                nlPushMatrix(0x0);
                nlUnitMatrix();
                FUN_0c0dcc70(-0.0199999996f, 0.429999977f, -23.9799995f);
                nlRotateAX(0x8000);
                t36 = *(int *)((a4 + 0x50));
                u47 = ((-((float)(t36 - 112) / 16.0f)) + 1.0f);
                if ((int)t36 > (int)0x70) {
                } else {
                    u40 = 1.0f;
                    if ((int)t36 < (int)0x8) {
                        u40 = ((float)t36 * 0.125f);
                    }
                    u47 = u40;
                }
                t50 = (*(int *)0xC23A258);
                t51 = FUN_0c0da410(((t36 << 8) + 0x4000));
                FUN_0c0c932c(0xC111C18, 0xC111C18, 0x3A3, t50, 0x8000, 0x8000, 0.0f, t51, u47, 1.0f);
                nlPopMatrix(0x1);
                if ((int)(*(int *)((a4 + 0x50))) < (int)0x8) {
                    *(float *)0xC203FF4 = ((-((float)(*(int *)((a4 + 0x50))) * 0.125f)) + 1.0f);
                    t56 = ((int (*)(int))(FUN_0c0c0340))(0xC203FC8);
                }
                t61 = *(int *)((a4 + 0x50));
                *(unsigned int *)((a4 + 0x50)) = (t61 - 1);
                if ((int)(t61 - 1) <= 0) {
                    *(unsigned int *)((a4 + 0x50)) = 0xE1;
                    *(unsigned int *)((a4 + 0x44)) = ((*(int *)((a4 + 0x44))) + 0x1);
                    *(float *)0xC203FF4 = 1.0f;
                }
            }
        } else {
            t75 = *(int *)((a4 + 0x50));
            *(unsigned int *)((a4 + 0x50)) = (t75 - 1);
            if ((int)(t75 - 1) > 0) {
            } else {
                *(unsigned int *)((a4 + 0x50)) = 0x80;
                *(unsigned int *)((a4 + 0x44)) = ((*(int *)((a4 + 0x44))) + 0x1);
            }
        }
    } else {
        t88 = *(int *)((a4 + 0x58));
        *(unsigned int *)((a4 + 0x58)) = (t88 + 0xC);
        *(unsigned int *)((a4 + 0x5C)) = ((((t88 + 0xC) << 16) | ((t88 + 0xC) << 8)) | (t88 + 0xC));
        t89 = *(int *)((a4 + 0x50));
        *(unsigned int *)((a4 + 0x50)) = (t89 - 1);
        if ((int)(t89 - 1) > 0) {
        } else {
            *(unsigned int *)((a4 + 0x50)) = 0x1;
            *(unsigned int *)((a4 + 0x44)) = ((*(int *)((a4 + 0x44))) + 0x1);
        }
    }
    t102 = *(int *)((a4 + 0x5C));
    return FUN_0c0d8c40(t102, t102, t102);
}

float FUN_0c0278d0(int a4, int a5)
{
    int t8;
    float u70;
    float u71;
    float u72;
    float u73;
    float u74;
    float u75;
    float u76;
    float u77;
    int t0;
    int t29;
    int t30;
    int t20;
    int t21;
    int stk[24];

    *(float *)(((((int)stk + 4) + 0x28) + 0x0)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0x28) + 0x4)) = 3.0f;
    *(float *)(((((int)stk + 4) + 0x28) + 0x8)) = -15.0f;
    if ((a5 != 0) && (t0 = *(int *)((a4 + 0x50C)), t0 != 0)) {
        if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x510))) << 2)))) == 4) {
            t8 = *(int *)(((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0) + 0x0));
            FUN_0c0a7714((((int)stk + 4) + 0x8), (((int)stk + 4) + 0xC), ((*(float *)((a4 + 0x24C))) - (*(float *)((t8 + 0x30)))), ((*(float *)((a4 + 0x250))) - (*(float *)((t8 + 0x34)))), ((*(float *)((a4 + 0x254))) - (*(float *)((t8 + 0x38)))));
            t20 = ((*(int *)(((int)stk + 12))) + 0x1000);
            t21 = (*(int *)(((int)stk + 16)));
        } else {
            t20 = 0xFFFFE800;
            t21 = (*(int *)((a4 + 0x52C)));
        }
        t29 = t20;
        t30 = t21;
    } else {
        t29 = 0xFFFFE800;
        t30 = (*(int *)((a4 + 0x52C)));
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70((*(float *)((a4 + 0x24C))), (*(float *)((a4 + 0x250))), (*(float *)((a4 + 0x254))));
    nlRotateAY(t30);
    *(float *)(((int)stk + 32)) = (*(float *)(((((int)stk + 4) + 0x28) + 0x0)));
    *(float *)(((int)stk + 36)) = (*(float *)(((((int)stk + 4) + 0x28) + 0x4)));
    *(float *)(((int)stk + 40)) = (*(float *)(((((int)stk + 4) + 0x28) + 0x8)));
    FUN_0c0db470((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10));
    *(float *)(((0x518 + a4) + 0x0)) = (*(float *)(((int)stk + 20)));
    *(float *)(((0x51C + a4) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((0x520 + a4) + 0x0)) = (*(float *)(((int)stk + 28)));
    nlPopMatrix(0x1);
    *(unsigned int *)((a4 + 0x514)) = 0x1;
    *(float *)(((((int)stk + 4) + 0x34) + 0x8)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0x34) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0x34) + 0x0)) = 0.0f;
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((a4 + 0x518))) - (*(float *)((a4 + 0x30)))), ((*(float *)((a4 + 0x51C))) - (*(float *)((a4 + 0x34)))), ((*(float *)((a4 + 0x520))) - (*(float *)((a4 + 0x38)))));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0299999993f;
    FUN_0c0db470((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10));
    *(float *)(((0x4B0 + a4) + 0x0)) = (*(float *)(((int)stk + 20)));
    *(float *)(((0x4B4 + a4) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((0x4B8 + a4) + 0x0)) = (*(float *)(((int)stk + 28)));
    nlPopMatrix(0x1);
    FUN_0c0546fe(a4, t30, 0x80, 0x1);
    FUN_0c05473c(a4, t29, 0x80, 0x1);
    u70 = *(float *)((a4 + 0x30));
    u71 = *(float *)((a4 + 0x518));
    u72 = *(float *)((a4 + 0x34));
    u73 = *(float *)((a4 + 0x51C));
    u74 = *(float *)((a4 + 0x38));
    u75 = *(float *)((a4 + 0x520));
    u76 = ((u73 - u72) * (u73 - u72));
    u76 = u76 + (u71 - u70) * (u71 - u70);
    u77 = u76;
    u77 = u77 + (u75 - u74) * (u75 - u74);
    
    return (u75 - u74);
}

int FUN_0c08bb20(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t3;
    int t29;
    int t36;
    float u68;
    float u69;
    int t89;
    int t95;
    int t102;
    float u122;
    float u124;
    float u125;
    int t145;
    int t157;
    float u63;
    float u25;
    int t148;

    t0 = *(int *)((a4 + 0x50));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                t2 = *(int *)((a4 + 0x54));
                *(unsigned int *)((a4 + 0x54)) = (t2 + 0x1);
                t3 = *(int *)((a4 + 0x60));
                if ((int)(t2 + 0x1) < (int)(((int)((unsigned int)((int)((unsigned int)t3 + (unsigned int)0x0)) + ((((int)0x0 > (int)t3)) ? 1u : 0u))) >> 1)) {
                    *(float *)((a4 + 0x3C)) = ((*(float *)((a4 + 0x3C))) - (*(float *)(((0x44 + a4) + 0x0))));
                } else {
                    FUN_0c0e19f2(a4, a5, a6, a7);
                }
                u25 = ((*(float *)((a4 + 0x40))) - ((*(float *)((a4 + 0x3C))) * 5.22015285f));
            }
            u63 = u25;
        } else {
            t29 = *(int *)((a4 + 0x54));
            *(unsigned int *)((a4 + 0x54)) = (t29 + 0x1);
            if ((int)(t29 + 0x1) < (int)(*(int *)((a4 + 0x60)))) {
                *(float *)((a4 + 0x3C)) = ((*(float *)((a4 + 0x3C))) + (*(float *)(((0x44 + a4) + 0x0))));
            } else {
                *(unsigned int *)((a4 + 0x50)) = ((*(int *)((a4 + 0x50))) + 0x1);
                *(unsigned int *)((a4 + 0x54)) = 0x0;
                *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x3C))) * 10.4403057f);
                FUN_0c0dc5a0();
                t36 = FUN_0c0e1830(0xC08C25A, 0xA4);
                FUN_0c0e19d0(t36);
                FUN_0c0dcca0((a4 + 0x30));
                nlRotateAX((*(short *)((a4 + 0x48))));
                nlRotateAZ((*(short *)((a4 + 0x4C))));
                FUN_0c0dcc70(0.0f, ((*(float *)((a4 + 0x3C))) * 5.22015285f), 0.0f);
                FUN_0c0db840((t36 + 0x70));
                *(float *)((t36 + 0x90)) = 1.0f;
                *(unsigned short *)((t36 + 0x9A)) = 0x344;
                *(unsigned short *)((t36 + 0xA2)) = 0x1;
                *(unsigned short *)((t36 + 0xA0)) = 0x9;
                nlPopMatrix(0x1);
            }
            u63 = ((*(float *)((a4 + 0x3C))) * 5.22015285f);
        }
        nlPushMatrix(0x0);
        u68 = *(float *)((a4 + 0x3C));
        u69 = (1.0f / u68);
        if (1.0f > u68) {
            u69 = 1.0f;
        }
        FUN_0c0dcca0((a4 + 0x30));
        nlRotateAX((*(short *)((a4 + 0x48))));
        nlRotateAZ((*(short *)((a4 + 0x4C))));
        FUN_0c0dcc70(0.0f, u63, 0.0f);
        nlScale(u69, (*(float *)((a4 + 0x3C))), u69);
        FUN_0c0de000((*(float *)((a4 + 0x3C))));
        FUN_0c0c465c(((*(int *)((a4 + 0x5C))) + 0x26D));
        nlRotateAY(0x3FFF);
        FUN_0c0de000((*(float *)((a4 + 0x3C))));
        FUN_0c0c465c(((*(int *)((a4 + 0x5C))) + 0x26D));
        nlPopMatrix(0x1);
        t89 = *(int *)((a4 + 0x5C));
        *(unsigned int *)((a4 + 0x5C)) = (t89 + 0x1);
        if ((int)(t89 + 0x1) >= (int)0x2) {
            *(unsigned int *)((a4 + 0x5C)) = 0x0;
        }
        t157 = 0x5C;
    } else {
        if ((*(int *)((a4 + 0x58))) != 0) {
            *(unsigned int *)((a4 + 0x58)) = ((*(int *)((a4 + 0x58))) - 1);
            t148 = 0x58;
        } else {
            *(unsigned int *)((a4 + 0x50)) = ((*(int *)((a4 + 0x50))) + 0x1);
            t95 = *(int *)((a4 + 0x54));
            *(unsigned int *)((a4 + 0x54)) = (t95 + 0x1);
            if ((int)(t95 + 0x1) < (int)(*(int *)((a4 + 0x60)))) {
                *(float *)((a4 + 0x3C)) = ((*(float *)((a4 + 0x3C))) + (*(float *)(((0x44 + a4) + 0x0))));
            } else {
                *(unsigned int *)((a4 + 0x50)) = ((*(int *)((a4 + 0x50))) + 0x1);
                *(unsigned int *)((a4 + 0x54)) = 0x0;
                *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x3C))) * 10.4403057f);
                FUN_0c0dc5a0();
                t102 = FUN_0c0e1830(0xC08C25A, 0xA4);
                FUN_0c0e19d0(t102);
                FUN_0c0dcca0((a4 + 0x30));
                nlRotateAX((*(short *)((a4 + 0x48))));
                nlRotateAZ((*(short *)((a4 + 0x4C))));
                FUN_0c0dcc70(0.0f, ((*(float *)((a4 + 0x3C))) * 5.22015285f), 0.0f);
                FUN_0c0db840((t102 + 0x70));
                *(float *)((t102 + 0x90)) = 1.0f;
                *(unsigned short *)((t102 + 0x9A)) = 0x344;
                *(unsigned short *)((t102 + 0xA2)) = 0x1;
                *(unsigned short *)((t102 + 0xA0)) = 0x9;
                nlPopMatrix(0x1);
            }
            u122 = *(float *)((a4 + 0x3C));
            nlPushMatrix(0x0);
            u124 = *(float *)((a4 + 0x3C));
            u125 = (1.0f / u124);
            if (1.0f > u124) {
                u125 = 1.0f;
            }
            FUN_0c0dcca0((a4 + 0x30));
            nlRotateAX((*(short *)((a4 + 0x48))));
            nlRotateAZ((*(short *)((a4 + 0x4C))));
            FUN_0c0dcc70(0.0f, (u122 * 5.22015285f), 0.0f);
            nlScale(u125, (*(float *)((a4 + 0x3C))), u125);
            FUN_0c0de000((*(float *)((a4 + 0x3C))));
            FUN_0c0c465c(((*(int *)((a4 + 0x5C))) + 0x26D));
            nlRotateAY(0x3FFF);
            FUN_0c0de000((*(float *)((a4 + 0x3C))));
            FUN_0c0c465c(((*(int *)((a4 + 0x5C))) + 0x26D));
            nlPopMatrix(0x1);
            t145 = *(int *)((a4 + 0x5C));
            *(unsigned int *)((a4 + 0x5C)) = (t145 + 0x1);
            if ((int)(t145 + 0x1) >= (int)0x2) {
                *(unsigned int *)((a4 + 0x5C)) = 0x0;
            }
            t148 = 0x5C;
        }
        t157 = t148;
    }
    return t157;
}

int FUN_0c0a1c76(int a4)
{
    int t1;
    int t2;
    int t3;
    int t7;
    int t9;
    int t14;
    int t22;
    int t24;
    int t26;
    int t27;
    float u32;
    int t33;
    float u34;
    int t37;
    float u38;
    int t39;
    int t41;
    int t11;
    int t12;

    if ((*(int *)((a4 + 0x384))) != 0) {
        t1 = *(int *)((a4 + 0x384));
        t2 = 0x384;
        t3 = t1;
        for (;;) {
            if ((unsigned int)t3 >= (unsigned int)(t1 + 0x50)) {
                break;
            }
            t2 = (FUN_0c0da2e0());
            if ((int)t2 >= 0) {
                t2 = (t2 & 0x7);
            } else {
                t2 = (~t2);
                t2 = (t2 + 0x1);
                t2 = (t2 & 0x7);
                t2 = (~t2);
                t2 = (t2 + 0x1);
            }
            *(unsigned int *)((t3 + 0x0)) = t2;
            t3 = (t3 + 0x4);
        }
        return t2;
    }
    t7 = FUN_0c0e19aa(0xC0A163C, 0x6E8, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t7);
    *(unsigned int *)((t7 + 0x30)) = a4;
    t9 = *(int *)((a4 + 0x2E8));
    *(unsigned int *)((t7 + 0x40)) = (((int)t9 >= 0) ? (0x2 << (t9 & 31)) : ((-(int)t9 & 31) ? ((int)0x2 >> (-(int)t9 & 31)) : ((int)0x2 >> 31)));
    t14 = 0x1;
    if (((*(int *)0xC23ED50) != 29) && ((t11 = *(int *)0xC23ED50, t11 != 93) && (t12 = *(int *)0xC23ED50, t12 != 102))) {
        t14 = 0x0;
    }
    *(unsigned int *)((t7 + 0x44)) = t14;
    if ((*(int *)((a4 + 0x3E4))) == 0) {
        FUN_0c0bb0f4(a4);
    }
    t22 = 0x0;
    for (;;) {
        t24 = (int)((unsigned int)((int)((unsigned int)t22 + (unsigned int)0x0)) + ((((int)0x0 > (int)t22)) ? 1u : 0u));
        t26 = FUN_0c0da2e0();
        t27 = ((~(((~t26) + 0x1) & 0x7)) + 0x1);
        if ((int)t26 >= 0) {
            t27 = (t26 & 0x7);
        }
        *(unsigned int *)((((t7 + 0x48) + (((t22 << 1) + t22) << 2)) + 0x0)) = t27;
        *(float *)(((0x4 + ((t7 + 0x48) + (((t22 << 1) + t22) << 2))) + 0x0)) = ((((float)(unsigned char)(FUN_0c0da2e0()) * (*(float *)((((((t24 >> 1) << 2) << 1) + 0xC10CE40) + 0x4)))) / 255.0f) + (*(float *)((((((t24 >> 1) << 2) << 1) + 0xC10CE40) + 0x0))));
        u32 = *(float *)((((t24 >> 1) << 2) + 0xC10CE18));
        t33 = FUN_0c0da2e0();
        u34 = 1.0f;
        if ((t33 & 1) != 0) {
            u34 = (-1.0f);
        }
        t37 = ((((t22 << 1) + t22) << 2) + (t7 + 0x48));
        t22 = (t22 + 0x1);
        u38 = ((float)((unsigned char)(FUN_0c0da2e0()) - 127) / 1024.0f);
        u38 = u38 + u34 * u32;
        *(float *)((t37 + 0x8)) = u38;
        if ((int)t22 >= (int)0x14) {
            break;
        }
    }
    *(unsigned int *)((a4 + 0x384)) = (t7 + 0x48);
    t39 = 0x0;
    for (;;) {
        t41 = (((t39 << 2) + t39) << 2);
        t39 = (t39 + 0x1);
        *(unsigned int *)((((t41 << 2) + (0x138 + t7)) + 0x0)) = 0x0;
        if ((int)t39 >= (int)0x4) {
            break;
        }
    }
    return FUN_0c096d6c();
}
