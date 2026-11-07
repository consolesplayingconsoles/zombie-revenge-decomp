/* Straight-line functions with calls and guards (batch gen_he): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c01f8a0(int, int, int);
int FUN_0c05a98a(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c090bf0(int);
int FUN_0c09bfee(int);
int FUN_0c09dd7a(void);
int FUN_0c0a6bf8(int, int, int, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c4654(void);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0cacde(int, float, float);
int FUN_0c0cae8e(int);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db800(int, int, int, int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcbb0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dccf0(void);
int FUN_0c0dce80(int, int, float);
int FUN_0c0dd050(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int FUN_0c0e5fe4(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlGetMatrix(int);
float nlLength(int, int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c09e290(int a4, int a5, int a6, int a7);
int FUN_0c09c974(int a4, int a5, int a6, int a7);
int FUN_0c064876(int a4, int a5, int a6, int a7);
int FUN_0c08085c(int a4);




int FUN_0c08085c(int a4)
{
    int stk[33];
    register int t2;
    register float t76;
    register float u86;
    register float u87;
    register float u88;
    register float u89;
    register float t126;
    register float t138;
    register int t150;
    register float u84;
    register float u130;

    nlPushMatrix(0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x38)) = *(struct mv3 *)((0x284 + a4)); }
    nlSubVector3op((((int)stk + 4) + 0x50), (0x260 + a4), (0x284 + a4));
    t2 = *(int *)0xC247CA4;
    nlScaleUnitVector((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x50), ((*(float *)((t2 + 0x18))) + (*(float *)((t2 + 0x24)))));
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x200) != 0) {
        nlUnitMatrix();
        nlSubVector3op((a4 + 0x6C), (0x284 + a4), (((int)stk + 4) + 0x50));
        nlAddVector3op((a4 + 0x60), (0x284 + a4), (((int)stk + 4) + 0x50));
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if ((*(int *)((a4 + 0xD8))) != 0) {
            FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x284 + a4), (*(float *)(((*(int *)0xC247CA4) + 0x18))));
        }
    }
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x400) != 0) {
        nlUnitMatrix();
        nlRotateAY(0xFFFFC001);
        FUN_0c0db470((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x44));
        nlSubVector3op((a4 + 0x6C), (0x284 + a4), (((int)stk + 4) + 0x44));
        nlAddVector3op((a4 + 0x60), (0x284 + a4), (((int)stk + 4) + 0x44));
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if ((*(int *)((a4 + 0xD8))) != 0) {
            FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x284 + a4), (*(float *)(((*(int *)0xC247CA4) + 0x18))));
        }
    }
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x800) != 0) {
        nlUnitMatrix();
        nlRotateAY(0x3FFF);
        FUN_0c0db470((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x44));
        nlSubVector3op((a4 + 0x6C), (0x284 + a4), (((int)stk + 4) + 0x44));
        nlAddVector3op((a4 + 0x60), (0x284 + a4), (((int)stk + 4) + 0x44));
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if ((*(int *)((a4 + 0xD8))) != 0) {
            FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x284 + a4), (*(float *)(((*(int *)0xC247CA4) + 0x18))));
        }
    }
    nlSubVector3op((((int)stk + 4) + 0x44), (0x284 + a4), (((int)stk + 4) + 0x38));
    nlAddVector((0x260 + a4), (((int)stk + 4) + 0x44));
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x1000) == 0) {
    } else {
        *(unsigned int *)((a4 + 0x250)) = ((*(int *)((a4 + 0x250))) & 0xFFFFFFFD);
        if ((*(int *)((a4 + 0x3F8))) != 0) {
            *(unsigned int *)((a4 + 0x3F8)) = ((*(int *)((a4 + 0x3F8))) - 1);
        } else {
            *(unsigned int *)((a4 + 0x250)) = ((*(int *)((a4 + 0x250))) & 0xFFFFFFFB);
        }
        nlSubVector3op((a4 + 0x6C), (0x284 + a4), (((int)stk + 4) + 0x50));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((0x260 + a4)); }
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if ((*(int *)((a4 + 0xD8))) == 0) {
        } else {
            t76 = nlLength((0xBC + a4), (0x278 + a4));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x2C)) = *(struct mv3 *)((0xC8 + a4)); }
            if ((*(short *)(((*(int *)0xC23ECFC) + 0x0))) == 3) {
                u84 = (*(float *)(((*(int *)0xC247CA4) + 0x20)));
            } else {
                u84 = (*(float *)((a4 + 0x29C)));
            }
            if (!(t76 > u84)) {
                u86 = *(float *)((a4 + 0x278));
                u87 = *(float *)((a4 + 0xBC));
                u88 = *(float *)((a4 + 0x280));
                u89 = *(float *)((a4 + 0xC4));
                *(unsigned int *)((a4 + 0x250)) = ((*(int *)((a4 + 0x250))) | 0x2);
                *(float *)((a4 + 0x29C)) = u84;
                *(float *)((a4 + 0x260)) = (*(float *)((a4 + 0xBC)));
                *(float *)((a4 + 0x264)) = ((*(float *)((a4 + 0x27C))) + _builtin_sqrtf((((u84 * u84) - ((u87 - u86) * (u87 - u86))) - ((u89 - u88) * (u89 - u88)))));
                *(float *)((a4 + 0x268)) = (*(float *)((a4 + 0xC4)));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x6C)) = *(struct mv3 *)((0x284 + a4)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((0x260 + a4)); }
                FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
                if ((*(int *)((a4 + 0xD8))) != 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x260 + a4)) = *(struct mv3 *)((0xBC + a4)); }
                }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x260 + a4)) = *(struct mv3 *)((0xBC + a4)); }
            }
            if (!((*(float *)(((int)stk + 52))) > -0.099999994f)) {
            } else {
                if (((*(int *)((a4 + 0x250))) & 4) != 0) {
                } else {
                    *(unsigned int *)((a4 + 0x250)) = ((*(int *)((a4 + 0x250))) | 0x4);
                    if ((*(int *)((a4 + 0x3F8))) != 0) {
                    } else {
                        *(unsigned int *)(((int)stk + 8)) = 0x0;
                        nlSubVector3op((((int)stk + 4) + 0x14), (0x254 + a4), (0x278 + a4));
                        FUN_0c0dd050((((int)stk + 4) + 0x14));
                        if ((*(int *)0xC247CFC) != 4) {
                        } else {
                            *(float *)0xC2009A8 = (*(float *)((a4 + 0x29C)));
                            FUN_0c0dce80((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14), ((*(float *)((a4 + 0x29C))) * 0.5f));
                            nlAddVector3op((a4 + 0x6C), (0x278 + a4), (((int)stk + 4) + 0x8));
                            nlUnitMatrix();
                            FUN_0c0dcca0((a4 + 0x6C));
                            nlPushMatrix(0x0);
                            nlRotateAY(((*(short *)((a4 + 0x3CE))) + 0x3FFF));
                            FUN_0c0db470(0xC2009A0, (a4 + 0x60));
                            FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
                            if ((*(int *)((a4 + 0xD8))) != 0) {
                                t126 = nlLength((a4 + 0x6C), (0xBC + a4));
                                *(unsigned int *)(((int)stk + 8)) = 0x1;
                                u130 = t126;
                            }
                            FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
                            nlRotateAY(((*(short *)((a4 + 0x3CE))) + 0xBFFF));
                            FUN_0c0db470(0xC2009A0, (a4 + 0x60));
                            FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
                            if ((*(int *)((a4 + 0xD8))) != 0) {
                                t138 = nlLength((a4 + 0x6C), (0xBC + a4));
                                if (t138 > u130) {
                                    *(unsigned int *)(((int)stk + 8)) = 0x2;
                                }
                            }
                            nlPopMatrix(0x1);
                        }
                        *(unsigned int *)(((int)stk + 4)) = 0x38E3;
                        t150 = *(int *)(((int)stk + 8));
                        if (t150 != 1) {
                            if (t150 != 2) {
                                nlOuterProduct((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20));
                                if (0.0f > (*(float *)(((int)stk + 40)))) {
                                    *(unsigned int *)((a4 + 0x3E8)) = 0xFFFFC71D;
                                } else {
                                    *(unsigned int *)((a4 + 0x3E8)) = (*(int *)(((int)stk + 4)));
                                }
                            } else {
                                *(unsigned int *)((a4 + 0x3E8)) = 0xFFFFC71D;
                            }
                        } else {
                            *(unsigned int *)((a4 + 0x3E8)) = (*(int *)(((int)stk + 4)));
                        }
                    }
                    *(unsigned int *)((a4 + 0x3E0)) = ((*(int *)((a4 + 0x3D8))) + (*(int *)((a4 + 0x3E8))));
                    *(unsigned int *)((a4 + 0x3F8)) = 0x78;
                }
            }
        }
    }
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x2000) != 0) {
        nlUnitMatrix();
        nlRotateAY(0xFFFFC001);
        FUN_0c0db470((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x44));
        nlSubVector3op((a4 + 0x6C), (0x260 + a4), (((int)stk + 4) + 0x44));
        nlAddVector3op((a4 + 0x60), (0x260 + a4), (((int)stk + 4) + 0x44));
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if ((*(int *)((a4 + 0xD8))) != 0) {
            FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x260 + a4), (*(float *)(((*(int *)0xC247CA4) + 0x1C))));
        }
    }
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x4000) != 0) {
        nlUnitMatrix();
        nlRotateAY(0x3FFF);
        FUN_0c0db470((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x44));
        nlSubVector3op((a4 + 0x6C), (0x260 + a4), (((int)stk + 4) + 0x44));
        nlAddVector3op((a4 + 0x60), (0x260 + a4), (((int)stk + 4) + 0x44));
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if ((*(int *)((a4 + 0xD8))) != 0) {
            FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x260 + a4), (*(float *)(((*(int *)0xC247CA4) + 0x1C))));
        }
    }
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x8000) != 0) {
        nlSubVector3op((a4 + 0x6C), (0x260 + a4), 0xC1027BC);
        nlAddVector3op((a4 + 0x60), (0x260 + a4), 0xC1027BC);
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if ((*(int *)((a4 + 0xD8))) != 0) {
            FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x260 + a4), (*(float *)(((*(int *)0xC247CA4) + 0x1C))));
        }
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c09c974(int a4, int a5, int a6, int a7)
{
    int stk[36];
    register int t4;
    register int t6;
    register float u7;
    register float u8;
    register float u21;
    register int t31;
    register int t48;
    register int t55;
    register int t60;
    register int t74;
    register int t81;
    register float u121;
    register float u122;
    register float u123;
    register float u124;
    register float u125;
    register float u126;
    register float u138;
    register int t140;
    register int t144;
    register int t153;
    register int t154;
    register int t158;
    register int t167;
    register int t188;
    register int t189;
    register float u208;
    register float u212;
    register float u213;
    register float u235;
    register float u239;
    register float u240;
    register float u259;
    register float u263;
    register float u264;
    register float u265;
    register float u266;
    register float u267;
    register int t272;
    register int t282;
    register int t291;
    register int t286;
    register int t288;

    *(unsigned int *)(((int)stk + 12)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    *(unsigned int *)(((int)stk + 80)) = 0x1;
    FUN_0c0685a4(a4, a5, a6, a7);
    nlPushMatrix(0x0);
    t4 = *(int *)((a4 + 0x30));
    if (t4 != 0) {
        if (t4 == 1) {
            nlPushMatrix(0x0);
            t6 = *(int *)((a4 + 0x68));
            *(float *)(((int)stk + 76)) = (1.0f - ((float)t6 * 0.0666666627f));
            u7 = 1.0f;
            u7 = u7 + 70.0f * ((float)t6 * 0.0666666627f);
            *(float *)(((int)stk + 52)) = u7;
            u8 = *(float *)((a4 + 0x6C));
            *(float *)((a4 + 0x6C)) = (u8 + 0.0f);
            if ((u8 + 0.0f) > 1.0f) {
                *(float *)((a4 + 0x6C)) = ((*(float *)((a4 + 0x6C))) - 1.0f);
            }
            FUN_0c0dcca0((a4 + 0x34));
            nlRotateAY(((*(short *)(((*(int *)(((int)stk + 12))) + 0x3CE))) + 0x8000));
            nlRotateAX(0xC000);
            nlScale(0.099999994f, 0.199999988f, (*(float *)(((int)stk + 52))));
            FUN_0c0de000(((*(float *)(((int)stk + 52))) * (1.0f + 1.0f)));
            u21 = *(float *)(((int)stk + 76));
            *(float *)(((int)stk + 48)) = (u21 * 1.0f);
            FUN_0c0848bc((u21 * 1.0f), (u21 * 1.0f), (u21 * 1.0f));
            FUN_0c0cae8e(0x3EF);
            FUN_0c0cacde(0x3EF, 0.0f, (*(float *)((a4 + 0x6C))));
            FUN_0c0c465c(0x3EF);
            FUN_0c0cacde(0x3EF, 0.0f, (-(*(float *)((a4 + 0x6C)))));
            FUN_0c0cae8e(0x3EF);
            if ((int)(*(int *)((a4 + 0x68))) < (int)0x17) {
                *(unsigned int *)(((int)stk + 20)) = 0x2;
                for (;;) {
                    t31 = *(int *)((a4 + 0x70));
                    *(unsigned int *)((a4 + 0x70)) = (t31 + 0x1);
                    *(unsigned int *)(((int)stk + 4)) = (((((((t31 + 0x1) - 1) << 2) + ((t31 + 0x1) - 1)) << 2) << 1) + (a4 + 0x74));
                    if ((unsigned int)(*(int *)((a4 + 0x70))) >= (unsigned int)0x190) {
                        *(unsigned int *)((a4 + 0x70)) = 0x0;
                    }
                    nlPushMatrix(0x0);
                    *(unsigned int *)(((int)stk + 8)) = ((FUN_0c0da2e0()) << 1);
                    nlUnitMatrix();
                    nlRotateAY((*(int *)(((int)stk + 8))));
                    FUN_0c0dcca0(0xC10C4D4);
                    FUN_0c0db840((*(int *)(((int)stk + 4))));
                    nlAddVector((*(int *)(((int)stk + 4))), (a4 + 0x34));
                    nlUnitMatrix();
                    FUN_0c0dcbb0(0xC10C4E0);
                    nlRotateAY((*(int *)(((int)stk + 8))));
                    t48 = FUN_0c0da2e0();
                    nlRotateAZ((0x3FFF & (t48 << 1)));
                    FUN_0c0db470(0xC10C4C8, ((*(int *)(((int)stk + 4))) + 0xC));
                    nlPopMatrix(0x1);
                    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x24)) = 0x3F1;
                    *(float *)(((*(int *)(((int)stk + 4))) + 0x20)) = 7.44999981f;
                    t55 = *(int *)(((int)stk + 20));
                    *(unsigned int *)(((int)stk + 20)) = (t55 - 1);
                    if ((t55 - 1) == 0) {
                        break;
                    }
                }
            }
            t60 = *(int *)((a4 + 0x68));
            *(unsigned int *)((a4 + 0x68)) = (t60 + 0x1);
            if ((int)(t60 + 0x1) >= (int)0xF) {
                *(unsigned int *)((a4 + 0x30)) = 0x2;
            }
            nlPopMatrix(0x1);
        }
    } else {
        nlAddVector((a4 + 0x34), (a4 + 0x40));
        if (0.0f > (*(float *)((a4 + 0x38)))) {
            *(unsigned int *)((a4 + 0x30)) = 0x1;
            *(float *)((a4 + 0x38)) = 0.0f;
        } else {
            FUN_0c0dcca0((a4 + 0x34));
            FUN_0c0848bc(3.69999981f, 2.79999995f, 2.3499999f);
            nlPushMatrix(0x0);
            nlRotateAX((((*(int *)0xC23A258) << 2) << 2));
            t74 = *(int *)0xC23A258;
            nlRotateAY((((t74 << 2) + t74) << 2));
            nlScale(0.25f, 0.25f, 0.25f);
            FUN_0c0de000(0.25f);
            FUN_0c0c465c(0x1D8);
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            t81 = *(int *)0xC23A258;
            nlRotateAX((((t81 << 2) << 2) + t81));
            nlRotateAY(((*(int *)0xC23A258) * 0x15));
            nlScale(0.25f, 0.25f, 0.25f);
            FUN_0c0de000(0.25f);
            FUN_0c0c465c(0x1D8);
            nlPopMatrix(0x1);
            FUN_0c0848bc(1.0f, 0.879999995f, 0.149999991f);
            nlPushMatrix(0x0);
            FUN_0c0a7714((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x28), (*(float *)((a4 + 0x40))), (*(float *)((a4 + 0x44))), (*(float *)((a4 + 0x48))));
            nlRotateAY((*(int *)(((int)stk + 44))));
            nlRotateAX(((*(int *)(((int)stk + 40))) + 0x4000));
            FUN_0c0dcca0(0xC10C4A4);
            nlScale(10.0f, 10.0f, 10.0f);
            FUN_0c0de000(10.0f);
            FUN_0c0c465c(((0xF & ((unsigned int)(*(int *)0xC23A258) >> 1)) + 0x281));
            nlRotateAY(0x4000);
            FUN_0c0c465c(((0xF & ((unsigned int)(*(int *)0xC23A258) >> 1)) + 0x281));
            nlPopMatrix(0x1);
            FUN_0c0848bc(1.0f, 1.0f, 1.0f);
            nlPushMatrix(0x0);
            nlRotateAY((*(short *)(((*(int *)(((int)stk + 12))) + 0x3CE))));
            nlRotateAX((*(short *)(((*(int *)(((int)stk + 12))) + 0x3CC))));
            nlScale(5.0f, 5.0f, 1.0f);
            FUN_0c0de000(5.0f);
            FUN_0c0c465c(0x293);
            nlPopMatrix(0x1);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x50)) = *(struct mv3 *)((a4 + 0x4C)); }
            nlSubVector((((int)stk + 4) + 0x50), (a4 + 0x34));
            u121 = *(float *)(((int)stk + 84));
            u122 = *(float *)(((int)stk + 88));
            u123 = *(float *)(((int)stk + 92));
            u124 = (u122 * u122);
            u124 = u124 + u121 * u121;
            u125 = u124;
            u125 = u125 + u123 * u123;
            u126 = _builtin_sqrtf(u125);
            if (_builtin_sqrtf(u125) > 40.0f) {
                u126 = 40.0f;
            }
            FUN_0c0a7714((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x20), (*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 88))), (*(float *)(((int)stk + 92))));
            nlUnitMatrix();
            FUN_0c0dcca0((a4 + 0x4C));
            nlRotateAY((*(int *)(((int)stk + 36))));
            nlRotateAX((*(int *)(((int)stk + 32))));
            u138 = u126;
            for (;;) {
                FUN_0c0dcc70(0.0f, 0.0f, (-1.0f));
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                if (0x0 != 0) {
                    for (;;) {
                        t140 = *(int *)((a4 + 0x70));
                        *(unsigned int *)((a4 + 0x70)) = (t140 + 0x1);
                        *(unsigned int *)(((int)stk + 4)) = (((((((t140 + 0x1) - 1) << 2) + ((t140 + 0x1) - 1)) << 2) << 1) + (a4 + 0x74));
                        if ((unsigned int)(*(int *)((a4 + 0x70))) >= (unsigned int)0x190) {
                            *(unsigned int *)((a4 + 0x70)) = 0x0;
                        }
                        nlPushMatrix(0x0);
                        t144 = FUN_0c0da2e0();
                        nlRotateAZ((t144 << 1));
                        FUN_0c0dcca0(0xC10C4B0);
                        FUN_0c0db840((*(int *)(((int)stk + 4))));
                        nlPopMatrix(0x1);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 4))) + 0xC)) = *(struct mv3 *)(0xC249714); }
                        *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x24)) = 0x10;
                        *(float *)(((*(int *)(((int)stk + 4))) + 0x20)) = 4.04999971f;
                        t153 = *(int *)(((int)stk + 8));
                        *(unsigned int *)(((int)stk + 8)) = (t153 + 0x1);
                        if ((int)(t153 + 0x1) >= 0) {
                            break;
                        }
                    }
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    if (0x0 != 0) {
                        for (;;) {
                            t154 = *(int *)((a4 + 0x70));
                            *(unsigned int *)((a4 + 0x70)) = (t154 + 0x1);
                            *(unsigned int *)(((int)stk + 4)) = (((((((t154 + 0x1) - 1) << 2) + ((t154 + 0x1) - 1)) << 2) << 1) + (a4 + 0x74));
                            if ((unsigned int)(*(int *)((a4 + 0x70))) >= (unsigned int)0x190) {
                                *(unsigned int *)((a4 + 0x70)) = 0x0;
                            }
                            nlPushMatrix(0x0);
                            t158 = FUN_0c0da2e0();
                            nlRotateAZ((t158 << 1));
                            FUN_0c0dcca0(0xC10C4BC);
                            FUN_0c0db840((*(int *)(((int)stk + 4))));
                            nlPopMatrix(0x1);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 4))) + 0xC)) = *(struct mv3 *)(0xC249714); }
                            *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x24)) = 0xFFFFFFF6;
                            *(float *)(((*(int *)(((int)stk + 4))) + 0x20)) = 0.419999987f;
                            t167 = *(int *)(((int)stk + 8));
                            *(unsigned int *)(((int)stk + 8)) = (t167 + 0x1);
                            if ((int)(t167 + 0x1) >= 0) {
                                break;
                            }
                        }
                    }
                }
                u138 = (u138 - 1.0f);
                if (u138 > 0.0f) continue;
                break;
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)((a4 + 0x34)); }
        }
    }
    nlPopMatrix(0x1);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t188 = 0xC09D070;
    t189 = (a4 + 0x74);
    for (;;) {
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 4))) * 0x3237);
        if ((int)(*(int *)((t189 + 0x24))) <= 0) {
            if ((int)(*(int *)((t189 + 0x24))) < 0) {
                t188 = 0x20;
                *(float *)((t189 + t188)) = ((*(float *)((t189 + t188))) + 0.0699999928f);
                t188 = 0x4C;
                *(unsigned int *)((((int)stk + 4) + t188)) = 0x0;
                t188 = 0x40;
                *(float *)((((int)stk + 4) + t188)) = (-((float)(*(int *)((t189 + 0x24))) * 0.099999994f));
                t188 = (nlAddVector(t189, (t189 + 0xC)));
                t188 = 0x10;
                *(float *)((t189 + t188)) = ((*(float *)((t189 + t188))) + 0.0299999993f);
                t188 = (nlPushMatrix(0x0));
                t188 = (FUN_0c0dcca0(t189));
                t188 = 0x3CE;
                t188 = (nlRotateAY((*(short *)(((*(int *)(((int)stk + 12))) + t188)))));
                t188 = 0x3CC;
                t188 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 12))) + t188)))));
                t188 = (nlRotateAZ((*(int *)(((int)stk + 8)))));
                t188 = 0x20;
                u208 = *(float *)((t189 + t188));
                t188 = 0x3C;
                *(float *)((((int)stk + 4) + t188)) = u208;
                t188 = (nlScale(u208, u208, 1.0f));
                t188 = 0x20;
                t188 = (FUN_0c0de000((*(float *)((t189 + t188)))));
                t188 = 0xC09D264;
                u212 = *(float *)((t188 + 0x0));
                t188 = 0x40;
                u213 = *(float *)((((int)stk + 4) + t188));
                t188 = 0x14;
                *(float *)((((int)stk + 4) + t188)) = (u213 * u212);
                t188 = (FUN_0c0848bc((u213 * u212), (u213 * u212), (u213 * u212)));
                t188 = (FUN_0c0c465c(0x410));
                t188 = (nlPopMatrix(0x1));
                *(unsigned int *)((t189 + 0x24)) = ((*(int *)((t189 + 0x24))) + 0x1);
            }
        } else {
            if ((int)(*(int *)((t189 + 0x24))) <= (int)0x3E8) {
                t188 = 0x20;
                *(float *)((t189 + t188)) = ((*(float *)((t189 + t188))) + -0.148999989f);
                t188 = 0x4C;
                *(unsigned int *)((((int)stk + 4) + t188)) = 0x0;
                t188 = 0x44;
                *(float *)((((int)stk + 4) + t188)) = ((float)(*(int *)((t189 + 0x24))) * 0.0625f);
                t188 = (nlAddVector(t189, (t189 + 0xC)));
                t188 = 0x10;
                *(float *)((t189 + t188)) = ((*(float *)((t189 + t188))) + 0.0f);
                t188 = (nlPushMatrix(0x0));
                t188 = (FUN_0c0dcca0(t189));
                t188 = 0x3CE;
                t188 = (nlRotateAY((*(short *)(((*(int *)(((int)stk + 12))) + t188)))));
                t188 = 0x3CC;
                t188 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 12))) + t188)))));
                t188 = 0x20;
                u235 = *(float *)((t189 + t188));
                t188 = 0x34;
                *(float *)((((int)stk + 4) + t188)) = u235;
                t188 = (nlScale(u235, u235, 1.0f));
                t188 = 0x20;
                t188 = (FUN_0c0de000((*(float *)((t189 + t188)))));
                t188 = 0xC09D14C;
                u239 = *(float *)((t188 + 0x0));
                t188 = 0x44;
                u240 = *(float *)((((int)stk + 4) + t188));
                t188 = 0x18;
                *(float *)((((int)stk + 4) + t188)) = (u240 * u239);
                t188 = (FUN_0c0848bc((u240 * u239), (u240 * u239), (u240 * u239)));
                t188 = (FUN_0c0c465c(0x293));
                t188 = (nlPopMatrix(0x1));
                *(unsigned int *)((t189 + 0x24)) = ((*(int *)((t189 + 0x24))) - 1);
            } else {
                t188 = 0x20;
                *(float *)((t189 + t188)) = ((*(float *)((t189 + t188))) + -0.0f);
                t188 = 0x4C;
                *(unsigned int *)((((int)stk + 4) + t188)) = 0x0;
                t188 = 0xC;
                *(float *)((((int)stk + 4) + t188)) = ((float)((*(int *)((t189 + 0x24))) - 1000) * 0.0625f);
                t188 = (nlAddVector(t189, (t189 + 0xC)));
                t188 = 0x10;
                *(float *)((t189 + t188)) = ((*(float *)((t189 + t188))) + 0.0399999991f);
                t188 = (nlPushMatrix(0x0));
                t188 = (FUN_0c0dcca0(t189));
                t188 = 0x3CE;
                t188 = (nlRotateAY((*(short *)(((*(int *)(((int)stk + 12))) + t188)))));
                t188 = 0x3CC;
                t188 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 12))) + t188)))));
                t188 = (nlRotateAZ((*(int *)(((int)stk + 8)))));
                t188 = 0x20;
                u259 = *(float *)((t189 + t188));
                t188 = 0x38;
                *(float *)((((int)stk + 4) + t188)) = u259;
                t188 = (nlScale(u259, (u259 * 1.0f), 1.0f));
                t188 = 0x20;
                t188 = (FUN_0c0de000(((*(float *)((t189 + t188))) * 1.0f)));
                t188 = 0xC09D090;
                u263 = *(float *)((t188 + 0x0));
                t188 = 0xC;
                u264 = *(float *)((((int)stk + 4) + t188));
                t188 = 0xC09D094;
                u265 = *(float *)((t188 + 0x0));
                t188 = 0xC;
                u266 = *(float *)((((int)stk + 4) + t188));
                t188 = 0xC09D098;
                u267 = *(float *)((t188 + 0x0));
                t188 = 0xC;
                t188 = (FUN_0c0848bc(((*(float *)((((int)stk + 4) + t188))) * u267), (u266 * u265), (u264 * u263)));
                t188 = (FUN_0c0c465c(0x297));
                t188 = (nlPopMatrix(0x1));
                t272 = *(int *)((t189 + 0x24));
                *(unsigned int *)((t189 + 0x24)) = (t272 - 1);
                if ((int)(t272 - 1) > (int)0x3E8) {
                } else {
                    *(unsigned int *)((t189 + 0x24)) = 0x0;
                }
            }
        }
        t282 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t282 + 0x1);
        t189 = (t189 + 0x28);
        if ((unsigned int)(t282 + 0x1) < (unsigned int)0x190) continue;
        break;
    }
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    t291 = 0x4C;
    if ((*(int *)(((int)stk + 80))) != 0) {
        t286 = *(int *)((a4 + 0x30));
        t288 = t286;
        if (t286 == 2) {
            t288 = (FUN_0c0e19f2());
        }
        t291 = t288;
    }
    return t291;
}

