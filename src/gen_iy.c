/* Straight-line functions with calls and guards (batch gen_iy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c05a98a(int);
int FUN_0c06722e(int);
int FUN_0c0c475c(int, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int, int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int FUN_0c0b46e0(int a4, int a5, int a6, int a7);
int FUN_0c063d38(int a4, int a5, int a6, int a7);
int FUN_0c06b97c(int a4, int a5, int a6, int a7);
int FUN_0c07b9b4(int a4, int a5, int a6, int a7);

int FUN_0c0b46e0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(int *)((a4 + 0xA4));
    t1 = *(int *)0xC247CAC;
    *(unsigned int *)((a4 + 0xA4)) = (t0 + 0x1);
    if ((t0 & 0x1) == 0) {
        *(unsigned int *)((a4 + 0x78)) = ((*(int *)((a4 + 0xA0))) + 0xC5F);
        t0 = *(int *)((a4 + 0xA0));
        *(unsigned int *)((a4 + 0xA0)) = (t0 + 0x1);
        if ((int)(t0 + 0x1) > (int)0x1F) {
            FUN_0c0e19f2(a4, a5, a6, a7);
        }
    }
    if ((int)(*(int *)((a4 + 0xA4))) > (int)0x28) {
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + 0.0299999993f);
    }
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 0.049999997f);
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    nlRotateAY((*(short *)((t1 + 0x3CE))));
    nlRotateAX((*(short *)((t1 + 0x3CC))));
    u0 = *(float *)((a4 + 0x74));
    nlScale(u0, u0, u0);
    FUN_0c0de000((*(float *)((a4 + 0x74))));
    FUN_0c0c475c((*(int *)((a4 + 0x78))), (*(float *)0xC0B47DC));
    return nlPopMatrix(0x1);
}

int FUN_0c063d38(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030));
    if ((t0 != 4) && (t0 != 2)) {
        FUN_0c0e19f2(t0, a5, a6, a7);
    }
    t0 = *(int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0));
    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4);
        *(unsigned int *)((a4 + 0x1EC)) = ((*(int *)((a4 + 0x1EC))) & (~(*(int *)(((0x1C4 + a4) + 0x0)))));
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
        *(unsigned int *)((a4 + 0x22C)) = 0x3C;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    *(float *)((a4 + 0x30)) = (*(float *)(((*(int *)((a4 + 0x230))) + 0x0)));
    *(float *)((a4 + 0x34)) = (*(float *)(((*(int *)((a4 + 0x230))) + 0x4)));
    *(float *)((a4 + 0x38)) = (*(float *)(((*(int *)((a4 + 0x230))) + 0x8)));
    FUN_0c01cdc2(a4);
    t1 = 0x22C;
    if ((int)(*(int *)((a4 + 0x22C))) > 0) {
        t2 = *(int *)((a4 + 0x22C));
        *(unsigned int *)((a4 + 0x22C)) = (t2 - 1);
        t3 = 0x22C;
        if ((int)(t2 - 1) <= 0) {
            *(unsigned int *)((a4 + 0x1EC)) = (*(int *)((t0 + 0x1EC)));
            t3 = 0x1EC;
        }
        t1 = t3;
    }
    return t1;
}

int FUN_0c06b97c(int a4, int a5, int a6, int a7)
{
    register int t8;
    register int t57;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t18;
    register int t49;
    register int t16;
    int t17;
    register int t20;
    register int t21;
    register int t22;
    register int t45;
    register int t46;
    register int t48;

    if (((*(int *)0xC23ED5C) & 32) != 0) {
        *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFBFFFF);
        *(unsigned int *)0xC2475B0 = ((*(int *)0xC2475B0) & 0xFFFFFFFB);
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    t8 = *(int *)0xC23ED9C;
    t57 = 0xE;
    if (((int)t8 < (int)0xB) || ((int)t8 > (int)0xE)) {
        t11 = *(int *)0xC2475B0;
        if ((t11 & 4) != 0) {
            t12 = t11;
            t13 = 0xC23ED9C;
            t14 = 0xB;
            t15 = a5;
            t18 = 0x0;
            for (;;) {
                if ((int)t18 >= (int)0x2) {
                    break;
                }
                t15 = 0xC246FF0;
                t14 = t15;
                t14 = (t14 + 0x40);
                t12 = (*(int *)((((t18 << 2) + t14) + 0x0)));
                t17 = 0x1;
                t17 = ((int)t17 << (int)t18);
                if ((t12 == 4) && (t20 = (t12 == 4), t12 = 0x68, t21 = *(int *)((a4 + t12)), t22 = ((t18 << 2) + t14), t14 = t21, (t14 & t17) == 0)) {
                    t16 = 0xC06722E;
                    t12 = (FUN_0c06722e(t18));
                    t12 = 0x68;
                    t14 = (*(int *)((a4 + t12)));
                    t14 = (t14 | t17);
                    *(unsigned int *)((a4 + t12)) = t14;
                    t14 = (*(int *)0xC23ED88);
                    t14 = (t14 | 0x40000);
                    *(unsigned int *)0xC23ED88 = t14;
                    t45 = 0xC06722E;
                } else {
                    t12 = (*(int *)((((t18 << 2) + t14) + 0x0)));
                    if (t12 != 4) {
                        t12 = 0x68;
                        t13 = (*(int *)((a4 + t12)));
                        if ((t13 & t17) != 0) {
                            t13 = (*(int *)((a4 + t12)));
                            t17 = (~t17);
                            t13 = (t13 & t17);
                            *(unsigned int *)((a4 + t12)) = t13;
                            t14 = (*(int *)0xC23ED88);
                            t14 = (t14 | 0x40000);
                            *(unsigned int *)0xC23ED88 = t14;
                        }
                    }
                    t45 = t16;
                    t46 = t13;
                    t48 = t15;
                }
                t16 = t45;
                t18 = (t18 + 0x1);
                t13 = t46;
                t15 = t48;
            }
            t49 = t12;
        } else {
            t49 = t11;
        }
        t57 = t49;
    }
    return t57;
}

int FUN_0c07b9b4(int a4, int a5, int a6, int a7)
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
                return FUN_0c0e19f2(a4, 0xC23ED88, a6, a7);
            }
            t1 = t0;
            if (((*(int *)0xC23ED5C) & 0x200) != 0) {
                t0 = *(int *)0xC23ED88;
                *(unsigned int *)0xC23ED88 = (t0 | 0x8);
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                t1 = (t0 | 0x8);
            }
            return t1;
        }
        t0 = *(int *)((a4 + 0x58));
        *(unsigned int *)((a4 + 0x58)) = (t0 - 1);
        t1 = 0x58;
        if ((int)(t0 - 1) <= 0) {
            t0 = *(int *)0xC23ED88;
            *(unsigned int *)0xC23ED88 = (t0 | 0x4);
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
            t1 = (t0 | 0x4);
        }
        return t1;
    }
    *(unsigned int *)0xC23ED88 = 0x1;
    *(unsigned int *)((a4 + 0x58)) = 0x96;
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
    return 0x58;
}
