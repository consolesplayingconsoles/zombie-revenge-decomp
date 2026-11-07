/* Straight-line functions with calls and guards (batch gen_zd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c0da2e0(void);
int FUN_0c0e19aa(int, int, int, Stk3);
int FUN_0c0e6248(void);
float FUN_0c0685b6(int a4, int a5);

float FUN_0c0685b6(int a4, int a5)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R6;
    int R9;
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
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0FA2C4); }
    v0_0 = (0x0);
    v0_1 = (0xA);
    v0_2 = (((int)stk + 4));
    v0_3 = (0xC0FA2D8);
    v0_4 = (0xB4);
    R9 = (0x7);
    w0_0 = ((*(float *)0xC0686E4));
    w0_1 = ((*(float *)0xC0686E8));
    w0_2 = ((*(float *)0xC0686EC));
    L_C0685F2:;
    v0_7 = FUN_0c0e19aa(0xC06867A, v0_4, (*(int *)0xC23ECE4), *(Stk3 *)(((int)stk + 4)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_7 + 0x30)) = *(struct mv3 *)(v0_3); }
    FUN_0c0e6248();
    *(unsigned int *)(((0x78 + v0_7) + 0x0)) = (unsigned short)(*(short *)((v0_3 + 0x12)));
    *(unsigned int *)((v0_7 + 0x80)) = v0_0;
    *(float *)((v0_7 + 0x48)) = (((*(float *)((v0_7 + 0x30))) - (*(float *)((v0_2 + 0x0)))) * w0_2);
    v0_5 = FUN_0c0da2e0();
    w0_3 = w0_1;
    w0_3 = w0_3 + w0_0 * (float)(v0_5 & R9);
    *(float *)((v0_7 + 0x4C)) = w0_3;
    *(float *)((v0_7 + 0x50)) = (((*(float *)((v0_7 + 0x38))) - (*(float *)((v0_2 + 0x8)))) * w0_2);
    v0_6 = (v0_1 - 0x1) != 0;
    v0_8 = (0x50);
    v0_1 = ((v0_1 - 0x1));
    v0_3 = ((v0_3 + 0x14));
    v0_7 = (v0_7);
    w0_3 = (w0_0);
    FPUL_ = ((v0_5 & R9));
    if (v0_6) goto L_C0685F2;
    return w0_3;
}
