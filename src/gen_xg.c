/* Straight-line functions with calls and guards (batch gen_xg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0341a6(int, int);
int FUN_0c034314(int, int, int);
int FUN_0c034b1c(int, int);
int FUN_0c02ef26(int a4, int a5, int a6, int a7);

int FUN_0c02ef26(int a4, int a5, int a6, int a7)
{
    int stk[5];

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    v0_4 = a4;
    v0_0 = a5;
    v0_3 = a6;
    v0_1 = a7;
    *(unsigned int *)(((int)stk + 16)) = v0_0;
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    v0_6 = *(int *)((v0_4 + 0xBC));
    v0_5 = (0x28C);
    v0_1 = (0xC246FF0);
    v0_0 = (v0_4);
    v0_2 = (0xFFFFFFFF);
    v0_3 = (v0_3);
    w0_0 = ((*(float *)((((((v0_6 << 2) << 2) << 2) + 0xC247084) + 0x4))));
    w0_1 = ((*(float *)((((((v0_6 << 2) << 2) << 2) + 0xC247084) + 0x0))));
    if (((*(int *)((v0_4 + 0x28C))) == 0)) goto L_C02EF9C;
    v0_5 = *(int *)(((((*(int *)((v0_0 + v0_5))) << 2) + v0_1) + 0x0));
    v0_4 = (v0_5);
    if (((*(int *)((v0_5 + 0x4D0))) != 1)) goto L_C02EF82;
    v0_5 = (0x1C4);
    if (((int)(*(int *)((v0_4 + 0x1C4))) > (int)0x2)) goto L_C02EF82;
    v0_2 = ((*(int *)((v0_4 + v0_5))));
    L_C02EF9C:;
    v0_4 = (0x1);
    if ((v0_2 != -1)) goto L_C02EFCE;
    if ((!(w0_1 > w0_0))) goto L_C02EFCC;
    v0_2 = (v0_4);
    L_C02EFCE:;
    v0_5 = (v0_4);
    v0_6 = (0xC034B1C);
    if ((v0_4 == 0)) goto L_C02F034;
    L_C02EFD6:;
    if (((*(int *)(((v0_1 + 0x40) + (v0_2 << 2)))) != 4)) goto L_C02F024;
    v0_4 = *(int *)((((v0_2 << 2) + v0_1) + 0x0));
    v0_6 = FUN_0c0341a6(v0_0, v0_4);
    *(unsigned int *)((v0_3 + 0x0)) = v0_6;
    v0_4 = (v0_4);
    if (((int)v0_6 <= 0)) goto L_C02F024;
    v0_6 = (FUN_0c034314(v0_0, v0_4, ((int)stk + 8))) == 0;
    if (v0_6) goto L_C02F024;
    v0_1 = (*(int *)(((int)stk + 12)));
    *(int *)((int)stk + 4) = v0_1;
    *(unsigned int *)((v0_1 + 0x0)) = (FUN_0c034b1c(v0_0, v0_4));
    *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x0)) = v0_4;
    v0_5 = (0x1);
    L_C02F036:;
    return v0_5;
    L_C02F024:;
    v0_4 = (int)(v0_5 - 1) >= 0;
    v0_5 = ((v0_5 - 1));
    v0_2 = ((0x1 & (v0_2 + 0x1)));
    if (v0_4) goto L_C02EFD6;
    L_C02F034:;
    v0_5 = (0x0);
    goto L_C02F036;
    L_C02EFCC:;
    v0_2 = (0x0);
    goto L_C02EFCE;
    L_C02EF82:;
    if (((*(int *)((v0_4 + 0x554))) != 2)) goto L_C02EF9C;
    if (((*(int *)((v0_4 + 0x50C))) == 0)) goto L_C02EF9C;
    v0_2 = ((0x1 & ((*(int *)((v0_4 + 0x510))) + 0x1)));
    goto L_C02EF9C;
}
