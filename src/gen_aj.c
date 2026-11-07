/* Straight-line functions with calls and guards (batch gen_aj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c016a86(void);
int FUN_0c01cdf2(int);
int FUN_0c01ce40(int, int, float);
int FUN_0c01e822(int, int, int, int, int);
float FUN_0c01f172(int);
int FUN_0c05026e(int, int, int, int, int, int);
int FUN_0c050830(int);
int FUN_0c050a30(int, int);
int FUN_0c050aa2(int, int);
int FUN_0c050b2c(int, int);
int FUN_0c050bc2(int);
int FUN_0c050bde(int, int);
int FUN_0c0510be(int);
int FUN_0c0519f0(int);
int FUN_0c051a48(int);
int FUN_0c05477c(int, float);
int FUN_0c056098(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c078018(int);
int FUN_0c08448c(int);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c084bf6(int, int);
int FUN_0c085638(int);
int FUN_0c085704(int);
int FUN_0c088ec4(int, int);
int FUN_0c0a1c76(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a9894(void);
int FUN_0c0ae738(int, int);
int FUN_0c0aea24(int, float);
int FUN_0c0aeabc(int);
int FUN_0c0b5d54(void);
int FUN_0c0bb250(int, int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cf4c4(int, int, int, int, int, float, float, float, float, float);
int FUN_0c0cf6e4(int, int, float, float, float, float, float);
int FUN_0c0d9bd0(float);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db800(int, int, int, int, int);
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
int nlUnitMatrix(void);
int nlAddVector(int, int);
float FUN_0c0dcd80(int, int);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int FUN_0c0de000(float);
int FUN_0c0de2c0(int);
int FUN_0c0e18ce(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5f1c(void);
int _quick_odd_mvn(void);
extern float _builtin_sqrtf(float);
int strlen(int);
void FUN_0c0503bc(int a4);
int FUN_0c077960(int a4, int a5, int a6, int a7);
int FUN_0c0d3aa0(int a4);
int FUN_0c0bb360(int a4, int a5, int a6, int a7);
int FUN_0c078286(int a4, int a5, int a6, int a7);
int FUN_0c0ae314(int a4, float f4);
int FUN_0c023300(int a4, int a5, int a6, int a7);


int FUN_0c077960(int a4, int a5, int a6, int a7)
{
    int t13;
    int t14;
    float t38;
    float t39;
    float t40;
    float t46;
    float t47;
    float t48;
    float t83;
    float t84;
    float t85;
    float t91;
    float t92;
    float t93;
    float t98;
    float t99;
    int t110;
    int t126;
    float u121;
    int stk[34];

    FUN_0c0685a4(a4, a5, a6, a7);
    FUN_0c0dc5a0();
    *(unsigned int *)(((int)stk + 16)) = (a4 + 0x6C);
    *(unsigned int *)(((int)stk + 12)) = (0xFC + a4);
    *(unsigned int *)(((int)stk + 24)) = 0x6;
    FUN_0c0dce80((a4 + 0x60), (a4 + 0x60), 0.799999952f);
    nlAddVector((a4 + 0x54), (a4 + 0x60));
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((int)(*(float *)((a4 + 0x58))));
    nlRotateAX((int)(*(float *)((a4 + 0x54))));
    nlRotateAZ((int)(*(float *)((a4 + 0x5C))));
    FUN_0c0c47ae(0x11D4);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 28)) = 0xC0FFC68;
    *(unsigned int *)(((int)stk + 20)) = 0xC0FFC74;
    *(unsigned int *)(((int)stk + 36)) = 0xC0FFC80;
    *(unsigned int *)(((int)stk + 32)) = 0xC0FFC8C;
    t13 = (0xB4 + a4);
    t14 = (0x144 + a4);
    for (;;) {
        FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 12));
        FUN_0c0dce80(t13, t13, 0.799999952f);
        nlAddVector((*(int *)(((int)stk + 16))), t13);
        FUN_0c0dcca0((*(int *)(((int)stk + 28))));
        nlRotateAY((int)(*(float *)(((*(int *)(((int)stk + 16))) + 0x4))));
        nlRotateAX((int)(*(float *)(((*(int *)(((int)stk + 16))) + 0x0))));
        nlRotateAZ((int)(*(float *)(((*(int *)(((int)stk + 16))) + 0x8))));
        FUN_0c0c47ae(0x11D6);
        FUN_0c0db470((*(int *)(((int)stk + 20))), (((int)stk + 12) + 0x40));
        if (0.0f > (*(float *)(((int)stk + 80)))) {
            FUN_0c0db840((((int)stk + 12) + 0x34));
            nlSubVector3op((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x40), (((int)stk + 12) + 0x34));
            *(float *)(((int)stk + 80)) = 0.0f;
            nlSubVector3op((((int)stk + 12) + 0x1C), (((int)stk + 12) + 0x40), (((int)stk + 12) + 0x34));
            t38 = FUN_0c0dcd80((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x1C));
            *(float *)(((int)stk + 8)) = t38;
            t39 = FUN_0c0dcea0((((int)stk + 8) + 0x2C));
            *(float *)(((int)stk + 4)) = t39;
            t40 = FUN_0c0dcea0((((int)stk + 4) + 0x24));
            *(float *)((t13 + 0x8)) = ((float)(-(FUN_0c0d9bd0((t38 / (t39 * t40))))) * 0.799999952f);
        } else {
            if ((*(float *)(((int)stk + 80))) > 8.0f) {
                FUN_0c0db840((((int)stk + 12) + 0x34));
                nlSubVector3op((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x40), (((int)stk + 12) + 0x34));
                *(float *)(((int)stk + 80)) = 0.0f;
                nlSubVector3op((((int)stk + 12) + 0x1C), (((int)stk + 12) + 0x40), (((int)stk + 12) + 0x34));
                t46 = FUN_0c0dcd80((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x1C));
                *(float *)(((int)stk + 8)) = t46;
                t47 = FUN_0c0dcea0((((int)stk + 8) + 0x2C));
                *(float *)(((int)stk + 4)) = t47;
                t48 = FUN_0c0dcea0((((int)stk + 4) + 0x24));
                *(float *)((t13 + 0x8)) = ((float)(FUN_0c0d9bd0((t46 / (t47 * t48)))) * 0.099999994f);
            }
        }
        t13 = (t13 + 0xC);
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0xC);
        FUN_0c0dce80(t14, t14, 0.799999952f);
        nlAddVector((*(int *)(((int)stk + 12))), t14);
        FUN_0c0dcca0((*(int *)(((int)stk + 20))));
        nlRotateAY((int)(*(float *)(((*(int *)(((int)stk + 12))) + 0x4))));
        nlRotateAX((int)(*(float *)(((*(int *)(((int)stk + 12))) + 0x0))));
        nlRotateAZ((int)(*(float *)(((*(int *)(((int)stk + 12))) + 0x8))));
        FUN_0c0c47ae(0x11D5);
        FUN_0c0db470((*(int *)(((int)stk + 36))), (((int)stk + 12) + 0x40));
        if (0.0f > (*(float *)(((int)stk + 80)))) {
            FUN_0c0db840((((int)stk + 12) + 0x34));
            nlSubVector3op((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x40), (((int)stk + 12) + 0x34));
            *(float *)(((int)stk + 80)) = 0.0f;
            nlSubVector3op((((int)stk + 12) + 0x1C), (((int)stk + 12) + 0x40), (((int)stk + 12) + 0x34));
            t83 = FUN_0c0dcd80((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x1C));
            *(float *)(((int)stk + 8)) = t83;
            t84 = FUN_0c0dcea0((((int)stk + 8) + 0x2C));
            *(float *)(((int)stk + 4)) = t84;
            t85 = FUN_0c0dcea0((((int)stk + 4) + 0x24));
            *(float *)((t14 + 0x8)) = ((float)(-(FUN_0c0d9bd0((t83 / (t84 * t85))))) * 0.799999952f);
        } else {
            if ((*(float *)(((int)stk + 80))) > 5.0f) {
                FUN_0c0db840((((int)stk + 12) + 0x34));
                nlSubVector3op((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x40), (((int)stk + 12) + 0x34));
                *(float *)(((int)stk + 80)) = 0.0f;
                nlSubVector3op((((int)stk + 12) + 0x1C), (((int)stk + 12) + 0x40), (((int)stk + 12) + 0x34));
                t91 = FUN_0c0dcd80((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x1C));
                *(float *)(((int)stk + 8)) = t91;
                t92 = FUN_0c0dcea0((((int)stk + 8) + 0x2C));
                *(float *)(((int)stk + 4)) = t92;
                t93 = FUN_0c0dcea0((((int)stk + 4) + 0x24));
                *(float *)((t14 + 0x8)) = ((float)(FUN_0c0d9bd0((t91 / (t92 * t93)))) * 0.099999994f);
                FUN_0c0db470((*(int *)(((int)stk + 32))), (((int)stk + 12) + 0x40));
                nlSubVector((((int)stk + 12) + 0x28), (((int)stk + 12) + 0x40));
                t98 = FUN_0c0dcd80((((int)stk + 12) + 0x28), 0xC0FFD64);
                *(float *)(((int)stk + 8)) = t98;
                t99 = FUN_0c0dcea0((((int)stk + 8) + 0x2C));
                *(float *)((t14 + 0x0)) = ((float)(FUN_0c0d9bd0((t98 / t99))) * 0.099999994f);
            }
        }
        t14 = (t14 + 0xC);
        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0xC);
        t110 = *(int *)(((int)stk + 24));
        *(unsigned int *)(((int)stk + 24)) = (t110 - 1);
        if ((t110 - 1) != 0) continue;
        break;
    }
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    nlAddVector((a4 + 0x48), (a4 + 0x3C));
    FUN_0c0dce80((a4 + 0x48), (a4 + 0x48), (*(float *)0xC077E8C));
    nlAddVector((a4 + 0x30), (a4 + 0x48));
    t126 = 0x34;
    if (!((*(float *)((a4 + 0x34))) > 0.0f)) {
        if (0.0f > (*(float *)((a4 + 0x4C)))) {
            *(float *)((a4 + 0x34)) = 0.0f;
            u121 = (*(float *)((a4 + 0x4C)));
            u121 *= -0.979999959f;
            *(float *)((a4 + 0x4C)) = u121;
        }
        t126 = 0x4C;
    }
    return t126;
}

int FUN_0c0d3aa0(int a4)
{
    int t0;
    int t110;
    int t102;
    int t1;
    int t63;
    int t4;
    int t6;
    int t7;
    float u10;
    int t16;
    int t17;
    float u20;
    int t24;
    int t31;
    int t33;
    float u36;
    int t51;
    int t60;
    int t52;
    float u55;
    int t71;
    int t86;
    float u89;
    int t92;
    int t120;
    int t121;
    int t135;
    int t131;
    int t140;
    float u143;
    int t153;
    int t156;
    float u159;
    int t164;
    int t174;
    int t165;
    int t94;
    int t78;
    int t29;
    int t128;
    int t129;

    t0 = *(int *)0xC9433FC;
    if (t0 != 0) {
        if (t0 != 1) {
            t110 = t0;
            if (t0 == 2) {
            } else {
                t102 = t0;
                if (t0 == 3) {
                    t1 = *(int *)((a4 + 0x30));
                    if (t1 != 0) {
                        if (t1 != 1) {
                            t63 = t1;
                            if (t1 != 2) {
                            } else {
                                t4 = *(int *)0xC943404;
                                t6 = *(int *)((((*(int *)0xC943410) << 2) + 0xC20BE88));
                                t7 = strlen(t6);
                                u10 = (float)t7;
                                if ((int)t7 < 0) {
                                    u10 = ((float)t7 + 4.2949673e+09f);
                                }
                                FUN_0c0cf6e4(0x0, t6, ((-((u10 * 18.0f) / (1.0f + 1.0f))) + 320.0f), 142.0f, 1.0f, 0.899999976f, 1.0f);
                                FUN_0c0cf6e4(0x0, 0xC1EA0E4, 302.0f, 173.199997f, 1.0f, 0.799999952f, 1.0f);
                                t16 = *(int *)((((*(int *)0xC943414) << 2) + 0xC20BE88));
                                t17 = strlen(t16);
                                u20 = (float)t17;
                                if ((int)t17 < 0) {
                                    u20 = ((float)t17 + 4.2949673e+09f);
                                }
                                FUN_0c0cf6e4(0x0, t16, ((-((u20 * 18.0f) / (1.0f + 1.0f))) + 320.0f), 203.199997f, 1.0f, 0.899999976f, 1.0f);
                                t24 = *(int *)0xC943400;
                                if ((*(int *)0xC943400) == 0) {
                                    t29 = (*(int *)((0xC247594 + ((*(int *)0xC23A1BC) << 2))));
                                } else {
                                    t29 = (*(int *)0xC247594);
                                }
                                t31 = *(int *)(((((t24 << 2) << 1) + 0xC20C54C) + ((((t29 == 0)) ? 1 : 0) << 2)));
                                if (((*(int *)0xC23A258) & 30) != 0) {
                                    t33 = strlen(t31);
                                    u36 = (float)t33;
                                    if ((int)t33 < 0) {
                                        u36 = ((float)t33 + 4.2949673e+09f);
                                    }
                                    FUN_0c0cf6e4(0x0, t31, ((-((u36 * 18.0f) / (1.0f + 1.0f))) + 320.0f), 257.0f, 1.0f, 0.899999976f, 1.0f);
                                }
                                FUN_0c0b5d54();
                                FUN_0c0cf6e4(0x0, 0xC20C564, 218.0f, 321.0f, 0.75f, 0.75f, 1.0f);
                                FUN_0c0cf6e4(0x0, 0xC20C58C, 197.0f, (float)(int)((float)0x141 + (((0.75f * (float)(*(int *)((t4 + 0x4C))))) * 34.0f)), 0.75f, 0.75f, 1.0f);
                                t51 = *(int *)0xC23A258;
                                t60 = t51;
                                if ((t51 & 56) != 0) {
                                    t52 = strlen(0xC20C58E);
                                    u55 = (float)t52;
                                    if ((int)t52 < 0) {
                                        u55 = ((float)t52 + 4.2949673e+09f);
                                    }
                                    t60 = (FUN_0c0cf6e4(0x0, 0xC20C58E, (float)(int)((-((((u55 * 18.0f) / (1.0f + 1.0f))) * 0.5f)) + 320.0f), 440.0f, 0.5f, 0.5f, 1.0f));
                                }
                                t63 = t60;
                            }
                            t78 = t63;
                        } else {
                            if ((*(int *)((a4 + 0x38))) == 0) {
                            } else {
                                t71 = *(int *)((a4 + 0x38));
                                *(unsigned int *)((a4 + 0x38)) = (t71 - 1);
                                if ((t71 - 1) != 0) {
                                } else {
                                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                                }
                            }
                            t78 = t1;
                        }
                        t94 = t78;
                    } else {
                        t86 = strlen(0xC20C539);
                        u89 = (float)t86;
                        if ((int)t86 < 0) {
                            u89 = ((float)t86 + 4.2949673e+09f);
                        }
                        t92 = FUN_0c0cf4c4(0xA, 0x2, 0x0, 0x1, 0xC20C539, (float)(int)((-((u89 * 18.0f) / (1.0f + 1.0f))) + 320.0f), 91.0f, 1.0f, 1.0f, 1.0f);
                        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                        t94 = t92;
                    }
                    t102 = t94;
                }
                t110 = t102;
            }
            t165 = t110;
        } else {
            t120 = *(int *)0xC247594;
            t121 = *(int *)0xC247598;
            t135 = 0x2;
            if ((*(int *)(((*(int *)0xC943508) + 0x38))) != 2) {
                t131 = 0x1;
                if ((t120 != (*(int *)((0xC24759C + ((*(int *)0xC23A1BC) << 2))))) && (t128 = *(int *)0xC23A1BC, t129 = *(int *)((0xC24759C + ((0x1 - t128) << 2))), t121 != t129)) {
                    t131 = 0x0;
                }
                t135 = t131;
            }
            t140 = strlen((*(int *)((((t135 << 2) + 0xC20C510) + 0x0))));
            u143 = (float)t140;
            if ((int)t140 < 0) {
                u143 = ((float)t140 + 4.2949673e+09f);
            }
            FUN_0c0cf4c4(0x0, 0x2, 0x12C, 0xFFFFFFFF, ((*(int *)((((t135 << 2) + 0xC20C510) + 0x0)))), (float)(int)((-((((u143 * 18.0f) / (1.0f + 1.0f))) * 1.0f)) + 320.0f), 136.0f, 1.0f, 1.0f, 1.0f);
            t153 = 0xC20C534;
            if (t120 == t121) {
            } else {
                t153 = (*(int *)(((((-(((((int)t120 >= (int)t121)) ? 1 : 0) - 1)) << 2) + (0xC20C51C + (((*(int *)0xC943400) << 2) << 1))) + 0x0)));
            }
            t156 = strlen(t153);
            u159 = (float)t156;
            if ((int)t156 < 0) {
                u159 = ((float)t156 + 4.2949673e+09f);
            }
            t164 = FUN_0c0cf4c4(0x14, 0x2, 0x118, 0x1, (t153), (float)(int)((-((((u159 * 18.0f) / (1.0f + 1.0f))) * 1.19999993f)) + 320.0f), 221.0f, 1.19999993f, 1.19999993f, 1.0f);
            *(unsigned int *)0xC9433FC = 0x2;
            t165 = t164;
        }
        t174 = t165;
    } else {
        *(unsigned int *)((a4 + 0x30)) = 0x0;
        t174 = t0;
    }
    return t174;
}

int FUN_0c0bb360(int a4, int a5, int a6, int a7)
{
    int t1;
    int t154;
    int t3;
    int t4;
    int t5;
    int t6;
    float u31;
    float u32;
    int t57;
    int t65;
    int t70;
    int t73;
    int t78;
    int t86;
    int t91;
    int t94;
    int t99;
    int t108;
    int t112;
    int t117;
    int t120;
    int t123;
    int t135;
    int t138;
    int t141;
    int stk[13];

    t1 = *(int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0) + 0x0));
    t154 = 0xBC;
    if (t1 == 0) {
    } else {
        t3 = *(int *)((((*(int *)((t1 + 0xC0))) << 2) + 0xC195BE0));
        t4 = *(int *)((t1 + 0x3D4));
        t5 = *(int *)((a4 + 0xBC));
        t6 = *(int *)((((t5 << 2) + 0xC247030) + 0x0));
        if ((t6 != 0) && (((int)t5 < (int)0x2) || ((int)t6 < (int)0x5))) {
        } else {
            FUN_0c0e19f2(0xC246FF0, t5, t6, a7);
        }
        FUN_0c0848d6(((*(float *)(((0x45C + t1) + 0x0))) * 0.5f), ((*(float *)(((0x45C + t1) + 0x4))) * 0.5f), ((*(float *)(((0x45C + t1) + 0x8))) * 0.5f));
        *(float *)(((int)stk + 4)) = ((*(float *)0xC247F40) * (*(float *)0xC247F34));
        *(float *)(((int)stk + 8)) = (-((*(float *)0xC247F44) * (*(float *)0xC247F34)));
        *(float *)(((int)stk + 12)) = ((*(float *)0xC247F48) * (*(float *)0xC247F34));
        FUN_0c0dbda0(((*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC))) + 0x2AC));
        FUN_0c0db4d0(((int)stk + 4), ((int)stk + 4));
        FUN_0c0de2c0(((int)stk + 4));
        *(unsigned int *)0xC260A34 = (*(int *)(((((*(int *)(((0xC4 + t1) + 0x0))) << 2) + (0xC26086C + (((*(int *)((t1 + 0xC0))) << 2) << 1))) + 0x0)));
        u31 = *(float *)((t1 + 0x34));
        u32 = *(float *)((t1 + 0x390));
        FUN_0c0dc5a0();
        FUN_0c0dcc70((*(float *)((t1 + 0x30))), ((u32 - u31) + -0.199999988f), (*(float *)((t1 + 0x38))));
        nlRotateAZ(((*(short *)((t1 + 0x70))) + 0x8000));
        nlRotateAY((-(*(short *)((t1 + 0x6E)))));
        nlRotateAX((*(short *)((t1 + 0x6C))));
        nlPushMatrix(0x0);
        FUN_0c0dcc70(0.0f, (*(float *)((t1 + 0x3E8))), 0.0f);
        nlRotateAZ((-(*(short *)((t4 + 0x0)))));
        nlRotateAY((-(*(short *)(((t4 + 0x2) + 0x0)))));
        nlRotateAX((*(short *)((((t4 + 0x2) + 0x2) + 0x0))));
        FUN_0c0dcbb0((0x274 + t1));
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, t3, (((t4 + 0x2) + 0x2) + 0x2), (0x404 + a4));
        t57 = ((int (*)(void))((*(int *)(((*(int *)0xC260A34) + 0x110)))))();
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, (t3 + 0xC), ((((t4 + 0x2) + 0x2) + 0x2) + 0x6), ((0x404 + a4) + 0x4));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, ((t3 + 0xC) + 0x18), (((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18), (((0x404 + a4) + 0x4) + 0x8));
        t65 = ((int (*)(void))((*(int *)(((*(int *)0xC260A34) + 0x118)))))();
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, (((t3 + 0xC) + 0x18) + 0xC), ((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6), ((((0x404 + a4) + 0x4) + 0x8) + 0x4));
        t70 = ((int (*)(void))((*(int *)(((*(int *)0xC260A34) + 0x11C)))))();
        t73 = ((int (*)(int))((*(int *)(((*(int *)0xC260A34) + 0x74)))))(a4);
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, ((((t3 + 0xC) + 0x18) + 0xC) + 0xC), (((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6), (((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4));
        t78 = ((int (*)(int))((*(int *)(((*(int *)0xC260A34) + 0x94)))))(a4);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, (((((t3 + 0xC) + 0x18) + 0xC) + 0xC) + 0xC), ((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6) - 30), ((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4));
        t86 = ((int (*)(void))((*(int *)(((*(int *)0xC260A34) + 0x118)))))();
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, ((((((t3 + 0xC) + 0x18) + 0xC) + 0xC) + 0xC) + 0xC), (((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6) - 30) + 0x6), (((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4));
        t91 = ((int (*)(void))((*(int *)(((*(int *)0xC260A34) + 0x11C)))))();
        t94 = ((int (*)(int))((*(int *)(((*(int *)0xC260A34) + 0x84)))))(a4);
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, (((((((t3 + 0xC) + 0x18) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC), ((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6) - 30) + 0x6) + 0x6), ((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
        t99 = ((int (*)(int))((*(int *)(((*(int *)0xC260A34) + 0xA4)))))(a4);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, ((((((((t3 + 0xC) + 0x18) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC), (((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6) - 30) + 0x6) + 0x6) + 0x18), (((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
        t108 = ((int (*)(int))((*(int *)(((*(int *)0xC260A34) + 0x114)))))(a4);
        t112 = ((int (*)(int, int))((*(int *)(((*(int *)0xC260A34) + 0x4)))))(a4, (*(int *)((a4 + 0x40C))));
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, (((((((((t3 + 0xC) + 0x18) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC), ((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6) - 30) + 0x6) + 0x6) + 0x18) + 0x18), ((((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
        t117 = ((int (*)(int))((*(int *)(((*(int *)0xC260A34) + 0x14)))))(a4);
        t120 = ((int (*)(void))((*(int *)(((*(int *)0xC260A34) + 0x34)))))();
        t123 = ((int (*)(void))((*(int *)(((*(int *)0xC260A34) + 0x54)))))();
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, ((((((((((t3 + 0xC) + 0x18) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC), (((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6) - 30) + 0x6) + 0x6) + 0x18) + 0x18) + 0x6), (((((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, (((((((((((t3 + 0xC) + 0x18) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC), ((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6) - 30) + 0x6) + 0x6) + 0x18) + 0x18) + 0x6) + 0x6), ((((((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, ((((((((((((t3 + 0xC) + 0x18) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC), (((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6) - 30) + 0x6) + 0x6) + 0x18) + 0x18) + 0x6) + 0x6) - 30), (((((((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
        t135 = ((int (*)(int))((*(int *)(((*(int *)0xC260A34) + 0x24)))))(a4);
        t138 = ((int (*)(int))((*(int *)(((*(int *)0xC260A34) + 0x44)))))(a4);
        t141 = ((int (*)(int))((*(int *)(((*(int *)0xC260A34) + 0x64)))))(a4);
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, (((((((((((((t3 + 0xC) + 0x18) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC), ((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6) - 30) + 0x6) + 0x6) + 0x18) + 0x18) + 0x6) + 0x6) - 30) + 0x6), ((((((((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
        nlPushMatrix(0x0);
        FUN_0c0bb250(a4, ((((((((((((((t3 + 0xC) + 0x18) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC) + 0xC), (((((((((((((((((t4 + 0x2) + 0x2) + 0x2) + 0x6) + 0x18) + 0x6) + 0x6) - 30) + 0x6) + 0x6) + 0x18) + 0x18) + 0x6) + 0x6) - 30) + 0x6) + 0x6), (((((((((((((((0x404 + a4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
        t154 = (FUN_0c08448c(0x0));
    }
    return t154;
}

int FUN_0c078286(int a4, int a5, int a6, int a7)
{
    int t9;
    int t11;
    int t12;
    int t30;
    int t62;
    int t31;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t41;
    int t59;
    int t47;
    int t50;
    int t55;
    int t56;
    int t69;
    int t99;
    int t123;
    int t141;
    int t149;
    int t172;
    int t189;
    int t32;
    int stk[8];

    if ((int)(*(int *)0xC23ED50) > (int)0x4F) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    t9 = *(short *)(((*(int *)0xC23ECFC) + 0x0));
    if (t9 != 2) {
        return t9;
    }
    t11 = *(int *)((a4 + 0x288));
    if (t11 != 0) {
        if (t11 != 1) {
            if (t11 == 2) {
                t12 = *(int *)((a4 + 0x3AC));
                *(unsigned int *)((a4 + 0x3AC)) = (t12 - 37);
                if ((int)(t12 - 37) > 0) {
                    *(unsigned short *)((a4 + 0x6C)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x3B0))))) * (float)(*(int *)((a4 + 0x3AC))));
                    *(unsigned short *)((a4 + 0x70)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x3B4))))) * (float)(*(int *)((a4 + 0x3AC))));
                    *(unsigned int *)((a4 + 0x3B0)) = ((*(int *)((a4 + 0x3B0))) + 0x600);
                    *(unsigned int *)((a4 + 0x3B4)) = ((*(int *)((a4 + 0x3B4))) + 0x880);
                } else {
                    *(unsigned short *)((a4 + 0x6C)) = 0x0;
                    *(unsigned short *)((a4 + 0x70)) = 0x0;
                }
                FUN_0c085704(a4);
                FUN_0c078018(a4);
                t30 = *(int *)((a4 + 0x2B4));
                t62 = t30;
                if (t30 == 1) {
                    t31 = t30;
                    t33 = a5;
                    t34 = a6;
                    t35 = 0x600;
                    t36 = 0xC0FFE20;
                    t37 = 0x0;
                    t38 = 0xC0DA410;
                    t39 = 0x0;
                    for (;;) {
                        if ((int)t37 >= (int)0x10) {
                            break;
                        }
                        t41 = *(short *)((t36 + 0x0));
                        t59 = t35;
                        if ((t41 != 0) && (t32 = (short)t41, t32 != 0x11E9)) {
                            t33 = 0xB4;
                            t38 = 0xC0E18CE;
                            t31 = (FUN_0c0e18ce(0xC0786A0, t33));
                            t38 = 0xC0E19D0;
                            t39 = t31;
                            t31 = (FUN_0c0e19d0(t31));
                            t31 = 0x78;
                            t38 = t37;
                            t32 = 0x5C4;
                            *(unsigned int *)((t39 + t31)) = (*(short *)((t36 + 0x0)));
                            t38 = (t38 << 1);
                            t38 = (t38 + t37);
                            t38 = (t38 << 2);
                            t32 = (t32 + a4);
                            t32 = (t32 + t38);
                            t31 = 0xC;
                            t31 = (_quick_odd_mvn());
                            t31 = 0x60;
                            t32 = 0x744;
                            t33 = t39;
                            t34 = 0x684;
                            t35 = 0xC0DCEF0;
                            t32 = (t32 + a4);
                            t32 = (t32 + t38);
                            *(unsigned short *)((t39 + t31)) = (*(int *)((((0x744 + a4) + t38) + 0x0)));
                            t31 = 0x62;
                            t47 = *(int *)((t32 + 0x4));
                            t34 = (t34 + a4);
                            t32 = 0x744;
                            t33 = (t33 + 0x30);
                            *(unsigned short *)((t39 + t31)) = t47;
                            t31 = 0x64;
                            t32 = (t32 + a4);
                            t32 = (t32 + t38);
                            t34 = (t34 + t38);
                            *(unsigned short *)((t39 + t31)) = (*(int *)((t32 + 0x8)));
                            t31 = (nlSubVector3op((t39 + 0x48), t33, t34));
                            t34 = 0x804;
                            t31 = 0x60;
                            t50 = *(short *)((t39 + t31));
                            t32 = t39;
                            t34 = (t34 + a4);
                            t34 = (t34 + t38);
                            t34 = (*(int *)((t34 + 0x0)));
                            t32 = (t32 + 0x68);
                            t31 = 0x62;
                            t33 = (short)(t50 - t34);
                            *(unsigned int *)((t32 + 0x0)) = t33;
                            t33 = 0x804;
                            t34 = (*(short *)((t39 + t31)));
                            t31 = 0x6C;
                            t33 = (t33 + a4);
                            t33 = (t33 + t38);
                            t33 = (*(int *)((t33 + 0x4)));
                            t34 = (t34 - t33);
                            t55 = (short)t34;
                            t34 = 0x804;
                            *(unsigned int *)((t39 + t31)) = t55;
                            t31 = 0x64;
                            t34 = (t34 + a4);
                            t56 = *(short *)((t39 + t31));
                            t34 = (t34 + t38);
                            t34 = (*(int *)((t34 + 0x8)));
                            t31 = 0x70;
                            t33 = (short)(t56 - t34);
                            *(unsigned int *)((t39 + t31)) = t33;
                            t59 = 0xC0DCEF0;
                        }
                        t37 = (t37 + 0x1);
                        t35 = t59;
                        t36 = (t36 + 0x2);
                    }
                    FUN_0c0cc3f8(0x128A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    *(unsigned int *)((a4 + 0x288)) = ((*(int *)((a4 + 0x288))) + 0x1);
                    t62 = 0x288;
                }
                return t62;
            }
            if (t11 == 3) {
                t69 = *(int *)((a4 + 0x3AC));
                *(unsigned int *)((a4 + 0x3AC)) = (t69 - 37);
                if ((int)(t69 - 37) > 0) {
                    *(unsigned short *)((a4 + 0x6C)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x3B0))))) * (float)(*(int *)((a4 + 0x3AC))));
                    *(unsigned short *)((a4 + 0x70)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x3B4))))) * (float)(*(int *)((a4 + 0x3AC))));
                    *(unsigned int *)((a4 + 0x3B0)) = ((*(int *)((a4 + 0x3B0))) + 0x600);
                    *(unsigned int *)((a4 + 0x3B4)) = ((*(int *)((a4 + 0x3B4))) + 0x880);
                } else {
                    *(unsigned short *)((a4 + 0x6C)) = 0x0;
                    *(unsigned short *)((a4 + 0x70)) = 0x0;
                }
                nlPushMatrix(0x0);
                FUN_0c0dcca0((a4 + 0x30));
                nlRotateAZ((-(*(short *)((a4 + 0x70)))));
                nlRotateAY((*(short *)((a4 + 0x6E))));
                nlRotateAX((*(short *)((a4 + 0x6C))));
                FUN_0c0c465c((*(int *)((a4 + 0x28C))));
                return nlPopMatrix(0x1);
            }
            return t11;
        }
        if ((*(int *)((a4 + 0x1BC))) != 0) {
            *(unsigned int *)((a4 + 0x1F8)) = 0x0;
            *(unsigned int *)((a4 + 0x1BC)) = 0x0;
            *(unsigned int *)((a4 + 0x314)) = ((*(int *)((a4 + 0x314))) + 0x1);
            if ((int)(*(int *)((a4 + 0x1C4))) < (int)0x2) {
                t99 = *(int *)((a4 + 0x1C4));
                *(unsigned int *)(((t99 << 2) + 0xC247584)) = ((*(int *)(((t99 << 2) + 0xC247584))) + 0x1F4);
            }
            if ((int)(*(int *)((a4 + 0x314))) >= (int)0x3) {
                *(unsigned int *)((a4 + 0x2C4)) = 0x56F;
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                *(unsigned int *)((a4 + 0x2E8)) = 0x0;
                *(unsigned int *)((a4 + 0x3AC)) = 0x800;
                *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
                *(unsigned int *)((a4 + 0x288)) = ((*(int *)((a4 + 0x288))) + 0x1);
            } else {
                *(unsigned int *)((a4 + 0x2C4)) = 0x520;
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                *(unsigned int *)((a4 + 0x3AC)) = 0x800;
            }
            FUN_0c0cc3f8(0xF2BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        } else {
            if (((*(int *)((a4 + 0x2EC))) & 12) != 0) {
                *(unsigned int *)((a4 + 0x2C4)) = 0x28;
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                *(unsigned int *)((a4 + 0x2D4)) = 0x3;
                *(unsigned int *)((a4 + 0x2E8)) = 0x0;
            }
        }
        t123 = *(int *)((a4 + 0x3AC));
        *(unsigned int *)((a4 + 0x3AC)) = (t123 - 37);
        if ((int)(t123 - 37) > 0) {
            *(unsigned short *)((a4 + 0x6C)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x3B0))))) * (float)(*(int *)((a4 + 0x3AC))));
            *(unsigned short *)((a4 + 0x70)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x3B4))))) * (float)(*(int *)((a4 + 0x3AC))));
            *(unsigned int *)((a4 + 0x3B0)) = ((*(int *)((a4 + 0x3B0))) + 0x600);
            *(unsigned int *)((a4 + 0x3B4)) = ((*(int *)((a4 + 0x3B4))) + 0x880);
        } else {
            *(unsigned short *)((a4 + 0x6C)) = 0x0;
            *(unsigned short *)((a4 + 0x70)) = 0x0;
        }
        FUN_0c085704(a4);
        FUN_0c078018(a4);
        t141 = *(int *)((a4 + 0x1B0));
        if (t141 == -1) {
            return t141;
        }
        return FUN_0c01cdf2(a4);
    }
    FUN_0c01ce40(a4, 0xC1B6A14, 25.0f);
    FUN_0c085638(a4);
    *(unsigned int *)((a4 + 0x2C4)) = 0x28;
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x288)) = ((*(int *)((a4 + 0x288))) + 0x1);
    if ((*(int *)((a4 + 0x1BC))) != 0) {
        *(unsigned int *)((a4 + 0x1F8)) = 0x0;
        *(unsigned int *)((a4 + 0x1BC)) = 0x0;
        *(unsigned int *)((a4 + 0x314)) = ((*(int *)((a4 + 0x314))) + 0x1);
        if ((int)(*(int *)((a4 + 0x1C4))) < (int)0x2) {
            t149 = *(int *)((a4 + 0x1C4));
            *(unsigned int *)(((t149 << 2) + 0xC247584)) = ((*(int *)(((t149 << 2) + 0xC247584))) + 0x1F4);
        }
        if ((int)(*(int *)((a4 + 0x314))) >= (int)0x3) {
            *(unsigned int *)((a4 + 0x2C4)) = 0x56F;
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            *(unsigned int *)((a4 + 0x2E8)) = 0x0;
            *(unsigned int *)((a4 + 0x3AC)) = 0x800;
            *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
            *(unsigned int *)((a4 + 0x288)) = ((*(int *)((a4 + 0x288))) + 0x1);
        } else {
            *(unsigned int *)((a4 + 0x2C4)) = 0x520;
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            *(unsigned int *)((a4 + 0x3AC)) = 0x800;
        }
        FUN_0c0cc3f8(0xF2BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    } else {
        if (((*(int *)((a4 + 0x2EC))) & 12) != 0) {
            *(unsigned int *)((a4 + 0x2C4)) = 0x28;
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            *(unsigned int *)((a4 + 0x2D4)) = 0x3;
            *(unsigned int *)((a4 + 0x2E8)) = 0x0;
        }
    }
    t172 = *(int *)((a4 + 0x3AC));
    *(unsigned int *)((a4 + 0x3AC)) = (t172 - 37);
    if ((int)(t172 - 37) > 0) {
        *(unsigned short *)((a4 + 0x6C)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x3B0))))) * (float)(*(int *)((a4 + 0x3AC))));
        *(unsigned short *)((a4 + 0x70)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x3B4))))) * (float)(*(int *)((a4 + 0x3AC))));
        *(unsigned int *)((a4 + 0x3B0)) = ((*(int *)((a4 + 0x3B0))) + 0x600);
        *(unsigned int *)((a4 + 0x3B4)) = ((*(int *)((a4 + 0x3B4))) + 0x880);
    } else {
        *(unsigned short *)((a4 + 0x6C)) = 0x0;
        *(unsigned short *)((a4 + 0x70)) = 0x0;
    }
    FUN_0c085704(a4);
    FUN_0c078018(a4);
    t189 = *(int *)((a4 + 0x1B0));
    if (t189 == -1) {
        return t189;
    }
    return FUN_0c01cdf2(a4);
}


