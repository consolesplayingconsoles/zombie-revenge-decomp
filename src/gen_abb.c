/* Straight-line functions with calls and guards (batch gen_abb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[6]; } Stk6;
int ADXF_GetPtinfoSize(int);
int ADXF_LoadPartition(int, int, int, int);
int ADXT_EntryErrFunc(int, int);
int FUN_0c010a30(void);
int FUN_0c0cbbf4(Stk6);
int FUN_0c210416(int, int, int, int);
int FUN_0c213470(void);
int gdFsInit(int, int, int, int);
int FUN_0c0cbc28(void);

int FUN_0c0cbc28(void)
{
    int stk[7];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_0 = (0x0);
    v0_1 = (0xC521CB8);
    v0_2 = (0xC521CC0);
    L_C0CBC44:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_0;
    v0_3 = (unsigned int)(v0_1 + 0x4) < (unsigned int)v0_2;
    v0_1 = ((v0_1 + 0x4));
    if (v0_3) goto L_C0CBC44;
    v0_4 = (0xC516CA0);
    v0_2 = (0x400);
    R13 = (0xFFFFFFE0);
    v0_3 = (0x8);
    v0_1 = (0xC20F5CE);
    v0_5 = (0xC5158F4);
    L_C0CBC5A:;
    v0_6 = gdFsInit(0x8, ((v0_5 + 0x1F) & R13), v0_2, v0_4);
    v0_1 = (v0_6);
    if ((v0_6 == 0)) goto L_C0CBC7E;
    v0_6 = (int)(v0_3 - 1) > 0;
    v0_3 = ((v0_3 - 1));
    if (v0_6) goto L_C0CBC5A;
    if ((v0_1 == 0)) goto L_C0CBC7E;
    FUN_0c010a30();
    L_C0CBC7E:;
    FUN_0c210416(0xC0CEDDA, 0x0, R6, R7);
    FUN_0c213470();
    ADXT_EntryErrFunc(0xC0CEDF4, 0x0);
    { struct mv6 { int w[6]; }; *(struct mv6 *)(((int)stk + 4)) = *(struct mv6 *)(0xC1E9D88); }
    FUN_0c0cbbf4(*(Stk6 *)(((int)stk + 4)));
    v0_1 = *(int *)(((((*(int *)0xC1EF578) << 2) + ((int)stk + 4)) + 0x0));
    *(unsigned int *)0xC20A6F8 = v0_1;
    v0_6 = (v0_1);
    v0_4 = (0xC214016);
    v0_2 = (0xC521CC0);
    v0_3 = (0xC20A6E4);
    v0_1 = (0xC20A6E4);
    v0_1 = (0xC522920);
    v0_5 = (0xC214380);
    L_C0CBD44:;
    if (((int)(*(short *)((v0_3 + 0x0))) >= 0)) goto L_C0CBD28;
    *(unsigned int *)0xC31FDA0 = 0x1;
    *(unsigned char *)0xC522918 = v0_0;
    *(unsigned int *)0xC4BFE28 = (R13 & 0xC31FDC7);
    return v0_6;
    L_C0CBD28:;
    if (((*(short *)((v0_3 + 0x0))) != 2)) goto L_C0CBD30;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    L_C0CBD30:;
    ADXF_LoadPartition((*(short *)((v0_3 + 0x0))), (*(int *)((v0_3 + 0x4))), v0_2, (*(short *)((v0_3 + 0x2))));
    v0_4 = ADXF_GetPtinfoSize((*(short *)((v0_3 + 0x0))));
    v0_6 = (v0_4);
    v0_2 = ((v0_2 + v0_4));
    v0_3 = ((v0_3 + 0x8));
    goto L_C0CBD44;
}
