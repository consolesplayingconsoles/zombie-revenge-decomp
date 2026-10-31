/* Straight-line functions with calls and guards (batch gen_hv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c016ac0(void);
int FUN_0c01993e(int);
int FUN_0c01a874(void);
int FUN_0c0211a0(void);
int FUN_0c04fb24(void);
int FUN_0c0500ee(int, int, int, int, float);
int FUN_0c057fd4(int, int);
int FUN_0c084bf6(int, int);
int FUN_0c087aa0(int, int, int);
int FUN_0c0a59f8(int);
int FUN_0c0a5a7a(int);
int FUN_0c0bd65c(int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e5dc0(void);
int __init_target_cc_f(void);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c01b49a(int a4, int a5, int a6, int a7, float f4);
int FUN_0c089778(int a4);
int FUN_0c087834(int a4);

int FUN_0c01b49a(int a4, int a5, int a6, int a7, float f4)
{
    int t4;
    register int t26;
    register int t38;
    register int t57;
    register int t63;
    register int t68;
    register int t133;
    register int t40;

    if ((*(int *)0xC23EDB0) == 1) {
        *(unsigned int *)((a4 + 0x44)) = (*(int *)0xC23ED9C);
        *(unsigned int *)0xC23ED9C = 0x3;
        return 0x44;
    }
    t4 = *(int *)0xC23ED5C;
    if ((0x40 & t4) != 0) {
        *(unsigned int *)0xC23ED9C = 0xA;
        return FUN_0c084bf6((*(int *)0xC23ED90), (*(int *)0xC23ED94));
    }
    if ((t4 & 0x10) != 0) {
        *(unsigned int *)0xC23ED9C = 0x8;
        return FUN_0c084bf6((*(int *)0xC23ED90), (*(int *)0xC23ED94));
    }
    if ((int)(*(int *)((a4 + 0x38))) <= 0) {
        *(unsigned int *)0xC23ED9C = 0x17;
        *(unsigned int *)(((0x44 + a4) + 0x0)) = 0x7;
        FUN_0c057fd4(0xC23ED9C, t4);
        FUN_0c04fb24();
        FUN_0c0211a0();
        __init_target_cc_f();
        *(unsigned int *)((a4 + 0x54)) = 0xB4;
        *(unsigned int *)((a4 + 0x50)) = 0x168;
        return FUN_0c0cc3f8(0xC4);
    }
    FUN_0c0500ee(0xC23ED9C, t4, a6, a7, f4);
    FUN_0c01993e(a4);
    FUN_0c016ac0();
    FUN_0c01a874();
    if ((*(int *)0xC204998) != 1) {
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 1);
    } else {
        if ((*(int *)0xC2049A0) == 0) {
            t26 = *(int *)0xC1FF890;
            if ((int)t26 < 0) {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 1);
            } else {
                *(unsigned int *)0xC1FF890 = (t26 - 1);
                if ((int)(t26 - 1) < 0) {
                    *(unsigned int *)0xC1FF898 = 0x0;
                }
            }
        }
        if ((int)(*(int *)0xC1FF894) >= 0) {
            t38 = *(int *)0xC1FF894;
            *(unsigned int *)0xC1FF894 = (t38 - 1);
            if (((*(int *)0xC20499C) != 0) && (t40 = *(int *)0xC23EDC0, t40 == 4)) {
                if ((int)(t38 - 1) < 0) {
                    FUN_0c0bd65c(0x0);
                    FUN_0c0a59f8(0x0);
                    FUN_0c0a5a7a(0x0);
                    *(unsigned int *)0xC1FF89C = 0x0;
                } else {
                    if ((int)(t38 - 1) < (int)0xB4) {
                        t57 = 0x1;
                        if (((*(int *)0xC1FF894) & 16) == 0) {
                            t57 = 0x0;
                        }
                        FUN_0c0bd65c(t57);
                    } else {
                        if ((int)(t38 - 1) < (int)0x12C) {
                            t63 = 0x1;
                            if (((*(int *)0xC1FF894) & 8) == 0) {
                                t63 = 0x0;
                            }
                            FUN_0c0bd65c(t63);
                        } else {
                            if ((int)(t38 - 1) < (int)0x258) {
                                t68 = 0x1;
                                if (((*(int *)0xC1FF894) & 4) == 0) {
                                    t68 = 0x0;
                                }
                                FUN_0c0bd65c(t68);
                            }
                        }
                    }
                }
            } else {
                if ((int)(t38 - 1) < 0) {
                    *(unsigned int *)0xC1FF8A0 = 0x0;
                }
            }
        }
    }
    *(volatile int *)((a4 + 0x38));
    t133 = FUN_0c0e5dc0();
    *(unsigned int *)0xC23EDA4 = t133;
    return t133;
}

int FUN_0c089778(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((t0 + 0x3CE))));
    nlRotateAX(((*(short *)((t0 + 0x3CC))) + 0x1FFF));
    nlScale(0.699999988f, 0.699999988f, 0.699999988f);
    FUN_0c0de000(0.699999988f);
    t1 = *(int *)((a4 + 0x68));
    *(unsigned int *)((a4 + 0x68)) = (t1 + 0x1);
    FUN_0c0c465c((((t1 + 0x1) - 1) + 0xD8));
    nlPopMatrix(0x1);
    if ((*(int *)((a4 + 0x68))) == 3) {
        t1 = *(short *)((t0 + 0x3CE));
        nlPushMatrix(0x0);
        t2 = 0xC10AAD4;
        t3 = (t1 + 0x7FFF);
        for (;;) {
            t1 = FUN_0c0e19aa(0xC08C1AA, 0xA4, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t1);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x70)) = *(struct mv3 *)((a4 + 0x30)); }
            *(unsigned short *)((t1 + 0x88)) = 0xFFFFE71D;
            *(unsigned short *)((t1 + 0x8A)) = t3;
            t4 = t2;
            t5 = (0x4 + t2);
            t2 = (t2 + 0x8);
            u0 = 20.0f;
            u0 = u0 + 0.0078125f * (float)(unsigned char)(FUN_0c0da2e0());
            *(float *)((t1 + 0x90)) = u0;
            *(float *)((t1 + 0x70)) = ((*(float *)((t1 + 0x70))) + (*(float *)((t4 + 0x0))));
            *(float *)((t1 + 0x78)) = ((*(float *)((t1 + 0x78))) + (*(float *)((t5 + 0x0))));
            *(unsigned short *)((t1 + 0x9A)) = 0xCA;
            *(unsigned short *)((t1 + 0xA2)) = 0x1;
            *(unsigned short *)((t1 + 0xA0)) = 0xE;
            t3 = (t3 + 0x3333);
            if ((unsigned int)t2 >= (unsigned int)0xC10AAFC) {
                break;
            }
        }
        nlPopMatrix(0x1);
    }
    if ((*(int *)((a4 + 0x68))) == 5) {
        t1 = FUN_0c0e1830(0xC08C1AA, 0xA4);
        FUN_0c0e19d0(t1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x70)) = *(struct mv3 *)((a4 + 0x30)); }
        *(unsigned short *)((t1 + 0x8A)) = (*(short *)((t0 + 0x3CE)));
        *(unsigned short *)((t1 + 0x88)) = (*(short *)((t0 + 0x3CC)));
        *(float *)((t1 + 0x90)) = 10.0f;
        *(unsigned short *)((t1 + 0x9A)) = 0x328;
        *(unsigned short *)((t1 + 0xA0)) = 0x15;
    }
    if ((*(int *)((a4 + 0x68))) == 10) {
        t1 = FUN_0c0e1830(0xC08C1AA, 0xA4);
        FUN_0c0e19d0(t1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x70)) = *(struct mv3 *)((a4 + 0x30)); }
        *(unsigned short *)((t1 + 0x8A)) = (*(short *)((t0 + 0x3CE)));
        *(unsigned short *)((t1 + 0x88)) = (*(short *)((t0 + 0x3CC)));
        *(float *)((t1 + 0x90)) = 10.0f;
        *(unsigned short *)((t1 + 0x9A)) = 0x312;
        *(unsigned short *)((t1 + 0xA0)) = 0x16;
    }
    t0 = *(int *)((a4 + 0x64));
    *(unsigned int *)((a4 + 0x64)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        return FUN_0c0e19f2();
    }
    return 0x64;
}

int FUN_0c087834(int a4)
{
    int stk[13];
    register int t6;
    register int t7;
    register float u9;
    register float u18;
    register float u19;
    register float u20;
    register float u21;
    register float u61;
    register float u22;
    int t23;
    register int t24;
    register float u25;
    register float u26;
    register int t28;
    register float u30;
    register float u31;
    register float u32;
    register float u33;
    register float u34;
    register float u35;
    register int t76;
    register int t103;
    register float u50;

    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((a4 + 0x54))));
    nlRotateAX((*(short *)((a4 + 0x52))));
    t6 = *(short *)(((0x50 + a4) + 0x0));
    t7 = *(short *)((a4 + 0x56));
    *(unsigned short *)((a4 + 0x56)) = (t7 + t6);
    nlRotateAZ((short)(t7 + t6));
    u9 = *(float *)((a4 + 0x48));
    nlScale(u9, u9, u9);
    FUN_0c0de000((*(float *)((a4 + 0x48))));
    FUN_0c0c465c((*(int *)((a4 + 0x60))));
    nlPopMatrix(0x1);
    if ((*(int *)((a4 + 0x58))) == 0) {
    } else {
        FUN_0c0db470((a4 + 0x30), ((int)stk + 4));
        u18 = *(float *)(((int)stk + 12));
        if (!(u18 > -10.0f)) {
        } else {
            u19 = *(float *)0xC247D0C;
            u20 = *(float *)0xC247D10;
            u21 = *(float *)(((int)stk + 4));
            u61 = _builtin_fabsf(u21);
            if (_builtin_fabsf(u21) > (u19 * u18)) {
            } else {
                u22 = *(float *)(((int)stk + 8));
                if (_builtin_fabsf(u22) > (u20 * u18)) {
                    u50 = _builtin_fabsf(u22);
                } else {
                    t23 = FUN_0c0da2e0();
                    t24 = FUN_0c0da2e0();
                    u25 = *(float *)(((int)stk + 4));
                    u26 = *(float *)(((int)stk + 8));
                    t28 = FUN_0c0e19aa(0xC087F9C, 0x6C, (*(int *)0xC23ECF4));
                    FUN_0c0e19d0(t28);
                    u30 = ((-((float)(t24 & 0x1FF) * 1.90734863e-06f)) + -0.00129999989f);
                    u31 = (u25 / (u19 * u18));
                    *(unsigned int *)((t28 + 0x3C)) = 0xC087E98;
                    *(unsigned int *)((t28 + 0x38)) = 0xC0C465C;
                    u32 = (u30 * u31);
                    *(float *)((t28 + 0x40)) = (-(u32 * 0.849426925f));
                    u33 = ((-((float)(t24 & 0x1FF) * 1.90734863e-06f)) + -0.00129999989f);
                    u34 = (u26 / (u20 * u18));
                    u35 = (u33 * u34);
                    *(float *)((t28 + 0x44)) = (-(u35 * 0.637070239f));
                    *(float *)((t28 + 0x48)) = ((-((float)(t24 & 0x1FF) * 1.90734863e-06f)) + -0.00129999989f);
                    *(unsigned short *)((t28 + 0x4C)) = 0x3FFF;
                    *(unsigned short *)((t28 + 0x4E)) = 0x7FFF;
                    *(float *)((t28 + 0x58)) = 1.0f;
                    *(float *)((t28 + 0x54)) = (*(float *)(((((((0x7 & t23) << 1) + (0x7 & t23)) << 2) + 0xC10A9D4) + 0x8)));
                    *(unsigned int *)((t28 + 0x60)) = (unsigned short)(*(short *)(((((((0x7 & t23) << 1) + (0x7 & t23)) << 2) + 0xC10A9D4) + 0x0)));
                    *(unsigned int *)(((0x5C + t28) + 0x0)) = (unsigned short)(*(short *)(((((((0x7 & t23) << 1) + (0x7 & t23)) << 2) + 0xC10A9D4) + 0x2)));
                    *(unsigned int *)((t28 + 0x64)) = 0x1;
                    if ((*(int *)0xC23ED84) == 0) {
                        *(unsigned int *)((t28 + 0x0)) = 0xC0E19F2;
                    }
                    FUN_0c0e19f2();
                }
                u61 = u50;
            }
        }
        t76 = *(int *)((a4 + 0x5C));
        *(unsigned int *)((a4 + 0x5C)) = (t76 + 0x1);
        if (((t76 + 0x1) & 0xF) == 0) {
            FUN_0c087aa0((a4 + 0x30), (a4 + 0x3C), ((*(short *)((a4 + 0x54))) + 0x7FFF));
        }
    }
    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) - 0.083166644f);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), (*(float *)0xC087A94));
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    t103 = 0x34;
    if (0.0f > (*(float *)((a4 + 0x34)))) {
        t103 = (FUN_0c0e19f2());
    }
    return t103;
}
