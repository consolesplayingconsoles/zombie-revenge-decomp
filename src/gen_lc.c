/* Straight-line functions with calls and guards (batch gen_lc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7c66(int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0e5dc0(void);
int FUN_0c0bdf84(int a4);

int FUN_0c0bdf84(int a4)
{
    int stk[22];
    register int t0;
    register int t1;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register float u14;
    register float u15;
    register float u17;
    register float u18;
    register float u19;
    register int t20;
    register int t21;
    register int t22;
    register int t26;

    t0 = *(int *)((a4 + 0x0));
    t1 = *(short *)((a4 + 0xC));
    *(unsigned int *)(((int)stk + 8)) = t0;
    FUN_0c0a7c66((((int)stk + 4) + 0x20), ((((int)stk + 4) + 0x20) + 0x4), ((((int)stk + 4) + 0x20) + 0x8));
    *(volatile int *)(((((int)stk + 4) + 0x20) + 0x0));
    t5 = t1;
    t6 = (FUN_0c0e5dc0());
    t7 = t0;
    for (;;) {
        t8 = *(int *)(((int)stk + 8));
        t9 = *(int *)((((t6 * 0x2C) + t8) + 0x28));
        t10 = *(int *)((((t6 * 0x2C) + t8) + 0x24));
        FUN_0c0db470(t7, (((int)stk + 4) + 0x14));
        *(float *)(((int)stk + 4)) = (*(float *)(((int)stk + 24)));
        *(unsigned int *)((((int)stk + 4) + 0x0)) = ((*(int *)((((int)stk + 4) + 0x0))) | 0x1);
        u14 = *(float *)(((int)stk + 28));
        u15 = *(float *)(((int)stk + 32));
        FUN_0c0db4d0((t7 + 0xC), (((int)stk + 4) + 0x8));
        u17 = *(float *)(((int)stk + 12));
        u18 = *(float *)(((int)stk + 16));
        u19 = *(float *)(((int)stk + 20));
        t20 = t10;
        t21 = t9;
        for (;;) {
            t22 = *(int *)((t21 + 0x0));
            t21 = (t21 + 0x4);
            t20 = (t20 - 0x1);
            *(float *)((t22 + 0x0)) = (*(float *)(((int)stk + 4)));
            *(float *)((t22 + 0x4)) = u14;
            *(float *)((t22 + 0x8)) = u15;
            *(float *)((t22 + 0xC)) = u17;
            *(float *)((t22 + 0x10)) = u18;
            *(float *)((t22 + 0x14)) = u19;
            if (t20 == 0) {
                break;
            }
        }
        t26 = *(short *)((a4 + 0xC));
        t6 = (t6 + 0x1);
        t7 = (t7 + 0x2C);
        if ((int)t6 >= (int)t26) {
            t6 = 0x0;
        }
        t5 = (t5 - 0x1);
        if (t5 == 0) {
            break;
        }
    }
    return t26;
}
