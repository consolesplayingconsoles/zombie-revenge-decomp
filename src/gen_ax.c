/* Straight-line functions with calls and guards (batch gen_ax): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01d562(int, int, int, int, int, int, int, int, int);
int FUN_0c01e7e8(int, int, int);
float FUN_0c01f1b8(int, int);
int FUN_0c02286c(int, int, float, float);
extern int FUN_0c02a19a();
int FUN_0c032394(int);
int FUN_0c032590(int, float, float);
int FUN_0c032aa6(int);
int FUN_0c034134(int, float);
int FUN_0c034c26(int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c03f4bc(int);
int FUN_0c03f63c(int, int);
int FUN_0c041dd0(int);
int FUN_0c049c0a(int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c085704(int);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0a7984(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bb0f4(int);
int FUN_0c0bc750(int, int);
int FUN_0c0c1480(void);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d0f6c(void);
int sys_init(void);
int FUN_0c0d8ae0(int);
int FUN_0c0d8ba0(int);
int FUN_0c0d91e0(int);
int FUN_0c0d9a40(int);
int FUN_0c0d9dc0(float, float);
int FUN_0c0da2e0(void);
int FUN_0c0db2a0(int);
int FUN_0c0db470(int, int);
int nlGetMatrix(int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
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
int nlAddVector(int, int);
extern int FUN_0c0dce80();
int FUN_0c0ddd20(float, float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int);
int _quick_odd_mvn(int, int, int);
int FUN_0c20e0ba(float);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int kmInitDevice(void);
int kmSetDisplayMode(int, int, int, int);
int kmSetWaitVsyncCount(int);
int FUN_0c087aa0(int a4, int a5, int a6);
int FUN_0c0bb788(int a4);
int FUN_0c0bd164(int a4, int a5, int a6, int a7, int a8);
int FUN_0c08a3d4(int a4, int a5, int a6);
int FUN_0c0a8d80(int a4);
int FUN_0c0c22be(int a4);
void FUN_0c03f6c2(int a4, int a5, int a6, int a7);
void FUN_0c0d8d00(int a4, int a5, int a6);
int FUN_0c0520a4(int a4);
int FUN_0c02374e(int a4, int a5, int a6, int a7);
float FUN_0c022aa6(int a4);
int FUN_0c046442(int a4);




int FUN_0c08a3d4(int a4, int a5, int a6)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    int t9;
    float u10;
    int t13;
    int t15;
    float u20;
    float u22;
    int t24;
    int t28;
    int t30;

    u0 = *(float *)((a6 + 0x8));
    u1 = *(float *)((a5 + 0x8));
    u2 = *(float *)((a6 + 0x0));
    u3 = *(float *)((a5 + 0x0));
    u4 = ((u1 - u0) * (u1 - u0));
    u4 = u4 + (u3 - u2) * (u3 - u2);
    if (0.349999994f > _builtin_sqrtf(u4)) {
        return 0xC08A4F4;
    }
    t9 = FUN_0c0d9dc0(((*(float *)((a5 + 0x0))) - (*(float *)((a6 + 0x0)))), ((*(float *)((a5 + 0x8))) - (*(float *)((a6 + 0x8)))));
    u10 = _builtin_sqrtf(u4);
    if (!(1.0f > _builtin_sqrtf(u4))) {
        u10 = 1.0f;
    }
    nlPushMatrix(0x0);
    if ((int)(int)(u10 * 20.0f) > 0) {
        t13 = 0x0;
        for (;;) {
            t15 = FUN_0c0e19aa(0xC08ACC8, 0x5C, (*(int *)((a4 + 0x30))));
            FUN_0c0e19d0(t15);
            *(float *)((t15 + 0x30)) = (*(float *)((a5 + 0x0)));
            *(float *)((t15 + 0x34)) = 3.0f;
            *(float *)((t15 + 0x38)) = (*(float *)((a5 + 0x8)));
            u20 = (1.0f + 1.0f);
            u20 = u20 + 7.62962736e-05f * (float)(FUN_0c0da2e0());
            *(float *)((t15 + 0x48)) = u20;
            u22 = 0.00999999978f;
            u22 = u22 + 1.52592547e-05f * (float)(FUN_0c0da2e0());
            *(float *)((t15 + 0x44)) = u22;
            *(unsigned int *)(((0x58 + t15) + 0x0)) = (((FUN_0c0da2e0()) & 0x3) + 0x5);
            t24 = FUN_0c0da2e0();
            if ((t24 & 31) != 0) {
                *(unsigned int *)((t15 + 0x54)) = 0x393;
            } else {
                *(unsigned int *)((t15 + 0x54)) = 0x392;
            }
            nlUnitMatrix();
            t28 = FUN_0c0da2e0();
            nlRotateAY(((short)t9 + (((t28 & 0x3FFF) - 8192) << 1)));
            t30 = FUN_0c0da2e0();
            nlRotateAX(((-(t30 & 0x1FFF)) - 1820));
            FUN_0c0db470((t15 + 0x3C), (t15 + 0x3C));
            t13 = (t13 + 0x1);
            if ((int)t13 >= (int)(int)(u10 * 20.0f)) {
                break;
            }
        }
    }
    return nlPopMatrix(0x1);
}



void FUN_0c03f6c2(int a4, int a5, int a6, int a7)
{
    int t0;
    int t8;
    int t20;
    float t27;
    float u34;
    int t43;
    int t46;
    int stk[8];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C03F6C2:;
    t0 = *(int *)((R4 + 0x4EC));
    R0 = (t0);
    R14 = (R4);
    F14 = (5.0f);
    F15 = (0.0f);
    if ((t0 == 0)) goto L_C03F720;
    goto L_C03F6DC;
    L_C03F6DC:;
    if ((R0 == 1)) goto L_C03F778;
    goto L_C03F6E0;
    L_C03F6E0:;
    if ((R0 != 2)) goto L_C03F6E8;
    goto L_C03F6E4;
    L_C03F6E4:;
    goto L_C03F86C;
    L_C03F86C:;
    t8 = *(int *)((R14 + 0x2EC));
    R0 = (t8);
    if (((t8 & 12) == 0)) goto L_C03F878;
    goto L_C03F874;
    L_C03F874:;
    R0 = ((FUN_0c03f4bc(R14)));
    goto L_C03F878;
    L_C03F878:;
    return;
    L_C03F6E8:;
    goto L_C03F878;
    L_C03F778:;
    R0 = (0x26C);
    if ((!((*(float *)((R14 + 0x26C))) > -1.25f))) goto L_C03F790;
    goto L_C03F784;
    L_C03F784:;
    *(float *)((R14 + R0)) = ((*(float *)((R14 + R0))) - 0.049999997f);
    goto L_C03F790;
    L_C03F790:;
    *(float *)((R14 + 0x4C)) = ((*(float *)((R14 + 0x4C))) + ((*(float *)(((0x26C + R14) + 0x0))) + 0.5f));
    t20 = (FUN_0c034134(R14, F14)) == 0;
    if (t20) goto L_C03F7D2;
    goto L_C03F7B2;
    L_C03F7B2:;
    if (((*(int *)((R14 + 0x508))) != 0)) goto L_C03F7D2;
    goto L_C03F7BA;
    L_C03F7BA:;
    FUN_0c0546fe(R14, (*(short *)(((*(int *)((((*(int *)((R14 + 0x510))) << 2) + 0xC246FF0))) + 0x6E))), 0x200, 0x0);
    goto L_C03F7D2;
    L_C03F7D2:;
    t27 = FUN_0c01f1b8((R14 + 0x30), ((int)stk + 4));
    F0 = (t27);
    F4 = (t27);
    if (((*(int *)((R14 + 0xD8))) == 0)) goto L_C03F7F0;
    goto L_C03F7E6;
    L_C03F7E6:;
    R0 = ((FUN_0c03f63c(R14, 0x0)));
    goto L_C03F878;
    L_C03F7F0:;
    u34 = *(float *)((R14 + 0x34));
    R0 = (0x34);
    F1 = (u34);
    if ((!((F4 + 10.8623991f) > u34))) goto L_C03F878;
    goto L_C03F800;
    L_C03F800:;
    *(unsigned int *)((R14 + 0x4E0)) = ((*(int *)((R14 + 0x4E0))) + 0x1);
    *(unsigned int *)((R14 + 0x4EC)) = ((*(int *)((R14 + 0x4EC))) + 0x1);
    *(float *)((R14 + 0x34)) = F4;
    *(float *)((R14 + 0x4C)) = F15;
    *(unsigned int *)((R14 + 0x20C)) = ((*(int *)((R14 + 0x20C))) | 0x800);
    R0 = ((FUN_0c041dd0(R14)));
    goto L_C03F878;
    L_C03F720:;
    t43 = FUN_0c034c26(R14);
    R0 = (t43);
    if ((t43 == 0)) goto L_C03F750;
    goto L_C03F72A;
    L_C03F72A:;
    t46 = FUN_0c034134(R14, F14);
    R0 = (t46);
    if ((t46 == 0)) goto L_C03F750;
    goto L_C03F736;
    L_C03F736:;
    R0 = (0x508);
    if (((*(int *)((R14 + 0x508))) != 0)) goto L_C03F750;
    goto L_C03F73E;
    L_C03F73E:;
    *(unsigned short *)((R14 + 0x6E)) = (*(short *)(((*(int *)((((*(int *)((R14 + 0x510))) << 2) + 0xC246FF0))) + 0x6E)));
    goto L_C03F75E;
    L_C03F75E:;
    *(float *)((R14 + 0x26C)) = F15;
    *(unsigned int *)((R14 + 0x20C)) = 0x1;
    *(unsigned int *)((R14 + 0xD8)) = 0x0;
    *(unsigned int *)((R14 + 0x4EC)) = ((*(int *)((R14 + 0x4EC))) + 0x1);
    R0 = (0x4EC);
    goto L_C03F878;
    L_C03F750:;
    if (((int)(*(int *)0xC2462F4) <= (int)0x2)) goto L_C03F75E;
    goto L_C03F75A;
    L_C03F75A:;
    goto L_C03F878;
}


int FUN_0c0520a4(int a4)
{
    int t0;
    int t1;
    int t7;
    int t8;
    float u9;
    float u32;
    float u46;
    float u48;
    int t58;
    int t2;
    int t49;
    float u55;
    float u56;

    t0 = *(int *)0xC2475C0;
    t1 = *(int *)((a4 + 0x38));
    *(unsigned int *)0xC2475C0 = (t0 + t1);
    if (((int)(t0 + t1) < (int)0x1555) && (t2 = *(int *)0xC2475C0, (int)t2 > (int)0xFFFFEAAB)) {
    } else {
        *(unsigned int *)((a4 + 0x38)) = (-(*(int *)((a4 + 0x38))));
    }
    t7 = *(int *)((a4 + 0x30));
    t8 = *(int *)0xC23EDB0;
    if (t7 != 0) {
        if (t7 != 1) {
            if (t7 != 2) {
                if (t7 != 3) {
                } else {
                    if (t8 != 0) {
                        *(unsigned int *)((a4 + 0x30)) = 0x1;
                    } else {
                        u9 = *(float *)((a4 + 0x34));
                        *(float *)((a4 + 0x34)) = (u9 - 0.0666666627f);
                        if (!((u9 - 0.0666666627f) > 0.0f)) {
                            *(unsigned int *)((a4 + 0x30)) = 0x0;
                        }
                    }
                }
            } else {
                if ((*(int *)0xC23EDB0) == 0) {
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                }
            }
        } else {
            u32 = *(float *)((a4 + 0x34));
            *(float *)((a4 + 0x34)) = (u32 + 0.0666666627f);
            if (!(1.0f > (u32 + 0.0666666627f))) {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
            }
            if ((*(int *)0xC23EDB0) == 0) {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
            }
        }
        u46 = *(float *)0xC052278;
        u48 = *(float *)((a4 + 0x34));
        if ((((*(int *)0xC23A1A8) & 0x101) != 0) && (t49 = *(int *)0xC23ED5C, (t49 & 0x10000) != 0)) {
            u55 = (*(float *)0xC05228C);
            u56 = 1.0f;
        } else {
            u55 = (*(float *)0xC052288);
            u56 = u48;
        }
        *(float *)0xC2475B8 = u56;
        *(float *)0xC2475BC = (-(u56 * (*(float *)0xC052294)));
        t58 = *(int *)0xC23EDB0;
        if (t58 != -1) {
            if (u56 > 0.0f) {
                nlPushMatrix(0x0);
                FUN_0c0db2a0(0x0);
                nlUnitMatrix();
                FUN_0c0dcc70(0.0f, ((((-(u56 * u55)) + (*(float *)0xC0522AC))) * (*(float *)0xC0522B0)), (*(float *)0xC0522A8));
                nlRotateAX(0x7FFF);
                nlRotateAZ(0x7FFF);
                nlScale(u46, u46, u46);
                FUN_0c0de000(u46);
                FUN_0c0c465c(0x1F);
                nlUnitMatrix();
                FUN_0c0dcc70(0.0f, ((((u56 * u55) + (*(float *)0xC0522CC))) * (*(float *)0xC0522B0)), (*(float *)0xC0522A8));
                nlRotateAX(0x7FFF);
                nlScale(u46, u46, u46);
                FUN_0c0de000(u46);
                FUN_0c0c465c(0x1F);
                FUN_0c0db2a0((*(int *)0xC248A94));
                return nlPopMatrix(0x1);
            }
            return t58;
        }
        return t58;
    }
    if (t8 == 0) {
    } else {
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
    }
    return t7;
}

int FUN_0c02374e(int a4, int a5, int a6, int a7)
{
    int t0;
    int t117;
    int t95;
    int t70;
    int t30;
    int t6;
    int t9;
    int t25;
    int t14;
    int t15;
    int t40;
    int t64;
    int t42;
    int t49;
    int t60;
    int t50;
    int t80;
    int t89;
    int t81;
    float u98;
    float u99;
    float u100;
    int stk[8];

    t0 = *(int *)((a4 + 0x3A0));
    t117 = 0;
    if (t0 != 0) {
        t95 = 0;
        if (t0 != 1) {
            t70 = 0;
            if (t0 != 2) {
                t30 = 0;
                if (t0 == 3) {
                    FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
                    FUN_0c032590(a4, (*(float *)((((((a5 << 2) << 2) << 1) + 0xC1EFD70) + 0x8))), (*(float *)((((((a5 << 2) << 2) << 1) + 0xC1EFD70) + 0xC))));
                    if (((*(int *)((a4 + 0x2EC))) & 12) != 0) {
                        *(unsigned int *)((a4 + 0x534)) = 0x0;
                        t6 = ((int (*)(int))(FUN_0c02a19a))(a4);
                    }
                    t9 = FUN_0c032394(a4);
                    if ((int)t9 < 0) {
                        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                    }
                    t30 = (((int)t9 >= 0));
                } else {
                    t25 = 0;
                    if (t0 == 4) {
                        t14 = *(int *)((a4 + 0x2EC));
                        if ((t14 & 12) != 0) {
                            *(unsigned int *)((a4 + 0x534)) = 0x0;
                            t15 = ((int (*)(int, int, int, int))(FUN_0c02a19a))(a4, a5, a6, a7);
                        }
                        t25 = (((t14 & 12) == 0));
                    } else {
                        t25 = (0);
                    }
                    t30 = (t25);
                }
                t70 = (t30);
            } else {
                FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
                if ((int)(*(int *)(((0x2B4 + a4) + 0x0))) >= (int)(*(short *)((((((a5 << 2) << 2) << 1) + 0xC1EFD70) + 0x4)))) {
                    *(unsigned int *)(((0x2B4 + a4) + 0x0)) = (*(short *)((((((a5 << 2) << 2) << 1) + 0xC1EFD70) + 0x4)));
                }
                t40 = FUN_0c032590(a4, (*(float *)((((((a5 << 2) << 2) << 1) + 0xC1EFD70) + 0x8))), (*(float *)((((((a5 << 2) << 2) << 1) + 0xC1EFD70) + 0xC))));
                t64 = 0;
                if (t40 == 0) {
                    *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                    t42 = *(int *)((((((a5 << 2) << 2) << 1) + 0xC1EFD70) + 0x1C));
                    if ((int)t42 <= 0) {
                    } else {
                        FUN_0c0cc3f8((*(int *)((((((a5 << 2) << 2) << 1) + 0xC1EFD70) + 0x1C))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    }
                    t64 = (((int)t42 > 0));
                } else {
                    t49 = FUN_0c032394(a4);
                    t60 = 0;
                    if ((int)t49 < 0) {
                        *(unsigned int *)((a4 + 0x3A0)) = 0x4;
                        t50 = *(int *)((((((a5 << 2) << 2) << 1) + 0xC1EFD70) + 0x1C));
                        if ((int)t50 > 0) {
                            FUN_0c0cc3f8((*(int *)((((((a5 << 2) << 2) << 1) + 0xC1EFD70) + 0x1C))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        }
                        t60 = (((int)t50 > 0));
                    } else {
                        t60 = (1);
                    }
                    t64 = (t60);
                }
                t70 = (t64);
            }
            t95 = (t70);
        } else {
            FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
            if ((int)(*(int *)(((0x2B4 + a4) + 0x0))) >= (int)(*(short *)((((((a5 << 2) << 2) << 1) + 0xC1EFD70) + 0x4)))) {
                *(unsigned int *)(((0x2B4 + a4) + 0x0)) = (*(short *)((((((a5 << 2) << 2) << 1) + 0xC1EFD70) + 0x4)));
            }
            t80 = FUN_0c032590(a4, (*(float *)((((((a5 << 2) << 2) << 1) + 0xC1EFD70) + 0x8))), (*(float *)((((((a5 << 2) << 2) << 1) + 0xC1EFD70) + 0xC))));
            t89 = 0;
            if (t80 != 0) {
                t81 = FUN_0c032394(a4);
                if ((int)t81 <= 0) {
                } else {
                    *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                }
                t89 = (((int)t81 > 0));
            } else {
                *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                t89 = (1);
            }
            t95 = (t89);
        }
        t117 = (t95);
    } else {
        FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
        FUN_0c032aa6(a4);
        u98 = *(float *)((a4 + 0x60));
        u99 = *(float *)((a4 + 0x68));
        u100 = (u99 * u99);
        u100 = u100 + u98 * u98;
        if (!(0.099999994f > _builtin_sqrtf((u100 + 0.0f)))) {
        } else {
            *(unsigned int *)((a4 + 0x2C4)) = (*(int *)((((((a5 << 2) << 2) << 1) + 0xC1EFD70) + 0x0)));
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            *(unsigned int *)((a4 + 0x2D4)) = 0x2;
            *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
        }
        _builtin_sqrtf((u100 + 0.0f));
        t117 = ((0.099999994f > _builtin_sqrtf((u100 + 0.0f))));
    }
    return FUN_0c02286c(a4, (*(int *)((((((a5 << 2) << 2) << 1) + 0xC1EFD70) + 0x18))), (*(float *)((((((a5 << 2) << 2) << 1) + 0xC1EFD70) + 0x10))), (*(float *)((((((a5 << 2) << 2) << 1) + 0xC1EFD70) + 0x14))));
}

float FUN_0c022aa6(int a4)
{
    int t7;
    float u22;
    float u72;
    float u73;
    float u74;
    float u75;
    float u76;
    float u77;
    float u83;
    float u84;
    float u79;
    float u80;
    int t1;
    int t2;
    float u14;
    float u82;

    if (((*(int *)((a4 + 0x50C))) != 0) && (t1 = *(int *)((a4 + 0x510)), t2 = *(int *)((((t1 << 2) + 0xC247030) + 0x0)), t2 != 0)) {
        u14 = (*(float *)(((*(int *)(((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0) + 0x0))) + 0x390)));
    } else {
        t7 = *(short *)(((*(int *)0xC23ECFC) + 0x2));
        u14 = (*(float *)((0xC205CBC + ((((t7 << 1) + t7) << 2) << 1))));
    }
    if (0.0f > (*(float *)((a4 + 0x64)))) {
        if (!((*(float *)((a4 + 0x34))) > (u14 + 60.0f))) {
            *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) - ((*(float *)(((0x64 + a4) + 0x0))) * 0.0699999928f));
        } else {
            if (!((*(float *)((a4 + 0x34))) > (u14 + 47.9999962f))) {
                *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) - ((*(float *)(((0x64 + a4) + 0x0))) * 0.0899999961f));
            } else {
                u22 = *(float *)((a4 + 0x34));
                if (!(u22 > (u14 + 33.9999962f))) {
                    *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) - ((*(float *)(((0x64 + a4) + 0x0))) * 0.109999999f));
                } else {
                    if (!(u22 > (u14 + 20.0f))) {
                        *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) - ((*(float *)(((0x64 + a4) + 0x0))) * 0.129999995f));
                    }
                }
            }
        }
    }
    if ((*(float *)((a4 + 0x34))) > (u14 + 20.0f)) {
        *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) - 0.0272199996f);
    }
    *(float *)((a4 + 0x48)) = (*(float *)((a4 + 0x60)));
    *(float *)((a4 + 0x4C)) = (*(float *)((a4 + 0x64)));
    *(float *)((a4 + 0x50)) = (*(float *)((a4 + 0x68)));
    nlAddVector((a4 + 0x48), (0x4B0 + a4));
    *(float *)((a4 + 0x550)) = (u14 + (*(float *)0xC022CAC));
    u72 = *(float *)((a4 + 0x48));
    u73 = *(float *)((a4 + 0x4C));
    u74 = *(float *)((a4 + 0x50));
    u75 = *(float *)0xC022CB0;
    u76 = (u73 * u73);
    u76 = u76 + u72 * u72;
    u77 = u76;
    u77 = u77 + u74 * u74;
    u83 = _builtin_sqrtf(u77);
    u84 = u72;
    if (!(u75 > _builtin_sqrtf(u77))) {
        *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) * (u75 / _builtin_sqrtf(u77)));
        u79 = *(float *)((a4 + 0x4C));
        *(float *)((a4 + 0x4C)) = (u79 * (u75 / _builtin_sqrtf(u77)));
        u80 = *(float *)((a4 + 0x50));
        *(float *)((a4 + 0x50)) = (u80 * (u75 / _builtin_sqrtf(u77)));
        u82 = (u79 * (u75 / _builtin_sqrtf(u77)));
        u83 = (u80 * (u75 / _builtin_sqrtf(u77)));
        u84 = (u75 / _builtin_sqrtf(u77));
    }
    return u74;
}

int FUN_0c046442(int a4)
{
    int t1;
    int t2;
    int t47;
    int t50;
    int t58;
    int t61;
    int t35;
    int t36;
    int t37;
    int t38;
    int stk[23];

    t1 = *(int *)((((*(int *)((a4 + 0xC0))) << 2) + 0xC195BE0));
    t2 = *(int *)((a4 + 0x3D4));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAZ((*(short *)((t2 + 0x0))));
    nlRotateAY((*(short *)(((t2 + 0x2) + 0x0))));
    nlRotateAX((*(short *)((((t2 + 0x2) + 0x2) + 0x0))));
    FUN_0c0dcc70((*(float *)((t1 + 0x0))), (*(float *)((t1 + 0x4))), (-(*(float *)((t1 + 0x8)))));
    nlRotateAZ((*(short *)(((((t2 + 0x2) + 0x2) + 0x2) + 0x0))));
    nlRotateAY((*(short *)((((((t2 + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    nlRotateAX((*(short *)(((((((t2 + 0x2) + 0x2) + 0x2) + 0x2) + 0x2) + 0x0))));
    FUN_0c0dcc70((*(float *)(((t1 + 0xC) + 0x0))), (*(float *)(((t1 + 0xC) + 0x4))), (-(*(float *)(((t1 + 0xC) + 0x8)))));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
    *(float *)(((((int)stk + 4) + 0x34) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)((((((int)stk + 4) + 0x34) + 0x4) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)((((((int)stk + 4) + 0x34) + 0x8) + 0x0)) = (*(float *)(((int)stk + 20)));
    nlPopMatrix(0x1);
    FUN_0c0a7984(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((((int)stk + 4) + 0x34) + 0x0))), (*(float *)(((((int)stk + 4) + 0x34) + 0x4))), (*(float *)(((((int)stk + 4) + 0x34) + 0x8))));
    if (((*(int *)((a4 + 0x4D0))) == 0) && ((t35 = *(int *)((a4 + 0x500)), t35 != 0) && ((t36 = *(int *)((a4 + 0x500)), t36 != 1) && ((t37 = *(int *)((a4 + 0x4C8)), t37 != 3) && (t38 = *(int *)((a4 + 0x4DC)), t38 == 0))))) {
        *(unsigned short *)((a4 + 0x242)) = (*(int *)(((int)stk + 4)));
        *(unsigned short *)((a4 + 0x244)) = 0x0;
        *(unsigned short *)((a4 + 0x246)) = (*(int *)(((int)stk + 8)));
    } else {
        if ((int)(*(short *)((a4 + 0x242))) > 0) {
            t47 = *(short *)((a4 + 0x242));
            *(unsigned short *)((a4 + 0x242)) = (t47 - 0x100);
            if ((int)(short)(t47 - 0x100) >= 0) {
            } else {
                *(unsigned short *)((a4 + 0x242)) = 0x0;
            }
        } else {
            if ((int)(*(short *)((a4 + 0x242))) < 0) {
                t50 = *(short *)((a4 + 0x242));
                *(unsigned short *)((a4 + 0x242)) = (t50 + 0x100);
                if ((int)(short)(t50 + 0x100) > 0) {
                    *(unsigned short *)((a4 + 0x242)) = 0x0;
                }
            }
        }
        *(unsigned short *)((a4 + 0x244)) = 0x0;
        if ((int)(*(short *)((a4 + 0x246))) > 0) {
            t58 = *(short *)((a4 + 0x246));
            *(unsigned short *)((a4 + 0x246)) = (t58 - 0x100);
            if ((int)(short)(t58 - 0x100) >= 0) {
            } else {
                *(unsigned short *)((a4 + 0x246)) = 0x0;
            }
        } else {
            if ((int)(*(short *)((a4 + 0x246))) < 0) {
                t61 = *(short *)((a4 + 0x246));
                *(unsigned short *)((a4 + 0x246)) = (t61 + 0x100);
                if ((int)(short)(t61 + 0x100) > 0) {
                    *(unsigned short *)((a4 + 0x246)) = 0x0;
                }
            }
        }
    }
    return 0x246;
}
