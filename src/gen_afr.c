/* Straight-line functions with calls and guards (batch gen_afr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0da2e0(void);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
float FUN_0c0ab550(int a4, int a5);

float FUN_0c0ab550(int a4, int a5)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R6;
    int R10;
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
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a5;
    *(unsigned int *)(((int)stk + 8)) = 0xC10E210;
    *(unsigned int *)(((int)stk + 12)) = 0x2;
    *(unsigned int *)(((int)stk + 4)) = 0xC10E2B8;
    R10 = (0x3FF);
    v0_0 = (0x7FFF);
    v0_1 = (0x1F);
    v0_2 = (0xA4);
    v0_3 = (0xC5F);
    w0_0 = ((*(float *)0xC0AB664));
    w0_1 = ((1.0f + 1.0f));
    L_C0AB584:;
    v0_4 = (0xE);
    L_C0AB586:;
    v0_6 = FUN_0c0e19aa(0xC08C25A, v0_2, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(v0_6);
    v0_5 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (v0_5 + 0xC);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_6 + 0x70)) = *(struct mv3 *)(((v0_5 + 0xC) - 12)); }
    *(unsigned short *)((v0_6 + 0x8A)) = v0_0;
    *(unsigned short *)((v0_6 + 0x9A)) = v0_3;
    *(unsigned short *)((v0_6 + 0xA0)) = v0_1;
    v0_5 = FUN_0c0da2e0();
    w0_2 = w0_1;
    w0_2 = w0_2 + w0_0 * (float)(v0_5 & R10);
    *(float *)((v0_6 + 0x90)) = w0_2;
    v0_8 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (v0_8 + 0x2);
    v0_7 = (v0_4 - 0x1) != 0;
    *(unsigned short *)((v0_6 + 0x98)) = (*(short *)((((v0_8 + 0x2) - 2) + 0x0)));
    v0_8 = (0x98);
    v0_4 = ((v0_4 - 0x1));
    v0_6 = (v0_6);
    w0_2 = (w0_0);
    FPUL_ = ((v0_5 & R10));
    if (v0_7) goto L_C0AB586;
    v0_4 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = (v0_4 - 1);
    if (((v0_4 - 1) != 0)) goto L_C0AB584;
    return w0_2;
}
