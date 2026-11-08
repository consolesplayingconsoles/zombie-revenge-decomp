/* Straight-line functions with calls and guards (batch gen_aft): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e36c4(int a4, int a5);
struct o0_int { int v; };
struct o8_int { char p[0x8]; int v; };


int FUN_0c0e36c4(int a4, int a5)
{
    int stk[9];

    register int R0;
    register int R1;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    int R1004;
    int R1008;
    int R1016;
    int R1020;
    int R1024;
    int R1028;
    int R1032;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);
    v0_0 = a4;
    v0_1 = a5;
    R1032 = v0_0;
    R1028 = v0_1;
    if (((int)(R1028) < 0)) goto L_C0E36D8;
    if (((int)(R1028) < (int)0x8)) goto L_C0E36E4;
    L_C0E36D8:;
    return 0xFFFFFFFF;
    L_C0E36E4:;
    v0_0 = ((R1032));
    R1008 = v0_0;
    R1004 = 0xC1EAB3C;
    R1016 = 0x0;
    L_C0E371A:;
    if (((int)(R1016) < (int)0x4)) goto L_C0E36F4;
    v0_0 = R1028;
    if (((*(int *)((0xC94C908 + (signed char)(((v0_0 << 1) + v0_0) << 2)))) == -1)) goto L_C0E373E;
    return 0xFFFFFFFD;
    L_C0E373E:;
    R1020 = (*(int *)(((R1032) + 0x8)));
    R1024 = (*(int *)0xA0800088);
    if (((int)(((((struct o0_int *)0xC94C820)->v)) + (R1020)) <= (int)(R1024))) goto L_C0E3760;
    return 0xFFFFFFFC;
    L_C0E3760:;
    if ((((((struct o8_int *)0xC94C820)->v)) == 0)) goto L_C0E3770;
    return 0xFFFFFFFB;
    L_C0E3770:;
    return 0x0;
    L_C0E36F4:;
    v0_0 = R1008;
    R1008 = (v0_0 + 0x1);
    v0_0 = *(signed char *)((((v0_0 + 0x1) - 1) + 0x0));
    v0_1 = R1004;
    R1004 = (v0_1 + 0x1);
    if ((v0_0 == (*(signed char *)((((v0_1 + 0x1) - 1) + 0x0))))) goto L_C0E3714;
    return 0xFFFFFFFE;
    L_C0E3714:;
    R1016 = ((R1016) + 0x1);
    goto L_C0E371A;
}
