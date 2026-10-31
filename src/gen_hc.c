/* Straight-line functions with calls and guards (batch gen_hc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c033530(int, int, int, int);
int FUN_0c0336d6(int a4, int a5, int a6);

int FUN_0c0336d6(int a4, int a5, int a6)
{
    int stk[8];
    register int t1;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t1 = *(int *)(((*(int *)(((int)stk + 4))) + 0xBC));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F274)); }
    return (FUN_0c033530((((int)stk + 4) + 0xC), (*(short *)(((*(int *)(((int)stk + 4))) + 0x6E))), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12)))));
}
