/* Straight-line functions with calls and guards (batch gen_aeg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0db0a0(int, int);
int FUN_0c0e5f1c(void);
int nlPrintf(int, ...);
int FUN_0c01da32(int a4, int a5, int a6);

int FUN_0c01da32(int a4, int a5, int a6)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    v0_7 = a6;
    R1016 = 0x0;
    R1012 = 0x0;
    v0_0 = (0xC0DB0A0);
    v0_0 = (0xC0DB0E0);
    v0_0 = (0x0);
    L_C01DA4E:;
    v0_3 = R1012;
    v0_1 = (((R1012) + 0x5));
    v0_2 = (v0_0);
    v0_3 = (((((v0_3 << 1) + v0_3) << 8) + 0xC23FF94));
    L_C01DA62:;
    v0_4 = ((v0_2 + 0x2));
    v0_5 = (((((v0_2 << 1) + v0_2) << 2) + v0_3));
    v0_7 = ((((v0_2 << 1) + v0_2) << 2));
    v0_6 = (v0_0);
    if (((*(int *)((((((v0_2 << 1) + v0_2) << 2) + v0_3) + 0x0))) != ((((v0_2 << 1) + v0_2) << 2) + v0_3))) goto L_C01DA8A;
    FUN_0c0db0a0(v0_4, v0_1);
    R1008 = 0xC0F53B8;
    nlPrintf(0xC0F53B8);
    L_C01DAD4:;
    v0_4 = (int)(v0_2 + 0x1) < (int)0x1F;
    v0_2 = ((v0_2 + 0x1));
    if (v0_4) goto L_C01DA62;
    FUN_0c0db0a0(0x2, 0x25);
    v0_1 = (R1016);
    R1008 = v0_1;
    R1004 = 0xC0F53C0;
    v0_2 = nlPrintf(0xC0F53C0, v0_1);
    v0_1 = R1012;
    R1012 = (v0_1 + 0x1);
    v0_2 = (v0_2);
    if (((int)(v0_1 + 0x1) < (int)0x3F)) goto L_C01DA4E;
    return v0_2;
    L_C01DA8A:;
    v0_7 = ((v0_7 + v0_3));
    L_C01DAB2:;
    v0_8 = *(int *)((v0_5 + 0x0));
    v0_5 = (v0_8);
    if ((v0_8 != v0_7)) goto L_C01DAB0;
    R1016 = ((R1016) + 0x1);
    FUN_0c0db0a0(v0_4, v0_1);
    v0_4 = (FUN_0c0e5f1c());
    R1008 = v0_4;
    R1004 = 0xC0F53BC;
    nlPrintf(0xC0F53BC, v0_4);
    goto L_C01DAD4;
    L_C01DAB0:;
    v0_6 = ((v0_6 + 0x1));
    goto L_C01DAB2;
}
