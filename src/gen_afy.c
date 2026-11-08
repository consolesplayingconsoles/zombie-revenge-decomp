/* Straight-line functions with calls and guards (batch gen_afy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01467a(int, int);
int FUN_0c014696(int, int);
int FUN_0c0146f0(int a4, int a5, int a6, int a7);

int FUN_0c0146f0(int a4, int a5, int a6, int a7)
{
    int stk[4];
    int t4;

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    int R1004;
    int R1008;
    int R1012;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    v0_0 = a4;
    v0_3 = a5;
    v0_1 = a6;
    v0_4 = a7;
    R1004 = v0_0;
    R1008 = (v0_1 + 0x1);
    R1012 = (v0_1 + 0x2);
    *(unsigned char *)(((v0_1 + 0x2) + 0x0)) = 0xFFFFFFFF;
    *(unsigned char *)(((v0_1 + 0x1) + 0x0)) = 0xFFFFFFFF;
    *(unsigned char *)((v0_1 + 0x0)) = 0xFFFFFFFF;
    v0_1 = (v0_1);
    v0_3 = (v0_3);
    v0_2 = (v0_0);
    if ((v0_4 != 0)) goto L_C014742;
    t4 = *(int *)0xC2498F4;
    v0_0 = (t4);
    if (((0x3030 & t4) == 0)) goto L_C014742;
    if (((v0_0 & 0x1010) == 0)) goto L_C014734;
    v0_4 = ((FUN_0c01467a(v0_2, v0_3)));
    L_C01473A:;
    v0_0 = (v0_4);
    if (((int)v0_4 < 0)) goto L_C014742;
    v0_2 = (v0_0);
    L_C014742:;
    if (((*(signed char *)((v0_3 + v0_2))) != 0)) goto L_C01476A;
    v0_4 = FUN_0c014696(v0_2, v0_3);
    v0_0 = (v0_4);
    if (((int)v0_4 >= 0)) goto L_C014768;
    v0_2 = FUN_0c01467a(v0_2, v0_3);
    v0_0 = (v0_2);
    if (((int)v0_2 >= 0)) goto L_C014768;
    v0_4 = ((R1004));
    L_C014790:;
    return v0_4;
    L_C014768:;
    v0_2 = (v0_0);
    L_C01476A:;
    *(unsigned char *)(((R1008) + 0x0)) = v0_2;
    v0_4 = FUN_0c01467a(v0_2, v0_3);
    v0_0 = (v0_4);
    v0_3 = (v0_3);
    if (((int)v0_4 < 0)) goto L_C01477E;
    *(unsigned char *)((v0_1 + 0x0)) = v0_0;
    L_C01477E:;
    v0_1 = FUN_0c014696(v0_2, v0_3);
    v0_0 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C01478C;
    *(unsigned char *)(((R1012) + 0x0)) = v0_0;
    L_C01478C:;
    v0_4 = (v0_2);
    goto L_C014790;
    L_C014734:;
    v0_4 = ((FUN_0c014696(v0_2, v0_3)));
    goto L_C01473A;
}
