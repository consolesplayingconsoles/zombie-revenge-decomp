/* Straight-line functions with calls and guards (batch gen_aft): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e36c4(int a4, int a5);

int FUN_0c0e36c4(int a4, int a5)
{
    int stk[9];

    register int R0;
    register int R1;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    v0_0 = a4;
    v0_1 = a5;
    *(unsigned int *)(((int)stk + 32)) = v0_0;
    *(unsigned int *)(((int)stk + 28)) = v0_1;
    if (((int)(*(int *)(((int)stk + 28))) < 0)) goto L_C0E36D8;
    if (((int)(*(int *)(((int)stk + 28))) < (int)0x8)) goto L_C0E36E4;
    L_C0E36D8:;
    return 0xFFFFFFFF;
    L_C0E36E4:;
    v0_0 = ((*(int *)(((int)stk + 32))));
    *(unsigned int *)(((int)stk + 8)) = v0_0;
    *(unsigned int *)(((int)stk + 4)) = 0xC1EAB3C;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    L_C0E371A:;
    if (((int)(*(int *)(((int)stk + 16))) < (int)0x4)) goto L_C0E36F4;
    v0_0 = *(int *)(((int)stk + 28));
    if (((*(int *)((0xC94C908 + (signed char)(((v0_0 << 1) + v0_0) << 2)))) == -1)) goto L_C0E373E;
    return 0xFFFFFFFD;
    L_C0E373E:;
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((*(int *)(((int)stk + 32))) + 0x8)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)0xA0800088);
    if (((int)((*(int *)0xC94C820) + (*(int *)(((int)stk + 20)))) <= (int)(*(int *)(((int)stk + 24))))) goto L_C0E3760;
    return 0xFFFFFFFC;
    L_C0E3760:;
    if (((*(int *)0xC94C828) == 0)) goto L_C0E3770;
    return 0xFFFFFFFB;
    L_C0E3770:;
    return 0x0;
    L_C0E36F4:;
    v0_0 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (v0_0 + 0x1);
    v0_0 = *(signed char *)((((v0_0 + 0x1) - 1) + 0x0));
    v0_1 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (v0_1 + 0x1);
    if ((v0_0 == (*(signed char *)((((v0_1 + 0x1) - 1) + 0x0))))) goto L_C0E3714;
    return 0xFFFFFFFE;
    L_C0E3714:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    goto L_C0E371A;
}
