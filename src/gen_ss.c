/* Straight-line functions with calls and guards (batch gen_ss): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0365f4(int, int, int, float, float);
int FUN_0c036efc(int, int, int, int);
int FUN_0c042ad8(int, int, int, float, float);
int FUN_0c042b60(int a4, int a5, int a6, int a7, float f4, float f5);

int FUN_0c042b60(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[16];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    v0_2 = a5;
    v0_1 = a6;
    v0_3 = a7;
    w0_0 = f5;
    *(unsigned int *)(((int)stk + 8)) = v0_1;
    *(float *)((v0_2 + 0x0)) = 0.0f;
    *(float *)((v0_2 + 0x4)) = 0.0f;
    *(float *)((v0_2 + 0x8)) = 0.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x28)) = *(struct mv3 *)((v0_0 + 0x30)); }
    *(float *)(((int)stk + 56)) = 10.0f;
    *(float *)(((int)stk + 60)) = 1.0f;
    v0_1 = (0x0);
    v0_2 = (v0_2);
    v0_3 = (v0_0);
    w0_0 = (150.0f);
    w0_1 = (-5.0f);
    w0_3 = (1.0f);
    w0_2 = ((1.0f + 1.0f));
    if (((*(int *)((v0_0 + 0x530))) == 0)) goto L_C042BC6;
    FUN_0c0365f4(v0_3, (((int)stk + 4) + 0x28), v0_2, w0_1, w0_2);
    L_C042BC6:;
    if (!(((*(int *)((v0_3 + 0x508))) == 1))) goto L_C042D04;
    v0_4 = (0x514);
    if (((*(int *)((v0_3 + 0x514))) != 0)) goto L_C042BDE;
    goto L_C042D04;
    L_C042D04:;
    v0_5 = *(int *)(((((v0_1 << 2) << 2) + 0xC246A40) + 0x0));
    v0_4 = (v0_5);
    v0_0 = ((((v0_1 << 2) << 2) + 0xC246A40));
    if ((v0_5 != -1)) goto L_C042C2E;
    return v0_4;
    L_C042C2E:;
    v0_4 = *(int *)((v0_0 + 0x0));
    v0_0 = (v0_4);
    if (((int)v0_4 >= (int)0x2)) goto L_C042C52;
    if (((*(int *)((v0_3 + 0x508))) != 0)) goto L_C042CDA;
    if (((*(int *)((v0_3 + 0x50C))) == 0)) goto L_C042D02;
    if (((*(int *)((v0_3 + 0x510))) == v0_0)) goto L_C042C70;
    L_C042D02:;
    v0_1 = ((v0_1 + 0x1));
    goto L_C042D04;
    L_C042C70:;
    FUN_0c042ad8((((int)stk + 4) + 0x28), v0_1, v0_2, w0_0, w0_2);
    goto L_C042D02;
    L_C042CDA:;
    FUN_0c042ad8((((int)stk + 4) + 0x28), v0_1, v0_2, w0_1, w0_2);
    goto L_C042D02;
    L_C042C52:;
    if (((int)v0_0 >= (int)0x4)) goto L_C042CA8;
    if (((*(int *)((v0_3 + 0x508))) != 0)) goto L_C042CDA;
    if (((*(int *)((v0_3 + 0x50C))) == 0)) goto L_C042CDA;
    if (((*(int *)((v0_3 + 0x510))) != v0_0)) goto L_C042CDA;
    goto L_C042C70;
    L_C042CA8:;
    w0_3 = ((*(float *)0xC042DA4));
    if (((int)v0_0 >= (int)0xC)) goto L_C042CD4;
    if (((*(int *)((v0_3 + 0xBC))) == v0_0)) goto L_C042D02;
    *(volatile int *)(((int)stk + 8));
    *(volatile int *)((v0_3 + 0xBC));
    FUN_0c042ad8((((int)stk + 4) + 0x28), v0_1, v0_2, w0_3, w0_2);
    goto L_C042D02;
    L_C042CD4:;
    if (((int)v0_0 >= (int)0x10)) goto L_C042CEC;
    goto L_C042CDA;
    L_C042CEC:;
    if (((int)v0_0 >= (int)0x14)) goto L_C042D02;
    FUN_0c042ad8((((int)stk + 4) + 0x28), v0_1, v0_2, w0_3, (*(float *)0xC042DA8));
    goto L_C042D02;
    L_C042BDE:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)((0x518 + v0_3)); }
    *(float *)(((int)stk + 36)) = w0_0;
    *(float *)(((int)stk + 40)) = w0_3;
    FUN_0c036efc((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x8), ((int)stk + 4));
    *(float *)((v0_2 + 0x0)) = ((*(float *)((v0_2 + 0x0))) + (*(float *)(((int)stk + 12))));
    *(float *)((v0_2 + 0x4)) = ((*(float *)((v0_2 + 0x4))) + (*(float *)(((((int)stk + 4) + 0xC) + 0x0))));
    *(float *)((v0_2 + 0x8)) = ((*(float *)((v0_2 + 0x8))) + (*(float *)(((((int)stk + 4) + 0x10) + 0x0))));
    goto L_C042D04;
}
