/* Straight-line functions with calls and guards (batch gen_zo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0caf6a(int, int, int, float);
int FUN_0c0da2e0(void);
float FUN_0c061ccc(float f4);
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };


float FUN_0c061ccc(float f4)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    int R12;
    register float F0;
    register float F3;
    register float F12;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    w0_0 = f4;
    v0_1 = *(int *)0xC247B84;
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_C061DBA;
    FUN_0c0caf6a(((int)stk + 4), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8), ((((struct o3C_float *)((*(int *)0xC247B94)))->v)));
    v0_4 = (0xC061DE8);
    v0_1 = (0xC0DA2E0);
    R12 = (0xFFF);
    v0_1 = (0xC247B94);
    v0_2 = (0x0);
    v0_3 = (0x0);
    w0_0 = ((*(float *)0xC061DE8));
    L_C061DB2:;
    if (!(((int)v0_2 < (int)(*(int *)(((*(int *)((v0_1 + 0x0))) + 0x20)))))) goto L_C061DBA;
    v0_4 = *(int *)((v0_0 + 0x30));
    *(unsigned int *)((v0_0 + 0x30)) = (v0_4 + 0x1);
    v0_4 = ((((((((v0_4 + 0x1) - 1) << 2) + ((v0_4 + 0x1) - 1)) << 2) << 1) + (v0_0 + 0x34)));
    if (((int)(*(int *)((v0_0 + 0x30))) < (int)0x100)) goto L_C061D30;
    *(unsigned int *)((v0_0 + 0x30)) = v0_3;
    goto L_C061D30;
    L_C061DBA:;
    return F0;
    L_C061D30:;
    *(unsigned int *)((v0_4 + 0x20)) = v0_3;
    *(unsigned int *)((v0_4 + 0x18)) = (*(int *)(((*(int *)((v0_1 + 0x0))) + 0x10)));
    *(unsigned int *)((v0_4 + 0x1C)) = ((((struct o58_int *)((*(int *)((v0_1 + 0x0)))))->v));
    (((struct o4_float *)(v0_4))->v) = ((((struct o3C_float *)((*(int *)((v0_1 + 0x0)))))->v));
    *(float *)((v0_4 + 0x0)) = (*(float *)(((int)stk + 4)));
    (((struct o8_float *)(v0_4))->v) = (*(float *)(((int)stk + 8)));
    (((struct o24_float *)(v0_4))->v) = ((((struct o14_float *)((*(int *)((v0_1 + 0x0)))))->v));
    w0_1 = (*(float *)(((*(int *)((v0_1 + 0x0))) + 0x0)));
    w0_1 = w0_1 + ((((((struct o4_float *)((*(int *)((v0_1 + 0x0)))))->v)) / w0_0)) * (float)((FUN_0c0da2e0()) & R12);
    (((struct o10_float *)(v0_4))->v) = w0_1;
    w0_1 = ((((struct o8_float *)((*(int *)((v0_1 + 0x0)))))->v));
    w0_1 = w0_1 + ((((((struct oC_float *)((*(int *)((v0_1 + 0x0)))))->v)) / w0_0)) * (float)((FUN_0c0da2e0()) & R12);
    (((struct oC_float *)(v0_4))->v) = w0_1;
    w0_2 = (((struct o8_float *)((*(int *)((v0_1 + 0x0)))))->v);
    v0_5 = FUN_0c0da2e0();
    w0_1 = (((struct oC_float *)((*(int *)((v0_1 + 0x0)))))->v);
    w0_2 = w0_2;
    w0_2 = w0_2 + ((w0_1 / w0_0)) * (float)(v0_5 & R12);
    (((struct o14_float *)(v0_4))->v) = w0_2;
    v0_4 = (0x14);
    v0_2 = ((v0_2 + 0x1));
    F0 = ((w0_1 / w0_0));
    FPUL_ = ((v0_5 & R12));
    goto L_C061DB2;
}
