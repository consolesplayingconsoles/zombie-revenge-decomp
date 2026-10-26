/* Straight-line functions with calls and guards (batch gen_cv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0555ca(int, int, int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dc4c0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dc6e0(int);
int FUN_0c0dc890(int);
int FUN_0c0e61d4(int);
void FUN_0c036256(int a4);

void FUN_0c036256(int a4)
{
    int t0;
    int t7;
    int t9;
    int t10;
    int t25;
    int t26;
    int t49;
    int t50;
    int t65;
    int t66;
    float u12;
    int t19;
    float u35;
    float u52;
    int t59;
    float u75;
    int stk[19];

    t0 = *(int *)0xC23A1A8;
    if ((0x100 & t0) == 0) {
        if ((*(int *)0xC23A180) == 2) {
            t7 = *(int *)((a4 + 0x5C4));
            if ((t0 & 0x1) == 0) {
                t9 = *(int *)((a4 + 0x304));
                t10 = *(int *)((a4 + 0x308));
                if (((*(int *)((t7 + 0x4))) != 0) && (u12 = *(float *)((t7 + 0x0)), !(((float)t9 / (float)t10) > u12))) {
                    if ((*(int *)((a4 + 0x48C))) == 46) {
                        t19 = (*(short *)((a4 + 0x6E)));
                    } else {
                        t19 = (*(int *)((a4 + 0x1E0)));
                    }
                    FUN_0c0e61d4(0xFFFF8000);
                    *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 32))) + (*(float *)0xC036448));
                    *(float *)(((int)stk + 16)) = 0.0f;
                    *(float *)(((int)stk + 20)) = 0.0f;
                    *(float *)(((int)stk + 24)) = (*(float *)0xC03644C);
                    t25 = (t19 - 32768);
                    t26 = t7;
                    for (;;) {
                        FUN_0c0dc5a0();
                        FUN_0c0dc890(t25);
                        FUN_0c0dc6e0(0xFFFFE000);
                        FUN_0c0db4d0((((int)stk + 4) + 0xC), ((int)stk + 4));
                        FUN_0c0dc4c0(0x1);
                        FUN_0c0555ca(a4, (*(int *)((t26 + 0x4))), (((int)stk + 4) + 0x18), ((int)stk + 4));
                        t26 = (t26 + 0x8);
                        t25 = (t25 + 0x1000);
                        if (((*(int *)((t26 + 0x4))) != 0) && (u35 = *(float *)((t26 + 0x0)), !(((float)t9 / (float)t10) > u35))) continue;
                        break;
                    }
                    *(unsigned int *)((a4 + 0x5C4)) = t26;
                }
            } else {
                t49 = *(int *)0xC9433B0;
                if (t49 != 0) {
                    t50 = *(int *)0xC9433AC;
                    if (((*(int *)((t7 + 0x4))) != 0) && (u52 = *(float *)((t7 + 0x0)), !(((float)t50 / (float)t49) > u52))) {
                        if ((*(int *)((a4 + 0x48C))) == 46) {
                            t59 = (*(short *)((a4 + 0x6E)));
                        } else {
                            t59 = (*(int *)((a4 + 0x1E0)));
                        }
                        FUN_0c0e61d4(0xFFFF8000);
                        *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 32))) + (*(float *)0xC036448));
                        *(float *)(((int)stk + 16)) = 0.0f;
                        *(float *)(((int)stk + 20)) = 0.0f;
                        *(float *)(((int)stk + 24)) = (*(float *)0xC03644C);
                        t65 = (t59 - 32768);
                        t66 = t7;
                        for (;;) {
                            FUN_0c0dc5a0();
                            FUN_0c0dc890(t65);
                            FUN_0c0dc6e0(0xFFFFE000);
                            FUN_0c0db4d0((((int)stk + 4) + 0xC), ((int)stk + 4));
                            FUN_0c0dc4c0(0x1);
                            FUN_0c0555ca(a4, (*(int *)((t66 + 0x4))), (((int)stk + 4) + 0x18), ((int)stk + 4));
                            t66 = (t66 + 0x8);
                            t65 = (t65 + 0x1000);
                            if (((*(int *)((t66 + 0x4))) != 0) && (u75 = *(float *)((t66 + 0x0)), !(((float)t50 / (float)t49) > u75))) continue;
                            break;
                        }
                        *(unsigned int *)((a4 + 0x5C4)) = t66;
                    }
                }
            }
        }
    }
}
