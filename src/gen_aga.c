/* Straight-line functions with calls and guards (batch gen_aga): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01df48(int, int);
int FUN_0c01e00e(int, int, int);
int FUN_0c01e720(int);
int FUN_0c01e23c(int a4, int a5, int a6, int a7);

int FUN_0c01e23c(int a4, int a5, int a6, int a7)
{
    int stk[9];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_1 = a4;
    v0_2 = a5;
    v0_0 = a6;
    v0_3 = a7;
    *(unsigned int *)(((int)stk + 8)) = v0_0;
    *(unsigned int *)(((int)stk + 4)) = v0_3;
    v0_0 = (v0_1);
    if (((int)(*(int *)((v0_2 + 0x8))) >= (int)0xC)) goto L_C01E270;
    w0_0 = *(float *)0xC01E368;
    v0_1 = (0x54);
    w0_1 = ((*(float *)0xC01E36C));
    w0_2 = (w0_0);
    if ((!(_builtin_fabsf((*(float *)((v0_0 + 0x54)))) > w0_0))) goto L_C01E264;
    *(float *)((v0_0 + v0_1)) = w0_1;
    L_C01E264:;
    v0_1 = (0x5C);
    if ((!(_builtin_fabsf((*(float *)((v0_0 + 0x5C)))) > w0_2))) goto L_C01E270;
    *(float *)((v0_0 + v0_1)) = w0_1;
    L_C01E270:;
    w0_0 = *(float *)0xC01E374;
    w0_1 = *(float *)((v0_0 + 0x54));
    w0_2 = *(float *)((v0_0 + 0x30));
    w0_3 = *(float *)0xC23FE68;
    w0_4 = *(float *)((v0_0 + 0x5C));
    w0_5 = *(float *)((v0_0 + 0x38));
    w0_6 = *(float *)0xC23FE70;
    v0_1 = ((int)(((w0_2 + w0_1) - w0_3) * w0_0));
    v0_2 = ((int)(((w0_5 + w0_4) - w0_6) * w0_0));
    FPUL_ = ((int)(((w0_5 + w0_4) - w0_6) * w0_0));
    if (((int)(int)(((w0_2 + w0_1) - w0_3) * w0_0) >= (int)0x40)) goto L_C01E2B4;
    if (((int)v0_2 >= (int)0x20)) goto L_C01E2B4;
    if (((int)v0_1 < 0)) goto L_C01E2B4;
    if (!(((int)v0_2 >= 0))) goto L_C01E2B4;
    *(unsigned int *)(((int)stk + 4)) = (FUN_0c01e00e(v0_0, ((*(int *)(((int)stk + 4))) & 0xFFFFFFFE), (*(int *)(((int)stk + 8)))));
    FUN_0c01df48(v0_0, (*(int *)(((int)stk + 8))));
    return (*(int *)(((int)stk + 4)));
    L_C01E2B4:;
    FUN_0c01e720(v0_0);
    *(unsigned int *)0xC245FA0 = 0x0;
    return 0x0;
}
