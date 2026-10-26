/* Straight-line functions with calls and guards (batch gen_eu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void FUN_0c0cad0c(int a4, int a5, int a6, int a7, float f4);

void FUN_0c0cad0c(int a4, int a5, int a6, int a7, float f4)
{
    int t3;
    int t4;
    float u7;
    int t8;
    int t11;
    int t17;
    int t22;
    int t23;
    int t24;
    int t0;
    int t1;
    int t2;
    int t5;
    float u6;
    int t33;
    int stk[4];

    if (a4 != 0) {
        t3 = (a4 + 0x18);
        t4 = a7;
        u7 = f4;
        for (;;) {
            t8 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            if (t8 == 0) {
                return;
            }
            if ((t8 & 0x80000000) != 0) {
                t1 = t3;
                t1 = (t1 - 4);
                t3 = t1;
                t3 = (t3 + 0x50);
            } else {
                t2 = t8;
                t5 = 0x10;
                t4 = 0xFFFFFFFE;
                if ((t2 & t5) != 0) {
                    t5 = (*(int *)((t3 + 0x0)));
                    t3 = (t3 + 0x4);
                    t11 = t3;
                    for (;;) {
                        if (((*(int *)((t11 + 0x0))) & 0x1) == 0) {
                            t11 = (t11 + 0x8);
                        } else {
                            t0 = 0x18;
                            u7 = (*(float *)((t11 + t0)));
                            t0 = 0x1C;
                            u6 = (*(float *)((t11 + t0)));
                            t0 = 0x4;
                            *(float *)((((int)stk + 4) + t0)) = u6;
                            t0 = 0x4;
                            t2 = (*(int *)(((((int)stk + 4) + 0x4) + 0x0)));
                            t2 = (t2 & t4);
                            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t2;
                            u6 = (*(float *)((((int)stk + 4) + t0)));
                            t0 = 0x18;
                            *(float *)((t11 + t0)) = u6;
                            t0 = 0x1C;
                            *(float *)((t11 + t0)) = u7;
                            t17 = (t11 + 0x1C);
                            t11 = (t11 + 0x20);
                            t2 = (*(int *)((t17 + 0x0)));
                            t2 = (t2 | 0x1);
                            *(unsigned int *)((t17 + 0x0)) = t2;
                        }
                        t5 = (t5 - 0x1);
                        if (t5 == 0) {
                            break;
                        }
                    }
                    t33 = t11;
                } else {
                    t5 = 0x8;
                    if ((t8 & t5) == 0) {
                        break;
                    }
                    t5 = (*(int *)((t3 + 0x0)));
                    t3 = (t3 + 0x4);
                    t22 = t5;
                    t5 = (t5 << 1);
                    t5 = (t5 + t22);
                    t23 = t22;
                    t24 = t3;
                    for (;;) {
                        t2 = (*(int *)((t24 + 0x0)));
                        if ((t2 & 0x1) == 0) {
                            t24 = (t24 + 0x8);
                        } else {
                            t0 = 0x18;
                            t23 = ((int)stk + 4);
                            u7 = (*(float *)((t24 + t0)));
                            t0 = 0x1C;
                            u6 = (*(float *)((t24 + t0)));
                            t0 = 0x18;
                            *(float *)(((int)stk + 4)) = u6;
                            t2 = (*(int *)((t23 + 0x0)));
                            t2 = (t2 & t4);
                            *(unsigned int *)((t23 + 0x0)) = t2;
                            t23 = t24;
                            u6 = (*(float *)(((int)stk + 4)));
                            t23 = (t23 + 0x1C);
                            *(float *)((t24 + t0)) = u6;
                            t0 = 0x1C;
                            *(float *)((t24 + t0)) = u7;
                            t24 = (t24 + 0x20);
                            t2 = (*(int *)((t23 + 0x0)));
                            t2 = (t2 | 0x1);
                            *(unsigned int *)((t23 + 0x0)) = t2;
                        }
                        t5 = (t5 - 0x1);
                        if (t5 == 0) {
                            break;
                        }
                    }
                    t33 = t24;
                }
                t3 = t33;
            }
        }
        for (;;) {
        }
    }
}
