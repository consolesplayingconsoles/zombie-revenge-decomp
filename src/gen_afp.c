/* Straight-line functions with calls and guards (batch gen_afp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c0340(int, float);
int FUN_0c0c710e(int a4, int a5, int a6, int a7, float f4, float f5);

int FUN_0c0c710e(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[16];

    register int R1;
    register int R3;
    register int R9;
    register int R10;
    register int R11;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    v0_1 = a6;
    v0_1 = a7;
    w0_0 = f4;
    w0_2 = f5;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    *(float *)(((int)stk + 12)) = w0_0;
    *(float *)(((int)stk + 16)) = w0_2;
    *(float *)(((int)stk + 20)) = 0.00139999995f;
    *(float *)(((int)stk + 24)) = 1.0f;
    *(float *)(((int)stk + 28)) = 1.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 1.0f;
    *(float *)(((int)stk + 44)) = 1.0f;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    *(unsigned int *)(((int)stk + 60)) = 0x0;
    *(float *)(((int)stk + 52)) = 1.0f;
    *(unsigned int *)(((int)stk + 56)) = 0xFFFFFFFF;
    v0_1 = (0xC0C7188);
    v0_0 = (0xC0C0340);
    v0_2 = (0xC1E8760);
    w0_1 = (18.0f);
    w0_0 = (1.0f);
    w0_2 = (0.0f);
    L_C0C71AE:;
    v0_0 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (v0_0 + 0x1);
    v0_3 = *(signed char *)((((v0_0 + 0x1) - 1) + 0x0));
    v0_0 = (v0_3);
    if ((v0_3 != 0)) goto L_C0C718C;
    return v0_1;
    L_C0C718C:;
    if ((v0_0 == 32)) goto L_C0C71A4;
    *(unsigned int *)(((int)stk + 8)) = (*(short *)((v0_2 + (v0_0 << 1))));
    FUN_0c0c0340((((int)stk + 4) + 0x4), w0_0);
    L_C0C71A4:;
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + w0_1);
    v0_1 = (0x8);
    goto L_C0C71AE;
}
