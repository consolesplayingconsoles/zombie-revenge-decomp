/* Straight-line functions with calls and guards (batch gen_fz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
void FUN_0c0c9d34(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
void FUN_0c0cac3a(int a4, int a5, int a6, int a7, float f4, float f5);

void FUN_0c0c9d34(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    int t4;
    int t7;
    int t8;
    int t10;
    float u13;
    float u14;
    float u15;
    float u16;
    int t17;
    int t23;
    float u27;
    float u30;
    int t31;
    int t36;
    int t37;
    int t38;
    float u42;
    float u45;
    int t5;
    int t6;
    int t9;
    float u11;
    float u12;
    int t49;
    int stk[30];

    if (a4 != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x5C)) = *(struct mv3 *)((0x32C + (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC))))); }
        nlPushMatrix(0x0);
        t4 = (nlGetMatrix((((int)stk + 4) + 0x1C)));
        t7 = (a4 + 0x18);
        t8 = a7;
        t10 = a4;
        u13 = f4;
        u14 = f5;
        u15 = f6;
        u16 = f7;
        for (;;) {
            t17 = *(int *)((t7 + 0x0));
            t7 = (t7 + 0x4);
            if (t17 != 0) {
                if ((t17 & 0x80000000) != 0) {
                    t5 = t7;
                    t5 = (t5 - 4);
                    t7 = t5;
                    t7 = (t7 + 0x50);
                } else {
                    t4 = 0xC0C9E28;
                    u15 = (*(float *)((t4 + 0x0)));
                    t4 = 0xC0C9E2C;
                    u14 = (*(float *)((t4 + 0x0)));
                    t4 = 0xC0C9E30;
                    u13 = (*(float *)((t4 + 0x0)));
                    t9 = 0x10;
                    t10 = 0xC20A26C;
                    t8 = 0xC20A268;
                    u16 = 0.0f;
                    if ((t17 & t9) != 0) {
                        t9 = (*(int *)((t7 + 0x0)));
                        t7 = (t7 + 0x4);
                        t23 = t7;
                        for (;;) {
                            if (((*(int *)((t23 + 0x0))) & 0x1) == 0) {
                                t23 = (t23 + 0x8);
                            } else {
                                t4 = 0x8;
                                u12 = (*(float *)((t8 + 0x0)));
                                u11 = (*(float *)((t23 + t4)));
                                t4 = 0x18;
                                u27 = u12;
                                u27 = u27 + u14 * u11;
                                u12 = u27;
                                u12 = (u12 + u16);
                                *(float *)((t23 + t4)) = u12;
                                t4 = 0x4;
                                u11 = (*(float *)((t23 + t4)));
                                t4 = 0x1C;
                                u12 = (*(float *)((t10 + 0x0)));
                                u30 = u12;
                                u30 = u30 + u15 * u11;
                                u12 = u30;
                                u12 = (u12 + u13);
                                *(float *)((t23 + t4)) = u12;
                                t31 = (t23 + 0x1C);
                                t23 = (t23 + 0x20);
                                t6 = (*(int *)((t31 + 0x0)));
                                t6 = (t6 | 0x1);
                                *(unsigned int *)((t31 + 0x0)) = t6;
                            }
                            t9 = (t9 - 0x1);
                            if (t9 == 0) {
                                break;
                            }
                        }
                        t49 = t23;
                    } else {
                        t9 = 0x8;
                        if ((t17 & t9) == 0) {
                            break;
                        }
                        t9 = (*(int *)((t7 + 0x0)));
                        t7 = (t7 + 0x4);
                        t36 = t9;
                        t9 = (t9 << 1);
                        t9 = (t9 + t36);
                        t37 = t36;
                        t38 = t7;
                        for (;;) {
                            t6 = (*(int *)((t38 + 0x0)));
                            if ((t6 & 0x1) == 0) {
                                t38 = (t38 + 0x8);
                            } else {
                                t4 = 0x8;
                                u12 = (*(float *)((t8 + 0x0)));
                                u11 = (*(float *)((t38 + t4)));
                                t4 = 0x18;
                                t37 = t38;
                                u42 = u12;
                                u42 = u42 + u14 * u11;
                                u12 = u42;
                                t37 = (t37 + 0x1C);
                                u12 = (u12 + u16);
                                *(float *)((t38 + t4)) = u12;
                                t4 = 0x4;
                                u11 = (*(float *)((t38 + t4)));
                                t4 = 0x1C;
                                u12 = (*(float *)((t10 + 0x0)));
                                u45 = u12;
                                u45 = u45 + u15 * u11;
                                u12 = u45;
                                u12 = (u12 + u13);
                                *(float *)((t38 + t4)) = u12;
                                t38 = (t38 + 0x20);
                                t6 = (*(int *)((t37 + 0x0)));
                                t6 = (t6 | 0x1);
                                *(unsigned int *)((t37 + 0x0)) = t6;
                            }
                            t9 = (t9 - 0x1);
                            if (t9 == 0) {
                                break;
                            }
                        }
                        t49 = t38;
                    }
                    t7 = t49;
                }
                continue;
            }
            t6 = 0xC0DC4C0;
            t4 = (nlPopMatrix(0x1));
            return;
        }
        for (;;) {
        }
    }
}

void FUN_0c0cac3a(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t3;
    int t4;
    int t6;
    int t8;
    int t9;
    int t13;
    int t17;
    int t18;
    int t19;
    int t20;
    int t0;
    int t1;
    int t2;
    float u5;
    int t27;

    if (a4 != 0) {
        t3 = (a4 + 0x18);
        t4 = a7;
        for (;;) {
            t6 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            if (t6 == 0) {
                return;
            }
            if ((t6 & 0x80000000) != 0) {
                t1 = t3;
                t1 = (t1 - 4);
                t3 = t1;
                t3 = (t3 + 0x50);
            } else {
                t2 = t6;
                t4 = 0x10;
                if ((t2 & t4) != 0) {
                    t8 = *(int *)((t3 + 0x0));
                    t3 = (t3 + 0x4);
                    t4 = t8;
                    t9 = t3;
                    for (;;) {
                        if (((*(int *)((t9 + 0x0))) & 0x1) == 0) {
                            t9 = (t9 + 0x8);
                        } else {
                            t0 = 0x18;
                            u5 = (*(float *)((t9 + t0)));
                            u5 = (u5 + f4);
                            *(float *)((t9 + t0)) = u5;
                            t0 = 0x1C;
                            u5 = (*(float *)((t9 + t0)));
                            u5 = (u5 + f5);
                            *(float *)((t9 + t0)) = u5;
                            t13 = (t9 + 0x1C);
                            t9 = (t9 + 0x20);
                            t2 = (*(int *)((t13 + 0x0)));
                            t2 = (t2 | 0x1);
                            *(unsigned int *)((t13 + 0x0)) = t2;
                        }
                        t4 = (t4 - 0x1);
                        if (t4 == 0) {
                            break;
                        }
                    }
                    t27 = t9;
                } else {
                    t4 = 0x8;
                    if ((t6 & t4) == 0) {
                        break;
                    }
                    t17 = *(int *)((t3 + 0x0));
                    t3 = (t3 + 0x4);
                    t4 = t17;
                    t18 = t4;
                    t4 = (t4 << 1);
                    t4 = (t4 + t18);
                    t19 = t18;
                    t20 = t3;
                    for (;;) {
                        t2 = (*(int *)((t20 + 0x0)));
                        if ((t2 & 0x1) == 0) {
                            t20 = (t20 + 0x8);
                        } else {
                            t0 = 0x18;
                            t19 = t20;
                            u5 = (*(float *)((t20 + t0)));
                            t19 = (t19 + 0x1C);
                            u5 = (u5 + f4);
                            *(float *)((t20 + t0)) = u5;
                            t0 = 0x1C;
                            u5 = (*(float *)((t20 + t0)));
                            u5 = (u5 + f5);
                            *(float *)((t20 + t0)) = u5;
                            t20 = (t20 + 0x20);
                            t2 = (*(int *)((t19 + 0x0)));
                            t2 = (t2 | 0x1);
                            *(unsigned int *)((t19 + 0x0)) = t2;
                        }
                        t4 = (t4 - 0x1);
                        if (t4 == 0) {
                            break;
                        }
                    }
                    t27 = t20;
                }
                t3 = t27;
            }
        }
        for (;;) {
        }
    }
}
