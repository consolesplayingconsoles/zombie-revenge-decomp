/* Straight-line functions with calls and guards (batch gen_adk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0dce80(int, int, float);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int FUN_0c062180(int a4, int a5);

int FUN_0c062180(int a4, int a5)
{
    int stk[8];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register float F1;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_1 = a5;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    v0_2 = *(int *)0xC247B84;
    v0_0 = (v0_2);
    v0_1 = (v0_1);
    if ((v0_2 == 0)) goto L_C06228C;
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAZ((*(short *)((v0_1 + 0x4))));
    nlRotateAY((*(short *)((v0_1 + 0x2))));
    v0_1 = nlRotateAX((*(short *)((v0_1 + 0x0))));
    v0_2 = *(int *)((v0_0 + 0x30));
    *(unsigned int *)((v0_0 + 0x30)) = (v0_2 + 0x1);
    R0 = (v0_1);
    v0_1 = ((((((((v0_2 + 0x1) - 1) << 2) + ((v0_2 + 0x1) - 1)) << 2) << 1) + (v0_0 + 0x34)));
    if (((int)(*(int *)((v0_0 + 0x30))) < (int)0x100)) goto L_C0621DA;
    *(unsigned int *)((v0_0 + 0x30)) = 0x0;
    R0 = (0x0);
    L_C0621DA:;
    *(unsigned int *)((v0_1 + 0x1C)) = 0x114;
    *(unsigned int *)((v0_1 + 0x20)) = 0x2;
    *(unsigned int *)((v0_1 + 0x18)) = 0x64;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_1) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
    nlPushMatrix(0x0);
    v0_0 = FUN_0c0da2e0();
    nlRotateAZ((v0_0 << 1));
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0299999993f;
    *(float *)(((int)stk + 28)) = (((-((float)((FUN_0c0da2e0()) & 0xFFF) * 2.44200219e-05f))) + -2.0f);
    FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
    *(float *)(((v0_1 + 0xC) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)(((v0_1 + 0x10) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)(((v0_1 + 0x14) + 0x0)) = (*(float *)(((int)stk + 16)));
    v0_0 = FUN_0c0da2e0();
    FUN_0c0dce80((((int)stk + 4) + 0x10), (v0_1 + 0xC), ((float)(v0_0 & 0xFFF) * 0.00024420023f));
    nlAddVector(v0_1, (((int)stk + 4) + 0x10));
    nlPopMatrix(0x1);
    R0 = ((nlPopMatrix(0x1)));
    L_C06228C:;
    return R0;
}
