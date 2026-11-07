/* Straight-line functions with calls and guards (batch gen_qn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0845e8(int);
int FUN_0c0845f0(int);
int FUN_0c0845f8(int, int);
int FUN_0c084610(int, int);
int FUN_0c0846a6(int, float, float, float);
int FUN_0c0846be(int, float);
int FUN_0c0846de(int, float, float, float, float);
int FUN_0c08476e(float, float, float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c067964(int a4, int a5, int a6, int a7);

int FUN_0c067964(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t21;
    int t22;
    register int t23;
    register int t24;
    register int t26;
    register int t29;
    register int t96;
    register int t60;
    register float u66;
    register float u67;
    register float u68;
    register float u71;
    register float u72;
    register float u81;
    register float u82;
    register int t16;
    register int t17;
    register int t19;
    register int t5;
    register int t7;
    register int t11;
    register int t13;
    register int t25;
    register int t27;
    int t28;
    register int t30;
    int t32;
    register int t98;
    register int t99;
    register int t101;
    register int t102;
    register int t44;
    register int t45;
    register int t48;
    register int t49;
    register int t51;
    register int t52;
    register int t92;
    register int t93;
    register int t95;
    register int t86;
    register int t87;
    register int t89;
    register int t90;
    register int t73;

    t1 = *(int *)0xC23ED5C;
    if ((*(int *)((a4 + 0x30))) != 3) {
        if ((t1 & 0x6) != 0) {
            FUN_0c0e19f2(t1, a5, a6, a7);
        } else {
            t5 = 0x6;
            t7 = t1;
        }
        t16 = t5;
        t19 = t7;
    } else {
        if ((t1 & 0x20) == 0) {
            t11 = 0x20;
            t13 = t1;
        } else {
            FUN_0c0e19f2(t1, a5, a6, a7);
        }
        t17 = t11;
        t19 = t13;
    }
    t21 = 0xC0679EC;
    t22 = t16;
    t23 = t17;
    t24 = t19;
    t26 = t25;
    t29 = 0x4;
    for (;;) {
        if ((int)t29 < (int)0x8) {
            t26 = 0xC246FF0;
            t24 = t29;
            t26 = (t26 + 0x40);
            t28 = 0x1;
            t24 = (t24 << 2);
            t26 = (t26 + t24);
            t26 = (*(int *)((t26 + 0x0)));
            t21 = t26;
            t28 = ((int)t28 << (int)t29);
            if ((t21 != 4) && (t32 = (t21 == 4), t21 = t26, t21 != 3)) {
                t21 = 0x68;
                t23 = (*(int *)((a4 + t21)));
                if (((t23 & t28) != 0) && (t22 = 0xC246FF0, t22 = (t22 + 0x40), t24 = (t24 + t22), t44 = *(int *)((t24 + 0x0)), t45 = ((t23 & t28) == 0), t23 = t44, (int)t23 < (int)0x2)) {
                    t23 = (*(int *)((a4 + t21)));
                    t28 = (~t28);
                    t22 = 0xC0845F8;
                    t26 = 0x0;
                    t23 = (t23 & t28);
                    *(unsigned int *)((a4 + t21)) = t23;
                    t24 = t29;
                    t21 = (FUN_0c0845f8(t24, t26));
                } else {
                    t48 = t22;
                    t49 = t23;
                    t51 = t24;
                    t52 = t26;
                }
                t98 = t48;
                t99 = t49;
                t101 = t51;
                t102 = t52;
            } else {
                t27 = 0xC246FF0;
                t27 = (t27 + t24);
                t21 = 0xC8;
                t27 = (*(int *)((t27 + 0x0)));
                t21 = (*(int *)((t27 + t21)));
                t96 = t26;
                if ((t21 & 64) != 0) {
                    t92 = t22;
                    t93 = t23;
                    t95 = t24;
                } else {
                    t21 = 0x68;
                    if (((*(int *)((a4 + t21))) & t28) != 0) {
                        t86 = t22;
                        t87 = t23;
                        t89 = t24;
                        t90 = t26;
                    } else {
                        t24 = 0xC067B98;
                        t26 = 0xB4;
                        t21 = (FUN_0c0e1830(0xC067B98, t26));
                        t23 = 0xC0E19D0;
                        t30 = t21;
                        t24 = t21;
                        t21 = (FUN_0c0e19d0(t24));
                        t21 = 0x8C;
                        t23 = 0xC0845E8;
                        *(unsigned int *)((t30 + t21)) = t27;
                        t21 = (t21 + 0x30);
                        t60 = *(int *)((t27 + t21));
                        t21 = (t21 - 52);
                        *(unsigned int *)((t30 + t21)) = t60;
                        t21 = 0x68;
                        *(unsigned int *)((a4 + t21)) = ((*(int *)((a4 + t21))) | t28);
                        t24 = 0x1;
                        t21 = (FUN_0c0845e8(t24));
                        t21 = (FUN_0c08476e(0.5f, 0.5f, 0.5f));
                        t23 = 0xC0845F0;
                        t24 = 0x1;
                        t21 = (FUN_0c0845f0(t24));
                        t21 = (*(int *)0xC23ED50);
                        if (t21 != 21) {
                            if (t21 != 82) {
                            } else {
                                t21 = 0x98;
                                *(unsigned int *)((t30 + t21)) = 0x1;
                                t21 = 0xC067B28;
                                u66 = *(float *)((t21 + 0x0));
                                t21 = 0x90;
                                *(float *)((t30 + t21)) = u66;
                                t21 = 0x48;
                                *(float *)((t30 + t21)) = 1.0f;
                                t21 = 0xC067B2C;
                                u67 = *(float *)((t21 + 0x0));
                                t21 = 0x4C;
                                *(float *)((t30 + t21)) = u67;
                                t21 = 0xC067B30;
                                u68 = *(float *)((t21 + 0x0));
                                t21 = 0x50;
                                *(float *)((t30 + t21)) = u68;
                            }
                        } else {
                            t21 = 0x98;
                            t23 = 0x0;
                            *(unsigned int *)((t30 + t21)) = t23;
                            t21 = (t21 - 8);
                            *(float *)((t30 + t21)) = 40.0f;
                            t21 = 0x48;
                            *(float *)((t30 + t21)) = 0.099999994f;
                            t21 = 0xC067B20;
                            u71 = *(float *)((t21 + 0x0));
                            t21 = 0x4C;
                            *(float *)((t30 + t21)) = u71;
                            t21 = 0xC067B24;
                            u72 = *(float *)((t21 + 0x0));
                            t21 = 0x50;
                            *(float *)((t30 + t21)) = u72;
                            t73 = t23;
                        }
                        t23 = t73;
                        t26 = 0x3;
                        t24 = t29;
                        t21 = (FUN_0c084610(t24, t26));
                        t21 = 0x90;
                        t24 = t29;
                        t21 = (FUN_0c0846be(t24, (*(float *)((t30 + t21)))));
                        t21 = 0xC067B3C;
                        t24 = t29;
                        t21 = (FUN_0c0846de(t24, 0.0f, 1.0f, (*(float *)((t21 + 0x0))), 0.099999994f));
                        t21 = 0x50;
                        u81 = *(float *)((t30 + t21));
                        t21 = 0x4C;
                        u82 = *(float *)((t30 + t21));
                        t21 = 0x48;
                        t24 = t29;
                        t21 = (FUN_0c0846a6(t24, (*(float *)((t30 + t21))), u82, u81));
                        t23 = 0xC0845F8;
                        t26 = 0x1;
                        t24 = t29;
                        t21 = (FUN_0c0845f8(t24, t26));
                    }
                    t92 = t86;
                    t93 = t87;
                    t95 = t89;
                    t96 = t90;
                }
                t98 = t92;
                t99 = t93;
                t101 = t95;
                t102 = t96;
            }
            t22 = t98;
            t29 = (t29 + 0x1);
            t23 = t99;
            t24 = t101;
            t26 = t102;
            continue;
        }
        break;
    }
    return t21;
}
