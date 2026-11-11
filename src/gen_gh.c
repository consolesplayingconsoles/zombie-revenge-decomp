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
int _divls(void);
int _modls(void);
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
int FUN_0c036806(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c092884(int a4, int a5);
float FUN_0c0dbe40(int a4, int a5, int a6, float f4, float f5);
int FUN_0c0e509a(int a4, int a5, int a6);
struct o44_uint { char p[0x44]; unsigned int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };










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

    t0 = (((struct o0_int *)0xC9433A8)->v);
    if (((int)((((struct o0_int *)0xC23ED50)->v)) < (int)(*(int *)((((t0 * 0x1C) + 0xC20BB20) + 0xC)))) && (t3 = *(int *)((((t0 * 0x1C) + 0xC20BB20) + 0x0)), (t3 & 2) != 0)) {
        (((struct oC_uint *)0xC23ED50)->v) = (((((struct oC_int *)0xC23ED50)->v)) | 0x10000);
        *(unsigned int *)0xC247D04 = 0xA;
        t73 = 0xA;
    } else {
        t5 = FUN_0c0e1830(0xC0D07CC, 0x64);
        (((struct o2C_uint *)0xC9433A8)->v) = t5;
        FUN_0c0e19d0(t5);
        if (((*(int *)(((((((struct o0_int *)0xC9433A8)->v)) * 0x1C) + 0xC20BB20))) & 0x8) != 0) {
            (((struct o0_uint *)0xC23A1A8)->v) = (((((struct o0_int *)0xC23A1A8)->v)) | 0x48);
            FUN_0c0d1230();
            (((struct o44_uint *)(t5))->v) = 0x2F;
            *(unsigned int *)((t5 + 0x38)) = 0x5;
            t62 = 0x44;
        } else {
            if ((((((struct o0_int *)0xC23A1A8)->v)) & 4) != 0) {
                (((struct o0_uint *)0xC23A1A8)->v) = (((((struct o0_int *)0xC23A1A8)->v)) | 0x8);
                t14 = ((int (*)(void))(FUN_0c0d0f6c))();
                FUN_0c0d1230();
                (((struct o44_uint *)(t5))->v) = 0x2F;
                *(unsigned int *)((t5 + 0x38)) = 0x5;
                t51 = 0x44;
            } else {
                t16 = (((struct o0_int *)0xC9433A8)->v);
                if ((int)((((struct o0_int *)0xC23ED50)->v)) < (int)(*(int *)((((t16 * 0x1C) + 0xC20BB20) + 0xC)))) {
                    if (((*(int *)((((t16 * 0x1C) + 0xC20BB20) + 0x0))) & 1) != 0) {
                        (((struct oC_uint *)0xC23ED50)->v) = (((((struct oC_int *)0xC23ED50)->v)) | 0x10000);
                    }
                    *(unsigned int *)0xC247D04 = 0xA;
                }
                { struct mv5 { int w[5]; }; *(struct mv5 *)(((int)stk + 4)) = *(struct mv5 *)(0xC1E9FDC); }
                (((struct o1C_uint *)0xC23ED50)->v) = (*(int *)((((int)stk + 4) + (((((struct o8_int *)0xC23A1A8)->v)) << 2))));
                (((struct o20_uint *)0xC23ED50)->v) = 0x0;
                if (((((((struct o0_int *)0xC23A1A8)->v)) & 32) != 0) && (t33 = (((struct o0_int *)0xC9433A8)->v), t33 != 0)) {
                } else {
                    (((struct o1C_uint *)0xC9433A8)->v) = 0x0;
                }
                (((struct o24_uint *)0xC9433A8)->v) = 0x0;
                t37 = ((int (*)(Stk5))(FUN_0c0d0f6c))(*(Stk5 *)(((int)stk + 4)));
                t43 = 0xC20BB28;
                if (((((struct o0_int *)0xC23ED50)->v)) == (*(int *)(((((((struct o0_int *)0xC9433A8)->v)) * 0x1C) + 0xC20BB28)))) {
                    t43 = (FUN_0c0cc7d8(((((struct o0_int *)0xC23ED50)->v))));
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
                (((struct o4_uint *)0xC9433A8)->v) = 0x0;
                (((struct o8_uint *)0xC9433A8)->v) = 0x0;
                (((struct o0_uint *)0xC23A1A8)->v) = (((((struct o0_int *)0xC23A1A8)->v)) | 0x4);
                *(unsigned int *)0xC24FA14 = 0x1;
                t51 = 0xC24FA14;
            }
            t62 = t51;
        }
        t73 = t62;
    }
    return t73;
}


int FUN_0c036806(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
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
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    int R1028;
    int R1032;
    int R1036;
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);
    R1036 = *(int *)((int)stk + 36);
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    R1012 = R5;
    R1020 = R6;
    R1016 = R7;
    u0 = *(float *)((R4 + 0x0));
    u1 = (((struct o0_float *)0xC23FE68)->v);
    u2 = *(float *)((R4 + 0x8));
    u3 = (((struct o8_float *)0xC23FE68)->v);
    R1036 = (((int)((u0 - u1) * 0.049999997f) & 0x3F) - 2);
    R11 = (R4);
    R13 = (0x0);
    R14 = (((int)((u2 - u3) * 0.049999997f) & 0x1F));
    R5 = (0x1F);
    R6 = (0x3F);
    R7 = ((((int)((u0 - u1) * 0.049999997f) & 0x3F) + 0x2));
    if (((int)(((int)((u0 - u1) * 0.049999997f) & 0x3F) - 2) >= 0)) goto L_C036864;
    R1036 = R13;
    R1028 = R7;
    L_C03686C:;
    R4 = ((R14 - 2));
    R6 = ((R14 + 0x2));
    if (((int)(R14 - 2) >= 0)) goto L_C03687E;
    R1032 = R6;
    R4 = (R13);
    L_C036886:;
    *(unsigned int *)(((int)stk + 40)) = R13;
    *(unsigned int *)0xC245FA4 = ((*(int *)0xC245FA4) + 0x1);
    R1008 = R4;
    R8 = (((((R4 << 1) + R4) << 8) + 0xC23FF94));
    F15 = (9999.89941f);
    L_C036960:;
    if (((int)(R1008) <= (int)(R1032))) goto L_C0368A6;
    return *(volatile int *)(((int)stk + 40));
    L_C0368A6:;
    t22 = R1036;
    R10 = (((((t22 << 1) + t22) << 2) + R8));
    R9 = (t22);
    L_C036950:;
    if (((int)R9 <= (int)(R1028))) goto L_C0368B6;
    R1008 = ((R1008) + 0x1);
    R8 = ((R8 + 0x300));
    goto L_C036960;
    L_C0368B6:;
    R1024 = R10;
    R13 = (R10);
    L_C036944:;
    t31 = *(int *)((R13 + 0x0));
    R13 = (t31);
    if ((t31 != (R1024))) goto L_C0368D4;
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
    if ((((*(int *)((R14 + 0x98))) & (R1020)) == 0)) goto L_C036944;
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x24);
    t46 = FUN_0c01ef2a(R11, (R1012), R14, (((int)stk + 4) + 0x34), (((int)stk + 8) + 0x24));
    R12 = (t46);
    if ((t46 == 0)) goto L_C036944;
    t49 = nlLength(R11, (((int)stk + 8) + 0x30));
    F0 = (t49);
    F4 = (t49);
    if ((!(F15 > t49))) goto L_C036944;
    *(unsigned int *)(((int)stk + 40)) = R12;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a8) = *(struct mv3 *)((((int)stk + 8) + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R1016)) = *(struct mv3 *)((((int)stk + 8) + 0x24)); }
    *(float *)((a9 + 0x0)) = F4;
    *(unsigned int *)((a10 + 0x0)) = (*(int *)((R14 + 0x8)));
    F15 = (F4);
    goto L_C036944;
    L_C03687E:;
    R1032 = R6;
    if (((int)R6 <= (int)R5)) goto L_C036886;
    R1032 = R5;
    goto L_C036886;
    L_C036864:;
    R1028 = R7;
    if (((int)R7 <= (int)R6)) goto L_C03686C;
    R1028 = R6;
    goto L_C03686C;
}


float FUN_0c0dbe40(int a4, int a5, int a6, float f4, float f5)
{
    int t2;
    int t5;
    int t7;
    int t8;
    float u11;
    float u12;
    int t17;
    float u19;
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
        t2 = nlGetMatrix(0x0);
        t5 = t2;
    }
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





