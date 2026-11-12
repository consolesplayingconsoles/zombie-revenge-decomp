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
int _divls(void);
int _modls(int);
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
int FUN_0c0d9760(int a4);
int FUN_0c03cbec(int a4);
int FUN_0c233528(int a4, int a5);
int FUN_0c0d61be(int a4, int a5, int a6, int a7);
int FUN_0c233692(int a4, int a5, int a6);
int FUN_0c037106(int a4, int a5);
int FUN_0c0e27be(int a4);
int FUN_0c02c4f6(int a4);
int FUN_0c06de9e(int a4);
int FUN_0c0b6934(int a4);
struct o0_short { short v; };
struct o2_short { char p[0x2]; short v; };
struct o14_float { char p[0x14]; float v; };
struct o1C8_int { char p[0x1C8]; int v; };
struct o310_int { char p[0x310]; int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o3CC_ushort { char p[0x3CC]; unsigned short v; };
struct o40_int { char p[0x40]; int v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o46_ushort { char p[0x46]; unsigned short v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C0_int { char p[0x4C0]; int v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o4D0_int { char p[0x4D0]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o510_int { char p[0x510]; int v; };
struct o560_int { char p[0x560]; int v; };
struct o574_int { char p[0x574]; int v; };
struct o574_uint { char p[0x574]; unsigned int v; };
struct o580_int { char p[0x580]; int v; };
struct o580_uint { char p[0x580]; unsigned int v; };
struct o584_uint { char p[0x584]; unsigned int v; };
struct o5A0_uint { char p[0x5A0]; unsigned int v; };
struct o5A4_uint { char p[0x5A4]; unsigned int v; };
struct o5A8_uint { char p[0x5A8]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct oBC_int { char p[0xBC]; int v; };






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
    int stk[1];
    register int t0;
    register int t2;
    register int t8;
    register int t11;
    register int t13;
    register int t16;
    register int t19;
    register int t20;
    register int t17;
    register int t23;

