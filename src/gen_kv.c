/* Straight-line functions with calls and guards (batch gen_kv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c1248(int, int);
int FUN_0c0e2a4c(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0c137c(int a4);

int FUN_0c0c137c(int a4)
{
    int stk[3];
    register int t0;

    t0 = *(int *)(((a4 - 12) + 0x0));
    if ((*(int *)(((a4 - 12) + ((t0 - 1) << 2)))) != t0) {
        *(unsigned int *)0xC2622C0 = 0xFFEECC00;
        *(unsigned int *)0xC2622C4 = a4;
        *(unsigned int *)0xC2622C8 = (*(int *)(((a4 - 12) + 0x0)));
        *(unsigned int *)0xC2622CC = (*(int *)(((a4 - 12) + (((*(int *)(((a4 - 12) + 0x0))) - 1) << 2))));
        for (;;) {
        }
    }
    *(unsigned int *)0xC2622C0 = 0xEE00EE;
    *(unsigned int *)0xC2622C4 = a4;
    *(unsigned int *)0xC2622C8 = (*(int *)(((a4 - 12) + 0x0)));
    *(unsigned int *)0xC2622CC = (*(int *)(((a4 - 12) + (((*(int *)(((a4 - 12) + 0x0))) - 1) << 2))));
    FUN_0c0e2a4c(a4, 0xC2622C0, 0xC2622C0, t0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    return FUN_0c0c1248(0x0, a4);
}
