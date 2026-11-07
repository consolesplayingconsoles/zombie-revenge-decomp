/* Straight-line functions with calls and guards (batch gen_lt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0e19f2(void);
int FUN_0c0307c0(int a4, int a5, int a6, int a7);

int FUN_0c0307c0(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x80));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t1 = *(int *)((a4 + 0xA0));
        *(unsigned int *)((a4 + 0xA0)) = (t1 - 1);
        if ((int)(t1 - 1) <= 0) {
            FUN_0c0cc3f8((*(int *)((a4 + 0x9C))), a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            return FUN_0c0e19f2();
        }
        return 0xA0;
    }
    FUN_0c0cc3f8((*(int *)((a4 + 0x98))), a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
    return 0x80;
}
