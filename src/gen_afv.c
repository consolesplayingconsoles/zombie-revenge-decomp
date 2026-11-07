/* Straight-line functions with calls and guards (batch gen_afv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c036efc(int, int, int, int);
int FUN_0c0365f4(int a4, int a5, int a6, float f4, float f5);

int FUN_0c0365f4(int a4, int a5, int a6, float f4, float f5)
{
    int stk[11];

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    v0_3 = a4;
    v0_0 = a5;
    v0_2 = a6;
    w0_0 = f4;
    w0_1 = f5;
    *(unsigned int *)(((int)stk + 8)) = v0_0;
    v0_4 = *(int *)((v0_3 + 0x530));
    v0_0 = (0x530);
    v0_1 = (v0_4);
    v0_2 = (v0_2);
    v0_3 = (v0_3);
    w0_0 = (w0_0);
    w0_1 = (w0_1);
    if (((*(int *)((v0_4 + 0x38))) == 0)) goto L_C03668E;
    v0_4 = (0x20);
    v0_5 = (0x0);
    v0_6 = (0x0);
    L_C036624:;
    if (((*(float *)((((0xF0 + v0_1) + v0_6) + 0x0))) == 0.0f)) goto L_C036686;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)(((v0_1 + 0x70) + v0_5)); }
    *(float *)(((int)stk + 36)) = w0_0;
    *(float *)(((int)stk + 40)) = w0_1;
    *(float *)(((int)stk + 28)) = (*(float *)((v0_3 + 0x34)));
    FUN_0c036efc((((int)stk + 4) + 0x14), (*(int *)(((int)stk + 8))), (((int)stk + 4) + 0x8), ((int)stk + 4));
    *(float *)((v0_2 + 0x0)) = ((*(float *)((v0_2 + 0x0))) + (*(float *)(((int)stk + 12))));
    *(float *)((v0_2 + 0x4)) = ((*(float *)((v0_2 + 0x4))) + (*(float *)(((((int)stk + 4) + 0xC) + 0x0))));
    *(float *)((v0_2 + 0x8)) = ((*(float *)((v0_2 + 0x8))) + (*(float *)(((((int)stk + 4) + 0x10) + 0x0))));
    v0_0 = (0x8);
    L_C036686:;
    v0_7 = (unsigned int)(v0_6 + 0x4) < (unsigned int)v0_4;
    v0_5 = ((v0_5 + 0xC));
    v0_6 = ((v0_6 + 0x4));
    if (v0_7) goto L_C036624;
    L_C03668E:;
    return v0_0;
}
