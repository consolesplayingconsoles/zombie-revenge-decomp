/* Straight-line functions with calls and guards (batch gen_pp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c097520(int, int, int);
int FUN_0c0975d0(int, int, int, int);
int FUN_0c0dbda0(int);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c097870(int a4, int a5, int a6, int a7);

int FUN_0c097870(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t5;
    register int t90;
    register int t6;
    register int t10;
    register int t16;
    register int t18;
    register int t21;
    register int t28;
    register int t34;
    register int t41;
    register int t47;
    register int t53;
    register int t60;
    register int t66;
    register int t67;
    register int t93;
    register int t94;
    register int t96;
    register int t79;

    t0 = *(int *)((a4 + 0x30));
    FUN_0c0685a4(a4, a5, a6, a7);
    if (((*(int *)((t0 + 0x2EC))) & 15) != 0) {
        *(unsigned int *)((a4 + 0x34)) = 0x1;
    }
    t5 = *(int *)((a4 + 0x38));
    t90 = t5;
    if ((int)t5 >= (int)0xE) {
        if ((int)t5 >= (int)0x22) {
            t79 = t5;
        } else {
            t6 = *(int *)((a4 + 0x38));
            nlPushMatrix(0x0);
            FUN_0c0dbda0((*(int *)((t0 + 0x3E4))));
            *(unsigned int *)(((int)stk + 4)) = (a4 + 0x44);
            t10 = 0x0;
            for (;;) {
                FUN_0c097520((t6 - 14), (*(int *)(((int)stk + 4))), 0x0);
                t10 = (t10 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
                if ((int)t10 >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0xC0));
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            t16 = (a4 + 0x68);
            for (;;) {
                FUN_0c097520((t6 - 14), t16, 0x1);
                t18 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t18 + 0x1);
                t16 = (t16 + 0xC);
                if ((int)(t18 + 0x1) >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x100));
            *(unsigned int *)(((int)stk + 4)) = ((a4 + 0x44) + 0x48);
            t21 = 0x0;
            for (;;) {
                FUN_0c097520((t6 - 14), (*(int *)(((int)stk + 4))), 0x2);
                t21 = (t21 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
                if ((int)t21 >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0975d0((t6 - 14), (0x1AC + a4), 0x3, 0xA);
            FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x180));
            *(unsigned int *)(((int)stk + 4)) = ((a4 + 0x44) + 0x6C);
            t28 = 0x0;
            for (;;) {
                FUN_0c097520((t6 - 14), (*(int *)(((int)stk + 4))), 0x3);
                t28 = (t28 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
                if ((int)t28 >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x1C0));
            *(unsigned int *)(((int)stk + 4)) = ((a4 + 0x44) + 0x90);
            t34 = 0x0;
            for (;;) {
                FUN_0c097520((t6 - 14), (*(int *)(((int)stk + 4))), 0x4);
                t34 = (t34 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
                if ((int)t34 >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0975d0((t6 - 14), ((0x1AC + a4) + 0xF0), 0x3, 0xA);
            FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x240));
            *(unsigned int *)(((int)stk + 4)) = ((a4 + 0x44) + 0x144);
            t41 = 0x0;
            for (;;) {
                FUN_0c097520((t6 - 14), (*(int *)(((int)stk + 4))), 0x9);
                t41 = (t41 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
                if ((int)t41 >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x280));
            *(unsigned int *)(((int)stk + 4)) = ((a4 + 0x44) + 0xB4);
            t47 = 0x0;
            for (;;) {
                FUN_0c097520((t6 - 14), (*(int *)(((int)stk + 4))), 0x5);
                t47 = (t47 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
                if ((int)t47 >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x2C0));
            *(unsigned int *)(((int)stk + 4)) = ((a4 + 0x44) + 0xD8);
            t53 = 0x0;
            for (;;) {
                FUN_0c097520((t6 - 14), (*(int *)(((int)stk + 4))), 0x6);
                t53 = (t53 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
                if ((int)t53 >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0975d0((t6 - 14), ((0x1AC + a4) + 0x1E0), 0x3, 0xA);
            FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x340));
            *(unsigned int *)(((int)stk + 4)) = ((a4 + 0x44) + 0xFC);
            t60 = 0x0;
            for (;;) {
                FUN_0c097520((t6 - 14), (*(int *)(((int)stk + 4))), 0x7);
                t60 = (t60 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
                if ((int)t60 >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0dbda0(((*(int *)((t0 + 0x3E4))) + 0x380));
            t66 = ((a4 + 0x44) + 0x120);
            t67 = 0x0;
            for (;;) {
                FUN_0c097520((t6 - 14), t66, 0x8);
                t67 = (t67 + 0x1);
                t66 = (t66 + 0xC);
                if ((int)t67 >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0975d0((t6 - 14), ((0x1AC + a4) + 0x2D0), 0x3, 0xA);
            nlPopMatrix(0x1);
        }
        t90 = t79;
    }
    t93 = FUN_0c0849da(t90, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    t94 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x3C)) = (t94 - 1);
    if ((int)(t94 - 1) < 0) {
        *(unsigned int *)((a4 + 0x3C)) = (*(int *)((a4 + 0x40)));
        t96 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t96 + 0x1);
        if ((int)(t96 + 0x1) > (int)0x3C) {
            return FUN_0c0e19f2();
        }
        return 0x40;
    }
    return t93;
}
