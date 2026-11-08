/* Straight-line functions with calls and guards (batch gen_hc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c033530(int, int, int, int);
int FUN_0c0336d6(int a4, int a5, int a6);
struct o6E_short { char p[0x6E]; short v; };
struct oBC_int { char p[0xBC]; int v; };


int FUN_0c0336d6(int a4, int a5, int a6)
{
    int stk[8];
    register int t1;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t1 = (((struct oBC_int *)((*(int *)(((int)stk + 4)))))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F274)); }
    return (FUN_0c033530((((int)stk + 4) + 0xC), ((((struct o6E_short *)((*(int *)(((int)stk + 4)))))->v)), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12)))));
}
