/* Straight-line functions with calls and guards (batch gen_df): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03bd28(int, int, int, int, int);
int FUN_0c0c7354(int, float, float);
int FUN_0c0cddba(int);
int FUN_0c0cddda(int);
int FUN_0c0db0a0(int, int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e2582(int, int);
int FUN_0c0e2794(int, int);
int FUN_0c0e282a(int, int);
int FUN_0c0e4f5a(int, int, int);
int FUN_0c0e5210(int, int, int);
int FUN_0c0e5364(int, int);
int FUN_0c0e53c8(int, int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(int);
int FUN_0c0e6118(void);
int FUN_0c0e6248(int);
int FUN_0c233506(int, int, int);
int mwRnaErrCallFunc(int);
int mwRnaGetTransSw(int);
int nlPrintf(int, ...);
int FUN_0c0cfa18(int a4, int a5, int a6, int a7);
int FUN_0c0cddfa(int a4, int a5, float f4, float f5);
int FUN_0c03cb3a(int a4);
int FUN_0c06d634(int a4, int a5);
int FUN_0c0e2958(int a4, int a5);
int FUN_0c22bcdc(int a4);
int FUN_0c0d9760(int a4, int a5, int a6, int a7);
int FUN_0c03cbec(int a4);
int FUN_0c233528(int a4, int a5);
int FUN_0c0d61be(int a4, int a5, int a6, int a7);
int FUN_0c233692(int a4, int a5, int a6);
int FUN_0c037106(int a4, int a5);
int FUN_0c0e27be(int a4);
int FUN_0c02c4f6(int a4);
int FUN_0c06de9e(int a4);
int FUN_0c0b6934(int a4);

int FUN_0c0cfa18(int a4, int a5, int a6, int a7)
{
    int t2;
    int t16;
    int t20;

    FUN_0c0e5dc0();
    if (a5 != (*(int *)0xC9433C8)) {
        t2 = ((int (*)(void))(FUN_0c0e5f1c))();
    }
    *(unsigned char *)((a4 + 0x0)) = (FUN_0c0e5dc0());
    FUN_0c0e5dc0();
    *(unsigned char *)((a4 + 0x1)) = (((int (*)(void))(FUN_0c0e5f1c))());
    t16 = ((int (*)(int))(FUN_0c0e5f1c))(a4);
    *(unsigned char *)((a4 + 0x2)) = (FUN_0c0e5dc0());
    *(unsigned char *)((a4 + 0x3)) = (((int (*)(int))(FUN_0c0e5f1c))(a4));
    *(unsigned char *)((a4 + 0x4)) = (FUN_0c0e5dc0());
    t20 = ((int (*)(int))(FUN_0c0e5f1c))(a4);
    *(unsigned char *)((a4 + 0x5)) = t20;
    return t20;
}

int FUN_0c0cddfa(int a4, int a5, float f4, float f5)
{
    int t0;
    int t1;
    int t17;
    float u19;
    int t11;
    int t12;

    t0 = FUN_0c0cddba(a5);
    t1 = FUN_0c0cddda(a5);
    if (((a4 == 0) || (t0 != 0)) && (t1 != 1)) {
        FUN_0c0c7354((*(int *)((0xC1EFA24 + (t0 << 2)))), (f4 + (*(float *)0xC0CDF38)), f5);
        FUN_0c0c7354(0xC1E9F24, (f4 + (*(float *)0xC0CDF40)), f5);
        FUN_0c0c7354((*(int *)((0xC1EFA24 + (t1 << 2)))), (f4 + (*(float *)0xC0CDF44)), f5);
    }
    t17 = a4;
    u19 = f4;
    if ((int)a4 > (int)0x9) {
        t11 = FUN_0c0e5dc0();
        t12 = FUN_0c0e5f1c(a4);
        FUN_0c0c7354((*(int *)((0xC1EFA24 + (t11 << 2)))), f4, f5);
        t17 = t12;
        u19 = (f4 + (*(float *)0xC0CDF50));
    }
    return (FUN_0c0c7354((*(int *)((0xC1EFA24 + (t17 << 2)))), u19, f5));
}

int FUN_0c03cb3a(int a4)
{
    int t2;
    int t18;
    int t9;

    *(volatile int *)((a4 + 0x4C0));
    *(volatile int *)(((0x310 + a4) + 0x0));
    t2 = FUN_0c0e5f1c(a4);
    if (t2 == 0) {
        t9 = (*(int *)((a4 + 0x310)));
    } else {
        *(volatile int *)((a4 + 0x4C0));
        *(volatile int *)((a4 + 0x310));
        t9 = (((FUN_0c0e5dc0()) + 0x1) * a4);
    }
    FUN_0c03bd28(a4, 0x0, (t9 - (*(int *)((a4 + 0x4C0)))), 0x0, 0x0);
    t18 = 0x560;
    if ((*(int *)((a4 + 0x560))) != 0) {
        *(unsigned int *)((a4 + 0x5A0)) = 0x0;
        *(unsigned int *)((a4 + 0x5A4)) = 0x0;
        *(unsigned int *)((a4 + 0x5A8)) = 0x0;
        *(unsigned int *)((a4 + 0x580)) = (*(int *)((((*(int *)((a4 + 0x1C8))) << 2) + 0xC1F0488)));
        *(unsigned int *)((a4 + 0x584)) = 0x0;
        *(unsigned int *)((a4 + 0x5A4)) = (*(int *)((((*(int *)((a4 + 0x580))) << 2) + 0xC1F04C8)));
        t18 = 0x5A4;
    }
    return t18;
}

int FUN_0c06d634(int a4, int a5)
{
    int t0;
    int t11;
    float u1;
    float u2;
    float u3;
    int t4;
    int t5;
    int t7;

    t0 = *(int *)0xC23ED58;
    t11 = t0;
    if (t0 != 15) {
        u1 = *(float *)0xC06D748;
        u2 = *(float *)0xC06D74C;
        u3 = *(float *)0xC06D750;
        t4 = 0x0;
        t5 = 0xC0FB508;
        for (;;) {
            t7 = FUN_0c0e19aa(0xC06D49C, 0xB4, (*(int *)0xC23ECE4));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x30)) = *(struct mv3 *)(t5); }
            FUN_0c0e6248(t7);
            *(unsigned int *)(((0x78 + a4) + 0x0)) = (*(short *)((t5 + 0x12)));
            t4 = (t4 + 0x1);
            *(unsigned int *)(((a4 + 0x68) + 0x8)) = 0x0;
            *(unsigned int *)(((a4 + 0x68) + 0x4)) = 0x0;
            *(unsigned int *)(((a4 + 0x68) + 0x0)) = 0x0;
            *(float *)((a4 + 0x48)) = 0.0f;
            *(float *)((a4 + 0x4C)) = u3;
            *(float *)((a4 + 0x50)) = 0.0f;
            *(float *)((a4 + 0x90)) = (u1 / (*(float *)((t5 + 0x14))));
            *(float *)((a4 + 0x94)) = u2;
            t5 = (t5 + 0x18);
            if ((unsigned int)t4 >= (unsigned int)0x3) {
                break;
            }
        }
        t11 = 0x94;
    }
    return t11;
}

int FUN_0c0e2958(int a4, int a5)
{
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t2;

    t1 = (FUN_0c0e282a(a4, a5));
    t3 = 0x0;
    t4 = 0x0;
    t5 = 0x0;
    t6 = 0x0;
    t7 = 0x0;
    t8 = 0xC52315C;
    for (;;) {
        if ((int)(*(int *)((t8 + 0x0))) > 0) {
            t3 = (*(int *)((t8 + 0x0)));
            t7 = (t7 + 0x1);
            t4 = (t4 + t3);
            t3 = (t3 << 2);
            t8 = (t8 + t3);
        } else {
            t2 = (*(int *)((t8 + 0x0)));
            if ((int)t2 >= 0) {
                break;
            }
            t3 = (*(int *)((t8 + 0x0)));
            t6 = (t6 + 0x1);
            t5 = (t5 - t3);
            t3 = (t3 << 2);
            t8 = (t8 - t3);
        }
        t1 = (*(int *)((t8 + 0x0)));
        if (t1 == 1) {
            t1 = (nlPrintf(0xC1EAA98, (t7)));
            t2 = 0xC1EAAAC;
            t4 = (t4 << 2);
            t1 = (nlPrintf((t2), (t4)));
            t1 = (nlPrintf(0xC1EAAC0, (t6)));
            t2 = 0xC1EAAD4;
            t5 = (t5 << 2);
            t1 = (nlPrintf((t2), (t5)));
            return t1;
        }
    }
    FUN_0c0db0a0(0x14, 0x14);
    nlPrintf(0xC1EAA70);
    for (;;) {
    }
}

int FUN_0c22bcdc(int a4)
{
    int t0;
    int t2;
    int t10;
    int t12;
    int t15;
    int t18;
    int t19;
    int t16;
    int t22;
    int stk[7];

    t0 = *(int *)((a4 + 0x38));
    t2 = FUN_0c233506((*(int *)((a4 + 0x40))), 0x0, ((int)stk + 4));
    if (t2 != 0) {
        mwRnaErrCallFunc(0xC237F94);
    }
    *(volatile int *)((a4 + 0x8));
    FUN_0c0e5dc0();
    *(volatile int *)(((int)stk + 4));
    t10 = FUN_0c0e5dc0();
    *(unsigned int *)((a4 + 0x38)) = (t10 * a4);
    t12 = ((t10 * a4) - t0);
    if ((int)((t10 * a4) - t0) < 0) {
        t12 = (((t10 * a4) - t0) + (*(int *)((a4 + 0x30))));
    }
    t15 = *(int *)((a4 + 0x3C));
    t18 = (t15 - t12);
    t19 = t12;
    if ((int)(t15 - t12) < 0) {
        t16 = *(int *)((a4 + 0x34));
        *(unsigned char *)((a4 + 0x4)) = 0x1;
        t18 = 0x0;
        t19 = (t16 - t0);
    }
    if ((unsigned char)(*(signed char *)((a4 + 0x4))) == 1) {
        t22 = mwRnaGetTransSw(a4);
        if (t22 == 1) {
            *(unsigned int *)((a4 + 0x34)) = (*(int *)((a4 + 0x38)));
            *(unsigned char *)((a4 + 0x4)) = 0x0;
        }
    }
    *(unsigned int *)((a4 + 0x3C)) = t18;
    *(unsigned int *)((a4 + 0x50)) = ((*(int *)((a4 + 0x50))) + t19);
    return 0x50;
}

int FUN_0c0d9760(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;

    t0 = *(int *)0xC943EF4;
    t1 = *(int *)0xC943EA4;
    *(volatile short *)0xC94827C;
    if ((int)t1 > (int)0x3) {
        if ((int)t1 > (int)0x4) {
            if ((int)t1 > (int)0x5) {
                for (;;) {
                }
            }
        }
    }
    t7 = FUN_0c0e5dc0();
    t9 = a5;
    t10 = 0x0;
    t11 = a7;
    t12 = (t0 + 0xA5000000);
    for (;;) {
        t13 = *(short *)0xC94827E;
        if ((int)t10 >= (int)t13) {
            break;
        }
        t9 = 0x0;
        if ((int)t7 > 0) {
            for (;;) {
                t14 = *(int *)((t12 + 0x0));
                t12 = (t12 + 0x4);
                t9 = (t9 + 0x1);
                *(unsigned int *)((t11 + 0x0)) = (t14);
                t11 = (t11 + 0x4);
                if ((int)t9 >= (int)t7) {
                    break;
                }
            }
        }
        t10 = (t10 + 0x1);
    }
    return t13;
}

int FUN_0c03cbec(int a4)
{
    int t2;
    int t18;
    int t9;

    *(volatile int *)((a4 + 0x4C0));
    *(volatile int *)(((0x310 + a4) + 0x0));
    t2 = FUN_0c0e5f1c(a4);
    if (t2 == 0) {
        t9 = (*(int *)((a4 + 0x310)));
    } else {
        *(volatile int *)((a4 + 0x4C0));
        *(volatile int *)((a4 + 0x310));
        t9 = (((FUN_0c0e5dc0()) + 0x1) * a4);
    }
    FUN_0c03bd28(a4, 0x0, (t9 - (*(int *)((a4 + 0x4C0)))), 0x0, 0x0);
    t18 = 0x560;
    if ((*(int *)((a4 + 0x560))) != 0) {
        *(unsigned int *)((a4 + 0x5A0)) = 0x0;
        *(unsigned int *)((a4 + 0x5A4)) = 0x0;
        *(unsigned int *)((a4 + 0x5A8)) = 0x0;
        *(unsigned int *)((a4 + 0x580)) = (*(int *)((((*(int *)((a4 + 0x1C8))) << 2) + 0xC1F0488)));
        *(unsigned int *)((a4 + 0x584)) = (*(int *)((((*(int *)((a4 + 0x580))) << 2) + 0xC1F04D8)));
        t18 = 0x584;
    }
    return t18;
}

int FUN_0c233528(int a4, int a5)
{
    int t12;
    int t6;
    int t0;
    int t3;
    int t1;

    *(unsigned int *)((a4 + 0x30)) = a5;
    t12 = 0x0;
    if ((int)a5 > (int)0xFFFFFC41) {
        t6 = 0x7F;
        if ((int)a5 < 0) {
            t0 = FUN_0c0e5dc0();
            t3 = a4;
            if ((int)(a4 - (t0 << 1)) > (int)a4) {
            } else {
                t1 = (a4 - (t0 << 1));
                if ((int)(a4 - (t0 << 1)) < 0) {
                    t1 = 0x0;
                }
                t3 = t1;
            }
            t6 = t3;
        }
        t12 = t6;
    }
    if ((*(int *)((a4 + 0xC))) == 0) {
        FUN_0c0e4f5a((*(int *)(((*(int *)((a4 + 0x10))) + 0x4))), 0x0, t12);
        FUN_0c0e4f5a((*(int *)(((*(int *)((a4 + 0x10))) + 0x4))), 0x1, t12);
    } else {
        FUN_0c0e5210((*(short *)((a4 + 0x2))), 0x0, t12);
        FUN_0c0e5210((*(short *)((a4 + 0x2))), 0x1, t12);
    }
    return 0x0;
}

int FUN_0c0d61be(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t0;
    int t12;
    int t13;
    int t14;
    int t15;

    t1 = 0xC943554;
    t2 = 0xC9436B4;
    t3 = 0x0;
    t4 = a7;
    t5 = 0x0;
    for (;;) {
        if ((unsigned int)t2 >= (unsigned int)((0x160 + t1) + 0x3A8)) {
            break;
        }
        t4 = t2;
        if ((*(int *)((t4 + 0x4))) != 0) {
            *(unsigned int *)((t4 + 0x4)) = 0x0;
            t4 = t5;
            t4 = (t4 << 2);
            *(unsigned int *)(((0xC249880 + t4) + 0x0)) = (*(int *)(((t1 + t4) + 0x0)));
            *(unsigned int *)(((0xC249880 + t4) + 0x4)) = (*(int *)(((t1 + t4) + 0x4)));
            t0 = 0x50;
            t0 = (FUN_0c0e6118());
        } else {
            t12 = t1;
            t13 = t2;
            t14 = t3;
            t15 = t4;
        }
        t1 = t12;
        t2 = (t13 + 0x1D4);
        t3 = t14;
        t4 = t15;
        t5 = (t5 + 0x2);
        t3 = (t3 + 0x50);
    }
    return t0;
}

int FUN_0c233692(int a4, int a5, int a6)
{
    int t10;
    int t12;
    int t14;
    int t2;
    int t27;
    int t19;
    int t4;
    int t6;

    *(unsigned short *)((a4 + 0x44)) = a5;
    *(unsigned short *)((a4 + 0x46)) = a6;
    t10 = 0xFFFFFFC0;
    t12 = 0x64;
    t14 = a6;
    if ((int)(short)a5 <= (int)0xFFFFFF9C) {
    } else {
        t2 = 0x3F;
        if ((int)(short)a5 >= (int)0x64) {
            t4 = 0x64;
            t6 = a6;
        } else {
            t2 = (FUN_0c0e5dc0());
        }
        t10 = t2;
        t12 = t4;
        t14 = t6;
    }
    t27 = 0xFFFFFFC0;
    if ((int)(short)t14 <= (int)0xFFFFFF9C) {
    } else {
        t19 = 0x3F;
        if ((int)(short)t14 >= (int)t12) {
        } else {
            t19 = (FUN_0c0e5dc0());
        }
        t27 = t19;
    }
    FUN_0c0e5364((*(short *)((a4 + 0x2))), t10);
    FUN_0c0e53c8((*(short *)((a4 + 0x2))), t27);
    return 0x0;
}

int FUN_0c037106(int a4, int a5)
{
    int t3;
    int t4;
    int t6;
    int t8;
    float u11;

    *(volatile int *)0xC2462F8;
    *(volatile int *)((a4 + 0x4C0));
    *(volatile int *)0xC23ED70;
    t3 = FUN_0c0e5dc0();
    t4 = (a5 + t3);
    if ((int)(a5 + t3) < 0) {
        t4 = 0x0;
    }
    t6 = t4;
    if ((int)t4 > (int)0xF) {
        t6 = 0xF;
    }
    t8 = *(int *)(((t6 << 2) + 0xC1EFFB8));
    u11 = *(float *)(((((*(int *)(((0x510 + a4) + 0x0))) << 2) + (0xC247084 + ((((*(int *)((a4 + 0xBC))) << 2) << 2) << 2))) + 0x0));
    if ((int)(int)((float)(t8 + (int)(u11 / 1.19999993f)) * 0.5f) > (int)(*(int *)((a4 + 0x3B0)))) {
        *(unsigned int *)((a4 + 0x3B0)) = (int)((float)(t8 + (int)(u11 / 1.19999993f)) * 0.5f);
    }
    return 0x3B0;
}

int FUN_0c0e27be(int a4)
{
    int t0;
    int t7;

    *(unsigned int *)0xC94C7E8 = a4;
    t0 = 0xC52315C;
    for (;;) {
        t0 = ((*(int *)((t0 + 0x8))) << 2);
        t0 = (t0 + 0xC52315C);
        if ((int)(-(*(int *)((t0 + 0x0)))) >= (int)((((((a4 + 0x7) >> 1) >> 1) >> 1) << 1) + 0x4)) {
            break;
        }
        if ((*(int *)((t0 + 0x8))) == 0) {
            FUN_0c0db0a0(0x10, 0x17);
            nlPrintf(0xC1EA9B8);
            for (;;) {
            }
        }
    }
    t7 = FUN_0c0e2582(t0, ((((((a4 + 0x7) >> 1) >> 1) >> 1) << 1) + 0x4));
    FUN_0c0e2794((*(int *)0xC94C790), t7);
    return t7;
}

int FUN_0c02c4f6(int a4)
{
    int t2;
    int t10;
    int t12;

    *(volatile int *)((a4 + 0x304));
    *(volatile int *)((a4 + 0x308));
    t2 = FUN_0c0e5dc0();
    if ((*(int *)((a4 + 0x4D0))) == 0) {
        if ((*(int *)((a4 + 0x4C8))) == 2) {
            t10 = *(int *)((a4 + 0x4F8));
            if ((t10 == 12) || (t10 == 13)) {
                *(unsigned int *)((a4 + 0x574)) = t2;
            }
            return 0x0;
        }
        t12 = *(int *)((a4 + 0x574));
        if ((t12 != t2) && (((int)t2 <= (int)0x4) && ((int)t12 > (int)0x4))) {
            *(unsigned int *)((a4 + 0x574)) = t2;
            return 0x1;
        }
        *(unsigned int *)((a4 + 0x574)) = t2;
        return 0x0;
    }
    return 0x0;
}

int FUN_0c06de9e(int a4)
{
    int t0;
    int t1;
    int t3;
    int t5;

    t0 = 0x0;
    t1 = 0xC0FB618;
    for (;;) {
        t3 = FUN_0c0e19aa(0xC06DE48, 0xB4, (*(int *)0xC23ECE4));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x30)) = *(struct mv3 *)(t1); }
        FUN_0c0e6248(t3);
        t5 = *(short *)((t1 + 0x12));
        t0 = (t0 + 0x1);
        *(unsigned int *)(((0x78 + a4) + 0x0)) = t5;
        t1 = (t1 + 0x18);
        if ((unsigned int)t0 >= (unsigned int)0x2) {
            break;
        }
    }
    return t5;
}

int FUN_0c0b6934(int a4)
{
    int t0;
    int t7;

    t0 = FUN_0c0e1830(0xC0B6992, 0x440);
    FUN_0c0e19d0(t0);
    *(unsigned int *)0xC247CAC = t0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x254 + t0)) = *(struct mv3 *)(((*(int *)0xC24FAB0) + 0x8)); }
    *(volatile int *)0xC24FAB0;
    FUN_0c0e6248(0xC24FAB0);
    *(unsigned int *)((t0 + 0x0)) = (*(int *)(((*(int *)((a4 + 0x0))) + 0x4)));
    t7 = FUN_0c0e1830(0xC0B6A7C, 0x440);
    FUN_0c0e19d0(t7);
    *(unsigned int *)0xC247CB0 = t7;
    *(unsigned short *)((t7 + 0x3CC)) = 0xFFFFC001;
    return 0x3CC;
}
