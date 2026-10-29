/* Straight-line functions with calls and guards (batch gen_ci): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01843e(int, int, int, int);
int FUN_0c038732(int, int, int, int, int, int, int);
int FUN_0c039288(int, int, int);
int FUN_0c039354(int);
int FUN_0c0c710e(int, int, int, float, float);
int FUN_0c0c73e6(int, float, float);
int FUN_0c0cc3f8(int);
int FUN_0c0e19f2(int, int, int);
int FUN_0c0e5f1c(int);
int _quick_odd_mvn(int, int, float);
int FUN_0c01906a(int a4, int a5, int a6, int a7);
int FUN_0c039804(int a4);
int FUN_0c0ba09c(int a4, int a5, int a6);
int FUN_0c0a8f48(int a4, int a5);

int FUN_0c01906a(int a4, int a5, int a6, int a7)
{
    int t0;
    float u5;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    float u14;
    int t16;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;

    t0 = *(int *)0xC23EE54;
    FUN_0c01843e(a4, a5, a6, a7);
    if ((*(int *)((a4 + 0x21C))) == 0) {
        if (((*(int *)0xC23ED5C) & 0x80000) != 0) {
            *(unsigned int *)((a4 + 0x21C)) = 0x1;
            u5 = *(float *)((t0 + 0x38));
            if ((*(int *)((a4 + 0x238))) != (int)((float)(int)u5 / 200.0f)) {
                *(unsigned int *)((a4 + 0x238)) = (int)((float)(int)u5 / 200.0f);
                t7 = *(int *)((t0 + 0xAC));
                t9 = 0x10;
                t10 = (((((0xF & (t7 + (int)((float)(int)u5 / 200.0f))) << 2) << 2) << 1) + 0xC23EE58);
                t11 = (((((0xF & (t7 + (int)((float)(int)u5 / 200.0f))) << 2) << 2) << 1) + (*(int *)((a4 + 0x22C))));
                for (;;) {
                    t12 = *(short *)((t11 + 0x0));
                    t11 = (t11 + 0x2);
                    t9 = (t9 - 1);
                    *(unsigned short *)((t10 + 0x0)) = t12;
                    t10 = (t10 + 0x2);
                    if (t9 == 0) {
                        break;
                    }
                }
                t13 = *(int *)((a4 + 0x230));
                *(unsigned int *)((a4 + 0x230)) = (t13 - 1);
                if ((int)(t13 - 1) <= 0) {
                    return FUN_0c0e19f2(t9, t10, t11);
                }
                return 0x230;
            }
            return 0x238;
        }
        return 0x21C;
    }
    u14 = *(float *)((t0 + 0x38));
    if ((*(int *)((a4 + 0x238))) != (int)((float)(int)u14 / 200.0f)) {
        *(unsigned int *)((a4 + 0x238)) = (int)((float)(int)u14 / 200.0f);
        t16 = *(int *)((t0 + 0xAC));
        t18 = 0x10;
        t19 = (((((0xF & (t16 + (int)((float)(int)u14 / 200.0f))) << 2) << 2) << 1) + 0xC23EE58);
        t20 = (((((0xF & (t16 + (int)((float)(int)u14 / 200.0f))) << 2) << 2) << 1) + (*(int *)((a4 + 0x22C))));
        for (;;) {
            t21 = *(short *)((t20 + 0x0));
            t20 = (t20 + 0x2);
            t18 = (t18 - 1);
            *(unsigned short *)((t19 + 0x0)) = t21;
            t19 = (t19 + 0x2);
            if (t18 == 0) {
                break;
            }
        }
        t22 = *(int *)((a4 + 0x230));
        *(unsigned int *)((a4 + 0x230)) = (t22 - 1);
        if ((int)(t22 - 1) <= 0) {
            return FUN_0c0e19f2(t18, t19, t20);
        }
        return 0x230;
    }
    return 0x238;
}

int FUN_0c039804(int a4)
{
    int t1;
    int t2;
    int t5;
    int t10;
    int t12;
    int t8;

    t1 = *(int *)((a4 + 0xC4));
    t2 = *(int *)((((*(int *)((a4 + 0xC0))) << 2) + 0xC195AFC));
    if ((*(int *)((a4 + 0x5CC))) != 0) {
        t5 = *(int *)((a4 + 0xC8));
        if ((t5 & 64) == 0) {
            *(unsigned int *)((a4 + 0x580)) = 0x0;
            t10 = 0x580;
            t12 = 0x0;
            if ((*(int *)(((((*(int *)((a4 + 0x580))) << 2) + (0x5D0 + a4)) + 0x0))) == 0) {
                t8 = FUN_0c039354(a4);
                t10 = (FUN_0c039354(a4));
                t12 = t8;
            }
            if (t12 != 0) {
                FUN_0c038732(a4, 0x1, 0x1, 0x1, 0xA, (((t1 * 0x28A) + t2) + 0x1EA), 0x0);
                FUN_0c039288(a4, 0x1, 0x0);
                return FUN_0c0cc3f8(0x12CA9);
            }
            return t10;
        }
        return t5;
    }
    return 0x5CC;
}

int FUN_0c0ba09c(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t4;
    float u16;
    int t26;
    int t28;
    int t24;

    if ((*(int *)((a4 + 0x80))) == 0) {
        t1 = *(int *)((a4 + 0xA0));
        *(unsigned int *)((a4 + 0xA0)) = (t1 + 0x1);
        if (((t1 + 0x1) & 0x1F) == 0) {
            t2 = *(int *)(((0xA8 + a4) + 0x0));
            *(unsigned int *)((a4 + 0xA4)) = ((*(int *)((a4 + 0xA4))) | (((int)t2 >= 0) ? (0x1 << (t2 & 31)) : ((-(int)t2 & 31) ? ((int)0x1 >> (-(int)t2 & 31)) : ((int)0x1 >> 31))));
            t4 = *(int *)((a4 + 0xA8));
            *(unsigned int *)((a4 + 0xA8)) = (t4 + 0x1);
            if ((int)(t4 + 0x1) > (int)0x6) {
                *(unsigned int *)((a4 + 0x80)) = 0x1;
            }
        }
    }
    u16 = *(float *)0xC0BA1A0;
    if ((0x1 & (*(int *)((a4 + 0xA4)))) != 0) {
        FUN_0c0c710e(0xC112724, a5, a6, (*(float *)((a4 + 0x30))), u16);
    } else {
        t24 = 0x1;
    }
    t26 = *(int *)((a4 + 0xA4));
    if ((t26 & 2) != 0) {
        *(volatile int *)((a4 + 0xAC));
        t28 = FUN_0c0e5f1c(t24);
        return FUN_0c0c73e6(t28, ((*(float *)((a4 + 0x30))) + (*(float *)0xC0BA1B0)), u16);
    }
    return t26;
}

