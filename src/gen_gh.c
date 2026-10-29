/* Straight-line functions with calls and guards (batch gen_gh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
typedef struct { int w[5]; } Stk5;
int FUN_0c01ee84(int, int, int);
int FUN_0c01ef2a(int, int, int, int, int);
int FUN_0c0365f4(int, int, int, float, float);
int FUN_0c036efc(int, int, int, int);
int FUN_0c042ad8(int, int, int, float, float);
int FUN_0c092858(int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0cc7d8(int);
int FUN_0c0cf1b0(int, int, int, int);
int FUN_0c0cf2dc(int, int, int, int);
extern int FUN_0c0d0f6c();
int FUN_0c0d1230(void);
int FUN_0c0da2e0(void);
int FUN_0c0db0a0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e262a(int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(void);
int nlGetMatrix(int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c0be16c(int a4, int a5, int a6, int a7);
int FUN_0c042b60(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0cfb0e(int a4, int a5, int a6, int a7);
int FUN_0c0e1138(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c01f8d4(int a4, int a5, int a6);
float FUN_0c0c8138(int a4, int a5, int a6, float f4, float f5);
int FUN_0c0a6928(int a4, int a5, int a6, Stk4 s, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c0d0648(int a4, int a5, int a6, int a7);
int FUN_0c0e2400(void);
float FUN_0c036806(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c092884(int a4, int a5);
float FUN_0c0dbe40(int a4, int a5, int a6, float f4, float f5);
int FUN_0c0e509a(int a4, int a5, int a6);

int FUN_0c0be16c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t7;
    int t8;
    int t9;
    int t10;
    float u13;
    float u14;
    float u15;
    float u16;
    int t17;
    int t19;
    int t20;
    int t45;
    int t46;
    int t5;
    int t6;
    float u11;
    float u12;
    int t72;
    int stk[13];

    *(float *)(((int)stk + 4)) = 9999.0f;
    *(float *)(((int)stk + 8)) = -9999.0f;
    t0 = *(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0));
    t2 = *(int *)((t0 + ((((unsigned int)(*(int *)(((((a4 << 1) + a4) << 2) + 0xC24FB54))) >> 2) - 1) << 2)));
    *(unsigned int *)(((int)stk + 16)) = t2;
    t3 = FUN_0c0e262a((t2 << 2));
    *(unsigned int *)(((int)stk + 12)) = t3;
    t4 = t3;
    t7 = t3;
    t8 = a7;
    t9 = 0x0;
    t10 = (t0 + 0x18);
    u13 = -9999.0f;
    u14 = -9999.0f;
    u15 = 9999.0f;
    u16 = 9999.0f;
    for (;;) {
        t17 = *(int *)((t10 + 0x0));
        t10 = (t10 + 0x4);
        if (t17 != 0) {
            if ((t17 & 0x80000000) != 0) {
                t5 = t10;
                t5 = (t5 - 4);
                t10 = t5;
                t10 = (t10 + 0x50);
            } else {
                t8 = 0x10;
                if ((t17 & t8) != 0) {
                    t19 = *(int *)((t10 + 0x0));
                    t10 = (t10 + 0x4);
                    t8 = t19;
                    t20 = t10;
                    for (;;) {
                        t6 = (*(int *)((t20 + 0x0)));
                        if ((t6 & 0x1) == 0) {
                            t20 = (t20 + 0x8);
                        } else {
                            u12 = (*(float *)((t20 + 0x0)));
                            if (u16 > u12) {
                                u16 = (*(float *)((t20 + 0x0)));
                            } else {
                                if (u12 > u14) {
                                    u14 = (*(float *)((t20 + 0x0)));
                                }
                            }
                            t4 = 0x4;
                            u12 = (*(float *)((t20 + t4)));
                            if (u15 > u12) {
                                u15 = (*(float *)((t20 + t4)));
                            } else {
                                if (u12 > u13) {
                                    u13 = (*(float *)((t20 + t4)));
                                }
                            }
                            t4 = 0x8;
                            u12 = (*(float *)(((int)stk + 4)));
                            u11 = (*(float *)((t20 + t4)));
                            if (u12 > u11) {
                                u12 = (*(float *)((t20 + t4)));
                                *(float *)(((int)stk + 4)) = u12;
                            } else {
                                t4 = 0x4;
                                u12 = (*(float *)((((int)stk + 4) + t4)));
                                t4 = 0x8;
                                u11 = (*(float *)((t20 + t4)));
                                if (u11 > u12) {
                                    u12 = (*(float *)((t20 + t4)));
                                    t4 = 0x4;
                                    *(float *)((((int)stk + 4) + t4)) = u12;
                                }
                            }
                            *(unsigned int *)((t7 + 0x0)) = t20;
                            t9 = (t9 + 0x1);
                            t7 = (t7 + 0x4);
                            t20 = (t20 + 0x20);
                        }
                        t8 = (t8 - 0x1);
                        if (t8 == 0) {
                            break;
                        }
                    }
                    t72 = t20;
                } else {
                    t8 = 0x8;
                    if ((t17 & t8) == 0) {
                        break;
                    }
                    t45 = *(int *)((t10 + 0x0));
                    t10 = (t10 + 0x4);
                    t8 = t45;
                    t6 = t8;
                    t8 = (t8 << 1);
                    t8 = (t8 + t6);
                    t46 = t10;
                    for (;;) {
                        if (((*(int *)((t46 + 0x0))) & 0x1) == 0) {
                            t46 = (t46 + 0x8);
                        } else {
                            u12 = (*(float *)((t46 + 0x0)));
                            if (u16 > u12) {
                                u16 = (*(float *)((t46 + 0x0)));
                            } else {
                                if (u12 > u14) {
                                    u14 = (*(float *)((t46 + 0x0)));
                                }
                            }
                            t4 = 0x4;
                            u12 = (*(float *)((t46 + t4)));
                            if (u15 > u12) {
                                u15 = (*(float *)((t46 + t4)));
                            } else {
                                if (u12 > u13) {
                                    u13 = (*(float *)((t46 + t4)));
                                }
                            }
                            t4 = 0x8;
                            u12 = (*(float *)(((int)stk + 4)));
                            u11 = (*(float *)((t46 + t4)));
                            if (u12 > u11) {
                                u12 = (*(float *)((t46 + t4)));
                                *(float *)(((int)stk + 4)) = u12;
                            } else {
                                t4 = 0x4;
                                u12 = (*(float *)((((int)stk + 4) + t4)));
                                t4 = 0x8;
                                u11 = (*(float *)((t46 + t4)));
                                if (u11 > u12) {
                                    u12 = (*(float *)((t46 + t4)));
                                    t4 = 0x4;
                                    *(float *)((((int)stk + 4) + t4)) = u12;
                                }
                            }
                            *(unsigned int *)((t7 + 0x0)) = t46;
                            t9 = (t9 + 0x1);
                            t7 = (t7 + 0x4);
                            t46 = (t46 + 0x20);
                        }
                        t8 = (t8 - 0x1);
                        if (t8 == 0) {
                            break;
                        }
                    }
                    t72 = t46;
                }
                t10 = t72;
            }
            continue;
        }
        t4 = 0x4;
        *(unsigned int *)((a5 + 0x0)) = (*(int *)(((int)stk + 12)));
        *(float *)((a5 + t4)) = u16;
        t4 = 0x10;
        *(float *)((a5 + t4)) = u14;
        t4 = 0x8;
        *(float *)((a5 + t4)) = u15;
        t4 = 0x14;
        *(float *)((a5 + t4)) = u13;
        t4 = 0xC;
        u12 = (*(float *)(((int)stk + 4)));
        *(float *)((a5 + t4)) = u12;
        t4 = 0x4;
        u12 = (*(float *)((((int)stk + 4) + t4)));
        t4 = 0x18;
        *(float *)((a5 + t4)) = u12;
        *(unsigned int *)((a5 + 0x1C)) = t9;
        return t4;
    }
    for (;;) {
    }
}

int FUN_0c042b60(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t12;
    int t16;
    int stk[24];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R12;
    int R13;
    int R14;
    float F2;
    float F3;
    float F4;
    float F5;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    F5 = f5;
    *(unsigned int *)(((int)stk + 8)) = R6;
    *(float *)((R5 + 0x0)) = 0.0f;
    *(float *)((R5 + 0x4)) = 0.0f;
    *(float *)((R5 + 0x8)) = 0.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x28)) = *(struct mv3 *)((R4 + 0x30)); }
    *(float *)(((int)stk + 56)) = 10.0f;
    *(float *)(((int)stk + 60)) = 1.0f;
    R12 = (0x0);
    R13 = (R5);
    R14 = (R4);
    F12 = (150.0f);
    F13 = (-5.0f);
    F14 = (1.0f);
    F15 = ((1.0f + 1.0f));
    if (((*(int *)((R4 + 0x530))) == 0)) goto L_C042BC6;
    FUN_0c0365f4(R14, (((int)stk + 4) + 0x28), R13, F13, F15);
    L_C042BC6:;
    if (((*(int *)((R14 + 0x508))) == 1)) goto L_C042BD2;
    L_C042D04:;
    t12 = *(int *)(((((R12 << 2) << 2) + 0xC246A40) + 0x0));
    R0 = (t12);
    R4 = ((((R12 << 2) << 2) + 0xC246A40));
    if ((t12 != -1)) goto L_C042C2E;
    return R0;
    L_C042C2E:;
    t16 = *(int *)((R4 + 0x0));
    R4 = (t16);
    if (((int)t16 >= (int)0x2)) goto L_C042C52;
    if (((*(int *)((R14 + 0x508))) != 0)) goto L_C042CDA;
    if (((*(int *)((R14 + 0x50C))) == 0)) goto L_C042D02;
    if (((*(int *)((R14 + 0x510))) == R4)) goto L_C042C70;
    L_C042D02:;
    R12 = ((R12 + 0x1));
    goto L_C042D04;
    L_C042C70:;
    FUN_0c042ad8((((int)stk + 4) + 0x28), R12, R13, F12, F15);
    goto L_C042D02;
    L_C042CDA:;
    FUN_0c042ad8((((int)stk + 4) + 0x28), R12, R13, F13, F15);
    goto L_C042D02;
    L_C042C52:;
    if (((int)R4 >= (int)0x4)) goto L_C042CA8;
    if (((*(int *)((R14 + 0x508))) != 0)) goto L_C042CDA;
    if (((*(int *)((R14 + 0x50C))) == 0)) goto L_C042CDA;
    if (((*(int *)((R14 + 0x510))) != R4)) goto L_C042CDA;
    goto L_C042C70;
    L_C042CA8:;
    F14 = ((*(float *)0xC042DA4));
    if (((int)R4 >= (int)0xC)) goto L_C042CD4;
    if (((*(int *)((R14 + 0xBC))) == R4)) goto L_C042D02;
    *(volatile int *)(((int)stk + 8));
    *(volatile int *)((R14 + 0xBC));
    FUN_0c042ad8((((int)stk + 4) + 0x28), R12, R13, F14, F15);
    goto L_C042D02;
    L_C042CD4:;
    if (((int)R4 >= (int)0x10)) goto L_C042CEC;
    goto L_C042CDA;
    L_C042CEC:;
    if (((int)R4 >= (int)0x14)) goto L_C042D02;
    FUN_0c042ad8((((int)stk + 4) + 0x28), R12, R13, F14, (*(float *)0xC042DA8));
    goto L_C042D02;
    L_C042BD2:;
    R0 = (0x514);
    if (((*(int *)((R14 + 0x514))) != 0)) goto L_C042BDE;
    goto L_C042D04;
    L_C042BDE:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)((0x518 + R14)); }
    *(float *)(((int)stk + 36)) = F12;
    *(float *)(((int)stk + 40)) = F14;
    FUN_0c036efc((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x8), ((int)stk + 4));
    *(float *)((R13 + 0x0)) = ((*(float *)((R13 + 0x0))) + (*(float *)(((int)stk + 12))));
    *(float *)((R13 + 0x4)) = ((*(float *)((R13 + 0x4))) + (*(float *)(((((int)stk + 4) + 0xC) + 0x0))));
    *(float *)((R13 + 0x8)) = ((*(float *)((R13 + 0x8))) + (*(float *)(((((int)stk + 4) + 0x10) + 0x0))));
    goto L_C042D04;
}

int FUN_0c0cfb0e(int a4, int a5, int a6, int a7)
{
    int t0;
    int t6;
    int t8;
    int t28;
    int t40;
    int t41;
    int t55;
    int t69;
    int t76;
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
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    t0 = *(int *)0xC9433D4;
    *(unsigned int *)(((int)stk + 8)) = t0;
    R0 = (0x54);
    R9 = (R4);
    if ((((*(int *)((t0 + 0x54))) + 0x4) != 0)) goto L_C0CFB38;
    L_C0CFCB8:;
    return R0;
    L_C0CFB38:;
    t6 = *(int *)((((*(int *)0xC9433A8) * 0x1C) + 0xC20BB30));
    t8 = *(int *)((t6 + ((*(int *)0xC23A1B0) << 2)));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = (((R9 == 0)) ? 1 : 0);
    *(unsigned int *)(((int)stk + 24)) = (((R9 == 0)) ? 1 : 0);
    *(unsigned int *)(((int)stk + 16)) = (((R9 == 0)) ? 1 : 0);
    R0 = ((((R9 == 0)) ? 1 : 0));
    R10 = (0x17);
    R11 = (0x3);
    R13 = (t8);
    R4 = (t6);
    R8 = (0xC0DA2E0);
    L_C0CFCAE:;
    if (((int)(*(signed char *)((R13 + 0x0))) < 0)) goto L_C0CFCB8;
    if (((*(signed char *)((R13 + 0x2))) != 0)) goto L_C0CFB78;
    R14 = ((*(signed char *)((R13 + 0x1))));
    L_C0CFBEC:;
    R0 = (R14);
    R12 = (0x1);
    if ((R14 == 30)) goto L_C0CFC0A;
    if ((R0 == 22)) goto L_C0CFC0A;
    if ((R0 == 23)) goto L_C0CFC0E;
    if ((R0 == 24)) goto L_C0CFC14;
    if ((R0 == 29)) goto L_C0CFC1A;
    L_C0CFC2A:;
    t28 = *(signed char *)((R13 + 0x0));
    R0 = (t28);
    if ((t28 == 0)) goto L_C0CFC3C;
    if ((R0 == 2)) goto L_C0CFC5A;
    if ((R0 == 3)) goto L_C0CFC7C;
    L_C0CFCAC:;
    R13 = ((R13 + 0x4));
    goto L_C0CFCAE;
    L_C0CFC7C:;
    if (((*(int *)(((int)stk + 16))) != 0)) goto L_C0CFC88;
    if (((0x2 & R9) == 0)) goto L_C0CFCAC;
    L_C0CFC88:;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    if (((int)R12 <= 0)) goto L_C0CFCAC;
    L_C0CFC90:;
    t40 = FUN_0c0cf1b0(R14, 0x1, 0x0, ((*(int *)(((*(int *)(((int)stk + 8))) + 0x54))) + 0x4));
    t41 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t41 + 0x1);
    R0 = (t40);
    if (((int)(t41 + 0x1) < (int)R12)) goto L_C0CFC90;
    goto L_C0CFCAC;
    L_C0CFC5A:;
    if (((*(int *)(((int)stk + 24))) != 0)) goto L_C0CFC66;
    if (((0x1 & R9) == 0)) goto L_C0CFCAC;
    L_C0CFC66:;
    R0 = ((FUN_0c0cf1b0(R14, R12, 0x2, ((*(int *)(((*(int *)(((int)stk + 8))) + 0x54))) + 0x4))));
    goto L_C0CFCAC;
    L_C0CFC3C:;
    if (((*(int *)(((int)stk + 20))) != 0)) goto L_C0CFC48;
    if (((0x1 & R9) == 0)) goto L_C0CFCAC;
    L_C0CFC48:;
    t55 = FUN_0c0cf2dc((*(int *)(((int)stk + 12))), R14, R12, R7);
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    R0 = (t55);
    goto L_C0CFCAC;
    L_C0CFC1A:;
    FUN_0c0da2e0();
    R14 = (((FUN_0c0e5f1c()) + 0x19));
    goto L_C0CFC2A;
    L_C0CFC14:;
    R12 = (R11);
    R14 = (R10);
    goto L_C0CFC2A;
    L_C0CFC0E:;
    R12 = (0x2);
    R14 = (R10);
    goto L_C0CFC2A;
    L_C0CFC0A:;
    R14 = (R10);
    goto L_C0CFC2A;
    L_C0CFB78:;
    if (((*(signed char *)((R13 + 0x3))) != 0)) goto L_C0CFB92;
    t69 = (0x1 & (FUN_0c0da2e0())) == 0;
    if (t69) goto L_C0CFB8C;
    R0 = ((*(signed char *)((R13 + 0x1))));
    L_C0CFB8E:;
    R14 = (R0);
    goto L_C0CFBEC;
    L_C0CFB8C:;
    R0 = ((*(signed char *)((R13 + 0x2))));
    goto L_C0CFB8E;
    L_C0CFB92:;
    FUN_0c0da2e0();
    t76 = FUN_0c0e5f1c();
    R0 = (t76);
    if ((t76 == 0)) goto L_C0CFBB2;
    if ((R0 == 1)) goto L_C0CFBE4;
    if ((R0 == 2)) goto L_C0CFBE8;
    goto L_C0CFBEC;
    L_C0CFBE8:;
    R0 = ((*(signed char *)((R13 + 0x3))));
    L_C0CFBEA:;
    R14 = (R0);
    goto L_C0CFBEC;
    L_C0CFBE4:;
    R0 = ((*(signed char *)((R13 + 0x2))));
    goto L_C0CFBEA;
    L_C0CFBB2:;
    R0 = ((*(signed char *)((R13 + 0x1))));
    goto L_C0CFBEA;
}

int FUN_0c0e1138(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int t0;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    int t2;
    int t3;
    int t10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u20;
    float u21;

    t0 = *(int *)0xC20D140;
    t4 = 0xC20D140;
    t5 = (a4 + 0x4);
    t6 = a5;
    t7 = a6;
    t8 = 0x0;
    t9 = (*(int *)((a4 + 0x0)));
    u15 = f7;
    u16 = f8;
    u17 = f9;
    u18 = f10;
    u19 = f11;
    for (;;) {
        t9 = (t9 - 1);
        if ((int)t9 >= 0) {
            t7 = t5;
            t10 = (*(int *)((t7 + 0x0)));
            t7 = (t7 + 0x4);
            u14 = (*(float *)((t7 + 0x0)));
            t7 = (t7 + 0x4);
            t3 = t10;
            if (!(f4 > u14)) {
                t7 = (t7 + 0x4);
                u14 = (*(float *)((t7 + 0x0)));
                t7 = (t7 + 0x4);
                if (!(f6 > u14)) {
                    u14 = (*(float *)((t7 + 0x0)));
                    t7 = (t7 + 0x4);
                    if (!(u14 > f4)) {
                        u14 = (*(float *)((t7 + 0x0)));
                        t7 = (t7 + 0x4);
                        if (!(u14 > f5)) {
                            u14 = (*(float *)((t7 + 0x0)));
                            t7 = (t7 + 0x4);
                            if (!(u14 > f6)) {
                                for (;;) {
                                    t3 = (t3 - 1);
                                    if ((int)t3 >= 0) {
                                        t2 = 0x4;
                                        t6 = t7;
                                        u15 = (*(float *)((t6 + t2)));
                                        u14 = 0.0f;
                                        u18 = (*(float *)((t6 + 0x0)));
                                        if (!(u15 > u14)) {
                                            if (t0 != 0) {
                                                if (u15 != u14) {
                                                    t2 = 0x8;
                                                    u14 = f4;
                                                    u19 = (*(float *)((t6 + t2)));
                                                    u14 = (u14 * u18);
                                                    u13 = f6;
                                                    t2 = 0xC;
                                                    u13 = (u13 * u19);
                                                    u20 = (*(float *)((t6 + t2)));
                                                    u14 = (-u14);
                                                    u14 = (u14 - u13);
                                                    u14 = (u14 - u20);
                                                    u17 = u14;
                                                    u17 = (u17 / u15);
                                                    if (!(u17 > f5)) {
                                                        t2 = 0x1C;
                                                        u21 = (*(float *)((t6 + t2)));
                                                        t2 = 0x14;
                                                        u11 = (*(float *)((t6 + t2)));
                                                        t2 = 0x20;
                                                        u13 = (*(float *)((t6 + t2)));
                                                        t2 = 0x28;
                                                        u14 = u21;
                                                        u14 = (u14 - f6);
                                                        u13 = (u13 - u11);
                                                        u12 = (*(float *)((t6 + t2)));
                                                        u12 = (u12 - u21);
                                                        u14 = (u14 * u13);
                                                        u13 = u11;
                                                        u13 = (u13 - f4);
                                                        u13 = (u13 * u12);
                                                        u14 = (u14 - u13);
                                                        u13 = u15;
                                                        u13 = (u13 * u14);
                                                        u14 = 0.0f;
                                                        if (!(u14 > u13)) {
                                                            u21 = (*(float *)((t6 + t2)));
                                                            t2 = 0x20;
                                                            u11 = (*(float *)((t6 + t2)));
                                                            t2 = 0x2C;
                                                            u13 = (*(float *)((t6 + t2)));
                                                            t2 = 0x34;
                                                            u14 = u21;
                                                            u14 = (u14 - f6);
                                                            u13 = (u13 - u11);
                                                            u12 = (*(float *)((t6 + t2)));
                                                            u12 = (u12 - u21);
                                                            u14 = (u14 * u13);
                                                            u13 = u11;
                                                            u13 = (u13 - f4);
                                                            u13 = (u13 * u12);
                                                            u14 = (u14 - u13);
                                                            u13 = u15;
                                                            u13 = (u13 * u14);
                                                            u14 = 0.0f;
                                                            if (!(u14 > u13)) {
                                                                u21 = (*(float *)((t6 + t2)));
                                                                t2 = 0x2C;
                                                                u11 = (*(float *)((t6 + t2)));
                                                                t2 = 0x38;
                                                                u13 = (*(float *)((t6 + t2)));
                                                                t2 = 0x40;
                                                                u14 = u21;
                                                                u14 = (u14 - f6);
                                                                u13 = (u13 - u11);
                                                                u12 = (*(float *)((t6 + t2)));
                                                                u12 = (u12 - u21);
                                                                u14 = (u14 * u13);
                                                                u13 = u11;
                                                                u13 = (u13 - f4);
                                                                u13 = (u13 * u12);
                                                                u14 = (u14 - u13);
                                                                u13 = u15;
                                                                u13 = (u13 * u14);
                                                                u14 = 0.0f;
                                                                if (!(u14 > u13)) {
                                                                    u21 = (*(float *)((t6 + t2)));
                                                                    t2 = 0x38;
                                                                    u11 = (*(float *)((t6 + t2)));
                                                                    t2 = 0x14;
                                                                    u13 = (*(float *)((t6 + t2)));
                                                                    t2 = 0x1C;
                                                                    u14 = u21;
                                                                    u14 = (u14 - f6);
                                                                    u13 = (u13 - u11);
                                                                    u12 = (*(float *)((t6 + t2)));
                                                                    u12 = (u12 - u21);
                                                                    u14 = (u14 * u13);
                                                                    u13 = u11;
                                                                    u13 = (u13 - f4);
                                                                    u13 = (u13 * u12);
                                                                    u14 = (u14 - u13);
                                                                    u13 = u15;
                                                                    u13 = (u13 * u14);
                                                                    u14 = 0.0f;
                                                                    if (!(u14 > u13)) {
                                                                        u21 = f5;
                                                                        u21 = (u21 - u17);
                                                                        if ((t8 == 0) || (u16 > u21)) {
                                                                            u14 = u21;
                                                                            t2 = 0x44;
                                                                            u16 = u21;
                                                                            u14 = (u14 * u16);
                                                                            t8 = (*(int *)((t6 + t2)));
                                                                            t6 = 0xC94C6E0;
                                                                            *(float *)((t6 + 0x0)) = u14;
                                                                            t6 = 0xC94C6C4;
                                                                            *(float *)((t6 + 0x0)) = f4;
                                                                            t6 = 0xC94C6C8;
                                                                            *(float *)((t6 + 0x0)) = u17;
                                                                            t6 = 0xC94C6CC;
                                                                            *(float *)((t6 + 0x0)) = f6;
                                                                            t6 = 0xC94C6D0;
                                                                            *(float *)((t6 + 0x0)) = u18;
                                                                            t6 = 0xC94C6D4;
                                                                            *(float *)((t6 + 0x0)) = u15;
                                                                            t6 = 0xC94C6D8;
                                                                            *(float *)((t6 + 0x0)) = u19;
                                                                            t6 = 0xC94C6DC;
                                                                            *(float *)((t6 + 0x0)) = u20;
                                                                            t6 = 0xC94C6E4;
                                                                            *(unsigned int *)((t6 + 0x0)) = t7;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            t2 = 0x8;
                                            u14 = f4;
                                            u19 = (*(float *)((t6 + t2)));
                                            u14 = (u14 * u18);
                                            u13 = f6;
                                            t2 = 0xC;
                                            u13 = (u13 * u19);
                                            u20 = (*(float *)((t6 + t2)));
                                            u14 = (-u14);
                                            u14 = (u14 - u13);
                                            u14 = (u14 - u20);
                                            u17 = u14;
                                            u17 = (u17 / u15);
                                            if (!(u17 > f5)) {
                                                t2 = 0x1C;
                                                u21 = (*(float *)((t6 + t2)));
                                                t2 = 0x14;
                                                u11 = (*(float *)((t6 + t2)));
                                                t2 = 0x20;
                                                u13 = (*(float *)((t6 + t2)));
                                                t2 = 0x28;
                                                u14 = u21;
                                                u14 = (u14 - f6);
                                                u13 = (u13 - u11);
                                                u12 = (*(float *)((t6 + t2)));
                                                u12 = (u12 - u21);
                                                u14 = (u14 * u13);
                                                u13 = u11;
                                                u13 = (u13 - f4);
                                                u13 = (u13 * u12);
                                                u14 = (u14 - u13);
                                                u13 = u15;
                                                u13 = (u13 * u14);
                                                u14 = 0.0f;
                                                if (!(u14 > u13)) {
                                                    u21 = (*(float *)((t6 + t2)));
                                                    t2 = 0x20;
                                                    u11 = (*(float *)((t6 + t2)));
                                                    t2 = 0x2C;
                                                    u13 = (*(float *)((t6 + t2)));
                                                    t2 = 0x34;
                                                    u14 = u21;
                                                    u14 = (u14 - f6);
                                                    u13 = (u13 - u11);
                                                    u12 = (*(float *)((t6 + t2)));
                                                    u12 = (u12 - u21);
                                                    u14 = (u14 * u13);
                                                    u13 = u11;
                                                    u13 = (u13 - f4);
                                                    u13 = (u13 * u12);
                                                    u14 = (u14 - u13);
                                                    u13 = u15;
                                                    u13 = (u13 * u14);
                                                    u14 = 0.0f;
                                                    if (!(u14 > u13)) {
                                                        u21 = (*(float *)((t6 + t2)));
                                                        t2 = 0x2C;
                                                        u11 = (*(float *)((t6 + t2)));
                                                        t2 = 0x38;
                                                        u13 = (*(float *)((t6 + t2)));
                                                        t2 = 0x40;
                                                        u14 = u21;
                                                        u14 = (u14 - f6);
                                                        u13 = (u13 - u11);
                                                        u12 = (*(float *)((t6 + t2)));
                                                        u12 = (u12 - u21);
                                                        u14 = (u14 * u13);
                                                        u13 = u11;
                                                        u13 = (u13 - f4);
                                                        u13 = (u13 * u12);
                                                        u14 = (u14 - u13);
                                                        u13 = u15;
                                                        u13 = (u13 * u14);
                                                        u14 = 0.0f;
                                                        if (!(u14 > u13)) {
                                                            u21 = (*(float *)((t6 + t2)));
                                                            t2 = 0x38;
                                                            u11 = (*(float *)((t6 + t2)));
                                                            t2 = 0x14;
                                                            u13 = (*(float *)((t6 + t2)));
                                                            t2 = 0x1C;
                                                            u14 = u21;
                                                            u14 = (u14 - f6);
                                                            u13 = (u13 - u11);
                                                            u12 = (*(float *)((t6 + t2)));
                                                            u12 = (u12 - u21);
                                                            u14 = (u14 * u13);
                                                            u13 = u11;
                                                            u13 = (u13 - f4);
                                                            u13 = (u13 * u12);
                                                            u14 = (u14 - u13);
                                                            u13 = u15;
                                                            u13 = (u13 * u14);
                                                            u14 = 0.0f;
                                                            if (!(u14 > u13)) {
                                                                u21 = f5;
                                                                u21 = (u21 - u17);
                                                                if ((t8 == 0) || (u16 > u21)) {
                                                                    u14 = u21;
                                                                    t2 = 0x44;
                                                                    u16 = u21;
                                                                    u14 = (u14 * u16);
                                                                    t8 = (*(int *)((t6 + t2)));
                                                                    t6 = 0xC94C6E0;
                                                                    *(float *)((t6 + 0x0)) = u14;
                                                                    t6 = 0xC94C6C4;
                                                                    *(float *)((t6 + 0x0)) = f4;
                                                                    t6 = 0xC94C6C8;
                                                                    *(float *)((t6 + 0x0)) = u17;
                                                                    t6 = 0xC94C6CC;
                                                                    *(float *)((t6 + 0x0)) = f6;
                                                                    t6 = 0xC94C6D0;
                                                                    *(float *)((t6 + 0x0)) = u18;
                                                                    t6 = 0xC94C6D4;
                                                                    *(float *)((t6 + 0x0)) = u15;
                                                                    t6 = 0xC94C6D8;
                                                                    *(float *)((t6 + 0x0)) = u19;
                                                                    t6 = 0xC94C6DC;
                                                                    *(float *)((t6 + 0x0)) = u20;
                                                                    t6 = 0xC94C6E4;
                                                                    *(unsigned int *)((t6 + 0x0)) = t7;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        t7 = (t7 + 0x48);
                                        continue;
                                    }
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            t4 = t10;
            t10 = (t10 << 2);
            t10 = (t10 << 1);
            t10 = (t10 + t4);
            t10 = (t10 << 1);
            t10 = (t10 + 0x7);
            t10 = (t10 << 2);
            t5 = (t5 + t10);
            continue;
        }
        break;
    }
    *(unsigned int *)0xC94C6C0 = t8;
    return t8;
}

int FUN_0c01f8d4(int a4, int a5, int a6)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    int t7;
    int t8;
    int t12;
    int t11;
    int t17;
    int t18;
    int t19;
    int t20;
    float u26;
    float u28;
    int t33;
    int t34;
    int t35;
    int t52;
    int t21;
    int t22;
    int t23;
    int t24;
    int stk[27];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    u0 = *(float *)0xC23FE68;
    u1 = *(float *)((a4 + 0x3C));
    u2 = *(float *)((a4 + 0x30));
    u3 = *(float *)0xC23FE70;
    u4 = *(float *)((a4 + 0x44));
    *(unsigned int *)(((int)stk + 16)) = ((int)(((*(float *)((a4 + 0x38))) - u3) * 0.049999997f) & 0x1F);
    t7 = ((int)((u1 - u0) * 0.049999997f) & 0x3F);
    t8 = ((int)((u2 - u0) * 0.049999997f) & 0x3F);
    if ((int)((int)((u1 - u0) * 0.049999997f) & 0x3F) > (int)((int)((u2 - u0) * 0.049999997f) & 0x3F)) {
        t7 = ((int)((u2 - u0) * 0.049999997f) & 0x3F);
        t8 = ((int)((u1 - u0) * 0.049999997f) & 0x3F);
    }
    t12 = ((int)((u4 - u3) * 0.049999997f) & 0x1F);
    if ((int)((int)((u4 - u3) * 0.049999997f) & 0x1F) > (int)(*(int *)(((int)stk + 16)))) {
        t11 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 16)) = ((int)((u4 - u3) * 0.049999997f) & 0x1F);
        t12 = t11;
    }
    *(unsigned int *)(((int)stk + 32)) = 0x0;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = 0x0;
    *(unsigned int *)0xC245FA4 = ((*(int *)0xC245FA4) + 0x1);
    *(unsigned int *)(((int)stk + 8)) = t12;
    *(unsigned int *)(((int)stk + 24)) = ((((t12 << 1) + t12) << 8) + 0xC23FF94);
    t17 = 0xC23FF94;
    t18 = t12;
    t19 = 0x0;
    t20 = a6;
    u26 = 0.049999997f;
    u28 = 999.899963f;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 8))) > (int)(*(int *)(((int)stk + 16)))) {
            break;
        }
        t22 = t7;
        t22 = (t22 << 1);
        t33 = *(int *)(((int)stk + 24));
        t22 = (t22 + t7);
        t21 = t7;
        t22 = (t22 << 2);
        t22 = (t22 + t33);
        t34 = t33;
        t35 = t7;
        for (;;) {
            if ((int)t21 > (int)t8) {
                break;
            }
            *(unsigned int *)(((int)stk + 20)) = t22;
            t23 = t22;
            for (;;) {
                t34 = (*(int *)(((int)stk + 20)));
                t23 = (*(int *)((t23 + 0x0)));
                if (t23 == t34) {
                    break;
                }
                t34 = 0xC245FA4;
                t24 = (*(int *)((t23 + 0x8)));
                t18 = (*(int *)((t34 + 0x0)));
                t35 = (*(int *)((t24 + 0x0)));
                if (t35 != t18) {
                    *(unsigned int *)((t24 + 0x0)) = t18;
                    t17 = (*(int *)((t24 + 0x8)));
                    t35 = (*(int *)0xC245F9C);
                    if (t17 != t35) {
                        t35 = (*(int *)(((int)stk + 12)));
                        t34 = (*(int *)((t24 + 0x98)));
                        if ((t34 & t35) != 0) {
                            t20 = a4;
                            t19 = t24;
                            t20 = (t20 + 0x3C);
                            t18 = a4;
                            t52 = FUN_0c01ee84(t18, t19, t20);
                            *(unsigned int *)(((int)stk + 28)) = t52;
                            if (t52 != 0) {
                                t19 = 0x8C;
                                t18 = a4;
                                t34 = 0xC0DCDA0;
                                t19 = (t19 + a4);
                                t18 = (t18 + 0x30);
                                u26 = (nlLength(t18, t19));
                                if (u28 > u26) {
                                    t35 = (*(int *)(((int)stk + 28)));
                                    t17 = ((int)stk + 4);
                                    t34 = (*(int *)(((int)stk + 4)));
                                    t17 = (t17 + 0x38);
                                    u28 = u26;
                                    *(unsigned int *)((t34 + 0x0)) = t35;
                                    t34 = 0x8C;
                                    t35 = 0xC0E61D4;
                                    t34 = (t34 + a4);
                                    *(unsigned int *)(((int)stk + 32)) = t24;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t17) = *(struct mv3 *)(t34); }
                                    t34 = 0x98;
                                    t17 = ((int)stk + 4);
                                    t17 = (t17 + 0x2C);
                                    t34 = (t34 + a4);
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t17) = *(struct mv3 *)(t34); }
                                }
                            }
                        }
                    }
                }
            }
            t22 = (t22 + 0xC);
            t21 = (t21 + 0x1);
        }
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
        t17 = (*(int *)(((int)stk + 24)));
        t17 = (t17 + 0x300);
        *(unsigned int *)(((int)stk + 24)) = t17;
    }
    if ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + a4)) = *(struct mv3 *)((((int)stk + 4) + 0x38)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + a4)) = *(struct mv3 *)((((int)stk + 4) + 0x2C)); }
    }
    return (*(int *)(((int)stk + 32)));
}

float FUN_0c0c8138(int a4, int a5, int a6, float f4, float f5)
{
    int t0;
    int t1;
    int t2;
    int t4;
    float u5;
    float u7;
    float u8;
    float u9;
    float u10;
    int t11;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    float u22;
    float u23;
    float u29;
    int t32;
    float u33;
    int t35;
    int t36;
    int t37;
    int t38;
    float u39;
    int t41;
    float u52;
    float u54;
    float u19;
    float u20;
    float u21;
    int stk[20];

    *(unsigned short *)(((int)stk + 8)) = 0x0;
    t0 = (a4 + 0x30);
    t1 = 0x0;
    t2 = 0xC1E9B8C;
    for (;;) {
        *(unsigned int *)(((int)stk + 20)) = t0;
        t4 = *(int *)((((0x98 + a4) + t1) + 0x0));
        *(float *)(((int)stk + 24)) = (*(float *)((t2 + 0x0)));
        u5 = *(float *)((t2 + 0x4));
        *(unsigned int *)(((int)stk + 28)) = (*(int *)((t2 + 0x18)));
        u7 = *(float *)((t2 + 0x8));
        u8 = *(float *)((t2 + 0x14));
        u9 = *(float *)((t2 + 0x10));
        u10 = *(float *)((t2 + 0xC));
        t11 = *(int *)((t2 + 0x1C));
        *(float *)(((int)stk + 12)) = ((-u10) / ((u7 * u8) - (u9 * u10)));
        *(float *)(((int)stk + 16)) = (u7 / ((u7 * u8) - (u9 * u10)));
        *(int *)((int)stk + 4) = ((0xF4 + a4) + t1);
        t13 = FUN_0c0e262a((((*(int *)(((int)stk + 28))) * t11) << 1));
        *(unsigned int *)((((0xF4 + a4) + t1) + 0x0)) = t13;
        t14 = t13;
        t15 = 0x0;
        t16 = a5;
        t17 = a6;
        t18 = t4;
        u22 = f4;
        u23 = f5;
        for (;;) {
            if ((int)(short)t15 >= (int)(*(int *)(((*(int *)(((int)stk + 20))) + 0x1C)))) {
                break;
            }
            t14 = 0x10;
            u22 = (*(float *)((t18 + 0x0)));
            u21 = (*(float *)((((int)stk + 8) + t14)));
            t14 = 0x8;
            u23 = (*(float *)((t18 + t14)));
            t14 = 0x8;
            u22 = (u22 - u21);
            u21 = ((-u9) / ((u7 * u8) - (u9 * u10)));
            u23 = (u23 - u5);
            t18 = (t18 + 0x14);
            u19 = u22;
            u21 = (u21 * u23);
            u29 = u21;
            u29 = u29 + u19 * (u8 / ((u7 * u8) - (u9 * u10)));
            u21 = u29;
            u20 = u21;
            u20 = (u20 + 0.5f);
            u21 = (*(float *)((((int)stk + 8) + t14)));
            t14 = 0x4;
            u21 = (u21 * u23);
            t32 = (int)u20;
            u20 = (*(float *)((((int)stk + 8) + t14)));
            u33 = u21;
            u33 = u33 + u19 * u20;
            u21 = u33;
            t17 = t32;
            u21 = (u21 + 0.5f);
            t14 = (t11 * t17);
            t16 = (int)u21;
            t14 = (t14 + t16);
            t14 = (t14 << 1);
            *(unsigned short *)((t13 + t14)) = t15;
            t15 = (t15 + 0x1);
        }
        t35 = *(short *)(((int)stk + 8));
        t2 = (t2 + 0x20);
        *(unsigned short *)(((int)stk + 8)) = (t35 + 0x1);
        t1 = (t1 + 0x4);
        t0 = (t0 + 0x20);
        if ((int)(short)(t35 + 0x1) >= (int)0x3) {
            break;
        }
    }
    t36 = (0x100 + a4);
    t37 = 0xC1E9BEC;
    t38 = 0x0;
    u39 = u19;
    for (;;) {
        t41 = *(int *)((t37 + 0x0));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t36) = *(struct mv3 *)((t37 + 0x4)); }
        *(unsigned int *)((t36 + 0xC)) = ((((t41 << 2) << 2) << 1) + 0xC1E9B8C);
        *(unsigned int *)((t36 + 0x10)) = (*(int *)(((((*(int *)((t37 + 0x0))) << 2) + (0x98 + a4)) + 0x0)));
        *(unsigned int *)((t36 + 0x14)) = (*(int *)(((((*(int *)((t37 + 0x0))) << 2) + (0xF4 + a4)) + 0x0)));
        *(float *)((t36 + 0x18)) = ((*(float *)((t37 + 0x4))) + (*(float *)((((((t41 << 2) << 2) << 1) + 0xC1E9B8C) + 0x0))));
        if ((short)t38 == 4) {
            u39 = (*(float *)((((((t41 << 2) << 2) << 1) + 0xC1E9B8C) + 0x8)));
            u52 = (*(float *)((t36 + 0x18)));
            u52 = u52 + u39 * (float)((*(int *)((((((t41 << 2) << 2) << 1) + 0xC1E9B8C) + 0x18))) - 1);
            u39 = (*(float *)((((((t41 << 2) << 2) << 1) + 0xC1E9B8C) + 0x10)));
            u54 = u52;
            u54 = u54 + u39 * ((float)((*(int *)((((((t41 << 2) << 2) << 1) + 0xC1E9B8C) + 0x1C))) - 1));
            *(float *)((t36 + 0x34)) = u54;
        }
        t38 = (t38 + 0x1);
        t36 = (t36 + 0x1C);
        t37 = (t37 + 0x10);
        if ((int)(short)t38 >= (int)0x5) {
            break;
        }
    }
    return u39;
}

int FUN_0c0a6928(int a4, int a5, int a6, Stk4 s, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    float u2;
    float u3;
    float u4;
    float u5;
    int stk[31];

    stk[19] = s.w[0];
    stk[20] = s.w[1];
    stk[21] = s.w[2];
    stk[22] = s.w[3];
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = f10;
    *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = f11;
    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(float *)(((int)stk + 52)) = ((*(float *)(((int)stk + 52))) - f7);
    *(float *)(((int)stk + 48)) = ((*(float *)(((int)stk + 48))) - f8);
    u2 = (*(float *)&s.w[0] - f9);
    *(float *)(((int)stk + 76)) = u2;
    u3 = (*(float *)&s.w[1] - f7);
    *(float *)(((int)stk + 80)) = u3;
    u4 = (*(float *)&s.w[2] - f8);
    *(float *)(((int)stk + 84)) = u4;
    u5 = (*(float *)&s.w[3] - f9);
    *(float *)(((int)stk + 88)) = u5;
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), f4, f5, f6);
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAX((-(*(int *)(((int)stk + 4)))));
    nlRotateAY((-(*(int *)(((int)stk + 8)))));
    *(float *)(((int)stk + 36)) = (*(float *)(((int)stk + 52)));
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 48)));
    *(float *)(((int)stk + 44)) = u2;
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x48) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)(((int)stk + 36)) = u3;
    *(float *)(((int)stk + 40)) = u4;
    *(float *)(((int)stk + 44)) = u5;
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    *(float *)(((((int)stk + 4) + 0x4C) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((((int)stk + 4) + 0x50) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x54) + 0x0)) = (*(float *)(((int)stk + 32)));
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    if (*(float *)&s.w[4] > u2) {
        u2 = *(float *)&s.w[4];
        *(float *)(((int)stk + 76)) = u2;
    }
    *(float *)(((int)stk + 36)) = (*(float *)(((int)stk + 52)));
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 48)));
    *(float *)(((int)stk + 44)) = u2;
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x48) + 0x0)) = (*(float *)(((int)stk + 32)));
    nlPopMatrix(0x1);
    *(float *)(((*(int *)(((int)stk + 20))) + 0x0)) = (f7 + (*(float *)(((int)stk + 52))));
    *(float *)(((*(int *)(((int)stk + 16))) + 0x0)) = (f8 + (*(float *)(((int)stk + 48))));
    *(float *)(((*(int *)(((int)stk + 12))) + 0x0)) = (f9 + u2);
    return 0x48;
}

int FUN_0c0d0648(int a4, int a5, int a6, int a7)
{
    int t0;
    int t5;
    int t14;
    int t16;
    int t37;
    int t43;
    int t48;
    int t49;
    int t3;
    int t73;
    int t62;
    int t51;
    int t33;
    int stk[14];

    t0 = *(int *)0xC9433A8;
    if (((int)(*(int *)0xC23ED50) < (int)(*(int *)((((t0 * 0x1C) + 0xC20BB20) + 0xC)))) && (t3 = *(int *)((((t0 * 0x1C) + 0xC20BB20) + 0x0)), (t3 & 2) != 0)) {
        *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x10000);
        *(unsigned int *)0xC247D04 = 0xA;
        t73 = 0xA;
    } else {
        t5 = FUN_0c0e1830(0xC0D07CC, 0x64);
        *(unsigned int *)0xC9433D4 = t5;
        FUN_0c0e19d0(t5);
        if (((*(int *)((((*(int *)0xC9433A8) * 0x1C) + 0xC20BB20))) & 0x8) != 0) {
            *(unsigned int *)0xC23A1A8 = ((*(int *)0xC23A1A8) | 0x48);
            FUN_0c0d1230();
            *(unsigned int *)((t5 + 0x44)) = 0x2F;
            *(unsigned int *)((t5 + 0x38)) = 0x5;
            t62 = 0x44;
        } else {
            if (((*(int *)0xC23A1A8) & 4) != 0) {
                *(unsigned int *)0xC23A1A8 = ((*(int *)0xC23A1A8) | 0x8);
                t14 = ((int (*)(void))(FUN_0c0d0f6c))();
                FUN_0c0d1230();
                *(unsigned int *)((t5 + 0x44)) = 0x2F;
                *(unsigned int *)((t5 + 0x38)) = 0x5;
                t51 = 0x44;
            } else {
                t16 = *(int *)0xC9433A8;
                if ((int)(*(int *)0xC23ED50) < (int)(*(int *)((((t16 * 0x1C) + 0xC20BB20) + 0xC)))) {
                    if (((*(int *)((((t16 * 0x1C) + 0xC20BB20) + 0x0))) & 1) != 0) {
                        *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x10000);
                    }
                    *(unsigned int *)0xC247D04 = 0xA;
                }
                { struct mv5 { int w[5]; }; *(struct mv5 *)(((int)stk + 4)) = *(struct mv5 *)(0xC1E9FDC); }
                *(unsigned int *)0xC23ED6C = (*(int *)((((int)stk + 4) + ((*(int *)0xC23A1B0) << 2))));
                *(unsigned int *)0xC23ED70 = 0x0;
                if ((((*(int *)0xC23A1A8) & 32) != 0) && (t33 = *(int *)0xC9433A8, t33 != 0)) {
                } else {
                    *(unsigned int *)0xC9433C4 = 0x0;
                }
                *(unsigned int *)0xC9433CC = 0x0;
                t37 = ((int (*)(Stk5))(FUN_0c0d0f6c))(*(Stk5 *)(((int)stk + 4)));
                t43 = 0xC20BB28;
                if ((*(int *)0xC23ED50) == (*(int *)((((*(int *)0xC9433A8) * 0x1C) + 0xC20BB28)))) {
                    t43 = (FUN_0c0cc7d8((*(int *)0xC23ED50)));
                }
                t48 = t43;
                t49 = 0x0;
                for (;;) {
                    if ((unsigned int)t49 >= (unsigned int)0x8) {
                        break;
                    }
                    t48 = t49;
                    t49 = (t49 + 0x4);
                    *(unsigned int *)((0xC9433B4 + t48)) = 0xFFFFFFFF;
                    *(unsigned int *)((0xC9433BC + t48)) = 0x0;
                }
                *(unsigned int *)0xC9433AC = 0x0;
                *(unsigned int *)0xC9433B0 = 0x0;
                *(unsigned int *)0xC23A1A8 = ((*(int *)0xC23A1A8) | 0x4);
                *(unsigned int *)0xC24FA14 = 0x1;
                t51 = 0xC24FA14;
            }
            t62 = t51;
        }
        t73 = t62;
    }
    return t73;
}

int FUN_0c0e2400(void)
{
    int t0;
    int t1;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t22;
    int t24;
    int t33;
    int t34;
    int t36;
    int t37;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t47;
    int t48;
    int t50;
    int t53;
    int t54;
    int t4;
    int stk[10];

    t0 = *(int *)0xC20B184;
    t1 = 0x0;
    if ((0xC52315C & 0x4) == 0) {
        t1 = 0x1;
    }
    if ((*(int *)0xC52315C) != 0) {
        t5 = 0xC52315C;
        for (;;) {
            t6 = *(int *)((t5 + 0x0));
            if (t6 == 0) {
                break;
            }
            t4 = t6;
            if (t4 != 1) {
                *(unsigned int *)((t5 + 0x0)) = 0x0;
                t7 = t6;
                if ((int)t6 < 0) {
                    t7 = (-t6);
                }
                t5 = (t5 + (t7 << 2));
                continue;
            }
            t9 = 0x0;
            t10 = 0x0;
            for (;;) {
                t10 = (t10 + 0x1);
                t4 = t9;
                *(unsigned int *)((0xC94C7C4 + t4)) = 0x0;
                *(unsigned int *)((0xC94C7A4 + t4)) = 0x0;
                t9 = (t9 + 0x4);
                if ((int)t10 >= (int)0x8) {
                    break;
                }
            }
            *(unsigned int *)0xC94C7E4 = 0x0;
            *(unsigned int *)0xC94C7A0 = 0x0;
            *(unsigned int *)0xC94C6F4 = 0x0;
            *(unsigned int *)0xC94C7EC = 0x1;
            *(unsigned int *)0xC52315C = (t1 + 0x4);
            *(unsigned int *)0xC523160 = (t1 + 0x4);
            *(unsigned int *)0xC523164 = (t1 + 0x4);
            t11 = *(int *)0xC52315C;
            t4 = t11;
            t4 = (t4 - 1);
            t4 = (t4 << 2);
            *(unsigned int *)((0xC52315C + t4)) = t11;
            t4 = ((unsigned int)(t0 - 0xC52315C) >> 2);
            t4 = (t4 - 1);
            t4 = (t4 << 2);
            *(unsigned int *)((0xC52315C + t4)) = 0x1;
            *(unsigned int *)(((((t1 + 0x4) << 2) + 0xC52315C) + 0x0)) = ((t1 - ((unsigned int)(t0 - 0xC52315C) >> 2)) + 0x5);
            *(unsigned int *)(((((t1 + 0x4) << 2) + 0xC52315C) + 0x4)) = 0x0;
            *(unsigned int *)(((((t1 + 0x4) << 2) + 0xC52315C) + 0x8)) = 0x0;
            t12 = *(int *)(((((t1 + 0x4) << 2) + 0xC52315C) + 0x0));
            t4 = (-t12);
            t4 = (t4 - 1);
            t4 = (t4 << 2);
            *(unsigned int *)(((((t1 + 0x4) << 2) + 0xC52315C) + t4)) = t12;
            t4 = 0xC94C7F0;
            *(unsigned int *)((t4 + 0x0)) = (-(*(int *)(((((t1 + 0x4) << 2) + 0xC52315C) + 0x0))));
            *(unsigned int *)0xC94C79C = 0x10000;
            t14 = *(int *)0xC94C6E8;
            if (t14 != 0) {
                t15 = *(int *)((t14 + 0x4));
                t16 = *(int *)((t14 + 0x0));
                *(int *)((int)stk + 36) = 0xC94C7C4;
                t17 = t14;
                t18 = t16;
                t19 = t15;
                for (;;) {
                    t17 = (t17 + 0x8);
                    *(unsigned int *)0xC94C7EC = ((*(int *)0xC94C7EC) + 0x1);
                    if ((0x4 & t17) != 0) {
                        t17 = (t17 + 0x4);
                    }
                    t18 = (t18 - t17);
                    t18 = (t18 >> 1);
                    t18 = (t18 >> 1);
                    t4 = t18;
                    t4 = (t4 - 1);
                    t22 = t18;
                    t18 = 0xC94C7F0;
                    t4 = (t4 << 2);
                    *(unsigned int *)((t17 + 0x0)) = 0x1;
                    *(unsigned int *)((t17 + t4)) = 0x1;
                    t24 = t17;
                    t17 = (t17 - 0xC52315C);
                    *(unsigned int *)((t18 + 0x0)) = ((*(int *)((t18 + 0x0))) + (t22 - 2));
                    t18 = 0xC52315C;
                    t18 = (t18 + 0x8);
                    t17 = (t17 + 0x4);
                    t17 = (t17 >> 1);
                    t17 = (t17 >> 1);
                    *(unsigned int *)(((t24 + 0x4) + 0x0)) = (-(t22 - 2));
                    *(unsigned int *)(((t24 + 0x4) + 0x4)) = 0x0;
                    *(unsigned int *)(((t24 + 0x4) + 0x8)) = (*(int *)((t18 + 0x0)));
                    t4 = (*(int *)(((t24 + 0x4) + 0x0)));
                    *(unsigned int *)(((int)stk + 32)) = t4;
                    t4 = (-t4);
                    t4 = (t4 - 1);
                    t4 = (t4 << 2);
                    *(unsigned int *)(((t24 + 0x4) + t4)) = 0xC94C7C4;
                    t4 = (*(int *)((t18 + 0x0)));
                    t4 = (t4 + 0x1);
                    t4 = (t4 << 2);
                    *(unsigned int *)((0xC52315C + t4)) = t17;
                    *(unsigned int *)((t18 + 0x0)) = t17;
                    if (t19 != 0) {
                        t18 = (*(int *)((t19 + 0x0)));
                        t17 = t19;
                        t19 = (*(int *)((t19 + 0x4)));
                        continue;
                    }
                    break;
                }
                return t4;
            }
            return t4;
        }
        FUN_0c0db0a0(0x14, 0x14);
        *(int *)((int)stk + 4) = 0xC1EA9A0;
        nlPrintf(0xC1EA9A0);
        for (;;) {
        }
    }
    t33 = 0x0;
    t34 = 0x0;
    for (;;) {
        t34 = (t34 + 0x1);
        *(unsigned int *)((0xC94C7C4 + t33)) = 0x0;
        *(unsigned int *)((0xC94C7A4 + t33)) = 0x0;
        t33 = (t33 + 0x4);
        if ((int)t34 >= (int)0x8) {
            break;
        }
    }
    *(unsigned int *)0xC94C7E4 = 0x0;
    *(unsigned int *)0xC94C7A0 = 0x0;
    *(unsigned int *)0xC94C6F4 = 0x0;
    *(unsigned int *)0xC94C7EC = 0x1;
    *(unsigned int *)0xC52315C = (t1 + 0x4);
    *(unsigned int *)0xC523160 = (t1 + 0x4);
    *(unsigned int *)0xC523164 = (t1 + 0x4);
    t36 = *(int *)0xC52315C;
    *(unsigned int *)((0xC52315C + ((t36 - 1) << 2))) = t36;
    *(unsigned int *)((0xC52315C + ((((unsigned int)(t0 - 0xC52315C) >> 2) - 1) << 2))) = 0x1;
    *(unsigned int *)(((((t1 + 0x4) << 2) + 0xC52315C) + 0x0)) = ((t1 - ((unsigned int)(t0 - 0xC52315C) >> 2)) + 0x5);
    *(unsigned int *)(((((t1 + 0x4) << 2) + 0xC52315C) + 0x4)) = 0x0;
    *(unsigned int *)(((((t1 + 0x4) << 2) + 0xC52315C) + 0x8)) = 0x0;
    t37 = *(int *)(((((t1 + 0x4) << 2) + 0xC52315C) + 0x0));
    *(unsigned int *)(((((t1 + 0x4) << 2) + 0xC52315C) + (((-t37) - 1) << 2))) = t37;
    *(unsigned int *)0xC94C7F0 = (-(*(int *)(((((t1 + 0x4) << 2) + 0xC52315C) + 0x0))));
    *(unsigned int *)0xC94C79C = 0x10000;
    t39 = *(int *)0xC94C6E8;
    if (t39 != 0) {
        t40 = *(int *)((t39 + 0x4));
        t41 = *(int *)((t39 + 0x0));
        *(int *)((int)stk + 36) = 0xC94C7C4;
        t42 = t39;
        t43 = t41;
        t44 = t40;
        for (;;) {
            t42 = (t42 + 0x8);
            *(unsigned int *)0xC94C7EC = ((*(int *)0xC94C7EC) + 0x1);
            if ((0x4 & t42) != 0) {
                t42 = (t42 + 0x4);
            }
            t43 = (t43 - t42);
            t43 = (t43 >> 1);
            t43 = (t43 >> 1);
            t47 = (t43 - 1);
            t48 = t43;
            t43 = 0xC94C7F0;
            *(unsigned int *)((t42 + 0x0)) = 0x1;
            *(unsigned int *)((t42 + (t47 << 2))) = 0x1;
            t50 = t42;
            t42 = (t42 - 0xC52315C);
            *(unsigned int *)((t43 + 0x0)) = ((*(int *)((t43 + 0x0))) + (t48 - 2));
            t43 = 0xC52315C;
            t43 = (t43 + 0x8);
            t42 = (t42 + 0x4);
            t42 = (t42 >> 1);
            t42 = (t42 >> 1);
            *(unsigned int *)(((t50 + 0x4) + 0x0)) = (-(t48 - 2));
            *(unsigned int *)(((t50 + 0x4) + 0x4)) = 0x0;
            *(unsigned int *)(((t50 + 0x4) + 0x8)) = (*(int *)((t43 + 0x0)));
            t53 = *(int *)(((t50 + 0x4) + 0x0));
            *(unsigned int *)(((int)stk + 32)) = t53;
            *(unsigned int *)(((t50 + 0x4) + (((-t53) - 1) << 2))) = 0xC94C7C4;
            t54 = *(int *)((t43 + 0x0));
            *(unsigned int *)((0xC52315C + ((t54 + 0x1) << 2))) = t42;
            *(unsigned int *)((t43 + 0x0)) = t42;
            if (t44 != 0) {
                t43 = (*(int *)((t44 + 0x0)));
                t42 = t44;
                t44 = (*(int *)((t44 + 0x4)));
                continue;
            }
            break;
        }
        return ((t54 + 0x1) << 2);
    }
    return 0xC94C7F0;
}

float FUN_0c036806(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    float u0;
    float u1;
    float u2;
    float u3;
    int t22;
    int t31;
    int t36;
    int t37;
    int t46;
    float t49;
    int stk[26];

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
    float F4;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    *(unsigned int *)(((int)stk + 12)) = R5;
    *(unsigned int *)(((int)stk + 20)) = R6;
    *(unsigned int *)(((int)stk + 16)) = R7;
    u0 = *(float *)((R4 + 0x0));
    u1 = *(float *)0xC23FE68;
    u2 = *(float *)((R4 + 0x8));
    u3 = *(float *)0xC23FE70;
    *(unsigned int *)(((int)stk + 36)) = (((int)((u0 - u1) * 0.049999997f) & 0x3F) - 2);
    R11 = (R4);
    R13 = (0x0);
    R14 = (((int)((u2 - u3) * 0.049999997f) & 0x1F));
    R5 = (0x1F);
    R6 = (0x3F);
    R7 = ((((int)((u0 - u1) * 0.049999997f) & 0x3F) + 0x2));
    if (((int)(((int)((u0 - u1) * 0.049999997f) & 0x3F) - 2) >= 0)) goto L_C036864;
    *(unsigned int *)(((int)stk + 36)) = R13;
    *(unsigned int *)(((int)stk + 28)) = R7;
    L_C03686C:;
    R4 = ((R14 - 2));
    R6 = ((R14 + 0x2));
    if (((int)(R14 - 2) >= 0)) goto L_C03687E;
    *(unsigned int *)(((int)stk + 32)) = R6;
    R4 = (R13);
    L_C036886:;
    *(unsigned int *)(((int)stk + 40)) = R13;
    *(unsigned int *)0xC245FA4 = ((*(int *)0xC245FA4) + 0x1);
    *(unsigned int *)(((int)stk + 8)) = R4;
    R8 = (((((R4 << 1) + R4) << 8) + 0xC23FF94));
    F15 = (9999.89941f);
    L_C036960:;
    if (((int)(*(int *)(((int)stk + 8))) <= (int)(*(int *)(((int)stk + 32))))) goto L_C0368A6;
    *(volatile int *)(((int)stk + 40));
    return F0;
    L_C0368A6:;
    t22 = *(int *)(((int)stk + 36));
    R10 = (((((t22 << 1) + t22) << 2) + R8));
    R9 = (t22);
    L_C036950:;
    if (((int)R9 <= (int)(*(int *)(((int)stk + 28))))) goto L_C0368B6;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    R8 = ((R8 + 0x300));
    goto L_C036960;
    L_C0368B6:;
    *(unsigned int *)(((int)stk + 24)) = R10;
    R13 = (R10);
    L_C036944:;
    t31 = *(int *)((R13 + 0x0));
    R13 = (t31);
    if ((t31 != (*(int *)(((int)stk + 24))))) goto L_C0368D4;
    R10 = ((R10 + 0xC));
    R9 = ((R9 + 0x1));
    goto L_C036950;
    L_C0368D4:;
    t36 = *(int *)((R13 + 0x8));
    t37 = *(int *)0xC245FA4;
    R14 = (t36);
    R4 = (t37);
    if (((*(int *)((t36 + 0x0))) == t37)) goto L_C036944;
    *(unsigned int *)((R14 + 0x0)) = R4;
    if ((((*(int *)((R14 + 0x98))) & (*(int *)(((int)stk + 20)))) == 0)) goto L_C036944;
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x24);
    t46 = FUN_0c01ef2a(R11, (*(int *)(((int)stk + 12))), R14, (((int)stk + 4) + 0x34), (((int)stk + 8) + 0x24));
    R12 = (t46);
    if ((t46 == 0)) goto L_C036944;
    t49 = nlLength(R11, (((int)stk + 8) + 0x30));
    F0 = (t49);
    F4 = (t49);
    if ((!(F15 > t49))) goto L_C036944;
    *(unsigned int *)(((int)stk + 40)) = R12;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a8) = *(struct mv3 *)((((int)stk + 8) + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 16)))) = *(struct mv3 *)((((int)stk + 8) + 0x24)); }
    *(float *)((a9 + 0x0)) = F4;
    *(unsigned int *)((a10 + 0x0)) = (*(int *)((R14 + 0x8)));
    F15 = (F4);
    goto L_C036944;
    L_C03687E:;
    *(unsigned int *)(((int)stk + 32)) = R6;
    if (((int)R6 <= (int)R5)) goto L_C036886;
    *(unsigned int *)(((int)stk + 32)) = R5;
    goto L_C036886;
    L_C036864:;
    *(unsigned int *)(((int)stk + 28)) = R7;
    if (((int)R7 <= (int)R6)) goto L_C03686C;
    *(unsigned int *)(((int)stk + 28)) = R6;
    goto L_C03686C;
}

int FUN_0c092884(int a4, int a5)
{
    int t0;
    int t1;
    int t8;
    int t24;
    int t25;
    int t26;
    int t32;
    int t41;
    int t49;
    int t55;
    int t61;
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
    t0 = *(int *)((R4 + 0xBC));
    t1 = *(int *)(((t0 << 2) + 0xC248DF8));
    R0 = (t1);
    R13 = ((t0 << 2));
    R14 = (0x0);
    R6 = (t0);
    if ((t1 == 0)) goto L_C0928B4;
    if ((R0 != 1)) goto L_C0928B0;
    t8 = *(int *)((R13 + 0xC248DF0));
    *(unsigned int *)((R13 + 0xC248DF0)) = (t8 + 0x1);
    R0 = (0xC248DF0);
    if ((((t8 + 0x1) & 0x7) != 0)) goto L_C0929EA;
    FUN_0c092858(R4);
    *(unsigned int *)((R13 + 0xC248DF8)) = R14;
    R0 = (0xC248DF8);
    L_C0929EA:;
    return R0;
    L_C0928B0:;
    goto L_C0929EA;
    L_C0928B4:;
    *(unsigned int *)((R13 + 0xC248DF0)) = ((*(int *)((R13 + 0xC248DF0))) + 0x1);
    R0 = (0xC248DF0);
    if ((((*(int *)((R5 + 0x0))) | (*(int *)((R5 + 0x4)))) != 0)) goto L_C0928CA;
    goto L_C0929EA;
    L_C0928CA:;
    *(unsigned int *)(((int)stk + 4)) = 0xC200A94;
    *(unsigned int *)(((int)stk + 8)) = R14;
    R11 = (((R6 * 0x78) + 0xC248E00));
    R12 = ((0xC248DF0 + R13));
    R6 = (0x1);
    R8 = (0x606);
    R9 = (0xFFFF);
    L_C0928E4:;
    t24 = *(int *)(((int)stk + 8));
    t25 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
    t26 = *(int *)((R11 + (t24 << 2)));
    R0 = ((t24 << 2));
    R4 = ((t25 + ((t26 << 2) << 1)));
    R7 = ((t24 << 2));
    if ((((*(int *)(((t25 + ((t26 << 2) << 1)) + 0x0))) & R8) == 0)) goto L_C09290A;
    t32 = *(int *)((R5 + 0x8));
    R10 = ((t32 & R8));
    if (((t32 & R8) == 0)) goto L_C0929EA;
    L_C09290C:;
    *(unsigned int *)(((int)stk + 12)) = 0xC248DF8;
    if ((R10 != (*(int *)((R4 + 0x0))))) goto L_C092960;
    if (((int)(*(int *)((R12 + 0x0))) >= (int)(*(int *)((R4 + 0x4))))) goto L_C092960;
    t41 = (*(int *)(((R4 + 0x8) + 0x0))) != R9;
    R4 = ((R4 + 0x8));
    if (t41) goto L_C092934;
    *(unsigned int *)((R13 + (*(int *)(((int)stk + 12))))) = R6;
    *(unsigned int *)((R13 + 0xC248DE8)) = (*(int *)((R4 + 0x4)));
    R0 = (0xC248DE8);
    goto L_C0929EA;
    L_C092934:;
    *(unsigned int *)((R11 + R7)) = ((*(int *)((R11 + R7))) + 0x1);
    *(unsigned int *)((R12 + 0x0)) = R14;
    R0 = (R7);
    L_C0929BE:;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    t49 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t49 + 0x4);
    if (((*(int *)(((t49 + 0x4) + 0x0))) == 0)) goto L_C0929EA;
    goto L_C0928E4;
    L_C092960:;
    if (((*(int *)((R4 + 0x0))) != 0)) goto L_C09299C;
    t55 = R10 != (*(int *)(((R4 + 0x8) + 0x0)));
    R4 = ((R4 + 0x8));
    if (t55) goto L_C0929BE;
    if (((int)(*(int *)((R12 + 0x0))) >= (int)(*(int *)((R4 + 0x4))))) goto L_C0929BE;
    t61 = (*(int *)(((R4 + 0x8) + 0x0))) != R9;
    R4 = ((R4 + 0x8));
    if (t61) goto L_C09298E;
    *(unsigned int *)((R13 + (*(int *)(((int)stk + 12))))) = R6;
    *(unsigned int *)((R13 + 0xC248DE8)) = (*(int *)((R4 + 0x4)));
    *(unsigned int *)((R13 + 0xC248DF0)) = R14;
    R0 = (0xC248DF0);
    goto L_C0929EA;
    L_C09298E:;
    *(unsigned int *)((R11 + R7)) = ((*(int *)((R11 + R7))) + 0x1);
    *(unsigned int *)((R12 + 0x0)) = R14;
    R0 = (R7);
    goto L_C0929BE;
    L_C09299C:;
    if (((*(int *)((R5 + 0x8))) == 0)) goto L_C0929BE;
    if (((*(int *)((R5 + 0x8))) != (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x0))))) goto L_C0929B8;
    *(unsigned int *)((R11 + R7)) = R6;
    *(unsigned int *)((R12 + 0x0)) = R14;
    R0 = (R7);
    goto L_C0929BE;
    L_C0929B8:;
    *(unsigned int *)((R11 + R7)) = R14;
    R0 = (R7);
    goto L_C0929BE;
    L_C09290A:;
    R10 = ((*(int *)((R5 + 0x8))));
    goto L_C09290C;
}

float FUN_0c0dbe40(int a4, int a5, int a6, float f4, float f5)
{
    int t2;
    int t0;
    int t5;
    int t7;
    int t8;
    float u11;
    float u12;
    int t17;
    float u19;
    int t1;
    int t6;
    int t9;
    float u10;
    int t13;
    int t15;
    int t16;
    float u18;
    int stk[18];

    *(unsigned int *)(((int)stk + 16)) = a4;
    t2 = a4;
    if (a4 == 0) {
        t0 = nlGetMatrix(0x0);
        t1 = t0;
        t2 = t0;
    }
    t5 = t1;
    t7 = a6;
    t8 = 0x0;
    u11 = f4;
    u12 = f5;
    for (;;) {
        if ((int)t8 >= (int)0x4) {
            t8 = 0x0;
            t17 = 0x0;
            u19 = 1.0f;
            for (;;) {
                if ((int)t8 >= (int)0x4) {
                    break;
                }
                t17 = t8;
                t9 = t8;
                u12 = (-1.0f);
                t9 = (t9 << 2);
                if ((int)t17 < (int)0x4) {
                    for (;;) {
                        t5 = t17;
                        t16 = (*(signed char *)((a5 + t5)));
                        t6 = t2;
                        t5 = t16;
                        t5 = (t5 << 2);
                        t5 = (t5 << 2);
                        t5 = (t5 + t6);
                        u10 = (*(float *)((t9 + t5)));
                        t5 = t16;
                        t5 = (t5 << 2);
                        u18 = (*(float *)(((((int)stk + 4) + 0x10) + t5)));
                        u10 = _builtin_fabsf(u10);
                        u11 = u10;
                        u11 = (u11 * u18);
                        if (u11 > u12) {
                            t7 = t17;
                            u12 = u11;
                        }
                        t17 = (t17 + 0x1);
                        if ((int)t17 >= (int)0x4) {
                            break;
                        }
                    }
                }
                t15 = t7;
                t15 = (t15 + a5);
                t17 = (*(signed char *)((t15 + 0x0)));
                if (t7 != t8) {
                    t16 = t8;
                    t16 = (t16 + a5);
                    t13 = (*(signed char *)((t16 + 0x0)));
                    u19 = (-u19);
                    *(unsigned char *)((t15 + 0x0)) = t13;
                    *(unsigned char *)((t16 + 0x0)) = t17;
                }
                t15 = t17;
                t15 = (t15 << 2);
                t5 = t2;
                t15 = (t15 << 2);
                t5 = (t5 + t15);
                u10 = 0.0f;
                u11 = (*(float *)((t9 + t5)));
                u19 = (u19 * u11);
                if (u11 != u10) {
                    t16 = t8;
                    t16 = (t16 + 0x1);
                    t6 = t16;
                    t6 = (t6 + a5);
                    *(unsigned int *)(((int)stk + 4)) = t16;
                    *(unsigned int *)(((int)stk + 12)) = t6;
                    for (;;) {
                        if ((int)t16 >= (int)0x4) {
                            break;
                        }
                        t7 = (*(int *)(((int)stk + 12)));
                        t5 = t2;
                        t7 = (t7 + 0x1);
                        *(unsigned int *)(((int)stk + 12)) = t7;
                        t7 = (t7 - 1);
                        t7 = (*(signed char *)((t7 + 0x0)));
                        t17 = t7;
                        t17 = (t17 << 2);
                        t17 = (t17 << 2);
                        t5 = (t5 + t17);
                        u12 = (*(float *)((t9 + t5)));
                        u12 = (u12 / u11);
                        *(float *)((t9 + t5)) = u12;
                        t7 = (*(int *)(((int)stk + 4)));
                        if ((int)t7 < (int)0x4) {
                            for (;;) {
                                t13 = (t2);
                                t6 = t7;
                                t13 = (t13 + t15);
                                t6 = (t6 << 2);
                                u18 = u12;
                                t13 = (t13 + t6);
                                t5 = t2;
                                t5 = (t5 + t17);
                                *(unsigned int *)(((int)stk + 8)) = t6;
                                u10 = (*(float *)((t13 + 0x0)));
                                t5 = (t5 + t6);
                                t7 = (t7 + 0x1);
                                u18 = (u18 * u10);
                                u10 = (*(float *)((t5 + 0x0)));
                                u10 = (u10 - u18);
                                *(float *)((t5 + 0x0)) = u10;
                                if ((int)t7 >= (int)0x4) {
                                    break;
                                }
                            }
                        }
                        t16 = (t16 + 0x1);
                    }
                    t8 = (t8 + 0x1);
                    continue;
                }
                return u19;
            }
            if ((*(int *)(((int)stk + 16))) == 0) {
                t6 = 0xC0DBDA0;
                t5 = (FUN_0c0dbda0(t2));
                return u19;
            }
            return u19;
        }
        t5 = t8;
        t9 = t5;
        t9 = (t9 << 2);
        t7 = 0x0;
        *(unsigned char *)((a5 + t5)) = t5;
        u11 = 0.0f;
        t9 = (t9 << 2);
        for (;;) {
            if ((int)t7 >= (int)0x4) {
                break;
            }
            t6 = t7;
            t5 = t2;
            t6 = (t6 << 2);
            t5 = (t5 + t9);
            u10 = (*(float *)((t6 + t5)));
            u10 = _builtin_fabsf(u10);
            u12 = u10;
            t7 = (t7 + 0x1);
            if (u12 > u11) {
                u11 = u12;
            }
        }
        u10 = 0.0f;
        if (u11 == u10) {
            break;
        }
        u10 = 1.0f;
        u10 = (u10 / u11);
        t5 = t8;
        t5 = (t5 << 2);
        t8 = (t8 + 0x1);
        *(float *)(((((int)stk + 4) + 0x10) + t5)) = u10;
    }
    return 0.0f;
}

int FUN_0c0e509a(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t9;
    int t15;
    int t32;
    int t37;
    int stk[8];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    *(unsigned int *)(((int)stk + 12)) = R4;
    *(unsigned int *)(((int)stk + 8)) = R5;
    *(unsigned short *)(((((int)stk + 4) + 0x2) + 0x0)) = R6;
    t0 = *(int *)(((int)stk + 12));
    t2 = *(signed char *)((t0 + 0x9));
    R0 = ((t2 & 0x3));
    R14 = ((*(int *)((t0 + 0xC))));
    if (((t2 & 0x3) == 0)) goto L_C0E50C6;
    if ((R0 == 1)) goto L_C0E50CC;
    if ((R0 == 2)) goto L_C0E50D2;
    L_C0E50D8:;
    t9 = *(signed char *)(((*(int *)(((int)stk + 12))) + 0x8));
    R0 = (t9);
    if ((t9 == 0)) goto L_C0E50F0;
    if ((R0 == 1)) goto L_C0E50F6;
    if ((R0 == 2)) goto L_C0E50FC;
    if ((R0 == 3)) goto L_C0E50FC;
    L_C0E5102:;
    t15 = *(int *)(((int)stk + 8));
    R0 = (t15);
    if ((t15 == 0)) goto L_C0E5134;
    if ((R0 == 1)) goto L_C0E5140;
    if ((R0 == 2)) goto L_C0E5148;
    if ((R0 == 3)) goto L_C0E5168;
    if ((R0 == 4)) goto L_C0E5170;
    if ((R0 == 5)) goto L_C0E5178;
    if ((R0 == 6)) goto L_C0E5190;
    if ((R0 == 7)) goto L_C0E51A2;
    if ((R0 == 8)) goto L_C0E51B0;
    if ((R0 == 9)) goto L_C0E51C2;
    if ((R0 == 10)) goto L_C0E51F0;
    R0 = (0xFFFFFFFF);
    L_C0E5202:;
    return R0;
    L_C0E51F0:;
    R0 = ((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 12))) + 0x1E))));
    goto L_C0E5202;
    L_C0E51C2:;
    t32 = *(int *)(((int)stk + 12));
    R3 = (t32);
    if (((*(signed char *)((t32 + 0x1F))) == 0)) goto L_C0E51D2;
    R0 = (0x0);
    goto L_C0E5202;
    L_C0E51D2:;
    t37 = *(short *)((R3 + 0x16));
    R14 = (((unsigned int)((unsigned int)((unsigned int)(unsigned short)t37 >> 2) >> 2) >> 2));
    if ((((unsigned int)((unsigned int)((unsigned int)(unsigned short)t37 >> 2) >> 2) >> 2) != 0)) goto L_C0E51E8;
    R0 = (0x1);
    goto L_C0E5202;
    L_C0E51E8:;
    R0 = (R14);
    goto L_C0E5202;
    L_C0E51B0:;
    R0 = (((int)((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 12))) + 0x33))) & 0xF0) >> 4));
    goto L_C0E5202;
    L_C0E51A2:;
    R0 = (((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 12))) + 0x33))) & 0xF));
    goto L_C0E5202;
    L_C0E5190:;
    R0 = ((unsigned char)(*(signed char *)((((((*(short *)(((int)stk + 6))) << 2) + (*(int *)(((int)stk + 12)))) + 0x32) + 0x0))));
    goto L_C0E5202;
    L_C0E5178:;
    R0 = ((unsigned char)(*(signed char *)((((((*(short *)(((int)stk + 6))) << 2) + (*(int *)(((int)stk + 12)))) + 0x31) + 0x0))));
    goto L_C0E5202;
    L_C0E5170:;
    R0 = (R13);
    goto L_C0E5202;
    L_C0E5168:;
    R0 = (R14);
    goto L_C0E5202;
    L_C0E5148:;
    FUN_0c0e5dc0();
    R0 = ((FUN_0c0e5dc0()));
    goto L_C0E5202;
    L_C0E5140:;
    R0 = (R12);
    goto L_C0E5202;
    L_C0E5134:;
    R0 = ((unsigned short)(*(short *)(((*(int *)(((int)stk + 12))) + 0x2A))));
    goto L_C0E5202;
    L_C0E50FC:;
    R12 = (0x4);
    goto L_C0E5102;
    L_C0E50F6:;
    R12 = (0x8);
    goto L_C0E5102;
    L_C0E50F0:;
    R12 = (0x10);
    goto L_C0E5102;
    L_C0E50D2:;
    R13 = (0x4);
    goto L_C0E50D8;
    L_C0E50CC:;
    R13 = (0x2);
    goto L_C0E50D8;
    L_C0E50C6:;
    R13 = (0x1);
    goto L_C0E50D8;
}
