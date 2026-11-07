/* Straight-line functions with calls and guards (batch gen_age): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void FUN_0c0cadea(int a4, float f4, float f5);

void FUN_0c0cadea(int a4, float f4, float f5)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    int R5;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    w0_0 = f4;
    w0_1 = f5;
    if ((v0_0 == 0)) goto L_C0CAE8A;
    v0_1 = ((v0_0 + 0x18));
    L_C0CAE84:;
    v0_2 = *(int *)((v0_1 + 0x0));
    v0_0 = (v0_2);
    v0_1 = ((v0_1 + 0x4));
    if (!((v0_2 != 0))) goto L_C0CAE8A;
    if (((v0_0 & 0x80000000) == 0)) goto L_C0CAE06;
    v0_1 = (((v0_1 - 4) + 0x50));
    goto L_C0CAE84;
    L_C0CAE8A:;
    return;
    L_C0CAE06:;
    R5 = (0x1);
    if (((v0_0 & 0x10) == 0)) goto L_C0CAE42;
    v0_0 = ((v0_1 + 0x4));
    v0_1 = ((*(int *)((v0_1 + 0x0))));
    L_C0CAE14:;
    if ((((*(int *)((v0_0 + 0x0))) & R5) != 0)) goto L_C0CAE1E;
    v0_0 = ((v0_0 + 0x8));
    L_C0CAE3A:;
    v0_2 = (v0_1 - 0x1) != 0;
    v0_1 = ((v0_1 - 0x1));
    if (v0_2) goto L_C0CAE14;
    L_C0CAE7C:;
    v0_1 = (v0_0);
    goto L_C0CAE84;
    L_C0CAE1E:;
    *(float *)((v0_0 + 0x18)) = ((*(float *)((v0_0 + 0x18))) * w0_0);
    *(float *)((v0_0 + 0x1C)) = ((*(float *)((v0_0 + 0x1C))) * w0_1);
    *(unsigned int *)(((v0_0 + 0x1C) + 0x0)) = ((*(int *)(((v0_0 + 0x1C) + 0x0))) | R5);
    v0_2 = (0x1C);
    v0_0 = ((v0_0 + 0x20));
    goto L_C0CAE3A;
    L_C0CAE42:;
    if (((v0_0 & 0x8) == 0)) goto L_C0CAE80;
    v0_2 = *(int *)((v0_1 + 0x0));
    v0_0 = ((v0_1 + 0x4));
    v0_1 = (((v0_2 << 1) + v0_2));
    L_C0CAE52:;
    if ((((*(int *)((v0_0 + 0x0))) & R5) != 0)) goto L_C0CAE5C;
    v0_0 = ((v0_0 + 0x8));
    L_C0CAE78:;
    v0_2 = (v0_1 - 0x1) != 0;
    v0_1 = ((v0_1 - 0x1));
    if (v0_2) goto L_C0CAE52;
    goto L_C0CAE7C;
    L_C0CAE5C:;
    *(float *)((v0_0 + 0x18)) = ((*(float *)((v0_0 + 0x18))) * w0_0);
    *(float *)((v0_0 + 0x1C)) = ((*(float *)((v0_0 + 0x1C))) * w0_1);
    *(unsigned int *)(((v0_0 + 0x1C) + 0x0)) = ((*(int *)(((v0_0 + 0x1C) + 0x0))) | R5);
    v0_2 = (0x1C);
    v0_0 = ((v0_0 + 0x20));
    goto L_C0CAE78;
    L_C0CAE80:;
    goto L_C0CAE80;
}
