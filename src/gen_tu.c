/* Straight-line functions with calls and guards (batch gen_tu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int, int);
int FUN_0c01e7e8(int, int, int);
int FUN_0c08d834(int);
int FUN_0c08d840(int, int, int, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dcca0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c05eb64(int a4, float f4, float f5, float f6);

int FUN_0c05eb64(int a4, float f4, float f5, float f6)
{
    int stk[12];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R9;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    w0_0 = f4;
    w0_0 = f5;
    w0_0 = f6;
    v0_0 = (v0_1);
    w0_0 = (30.0f);
    w0_1 = ((1.0f + 1.0f));
    if (((*(int *)((v0_1 + 0xD8))) != 0)) goto L_C05EB90;
    v0_1 = *(int *)((v0_0 + 0x22C));
    *(unsigned int *)((v0_0 + 0x22C)) = (v0_1 - 1);
    v0_2 = (0x22C);
    if (((int)(v0_1 - 1) > 0)) goto L_C05EBF8;
    L_C05EB90:;
    *(unsigned int *)((v0_0 + 0x220)) = 0x344;
    *(float *)((v0_0 + 0x1E4)) = w0_0;
    *(unsigned int *)((v0_0 + 0x23C)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x20)) = *(struct mv3 *)((v0_0 + 0x30)); }
    *(float *)(((int)stk + 40)) = ((*(float *)(((int)stk + 40))) + w0_1);
    FUN_0c08d834((((int)stk + 4) + 0x20));
    FUN_0c0cc3f8(0x1331A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    FUN_0c0cc054((*(int *)((v0_0 + 0xBC))), 0xD);
    L_C05EDB2:;
    *(unsigned int *)((v0_0 + 0x0)) = 0xC05EE68;
    v0_2 = ((FUN_0c08d840((v0_0 + 0x30), R5, R6, 35.0f)));
    L_C05EE1E:;
    return v0_2;
    L_C05EBF8:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x3C)) = *(struct mv3 *)((v0_0 + 0x30)); }
    *(float *)((v0_0 + 0x64)) = ((*(float *)((v0_0 + 0x64))) + -0.099999994f);
    *(float *)((v0_0 + 0x54)) = (*(float *)((v0_0 + 0x60)));
    *(float *)((v0_0 + 0x58)) = (*(float *)((v0_0 + 0x64)));
    *(float *)((v0_0 + 0x5C)) = (*(float *)((v0_0 + 0x68)));
    FUN_0c01e7e8(v0_0, 0xA7F, (*(int *)((v0_0 + 0xBC))));
    v0_1 = (0xC0DC6E0);
    v0_1 = (0xC0DC890);
    if (!(((*(int *)((v0_0 + 0xA8))) != 0))) goto L_C05EDC6;
    v0_2 = (0xAC);
    if (((int)(*(int *)((v0_0 + 0xAC))) <= (int)0x16)) goto L_C05EC56;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x20)) = *(struct mv3 *)((v0_0 + 0x30)); }
    *(float *)(((int)stk + 40)) = ((*(float *)(((int)stk + 40))) + w0_1);
    FUN_0c08d834((((int)stk + 4) + 0x20));
    *(unsigned int *)((v0_0 + 0x220)) = 0x344;
    *(float *)((v0_0 + 0x1E4)) = w0_0;
    *(unsigned int *)((v0_0 + 0x23C)) = 0x0;
    FUN_0c0cc3f8(0x1331A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    FUN_0c0cc054((*(int *)((v0_0 + 0xBC))), 0xD);
    goto L_C05EDB2;
    L_C05EDC6:;
    *(float *)((v0_0 + 0x30)) = ((*(float *)((v0_0 + 0x30))) + (*(float *)(((0x54 + v0_0) + 0x0))));
    *(float *)((v0_0 + 0x34)) = ((*(float *)((v0_0 + 0x34))) + (*(float *)(((0x58 + v0_0) + 0x0))));
    *(float *)((v0_0 + 0x38)) = ((*(float *)((v0_0 + 0x38))) + (*(float *)(((0x5C + v0_0) + 0x0))));
    FUN_0c01cdc2(v0_0, R5);
    nlPushMatrix(0x0);
    FUN_0c0dcca0((v0_0 + 0x30));
    nlRotateAY((*(short *)((v0_0 + 0x6E))));
    nlRotateAX((*(short *)((v0_0 + 0x6C))));
    FUN_0c0c465c((*(int *)((v0_0 + 0x220))));
    v0_2 = ((nlPopMatrix(0x1)));
    goto L_C05EE1E;
    L_C05EC56:;
    nlPushMatrix(0x0);
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)((v0_0 + 0x98))), (*(float *)((v0_0 + 0x9C))), (*(float *)((v0_0 + 0xA0))));
    nlUnitMatrix();
    nlRotateAX((-(*(int *)(((int)stk + 4)))));
    nlRotateAY((-(*(int *)(((int)stk + 8)))));
    *(float *)(((int)stk + 36)) = (*(float *)((v0_0 + 0x60)));
    *(float *)(((int)stk + 40)) = (*(float *)((v0_0 + 0x64)));
    *(float *)(((int)stk + 44)) = (*(float *)((v0_0 + 0x68)));
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 32)));
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 20))) * 0.599999964f);
    *(float *)(((int)stk + 40)) = ((*(float *)(((int)stk + 16))) * 0.599999964f);
    *(float *)(((int)stk + 44)) = (-((*(float *)(((int)stk + 12))) * 0.599999964f));
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    *(float *)(((v0_0 + 0x54) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((v0_0 + 0x58) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((v0_0 + 0x5C) + 0x0)) = (*(float *)(((int)stk + 32)));
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x60)) = *(struct mv3 *)((v0_0 + 0x54)); }
    goto L_C05EDC6;
}