    t0 = *(int *)((a4 + 0x38));
    t2 = FUN_0c233506(((((struct o40_int *)(a4))->v)), 0x0, ((int)stk + 0));
    if (t2 != 0) {
        mwRnaErrCallFunc(0xC237F94);
    }
    t8 = (int)((int)0x20 / (int)(*(int *)((a4 + 0x8))));
    t11 = (int)((int)(*(int *)(((int)stk + 0))) / (int)((t8 << 2) << 1));
    *(unsigned int *)((a4 + 0x38)) = (t11 * ((t8 << 2) << 1));
    t13 = ((t11 * ((t8 << 2) << 1)) - t0);
    if ((int)((t11 * ((t8 << 2) << 1)) - t0) < 0) {
        t13 = (((t11 * ((t8 << 2) << 1)) - t0) + (*(int *)((a4 + 0x30))));
    }
    t16 = *(int *)((a4 + 0x3C));
    t19 = (t16 - t13);
    t20 = t13;
    if ((int)(t16 - t13) < 0) {
        t17 = *(int *)((a4 + 0x34));
        *(unsigned char *)((a4 + 0x4)) = 0x1;
        t19 = 0x0;
        t20 = (t17 - t0);
    }
    if ((unsigned char)(*(signed char *)((a4 + 0x4))) == 1) {
        t23 = mwRnaGetTransSw(a4);
        if (t23 == 1) {
            *(unsigned int *)((a4 + 0x34)) = (*(int *)((a4 + 0x38)));
            *(unsigned char *)((a4 + 0x4)) = 0x0;
        }
    }
    *(unsigned int *)((a4 + 0x3C)) = t19;
    (((struct o50_uint *)(a4))->v) = (((((struct o50_int *)(a4))->v)) + t20);
    return 0x50;
}

int FUN_0c0d9760(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(int *)0xC943EF4;
    t1 = *(int *)0xC943EA4;
    t2 = (((struct o0_short *)0xC94827C)->v);
    t3 = (t2 + t2);
    if ((int)t1 <= (int)0x3) {
    } else {
        if ((int)t1 <= (int)0x4) {
            t4 = ((t2 << 1) + t2);
        } else {
            if ((int)t1 > (int)0x5) {
                for (;;) {
                }
            }
            t4 = (t2 << 2);
        }
        t3 = t4;
    }
    t2 = (int)((int)t3 / (int)0x4);
    t3 = 0xC0E5DC0;
    t4 = t1;
    t1 = 0x0;
    t5 = a4;
    t6 = (t0 + 0xA5000000);
    for (;;) {
        t0 = (((struct o2_short *)0xC94827C)->v);
        if ((int)t1 >= (int)t0) {
            break;
        }
        t4 = 0x0;
        if ((int)t2 > 0) {
            for (;;) {
                t3 = *(int *)((t6 + 0x0));
                t6 = (t6 + 0x4);
                t4 = (t4 + 0x1);
                *(unsigned int *)((t5 + 0x0)) = t3;
                t5 = (t5 + 0x4);
                if ((int)t4 >= (int)t2) {
                    break;
                }
            }
        }
        t1 = (t1 + 0x1);
    }
    return t0;
}


int FUN_0c233528(int a4, int a5)
{
    int t12;
    int t0;

    *(unsigned int *)((a4 + 0x30)) = a5;
    t12 = 0x0;
    if ((int)a5 > (int)0xFFFFFC41) {
        t12 = 0x7F;
        if ((int)a5 < 0) {
            t0 = (((a5 << 8) - a5) - 0x80) / (int)0xFFFFFC41;
            t12 = 0x7F;
            if ((int)(0x7F - (t0 << 1)) > 0x7F) {
            } else {
                t12 = (0x7F - (t0 << 1));
                if ((int)(0x7F - (t0 << 1)) < 0) {
                    t12 = 0x0;
                }
            }
        }
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


int FUN_0c233692(int a4, int a5, int a6)
{
    int t10;
    int t12;
    int t14;
    int t27;

    (((struct o44_ushort *)(a4))->v) = a5;
    (((struct o46_ushort *)(a4))->v) = a6;
    t10 = 0xFFFFFFC0;
    t12 = 0x64;
    t14 = a6;
    if ((int)(short)a5 <= (int)0xFFFFFF9C) {
    } else {
        t10 = 0x3F;
        if ((int)(short)a5 >= (int)0x64) {
            t12 = 0x64;
            t14 = a6;
        } else {
            t10 = (((int)(short)a5 << 6) / 0x64);
        }
    }
    t27 = 0xFFFFFFC0;
    if ((int)(short)t14 <= (int)0xFFFFFF9C) {
    } else {
        t27 = 0x3F;
        if ((int)(short)t14 >= (int)t12) {
        } else {
            t27 = (((int)(short)t14 << 6) / 0x64);
        }
    }
    FUN_0c0e5364((*(short *)((a4 + 0x2))), t10);
    FUN_0c0e53c8((*(short *)((a4 + 0x2))), t27);
    return 0x0;
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
        { struct mvb6 { char c[6]; }; *(struct mvb6 *)((t3 + 0x60)) = *(struct mvb6 *)((t1 + 0xC)); }
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
    { struct mvb6 { char c[6]; }; *(struct mvb6 *)((t0 + 0x3CC)) = *(struct mvb6 *)(((*(int *)0xC24FAB0) + 0x14)); }
    *(unsigned int *)((t0 + 0x0)) = (*(int *)(((*(int *)((a4 + 0x0))) + 0x4)));
    t7 = FUN_0c0e1830(0xC0B6A7C, 0x440);
    FUN_0c0e19d0(t7);
    *(unsigned int *)0xC247CB0 = t7;
    (((struct o3CC_ushort *)(t7))->v) = 0xFFFFC001;
    return 0x3CC;
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
            { struct mvb6 { char c[6]; }; *(struct mvb6 *)((t7 + 0x60)) = *(struct mvb6 *)((t5 + 0xC)); }
            (((struct o78_uint *)(a4))->v) = (*(short *)((t5 + 0x12)));
            t4 = (t4 + 0x1);
            *(unsigned int *)(((a4 + 0x68) + 0x8)) = 0x0;
            *(unsigned int *)(((a4 + 0x68) + 0x4)) = 0x0;
            (((struct o68_uint *)(a4))->v) = 0x0;
            (((struct o48_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = u3;
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o90_float *)(a4))->v) = (u1 / ((((struct o14_float *)(t5))->v)));
            (((struct o94_float *)(a4))->v) = u2;
            t5 = (t5 + 0x18);
            if ((unsigned int)t4 >= (unsigned int)0x3) {
                break;
            }
        }
        t11 = 0x94;
    }
    return t11;
}

