/* Straight-line functions with calls and guards (batch gen_qu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e262a(int);
int FUN_0c0e2794(int, int);
void FUN_0c076cc0(int a4, int a5, int a6, int a7, float f4, float f5);

void FUN_0c076cc0(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register int t0;
    register int t2;
    register int t3;
    register int t5;
    register int t10;
    register int t15;
    register int t17;
    register int t19;
    int t21;
    register int t22;
    register int t23;
    register int t24;
    register int t27;
    register int t29;
    register int t30;
    register int t44;
    register int t52;
    register int t58;
    register int t60;
    register int t74;
    register int t82;
    register float u103;
    register float u107;
    register float u111;
    register float u115;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t16;
    register int t18;
    int t20;
    register float u25;
    register float u26;

    t0 = *(int *)0xC0FFBA4;
    t2 = *(int *)((((((t0 << 1) + t0) << 2) + 0xC2623A0) + 0x0));
    if (t2 == 0) {
    } else {
        t3 = *(short *)((((((t0 << 1) + t0) << 2) + 0xC2623A0) + 0xA));
        t5 = FUN_0c0e19aa(0xC076B0C, 0x74, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t5);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t5 + 0x30)) = *(struct mv3 *)(0xC0FFB98); }
        *(unsigned short *)((t5 + 0x3C)) = t0;
        *(unsigned short *)((t5 + 0x3E)) = (unsigned short)t3;
        *(unsigned int *)(((0x40 + t5) + 0x0)) = (FUN_0c0e262a(((unsigned short)t3 << 2)));
        t10 = (FUN_0c0e2794(t5, (*(int *)((t5 + 0x40)))));
        t15 = t14;
        t17 = t16;
        t19 = t18;
        t21 = t2;
        t22 = (t2 + 0x18);
        t23 = 0x0;
        t24 = 0xC0FFB98;
        for (;;) {
            t27 = *(int *)((t22 + 0x0));
            t22 = (t22 + 0x4);
            if (t27 == 0) {
                break;
            }
            t21 = 0x80000000;
            t13 = t27;
            if ((t13 & t21) != 0) {
                t11 = t22;
                t11 = (t11 - 4);
                t22 = t11;
                t22 = (t22 + 0x50);
            } else {
                t12 = t27;
                t20 = 0x10;
                t21 = 0x1;
                if ((t12 & t20) != 0) {
                    t29 = *(int *)((t22 + 0x0));
                    t22 = (t22 + 0x4);
                    t20 = t29;
                    t30 = t22;
                    for (;;) {
                        t13 = (*(int *)((t30 + 0x0)));
                        if ((t13 & t21) == 0) {
                            t30 = (t30 + 0x8);
                        } else {
                            if (t23 == 0) {
                                t24 = t30;
                                t15 = t30;
                                t17 = t30;
                                t19 = t30;
                            } else {
                                u25 = (*(float *)((t19 + 0x0)));
                                u26 = (*(float *)((t30 + 0x0)));
                                t44 = u26 > u25;
                                u26 = (*(float *)((t30 + 0x0)));
                                if (t44) {
                                    t19 = t30;
                                }
                                u25 = (*(float *)((t24 + 0x0)));
                                t10 = 0x8;
                                if (u25 > u26) {
                                    t24 = t30;
                                }
                                u25 = (*(float *)((t15 + t10)));
                                u26 = (*(float *)((t30 + t10)));
                                t52 = u26 > u25;
                                u26 = (*(float *)((t30 + t10)));
                                if (t52) {
                                    t15 = t30;
                                }
                                u25 = (*(float *)((t17 + t10)));
                                if (u25 > u26) {
                                    t17 = t30;
                                }
                            }
                            t10 = 0x40;
                            t12 = t23;
                            t10 = (*(int *)((t5 + t10)));
                            t12 = (t12 << 2);
                            t23 = (t23 + 0x1);
                            *(unsigned int *)((t12 + t10)) = t30;
                            t30 = (t30 + 0x20);
                        }
                        t20 = (t20 - 0x1);
                        if (t20 == 0) {
                            break;
                        }
                    }
                    t22 = t30;
                } else {
                    t20 = 0x8;
                    if ((t27 & t20) != 0) {
                        t58 = *(int *)((t22 + 0x0));
                        t22 = (t22 + 0x4);
                        t20 = t58;
                        t13 = t20;
                        t20 = (t20 << 1);
                        t20 = (t20 + t13);
                        t60 = t22;
                        for (;;) {
                            t12 = (*(int *)((t60 + 0x0)));
                            if ((t12 & t21) == 0) {
                                t60 = (t60 + 0x8);
                            } else {
                                if (t23 == 0) {
                                    t24 = t60;
                                    t15 = t60;
                                    t17 = t60;
                                    t19 = t60;
                                } else {
                                    u25 = (*(float *)((t19 + 0x0)));
                                    u26 = (*(float *)((t60 + 0x0)));
                                    t74 = u26 > u25;
                                    u26 = (*(float *)((t60 + 0x0)));
                                    if (t74) {
                                        t19 = t60;
                                    }
                                    u25 = (*(float *)((t24 + 0x0)));
                                    t10 = 0x8;
                                    if (u25 > u26) {
                                        t24 = t60;
                                    }
                                    u25 = (*(float *)((t15 + t10)));
                                    u26 = (*(float *)((t60 + t10)));
                                    t82 = u26 > u25;
                                    u26 = (*(float *)((t60 + t10)));
                                    if (t82) {
                                        t15 = t60;
                                    }
                                    u25 = (*(float *)((t17 + t10)));
                                    if (u25 > u26) {
                                        t17 = t60;
                                    }
                                }
                                t10 = 0x40;
                                t12 = t23;
                                t10 = (*(int *)((t5 + t10)));
                                t12 = (t12 << 2);
                                t23 = (t23 + 0x1);
                                *(unsigned int *)((t12 + t10)) = t60;
                                t60 = (t60 + 0x20);
                            }
                            t20 = (t20 - 0x1);
                            if (t20 == 0) {
                                break;
                            }
                        }
                        t22 = t60;
                    }
                }
            }
        }
        *(float *)((t5 + 0x44)) = (((*(float *)((t19 + 0x0))) - (*(float *)((t24 + 0x0)))) / (1.0f + 1.0f));
        *(float *)((t5 + 0x48)) = (((*(float *)((t15 + 0x8))) - (*(float *)((t17 + 0x8)))) / (1.0f + 1.0f));
        *(float *)((t5 + 0x54)) = (((((*(float *)((t19 + 0x18))) + (*(float *)((t24 + 0x18)))) + (*(float *)((t15 + 0x18)))) + (*(float *)((t17 + 0x18)))) / 4.0f);
        *(float *)((t5 + 0x4C)) = (((((*(float *)((t19 + 0x1C))) + (*(float *)((t24 + 0x1C)))) + (*(float *)((t15 + 0x1C)))) + (*(float *)((t17 + 0x1C)))) / 4.0f);
        u103 = *(float *)((t5 + 0x54));
        *(float *)((t5 + 0x60)) = ((((((*(float *)((t19 + 0x18))) - u103) + u103) - (*(float *)((t24 + 0x18)))) / (1.0f + 1.0f)) / (*(float *)((t5 + 0x44))));
        u107 = *(float *)((t5 + 0x4C));
        *(float *)((t5 + 0x58)) = ((((((*(float *)((t19 + 0x1C))) - u107) + u107) - (*(float *)((t24 + 0x1C)))) / (1.0f + 1.0f)) / (*(float *)((t5 + 0x44))));
        u111 = *(float *)((t5 + 0x54));
        *(float *)((t5 + 0x6C)) = ((((((*(float *)((t15 + 0x18))) - u111) + u111) - (*(float *)((t17 + 0x18)))) / (1.0f + 1.0f)) / (*(float *)((t5 + 0x48))));
        u115 = *(float *)((t5 + 0x4C));
        *(float *)((t5 + 0x64)) = ((((((*(float *)((t15 + 0x1C))) - u115) + u115) - (*(float *)((t17 + 0x1C)))) / (1.0f + 1.0f)) / (*(float *)((t5 + 0x48))));
    }
}
