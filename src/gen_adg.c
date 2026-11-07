/* Straight-line functions with calls and guards (batch gen_adg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f1b8(int, int);
int FUN_0c035402(int);
int FUN_0c041f2a(int);
int FUN_0c053ac4(int);
int FUN_0c03fd20(int a4, int a5, int a6, int a7, float f4);

int FUN_0c03fd20(int a4, int a5, int a6, int a7, float f4)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R11;
    register int R12;
    register int R13;
    register float F1;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_1 = a4;
    v0_0 = a7;
    w0_1 = f4;
    v0_2 = *(int *)((v0_1 + 0x4EC));
    v0_0 = (v0_2);
    v0_1 = (v0_1);
    w0_0 = (0.0f);
    if ((v0_2 == 0)) goto L_C03FD48;
    if ((v0_0 == 1)) goto L_C03FD7C;
    if ((v0_0 == 2)) goto L_C03FDCC;
    if ((v0_0 == 3)) goto L_C03FDF6;
    if ((v0_0 == 4)) goto L_C03FE18;
    L_C03FE1E:;
    return v0_0;
    L_C03FE18:;
    v0_0 = ((FUN_0c041f2a(v0_1)));
    goto L_C03FE1E;
    L_C03FDF6:;
    v0_2 = *(int *)((v0_1 + 0x3AC));
    *(unsigned int *)((v0_1 + 0x3AC)) = (v0_2 - 1);
    v0_0 = (0x3AC);
    if (((int)(v0_2 - 1) > 0)) goto L_C03FE1E;
    *(unsigned int *)((v0_1 + v0_0)) = 0x0;
    *(unsigned int *)((v0_1 + 0x4EC)) = ((*(int *)((v0_1 + 0x4EC))) + 0x1);
    L_C03FE0E:;
    v0_0 = ((FUN_0c041f2a(v0_1)));
    goto L_C03FE1E;
    L_C03FDCC:;
    FUN_0c041f2a(v0_1);
    v0_2 = *(int *)((v0_1 + 0x2EC));
    v0_0 = (v0_2);
    if (((v0_2 & 12) == 0)) goto L_C03FE1E;
    FUN_0c053ac4(v0_1);
    FUN_0c035402(v0_1);
    *(unsigned int *)((v0_1 + 0x3AC)) = 0x14;
    L_C03FDEC:;
    *(unsigned int *)((v0_1 + 0x4EC)) = ((*(int *)((v0_1 + 0x4EC))) + 0x1);
    v0_0 = (0x4EC);
    goto L_C03FE1E;
    L_C03FD7C:;
    *(float *)((v0_1 + 0x26C)) = ((*(float *)((v0_1 + 0x26C))) - 0.049999997f);
    *(float *)((v0_1 + 0x4C)) = ((*(float *)((v0_1 + 0x4C))) + ((*(float *)(((0x26C + v0_1) + 0x0))) + 0.5f));
    w0_2 = FUN_0c01f1b8((v0_1 + 0x30), ((int)stk + 4));
    v0_0 = (0x34);
    w0_1 = (w0_2);
    w0_1 = (w0_2);
    if ((!(w0_2 > (*(float *)((v0_1 + 0x34)))))) goto L_C03FE1E;
    *(unsigned int *)((v0_1 + 0x2E8)) = 0x0;
    *(unsigned int *)((v0_1 + 0x4EC)) = ((*(int *)((v0_1 + 0x4EC))) + 0x1);
    *(float *)((v0_1 + 0x34)) = w0_1;
    *(float *)((v0_1 + 0x4C)) = w0_0;
    goto L_C03FE0E;
    L_C03FD48:;
    *(unsigned int *)((v0_1 + 0x2E8)) = 0x2;
    FUN_0c041f2a(v0_1);
    *(float *)((v0_1 + 0x26C)) = w0_0;
    goto L_C03FDEC;
}
