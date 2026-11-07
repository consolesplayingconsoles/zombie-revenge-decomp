/* Straight-line functions with calls and guards (batch gen_ys): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0d8730(int a4, int a5);

int FUN_0c0d8730(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t2;
    int t5;
    register int t6;
    register int t7;
    register int t12;
    register int t14;
    register int t15;
    register int t16;
    register int t29;
    register int t20;
    register int t24;

    *(unsigned int *)(((int)stk + 4)) = 0xC943DC0;
    if (a4 == 16) {
        t0 = 0x0;
        t1 = 0x0;
        t2 = 0xFFFFFFFF;
        for (;;) {
            *(unsigned int *)(((int)stk + 8)) = ((t1 << 1) + (*(int *)(((int)stk + 4))));
            t5 = 0x1;
            t6 = 0x0;
            t7 = ((t1 << 2) << 2);
            for (;;) {
                if (((*(short *)(((*(int *)(((int)stk + 8))) + 0x0))) & t5) == 0) {
                    t12 = t0 == 0;
                    t0 = (t0 + 0x1);
                    if (t12) {
                        t2 = t7;
                    }
                    if ((int)t0 < (int)((int)(a5 + 0xF) >> 4)) {
                        t6 = (t6 + 0x1);
                        t5 = (t5 + t5);
                        t7 = (t7 + 0x1);
                        if ((int)t6 >= (int)0x10) {
                            break;
                        }
                        continue;
                    }
                    break;
                }
                t0 = 0x0;
                t6 = (t6 + 0x1);
                t5 = (t5 + t5);
                t7 = (t7 + 0x1);
                if ((int)t6 >= (int)0x10) {
                    break;
                }
            }
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x4) {
                break;
            }
        }
        t20 = t2;
        t24 = t0;
    } else {
        t14 = (*(int *)(((int)stk + 4)));
        t15 = 0x0;
        t16 = 0x0;
        for (;;) {
            if (((*(short *)((t14 + 0x0))) & (((int)0x1 << (int)((int)(a5 + 0xF) >> 4)) - 1)) == 0) {
                break;
            }
            t16 = (t16 + 0x1);
            t15 = (t15 + 0x10);
            t14 = (t14 + 0x2);
            if ((int)t16 >= (int)0x4) {
                if ((int)0x0 < (int)((int)(a5 + 0xF) >> 4)) {
                    return 0xFFFFFFFF;
                }
                return 0xFFFFFFFF;
            }
        }
        t20 = t15;
        t24 = ((int)(a5 + 0xF) >> 4);
    }
    t29 = t20;
    if ((int)t24 < (int)((int)(a5 + 0xF) >> 4)) {
        t29 = 0xFFFFFFFF;
    }
    return t29;
}
