/* Straight-line functions with calls and guards (batch gen_adq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02a19a(int, int, int, int);
int FUN_0c03227c(int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c028fd6(int a4, int a5, int a6, int a7, float f4, float f5);

int FUN_0c028fd6(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[5];

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
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    v0_4 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_0 = a7;
    w0_0 = f4;
    w0_0 = f5;
    v0_3 = (v0_4);
    if (((*(int *)((v0_4 + 0x2BC))) != 0x88)) goto L_C029054;
    if (((*(int *)((v0_3 + 0x50C))) == 0)) goto L_C029054;
    v0_5 = (0x510);
    v0_4 = (0xC246FF0);
    if (((*(int *)(((((*(int *)((v0_3 + 0x510))) << 2) + 0xC247030) + 0x0))) == 0)) goto L_C029054;
    v0_1 = *(int *)(((((*(int *)((v0_3 + v0_5))) << 2) + v0_4) + 0x0));
    FUN_0c0a68ec(((int)stk + 4), ((*(float *)((v0_3 + 0x30))) - (*(float *)((v0_1 + 0x30)))), ((*(float *)((v0_3 + 0x38))) - (*(float *)((v0_1 + 0x38)))));
    v0_5 = *(int *)(((int)stk + 4));
    v0_6 = *(short *)((v0_3 + 0x6E));
    v0_4 = ((v0_6 - (v0_5 + 0xF00)));
    v0_1 = ((v0_5 + 0xF00));
    v0_2 = ((short)(v0_6 - (v0_5 + 0xF00)));
    FPUL_ = ((short)(v0_6 - (v0_5 + 0xF00)));
    if ((!(16384.0f > _builtin_fabsf((float)(short)(v0_6 - (v0_5 + 0xF00)))))) goto L_C029054;
    FUN_0c0546fe(v0_3, ((*(int *)(((int)stk + 4))) + 0xF00), 0x80, 0x1);
    L_C029054:;
    if (((*(int *)((v0_3 + 0x2BC))) != 0x85)) goto L_C0290BA;
    v0_4 = (0xC0CC3F8);
    if (((*(int *)((v0_3 + 0xAC))) != 16)) goto L_C0290A6;
    *(unsigned int *)((v0_3 + 0x2C4)) = 0x87;
    *(unsigned int *)((v0_3 + 0x2CC)) = 0x1;
    *(unsigned int *)((v0_3 + 0x20C)) = 0x200;
    *(unsigned int *)((v0_3 + 0x210)) = 0x7;
    *(unsigned int *)((v0_3 + 0x4C4)) = 0x1;
    *(unsigned int *)((v0_3 + 0x4C8)) = 0x4;
    *(unsigned int *)((v0_3 + 0x4D0)) = 0x1;
    *(unsigned int *)((v0_3 + 0x534)) = 0x0;
    *(unsigned int *)((v0_3 + 0xD8)) = 0x0;
    v0_5 = ((FUN_0c0cc3f8(0xF2BA9, v0_1, v0_2, v0_0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28))));
    L_C0290CA:;
    return v0_5;
    L_C0290A6:;
    if (((*(int *)((v0_3 + 0xD8))) == 0)) goto L_C0290BA;
    FUN_0c0cc3f8(0xF2BA9, v0_1, v0_2, v0_0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    FUN_0c0cc3f8(0x42DA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    L_C0290BA:;
    v0_4 = FUN_0c03227c(v0_3);
    v0_5 = (v0_4);
    if ((v0_4 != 0)) goto L_C0290CA;
    v0_5 = ((FUN_0c02a19a(v0_3, v0_1, v0_2, v0_0)));
    goto L_C0290CA;
}
