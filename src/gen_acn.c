/* Straight-line functions with calls and guards (batch gen_acn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0346ca(int);
int FUN_0c035f64(int a4);

int FUN_0c035f64(int a4)
{
    int stk[29];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
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
    R1004 = *(int *)((int)stk + 4);
    v0_7 = a4;
    R1004 = v0_7;
    v0_2 = (0xC2475D4);
    if (((*(int *)0xC247994) != 0)) goto L_C035F9C;
    v0_8 = (0xFFFFFFFF);
    L_C03608A:;
    return v0_8;
    L_C035F9C:;
    v0_3 = (0x0);
    v0_0 = ((((int)stk + 4) + 0x3C));
    v0_1 = ((((int)stk + 4) + 0x8));
    v0_4 = (0x0);
    v0_5 = (0xB);
    v0_6 = (0xC);
    L_C035FAE:;
    if (((int)(*(int *)((((v0_4 << 2) + (v0_2 + 0x30)) + 0x0))) < (int)v0_5)) goto L_C036044;
    if (((int)(*(int *)((((v0_4 << 2) + (v0_2 + 0x60)) + 0x0))) >= (int)0x16)) goto L_C036044;
    v0_7 = *(int *)((((v0_4 << 2) + v0_2) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = v0_7;
    v0_7 = (FUN_0c0346ca((v0_7 + 0x30))) == 0;
    if (v0_7) goto L_C036044;
    v0_7 = *(int *)(((v0_2 + 0x60) + (v0_4 << 2)));
    v0_8 = (v0_7);
    if ((v0_7 == 5)) goto L_C036008;
    if ((v0_8 == 7)) goto L_C036008;
    if ((v0_8 == 16)) goto L_C036044;
    if ((v0_8 == 20)) goto L_C036044;
    L_C036044:;
    v0_7 = (int)(v0_4 + 0x1) < (int)v0_6;
    v0_4 = ((v0_4 + 0x1));
    if (v0_7) goto L_C035FAE;
    *(unsigned int *)((v0_0 + (v0_3 << 2))) = 0xFFFFFFFF;
    *(float *)((v0_1 + (v0_3 << 2))) = 999.998962f;
    v0_7 = (0xFFFFFFFF);
    v0_2 = (v0_3);
    FPUL_ = (0x4479FFEF);
    L_C036074:;
    v0_3 = (int)(*(int *)((v0_0 + ((v0_7 + 0x1) << 2)))) >= 0;
    v0_8 = (((v0_7 + 0x1) << 2));
    v0_7 = ((v0_7 + 0x1));
    if (v0_3) goto L_C036064;
    v0_8 = ((*(int *)((v0_0 + (v0_2 << 2)))));
    goto L_C03608A;
    L_C036064:;
    if (((*(float *)((v0_1 + v0_8))) > (*(float *)((v0_1 + (v0_2 << 2)))))) goto L_C036074;
    v0_2 = (v0_7);
    goto L_C036074;
    L_C036008:;
    v0_8 = R1004;
    v0_7 = ((v0_8 + 0x5D0));
    if (((*(int *)(((v0_8 + 0x5D0) + 0x8))) != 0)) goto L_C036044;
    if (((*(int *)((v0_7 + 0xC))) != 0)) goto L_C036044;
    *(unsigned int *)((v0_0 + (v0_3 << 2))) = v0_4;
    *(float *)((v0_1 + (v0_3 << 2))) = (*(float *)(((((((v0_4 << 2) << 2) << 2) + (0xC0 + v0_2)) + ((*(int *)(((0xBC + (R1004)) + 0x0))) << 2)) + 0x0)));
    v0_3 = ((v0_3 + 0x1));
    goto L_C036044;
}
