/* Straight-line functions with calls and guards (batch gen_ca): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01a50c(int, int);
int FUN_0c01a52c(int);
int FUN_0c0b72d6(int);
int FUN_0c0e5f1c(int);
int FUN_0c22ee60(void);
int FUN_0c22eeb2(int, int, int);
int FUN_0c22f312(int, int, int, int, int, int);
int kmytex_FBDeQueueEntry(int, int, int);
int FUN_0c22ea0c(int a4, int a5, int a6, int a7);
int FUN_0c01a672(int a4, int a5, int a6, int a7);

int FUN_0c22ea0c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t5;
    int t6;
    int t49;
    int t53;
    int t54;
    int t56;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t57;
    int t58;
    int t119;
    int t80;
    int t99;
    int t8;
    int t41;
    int t43;
    int t44;
    int t45;
    int t34;
    int t36;
    int t37;
    int t38;
    int t23;
    int t24;
    int t32;
    int t29;
    int t112;
    int t105;
    int stk[14];

    *(unsigned short *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = ((~(((~a5) + 0x1) & 0x1F)) + 0x1);
    if ((int)a5 >= 0) {
        t0 = (a5 & 0x1F);
    }
    t2 = a5;
    if (t0 != 0) {
        t2 = (a5 + (0x20 - t0));
    }
    t5 = *(short *)(((int)stk + 20));
    t6 = *(int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x8));
    t49 = 0x0;
    t53 = a5;
    t54 = 0x0;
    t56 = 0x0;
    if (t6 != 0) {
        t7 = (((t5 << 2) + t5) << 2);
        t9 = t5;
        t10 = t6;
        t11 = a5;
        t12 = 0x0;
        t13 = 0x800;
        t14 = 0x0;
        t15 = 0x0;
        for (;;) {
            if ((int)(*(int *)((t10 + 0x10))) >= (int)t2) {
                if (t14 == 0) {
                    t14 = t10;
                }
                t9 = 0xC0E5F1C;
                t8 = (*(int *)((t10 + 0xC)));
                t7 = t13;
                t7 = (FUN_0c0e5f1c(t10));
                if (t7 != 0) {
                    t10 = a4;
                    t11 = (*(int *)((a4 + 0xC)));
                    t9 = 0xFFFFF800;
                    *(unsigned int *)(((int)stk + 12)) = t11;
                    t11 = (t11 + a7);
                    t13 = a7;
                    t11 = (t11 & t9);
                    t8 = (*(int *)(((int)stk + 12)));
                    t8 = (t8 + (*(int *)((t10 + 0x10))));
                    *(unsigned int *)(((int)stk + 12)) = t8;
                    if (((int)t11 < (int)t8) && (t23 = *(int *)((t10 + 0xC)), t24 = ((int)t11 >= (int)t8), t8 = t11, t8 = (t8 - t23), (int)t8 < (int)t2)) {
                        if ((int)((*(int *)(((int)stk + 12))) - t11) >= (int)t2) {
                            t12 = 0x2;
                            t15 = t10;
                            t10 = 0x0;
                            t29 = t12;
                        } else {
                            t10 = (*(int *)((t10 + 0x8)));
                        }
                        t32 = t29;
                    } else {
                        t12 = 0x1;
                        t15 = t10;
                        t10 = 0x0;
                        t32 = t12;
                    }
                    t34 = t8;
                    t36 = t9;
                    t37 = t32;
                    t38 = t13;
                } else {
                    t10 = a4;
                    t11 = (*(int *)((a4 + 0xC)));
                    t12 = 0x1;
                    t15 = t10;
                    t10 = 0x0;
                    t37 = t12;
                }
                t41 = t34;
                t43 = t36;
                t44 = t37;
                t45 = t38;
            } else {
                t10 = (*(int *)((t10 + 0x8)));
                t41 = t8;
                t43 = t9;
                t44 = t12;
                t45 = t13;
            }
            t8 = t41;
            t9 = t43;
            t12 = t44;
            t13 = t45;
            if (t10 == 0) {
                break;
            }
        }
        t49 = t15;
        t53 = t11;
        t54 = t12;
        t56 = t14;
    }
    t57 = t49;
    t58 = t54;
    if ((t54 == 0) && (t56 != 0)) {
        t57 = t56;
        t58 = 0x1;
    }
    t119 = 0x3;
    if (t57 != 0) {
        if (t58 == 2) {
            *(int *)((int)stk + 8) = 0x1;
            *(int *)((int)stk + 4) = 0x0;
            t112 = (FUN_0c22f312((*(short *)(((int)stk + 20))), t53, t2, (*(int *)(((int)stk + 16))), 0x0, 0x1));
        } else {
            if ((*(int *)((t57 + 0x10))) == t2) {
                kmytex_FBDeQueueEntry((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x8), (((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0xC), t57);
                FUN_0c22eeb2(((((t5 << 2) + t5) << 2) + 0xC239EF8), (((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x4), t57);
                *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x8)) = (*(int *)((t57 + 0xC)));
                *(unsigned int *)((t57 + 0x14)) = (*(int *)(((int)stk + 16)));
                *(unsigned short *)((t57 + 0x0)) = 0x1;
                if ((*(short *)(((int)stk + 20))) == 0) {
                    *(unsigned short *)((t57 + 0x0)) = ((*(short *)((t57 + 0x0))) | 0x200);
                } else {
                    *(unsigned short *)((t57 + 0x0)) = ((*(short *)((t57 + 0x0))) | 0x400);
                }
                *(unsigned short *)((t57 + 0x0)) = ((*(short *)((t57 + 0x0))) | 0x4);
                *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10))) - (*(int *)((t57 + 0x10))));
                t105 = 0x0;
            } else {
                t80 = FUN_0c22ee60();
                t99 = 0x3;
                if (t80 == 0) {
                } else {
                    *(unsigned int *)((t80 + 0xC)) = (*(int *)((t57 + 0xC)));
                    *(unsigned int *)((t80 + 0x10)) = t2;
                    *(unsigned int *)((t57 + 0x10)) = ((*(int *)((t57 + 0x10))) - t2);
                    *(unsigned int *)((t57 + 0xC)) = ((*(int *)((t57 + 0xC))) + t2);
                    *(unsigned int *)(((int)stk + 12)) = ((((t5 << 2) + t5) << 2) + 0xC239EF8);
                    FUN_0c22eeb2((*(int *)(((int)stk + 12))), (((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x4), t80);
                    *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x8)) = (*(int *)((t80 + 0xC)));
                    *(unsigned int *)((t80 + 0x14)) = (*(int *)(((int)stk + 16)));
                    if ((*(short *)(((int)stk + 20))) == 0) {
                        *(unsigned short *)((t80 + 0x0)) = ((*(short *)((t80 + 0x0))) | 0x200);
                    } else {
                        *(unsigned short *)((t80 + 0x0)) = ((*(short *)((t80 + 0x0))) | 0x400);
                    }
                    *(unsigned short *)((t80 + 0x0)) = ((*(short *)((t80 + 0x0))) | 0x4);
                    *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10))) - (*(int *)((t80 + 0x10))));
                    t99 = 0x0;
                }
                t105 = t99;
            }
            t112 = t105;
        }
        t119 = t112;
    }
    return t119;
}

int FUN_0c01a672(int a4, int a5, int a6, int a7)
{
    int t4;
    int t40;
    int t41;
    int t50;
    int t51;
    int t52;
    int t68;

    if (a4 == 0) {
        *(unsigned int *)0xC23F220 = 0x2;
    } else {
        *(unsigned int *)0xC23F220 = 0x1;
    }
    if (((int)(*(int *)((0xC23F25C + (a4 << 2)))) > 0) && (t4 = *(int *)0xC5229BC, (unsigned int)t4 > (unsigned int)0x0)) {
        if ((*(int *)0xC5229FC) != 1) {
            if ((*(int *)0xC522A00) == 0) {
                if ((int)(*(int *)0xC23F22C) >= (int)(*(int *)0xC5229BC)) {
                    if (((*(int *)0xC5229C4) != 1) && (t40 = *(int *)0xC5229C0, t41 = *(int *)0xC23F234, (unsigned int)t41 < (unsigned int)t40)) {
                        *(unsigned int *)((0xC23F25C + (a4 << 2))) = 0x383;
                    }
                } else {
                    *(unsigned int *)((0xC23F25C + (a4 << 2))) = 0x383;
                }
            } else {
                if (((int)(*(int *)(((0xC23F22C + (a4 << 2)) + 0x0))) >= (int)(*(int *)(((((a4 << 2) << 2) + 0xC5229BC) + 0x0)))) && ((t50 = *(int *)(((((a4 << 2) << 2) + 0xC5229BC) + 0x8)), t50 == 1) || (t51 = *(int *)(((((a4 << 2) << 2) + 0xC5229BC) + 0x4)), t52 = *(int *)(((0xC23F234 + (a4 << 2)) + 0x0)), (unsigned int)t52 >= (unsigned int)t51))) {
                } else {
                    *(unsigned int *)((0xC23F25C + (a4 << 2))) = 0x383;
                }
            }
        }
        if ((((*(int *)(((((((a4 << 2) + a4) << 2) << 2) + 0xC2497E0) + 0x0))) & 4) != 0) && (t68 = *(int *)(((a4 << 2) + 0xC23F25C)), (int)t68 < (int)0x2D0)) {
            *(volatile int *)((((a4 << 2) + 0xC23F25C) + 0x0));
            *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) - (FUN_0c0e5f1c(((a4 << 2) + 0xC23F25C))));
        } else {
            *(unsigned int *)((0xC23F25C + (a4 << 2))) = ((*(int *)((0xC23F25C + (a4 << 2)))) - 1);
        }
        if ((int)(*(int *)((0xC23F25C + (a4 << 2)))) < 0) {
            *(unsigned int *)((0xC23F25C + (a4 << 2))) = 0x0;
        }
        FUN_0c01a50c(a4, 0x4);
        return FUN_0c01a52c(a4);
    }
    if ((*(int *)(((a4 << 2) + 0xC23EDE0))) != 0) {
        FUN_0c0b72d6(a4);
    }
    *(unsigned int *)(((a4 << 2) + 0xC23EDE0)) = 0xB;
    *(unsigned int *)((((a4 << 2) + 0xC23F224) + 0x0)) = 0x78;
    *(unsigned int *)0xC23F21C = 0x0;
    return 0x70;
}
