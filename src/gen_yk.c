/* Straight-line functions with calls and guards (batch gen_yk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0dfcee(float, float);
int FUN_0c0e5dc0(void);
int FUN_0c0df660(int a4, int a5, int a6);

int FUN_0c0df660(int a4, int a5, int a6)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register float F4;
    register float F5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    *(unsigned int *)(((int)stk + 16)) = v0_0;
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    *(unsigned int *)(((int)stk + 8)) = v0_2;
    *(unsigned int *)0xC94C698 = 0xFFFFFFFF;
    if (((int)(*(int *)(((int)stk + 12))) <= (int)(*(int *)(((int)stk + 8))))) goto L_C0DF686;
    *(unsigned int *)0xC94C698 = 0x0;
    L_C0DF682:;
    goto L_C0DF682;
    L_C0DF686:;
    FUN_0c0dfcee(640.0f, 480.0f);
    *(unsigned int *)0xC94C6A0 = (*(int *)(((int)stk + 12)));
    *(unsigned int *)0xC94C69C = (*(int *)(((int)stk + 16)));
    v0_0 = *(int *)(((int)stk + 8));
    v0_1 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 16)) = ((((v0_0 << 1) + v0_1) + 0x3) & 0xFFFFFFFC);
    *(unsigned int *)0xC94C6A4 = ((((v0_0 << 1) + v0_1) + 0x3) & 0xFFFFFFFC);
    *(volatile int *)(((int)stk + 12));
    v0_0 = FUN_0c0e5dc0();
    v0_1 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 16)) = ((((v0_0 << 2) + v0_1) + 0x3) & 0xFFFFFFFC);
    *(unsigned int *)0xC94C6A8 = ((((v0_0 << 2) + v0_1) + 0x3) & 0xFFFFFFFC);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    L_C0DF70A:;
    if (((int)(*(int *)(((int)stk + 4))) < (int)(*(int *)(((int)stk + 8))))) goto L_C0DF6F8;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    L_C0DF72C:;
    *(volatile int *)0xC94C6A0;
    v0_0 = FUN_0c0e5dc0();
    v0_1 = (v0_0);
    if (((int)(*(int *)(((int)stk + 4))) < (int)v0_0)) goto L_C0DF71A;
    return v0_1;
    L_C0DF71A:;
    *(unsigned int *)((((*(int *)(((int)stk + 4))) << 2) + (*(int *)0xC94C6A4))) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    goto L_C0DF72C;
    L_C0DF6F8:;
    *(unsigned short *)((((*(int *)(((int)stk + 4))) << 1) + (*(int *)0xC94C69C))) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    goto L_C0DF70A;
}
