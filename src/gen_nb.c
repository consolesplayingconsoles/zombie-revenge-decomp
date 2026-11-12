/* Straight-line functions with calls and guards (batch gen_nb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c084800(float, float, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c095f40(int, int, int, int, int);
int FUN_0c095fa0(int, int);
int FUN_0c096094(int, int);
int FUN_0c09635c(int, int, float, float);
int FUN_0c0c47ae(int);
int FUN_0c0da2e0(void);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
extern int _modls();
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c096f50(int a4, int a5, int a6, int a7);
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o9D4_int { char p[0x9D4]; int v; };
struct o9D8_int { char p[0x9D8]; int v; };
struct o9DC_int { char p[0x9DC]; int v; };
struct o9E0_int { char p[0x9E0]; int v; };
struct o9E4_int { char p[0x9E4]; int v; };
struct o9E8_int { char p[0x9E8]; int v; };
struct oC_float { char p[0xC]; float v; };
struct o0_float { float v; };



int FUN_0c096f50(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;
    register int t12;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t55;
    int t57;
    register int t59;
    register float u79;
    register int t149;
    register int t145;
    register int t106;
    register int t110;
    register int t115;
    register int t117;
    register int t123;
    register int t125;
    register int t127;
    register int t128;
    register int t131;
    register int t135;
    register int t152;
    register float u200;
    register int t204;
    register int t213;
    register int t206;
    register int t56;
    register int t58;
    register float u60;
    register float u61;
    register int t87;
    register float u90;
    register float u91;
    register int t148;
    register int t144;
    register int t140;
    register int t141;

    t0 = *(int *)((a4 + 0x30));
    FUN_0c0685a4(a4, a5, a6, a7);
    if ((((((struct o2EC_int *)(t0))->v)) & 15) != 0) {
        *(unsigned int *)((a4 + 0x34)) = 0x1;
    }
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((((struct o3E4_int *)(t0))->v)));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x8, 0.5f, (1.0f + 1.0f));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x7, 1.5f, (1.0f + 1.0f));
    t12 = *(int *)((a4 + 0x38));
    if ((int)t12 < (int)0x15) {
        if (((int)((int)t12 % (int)0x3)) == 0) {
            t14 = (0x9D4 + a4);
            t15 = 0x0;
            t16 = (t12 + 0x8);
            t17 = (t12 - 5);
            for (;;) {
                t18 = *(int *)((((t15 << 2) + (0x9D4 + a4)) + 0x0));
                t15 = (t15 + 0x1);
                if ((int)t18 <= (int)t16) {
                    *(unsigned int *)((t14 + 0x0)) = t17;
                }
                t14 = (t14 + 0x4);
                t17 = (t17 + 0x1);
                t16 = (t16 - 1);
                if ((int)t15 >= (int)0x6) {
                    break;
                }
            }
        }
    }
    FUN_0c0dbda0((((((struct o3E4_int *)(t0))->v)) + 0xC0));
    FUN_0c09635c(t12, ((((struct o9D4_int *)(a4))->v)), 0.199999988f, -1.0f);
    FUN_0c09635c(t12, ((((struct o9D8_int *)(a4))->v)), 0.699999988f, -1.0f);
    FUN_0c09635c(t12, ((((struct o9DC_int *)(a4))->v)), 1.19999993f, -1.0f);
    FUN_0c0dbda0((((((struct o3E4_int *)(t0))->v)) + 0x100));
    FUN_0c09635c(t12, ((((struct o9E0_int *)(a4))->v)), 0.199999988f, -1.0f);
    FUN_0c09635c(t12, ((((struct o9E4_int *)(a4))->v)), 0.699999988f, -1.0f);
    FUN_0c09635c(t12, ((((struct o9E8_int *)(a4))->v)), 1.19999993f, -1.0f);
    t57 = *(int *)((a4 + 0x38));
    if ((int)t57 <= (int)0xE) {
    } else {
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t55 = 0xC0970CC;
        t59 = (a4 + 0x44);
        for (;;) {
            if ((*(int *)((t59 + 0x10))) != 0) {
                t55 = 0x18;
                u60 = 0.0f;
                u61 = (*(float *)((t59 + t55)));
                if (u61 != u60) {
                    t57 = (*(int *)((t59 + 0x10)));
                    t55 = 0xC0971D4;
                    u60 = (*(float *)((t55 + 0x0)));
                    t55 = 0x14;
                    u61 = (float)t57;
                    u61 = (u61 / u60);
                    *(float *)((((int)stk + 4) + t55)) = u61;
                    t55 = (nlPushMatrix(0x0));
                    t55 = 0xC0971DC;
                    t55 = (FUN_0c0dcc70(0.0f, (*(float *)((t55 + 0x0))), 0.0f));
                    t57 = 0xC0DC6E0;
                    t55 = (nlRotateAX((*(int *)((t59 + 0x4)))));
                    t55 = (nlRotateAZ((*(int *)((t59 + 0x8)))));
                    t57 = 0xC0DC890;
                    t55 = (nlRotateAY((*(int *)((t59 + 0xC)))));
                    t55 = (nlScale(1.39999998f, 1.39999998f, 1.39999998f));
                    t57 = 0xC0DC950;
                    t55 = (nlRotateAZ(0xBFFF));
                    t55 = 0x14;
                    t57 = 0xC200AEC;
                    u61 = (*(float *)((((int)stk + 4) + t55)));
                    u79 = *(float *)((t57 + 0x0));
                    t57 = 0xC0848BC;
                    t55 = (FUN_0c0848bc((((((struct o0_float *)0xC200AE8)->v)) * u61), (u79 * u61), (((((struct o8_float *)0xC200AE8)->v)) * u61)));
                    t55 = (FUN_0c0de000(1.39999998f));
                    t57 = 0xC0C47AE;
                    t55 = (FUN_0c0c47ae((*(int *)((t59 + 0x0)))));
                    t55 = (nlPopMatrix(0x1));
                } else {
                    t87 = t56;
                    u90 = u60;
                    u91 = u61;
                }
                u60 = u90;
                u61 = u91;
                t56 = t87;
                t57 = (*(int *)((t59 + 0x10)));
                t57 = (t57 - 1);
                *(unsigned int *)((t59 + 0x10)) = t57;
            }
            t149 = t57;
            if ((*(int *)((t59 + 0x10))) != 0) {
                t148 = t56;
            } else {
                t56 = (*(int *)((a4 + 0x38)));
                t145 = t57;
                if ((int)t56 >= (int)0x19) {
                    t144 = t56;
                } else {
                    t55 = (*(int *)((a4 + 0x34)));
                    if (t55 != 0) {
                        t140 = t56;
                        t141 = t57;
                    } else {
                        t55 = (FUN_0c0da2e0());
                        t57 = 0xC0E5F1C;
                        t56 = t55;
                        t55 = 0x9;
                        t55 = ((int)((int)t56 % (int)t55));
                        t57 = 0x14;
                        t55 = (t55 + 0x2A7);
                        *(unsigned int *)((t59 + 0x0)) = t55;
                        *(unsigned int *)((t59 + 0x10)) = t57;
                        t55 = (FUN_0c0da2e0());
                        t55 = (unsigned char)t55;
                        t106 = t55;
                        t55 = 0xC097218;
                        u60 = (*(float *)((t55 + 0x0)));
                        t55 = 0x18;
                        u61 = (float)t106;
                        u61 = (u61 / u60);
                        u61 = (u61 + 0.5f);
                        *(float *)((t59 + t55)) = u61;
                        t55 = (FUN_0c0da2e0());
                        t57 = ((int)stk + 4);
                        t57 = (t57 + 0xC);
                        *(unsigned int *)((t59 + 0xC)) = t55;
                        *(unsigned int *)((t59 + 0x4)) = 0x0;
                        *(unsigned int *)((t59 + 0x8)) = 0x0;
                        *(unsigned int *)((t59 + 0x14)) = ((*(int *)((t59 + 0x14))) + 0x1);
                        t110 = t57;
                        *(int *)((int)stk + 0) = t110;
                        t55 = (FUN_0c095f40(t0, 0x1, (((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), t110));
                        t55 = (*(int *)((t59 + 0x14)));
                        if ((int)t55 >= 0) {
                            t55 = (t55 & 0x3);
                        } else {
                            t55 = (~t55);
                            t55 = (t55 + 0x1);
                            t55 = (t55 & 0x3);
                            t55 = (~t55);
                            t55 = (t55 + 0x1);
                        }
                        t58 = (*(int *)(((int)stk + 4)));
                        t115 = t55;
                        t55 = (t55 << 2);
                        t57 = 0x114;
                        t55 = (t55 + t115);
                        t117 = t58;
                        t58 = (t58 << 2);
                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                        t58 = (t58 + t117);
                        t55 = (t55 << 2);
                        t58 = (t58 + t55);
                        t57 = (t57 + a4);
                        t58 = (t58 * 0x1C);
                        t58 = (t58 + t57);
                        for (;;) {
                            t55 = 0x4;
                            *(unsigned int *)((t58 + 0x18)) = 0x28;
                            u61 = (*(float *)((((int)stk + 4) + t55)));
                            t55 = 0x8;
                            *(float *)((t58 + 0x0)) = u61;
                            u61 = (*(float *)((((int)stk + 4) + t55)));
                            t55 = 0x4;
                            *(float *)((t58 + t55)) = u61;
                            t55 = 0xC;
                            u61 = (*(float *)((((int)stk + 4) + t55)));
                            t55 = 0x8;
                            *(float *)((t58 + t55)) = u61;
                            t55 = (FUN_0c0da2e0());
                            t55 = (t55 & 0x7FFF);
                            t123 = t55;
                            t55 = 0xC;
                            u61 = (float)t123;
                            u61 = (u61 * 0.5f);
                            u61 = (u61 / 32767.0f);
                            u61 = (u61 + -0.25f);
                            *(float *)((t58 + t55)) = u61;
                            t55 = (FUN_0c0da2e0());
                            t55 = (t55 & 0x7FFF);
                            t125 = t55;
                            t55 = 0x10;
                            u61 = (float)t125;
                            u61 = (u61 * 0.5f);
                            u61 = (u61 / 32767.0f);
                            u61 = (u61 + -0.25f);
                            *(float *)((t58 + t55)) = u61;
                            t55 = (FUN_0c0da2e0());
                            t55 = (t55 & 0x7FFF);
                            t57 = 0x5;
                            t127 = t55;
                            t55 = 0x14;
                            u61 = (float)t127;
                            u61 = (u61 * 0.5f);
                            u61 = (u61 / 32767.0f);
                            u61 = (u61 + -0.25f);
                            *(float *)((t58 + t55)) = u61;
                            t128 = *(int *)(((int)stk + 20));
                            *(unsigned int *)(((int)stk + 20)) = (t128 + 0x1);
                            t58 = (t58 + 0x1C);
                            if ((int)(t128 + 0x1) >= (int)t57) {
                                break;
                            }
                        }
                        t58 = (*(int *)(((int)stk + 4)));
                        t57 = 0xB4;
                        t131 = t58;
                        t58 = (t58 << 1);
                        t58 = (t58 + t131);
                        t58 = (t58 << 2);
                        t57 = (t57 + a4);
                        t58 = (t58 << 1);
                        t58 = (t58 + t57);
                        *(unsigned int *)((t58 + 0x0)) = 0x14;
                        t55 = (FUN_0c0da2e0());
                        t57 = 0x4000;
                        t55 = (t55 & t57);
                        t55 = (-t55);
                        t55 = (t55 + 0xE000);
                        *(unsigned int *)((t58 + 0x10)) = t55;
                        t55 = (FUN_0c0da2e0());
                        t55 = (unsigned char)t55;
                        t135 = t55;
                        t55 = 0xC0973C8;
                        u60 = (*(float *)((t55 + 0x0)));
                        t55 = 0x14;
                        u61 = (float)t135;
                        u61 = (u61 / u60);
                        u61 = (u61 + 0.5f);
                        *(float *)((t58 + t55)) = u61;
                        t55 = 0x4;
                        u61 = (*(float *)((((int)stk + 4) + t55)));
                        t55 = 0x4;
                        *(float *)((t58 + t55)) = u61;
                        t55 = 0x8;
                        u61 = (*(float *)((((int)stk + 4) + t55)));
                        t55 = 0x8;
                        *(float *)((t58 + t55)) = u61;
                        t55 = 0xC;
                        u61 = (*(float *)((((int)stk + 4) + t55)));
                        t55 = 0xC;
                        *(float *)((t58 + t55)) = u61;
                    }
                    t144 = t140;
                    t145 = t141;
                }
                t148 = t144;
                t149 = t145;
            }
            t152 = *(int *)(((int)stk + 4));
            t56 = t148;
            t57 = t149;
            t57 = 0x4;
            *(unsigned int *)(((int)stk + 4)) = (t152 + 0x1);
            t59 = (t59 + 0x1C);
            if ((int)(t152 + 0x1) < (int)t57) continue;
            break;
        }
    }
    FUN_0c0dbda0((((((struct o3E4_int *)(t0))->v)) + 0x280));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x6, 1.0f, 1.39999998f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x5, 1.5f, 1.39999998f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x4, (1.0f + 1.0f), 1.39999998f);
    FUN_0c0dbda0((((((struct o3E4_int *)(t0))->v)) + 0x2C0));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x3, 1.0f, 1.0f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x2, 1.5f, 1.0f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x1, (1.0f + 1.0f), 1.0f);
    FUN_0c0dbda0((((((struct o3E4_int *)(t0))->v)) + 0x340));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x6, 1.0f, 1.39999998f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x5, 1.5f, 1.39999998f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x4, (1.0f + 1.0f), 1.39999998f);
    FUN_0c0dbda0((((((struct o3E4_int *)(t0))->v)) + 0x380));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x3, 1.0f, 1.0f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x2, ((((struct o0_float *)0xC0974EC)->v)), 1.0f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x1, (1.0f + 1.0f), 1.0f);
    nlPopMatrix(0x1);
    FUN_0c096094((0x114 + a4), 0x50);
    u200 = (((struct oC_float *)0xC0974EC)->v);
    FUN_0c084800(u200, u200, 1.0f);
    FUN_0c095fa0((0xB4 + a4), 0x4);
    t213 = FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    t204 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x3C)) = (t204 - 1);
    if ((int)(t204 - 1) < 0) {
        *(unsigned int *)((a4 + 0x3C)) = ((((struct o40_int *)(a4))->v));
        t206 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t206 + 0x1);
        t213 = 0x40;
        if ((int)(t206 + 0x1) > (int)0x3C) {
            t213 = (FUN_0c0e19f2());
        }
    }
    return t213;
}
