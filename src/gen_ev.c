/* Straight-line functions with calls and guards (batch gen_ev): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0dce80(int, int, float);
int FUN_0c0be7ae(int a4, float f4);

int FUN_0c0be7ae(int a4, float f4)
{
    int t1;
    int t3;
    int t4;
    float u10;
    int t11;
    int t13;
    int t14;
    int t15;
    int t30;
    int t31;
    int t2;
    int t5;
    int t7;
    int t8;
    float u9;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    float u27;
    int t38;
    int t40;
    int t41;
    int t42;
    float u43;
    int stk[10];

    t1 = 0xC2623A0;
    t3 = a4;
    t4 = ((*(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0))) + 0x18);
    u10 = f4;
    for (;;) {
        t11 = *(int *)((t4 + 0x0));
        t4 = (t4 + 0x4);
        if (t11 == 0) {
            return t1;
        }
        if ((t11 & 0x80000000) != 0) {
            t2 = t4;
            t2 = (t2 - 4);
            t4 = t2;
            t4 = (t4 + 0x50);
        } else {
            t7 = 0x1;
            if ((t11 & 0x10) != 0) {
                t5 = (*(int *)((t4 + 0x0)));
                t4 = (t4 + 0x4);
                t8 = t4;
                t13 = t11;
                t14 = t11;
                t15 = 0x10;
                for (;;) {
                    t3 = (*(int *)((t8 + 0x0)));
                    if ((t3 & t7) == 0) {
                        t8 = (t8 + 0x8);
                        t22 = t2;
                        t23 = t13;
                        t24 = t4;
                        t25 = t14;
                        t26 = t15;
                        u27 = u10;
                    } else {
                        t14 = t8;
                        u10 = f4;
                        t4 = ((int)stk + 4);
                        t1 = (FUN_0c0dce80(t4, t14, u10));
                        u9 = (*(float *)(((int)stk + 4)));
                        t1 = 0x4;
                        *(float *)((t8 + 0x0)) = u9;
                        t3 = (*(int *)((t8 + 0x0)));
                        t3 = (t3 | t7);
                        *(unsigned int *)((t8 + 0x0)) = t3;
                        u9 = (*(float *)((((int)stk + 4) + t1)));
                        t1 = 0x4;
                        *(float *)((t8 + t1)) = u9;
                        t1 = 0x8;
                        u9 = (*(float *)((((int)stk + 4) + t1)));
                        t1 = 0x8;
                        *(float *)((t8 + t1)) = u9;
                        t8 = (t8 + 0x20);
                    }
                    u10 = u27;
                    t2 = t22;
                    t5 = (t5 - 0x1);
                    t13 = t23;
                    t4 = t24;
                    t14 = t25;
                    t15 = t26;
                    if (t5 == 0) {
                        break;
                    }
                }
            } else {
                if ((t11 & 0x8) == 0) {
                    break;
                }
                t5 = (*(int *)((t4 + 0x0)));
                t4 = (t4 + 0x4);
                t3 = t5;
                t5 = (t5 << 1);
                t8 = t4;
                t5 = (t5 + t3);
                t30 = t11;
                t31 = 0x8;
                for (;;) {
                    if (((*(int *)((t8 + 0x0))) & t7) == 0) {
                        t8 = (t8 + 0x8);
                        t38 = t2;
                        t40 = t4;
                        t41 = t30;
                        t42 = t31;
                        u43 = u10;
                    } else {
                        t30 = t8;
                        u10 = f4;
                        t4 = ((int)stk + 4);
                        t1 = (FUN_0c0dce80(t4, t30, u10));
                        u9 = (*(float *)(((int)stk + 4)));
                        t1 = 0x4;
                        *(float *)((t8 + 0x0)) = u9;
                        t3 = (*(int *)((t8 + 0x0)));
                        t3 = (t3 | t7);
                        *(unsigned int *)((t8 + 0x0)) = t3;
                        u9 = (*(float *)((((int)stk + 4) + t1)));
                        t1 = 0x4;
                        *(float *)((t8 + t1)) = u9;
                        t1 = 0x8;
                        u9 = (*(float *)((((int)stk + 4) + t1)));
                        t1 = 0x8;
                        *(float *)((t8 + t1)) = u9;
                        t8 = (t8 + 0x20);
                    }
                    u10 = u43;
                    t2 = t38;
                    t5 = (t5 - 0x1);
                    t4 = t40;
                    t30 = t41;
                    t31 = t42;
                    if (t5 == 0) {
                        break;
                    }
                }
            }
            t4 = t8;
        }
    }
    for (;;) {
    }
}
