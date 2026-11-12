/* Straight-line functions with calls and guards (batch gen_rx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int _modls(int);
int FUN_0c22ee60(void);
int FUN_0c22eeb2(int, int, int);
int FUN_0c22f312(int, int, int, int, int, int);
int kmytex_FBDeQueueEntry(int, int, int);
int FUN_0c22ea0c(int a4, int a5, int a6, int a7);

int FUN_0c22ea0c(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t2;
    register int t5;
    register int t42;
    register int t46;
    register int t47;
    int t49;
    register int t7;
    int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t50;
    register int t51;
    register int t112;
    register int t73;
    register int t8;
    register int t36;
    register int t38;
    int t22;
    register int t23;

    *(unsigned short *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t0 = ((~(((~a5) + 0x1) & 0x1F)) + 0x1);
    if ((int)a5 >= 0) {
        t0 = (a5 & 0x1F);
    }
    t2 = a5;
    if (t0 != 0) {
        t2 = (a5 + (0x20 - t0));
    }
    t5 = *(short *)(((int)stk + 16));
    t10 = *(int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x8));
    t42 = 0x0;
    t46 = a5;
    t47 = 0x0;
    t49 = 0x0;
    if (t10 != 0) {
        t7 = (((t5 << 2) + t5) << 2);
        t9 = t5;
        t11 = a5;
        t12 = 0x0;
        t13 = 0x0;
        t14 = 0x0;
        for (;;) {
            if ((int)(*(int *)((t10 + 0x10))) >= (int)t2) {
                if (t13 == 0) {
                    t13 = t10;
                }
                t9 = 0xC0E5F1C;
                t8 = (*(int *)((t10 + 0xC)));
                t7 = 0x800;
                t7 = ((int)((int)t8 % (int)t7));
                if (t7 != 0) {
                    t11 = (*(int *)((t10 + 0xC)));
                    t9 = 0xFFFFF800;
                    *(unsigned int *)(((int)stk + 8)) = t11;
                    t11 = (t11 + 0x800);
                    t11 = (t11 & t9);
                    t8 = (*(int *)(((int)stk + 8)));
                    t8 = (t8 + (*(int *)((t10 + 0x10))));
                    *(unsigned int *)(((int)stk + 8)) = t8;
                    if (((int)t11 < (int)t8) && (t22 = *(int *)((t10 + 0xC)), t23 = ((int)t11 >= (int)t8), t8 = t11, t8 = (t8 - t22), (int)t8 < (int)t2)) {
                        if ((int)((*(int *)(((int)stk + 8))) - t11) >= (int)t2) {
                            t12 = 0x2;
                            t14 = t10;
                            t10 = 0x0;
                        } else {
                            t10 = (*(int *)((t10 + 0x8)));
                        }
                    } else {
                        t12 = 0x1;
                        t14 = t10;
                        t10 = 0x0;
                    }
                    t36 = t8;
                    t38 = t9;
                } else {
                    t11 = (*(int *)((t10 + 0xC)));
                    t12 = 0x1;
                    t14 = t10;
                    t10 = 0x0;
                    t38 = 0xC0E5F1C;
                }
            } else {
                t10 = (*(int *)((t10 + 0x8)));
                t36 = t8;
                t38 = t9;
            }
            t8 = t36;
            t9 = t38;
            if (t10 == 0) {
                break;
            }
        }
        t42 = t14;
        t46 = t11;
        t47 = t12;
        t49 = t13;
    }
    t50 = t42;
    t51 = t47;
    if ((t47 == 0) && (t49 != 0)) {
        t50 = t49;
        t51 = 0x1;
    }
    t112 = 0x3;
    if (t50 != 0) {
        if (t51 == 2) {
            *(int *)((int)stk + 4) = 0x1;
            *(int *)((int)stk + 0) = 0x0;
            t112 = (FUN_0c22f312((*(short *)(((int)stk + 16))), t46, t2, (*(int *)(((int)stk + 12))), 0x0, 0x1));
        } else {
            if ((*(int *)((t50 + 0x10))) == t2) {
                kmytex_FBDeQueueEntry((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x8), (((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0xC), t50);
                FUN_0c22eeb2(((((t5 << 2) + t5) << 2) + 0xC239EF8), (((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x4), t50);
                *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x8)) = (*(int *)((t50 + 0xC)));
                *(unsigned int *)((t50 + 0x14)) = (*(int *)(((int)stk + 12)));
                *(unsigned short *)((t50 + 0x0)) = 0x1;
                if ((*(short *)(((int)stk + 16))) == 0) {
                    *(unsigned short *)((t50 + 0x0)) = ((*(short *)((t50 + 0x0))) | 0x200);
                } else {
                    *(unsigned short *)((t50 + 0x0)) = ((*(short *)((t50 + 0x0))) | 0x400);
                }
                *(unsigned short *)((t50 + 0x0)) = ((*(short *)((t50 + 0x0))) | 0x4);
                *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10))) - (*(int *)((t50 + 0x10))));
                t112 = 0x0;
            } else {
                t73 = FUN_0c22ee60();
                t112 = 0x3;
                if (t73 == 0) {
                } else {
                    *(unsigned int *)((t73 + 0xC)) = (*(int *)((t50 + 0xC)));
                    *(unsigned int *)((t73 + 0x10)) = t2;
                    *(unsigned int *)((t50 + 0x10)) = ((*(int *)((t50 + 0x10))) - t2);
                    *(unsigned int *)((t50 + 0xC)) = ((*(int *)((t50 + 0xC))) + t2);
                    *(unsigned int *)(((int)stk + 8)) = ((((t5 << 2) + t5) << 2) + 0xC239EF8);
                    FUN_0c22eeb2((*(int *)(((int)stk + 8))), (((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x4), t73);
                    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x8)) = (*(int *)((t73 + 0xC)));
                    *(unsigned int *)((t73 + 0x14)) = (*(int *)(((int)stk + 12)));
                    if ((*(short *)(((int)stk + 16))) == 0) {
                        *(unsigned short *)((t73 + 0x0)) = ((*(short *)((t73 + 0x0))) | 0x200);
                    } else {
                        *(unsigned short *)((t73 + 0x0)) = ((*(short *)((t73 + 0x0))) | 0x400);
                    }
                    *(unsigned short *)((t73 + 0x0)) = ((*(short *)((t73 + 0x0))) | 0x4);
                    *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10))) - (*(int *)((t73 + 0x10))));
                    t112 = 0x0;
                }
            }
        }
    }
    return t112;
}
