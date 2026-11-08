/* Straight-line functions with calls and guards (batch gen_abq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e262a(int);
int FUN_0c0be578(int a4, int a5);

int FUN_0c0be578(int a4, int a5)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t11;
    register int t14;
    register int t15;
    register int t16;
    int t17;
    register int t18;
    register int t19;
    register int t21;
    register int t28;
    register int t41;
    register int t42;
    register float u20;
    register int t55;

    t1 = *(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0));
    t2 = *(int *)(((((a4 << 1) + a4) << 2) + 0xC24FB54));
    t3 = *(int *)((t1 + ((((unsigned int)t2 >> 2) - 1) << 2)));
    t4 = ((((unsigned int)t2 >> 2) - 1) << 2);
    t5 = (t1 + 0x18);
    t6 = t1;
    t7 = 0x0;
    for (;;) {
        if ((*(int *)((t5 + 0x0))) == 0) {
            break;
        }
        t4 = 0x4C;
        t6 = (*(int *)((t5 + t4)));
        t5 = (t5 + 0x50);
        t7 = (t7 + 0x1);
        t6 = ((unsigned int)t6 >> 2);
        t6 = (t6 << 2);
        t5 = (t5 + t6);
    }
    t11 = FUN_0c0e262a(((t7 << 2) << 2));
    t15 = FUN_0c0e262a(((((t3 << 2) << 1) + t3) << 2));
    *(unsigned int *)((a5 + 0x0)) = t11;
    *(unsigned int *)((a5 + 0x4)) = t7;
    t14 = t15;
    t16 = (t1 + 0x18);
    t17 = t7;
    t18 = (t11 - 16);
    t19 = 0x0;
    for (;;) {
        t21 = *(int *)((t16 + 0x0));
        t16 = (t16 + 0x4);
        if (t21 == 0) {
            *(unsigned int *)((t18 + 0xC)) = t19;
            return t14;
        }
        if ((t21 & 0x80000000) != 0) {
            if (t19 != 0) {
                *(unsigned int *)((t18 + 0xC)) = t19;
                t19 = 0x0;
            }
            t18 = (t18 + 0x10);
            t14 = 0x28;
            *(unsigned int *)((t18 + 0x0)) = (t16 - 4);
            t16 = (t16 - 4);
            *(unsigned int *)((t18 + 0x4)) = t15;
            u20 = (*(float *)(((*(int *)((t18 + 0x0))) + t14)));
            t14 = 0x8;
            *(float *)((t18 + t14)) = u20;
            t16 = (t16 + 0x50);
        } else {
            t17 = 0x10;
            if ((t21 & t17) != 0) {
                t17 = (*(int *)((t16 + 0x0)));
                t16 = (t16 + 0x4);
                t28 = t16;
                for (;;) {
                    if (((*(int *)((t28 + 0x0))) & 0x1) == 0) {
                        t28 = (t28 + 0x8);
                    } else {
                        t14 = 0x4;
                        *(unsigned int *)((t15 + 0x0)) = t28;
                        u20 = (*(float *)((t28 + 0x0)));
                        t19 = (t19 + 0x1);
                        *(float *)((t15 + t14)) = u20;
                        u20 = (*(float *)((t28 + t14)));
                        t14 = 0x8;
                        *(float *)((t15 + t14)) = u20;
                        u20 = (*(float *)((t28 + t14)));
                        t14 = 0xC;
                        *(float *)((t15 + t14)) = u20;
                        u20 = (*(float *)((t28 + t14)));
                        t14 = 0x10;
                        *(float *)((t15 + t14)) = u20;
                        u20 = (*(float *)((t28 + t14)));
                        t14 = 0x14;
                        *(float *)((t15 + t14)) = u20;
                        u20 = (*(float *)((t28 + t14)));
                        t14 = 0x18;
                        *(float *)((t15 + t14)) = u20;
                        u20 = (*(float *)((t28 + t14)));
                        t14 = 0x1C;
                        *(float *)((t15 + t14)) = u20;
                        u20 = (*(float *)((t28 + t14)));
                        t14 = 0x20;
                        t28 = (t28 + 0x20);
                        *(float *)((t15 + t14)) = u20;
                        t15 = (t15 + 0x24);
                    }
                    t17 = (t17 - 0x1);
                    if (t17 == 0) {
                        break;
                    }
                }
                t55 = t28;
            } else {
                t17 = 0x8;
                if ((t21 & t17) == 0) {
                    break;
                }
                t17 = (*(int *)((t16 + 0x0)));
                t16 = (t16 + 0x4);
                t41 = t17;
                t17 = (t17 << 1);
                t17 = (t17 + t41);
                t42 = t16;
                for (;;) {
                    if (((*(int *)((t42 + 0x0))) & 0x1) == 0) {
                        t42 = (t42 + 0x8);
                    } else {
                        t14 = 0x4;
                        *(unsigned int *)((t15 + 0x0)) = t42;
                        u20 = (*(float *)((t42 + 0x0)));
                        t19 = (t19 + 0x1);
                        *(float *)((t15 + t14)) = u20;
                        u20 = (*(float *)((t42 + t14)));
                        t14 = 0x8;
                        *(float *)((t15 + t14)) = u20;
                        u20 = (*(float *)((t42 + t14)));
                        t14 = 0xC;
                        *(float *)((t15 + t14)) = u20;
                        u20 = (*(float *)((t42 + t14)));
                        t14 = 0x10;
                        *(float *)((t15 + t14)) = u20;
                        u20 = (*(float *)((t42 + t14)));
                        t14 = 0x14;
                        *(float *)((t15 + t14)) = u20;
                        u20 = (*(float *)((t42 + t14)));
                        t14 = 0x18;
                        *(float *)((t15 + t14)) = u20;
                        u20 = (*(float *)((t42 + t14)));
                        t14 = 0x1C;
                        *(float *)((t15 + t14)) = u20;
                        u20 = (*(float *)((t42 + t14)));
                        t14 = 0x20;
                        t42 = (t42 + 0x20);
                        *(float *)((t15 + t14)) = u20;
                        t15 = (t15 + 0x24);
                    }
                    t17 = (t17 - 0x1);
                    if (t17 == 0) {
                        break;
                    }
                }
                t55 = t42;
            }
            t16 = t55;
        }
    }
    for (;;) {
    }
}
