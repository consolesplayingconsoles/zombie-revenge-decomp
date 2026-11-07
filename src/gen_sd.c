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

void FUN_0c02ddf8(int a4)
{
    int t0;
    int t1;

    *(unsigned int *)((a4 + 0x4FC)) = 0x0;
    t1 = FUN_0c0236ce(a4);
    if (t1 == 0) {
        t1 = *(int *)((a4 + 0x4F8));
        if ((t1 != 6) && (t1 != 7)) {
            t1 = *(int *)((a4 + 0x4F8));
            if (t1 == 8) {
                *(unsigned int *)((a4 + 0x4F8)) = 0xA;
            } else {
                if (t1 != 9) {
                    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                } else {
                    *(unsigned int *)((a4 + 0x4F8)) = 0xA;
                }
            }
        } else {
            *(unsigned int *)((a4 + 0x4F8)) = 0x8;
        }
        return;
    }
    t1 = *(int *)((a4 + 0x4F8));
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
                *(unsigned int *)((a4 + 0x538)) = 0x0;
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            } else {
                t1 = FUN_0c03593a(a4);
                if (t1 != 0) {
                    t1 = FUN_0c02a35a(a4);
                    if (t1 != 0) {
                        if (t1 != 1) {
                            if (t1 != 2) {
                                *(unsigned int *)((a4 + 0x538)) = 0x2;
                                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                            } else {
                                *(unsigned int *)((a4 + 0x538)) = 0x2;
                                *(unsigned int *)((a4 + 0x4F8)) = 0x6;
                            }
                        } else {
                            *(unsigned int *)((a4 + 0x524)) = 0x0;
                            t1 = FUN_0c0236ce(a4);
                            if (t1 != 0) {
                                *(unsigned int *)((a4 + 0x538)) = 0x2;
                                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                            } else {
                                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                            }
                        }
                    } else {
                        t1 = FUN_0c035b26(a4);
                        if (t1 != 0) {
                            t1 = FUN_0c035ce4(a4);
                            if (t1 != 0) {
                                *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                            } else {
                                t1 = *(int *)((a4 + 0x538));
                                if (t1 != 8) {
                                    if (t1 == 4) {
                                        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                    } else {
                                        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                    }
                                } else {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                }
                            }
                        } else {
                            t1 = *(int *)((a4 + 0x538));
                            if (t1 != 8) {
                                if (t1 == 4) {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                } else {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                }
                            } else {
                                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                            }
                        }
                    }
                } else {
                    *(unsigned int *)((a4 + 0x538)) = 0x1;
                    if ((*(int *)((a4 + 0x54C))) == 0) {
                        t1 = FUN_0c034e2c(a4);
                        if (t1 != 0) {
                            if ((*(int *)((a4 + 0x4F0))) != 5) {
                                *(unsigned int *)((a4 + 0x4F8)) = 0xC;
                            } else {
                                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                            }
                        } else {
                            *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                        }
                    } else {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
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
            *(unsigned int *)((a4 + 0x4F8)) = 0x0;
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
            *(unsigned int *)((a4 + 0x4F8)) = 0x8;
            return;
        }
        case 16:
        {
            return;
        }
        case 18:
        {
            *(unsigned int *)((a4 + 0x4F8)) = 0xA;
            return;
        }
        case 20:
        {
            return;
        }
        case 22:
        {
            t1 = FUN_0c02a416(a4);
            if ((t1 == 0) && (t0 = *(int *)((a4 + 0x504)), t0 != 0)) {
                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
            } else {
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
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
            *(unsigned int *)((a4 + 0x4F8)) = 0xA;
            return;
        }
    }
}
