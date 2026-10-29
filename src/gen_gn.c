/* Straight-line functions with calls and guards (batch gen_gn): generated from the code and checked by tests. Calls are
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
    int t0;
    int t11;
    int t19;
    int t30;
    int t46;
    int t54;
    int t63;
    int t88;
    int t94;
    int t96;
    int t1;
    int t2;
    int t7;
    int t10;
    int t26;
    int t29;
    int t47;
    int t48;
    int t56;
    int t114;
    int t109;
    int t103;
    int stk[14];

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
            t19 = FUN_0c0e5f1c();
            if ((int)t19 < (int)(*(int *)((((((*(int *)(((0x310 + a4) + 0x0))) - 1) << 2) + ((int)stk + 4)) + 0x0)))) {
                *(unsigned int *)(((0x560 + a4) + 0x0)) = 0x2;
                *(unsigned int *)((a4 + 0x57C)) = 0x3;
            } else {
                *(unsigned int *)((a4 + 0x560)) = 0xB;
                *(unsigned int *)((a4 + 0x57C)) = 0x0;
            }
        } else {
            *(unsigned int *)((a4 + 0x57C)) = 0x0;
            if (((int)(*(int *)((a4 + 0x304))) > 0) && (t26 = *(int *)((a4 + 0x57C)), t26 != 4)) {
                t29 = (*(int *)((a4 + 0x57C)));
            } else {
                t29 = ((*(int *)((a4 + 0x57C))) + 0x5);
            }
            t30 = *(int *)((a4 + 0x4F0));
            *(unsigned int *)(((0x560 + a4) + 0x0)) = (unsigned short)(*(short *)((((*(int *)(((0x4C4 + a4) + 0x0))) << 1) + ((*(int *)((((*(int *)(((0x578 + a4) + 0x0))) << 2) + (*(int *)((0xC1F8E40 + (((t30 << 2) + t30) << 2))))))) + (t29 * 0xE)))));
        }
    }
    t46 = *(int *)((a4 + 0x560));
    if ((t46 != 2) && ((t46 != 3) && ((t46 != 4) && ((t46 != 6) && ((t46 != 12) && ((t47 = *(int *)((a4 + 0x304)), (int)t47 > 0) && (t48 = *(int *)((a4 + 0x20C)), t48 != 0x200000))))))) {
    } else {
        *(unsigned int *)((a4 + 0x554)) = 0x1;
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
        *(unsigned int *)((a4 + 0x4E4)) = 0x0;
    }
    if ((*(int *)((a4 + 0x560))) != 0) {
        t54 = *(int *)((a4 + 0x4C8));
        if ((((((t54 == 2)) ? 1 : 0) & ((((*(int *)(((0x4CC + a4) + 0x0))) == 0)) ? 1 : 0)) == 0) && (((t54 != 9) || (t56 = *(int *)((a4 + 0x210)), t56 != 67)) && ((t54 != 4) && ((t54 != 7) && ((t54 != 12) && ((t54 != 10) && ((t54 != 13) && (t54 != 8)))))))) {
        } else {
            FUN_0c0355f8(a4);
        }
        t63 = *(int *)((a4 + 0x4C8));
        if ((t63 != 5) && (t63 != 6)) {
            FUN_0c039034(a4);
            FUN_0c039110(a4);
            *(unsigned int *)((a4 + 0x5A4)) = ((*(int *)((a4 + 0x5A0))) << 1);
            if ((*(int *)((a4 + 0x560))) != 11) {
                FUN_0c0356f4(a4, 0x1);
            }
        }
    }
    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        t88 = 0x5C0;
        if ((*(int *)((a4 + 0x5C0))) == 0) {
            *(unsigned int *)((a4 + 0x5C0)) = 0x1;
            t88 = (FUN_0c0cc3f8(0x51BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
        }
        t114 = t88;
    } else {
        t94 = *(int *)((a4 + 0x57C));
        if ((t94 != 0) && (t94 != 1)) {
            if ((t94 != 2) && (t94 != 3)) {
                t96 = t94;
                if (t94 != 4) {
                } else {
                    t96 = (FUN_0c0cc3f8(0x51BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
                }
                t103 = t96;
            } else {
                t103 = (FUN_0c0cc3f8(0x41BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
            }
            t109 = t103;
        } else {
            t109 = (FUN_0c0cc3f8(0x31BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
        }
        t114 = t109;
    }
    return t114;
}
