/* Straight-line functions with calls and guards (batch gen_hh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01d8de(int, int, int, int, int, int);
int FUN_0c01d9c2(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c06a1d8(int, int);
int FUN_0c084800(float, float, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0853d4(int, float);
int FUN_0c095f40(int, int, int, int, int);
int FUN_0c095fa0(int, int);
int FUN_0c096094(int, int);
int FUN_0c09635c(int, int, float, float);
int FUN_0c0a6780(int, int, float, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0c4784(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0c4844(int, float);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db0a0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcc80(int);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e4226(int, int, int);
int FUN_0c0e5f1c(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlGetMatrix(int);
int nlInvertMatrix(int);
float nlLength(int, int);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotate(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c096f50(int a4, int a5, int a6, int a7);
int FUN_0c06a448(int a4);
int FUN_0c0cb5b8(int a4, int a5, int a6, int a7);
int FUN_0c097c9c(int a4, int a5, int a6, int a7);
int FUN_0c066370(int a4, int a5, int a6, int a7);
int FUN_0c070c96(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);

int FUN_0c096f50(int a4, int a5, int a6, int a7)
{
    int stk[20];
    register int t0;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t54;
    register int t55;
    int t57;
    register int t59;
    register float u79;
    register int t145;
    register int t142;
    register int t106;
    register int t110;
    register int t115;
    register int t117;
    register int t123;
    register int t125;
    register int t127;
    register int t128;
    register int t130;
    register int t133;
    register int t147;
    register float u195;
    register int t198;
    register int t199;
    register int t208;
    register int t201;
    register int t203;
    register int t56;
    register int t58;
    register float u60;
    register float u61;
    register int t87;
    register float u90;
    register float u91;
    register int t144;
    register int t141;
    register int t138;
    register int t139;

    t0 = *(int *)((a4 + 0x30));
    FUN_0c0685a4(a4, a5, a6, a7);
    if (((*(int *)((t0 + 0x2EC))) & 15) != 0) {
        *(unsigned int *)((a4 + 0x34)) = 0x1;
    }
    nlPushMatrix(0x0);
    FUN_0c0dbda0((*(int *)((t0 + 0x3E4))));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x8, 0.5f, (1.0f + 1.0f));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x7, 1.5f, (1.0f + 1.0f));
    t12 = *(int *)((a4 + 0x38));
    if ((int)t12 < (int)0x15) {
        t13 = FUN_0c0e5f1c();
        if (t13 == 0) {
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
    FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0xC0));
    FUN_0c09635c(t12, (*(int *)((a4 + 0x9D4))), 0.199999988f, (-1.0f));
    FUN_0c09635c(t12, (*(int *)((a4 + 0x9D8))), 0.699999988f, (-1.0f));
    FUN_0c09635c(t12, (*(int *)((a4 + 0x9DC))), 1.19999993f, (-1.0f));
    FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x100));
    FUN_0c09635c(t12, (*(int *)((a4 + 0x9E0))), 0.199999988f, (-1.0f));
    FUN_0c09635c(t12, (*(int *)((a4 + 0x9E4))), 0.699999988f, (-1.0f));
    FUN_0c09635c(t12, (*(int *)((a4 + 0x9E8))), 1.19999993f, (-1.0f));
    t54 = *(int *)((a4 + 0x38));
    if ((int)t54 <= (int)0xE) {
    } else {
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        t55 = 0xC0970CC;
        t57 = t54;
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
                    *(float *)((((int)stk + 8) + t55)) = u61;
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
                    u61 = (*(float *)((((int)stk + 8) + t55)));
                    u79 = *(float *)((t57 + 0x0));
                    t57 = 0xC0848BC;
                    t55 = (FUN_0c0848bc(((*(float *)0xC200AE8) * u61), (u79 * u61), ((*(float *)0xC200AF0) * u61)));
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
            t145 = t57;
            if ((*(int *)((t59 + 0x10))) != 0) {
                t144 = t56;
            } else {
                t56 = (*(int *)((a4 + 0x38)));
                t142 = t57;
                if ((int)t56 >= (int)0x19) {
                    t141 = t56;
                } else {
                    t55 = (*(int *)((a4 + 0x34)));
                    if (t55 != 0) {
                        t138 = t56;
                        t139 = t57;
                    } else {
                        t55 = (FUN_0c0da2e0());
                        t57 = 0xC0E5F1C;
                        t56 = t55;
                        t55 = 0x9;
                        t55 = (FUN_0c0e5f1c());
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
                        t57 = ((int)stk + 8);
                        t57 = (t57 + 0xC);
                        *(unsigned int *)((t59 + 0xC)) = t55;
                        *(unsigned int *)((t59 + 0x4)) = 0x0;
                        *(unsigned int *)((t59 + 0x8)) = 0x0;
                        *(unsigned int *)((t59 + 0x14)) = ((*(int *)((t59 + 0x14))) + 0x1);
                        t110 = t57;
                        *(int *)((int)stk + 4) = t110;
                        t55 = (FUN_0c095f40(t0, 0x1, (((int)stk + 4) + 0x8), (((int)stk + 4) + 0xC), t110));
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
                        t58 = (*(int *)(((int)stk + 8)));
                        t115 = t55;
                        t55 = (t55 << 2);
                        t57 = 0x114;
                        t55 = (t55 + t115);
                        t117 = t58;
                        t58 = (t58 << 2);
                        *(unsigned int *)(((int)stk + 24)) = 0x0;
                        t58 = (t58 + t117);
                        t55 = (t55 << 2);
                        t58 = (t58 + t55);
                        t57 = (t57 + a4);
                        t58 = (t58 * 0x1C);
                        t58 = (t58 + t57);
                        for (;;) {
                            t55 = 0x4;
                            *(unsigned int *)((t58 + 0x18)) = 0x28;
                            u61 = (*(float *)((((int)stk + 8) + t55)));
                            t55 = 0x8;
                            *(float *)((t58 + 0x0)) = u61;
                            u61 = (*(float *)((((int)stk + 8) + t55)));
                            t55 = 0x4;
                            *(float *)((t58 + t55)) = u61;
                            t55 = 0xC;
                            u61 = (*(float *)((((int)stk + 8) + t55)));
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
                            t128 = *(int *)(((int)stk + 24));
                            *(unsigned int *)(((int)stk + 24)) = (t128 + 0x1);
                            t58 = (t58 + 0x1C);
                            if ((int)(t128 + 0x1) >= (int)t57) {
                                break;
                            }
                        }
                        t58 = (*(int *)(((int)stk + 8)));
                        t57 = 0xB4;
                        t130 = t58;
                        t58 = (t58 << 1);
                        t58 = (t58 + t130);
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
                        t133 = t55;
                        t55 = 0xC0973C8;
                        u60 = (*(float *)((t55 + 0x0)));
                        t55 = 0x14;
                        u61 = (float)t133;
                        u61 = (u61 / u60);
                        u61 = (u61 + 0.5f);
                        *(float *)((t58 + t55)) = u61;
                        t55 = 0x4;
                        u61 = (*(float *)((((int)stk + 8) + t55)));
                        t55 = 0x4;
                        *(float *)((t58 + t55)) = u61;
                        t55 = 0x8;
                        u61 = (*(float *)((((int)stk + 8) + t55)));
                        t55 = 0x8;
                        *(float *)((t58 + t55)) = u61;
                        t55 = 0xC;
                        u61 = (*(float *)((((int)stk + 8) + t55)));
                        t55 = 0xC;
                        *(float *)((t58 + t55)) = u61;
                    }
                    t141 = t138;
                    t142 = t139;
                }
                t144 = t141;
                t145 = t142;
            }
            t147 = *(int *)(((int)stk + 8));
            t56 = t144;
            t57 = t145;
            t57 = 0x4;
            *(unsigned int *)(((int)stk + 8)) = (t147 + 0x1);
            t59 = (t59 + 0x1C);
            if ((int)(t147 + 0x1) < (int)t57) continue;
            break;
        }
    }
    FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x280));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x6, 1.0f, 1.39999998f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x5, 1.5f, 1.39999998f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x4, (1.0f + 1.0f), 1.39999998f);
    FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x2C0));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x3, 1.0f, 1.0f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x2, 1.5f, 1.0f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x1, (1.0f + 1.0f), 1.0f);
    FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x340));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x6, 1.0f, 1.39999998f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x5, 1.5f, 1.39999998f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x4, (1.0f + 1.0f), 1.39999998f);
    FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x380));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x3, 1.0f, 1.0f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x2, (*(float *)0xC0974EC), 1.0f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x1, (1.0f + 1.0f), 1.0f);
    nlPopMatrix(0x1);
    FUN_0c096094((0x114 + a4), 0x50);
    u195 = *(float *)0xC0974F8;
    FUN_0c084800(u195, u195, 1.0f);
    FUN_0c095fa0((0xB4 + a4), 0x4);
    t198 = FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
    t199 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x3C)) = (t199 - 1);
    t208 = t198;
    if ((int)(t199 - 1) < 0) {
        *(unsigned int *)((a4 + 0x3C)) = (*(int *)((a4 + 0x40)));
        t201 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t201 + 0x1);
        t203 = 0x40;
        if ((int)(t201 + 0x1) > (int)0x3C) {
            t203 = (FUN_0c0e19f2());
        }
        t208 = t203;
    }
    return t208;
}

int FUN_0c06a448(int a4)
{
    int stk[20];
    register int t18;
    register float t19;
    register int t20;
    register int t21;
    register float u24;
    register float u25;
    register float u27;
    register float t32;
    register float u36;
    register float u37;
    register float u38;
    register int t75;
    register int t76;
    register int t77;
    register int t80;
    register int t82;
    register int t83;
    register int t104;
    register int t106;
    register int t84;
    register int t85;
    register int t86;
    register int t87;
    register int t88;
    register float u92;
    register int t96;
    register int t98;
    register int t99;
    register int t111;
    register int t112;
    register int t114;
    register int t116;
    register int t117;
    register int t118;
    register int t119;
    register int t168;
    register int t129;
    register float u133;
    register float u135;
    register float u137;
    register int t145;
    register float u149;
    register float u151;
    register float u153;
    register int t175;
    register int t206;
    register int t208;
    register int t209;
    register int t65;
    register int t161;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        if ((*(int *)((a4 + 0xA4))) != 0) {
            FUN_0c01d9c2(a4);
        }
        FUN_0c0cc3f8(0x321A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
        FUN_0c0cc3f8(0x521A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
        FUN_0c0e4226(0x0, 0xA6, 0x0);
        FUN_0c0e19f2();
    }
    *(unsigned int *)(((int)stk + 8)) = (*(int *)0xC23EE54);
    t18 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t18 + 0x1000);
    t19 = FUN_0c0da410((t18 + 0x1000));
    *(float *)(((int)stk + 4)) = t19;
    t20 = *(int *)((a4 + 0x230));
    t21 = *(int *)(((0x234 + a4) + 0x0));
    *(unsigned int *)((a4 + 0x230)) = (t20 + t21);
    u24 = *(float *)(((*(int *)(((int)stk + 8))) + 0x44));
    u25 = (t19 * (FUN_0c0da410((t20 + t21))));
    u27 = (*(float *)((a4 + 0x64)));
    u27 = u27 + 0.0329999998f * (u25 * u24);
    *(float *)((a4 + 0x34)) = u27;
    if ((int)(*(int *)((a4 + 0x234))) > (int)0xE000) {
        *(unsigned int *)((a4 + 0x234)) = 0x0;
    }
    t32 = FUN_0c0da410((*(int *)((a4 + 0x22C))));
    *(float *)(((int)stk + 4)) = t32;
    u36 = *(float *)(((*(int *)(((int)stk + 8))) + 0x44));
    u37 = (t32 * (FUN_0c0d9e90((*(int *)((a4 + 0x230))))));
    u38 = (u37 * u36);
    *(unsigned short *)((a4 + 0x70)) = (int)(u38 * 8.0f);
    if ((*(int *)((a4 + 0xA4))) != 0) {
        FUN_0c01d8de(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
        if ((*(int *)((a4 + 0xBC))) == 7) {
            *(unsigned int *)0xC247BF4 = ((*(int *)((a4 + 0x84))) + 0x10);
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    nlRotateAZ((*(short *)((a4 + 0x70))));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    if (((*(int *)0xC23ED50) == 54) && (t65 = *(int *)((a4 + 0xBC)), t65 == 10)) {
        nlPushMatrix(0x0);
        nlMultiMatrixRevOrder(((*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC))) + 0x2EC));
        nlGetMatrix(0xC247BF8);
        *(unsigned int *)0xC247BF4 = 0xC247BF8;
        nlPopMatrix(0x1);
    }
    t75 = 0x228;
    t76 = (0x250 + a4);
    t77 = (*(int *)((a4 + 0x228)));
    for (;;) {
        if ((int)(*(short *)((t77 + 0x0))) < 0) {
            break;
        }
        t75 = 0x24C;
        t80 = t76;
        t76 = (t76 + 0x1C);
        t75 = (FUN_0c06a1d8(t80, (((((*(int *)((a4 + t75))) & 0x1) == 0)) ? 1 : 0)));
        t77 = (t77 + 0x2);
    }
    t82 = *(int *)((a4 + 0x3BC));
    *(unsigned int *)(((int)stk + 16)) = (0x3E4 + a4);
    t83 = *(int *)((a4 + 0x3C0));
    *(unsigned int *)(((int)stk + 12)) = t83;
    t104 = (0x3C4 + a4);
    t106 = t77;
    if (t82 != 0) {
        t84 = 0x3C0;
        t85 = t83;
        t86 = (0x3C4 + a4);
        t87 = t82;
        t88 = t77;
        for (;;) {
            if ((int)(*(short *)((t87 + 0x0))) < 0) {
                break;
            }
            t84 = (nlPushMatrix(0x0));
            t88 = (*(int *)(((int)stk + 12)));
            t84 = 0x8;
            u92 = *(float *)((t88 + t84));
            t84 = 0x4;
            t84 = (FUN_0c0dcc70((*(float *)((t88 + 0x0))), (*(float *)((t88 + t84))), u92));
            t85 = 0xC0DC890;
            t96 = *(int *)((t86 + 0x0));
            t86 = (t86 + 0x4);
            t84 = (nlRotateAY(t96));
            t84 = 0x24C;
            t98 = *(int *)(((int)stk + 16));
            t99 = *(int *)((a4 + t84));
            *(unsigned int *)(((int)stk + 16)) = (t98 + 0x1C);
            t84 = (FUN_0c06a1d8(((t98 + 0x1C) - 28), ((((t99 & 0x1) == 0)) ? 1 : 0)));
            t84 = (nlPopMatrix(0x1));
            t85 = (*(int *)(((int)stk + 12)));
            t87 = (t87 + 0x2);
            t85 = (t85 + 0xC);
            *(unsigned int *)(((int)stk + 12)) = t85;
        }
        t104 = t86;
        t106 = t88;
    }
    if ((*(int *)((a4 + 0x500))) == 0) {
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 20)) = 0xC0FAB38;
        *(unsigned int *)(((int)stk + 16)) = 0xC0FAB68;
        *(unsigned int *)(((int)stk + 12)) = 0xC0FAB98;
        t111 = *(int *)0xC23A258;
        *(unsigned int *)(((int)stk + 28)) = (t111 << 13);
        *(unsigned int *)(((int)stk + 24)) = 0x4;
        t112 = *(int *)(((int)stk + 8));
        t114 = (t111 << 13);
        if (6.0f > (*(float *)((t112 + 0x44)))) {
            *(unsigned int *)(((int)stk + 28)) = 0x0;
            t114 = 0x0;
        }
        t116 = t114;
        t117 = t112;
        t118 = t104;
        t119 = t106;
        for (;;) {
            t168 = t116;
            if (!((*(float *)(((*(int *)(((int)stk + 8))) + 0x44))) > 0.0f)) {
            } else {
                t117 = 0xC247C38;
                t119 = (*(int *)((t117 + 0x0)));
                if (t119 == 0) {
                    t161 = t116;
                } else {
                    t116 = 0xC0DC510;
                    nlPushMatrix(0x0);
                    t117 = 0x2EC;
                    nlMultiMatrixRevOrder(((*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC))) + t117));
                    t118 = (*(int *)((t119 + 0x30)));
                    t116 = 0x480;
                    t117 = t119;
                    t129 = (t118 * 0x1C);
                    t118 = (t118 + 0x1);
                    *(unsigned int *)((t119 + 0x30)) = t118;
                    t117 = (t117 + 0x34);
                    t118 = t129;
                    t118 = (t118 + t117);
                    if ((int)(*(int *)((t119 + 0x30))) >= (int)t116) {
                        t117 = 0x0;
                        *(unsigned int *)((t119 + 0x30)) = t117;
                    }
                    *(unsigned int *)((t118 + 0x18)) = 0x10;
                    u133 = 0.0199999996f;
                    u133 = u133 + 7.5702068e-05f * (float)((FUN_0c0da2e0()) & 0xFFF);
                    *(float *)((t118 + 0x10)) = u133;
                    u135 = -0.359999985f;
                    u135 = u135 + 0.000126984116f * (float)((FUN_0c0da2e0()) & 0xFFF);
                    *(float *)((t118 + 0xC)) = u135;
                    u137 = -2.22999978f;
                    u137 = u137 + 0.000324786291f * (float)((FUN_0c0da2e0()) & 0xFFF);
                    *(float *)((t118 + 0x14)) = u137;
                    FUN_0c0dce80((t118 + 0xC), (t118 + 0xC), ((*(float *)(((*(int *)(((int)stk + 8))) + 0x44))) / 6.0f));
                    FUN_0c0db470((*(int *)(((int)stk + 16))), t118);
                    t118 = (*(int *)((t119 + 0x30)));
                    t116 = 0x480;
                    t117 = t119;
                    t145 = (t118 * 0x1C);
                    t118 = (t118 + 0x1);
                    *(unsigned int *)((t119 + 0x30)) = t118;
                    t117 = (t117 + 0x34);
                    t118 = t145;
                    t118 = (t118 + t117);
                    if ((int)(*(int *)((t119 + 0x30))) >= (int)t116) {
                        t117 = 0x0;
                        *(unsigned int *)((t119 + 0x30)) = t117;
                    }
                    *(unsigned int *)((t118 + 0x18)) = 0x10;
                    u149 = 0.0199999996f;
                    u149 = u149 + 7.5702068e-05f * (float)((FUN_0c0da2e0()) & 0xFFF);
                    *(float *)((t118 + 0x10)) = u149;
                    u151 = -0.359999985f;
                    u151 = u151 + 0.000126984116f * (float)((FUN_0c0da2e0()) & 0xFFF);
                    *(float *)((t118 + 0xC)) = u151;
                    u153 = -2.22999978f;
                    u153 = u153 + 0.000324786291f * (float)((FUN_0c0da2e0()) & 0xFFF);
                    *(float *)((t118 + 0x14)) = u153;
                    FUN_0c0dce80((t118 + 0xC), (t118 + 0xC), ((*(float *)(((*(int *)(((int)stk + 8))) + 0x44))) / 6.0f));
                    FUN_0c0db470((*(int *)(((int)stk + 12))), t118);
                    nlPopMatrix(0x1);
                }
                t168 = t161;
            }
            t116 = t168;
            t117 = 0xC0DC510;
            nlPushMatrix(0x0);
            t175 = *(int *)(((int)stk + 20));
            *(unsigned int *)(((int)stk + 20)) = (t175 + 0xC);
            FUN_0c0dcca0(((t175 + 0xC) - 12));
            nlRotateAX((*(int *)(((int)stk + 28))));
            t117 = 0xC0C465C;
            FUN_0c0c465c(0xFC7);
            nlPopMatrix(0x1);
            *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0xC);
            t117 = (*(int *)(((int)stk + 12)));
            t117 = (t117 + 0xC);
            *(unsigned int *)(((int)stk + 12)) = t117;
            t116 = (*(int *)(((int)stk + 24)));
            t116 = (t116 - 1);
            *(unsigned int *)(((int)stk + 24)) = t116;
            if (t116 != 0) continue;
            break;
        }
        nlPopMatrix(0x1);
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x64))), (*(float *)((a4 + 0x38))));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    t206 = *(int *)((a4 + 0x4C4));
    if (t206 != 0) {
        t208 = t206;
        t209 = (0x4C8 + a4);
        for (;;) {
            if ((int)(*(short *)((t208 + 0x0))) < 0) {
                break;
            }
            FUN_0c0c465c((*(int *)((t209 + 0x0))));
            t208 = (t208 + 0x2);
            t209 = (t209 + 0x1C);
        }
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c0cb5b8(int a4, int a5, int a6, int a7)
{
    int stk[35];
    register int t1;
    register float u7;
    register float u9;
    register float u10;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u17;
    register float u18;
    register float u19;
    register int t21;
    register int t22;
    register float u29;
    register float u30;
    register float u31;
    register float u32;
    register int t42;
    register float u45;
    register int t34;
    register float u40;
    register int t49;
    register int t50;
    register int t51;
    register int t52;
    register float u53;
    register float u54;
    register float u56;
    register float u60;
    register float u66;
    register float u67;
    register float u73;
    register float u80;
    register float u81;
    register float u83;
    register int t92;
    register int t99;
    register int t100;
    register int t101;
    register int t107;
    register int t115;
    register int t128;
    register int t130;
    register int t131;
    register float u132;
    register int t138;
    register int t139;
    register float u46;
    register float u55;
    register float u89;
    register float u90;
    register float u102;
    register float u103;
    register int t129;

    t1 = *(int *)((a4 + 0x30));
    *(unsigned int *)(((int)stk + 60)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    FUN_0c0685a4(a4, a5, a6, a7);
    if ((int)(*(int *)0xC20A5F4) < (int)0x1) {
        *(unsigned int *)0xC20A5F4 = 0x1;
    }
    nlPushMatrix(0x0);
    u7 = *(float *)((t1 + 0x278));
    FUN_0c0db0a0(0x3, 0x7);
    u9 = *(float *)((t1 + 0x50));
    *(float *)(((int)stk + 48)) = u9;
    u10 = *(float *)((t1 + 0x4C));
    *(float *)(((int)stk + 44)) = u10;
    u11 = *(float *)((t1 + 0x48));
    *(float *)(((int)stk + 40)) = u11;
    *(int *)((int)stk + 36) = 0xC1E9D1C;
    nlPrintf(0xC1E9D1C, u11, u10, u9);
    u13 = *(float *)((t1 + 0x5C));
    *(float *)(((int)stk + 32)) = u13;
    u14 = *(float *)((t1 + 0x58));
    *(float *)(((int)stk + 28)) = u14;
    u15 = *(float *)((t1 + 0x54));
    *(float *)(((int)stk + 24)) = u15;
    *(int *)((int)stk + 20) = 0xC1E9D30;
    nlPrintf(0xC1E9D30, u15, u14, u13);
    u17 = *(float *)((t1 + 0x68));
    *(float *)(((int)stk + 16)) = u17;
    u18 = *(float *)((t1 + 0x64));
    *(float *)(((int)stk + 12)) = u18;
    u19 = *(float *)((t1 + 0x60));
    *(float *)(((int)stk + 8)) = u19;
    *(int *)((int)stk + 4) = 0xC1E9D44;
    nlPrintf(0xC1E9D44, u19, u18, u17);
    *(unsigned int *)(((int)stk + 52)) = 0xC20A66C;
    t21 = 0x0;
    t22 = 0xC0DB0E0;
    for (;;) {
        FUN_0c0dbda0((((((*(int *)(((*(int *)(((int)stk + 52))) + 0x0))) << 2) << 2) << 2) + (*(int *)((t1 + 0x3E4)))));
        FUN_0c0db840((((int)stk + 52) + 0x1C));
        u29 = *(float *)((t1 + 0x390));
        u30 = *(float *)(((int)stk + 84));
        u31 = *(float *)(((*(int *)(((int)stk + 52))) + 0x4));
        *(unsigned int *)(((int)stk + 56)) = (t21 << 2);
        u32 = *(float *)((((0x164C + a4) + (t21 << 2)) + 0x0));
        t42 = 0x4;
        u45 = u32;
        if ((u32 > (u31 * u7)) && ((u31 * u7) > (u30 - u29))) {
            t22 = (*(int *)((a4 + 0x1658)));
            t22 = (t22 + 0x1);
            *(unsigned int *)((a4 + 0x1658)) = t22;
            t22 = (t22 - 1);
            t34 = t22;
            t22 = (t22 << 2);
            t22 = (t22 << 1);
            t22 = (t22 + t34);
            t22 = (t22 << 2);
            t22 = (t22 + (0x165C + a4));
            if ((int)(*(int *)((a4 + 0x1658))) >= (int)0x8) {
                *(unsigned int *)((a4 + 0x1658)) = 0x0;
            }
            FUN_0c0db4d0(((*(int *)(((int)stk + 52))) + 0x8), (((int)stk + 52) + 0x10));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t22) = *(struct mv3 *)((((int)stk + 52) + 0x1C)); }
            nlAddVector(t22, (((int)stk + 52) + 0x10));
            u40 = *(float *)((t1 + 0x390));
            *(float *)((t22 + 0x4)) = (u40 + 0.00299999979f);
            *(unsigned int *)((t22 + 0x18)) = 0x10;
            *(unsigned int *)((t22 + 0x1C)) = (*(short *)((t1 + 0x6E)));
            *(unsigned int *)((t22 + 0x20)) = t21;
            t42 = 0x6E;
            u45 = (u40 + 0.00299999979f);
        } else {
            u46 = (u31 * u7);
        }
        t21 = (t21 + 0x1);
        *(float *)((((0x164C + a4) + (*(int *)(((int)stk + 56)))) + 0x0)) = (u30 - u29);
        *(unsigned int *)(((int)stk + 52)) = ((*(int *)(((int)stk + 52))) + 0x20);
        if ((unsigned int)t21 < (unsigned int)0x3) continue;
        break;
    }
    *(unsigned int *)(((int)stk + 52)) = 0x0;
    t49 = t42;
    t50 = 0x3;
    t51 = t21;
    t52 = (0x165C + a4);
    u53 = u45;
    u54 = u46;
    u56 = (u30 - u29);
    for (;;) {
        if ((*(int *)((t52 + 0x18))) != 0) {
            t51 = (*(int *)((t52 + 0x20)));
            t51 = (t51 << 2);
            t50 = 0xC0DCCC0;
            t51 = (t51 << 2);
            t51 = (t51 << 1);
            t51 = (t51 + 0xC20A66C);
            t49 = (nlUnitMatrix());
            t49 = 0x8;
            u60 = *(float *)((t52 + t49));
            t49 = 0x4;
            u54 = (*(float *)((t52 + 0x0)));
            t49 = (FUN_0c0dcc70(u54, (*(float *)((t52 + t49))), u60));
            t50 = 0xC0DC890;
            t49 = (nlRotateAY((*(int *)((t52 + 0x1C)))));
            t49 = 0x1C;
            u66 = *(float *)((t51 + t49));
            t49 = 0x18;
            u67 = *(float *)((t51 + t49));
            t49 = 0x14;
            u54 = (*(float *)((t51 + t49)));
            u54 = (u54 * u7);
            t49 = (nlScale(u54, (u67 * u7), (u66 * u7)));
            t49 = 0x14;
            u53 = (*(float *)((t51 + t49)));
            t49 = 0xC;
            u53 = (u53 * u7);
            *(float *)((((int)stk + 52) + t49)) = u53;
            t49 = 0x18;
            u56 = (*(float *)((t51 + t49)));
            t49 = 0x1C;
            u55 = (*(float *)((t51 + t49)));
            u56 = (u56 * u7);
            u55 = (u55 * u7);
            u73 = u56;
            if (u55 > u56) {
                u73 = u55;
            }
            if (u73 > u53) {
                if (u55 > u56) {
                    u54 = u55;
                } else {
                    u54 = u56;
                }
            } else {
                t49 = 0xC;
                u54 = (*(float *)((((int)stk + 52) + t49)));
            }
            t50 = 0xC0DE000;
            t49 = (FUN_0c0de000(u54));
            t49 = 0xC0CB874;
            u80 = *(float *)((t49 + 0x0));
            t49 = 0xC0CB878;
            u81 = *(float *)((t49 + 0x0));
            t49 = 0xC0CB87C;
            u53 = (float)(*(int *)((t52 + 0x18)));
            u53 = (u53 / u80);
            u53 = (-u53);
            u53 = (u53 + 1.0f);
            u83 = u81;
            u83 = u83 + (*(float *)((t49 + 0x0))) * u53;
            u53 = u83;
            if (!(2.14748365e+09f > u53)) {
                u53 = (u53 - (2.14748365e+09f + 2.14748365e+09f));
            }
            t49 = (FUN_0c0c47ae((int)u53));
            t50 = (*(int *)((t52 + 0x18)));
            t50 = (t50 - 1);
            *(unsigned int *)((t52 + 0x18)) = t50;
        } else {
            u89 = u53;
            u90 = u54;
        }
        t92 = *(int *)(((int)stk + 52));
        u53 = u89;
        u54 = u90;
        *(unsigned int *)(((int)stk + 52)) = (t92 + 0x1);
        t52 = (t52 + 0x24);
        if ((int)(t92 + 0x1) >= (int)0x8) {
            break;
        }
    }
    nlPopMatrix(0x1);
    FUN_0c084800((*(float *)0xC20A5C4), (*(float *)0xC20A5C8), (*(float *)0xC20A5CC));
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 52)) = 0x0;
    t99 = 0xC0CB8A0;
    t100 = t51;
    t101 = t52;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 52))) >= (int)(*(int *)0xC20A5D8)) {
            break;
        }
        t99 = 0x48;
        t101 = (*(int *)((a4 + t99)));
        t107 = (t101 * 0x2C);
        t101 = (t101 + 0x1);
        *(unsigned int *)((a4 + t99)) = t101;
        t99 = (*(int *)((a4 + t99)));
        t101 = t107;
        t101 = (t101 + (a4 + 0x4C));
        if ((int)t99 >= (int)0x80) {
            t99 = 0x48;
            *(unsigned int *)((a4 + t99)) = 0x0;
        }
        t99 = 0x44;
        t100 = (*(int *)((a4 + t99)));
        t100 = (t100 + 0x1);
        *(unsigned int *)((a4 + t99)) = t100;
        t100 = (t100 - 1);
        t100 = (t100 << 2);
        t100 = (t100 << 2);
        t100 = (t100 + 0xC20A524);
        if ((unsigned int)(*(int *)((a4 + t99))) >= (unsigned int)0x8) {
            *(unsigned int *)((a4 + t99)) = 0x0;
        }
        t99 = (FUN_0c0da2e0());
        t99 = (t99 & 0xFFF);
        t99 = (-t99);
        t115 = t99;
        t99 = 0x4;
        u102 = (*(float *)((t100 + t99)));
        t99 = 0x20;
        u102 = (u102 / 4095.0f);
        u103 = (float)t115;
        u103 = (u103 * u102);
        *(float *)((t101 + t99)) = u103;
        t99 = 0xC;
        *(unsigned int *)((t101 + 0x1C)) = (*(int *)((t100 + 0x0)));
        *(unsigned int *)((t101 + 0x28)) = (*(int *)((t100 + 0x8)));
        *(unsigned int *)((t101 + 0x18)) = (*(int *)0xC20A5F4);
        u103 = (*(float *)((t100 + t99)));
        t99 = 0x24;
        *(float *)((t101 + t99)) = u103;
        *(unsigned int *)(((int)stk + 52)) = ((*(int *)(((int)stk + 52))) + 0x1);
    }
    nlPopMatrix(0x1);
    FUN_0c084800((*(float *)0xC20A5C4), (*(float *)0xC20A5C8), (*(float *)0xC20A5CC));
    t128 = (nlPushMatrix(0x0));
    t130 = (a4 + 0x4C);
    t131 = 0x0;
    u132 = u56;
    for (;;) {
        if ((*(int *)((t130 + 0x18))) == 0) {
        } else {
            t129 = (*(int *)0xC20A5F4);
            t128 = 0x3E4;
            t138 = t129;
            t129 = (*(int *)((t1 + t128)));
            t139 = (((((*(int *)((t130 + 0x1C))) << 2) << 2) << 2) + t129);
            t129 = 0xC0DBDA0;
            u132 = ((-((float)(*(int *)((t130 + 0x18))) / (float)t138)) + 1.0f);
            u132 = (u132 * (*(float *)0xC20A5D4));
            t128 = (FUN_0c0dbda0(t139));
            t128 = 0x24;
            if ((*(float *)((t130 + t128))) != 0.0f) {
                t128 = (FUN_0c0dcc70(0.0f, (*(float *)((t130 + t128))), 0.0f));
            }
            t129 = 0xC0DC950;
            t128 = (nlRotateAZ((*(int *)((t130 + 0x28)))));
            t128 = 0x20;
            t128 = (FUN_0c0dcc70(0.0f, (*(float *)((t130 + t128))), 0.0f));
            t129 = 0xC0DB840;
            t128 = (FUN_0c0db840((((int)stk + 52) + 0x1C)));
            t128 = (nlUnitMatrix());
            t129 = 0xC0DCCA0;
            t128 = (FUN_0c0dcca0((((int)stk + 52) + 0x1C)));
            t129 = 0xC20A5EC;
            t128 = (FUN_0c0dcc70((*(float *)0xC20A5E8), (*(float *)((t129 + 0x0))), (*(float *)0xC20A5F0)));
            t128 = 0x3CE;
            t128 = (nlRotateAY((*(short *)(((*(int *)(((int)stk + 60))) + t128)))));
            t128 = 0x3CC;
            t128 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 60))) + t128)))));
            t129 = 0xC0DCB80;
            t128 = (nlScale(u132, u132, u132));
            t128 = (FUN_0c0de000(u132));
            t129 = (*(int *)((t130 + 0x18)));
            t128 = (FUN_0c0c4844(0x3A3, ((float)t129 / (float)(*(int *)0xC20A5F4))));
            t129 = (*(int *)((t130 + 0x18)));
            t129 = (t129 - 1);
            *(unsigned int *)((t130 + 0x18)) = t129;
        }
        t131 = (t131 + 0x1);
        t130 = (t130 + 0x2C);
        if ((int)t131 < (int)0x80) continue;
        break;
    }
    nlPopMatrix(0x1);
    return (FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 52), *(int *)((int)stk + 52 + 4), *(int *)((int)stk + 52 + 8), *(int *)((int)stk + 52 + 12)));
}

int FUN_0c097c9c(int a4, int a5, int a6, int a7)
{
    int stk[26];
    register int t0;
    register int t5;
    register int t7;
    register int t8;
    register int t111;
    register int t115;
    register int t117;
    register int t11;
    register int t97;
    register int t101;
    register int t103;
    register int t16;
    register int t84;
    register int t87;
    register int t89;
    register int t34;
    register int t35;
    register float u37;
    register float u39;
    register int t40;
    register int t55;
    register int t56;
    register int t63;
    register int t64;
    register float u69;
    register int t124;
    register int t125;
    register int t126;
    register int t127;
    register int t128;
    register int t129;
    register float u130;
    register float u131;
    register float u132;
    register float u137;
    register float u139;
    register float u140;
    register float u142;
    register float u143;
    register float u144;
    register float u145;
    register float u146;
    register float u149;
    register float u150;
    register float u161;
    register int t200;
    register int t201;
    register int t202;
    register float u207;
    register int t210;
    register int t211;
    register int t220;
    register int t213;
    register int t215;
    register int t3;
    register float u120;
    register float u122;
    register float u123;
    register float u106;
    register float u108;
    register float u109;
    register float u92;
    register float u94;
    register float u95;
    register int t71;
    register int t74;
    register int t76;
    register float u79;
    register float u81;
    register float u82;
    register int t173;
    register int t176;
    register float u177;
    register float u178;

    t0 = *(int *)((a4 + 0x30));
    *(unsigned int *)(((int)stk + 28)) = 0xFFFFFFFF;
    FUN_0c0685a4(a4, a5, a6, a7);
    if (((*(int *)((t0 + 0x2EC))) & 15) != 0) {
        *(unsigned int *)((a4 + 0x34)) = 0x1;
        t3 = 0x1;
    }
    t5 = *(int *)((a4 + 0x38));
    if ((int)t5 < (int)0x7) {
    } else {
        t7 = *(int *)((a4 + 0x38));
        t8 = ((~(((~(t7 - 7)) + 0x1) & 0x1)) + 0x1);
        if ((int)(t7 - 7) >= 0) {
            t8 = ((t7 - 7) & 0x1);
        }
        t111 = t5;
        t115 = t3;
        t117 = (t7 - 7);
        if (t8 == 0) {
            t11 = (int)((unsigned int)((int)((unsigned int)(t7 - 7) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t7 - 7))) ? 1u : 0u));
            *(unsigned int *)(((int)stk + 8)) = (t11 >> 1);
            t97 = (t11 >> 1);
            t101 = 0x5;
            t103 = (t11 >> 1);
            if ((int)(t11 >> 1) < (int)0x5) {
                t16 = *(int *)(((int)stk + 8));
                t84 = (0x634 + a4);
                t87 = 0x5;
                t89 = (t11 >> 1);
                if ((*(int *)(((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) + 0x0))) == 0) {
                    if ((*(int *)((a4 + 0x34))) != 0) {
                        t71 = (0x634 + a4);
                        t74 = 0x5;
                        t76 = (t11 >> 1);
                    } else {
                        *(unsigned int *)(((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) + 0x0)) = 0x14;
                        *(float *)(((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) + 0x4)) = (((float)(unsigned char)(FUN_0c0da2e0()) / 512.0f) + 0.5f);
                        *(unsigned int *)(((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) + 0x14)) = (FUN_0c0da2e0());
                        *(unsigned int *)(((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) + 0x8)) = ((*(int *)(((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) + 0x8))) + 0x1);
                        if ((*(int *)(((int)stk + 8))) != 0) {
                            *(float *)(((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) + 0x18)) = (*(float *)((((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) - 48) + 0x24)));
                            *(float *)(((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) + 0x1C)) = (*(float *)((((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) - 48) + 0x28)));
                            *(float *)(((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) + 0x20)) = (*(float *)((((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) - 48) + 0x2C)));
                        } else {
                            *(int *)((int)stk + 4) = ((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) + 0x20);
                            FUN_0c095f40(t0, (0x1 & ((int)stk + 4)), ((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) + 0x18), ((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) + 0x1C), ((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) + 0x20));
                        }
                        t34 = FUN_0c0da2e0();
                        t35 = FUN_0c0da2e0();
                        u37 = (((float)(unsigned char)t34 * (1.0f + 1.0f)) / 256.0f);
                        *(float *)(((int)stk + 44)) = (u37 * (FUN_0c0d9e90(t35)));
                        u39 = (((float)(unsigned char)t34 * (1.0f + 1.0f)) / 256.0f);
                        *(float *)(((int)stk + 48)) = (u39 * (FUN_0c0da410(t35)));
                        t40 = *(int *)(((int)stk + 8));
                        *(unsigned int *)(((int)stk + 12)) = (t40 << 2);
                        *(float *)(((int)stk + 52)) = (*(float *)(((t40 << 2) + 0xC10BE60)));
                        nlPushMatrix(0x0);
                        nlUnitMatrix();
                        FUN_0c0dcc70((*(float *)((t0 + 0x30))), (*(float *)((t0 + 0x34))), (*(float *)((t0 + 0x38))));
                        nlRotateAY((*(short *)((t0 + 0x6E))));
                        FUN_0c0dcc70(0.0f, (*(float *)(((*(int *)(((int)stk + 12))) + 0xC10BE74))), 0.0f);
                        FUN_0c0db470((((int)stk + 8) + 0x24), ((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) + 0x24));
                        nlPopMatrix(0x1);
                        t55 = *(int *)(((int)stk + 8));
                        *(unsigned int *)(((int)stk + 12)) = 0x0;
                        t56 = (((((t55 << 2) + t55) << 1) * 0x1C) + (0xBC + a4));
                        for (;;) {
                            *(unsigned int *)((t56 + 0x18)) = 0x28;
                            *(float *)((t56 + 0x0)) = (*(float *)(((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) + 0x24)));
                            *(float *)((t56 + 0x4)) = (*(float *)(((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) + 0x28)));
                            *(float *)((t56 + 0x8)) = (*(float *)(((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) + 0x2C)));
                            *(float *)((t56 + 0xC)) = ((((float)((FUN_0c0da2e0()) & 0x7FFF) * 0.5f) / 32767.0f) + -0.25f);
                            *(float *)((t56 + 0x10)) = ((((float)((FUN_0c0da2e0()) & 0x7FFF) * 0.5f) / 32767.0f) + -0.25f);
                            *(float *)((t56 + 0x14)) = ((((float)((FUN_0c0da2e0()) & 0x7FFF) * 0.5f) / 32767.0f) + -0.25f);
                            t63 = *(int *)(((int)stk + 12));
                            *(unsigned int *)(((int)stk + 12)) = (t63 + 0x1);
                            t56 = (t56 + 0x1C);
                            if ((int)(t63 + 0x1) >= (int)0xA) {
                                break;
                            }
                        }
                        t64 = *(int *)(((int)stk + 8));
                        *(unsigned int *)(((((((t64 << 1) + t64) << 2) << 1) + (a4 + 0x44)) + 0x0)) = 0x14;
                        *(unsigned int *)(((((((t64 << 1) + t64) << 2) << 1) + (a4 + 0x44)) + 0x10)) = ((-((FUN_0c0da2e0()) & 0x4000)) + 0xE000);
                        *(float *)(((((((t64 << 1) + t64) << 2) << 1) + (a4 + 0x44)) + 0x14)) = (((float)(unsigned char)(FUN_0c0da2e0()) / 255.0f) + 0.5f);
                        *(float *)(((((((t64 << 1) + t64) << 2) << 1) + (a4 + 0x44)) + 0x4)) = (*(float *)(((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) + 0x24)));
                        *(float *)(((((((t64 << 1) + t64) << 2) << 1) + (a4 + 0x44)) + 0x8)) = (*(float *)(((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) + 0x28)));
                        u69 = *(float *)(((((((t16 << 1) + t16) << 2) << 2) + (0x634 + a4)) + 0x2C));
                        *(float *)(((((((t64 << 1) + t64) << 2) << 1) + (a4 + 0x44)) + 0xC)) = u69;
                        u79 = 32767.0f;
                        u81 = 255.0f;
                        u82 = u69;
                    }
                    t84 = t71;
                    t87 = t74;
                    t89 = t76;
                    u92 = u79;
                    u94 = u81;
                    u95 = u82;
                }
                t97 = t84;
                t101 = t87;
                t103 = t89;
                u106 = u92;
                u108 = u94;
                u109 = u95;
            }
            t111 = t97;
            t115 = t101;
            t117 = t103;
            u120 = u106;
            u122 = u108;
            u123 = u109;
        }
        t124 = 0xC098098;
        t125 = t111;
        t126 = t115;
        t127 = t117;
        t128 = 0x0;
        t129 = (0x634 + a4);
        u130 = u122;
        u131 = u123;
        u132 = u120;
        for (;;) {
            if ((*(int *)((t129 + 0x0))) != 0) {
                t124 = 0x4;
                u130 = 0.0f;
                u131 = (*(float *)((t129 + t124)));
                if (u131 != u130) {
                    t124 = 0x24;
                    u131 = (*(float *)((t129 + t124)));
                    t124 = 0x18;
                    u137 = *(float *)((t129 + t124));
                    t124 = 0x28;
                    t127 = ((int)stk + 8);
                    u139 = (u137 - u131);
                    u131 = (*(float *)((t129 + t124)));
                    t124 = 0x1C;
                    u140 = *(float *)((t129 + t124));
                    t124 = 0x2C;
                    u142 = (u140 - u131);
                    u131 = (*(float *)((t129 + t124)));
                    t124 = 0x20;
                    u143 = *(float *)((t129 + t124));
                    t124 = 0x10;
                    u144 = (u143 - u131);
                    u131 = u142;
                    u131 = (u131 * u142);
                    u145 = u131;
                    u145 = u145 + u139 * u139;
                    u131 = u145;
                    u146 = u131;
                    u146 = u146 + u144 * u144;
                    u131 = u146;
                    u131 = _builtin_sqrtf(u131);
                    *(float *)((((int)stk + 8) + t124)) = u131;
                    t127 = (t127 + 0x8);
                    t124 = (FUN_0c0a7714(t127, (((int)stk + 8) + 0xC), u139, u142, u144));
                    t126 = 0xC0DC510;
                    t127 = 0x0;
                    t124 = (nlPushMatrix(t127));
                    t124 = 0x20;
                    u149 = *(float *)((t129 + t124));
                    t124 = 0x1C;
                    u150 = *(float *)((t129 + t124));
                    t124 = 0x18;
                    t124 = (FUN_0c0dcc70((*(float *)((t129 + t124))), u150, u149));
                    t127 = (*(int *)(((int)stk + 20)));
                    t124 = (nlRotateAY(t127));
                    t127 = (*(int *)(((int)stk + 16)));
                    t124 = (nlRotateAX(t127));
                    t126 = 0xC0DC950;
                    t127 = (*(int *)((t129 + 0x14)));
                    t124 = (nlRotateAZ(t127));
                    t124 = 0x10;
                    u132 = (*(float *)((((int)stk + 8) + t124)));
                    u132 = (u132 * 0.166666657f);
                    t124 = (nlScale(4.0f, 4.0f, u132));
                    u161 = 4.0f;
                    if (u132 > 4.0f) {
                        u161 = u132;
                    }
                    t126 = 0xC0DE000;
                    t124 = (FUN_0c0de000(u161));
                    t127 = 0x3FFF;
                    t124 = (nlRotateAY(t127));
                    t126 = 0xC200AEC;
                    u131 = (float)(*(int *)((t129 + 0x0)));
                    t125 = 0xC200AE8;
                    u132 = u131;
                    u132 = (u132 / 20.0f);
                    t124 = (FUN_0c0848bc(((*(float *)((t125 + 0x0))) * u132), ((*(float *)((t126 + 0x0))) * u132), ((*(float *)0xC200AF0) * u132)));
                    t126 = 0xC0C465C;
                    t127 = 0x2B0;
                    t124 = (FUN_0c0c465c(t127));
                    t127 = 0x1;
                    t124 = (nlPopMatrix(t127));
                } else {
                    t173 = t125;
                    t176 = t127;
                    u177 = u130;
                    u178 = u131;
                }
                u130 = u177;
                u131 = u178;
                t125 = t173;
                t126 = (*(int *)((t129 + 0x0)));
                t127 = t176;
                t126 = (t126 - 1);
                *(unsigned int *)((t129 + 0x0)) = t126;
                *(unsigned int *)(((int)stk + 28)) = t128;
            }
            t128 = (t128 + 0x1);
            t129 = (t129 + 0x30);
            if ((int)t128 >= (int)0x5) {
                break;
            }
        }
    }
    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
        t200 = *(int *)(((int)stk + 28));
        t201 = *(int *)((t0 + 0xBC));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((((t201 << 1) + t201) << 2) << 2) << 2) + 0xC23F268) + 0x84)) = *(struct mv3 *)(((((((t200 << 1) + t200) << 2) << 2) + (0x634 + a4)) + 0x24)); }
    } else {
        t202 = *(int *)((t0 + 0xBC));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((((t202 << 1) + t202) << 2) << 2) << 2) + 0xC23F268) + 0x84)) = *(struct mv3 *)((t0 + 0x30)); }
    }
    FUN_0c096094((0xBC + a4), 0x32);
    u207 = *(float *)0xC0981F8;
    FUN_0c084800(u207, u207, 1.0f);
    FUN_0c095fa0((a4 + 0x44), 0x5);
    t210 = FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
    t211 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x3C)) = (t211 - 1);
    t220 = t210;
    if ((int)(t211 - 1) < 0) {
        *(unsigned int *)((a4 + 0x3C)) = (*(int *)((a4 + 0x40)));
        t213 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t213 + 0x1);
        t215 = 0x40;
        if ((int)(t213 + 0x1) > (int)0x23) {
            t215 = (FUN_0c0e19f2());
        }
        t220 = t215;
    }
    return t220;
}

int FUN_0c066370(int a4, int a5, int a6, int a7)
{
    int stk[61];
    register int t11;
    register int t12;
    register float u14;
    register int t15;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register float u24;
    register int t32;
    register int t33;
    register float u39;
    register int t43;
    register int t61;
    register int t62;
    register int t63;
    register int t88;
    register int t90;
    register int t91;
    register int t92;
    register float u95;
    register float t116;
    register int t158;
    register int t16;
    register float u23;
    register int t53;
    register int t89;
    register float u93;
    register float u94;

    *(unsigned int *)(((int)stk + 16)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    FUN_0c0dc5a0();
    FUN_0c0dcca0((0xE4 + a4));
    nlMultiMatrix((0xA4 + a4));
    FUN_0c0dcca0((a4 + 0x54));
    nlRotate((0xF4 + a4), ((int)((((*(float *)((a4 + 0x100))) * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
    FUN_0c0dcc80((a4 + 0x54));
    FUN_0c0db470((a4 + 0x54), (0xB4 + ((int)stk + 4)));
    t11 = 0x0;
    for (;;) {
        t12 = *(int *)((a4 + 0x34));
        if ((int)t11 >= (int)t12) {
            break;
        }
        FUN_0c0db470((((t11 << 2) << 2) + (a4 + 0x60)), ((((t11 << 1) + t11) << 2) + (0x84 + ((int)stk + 4))));
        t11 = (t11 + 0x1);
    }
    *(float *)((a4 + 0x140)) = 0.0f;
    u14 = *(float *)((a4 + 0x38));
    *(float *)((a4 + 0x144)) = (-(u14 * 0.0199999996f));
    *(float *)((a4 + 0x148)) = 0.0f;
    t15 = 0x148;
    t17 = t12;
    t18 = 0x0;
    t19 = a5;
    t20 = a6;
    t21 = a7;
    t22 = 0x0;
    u24 = (-(u14 * 0.0199999996f));
    for (;;) {
        if ((int)t18 >= (int)(*(int *)((a4 + 0x34)))) {
            break;
        }
        t20 = t18;
        t20 = (t20 << 2);
        t21 = t18;
        t19 = 0x14C;
        t20 = (t20 << 2);
        t20 = (t20 + (a4 + 0x60));
        t21 = (t21 << 1);
        t21 = (t21 + t18);
        t19 = (t19 + a4);
        t21 = (t21 << 2);
        t15 = 0x8;
        t19 = (t19 + t21);
        *(float *)((t19 + t15)) = 0.0f;
        t15 = 0x4;
        *(float *)((t19 + t15)) = 0.0f;
        t15 = 0xC;
        t21 = (t21 + (0x84 + ((int)stk + 4)));
        *(float *)((t19 + 0x0)) = 0.0f;
        u24 = (*(float *)((t20 + t15)));
        t15 = 0x4;
        u23 = (*(float *)((t21 + t15)));
        if (!(u23 > u24)) {
            t17 = t18;
            t16 = t18;
            t17 = (t17 << 1);
            t19 = t22;
            t17 = (t17 + t16);
            t16 = 0xC;
            t16 = (t16 + t20);
            t17 = (t17 << 2);
            t17 = (t17 + (0x84 + ((int)stk + 4)));
            t19 = (t19 << 2);
            *(unsigned int *)((((((int)stk + 4) + 0x38) + t19) + 0x0)) = t18;
            u24 = (*(float *)((t16 + 0x0)));
            t16 = 0x4;
            t16 = (t16 + t17);
            u23 = (*(float *)((t16 + 0x0)));
            t19 = (t19 + (((int)stk + 4) + 0x28));
            u23 = (u23 - u24);
            t22 = (t22 + 0x1);
            *(float *)((t19 + 0x0)) = u23;
        }
        t18 = (t18 + 0x1);
    }
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    if ((int)t22 > 0) {
        t32 = 0x0;
        for (;;) {
            t33 = *(int *)((((((int)stk + 4) + 0x38) + t32) + 0x0));
            *(unsigned int *)(((int)stk + 4)) = ((0x14C + a4) + (((t33 << 1) + t33) << 2));
            *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 4) + 0x54) + (((t33 << 1) + t33) << 2));
            nlSubVector3op(((((int)stk + 4) + 0x54) + (((t33 << 1) + t33) << 2)), ((((t33 << 1) + t33) << 2) + (0x84 + ((int)stk + 4))), ((0x110 + a4) + (((t33 << 1) + t33) << 2)));
            u39 = ((*(float *)(((0x38 + a4) + 0x0))) * 0.0199999996f);
            u39 = u39 + (*(float *)((((((int)stk + 4) + 0x28) + t32) + 0x0))) * ((-(*(float *)(((0x4C + a4) + 0x0)))) + (-1.0f));
            *(float *)(((0x4 + (*(int *)(((int)stk + 4)))) + 0x0)) = (u39 / (float)t22);
            *(float *)(((*(int *)(((int)stk + 4))) + 0x8)) = ((-(*(float *)(((*(int *)(((int)stk + 12))) + 0x8)))) / (float)t22);
            t43 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 8)) = (t43 + 0x1);
            t32 = (t32 + 0x4);
            if ((int)(t43 + 0x1) >= (int)t22) {
                break;
            }
        }
        t53 = (((t33 << 1) + t33) << 2);
    }
    FUN_0c0dce80((((int)stk + 4) + 0x48), (0x140 + a4), (1.0f / (*(float *)((a4 + 0x38)))));
    t61 = (nlAddVector((0xE4 + a4), (((int)stk + 4) + 0x48)));
    t62 = t53;
    t63 = 0x0;
    for (;;) {
        if ((int)t63 >= (int)(*(int *)((a4 + 0x34)))) {
            break;
        }
        t62 = t63;
        *(unsigned int *)(((int)stk + 4)) = (((t63 << 2) << 2) + (a4 + 0x60));
        t62 = (t62 << 1);
        t62 = (t62 + t63);
        t62 = (t62 << 2);
        t62 = (t62 + (0x14C + a4));
        t61 = (nlSubVector3op((((int)stk + 4) + 0x10), (*(int *)(((int)stk + 4))), (a4 + 0x54)));
        t61 = 0x38;
        t61 = (FUN_0c0dce80((((int)stk + 4) + 0x48), t62, (1.0f / (*(float *)((a4 + t61))))));
        t61 = (nlAddVector((0xE4 + a4), (((int)stk + 4) + 0x48)));
        t61 = (nlPushMatrix(0x0));
        t61 = (nlInvertMatrix(0x0));
        t61 = (FUN_0c0db4d0(t62, (((int)stk + 4) + 0x48)));
        t61 = (nlOuterProduct((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x48), (((int)stk + 4) + 0x1C)));
        t61 = (FUN_0c0dce80((((int)stk + 4) + 0x48), (((int)stk + 4) + 0x1C), (1.0f / (*(float *)((((t63 << 2) + (a4 + 0x3C)) + 0x0))))));
        t61 = (nlAddVector((0xF4 + a4), (((int)stk + 4) + 0x48)));
        t61 = (nlPopMatrix(0x1));
        t63 = (t63 + 0x1);
    }
    *(float *)((a4 + 0x100)) = (FUN_0c0dcea0((0xF4 + a4)));
    nlPopMatrix(0x1);
    FUN_0c0dc5a0();
    FUN_0c0dcca0((0xE4 + a4));
    nlMultiMatrix((0xA4 + a4));
    FUN_0c0dcca0((a4 + 0x54));
    nlRotate((0xF4 + a4), ((int)((((*(float *)((a4 + 0x100))) * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
    FUN_0c0dcc80((a4 + 0x54));
    t88 = (nlGetMatrix((0xA4 + a4)));
    t90 = 0xC0DCE80;
    t91 = 0xC0DCD10;
    t92 = 0x0;
    u95 = 0.0f;
    for (;;) {
        if ((int)t92 >= (int)(*(int *)((a4 + 0x34)))) {
            break;
        }
        t90 = t92;
        t90 = (t90 << 1);
        t91 = t92;
        t90 = (t90 + t92);
        t91 = (t91 << 2);
        t90 = (t90 << 2);
        t91 = (t91 << 2);
        t88 = (FUN_0c0db470(((a4 + 0x60) + t91), ((0x110 + a4) + t90)));
        t89 = a4;
        t89 = (t89 + 0x60);
        t88 = 0xC;
        t89 = (t89 + t91);
        u94 = (*(float *)((t89 + t88)));
        t88 = 0x4;
        u93 = (*(float *)((((0x110 + a4) + t90) + t88)));
        u93 = (u93 - u94);
        t92 = (t92 + 0x1);
        if (u95 > u93) {
            t89 = 0x110;
            t88 = 0xC;
            u94 = (*(float *)((((a4 + 0x60) + t91) + t88)));
            t89 = (t89 + a4);
            t88 = 0x4;
            t89 = (t89 + t90);
            u95 = (*(float *)((t89 + t88)));
            u95 = (u95 - u94);
        }
    }
    if (0.0f > u95) {
        nlUnitMatrix();
        FUN_0c0dcc70(0.0f, (-u95), 0.0f);
        nlMultiMatrix((0xA4 + a4));
        nlGetMatrix((0xA4 + a4));
        *(float *)((a4 + 0xE8)) = ((*(float *)((a4 + 0xE8))) + u95);
    }
    FUN_0c0db470((a4 + 0x54), (0xB4 + ((int)stk + 4)));
    t116 = nlLength((0x104 + a4), (0xB4 + ((int)stk + 4)));
    if (0.00999999978f > t116) {
        if (1.00999999f > (*(float *)(((int)stk + 188)))) {
            if ((*(short *)((a4 + 0x30))) == 0) {
                *(unsigned int *)((a4 + 0x180)) = 0x3C;
            }
            *(unsigned short *)((a4 + 0x30)) = 0x1;
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x104 + a4)) = *(struct mv3 *)((0xB4 + ((int)stk + 4))); }
    if (((*(int *)((a4 + 0x180))) & 1) == 0) {
        nlMultiMatrixRevOrder(((*(int *)(((int)stk + 16))) + 0x2AC));
        FUN_0c0c465c((*(short *)((a4 + 0x32))));
    }
    nlPopMatrix(0x1);
    *(unsigned int *)((a4 + 0x180)) = ((*(int *)((a4 + 0x180))) - 1);
    if ((int)(*(int *)((a4 + 0x180))) > (int)0x3C) {
        *(unsigned int *)((a4 + 0x180)) = ((*(int *)((a4 + 0x180))) - 1);
    }
    t158 = 0x180;
    if ((int)(*(int *)((a4 + 0x180))) < 0) {
        t158 = (FUN_0c0e19f2());
    }
    return t158;
}

int FUN_0c070c96(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    int stk[18];
    register int t1;
    register int t24;
    register int t31;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u21;
    register int t38;
    register int t204;
    register int t213;
    register int t42;
    register int t43;
    register int t79;
    register int t45;
    register int t46;
    register int t81;
    register int t101;
    register int t102;
    register int t107;
    register int t133;
    register int t134;
    register int t139;
    register int t154;
    register int t161;
    register int t2;
    register float u9;
    register int t188;
    register int t197;
    register int t92;
    register int t129;
    register int t173;
    register int t165;

    FUN_0c0685a4(a4, a5, a6, a7);
    t1 = *(int *)((a4 + 0x3B0));
    *(unsigned int *)((a4 + 0x3B0)) = (t1 - 1);
    t24 = 0x0;
    t31 = 0xFFFFFFFF;
    if (((int)(t1 - 1) <= 0) && (t2 = *(int *)0xC23ED5C, (t2 & 0x200) == 0)) {
        t3 = 0xC070D30;
        t4 = t2;
        t5 = 0x0;
        t6 = a5;
        t7 = 0xFFFFFFFF;
        t8 = 0x0;
        u10 = f4;
        u11 = 99.8999939f;
        u12 = f7;
        u13 = f8;
        for (;;) {
            if ((int)t5 >= (int)0x2) {
                break;
            }
            t6 = t5;
            t6 = (t6 << 2);
            t3 = 0xC246FF0;
            t3 = (t3 + 0x40);
            t3 = (*(int *)((t6 + t3)));
            if (t3 == 4) {
                t4 = 0xC246FF0;
                t6 = (t6 + t4);
                t6 = (*(int *)((t6 + 0x0)));
                t3 = 0x30;
                u12 = (*(float *)((a4 + t3)));
                u9 = (*(float *)((t6 + t3)));
                t3 = 0x38;
                u13 = (*(float *)((a4 + t3)));
                u12 = (u12 - u9);
                u13 = (u13 - (*(float *)((t6 + t3))));
                u9 = u13;
                u9 = (u9 * u13);
                u21 = u9;
                u21 = u21 + u12 * u12;
                u9 = u21;
                u9 = _builtin_sqrtf(u9);
                u10 = u9;
                if ((90.0f > u10) && (u11 > u10)) {
                    t8 = t6;
                    t7 = t5;
                    u11 = u10;
                }
            }
            t5 = (t5 + 0x1);
        }
        t24 = t8;
        t31 = t7;
    }
    t38 = FUN_0c0853d4((a4 + 0x30), 5.0f);
    if (t38 == 0) {
        *(unsigned int *)((a4 + 0x288)) = 0x0;
        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
    }
    t204 = 0x0;
    t213 = 0x0;
    if (t31 == -1) {
    } else {
        t42 = *(int *)((a4 + 0x288));
        if (t42 != 0) {
            if (t42 == 1) {
                t43 = *(int *)((a4 + 0x3AC));
                *(unsigned int *)((a4 + 0x3AC)) = (t43 + 0x1);
                t79 = 0x1;
                if ((int)(t43 + 0x1) > (int)0x5A) {
                    t45 = *(int *)0xC23ED9C;
                    if ((t45 != 4) && (t45 != 7)) {
                    } else {
                        t46 = FUN_0c0e1830(0xC05DB80, 0x2BC);
                        FUN_0c0e19d0(t46);
                        *(unsigned int *)((t46 + 0xBC)) = (*(int *)((a4 + 0xBC)));
                        *(unsigned int *)((t46 + 0x200)) = 0x11;
                        *(unsigned int *)((t46 + 0x1EC)) = 0x0;
                        *(unsigned int *)((t46 + 0x1E8)) = 0x0;
                        *(unsigned int *)((t46 + 0x1F4)) = 0xA;
                        *(unsigned int *)((t46 + 0x204)) = 0x0;
                        *(float *)((t46 + 0x1E4)) = 1.0f;
                        *(unsigned int *)((t46 + 0x1F8)) = 0x11;
                        *(unsigned int *)((t46 + 0x22C)) = 0xA;
                        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
                        *(unsigned int *)((a4 + 0x3B0)) = (*(int *)((t46 + 0x22C)));
                        *(unsigned int *)((a4 + 0x288)) = ((*(int *)((a4 + 0x288))) + 0x1);
                        FUN_0c0cc3f8(0x429A9, 0x11, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        nlPushMatrix(0x0);
                        nlUnitMatrix();
                        FUN_0c0dcca0((a4 + 0x30));
                        nlRotateAY((*(short *)((a4 + 0x6E))));
                        nlRotateAX((*(short *)((a4 + 0x6C))));
                        FUN_0c0dcc70(0.0f, 0.0f, -4.67999983f);
                        FUN_0c0db840((((int)stk + 4) + 0x8));
                        *(float *)(((t46 + 0x30) + 0x0)) = (*(float *)(((int)stk + 12)));
                        *(float *)(((t46 + 0x34) + 0x0)) = (*(float *)(((int)stk + 16)));
                        *(float *)(((t46 + 0x38) + 0x0)) = (*(float *)(((int)stk + 20)));
                        nlPopMatrix(0x1);
                        *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = (*(short *)((a4 + 0x6C)));
                        *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4)) = (*(short *)((a4 + 0x6E)));
                        *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x8)) = 0x0;
                        *(unsigned short *)((t46 + 0x6C)) = (-(*(short *)((a4 + 0x6C))));
                        *(unsigned short *)((t46 + 0x6E)) = ((*(short *)((a4 + 0x6E))) - 32768);
                        *(unsigned int *)((t46 + 0x220)) = 0x9A;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t46 + 0x3C)) = *(struct mv3 *)((t46 + 0x30)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x25C + t46)) = *(struct mv3 *)((t46 + 0x30)); }
                        *(unsigned int *)((t46 + 0x248)) = 0x1;
                        FUN_0c0a6780((((int)stk + 4) + 0x14), (t46 + 0x48), 0.0f, 0.0f, -20.0f);
                    }
                    t79 = 0x0;
                }
                t92 = t79;
            } else {
                if (t42 == 2) {
                    t81 = *(int *)((a4 + 0x3AC));
                    *(unsigned int *)((a4 + 0x3AC)) = (t81 + 0x1);
                    if ((int)(t81 + 0x1) > (int)0x5A) {
                        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
                        *(unsigned int *)((a4 + 0x288)) = 0x0;
                    }
                }
                t92 = 0x0;
            }
            t188 = 0x0;
            t197 = t92;
        } else {
            FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((a4 + 0x30))) - (*(float *)((t24 + 0x30)))), (((*(float *)((a4 + 0x34))) - (*(float *)((t24 + 0x34)))) + -12.0f), ((*(float *)((a4 + 0x38))) - (*(float *)((t24 + 0x38)))));
            t101 = *(int *)(((int)stk + 4));
            t102 = *(short *)((a4 + 0x6C));
            if (!(_builtin_fabsf((float)(short)(t102 - t101)) > 128.0f)) {
                *(unsigned short *)((a4 + 0x6C)) = (*(int *)(((int)stk + 4)));
                t107 = 0x0;
                if (((*(int *)((t24 + 0x20C))) & 0x1DD) != 0) {
                    *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) + 0x1);
                    t107 = 0x1;
                }
                t129 = t107;
            } else {
                if ((int)(short)(t102 - t101) > (int)0x400) {
                    *(unsigned int *)((a4 + 0x3AC)) = 0xFFFFFF38;
                }
                if ((int)(short)(t102 - t101) > 0) {
                    if ((int)(*(short *)((a4 + 0x6C))) > (int)0xFFFFE000) {
                        *(unsigned short *)((a4 + 0x6C)) = ((*(short *)((a4 + 0x6C))) - 64);
                    }
                } else {
                    if ((int)(*(short *)((a4 + 0x6C))) < (int)0x1000) {
                        *(unsigned short *)((a4 + 0x6C)) = ((*(short *)((a4 + 0x6C))) + 0x40);
                    }
                }
                t129 = 0x0;
            }
            t133 = *(int *)(((int)stk + 8));
            t134 = *(short *)((a4 + 0x6E));
            if (!(_builtin_fabsf((float)(short)(t134 - t133)) > 128.0f)) {
                *(unsigned short *)((a4 + 0x6E)) = (*(int *)(((int)stk + 8)));
                t139 = t129;
                if ((0x1DD & (*(int *)((t24 + 0x20C)))) != 0) {
                    *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) + 0x1);
                    t139 = 0x1;
                }
                t173 = t139;
            } else {
                if ((int)(short)(t134 - t133) > (int)0x400) {
                    *(unsigned int *)((a4 + 0x3AC)) = 0xFFFFFF38;
                }
                if ((int)(short)(t134 - t133) > 0) {
                    t154 = 0x0;
                    if ((int)(short)((*(short *)((a4 + 0x6E))) - (*(int *)((a4 + 0x29C)))) > (int)0xFFFFF400) {
                        *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) - 0x80);
                        t154 = t129;
                    }
                    t165 = t154;
                } else {
                    t161 = 0x0;
                    if ((int)(short)((*(short *)((a4 + 0x6E))) - (*(int *)((a4 + 0x29C)))) < (int)0xC00) {
                        *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x80);
                        t161 = t129;
                    }
                    t165 = t161;
                }
                t173 = t165;
            }
            if ((int)(*(int *)((a4 + 0x3AC))) <= (int)0x50) {
            } else {
                *(unsigned int *)((a4 + 0x3AC)) = 0x0;
                *(unsigned int *)((a4 + 0x288)) = ((*(int *)((a4 + 0x288))) + 0x1);
            }
            t188 = t173;
            t197 = 0x0;
            _builtin_fabsf((float)(short)(t134 - t133));
        }
        t204 = t188;
        t213 = t197;
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(int *)((a4 + 0x29C))));
    FUN_0c0c465c((unsigned short)(*(short *)0xC0FC368));
    nlRotateAY(((*(short *)((a4 + 0x6E))) - (*(int *)((a4 + 0x29C)))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    FUN_0c0c465c((unsigned short)(*(short *)0xC0FC36A));
    if (t213 != 0) {
        FUN_0c0c4784((unsigned short)(*(short *)0xC0FC36C), 0.799999952f);
    } else {
        if (t204 != 0) {
            FUN_0c0c4784((unsigned short)(*(short *)0xC0FC36E), 0.799999952f);
        }
    }
    return (nlPopMatrix(0x1));
}
