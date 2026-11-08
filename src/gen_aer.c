/* Straight-line functions with calls and guards (batch gen_aer): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
float nlLength(int, int);
void FUN_0c08b580(int a4, int a5, int a6, float f4, float f5);
struct o38C_uint { char p[0x38C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct oBC_int { char p[0xBC]; int v; };


void FUN_0c08b580(int a4, int a5, int a6, float f4, float f5)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
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
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    int R1004;
    int R1008;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    v0_0 = a4;
    v0_1 = a5;
    v0_4 = a6;
    w0_2 = f4;
    w0_1 = f5;
    R1004 = v0_0;
    R1008 = v0_1;
    v0_0 = (0x0);
    v0_1 = (0x1);
    v0_2 = (0x0);
    v0_3 = (0x0);
    w0_0 = ((w0_1 / (float)v0_4));
    w0_1 = (w0_1);
    w0_2 = (w0_2);
    FPUL_ = (v0_4);
    L_C08B5B4:;
    v0_4 = (((((v0_0 << 2) + v0_0) << 2) + 0xC248CBC));
    if (((*(int *)((((((v0_0 << 2) + v0_0) << 2) + 0xC248CBC) + 0x0))) != 0)) goto L_C08B626;
    v0_5 = (0xC247030);
    if (((int)(*(int *)((v0_2 + 0xC247030))) < (int)0x3)) goto L_C08B626;
    v0_5 = *(int *)((v0_3 + 0xC246FF0));
    w0_3 = nlLength((v0_5 + 0x30), (R1004));
    v0_5 = (v0_5);
    w0_4 = (w0_3);
    w0_4 = (w0_3);
    if ((!(w0_2 > w0_3))) goto L_C08B626;
    v0_6 = FUN_0c0e19aa(0xC08B730, 0x48, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(v0_6);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_4 + 0x8)) = *(struct mv3 *)((R1004)); }
    *(unsigned int *)((v0_4 + 0x0)) = v0_6;
    *(unsigned int *)((v0_6 + 0x30)) = v0_5;
    *(unsigned int *)((v0_6 + 0x38)) = ((((struct oBC_int *)(v0_5))->v));
    (((struct o4_float *)(v0_4))->v) = ((w0_4 / w0_2) * w0_1);
    (((struct o40_uint *)(v0_6))->v) = (R1008);
    (((struct o44_float *)(v0_6))->v) = w0_0;
    (((struct o38C_uint *)(v0_5))->v) = v0_1;
    v0_5 = (0x38C);
    v0_4 = (v0_6);
    L_C08B626:;
    v0_4 = (int)(v0_0 + 0x1) < (int)0xC;
    v0_0 = ((v0_0 + 0x1));
    v0_1 = ((v0_1 + 0x1));
    v0_2 = ((v0_2 + 0x4));
    v0_3 = ((v0_3 + 0x4));
    if (v0_4) goto L_C08B5B4;
    L_C08B634:;
}
