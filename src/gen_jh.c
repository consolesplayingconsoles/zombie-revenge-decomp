/* Straight-line functions with calls and guards (batch gen_jh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c0340(int);
int FUN_0c0c5d32(int, float);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0c6534(int a4, int a5, int a6, int a7);

int FUN_0c0c6534(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t28;
    register int t15;
    register int t16;
    register int t22;
    register int t24;
    int t1;
    int t8;
    register int t35;

    *(unsigned int *)(((int)stk + 4)) = a4;
    if (((*(int *)0xC23ED50) == 14) && (t1 = *(int *)0xC2475B0, (t1 & 1) != 0)) {
    } else {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    if (((*(int *)0xC247030) != 4) && (t8 = *(int *)0xC247034, t8 != 4)) {
        t35 = t8;
    } else {
        t28 = 0x84;
        if ((int)(*(int *)0xC247074) <= (int)0x1) {
            FUN_0c0db470(0xC1E9804, (((int)stk + 4) + 0x4));
            FUN_0c0c5d32((((int)stk + 4) + 0x4), (*(float *)0xC0C6614));
            t15 = *(int *)(((int)stk + 4));
            t16 = *(int *)((t15 + 0x34));
            *(unsigned int *)((t15 + 0x34)) = (t16 + 0x1);
            if (t16 == 0) {
                FUN_0c0cc3f8(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            }
            t22 = *(int *)0xC23A258;
            t24 = t22;
            if ((t22 & 1) != 0) {
                t24 = (FUN_0c0c0340(0xC1E96A8));
            }
            t28 = t24;
        }
        t35 = t28;
    }
    return t35;
}
