/* Straight-line functions with calls and guards (batch gen_act): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e3792(int a4, int a5, int a6, int a7);

int FUN_0c0e3792(int a4, int a5, int a6, int a7)
{
    int stk[8];

    register int R0;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = a7;
    *(unsigned int *)(((int)stk + 28)) = v0_0;
    *(unsigned int *)(((int)stk + 24)) = v0_1;
    *(unsigned int *)(((int)stk + 20)) = v0_2;
    *(unsigned int *)(((int)stk + 16)) = v0_3;
    *(unsigned int *)0xC94C820 = ((*(int *)0xC94C820) + (*(int *)(((int)stk + 20))));
    v0_0 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((signed char)(((v0_0 << 1) + v0_0) << 2) + 0xC94C908)) = (*(int *)(((int)stk + 24)));
    v0_0 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((signed char)(((v0_0 << 1) + v0_0) << 2) + 0xC94C910)) = (*(int *)(((int)stk + 20)));
    *(unsigned int *)(((((*(int *)(((int)stk + 28))) << 2) + 0xA0800060) + 0x0)) = (*(int *)(((int)stk + 24)));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 28))) - 1);
    L_C0E383C:;
    if (!(((int)(*(int *)(((int)stk + 8))) >= 0))) goto L_C0E3842;
    v0_1 = *(signed char *)(((int)stk + 8));
    v0_0 = (0xC94C908);
    if (((*(int *)((0xC94C908 + (signed char)(((v0_1 << 1) + v0_1) << 2)))) == -1)) goto L_C0E3836;
    v0_1 = *(int *)(((int)stk + 8));
    v0_2 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((signed char)(((v0_1 << 1) + v0_1) << 2) + 0xC94C90C))) + (*(int *)((((signed char)(((v0_2 << 1) + v0_2) << 2) + v0_0) + 0x8))));
    goto L_C0E3842;
    L_C0E3842:;
    if (((*(int *)(((int)stk + 4))) != 0)) goto L_C0E384E;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)0xC94C814);
    L_C0E384E:;
    v0_0 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((signed char)(((v0_0 << 1) + v0_0) << 2) + 0xC94C90C)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 28))) + 0x1);
    L_C0E38BE:;
    if (((int)(*(int *)(((int)stk + 8))) < (int)0x8)) goto L_C0E3878;
    *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x0)) = (*(int *)(((int)stk + 12)));
    return (*(int *)(((int)stk + 4)));
    L_C0E3878:;
    v0_0 = *(signed char *)(((int)stk + 8));
    if (((*(int *)((0xC94C908 + (signed char)(((v0_0 << 1) + v0_0) << 2)))) == -1)) goto L_C0E38B8;
    v0_0 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + (*(int *)(((signed char)(((v0_0 << 1) + v0_0) << 2) + 0xC94C910))));
    v0_0 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((signed char)(((v0_0 << 1) + v0_0) << 2) + 0xC94C90C)) = ((*(int *)(((signed char)(((v0_0 << 1) + v0_0) << 2) + 0xC94C90C))) + (*(int *)(((int)stk + 20))));
    L_C0E38B8:;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    goto L_C0E38BE;
    L_C0E3836:;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) - 1);
    goto L_C0E383C;
}
