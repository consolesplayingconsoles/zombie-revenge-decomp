/* Straight-line functions with calls and guards (batch gen_acz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[11]; } Stk11;
extern int FUN_0c0da2e0();
int FUN_0c0e5dc0(void);
int FUN_0c02c340(int a4);

int FUN_0c02c340(int a4)
{
    int stk[23];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register float F12;
    register float F13;
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
    v0_5 = a4;
    *(volatile int *)((v0_5 + 0x304));
    *(volatile int *)((v0_5 + 0x308));
    v0_0 = FUN_0c0e5dc0();
    { struct mv11 { int w[11]; }; *(struct mv11 *)((((int)stk + 4) + 0x2C)) = *(struct mv11 *)(0xC0F5534); }
    { struct mv11 { int w[11]; }; *(struct mv11 *)(((int)stk + 4)) = *(struct mv11 *)(0xC0F5560); }
    v0_2 = (v0_0);
    v0_3 = ((((int)stk + 4) + 0x2C));
    v0_0 = (0x0);
    v0_1 = (v0_5);
    if (((int)(*(int *)((v0_5 + 0x304))) > 0)) goto L_C02C392;
    v0_4 = (0x474);
    L_C02C43C:;
    *(unsigned int *)((v0_1 + v0_4)) = v0_0;
    L_C02C43E:;
    return v0_4;
    L_C02C392:;
    v0_6 = *(int *)((v0_1 + 0x4F8));
    v0_4 = (v0_6);
    v0_5 = (v0_6);
    if ((v0_6 == 12)) goto L_C02C43E;
    v0_4 = (v0_5);
    if ((v0_5 == 13)) goto L_C02C43E;
    v0_4 = (0x20C);
    if ((((*(int *)((v0_1 + 0x20C))) & 0x80000) != 0)) goto L_C02C43E;
    v0_5 = *(int *)((v0_1 + 0x4C8));
    v0_4 = (v0_5);
    if ((v0_5 == 9)) goto L_C02C43E;
    v0_5 = *(int *)((v0_1 + 0x4C8));
    v0_4 = (v0_5);
    if ((v0_5 == 2)) goto L_C02C43E;
    v0_6 = *(int *)((v0_1 + 0x560));
    v0_4 = (v0_6);
    v0_5 = (v0_6);
    if ((v0_6 == 8)) goto L_C02C43E;
    v0_4 = (v0_5);
    if ((v0_5 == 9)) goto L_C02C43E;
    v0_4 = *(int *)((v0_1 + 0x310));
    w0_0 = *(float *)((v0_3 + (v0_2 << 2)));
    v0_5 = ((int (*)(Stk11))(FUN_0c0da2e0))(*(Stk11 *)(((int)stk + 4)));
    FPUL_ = ((v0_5 & 0x3));
    if ((!((float)v0_4 > (w0_0 + (float)(v0_5 & 0x3))))) goto L_C02C40A;
    *(unsigned int *)((v0_1 + 0x4D0)) = v0_0;
    *(unsigned int *)((v0_1 + 0x4F8)) = 0xC;
    *(unsigned int *)((v0_1 + 0x568)) = (*(int *)((v0_1 + 0x310)));
    v0_4 = (0x310);
    goto L_C02C43C;
    L_C02C40A:;
    v0_5 = *(int *)((v0_1 + 0x564));
    w0_0 = *(float *)((v0_3 + (v0_2 << 2)));
    v0_2 = ((int (*)(void))(FUN_0c0da2e0))();
    v0_4 = ((v0_2 & 0x3));
    FPUL_ = ((v0_2 & 0x3));
    if ((!((float)v0_5 > (w0_0 + (float)(v0_2 & 0x3))))) goto L_C02C43E;
    *(unsigned int *)((v0_1 + 0x4D0)) = v0_0;
    *(unsigned int *)((v0_1 + 0x4F8)) = 0xC;
    *(unsigned int *)((v0_1 + 0x564)) = v0_0;
    v0_4 = (0x56C);
    goto L_C02C43C;
}
