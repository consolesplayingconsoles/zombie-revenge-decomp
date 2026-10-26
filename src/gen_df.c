/* Straight-line functions with calls and guards (batch gen_df): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0355f8(int);
int FUN_0c0356f4(int, int);
int FUN_0c039034(int);
int FUN_0c039110(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0e5f1c(void);
int _quick_odd_mvn(int);
int FUN_0c03d038(int a4);

int FUN_0c03d038(int a4)
{
    int t1;
    int t12;
    int t20;
    int t31;
    int t47;
    int t55;
    int t64;
    int t89;
    int t95;
    int t97;
    int t2;
    int t3;
    int t8;
    int t11;
    int t27;
    int t30;
    int t48;
    int t49;
    int t57;
    int t115;
    int t110;
    int t104;
    int stk[14];

    _quick_odd_mvn(a4);
    t1 = *(int *)((a4 + 0x4C4));
    if (((t1 != 0) && (t1 != 1)) || ((t2 = *(int *)((a4 + 0x310)), (int)t2 < 0) || (t3 = *(int *)((a4 + 0x304)), (int)t3 <= 0))) {
        *(unsigned int *)((a4 + 0x57C)) = 0x0;
        if (((int)(*(int *)((a4 + 0x304))) <= 0) && (t8 = *(int *)((a4 + 0x57C)), t8 != 4)) {
            t11 = ((*(int *)((a4 + 0x57C))) + 0x5);
        } else {
            t11 = (*(int *)((a4 + 0x57C)));
        }
        t12 = *(int *)((a4 + 0x4F0));
        *(unsigned int *)(((0x560 + a4) + 0x0)) = (unsigned short)(*(short *)((((*(int *)(((0x4C4 + a4) + 0x0))) << 1) + ((*(int *)((((*(int *)(((0x578 + a4) + 0x0))) << 2) + (*(int *)((0xC1F8E40 + (((t12 << 2) + t12) << 2))))))) + (t11 * 0xE)))));
    } else {
        if ((*(int *)((a4 + 0x554))) == 2) {
            FUN_0c0da2e0();
            t20 = FUN_0c0e5f1c();
            if ((int)t20 < (int)(*(int *)((((((*(int *)(((0x310 + a4) + 0x0))) - 1) << 2) + ((int)stk + 4)) + 0x0)))) {
                *(unsigned int *)(((0x560 + a4) + 0x0)) = 0x2;
                *(unsigned int *)((a4 + 0x57C)) = 0x3;
            } else {
                *(unsigned int *)((a4 + 0x560)) = 0xB;
                *(unsigned int *)((a4 + 0x57C)) = 0x0;
            }
        } else {
            *(unsigned int *)((a4 + 0x57C)) = 0x0;
            if (((int)(*(int *)((a4 + 0x304))) > 0) && (t27 = *(int *)((a4 + 0x57C)), t27 != 4)) {
                t30 = (*(int *)((a4 + 0x57C)));
            } else {
                t30 = ((*(int *)((a4 + 0x57C))) + 0x5);
            }
            t31 = *(int *)((a4 + 0x4F0));
            *(unsigned int *)(((0x560 + a4) + 0x0)) = (unsigned short)(*(short *)((((*(int *)(((0x4C4 + a4) + 0x0))) << 1) + ((*(int *)((((*(int *)(((0x578 + a4) + 0x0))) << 2) + (*(int *)((0xC1F8E40 + (((t31 << 2) + t31) << 2))))))) + (t30 * 0xE)))));
        }
    }
    t47 = *(int *)((a4 + 0x560));
    if ((t47 != 2) && ((t47 != 3) && ((t47 != 4) && ((t47 != 6) && ((t47 != 12) && ((t48 = *(int *)((a4 + 0x304)), (int)t48 > 0) && (t49 = *(int *)((a4 + 0x20C)), t49 != 0x200000))))))) {
    } else {
        *(unsigned int *)((a4 + 0x554)) = 0x1;
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
        *(unsigned int *)((a4 + 0x4E4)) = 0x0;
    }
    if ((*(int *)((a4 + 0x560))) != 0) {
        t55 = *(int *)((a4 + 0x4C8));
        if ((((((t55 == 2)) ? 1 : 0) & ((((*(int *)(((0x4CC + a4) + 0x0))) == 0)) ? 1 : 0)) == 0) && (((t55 != 9) || (t57 = *(int *)((a4 + 0x210)), t57 != 67)) && ((t55 != 4) && ((t55 != 7) && ((t55 != 12) && ((t55 != 10) && ((t55 != 13) && (t55 != 8)))))))) {
        } else {
            FUN_0c0355f8(a4);
        }
        t64 = *(int *)((a4 + 0x4C8));
        if ((t64 != 5) && (t64 != 6)) {
            FUN_0c039034(a4);
            FUN_0c039110(a4);
            *(unsigned int *)((a4 + 0x5A4)) = ((*(int *)((a4 + 0x5A0))) << 1);
            if ((*(int *)((a4 + 0x560))) != 11) {
                FUN_0c0356f4(a4, 0x1);
            }
        }
    }
    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        t89 = 0x5C0;
        if ((*(int *)((a4 + 0x5C0))) == 0) {
            *(unsigned int *)((a4 + 0x5C0)) = 0x1;
            t89 = (FUN_0c0cc3f8(0x51BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
        }
        t115 = t89;
    } else {
        t95 = *(int *)((a4 + 0x57C));
        if ((t95 != 0) && (t95 != 1)) {
            if ((t95 != 2) && (t95 != 3)) {
                t97 = t95;
                if (t95 != 4) {
                } else {
                    t97 = (FUN_0c0cc3f8(0x51BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
                }
                t104 = t97;
            } else {
                t104 = (FUN_0c0cc3f8(0x41BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
            }
            t110 = t104;
        } else {
            t110 = (FUN_0c0cc3f8(0x31BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
        }
        t115 = t110;
    }
    return t115;
}
