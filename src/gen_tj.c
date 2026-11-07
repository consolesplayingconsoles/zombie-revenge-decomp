/* Straight-line functions with calls and guards (batch gen_tj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e1138(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int FUN_0c0e1138(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register float u15;
    register float u16;
    register float u17;
    register float u18;
    register float u19;
    register int t2;
    register int t3;
    register int t10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u20;
    register float u21;

    t0 = *(int *)0xC20D140;
    t4 = 0xC20D140;
    t5 = (a4 + 0x4);
    t6 = a5;
    t7 = a6;
    t8 = 0x0;
    t9 = (*(int *)((a4 + 0x0)));
    u15 = f7;
    u16 = f8;
    u17 = f9;
    u18 = f10;
    u19 = f11;
    for (;;) {
        t9 = (t9 - 1);
        if ((int)t9 >= 0) {
            t7 = t5;
            t10 = (*(int *)((t7 + 0x0)));
            t7 = (t7 + 0x4);
            u14 = (*(float *)((t7 + 0x0)));
            t7 = (t7 + 0x4);
            t3 = t10;
            if (!(f4 > u14)) {
                t7 = (t7 + 0x4);
                u14 = (*(float *)((t7 + 0x0)));
                t7 = (t7 + 0x4);
                if (!(f6 > u14)) {
                    u14 = (*(float *)((t7 + 0x0)));
                    t7 = (t7 + 0x4);
                    if (!(u14 > f4)) {
                        u14 = (*(float *)((t7 + 0x0)));
                        t7 = (t7 + 0x4);
                        if (!(u14 > f5)) {
                            u14 = (*(float *)((t7 + 0x0)));
                            t7 = (t7 + 0x4);
                            if (!(u14 > f6)) {
                                for (;;) {
                                    t3 = (t3 - 1);
                                    if ((int)t3 >= 0) {
                                        t2 = 0x4;
                                        t6 = t7;
                                        u15 = (*(float *)((t6 + t2)));
                                        u14 = 0.0f;
                                        u18 = (*(float *)((t6 + 0x0)));
                                        if (!(u15 > u14)) {
                                            if (t0 != 0) {
                                                if (u15 != u14) {
                                                    t2 = 0x8;
                                                    u14 = f4;
                                                    u19 = (*(float *)((t6 + t2)));
                                                    u14 = (u14 * u18);
                                                    u13 = f6;
                                                    t2 = 0xC;
                                                    u13 = (u13 * u19);
                                                    u20 = (*(float *)((t6 + t2)));
                                                    u14 = (-u14);
                                                    u14 = (u14 - u13);
                                                    u14 = (u14 - u20);
                                                    u17 = u14;
                                                    u17 = (u17 / u15);
                                                    if (!(u17 > f5)) {
                                                        t2 = 0x1C;
                                                        u21 = (*(float *)((t6 + t2)));
                                                        t2 = 0x14;
                                                        u11 = (*(float *)((t6 + t2)));
                                                        t2 = 0x20;
                                                        u13 = (*(float *)((t6 + t2)));
                                                        t2 = 0x28;
                                                        u14 = u21;
                                                        u14 = (u14 - f6);
                                                        u13 = (u13 - u11);
                                                        u12 = (*(float *)((t6 + t2)));
                                                        u12 = (u12 - u21);
                                                        u14 = (u14 * u13);
                                                        u13 = u11;
                                                        u13 = (u13 - f4);
                                                        u13 = (u13 * u12);
                                                        u14 = (u14 - u13);
                                                        u13 = u15;
                                                        u13 = (u13 * u14);
                                                        u14 = 0.0f;
                                                        if (!(u14 > u13)) {
                                                            u21 = (*(float *)((t6 + t2)));
                                                            t2 = 0x20;
                                                            u11 = (*(float *)((t6 + t2)));
                                                            t2 = 0x2C;
                                                            u13 = (*(float *)((t6 + t2)));
                                                            t2 = 0x34;
                                                            u14 = u21;
                                                            u14 = (u14 - f6);
                                                            u13 = (u13 - u11);
                                                            u12 = (*(float *)((t6 + t2)));
                                                            u12 = (u12 - u21);
                                                            u14 = (u14 * u13);
                                                            u13 = u11;
                                                            u13 = (u13 - f4);
                                                            u13 = (u13 * u12);
                                                            u14 = (u14 - u13);
                                                            u13 = u15;
                                                            u13 = (u13 * u14);
                                                            u14 = 0.0f;
                                                            if (!(u14 > u13)) {
                                                                u21 = (*(float *)((t6 + t2)));
                                                                t2 = 0x2C;
                                                                u11 = (*(float *)((t6 + t2)));
                                                                t2 = 0x38;
                                                                u13 = (*(float *)((t6 + t2)));
                                                                t2 = 0x40;
                                                                u14 = u21;
                                                                u14 = (u14 - f6);
                                                                u13 = (u13 - u11);
                                                                u12 = (*(float *)((t6 + t2)));
                                                                u12 = (u12 - u21);
                                                                u14 = (u14 * u13);
                                                                u13 = u11;
                                                                u13 = (u13 - f4);
                                                                u13 = (u13 * u12);
                                                                u14 = (u14 - u13);
                                                                u13 = u15;
                                                                u13 = (u13 * u14);
                                                                u14 = 0.0f;
                                                                if (!(u14 > u13)) {
                                                                    u21 = (*(float *)((t6 + t2)));
                                                                    t2 = 0x38;
                                                                    u11 = (*(float *)((t6 + t2)));
                                                                    t2 = 0x14;
                                                                    u13 = (*(float *)((t6 + t2)));
                                                                    t2 = 0x1C;
                                                                    u14 = u21;
                                                                    u14 = (u14 - f6);
                                                                    u13 = (u13 - u11);
                                                                    u12 = (*(float *)((t6 + t2)));
                                                                    u12 = (u12 - u21);
                                                                    u14 = (u14 * u13);
                                                                    u13 = u11;
                                                                    u13 = (u13 - f4);
                                                                    u13 = (u13 * u12);
                                                                    u14 = (u14 - u13);
                                                                    u13 = u15;
                                                                    u13 = (u13 * u14);
                                                                    u14 = 0.0f;
                                                                    if (!(u14 > u13)) {
                                                                        u21 = f5;
                                                                        u21 = (u21 - u17);
                                                                        if ((t8 == 0) || (u16 > u21)) {
                                                                            u14 = u21;
                                                                            t2 = 0x44;
                                                                            u16 = u21;
                                                                            u14 = (u14 * u16);
                                                                            t8 = (*(int *)((t6 + t2)));
                                                                            t6 = 0xC94C6E0;
                                                                            *(float *)((t6 + 0x0)) = u14;
                                                                            t6 = 0xC94C6C4;
                                                                            *(float *)((t6 + 0x0)) = f4;
                                                                            t6 = 0xC94C6C8;
                                                                            *(float *)((t6 + 0x0)) = u17;
                                                                            t6 = 0xC94C6CC;
                                                                            *(float *)((t6 + 0x0)) = f6;
                                                                            t6 = 0xC94C6D0;
                                                                            *(float *)((t6 + 0x0)) = u18;
                                                                            t6 = 0xC94C6D4;
                                                                            *(float *)((t6 + 0x0)) = u15;
                                                                            t6 = 0xC94C6D8;
                                                                            *(float *)((t6 + 0x0)) = u19;
                                                                            t6 = 0xC94C6DC;
                                                                            *(float *)((t6 + 0x0)) = u20;
                                                                            t6 = 0xC94C6E4;
                                                                            *(unsigned int *)((t6 + 0x0)) = t7;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            t2 = 0x8;
                                            u14 = f4;
                                            u19 = (*(float *)((t6 + t2)));
                                            u14 = (u14 * u18);
                                            u13 = f6;
                                            t2 = 0xC;
                                            u13 = (u13 * u19);
                                            u20 = (*(float *)((t6 + t2)));
                                            u14 = (-u14);
                                            u14 = (u14 - u13);
                                            u14 = (u14 - u20);
                                            u17 = u14;
                                            u17 = (u17 / u15);
                                            if (!(u17 > f5)) {
                                                t2 = 0x1C;
                                                u21 = (*(float *)((t6 + t2)));
                                                t2 = 0x14;
                                                u11 = (*(float *)((t6 + t2)));
                                                t2 = 0x20;
                                                u13 = (*(float *)((t6 + t2)));
                                                t2 = 0x28;
                                                u14 = u21;
                                                u14 = (u14 - f6);
                                                u13 = (u13 - u11);
                                                u12 = (*(float *)((t6 + t2)));
                                                u12 = (u12 - u21);
                                                u14 = (u14 * u13);
                                                u13 = u11;
                                                u13 = (u13 - f4);
                                                u13 = (u13 * u12);
                                                u14 = (u14 - u13);
                                                u13 = u15;
                                                u13 = (u13 * u14);
                                                u14 = 0.0f;
                                                if (!(u14 > u13)) {
                                                    u21 = (*(float *)((t6 + t2)));
                                                    t2 = 0x20;
                                                    u11 = (*(float *)((t6 + t2)));
                                                    t2 = 0x2C;
                                                    u13 = (*(float *)((t6 + t2)));
                                                    t2 = 0x34;
                                                    u14 = u21;
                                                    u14 = (u14 - f6);
                                                    u13 = (u13 - u11);
                                                    u12 = (*(float *)((t6 + t2)));
                                                    u12 = (u12 - u21);
                                                    u14 = (u14 * u13);
                                                    u13 = u11;
                                                    u13 = (u13 - f4);
                                                    u13 = (u13 * u12);
                                                    u14 = (u14 - u13);
                                                    u13 = u15;
                                                    u13 = (u13 * u14);
                                                    u14 = 0.0f;
                                                    if (!(u14 > u13)) {
                                                        u21 = (*(float *)((t6 + t2)));
                                                        t2 = 0x2C;
                                                        u11 = (*(float *)((t6 + t2)));
                                                        t2 = 0x38;
                                                        u13 = (*(float *)((t6 + t2)));
                                                        t2 = 0x40;
                                                        u14 = u21;
                                                        u14 = (u14 - f6);
                                                        u13 = (u13 - u11);
                                                        u12 = (*(float *)((t6 + t2)));
                                                        u12 = (u12 - u21);
                                                        u14 = (u14 * u13);
                                                        u13 = u11;
                                                        u13 = (u13 - f4);
                                                        u13 = (u13 * u12);
                                                        u14 = (u14 - u13);
                                                        u13 = u15;
                                                        u13 = (u13 * u14);
                                                        u14 = 0.0f;
                                                        if (!(u14 > u13)) {
                                                            u21 = (*(float *)((t6 + t2)));
                                                            t2 = 0x38;
                                                            u11 = (*(float *)((t6 + t2)));
                                                            t2 = 0x14;
                                                            u13 = (*(float *)((t6 + t2)));
                                                            t2 = 0x1C;
                                                            u14 = u21;
                                                            u14 = (u14 - f6);
                                                            u13 = (u13 - u11);
                                                            u12 = (*(float *)((t6 + t2)));
                                                            u12 = (u12 - u21);
                                                            u14 = (u14 * u13);
                                                            u13 = u11;
                                                            u13 = (u13 - f4);
                                                            u13 = (u13 * u12);
                                                            u14 = (u14 - u13);
                                                            u13 = u15;
                                                            u13 = (u13 * u14);
                                                            u14 = 0.0f;
                                                            if (!(u14 > u13)) {
                                                                u21 = f5;
                                                                u21 = (u21 - u17);
                                                                if ((t8 == 0) || (u16 > u21)) {
                                                                    u14 = u21;
                                                                    t2 = 0x44;
                                                                    u16 = u21;
                                                                    u14 = (u14 * u16);
                                                                    t8 = (*(int *)((t6 + t2)));
                                                                    t6 = 0xC94C6E0;
                                                                    *(float *)((t6 + 0x0)) = u14;
                                                                    t6 = 0xC94C6C4;
                                                                    *(float *)((t6 + 0x0)) = f4;
                                                                    t6 = 0xC94C6C8;
                                                                    *(float *)((t6 + 0x0)) = u17;
                                                                    t6 = 0xC94C6CC;
                                                                    *(float *)((t6 + 0x0)) = f6;
                                                                    t6 = 0xC94C6D0;
                                                                    *(float *)((t6 + 0x0)) = u18;
                                                                    t6 = 0xC94C6D4;
                                                                    *(float *)((t6 + 0x0)) = u15;
                                                                    t6 = 0xC94C6D8;
                                                                    *(float *)((t6 + 0x0)) = u19;
                                                                    t6 = 0xC94C6DC;
                                                                    *(float *)((t6 + 0x0)) = u20;
                                                                    t6 = 0xC94C6E4;
                                                                    *(unsigned int *)((t6 + 0x0)) = t7;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        t7 = (t7 + 0x48);
                                        continue;
                                    }
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            t4 = t10;
            t10 = (t10 << 2);
            t10 = (t10 << 1);
            t10 = (t10 + t4);
            t10 = (t10 << 1);
            t10 = (t10 + 0x7);
            t10 = (t10 << 2);
            t5 = (t5 + t10);
            continue;
        }
        break;
    }
    *(unsigned int *)0xC94C6C0 = t8;
    return t8;
}
