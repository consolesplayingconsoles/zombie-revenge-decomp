/* Straight-line functions with calls and guards (batch gen_sd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0236ce(int);
int FUN_0c02a220(int);
int FUN_0c02a35a(int);
int FUN_0c02a416(int);
int FUN_0c034e2c(int);
int FUN_0c03593a(int);
int FUN_0c035b26(int);
int FUN_0c035ce4(int);
void FUN_0c02ddf8(int a4);
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o4FC_uint { char p[0x4FC]; unsigned int v; };
struct o504_int { char p[0x504]; int v; };
struct o524_uint { char p[0x524]; unsigned int v; };
struct o538_int { char p[0x538]; int v; };
struct o538_uint { char p[0x538]; unsigned int v; };
struct o54C_int { char p[0x54C]; int v; };


void FUN_0c02ddf8(int a4)
{
    int t0;
    int t1;

    (((struct o4FC_uint *)(a4))->v) = 0x0;
    t1 = FUN_0c0236ce(a4);
    if (t1 == 0) {
        t1 = (((struct o4F8_int *)(a4))->v);
        if ((t1 != 6) && (t1 != 7)) {
            t1 = (((struct o4F8_int *)(a4))->v);
            if (t1 == 8) {
                (((struct o4F8_uint *)(a4))->v) = 0xA;
            } else {
                if (t1 != 9) {
                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                } else {
                    (((struct o4F8_uint *)(a4))->v) = 0xA;
                }
            }
        } else {
            (((struct o4F8_uint *)(a4))->v) = 0x8;
        }
        return;
    }
    t1 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t1 >= (unsigned int)0xE) {
        return;
    }
    switch ((t1 << 1)) {
        case 0:
        {
            return;
        }
        case 2:
        {
            t1 = FUN_0c02a416(a4);
            if (t1 != 0) {
                (((struct o538_uint *)(a4))->v) = 0x0;
                (((struct o4F8_uint *)(a4))->v) = 0x0;
            } else {
                t1 = FUN_0c03593a(a4);
                if (t1 != 0) {
                    t1 = FUN_0c02a35a(a4);
                    if (t1 != 0) {
                        if (t1 != 1) {
                            if (t1 != 2) {
                                (((struct o538_uint *)(a4))->v) = 0x2;
                                (((struct o4F8_uint *)(a4))->v) = 0x0;
                            } else {
                                (((struct o538_uint *)(a4))->v) = 0x2;
                                (((struct o4F8_uint *)(a4))->v) = 0x6;
                            }
                        } else {
                            (((struct o524_uint *)(a4))->v) = 0x0;
                            t1 = FUN_0c0236ce(a4);
                            if (t1 != 0) {
                                (((struct o538_uint *)(a4))->v) = 0x2;
                                (((struct o4F8_uint *)(a4))->v) = 0x2;
                            } else {
                                (((struct o4F8_uint *)(a4))->v) = 0x0;
                            }
                        }
                    } else {
                        t1 = FUN_0c035b26(a4);
                        if (t1 != 0) {
                            t1 = FUN_0c035ce4(a4);
                            if (t1 != 0) {
                                (((struct o4F8_uint *)(a4))->v) = 0x4;
                            } else {
                                t1 = (((struct o538_int *)(a4))->v);
                                if (t1 != 8) {
                                    if (t1 == 4) {
                                        (((struct o4F8_uint *)(a4))->v) = 0x2;
                                    } else {
                                        (((struct o4F8_uint *)(a4))->v) = 0x0;
                                    }
                                } else {
                                    (((struct o4F8_uint *)(a4))->v) = 0x2;
                                }
                            }
                        } else {
                            t1 = (((struct o538_int *)(a4))->v);
                            if (t1 != 8) {
                                if (t1 == 4) {
                                    (((struct o4F8_uint *)(a4))->v) = 0x2;
                                } else {
                                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                                }
                            } else {
                                (((struct o4F8_uint *)(a4))->v) = 0x2;
                            }
                        }
                    }
                } else {
                    (((struct o538_uint *)(a4))->v) = 0x1;
                    if (((((struct o54C_int *)(a4))->v)) == 0) {
                        t1 = FUN_0c034e2c(a4);
                        if (t1 != 0) {
                            if (((((struct o4F0_int *)(a4))->v)) != 5) {
                                (((struct o4F8_uint *)(a4))->v) = 0xC;
                            } else {
                                (((struct o4F8_uint *)(a4))->v) = 0x2;
                            }
                        } else {
                            (((struct o4F8_uint *)(a4))->v) = 0x0;
                        }
                    } else {
                        (((struct o4F8_uint *)(a4))->v) = 0x2;
                    }
                }
            }
            return;
        }
        case 4:
        {
            return;
        }
        case 6:
        {
            FUN_0c02a416(a4);
            (((struct o4F8_uint *)(a4))->v) = 0x0;
            return;
        }
        case 8:
        {
            return;
        }
        case 10:
        {
            FUN_0c02a220(a4);
    return;
        }
        case 12:
        {
            return;
        }
        case 14:
        {
            (((struct o4F8_uint *)(a4))->v) = 0x8;
            return;
        }
        case 16:
        {
            return;
        }
        case 18:
        {
            (((struct o4F8_uint *)(a4))->v) = 0xA;
            return;
        }
        case 20:
        {
            return;
        }
        case 22:
        {
            t1 = FUN_0c02a416(a4);
            if ((t1 == 0) && (t0 = (((struct o504_int *)(a4))->v), t0 != 0)) {
                (((struct o4F8_uint *)(a4))->v) = 0x2;
            } else {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
            }
            return;
        }
        case 24:
        {
            return;
        }
        default:
        {
            FUN_0c02a416(a4);
            (((struct o4F8_uint *)(a4))->v) = 0xA;
            return;
        }
    }
}
