/* Straight-line functions with calls and guards (batch gen_pw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[9]; } Stk9;
int FUN_0c0355f8(int);
int FUN_0c0356f4(int, int);
int FUN_0c039034(int);
int FUN_0c039110(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0da2e0(Stk9);
int FUN_0c0e5f1c(void);
int FUN_0c03d038(int a4);

int FUN_0c03d038(int a4)
{
    int stk[10];
    int t0;
    register int t11;
    register int t20;
    register int t31;
    register int t50;
    int t58;
    int t67;
    register int t93;
    int t99;
    register int t101;
    register int t1;
    register int t2;
    int t7;
    register int t10;
    int t27;
    register int t30;
    register int t51;
    int t52;
    register int t60;
    register int t119;
    register int t114;
    register int t108;

    { struct mv9 { int w[9]; }; *(struct mv9 *)(((int)stk + 4)) = *(struct mv9 *)(0xC0F563C); }
    t0 = *(int *)((a4 + 0x4C4));
    if (((t0 != 0) && (t0 != 1)) || ((t1 = *(int *)((a4 + 0x310)), (int)t1 < 0) || (t2 = *(int *)((a4 + 0x304)), (int)t2 <= 0))) {
        *(unsigned int *)((a4 + 0x57C)) = 0x0;
        if (((int)(*(int *)((a4 + 0x304))) <= 0) && (t7 = *(int *)((a4 + 0x57C)), t7 != 4)) {
            t10 = ((*(int *)((a4 + 0x57C))) + 0x5);
        } else {
            t10 = (*(int *)((a4 + 0x57C)));
        }
        t11 = *(int *)((a4 + 0x4F0));
        *(unsigned int *)(((0x560 + a4) + 0x0)) = (unsigned short)(*(short *)((((*(int *)(((0x4C4 + a4) + 0x0))) << 1) + ((*(int *)((((*(int *)(((0x578 + a4) + 0x0))) << 2) + (*(int *)((0xC1F8E40 + (((t11 << 2) + t11) << 2))))))) + (t10 * 0xE)))));
    } else {
        if ((*(int *)((a4 + 0x554))) == 2) {
            FUN_0c0da2e0(*(Stk9 *)(((int)stk + 4)));
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
    t50 = *(int *)((a4 + 0x560));
    if ((t50 != 2) && ((t50 != 3) && ((t50 != 4) && ((t50 != 6) && ((t50 != 12) && ((t51 = *(int *)((a4 + 0x304)), (int)t51 > 0) && (t52 = *(int *)((a4 + 0x20C)), t52 != 0x200000))))))) {
    } else {
        *(unsigned int *)((a4 + 0x554)) = 0x1;
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
        *(unsigned int *)((a4 + 0x4E4)) = 0x0;
    }
    if ((*(int *)((a4 + 0x560))) != 0) {
        t58 = *(int *)((a4 + 0x4C8));
        if ((((((t58 == 2)) ? 1 : 0) & ((((*(int *)(((0x4CC + a4) + 0x0))) == 0)) ? 1 : 0)) == 0) && (((t58 != 9) || (t60 = *(int *)((a4 + 0x210)), t60 != 67)) && ((t58 != 4) && ((t58 != 7) && ((t58 != 12) && ((t58 != 10) && ((t58 != 13) && (t58 != 8)))))))) {
        } else {
            FUN_0c0355f8(a4);
        }
        t67 = *(int *)((a4 + 0x4C8));
        if ((t67 != 5) && (t67 != 6)) {
            FUN_0c039034(a4);
            FUN_0c039110(a4);
            *(unsigned int *)((a4 + 0x5A4)) = ((*(int *)((a4 + 0x5A0))) << 1);
            if ((*(int *)((a4 + 0x560))) != 11) {
                FUN_0c0356f4(a4, 0x1);
            }
        }
    }
    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        t93 = 0x5C0;
        if ((*(int *)((a4 + 0x5C0))) == 0) {
            *(unsigned int *)((a4 + 0x5C0)) = 0x1;
            t93 = (FUN_0c0cc3f8(0x51BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
        }
        t119 = t93;
    } else {
        t99 = *(int *)((a4 + 0x57C));
        if ((t99 != 0) && (t99 != 1)) {
            if ((t99 != 2) && (t99 != 3)) {
                t101 = t99;
                if (t99 != 4) {
                } else {
                    t101 = (FUN_0c0cc3f8(0x51BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
                }
                t108 = t101;
            } else {
                t108 = (FUN_0c0cc3f8(0x41BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
            }
            t114 = t108;
        } else {
            t114 = (FUN_0c0cc3f8(0x31BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
        }
        t119 = t114;
    }
    return t119;
}
