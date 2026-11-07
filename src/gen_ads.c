/* Straight-line functions with calls and guards (batch gen_ads): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e262a(int);
int FUN_0c0be338(int a4, int a5);

int FUN_0c0be338(int a4, int a5)
{
    register int t1;
    register int t3;
    register int t5;
    register int t6;
    register int t9;
    int t11;
    register int t12;
    register int t13;
    register int t15;
    register int t17;
    register int t18;
    register int t29;
    register int t31;
    register int t7;
    register int t8;
    register int t10;
    register float u14;
    register int t43;

    t1 = *(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0));
    t3 = *(int *)((t1 + ((((unsigned int)(*(int *)(((((a4 << 1) + a4) << 2) + 0xC24FB54))) >> 2) - 1) << 2)));
    t5 = FUN_0c0e262a(((((t3 << 2) << 1) + t3) << 2));
    t6 = t5;
    t9 = t5;
    t11 = t10;
    t12 = 0x0;
    t13 = (t1 + 0x18);
    for (;;) {
        t15 = *(int *)((t13 + 0x0));
        t13 = (t13 + 0x4);
        if (t15 == 0) {
            t8 = t5;
            *(unsigned int *)((a5 + 0x0)) = t8;
            *(unsigned int *)((a5 + 0x4)) = t12;
            return t6;
        }
        if ((t15 & 0x80000000) != 0) {
            t7 = t13;
            t7 = (t7 - 4);
            t13 = t7;
            t13 = (t13 + 0x50);
        } else {
            t11 = 0x10;
            if ((t15 & t11) != 0) {
                t17 = *(int *)((t13 + 0x0));
                t13 = (t13 + 0x4);
                t11 = t17;
                t18 = t13;
                for (;;) {
                    t8 = (*(int *)((t18 + 0x0)));
                    if ((t8 & 0x1) == 0) {
                        t18 = (t18 + 0x8);
                    } else {
                        t6 = 0x4;
                        *(unsigned int *)((t9 + 0x0)) = t18;
                        u14 = (*(float *)((t18 + 0x0)));
                        t12 = (t12 + 0x1);
                        *(float *)((t9 + t6)) = u14;
                        u14 = (*(float *)((t18 + t6)));
                        t6 = 0x8;
                        *(float *)((t9 + t6)) = u14;
                        u14 = (*(float *)((t18 + t6)));
                        t6 = 0xC;
                        *(float *)((t9 + t6)) = u14;
                        u14 = (*(float *)((t18 + t6)));
                        t6 = 0x10;
                        *(float *)((t9 + t6)) = u14;
                        u14 = (*(float *)((t18 + t6)));
                        t6 = 0x14;
                        *(float *)((t9 + t6)) = u14;
                        u14 = (*(float *)((t18 + t6)));
                        t6 = 0x18;
                        *(float *)((t9 + t6)) = u14;
                        u14 = (*(float *)((t18 + t6)));
                        t6 = 0x1C;
                        *(float *)((t9 + t6)) = u14;
                        u14 = (*(float *)((t18 + t6)));
                        t6 = 0x20;
                        t18 = (t18 + 0x20);
                        *(float *)((t9 + t6)) = u14;
                        t9 = (t9 + 0x24);
                    }
                    t11 = (t11 - 0x1);
                    if (t11 == 0) {
                        break;
                    }
                }
                t43 = t18;
            } else {
                t11 = 0x8;
                if ((t15 & t11) == 0) {
                    break;
                }
                t29 = *(int *)((t13 + 0x0));
                t13 = (t13 + 0x4);
                t11 = t29;
                t8 = t11;
                t11 = (t11 << 1);
                t11 = (t11 + t8);
                t31 = t13;
                for (;;) {
                    if (((*(int *)((t31 + 0x0))) & 0x1) == 0) {
                        t31 = (t31 + 0x8);
                    } else {
                        t6 = 0x4;
                        *(unsigned int *)((t9 + 0x0)) = t31;
                        u14 = (*(float *)((t31 + 0x0)));
                        t12 = (t12 + 0x1);
                        *(float *)((t9 + t6)) = u14;
                        u14 = (*(float *)((t31 + t6)));
                        t6 = 0x8;
                        *(float *)((t9 + t6)) = u14;
                        u14 = (*(float *)((t31 + t6)));
                        t6 = 0xC;
                        *(float *)((t9 + t6)) = u14;
                        u14 = (*(float *)((t31 + t6)));
                        t6 = 0x10;
                        *(float *)((t9 + t6)) = u14;
                        u14 = (*(float *)((t31 + t6)));
                        t6 = 0x14;
                        *(float *)((t9 + t6)) = u14;
                        u14 = (*(float *)((t31 + t6)));
                        t6 = 0x18;
                        *(float *)((t9 + t6)) = u14;
                        u14 = (*(float *)((t31 + t6)));
                        t6 = 0x1C;
                        *(float *)((t9 + t6)) = u14;
                        u14 = (*(float *)((t31 + t6)));
                        t6 = 0x20;
                        t31 = (t31 + 0x20);
                        *(float *)((t9 + t6)) = u14;
                        t9 = (t9 + 0x24);
                    }
                    t11 = (t11 - 0x1);
                    if (t11 == 0) {
                        break;
                    }
                }
                t43 = t31;
            }
            t13 = t43;
        }
    }
    for (;;) {
    }
}
