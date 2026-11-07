/* Straight-line functions with calls and guards (batch gen_yl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0236ce(int);
int FUN_0c0316d4(int, int);
int FUN_0c034134(int, float);
int FUN_0c03442c(int, int, int, int, int, int);
int FUN_0c034b1c(int, int);
int FUN_0c035ce4(int);
int FUN_0c0da2e0(void);
int FUN_0c0e5f1c(void);
int FUN_0c02a288(int a4);

int FUN_0c02a288(int a4)
{
    int stk[8];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_2 = a4;
    v0_0 = *(int *)((v0_2 + 0x4F4));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)(((*(int *)(((((v0_0 << 1) + v0_0) << 2) + 0xC1F79BC))) + 0x9C)));
    v0_1 = (0x4EC);
    v0_0 = (v0_2);
    if (((int)(*(int *)((v0_2 + 0x4EC))) < 0)) goto L_C02A350;
    v0_2 = FUN_0c0236ce(v0_0);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C02A350;
    v0_2 = FUN_0c034134(v0_0, (*(float *)0xC02A3A0));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C02A350;
    v0_3 = *(int *)((((*(int *)((v0_0 + 0x510))) << 2) + 0xC246FF0));
    *(int *)((int)stk + 8) = (((int)stk + 12) + 0xC);
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0xC);
    FUN_0c03442c(v0_0, v0_3, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0xC), (((int)stk + 12) + 0xC));
    v0_2 = *(int *)(((int)stk + 12));
    v0_1 = (v0_2);
    v0_3 = (v0_3);
    if ((v0_2 != 2)) goto L_C02A350;
    v0_2 = FUN_0c034b1c(v0_0, v0_3);
    v0_1 = (v0_2);
    if ((v0_2 != 2)) goto L_C02A350;
    v0_2 = FUN_0c0316d4(v0_0, 0x14000000);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C02A350;
    v0_2 = FUN_0c035ce4(v0_0);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C02A350;
    FUN_0c0da2e0();
    v0_1 = (int)(FUN_0c0e5f1c()) <= (int)(*(int *)(((int)stk + 28)));
    v0_3 = (0xFFFFFFFF);
    if (v0_1) goto L_C02A332;
    *(unsigned int *)((v0_0 + 0x4EC)) = v0_3;
    v0_1 = (0x4EC);
    L_C02A350:;
    return v0_1;
    L_C02A332:;
    *(unsigned int *)((v0_0 + 0x4E0)) = v0_3;
    *(unsigned int *)((v0_0 + 0x4EC)) = v0_3;
    *(unsigned int *)((v0_0 + 0x4F8)) = 0x4;
    *(unsigned short *)((v0_0 + 0x6E)) = ((*(short *)((v0_0 + 0x6E))) + 0x8000);
    *(unsigned int *)((v0_0 + 0x544)) = 0x1;
    v0_1 = (0x544);
    goto L_C02A350;
}
