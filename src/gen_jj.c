/* Straight-line functions with calls and guards (batch gen_jj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c022838(int);
int FUN_0c0277c4(int, float);
int FUN_0c0278d0(int, int);
int FUN_0c02a19a(int);
int FUN_0c0352b4(int, int, int);
int FUN_0c0b1542(int, float);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0e19f2(void);
int FUN_0c0e5f1c(int);
int FUN_0c0e5fe4(void);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c027bca(int a4);
int FUN_0c0b1670(int a4, int a5, int a6, int a7, float f4);
int FUN_0c03ec7c(int a4, int a5, int a6, int a7);
int FUN_0c07ba72(int a4, int a5, int a6, int a7);
int FUN_0c07dc90(int a4, int a5, int a6, int a7);
int FUN_0c020962(int a4, int a5, int a6, int a7);
int FUN_0c07cc3a(int a4, int a5, int a6, int a7);
struct o290_int { char p[0x290]; int v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o45C_float { char p[0x45C]; float v; };
struct o460_float { char p[0x460]; float v; };
struct o464_float { char p[0x464]; float v; };
struct o468_float { char p[0x468]; float v; };
struct o46C_float { char p[0x46C]; float v; };
struct o470_float { char p[0x470]; float v; };
struct o514_int { char p[0x514]; int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o60_int { char p[0x60]; int v; };
struct o78_float { char p[0x78]; float v; };
struct o88_int { char p[0x88]; int v; };
struct oBC_int { char p[0xBC]; int v; };
struct o0_int { int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };



int FUN_0c027bca(int a4)
{
    register int t0;

    if (((((struct o514_int *)(a4))->v)) != 0) {
        FUN_0c0277c4(a4, 0.0149999997f);
        FUN_0c0352b4(a4, 0x80, 0x1);
        t0 = (((struct o3AC_int *)(a4))->v);
        (((struct o3AC_uint *)(a4))->v) = (t0 + 0x1);
        if ((int)(t0 + 0x1) <= (int)((((struct o3B0_int *)(a4))->v))) {
        } else {
            FUN_0c02a19a(a4);
        }
    } else {
        FUN_0c0278d0(a4, 0x0);
        t0 = (((struct o3AC_int *)(a4))->v);
        (((struct o3AC_uint *)(a4))->v) = (t0 + 0x1);
        if ((int)(t0 + 0x1) > (int)((((struct o3B0_int *)(a4))->v))) {
            FUN_0c02a19a(a4);
        }
    }
    return FUN_0c022838(a4);
}

int FUN_0c0b1670(int a4, int a5, int a6, int a7, float f4)
{
    register float u0;
    register int t11;

    u0 = *(float *)0xC0B1768;
    if ((int)((((struct o58_int *)(a4))->v)) < (int)0x3C) {
        (((struct o78_float *)(a4))->v) = (((((struct o78_float *)(a4))->v)) - u0);
    } else {
        if (1.0f > ((((struct o78_float *)(a4))->v))) {
            (((struct o78_float *)(a4))->v) = (((((struct o78_float *)(a4))->v)) + u0);
        } else {
            (((struct o78_float *)(a4))->v) = 1.0f;
        }
    }
    t11 = (((struct o58_int *)(a4))->v);
    (((struct o58_uint *)(a4))->v) = (t11 - 1);
    if ((int)(t11 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    FUN_0c0b1542(((((struct o60_int *)(a4))->v)), ((((struct o78_float *)(a4))->v)));
    return FUN_0c0b1542((((((struct o60_int *)(a4))->v)) + 0x1), ((((struct o78_float *)(a4))->v)));
}

int FUN_0c03ec7c(int a4, int a5, int a6, int a7)
{
    register int t10;
    register int t11;
    register int t12;
    register int t15;
    register int t16;
    register int t24;
    int t2;
    register int t3;
    register int t7;
    register int t8;

    if (((*(int *)0xC23ED50) == (*(int *)((a4 + 0x30)))) && (t2 = *(int *)((a4 + 0x34)), t3 = *(int *)0xC2462FC, (t3 & t2) == 0)) {
        t7 = 0xC2462FC;
        t8 = t2;
    } else {
        FUN_0c0e19f2();
    }
    t10 = t7;
    t11 = t8;
    t12 = 0x0;
    for (;;) {
        t15 = *(int *)((t12 + 0xC247030));
        t16 = *(int *)(((0xC246FF0 + t12) + 0x0));
        t24 = t15;
        if (t15 == 4) {
            if (((*(float *)((t16 + 0x30)))) > ((*(float *)0xC03ED84))) {
                t10 = (*(int *)0xC2462FC);
                t11 = (*(int *)((a4 + 0x34)));
                t10 = (t10 | t11);
                *(unsigned int *)0xC2462FC = t10;
            }
            t24 = 0x30;
        }
        t12 = (t12 + 0x4);
        if ((unsigned int)t12 >= (unsigned int)0x8) {
            break;
        }
    }
    return t24;
}

int FUN_0c07ba72(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x30));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c0e19f2();
            }
            t1 = t0;
            if ((((((struct o0_int *)0xC23ED5C)->v)) & 0x200) != 0) {
                t0 = (((struct o2C_int *)0xC23ED5C)->v);
                (((struct o2C_uint *)0xC23ED5C)->v) = (t0 | 0x2);
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                t1 = (t0 | 0x2);
            }
            return t1;
        }
        t0 = (((struct o58_int *)(a4))->v);
        (((struct o58_uint *)(a4))->v) = (t0 - 1);
        t1 = 0x58;
        if ((int)(t0 - 1) <= 0) {
            t0 = (((struct o2C_int *)0xC23ED5C)->v);
            (((struct o2C_uint *)0xC23ED5C)->v) = (t0 | 0x4);
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
            t1 = (t0 | 0x4);
        }
        return t1;
    }
    (((struct o2C_uint *)0xC23ED5C)->v) = 0x0;
    (((struct o58_uint *)(a4))->v) = 0x3C;
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
    return 0x58;
}

int FUN_0c07dc90(int a4, int a5, int a6, int a7)
{
    register int t6;

    if ((*(int *)((((((((struct o88_int *)(a4))->v)) << 2) + 0xC247030) + 0x0))) != 0) {
        t6 = *(int *)((((((((struct o88_int *)(a4))->v)) << 2) + 0xC246FF0) + 0x0));
        if ((((((struct o290_int *)(t6))->v)) & 0x40000000) != 0) {
            FUN_0c0e19f2();
        }
        nlPushMatrix(0x0);
        nlMultiMatrix((((((struct o3E4_int *)(t6))->v)) + 0x40));
        FUN_0c0c465c(0xB16);
        return nlPopMatrix(0x1);
    }
    return 0x88;
}

int FUN_0c020962(int a4, int a5, int a6, int a7)
{
    register int t4;
    register int t10;

    if ((*(int *)((((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247030) + 0x0))) != 0) {
        t4 = *(int *)((((((((struct oBC_int *)(a4))->v)) << 2) + 0xC246FF0) + 0x0));
        (((struct o45C_float *)(t4))->v) = (((((struct o45C_float *)(t4))->v)) + ((((struct o468_float *)(a4))->v)));
        (((struct o460_float *)(t4))->v) = (((((struct o460_float *)(t4))->v)) + ((((struct o46C_float *)(a4))->v)));
        (((struct o464_float *)(t4))->v) = (((((struct o464_float *)(t4))->v)) + ((((struct o470_float *)(a4))->v)));
        t10 = (((struct o3AC_int *)(a4))->v);
        (((struct o3AC_uint *)(a4))->v) = (t10 - 1);
        if ((int)(t10 - 1) <= 0) {
            return FUN_0c0e19f2();
        }
        return 0x3AC;
    }
    return FUN_0c0e19f2();
}

int FUN_0c07cc3a(int a4, int a5, int a6, int a7)
{
    register int t13;
    register int t17;
    register int t23;

    t13 = a4;
    if (((*(int *)0xC23ED88) & 128) != 0) {
        if ((*(int *)((a4 + 0x30))) == 0) {
            FUN_0c0cc3f8(0x1431A9, a5, a6, a7);
        } else {
            t13 = a4;
        }
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
    }
    if (((*(int *)0xC23ED88) & 128) == 0) {
        *(volatile int *)((a4 + 0x30));
        t17 = FUN_0c0e5f1c(t13);
        t23 = t17;
        if (t17 == 0) {
            FUN_0c0da2e0();
            t23 = FUN_0c0e5fe4();
            *(unsigned short *)(((0x36 + a4) + 0x0)) = t23;
        }
    } else {
        *(unsigned short *)((a4 + 0x36)) = 0xFFFFFFFF;
        t23 = 0x36;
    }
    return t23;
}
