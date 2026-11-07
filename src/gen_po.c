/* Straight-line functions with calls and guards (batch gen_po): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c21b5a6(int);
int FUN_0c21b228(int a4, int a5, int a6, int a7);

int FUN_0c21b228(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if (((0xFF00 & a7) != 0x1000) && ((0xFF00 & a7) != 0x1100)) {
        *(unsigned int *)((a4 + 0x0)) = 0x2;
    } else {
        *(unsigned int *)((a4 + 0x0)) = 0x3;
    }
    if (((0xFF00 & a7) != 0x500) && ((0xFF00 & a7) != 0x600)) {
        if (((0xFF00 & a7) != 0x700) && ((0xFF00 & a7) != 0x800)) {
            *(unsigned int *)((a4 + 0x4)) = 0x1;
            if ((unsigned char)a7 != 0) {
                if ((unsigned char)a7 != 1) {
                    if ((unsigned char)a7 != 2) {
                        if ((unsigned char)a7 != 3) {
                            t0 = 0x4;
                            if ((unsigned char)a7 != 4) {
                            } else {
                                *(unsigned int *)((a4 + 0x8)) = 0x20000000;
                                t0 = 0x0;
                            }
                            t1 = t0;
                        } else {
                            *(unsigned int *)((a4 + 0x8)) = 0x18000000;
                            t1 = 0x0;
                        }
                        t0 = t1;
                    } else {
                        *(unsigned int *)((a4 + 0x8)) = 0x10000000;
                        t0 = 0x0;
                    }
                    t1 = t0;
                } else {
                    *(unsigned int *)((a4 + 0x8)) = 0x8000000;
                    t1 = 0x0;
                }
                t0 = t1;
            } else {
                *(unsigned int *)((a4 + 0x8)) = 0x0;
                t0 = 0x0;
            }
            t1 = t0;
        } else {
            if ((*(int *)((0xA0 + (*(int *)0xC239A8C)))) == 3) {
                *(unsigned int *)((a4 + 0x4)) = 0x3;
            } else {
                *(unsigned int *)((a4 + 0x4)) = 0x1;
            }
            *(unsigned int *)((a4 + 0x8)) = 0x30000000;
            t1 = 0x0;
        }
        t0 = t1;
    } else {
        if ((*(int *)((0xA0 + (*(int *)0xC239A8C)))) == 3) {
            *(unsigned int *)((a4 + 0x4)) = 0x3;
        } else {
            *(unsigned int *)((a4 + 0x4)) = 0x1;
        }
        *(unsigned int *)((a4 + 0x8)) = 0x28000000;
        t0 = 0x0;
    }
    *(unsigned int *)((a4 + 0xC)) = a5;
    *(unsigned int *)((a4 + 0x10)) = a6;
    t1 = t0;
    if ((a5 != 8) && ((a5 != 16) && ((a5 != 32) && ((a5 != 64) && ((a5 != 0x80) && ((a5 != 0x100) && ((a5 != 0x200) && (a5 != 0x400)))))))) {
        t1 = 0x4;
    }
    t0 = t1;
    if ((a6 != 8) && ((a6 != 16) && ((a6 != 32) && ((a6 != 64) && ((a6 != 0x80) && ((a6 != 0x100) && ((a6 != 0x200) && (a6 != 0x400)))))))) {
        t0 = 0x4;
    }
    t1 = t0;
    if (((0xFF00 & a7) != 0x900) && (((0xFF00 & a7) != 0xB00) && (((0xFF00 & a7) != 0xD00) && (((0xFF00 & a7) != 0x500) && (((0xFF00 & a7) != 0x700) && (a5 != a6)))))) {
        t1 = 0x4;
    }
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    if (((0xFF00 & a7) == 0xF00) || (((0xFF00 & a7) == 0x200) || (((0xFF00 & a7) == 0x400) || (((0xFF00 & a7) == 0x1100) || (((0xFF00 & a7) == 0x600) || ((0xFF00 & a7) == 0x800)))))) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x1);
    }
    if ((0xFF00 & a7) != 0xE00) {
        if (((0xFF00 & a7) == 0xF00) || (((0xFF00 & a7) == 0x100) || (((0xFF00 & a7) == 0x200) || ((0xFF00 & a7) == 0xD00)))) {
            *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x4);
        }
    } else {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x4);
    }
    if (((0xFF00 & a7) == 0x300) || (((0xFF00 & a7) == 0x400) || (((0xFF00 & a7) == 0x1000) || ((0xFF00 & a7) == 0x1100)))) {
        *(unsigned int *)((a4 + 0x18)) = (((*(int *)((a4 + 0x18))) | 0x8) | 0x4);
    }
    if ((0xFF00 & a7) == 0xB00) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x10);
    }
    if (((0xFF00 & a7) == 0x500) || (((0xFF00 & a7) == 0x600) || (((0xFF00 & a7) == 0x700) || ((0xFF00 & a7) == 0x800)))) {
        *(unsigned int *)((a4 + 0x18)) = (((*(int *)((a4 + 0x18))) | 0x20) | 0x4);
    }
    FUN_0c21b5a6(a4);
    return t1;
}
