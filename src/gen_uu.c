/* Straight-line functions with calls and guards (batch gen_uu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcca0(int);
int FUN_0c0e5dc0(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int FUN_0c076b0c(int a4, int a5, int a6, int a7);

int FUN_0c076b0c(int a4, int a5, int a6, int a7)
{
    int stk[8];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_4 = a4;
    v0_1 = a5;
    v0_0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    FUN_0c0685a4(v0_4, v0_1, a6, a7);
    FUN_0c0dc5a0();
    v0_2 = *(int *)((v0_4 + 0x40));
    *(unsigned short *)(((int)stk + 4)) = ((FUN_0c0d9dc0(((*(float *)((v0_0 + 0x254))) - (*(float *)((v0_4 + 0x30)))), ((*(float *)((v0_0 + 0x25C))) - (*(float *)((v0_4 + 0x38)))))) - 16384);
    *(unsigned short *)((v0_4 + 0x70)) = ((*(short *)((v0_4 + 0x70))) + 0x100);
    v0_0 = *(short *)(((int)stk + 4));
    nlRotateAY((-(((int)((unsigned int)((int)((unsigned int)v0_0 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_0)) ? 1u : 0u))) >> 1)));
    v0_0 = (0x10000);
    v0_0 = (0x0);
    v0_1 = (0x0);
    v0_2 = (v0_2);
    v0_3 = (v0_4);
    v0_4 = (0x0);
    v0_4 = (0xC0DB4D0);
    v0_4 = (0x1);
    w0_0 = (0.099999994f);
    w0_1 = (1.0f);
    L_C076C30:;
    v0_5 = (0x3E);
    if (((int)v0_1 < (int)(*(short *)((v0_3 + 0x3E))))) goto L_C076B88;
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcca0((v0_3 + 0x30));
    FUN_0c0c465c((*(short *)((v0_3 + 0x3C))));
    return (nlPopMatrix(0x1));
    L_C076B88:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x10)) = *(struct mv3 *)((*(int *)((v0_2 + 0x0)))); }
    v0_5 = *(short *)((v0_3 + 0x70));
    *(unsigned int *)(((int)stk + 4)) = (short)v0_0;
    w0_2 = w0_1;
    w0_2 = w0_2 + w0_0 * (FUN_0c0d9e90((v0_5 + (short)v0_0)));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) * w0_2);
    w0_2 = w0_1;
    w0_2 = w0_2 + w0_0 * (FUN_0c0da410(((*(short *)((v0_3 + 0x70))) + (*(int *)(((int)stk + 4))))));
    *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) * w0_2);
    FUN_0c0db4d0((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
    w0_2 = (*(float *)((v0_3 + 0x54)));
    w0_2 = w0_2 + (*(float *)(((int)stk + 8))) * (*(float *)((v0_3 + 0x60)));
    w0_2 = w0_2;
    w0_2 = w0_2 + (*(float *)(((int)stk + 16))) * (*(float *)((v0_3 + 0x6C)));
    *(float *)(((*(int *)((v0_2 + 0x0))) + 0x18)) = w0_2;
    w0_2 = (*(float *)((v0_3 + 0x4C)));
    w0_2 = w0_2 + (*(float *)(((int)stk + 8))) * (*(float *)((v0_3 + 0x58)));
    w0_2 = w0_2;
    w0_2 = w0_2 + (*(float *)(((int)stk + 16))) * (*(float *)((v0_3 + 0x64)));
    *(float *)(((*(int *)((v0_2 + 0x0))) + 0x1C)) = w0_2;
    v0_5 = *(int *)((v0_2 + 0x0));
    *(unsigned int *)(((v0_5 + 0x1C) + 0x0)) = ((*(int *)(((v0_5 + 0x1C) + 0x0))) | v0_4);
    *(volatile short *)((v0_3 + 0x3E));
    v0_0 = ((v0_0 + (FUN_0c0e5dc0())));
    v0_1 = ((v0_1 + 0x1));
    v0_2 = ((v0_2 + 0x4));
    goto L_C076C30;
}
