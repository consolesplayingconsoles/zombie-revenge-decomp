/* Straight-line functions with calls and guards (batch gen_xy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0236ce(int);
int FUN_0c02a35a(int);
int FUN_0c02a416(int);
int FUN_0c03593a(int);
int FUN_0c035b26(int);
int FUN_0c035ce4(int);
int FUN_0c02a8dc(int a4, int a5, int a6, int a7);

int FUN_0c02a8dc(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t0 = FUN_0c02a416(a4);
    if (t0 != 0) {
        *(unsigned int *)((a4 + 0x538)) = 0xA;
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
        return 0x4F8;
    }
    t0 = FUN_0c03593a(a4);
    if (t0 != 0) {
        t0 = FUN_0c02a35a(a4);
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                        *(unsigned int *)((a4 + 0x538)) = 0x2;
                        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                    } else {
                        *(unsigned int *)((a4 + 0x538)) = 0x2;
                        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                    }
                } else {
                    *(unsigned int *)((a4 + 0x538)) = 0x2;
                    *(unsigned int *)((a4 + 0x4F8)) = 0x6;
                }
            } else {
                *(unsigned int *)((a4 + 0x538)) = 0x2;
                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
            }
            return 0x4F8;
        }
        t0 = FUN_0c035b26(a4);
        if (t0 != 0) {
            t0 = FUN_0c035ce4(a4);
            if (t0 != 0) {
                *(unsigned int *)((a4 + 0x554)) = 0x2;
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                t0 = *(int *)((a4 + 0x4F0));
                t1 = *(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E3C));
                return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
            }
            t0 = *(int *)((a4 + 0x538));
            if ((t0 != 8) && ((t0 != 6) && (t0 != 7))) {
                if (t0 == 4) {
                    *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                } else {
                    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                }
            } else {
                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
            }
            return 0x4F8;
        }
        t0 = *(int *)((a4 + 0x538));
        if ((t0 != 8) && ((t0 != 6) && (t0 != 7))) {
            if (t0 == 4) {
                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
            } else {
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            }
        } else {
            *(unsigned int *)((a4 + 0x4F8)) = 0x2;
        }
        return 0x4F8;
    }
    *(unsigned int *)((a4 + 0x538)) = 0x1;
    *(unsigned int *)((a4 + 0x50C)) = 0x0;
    *(unsigned int *)((a4 + 0x524)) = 0x0;
    t0 = FUN_0c0236ce(a4);
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
    } else {
        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
    }
    return 0x4F8;
}
