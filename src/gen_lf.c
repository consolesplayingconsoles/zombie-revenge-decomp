/* Straight-line functions with calls and guards (batch gen_lf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0b6aa8(int a4, int a5, int a6, int a7);

int FUN_0c0b6aa8(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t22;
    register int t25;
    register int t28;
    register int t32;
    register int t36;
    register int t37;
    register int t38;
    register int t39;
    register int t40;
    register int t41;
    register int t42;
    register int t43;
    int t44;
    register int t45;
    register int t46;
    register int t47;
    int t48;
    register int t49;
    register int t50;
    register int t52;
    register int t53;
    register int t54;
    register int t55;
    register int t56;
    register int t8;
    register int t14;
    register int t15;

    t0 = *(int *)0xC2498B8;
    t1 = *(int *)0xC2498B4;
    t3 = *(int *)0xC2498D4;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)0xC2498D8);
    t4 = *(int *)0xC2498DC;
    t5 = *(int *)0xC24FAB0;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)((t5 + 0x1C)));
    t7 = *(int *)((t5 + 0x20));
    *(unsigned int *)(((int)stk + 8)) = t7;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    t9 = t7;
    t10 = 0xC24FAB0;
    t11 = a7;
    t12 = t0;
    t13 = t1;
    for (;;) {
        t16 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 16)) = (t16 + 0x4);
        t17 = *(int *)(((int)stk + 16));
        t18 = *(int *)((((t16 + 0x4) - 4) + 0x0));
        *(unsigned int *)(((int)stk + 16)) = (t17 + 0x4);
        t19 = *(int *)((((t17 + 0x4) - 4) + 0x0));
        if ((int)t19 >= 0) {
            t14 = 0x88;
            t8 = t18;
            t15 = 0x78;
            if (t8 != 16) {
                if (t8 != 32) {
                    t9 = 0x80;
                    if (t8 != t9) {
                        if (t8 != 64) {
                            t11 = 0x0;
                            t20 = t19;
                            for (;;) {
                                t20 = (t20 - 1);
                                *(unsigned char *)((t13 + 0x0)) = 0x0;
                                *(unsigned char *)((t12 + 0x0)) = t11;
                                t10 = (*(int *)(((int)stk + 12)));
                                t13 = (t13 + 0x1);
                                t10 = (t10 + 0x1);
                                *(unsigned int *)(((int)stk + 12)) = t10;
                                t12 = (t12 + 0x1);
                                if (t20 == 0) {
                                    break;
                                }
                            }
                        } else {
                            t11 = t14;
                            t22 = t19;
                            for (;;) {
                                t22 = (t22 - 1);
                                *(unsigned char *)((t13 + 0x0)) = 0x0;
                                *(unsigned char *)((t12 + 0x0)) = t11;
                                t10 = (*(int *)(((int)stk + 12)));
                                t13 = (t13 + 0x1);
                                t10 = (t10 + 0x1);
                                *(unsigned int *)(((int)stk + 12)) = t10;
                                t12 = (t12 + 0x1);
                                if (t22 == 0) {
                                    break;
                                }
                            }
                        }
                    } else {
                        t11 = t15;
                        t25 = t19;
                        for (;;) {
                            t25 = (t25 - 1);
                            *(unsigned char *)((t13 + 0x0)) = 0x0;
                            *(unsigned char *)((t12 + 0x0)) = t11;
                            t10 = (*(int *)(((int)stk + 12)));
                            t13 = (t13 + 0x1);
                            t10 = (t10 + 0x1);
                            *(unsigned int *)(((int)stk + 12)) = t10;
                            t12 = (t12 + 0x1);
                            if (t25 == 0) {
                                break;
                            }
                        }
                    }
                } else {
                    t11 = 0x0;
                    t28 = t19;
                    for (;;) {
                        t28 = (t28 - 1);
                        *(unsigned char *)((t13 + 0x0)) = t14;
                        *(unsigned char *)((t12 + 0x0)) = t11;
                        t10 = (*(int *)(((int)stk + 12)));
                        t13 = (t13 + 0x1);
                        t10 = (t10 + 0x1);
                        *(unsigned int *)(((int)stk + 12)) = t10;
                        t12 = (t12 + 0x1);
                        if (t28 == 0) {
                            break;
                        }
                    }
                }
            } else {
                t11 = 0x0;
                t32 = t19;
                for (;;) {
                    t32 = (t32 - 1);
                    *(unsigned char *)((t13 + 0x0)) = t15;
                    *(unsigned char *)((t12 + 0x0)) = t11;
                    t10 = (*(int *)(((int)stk + 12)));
                    t13 = (t13 + 0x1);
                    t10 = (t10 + 0x1);
                    *(unsigned int *)(((int)stk + 12)) = t10;
                    t12 = (t12 + 0x1);
                    if (t32 == 0) {
                        break;
                    }
                }
            }
            continue;
        }
        break;
    }
    t36 = t12;
    t37 = t13;
    for (;;) {
        t38 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 12)) = (t38 + 0x1);
        if ((int)((t38 + 0x1) - 1) >= (int)0x4B0) {
            break;
        }
        *(unsigned char *)((t37 + 0x0)) = 0x0;
        t37 = (t37 + 0x1);
        *(unsigned char *)((t36 + 0x0)) = 0x0;
        t36 = (t36 + 0x1);
    }
    t39 = ((t38 + 0x1) - 1);
    t40 = t10;
    t41 = 0x0;
    t42 = t4;
    t43 = t3;
    t44 = t37;
    t45 = 0x0;
    for (;;) {
        t46 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t46 + 0x4);
        t47 = *(int *)(((int)stk + 8));
        t48 = *(int *)((((t46 + 0x4) - 4) + 0x0));
        *(unsigned int *)(((int)stk + 8)) = (t47 + 0x4);
        t49 = *(int *)((((t47 + 0x4) - 4) + 0x0));
        if ((int)t49 >= 0) {
            t44 = (~t48);
            t50 = t49;
            for (;;) {
                t39 = (~t41);
                t41 = (t41 & t44);
                t39 = (t39 & t48);
                *(unsigned int *)((t43 + 0x0)) = t39;
                t50 = (t50 - 0x1);
                t40 = (*(int *)(((int)stk + 4)));
                t43 = (t43 + 0x4);
                t40 = (t40 + 0x4);
                *(unsigned int *)(((int)stk + 4)) = t40;
                *(unsigned int *)(((t40 - 0x4) + 0x0)) = t41;
                t40 = (t40 - 0x4);
                t41 = t48;
                *(unsigned int *)((t42 + 0x0)) = t48;
                t42 = (t42 + 0x4);
                t45 = (t45 + 0x1);
                if (t50 == 0) {
                    break;
                }
            }
            continue;
        }
        break;
    }
    t52 = t40;
    t53 = t42;
    t54 = t43;
    t55 = t45;
    for (;;) {
        t56 = ((int)t55 >= (int)0x4B0);
        t55 = (t55 + 0x1);
        if (t56) {
            break;
        }
        *(unsigned int *)((t54 + 0x0)) = 0x0;
        t54 = (t54 + 0x4);
        t52 = (*(int *)(((int)stk + 4)));
        t52 = (t52 + 0x4);
        *(unsigned int *)(((int)stk + 4)) = t52;
        *(unsigned int *)(((t52 - 0x4) + 0x0)) = 0x0;
        t52 = (t52 - 0x4);
        *(unsigned int *)((t53 + 0x0)) = 0x0;
        t53 = (t53 + 0x4);
    }
    return t8;
}

