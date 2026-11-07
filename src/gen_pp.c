/* Straight-line functions with calls and guards (batch gen_pp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c0849da(void);
int FUN_0c097520(int, int, int);
int FUN_0c0975d0(int, int, int, int);
int FUN_0c0dbda0(int);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c097870(int a4, int a5, int a6, int a7);

int FUN_0c097870(int a4, int a5, int a6, int a7)
{
    static const short part[10][4] = {
        {0x000, 0x44, 0, 0}, {0x0C0, 0x68, 1, 0}, {0x100, 0x8C, 2, 1}, {0x180, 0xB0, 3, 0}, {0x1C0, 0xD4, 4, 2},
        {0x240, 0x188, 9, 0}, {0x280, 0xF8, 5, 0}, {0x2C0, 0x11C, 6, 3}, {0x340, 0x140, 7, 0}, {0x380, 0x164, 8, 4}
    };
    int t0;
    int t6;
    int k;
    int j;
    int r;

    t0 = *(int *)(a4 + 0x30);
    FUN_0c0685a4(a4, a5, a6, a7);
    if ((*(int *)(t0 + 0x2EC) & 15) != 0) {
        *(int *)(a4 + 0x34) = 1;
    }
    t6 = *(int *)(a4 + 0x38);
    if (t6 >= 0xE && t6 < 0x22) {
        nlPushMatrix(0);
        for (k = 0; k < 10; k++) {
            FUN_0c0dbda0(*(int *)(t0 + 0x3E4) + part[k][0]);
            for (j = 0; j < 3; j++) {
                FUN_0c097520(t6 - 14, a4 + part[k][1] + j * 12, part[k][2]);
            }
            if (part[k][3] != 0) {
                FUN_0c0975d0(t6 - 14, a4 + 0x1AC + (part[k][3] - 1) * 0xF0, 3, 0xA);
            }
        }
        nlPopMatrix(1);
    }
    r = FUN_0c0849da();
    if (--*(int *)(a4 + 0x3C) < 0) {
        *(int *)(a4 + 0x3C) = *(int *)(a4 + 0x40);
        if (++*(int *)(a4 + 0x38) > 0x3C) {
            return FUN_0c0e19f2();
        }
        return 0x40;
    }
    return r;
}
