/* Straight-line functions with calls and guards (batch gen_abh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int adxf_ChkPrmGfr(int);
int ADXF_GetFileRange(int a4, int a5, int a6, int a7);

int ADXF_GetFileRange(int a4, int a5, int a6, int a7)
{
    int stk[2];

    register int R2;
    register int R3;
    register int R9;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    int R1004;
    R1004 = *(int *)((int)stk + 4);
    v0_6 = a4;
    v0_4 = a5;
    v0_7 = a6;
    v0_9 = a7;
    R1004 = v0_6;
    v0_6 = adxf_ChkPrmGfr(v0_6);
    v0_5 = (v0_6);
    v0_0 = (v0_6);
    v0_1 = (v0_7);
    v0_2 = (v0_9);
    v0_3 = (v0_4);
    v0_4 = ((((int)v0_6 >= 0)));
    if (((int)v0_6 >= 0)) goto L_C214B60;
    *(unsigned int *)((v0_1 + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)((v0_2 + 0x0)) = 0xFFFFFFFF;
    L_C214BD8:;
    return v0_0;
    L_C214B60:;
    v0_6 = ((R1004));
    v0_6 = ((*(int *)(((v0_6 << 2) + 0xC95E288))));
    L_C214B9E:;
    v0_9 = (0x0);
    if (((*(int *)((v0_6 + 0x0))) != 0)) goto L_C214B6A;
    v0_5 = ((0x0 + ((v0_6 + 0x14) + 0x2)));
    v0_8 = (((v0_6 + 0x14) + 0x2));
    v0_4 = (v0_9);
    v0_7 = ((unsigned short)(*(short *)(((v0_6 + 0x14) + 0x0))));
    if (((int)v0_3 <= 0)) goto L_C214BC8;
    L_C214BBC:;
    v0_9 = (int)(v0_4 + 0x1) < (int)v0_3;
    v0_7 = (v0_7 + (unsigned short)(*(short *)((v0_5 + 0x0))));
    v0_5 = ((v0_5 + 0x2));
    v0_4 = ((v0_4 + 0x1));
    v0_7 = v0_7;
    if (v0_9) goto L_C214BBC;
    L_C214BC8:;
    *(unsigned int *)((v0_1 + 0x0)) = (v0_7 + (*(int *)((v0_6 + 0x8))));
    *(unsigned int *)((v0_2 + 0x0)) = (unsigned short)(*(short *)((v0_8 + (v0_3 << 1))));
    goto L_C214BD8;
    L_C214B6A:;
    v0_8 = ((v0_6 + 0x14));
    v0_7 = (v0_9);
    L_C214B94:;
    if (((int)v0_7 < (int)(unsigned short)(*(short *)((v0_6 + 0x10))))) goto L_C214B72;
    v0_6 = ((*(int *)((v0_6 + 0x0))));
    goto L_C214B9E;
    L_C214B72:;
    v0_4 = ((((v0_7 << 2) << 1) + v0_8));
    if (((unsigned short)(*(short *)(((((v0_7 << 2) << 1) + v0_8) + 0x0))) != v0_3)) goto L_C214B92;
    *(unsigned int *)((v0_1 + 0x0)) = ((*(int *)((v0_6 + 0x8))) + (*(int *)((v0_4 + 0x4))));
    *(unsigned int *)((v0_2 + 0x0)) = (unsigned short)(*(short *)((v0_4 + 0x2)));
    goto L_C214BD8;
    L_C214B92:;
    v0_7 = ((v0_7 + 0x1));
    goto L_C214B94;
}
