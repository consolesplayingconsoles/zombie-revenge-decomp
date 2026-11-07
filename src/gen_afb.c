/* Straight-line functions with calls and guards (batch gen_afb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7714(int, int, float, float, float);
float FUN_0c0dcea0(int);
float nlLength(int, int);
int nlSubVector3op(int, int, int);
float FUN_0c082cfa(int a4, int a5);

float FUN_0c082cfa(int a4, int a5)
{
    int stk[6];

    register int R2;
    register int R3;
    register float F0;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
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
    v0_0 = a4;
    v0_6 = a5;
    v0_3 = (0xC247DB8);
    v0_1 = (0x0);
    v0_4 = (v0_0);
    v0_0 = (0xC247DB8);
    v0_2 = (0xA);
    L_C082D0E:;
    *(unsigned short *)((v0_0 + 0x16)) = v0_1;
    *(unsigned short *)((v0_0 + 0x14)) = v0_1;
    v0_5 = (v0_2 - 0x1) != 0;
    v0_0 = ((v0_0 + 0x18));
    v0_2 = ((v0_2 - 0x1));
    if (v0_5) goto L_C082D0E;
    *(unsigned int *)((v0_4 + 0x24C)) = v0_6;
    v0_5 = (v0_6);
    if ((v0_6 == 0)) goto L_C082D34;
    if ((v0_5 == 1)) goto L_C082D3C;
    if (!((v0_5 == 2))) goto L_C082DB6;
    nlSubVector3op((((int)stk + 4) + 0x8), (0x278 + v0_4), (0x254 + v0_4));
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))));
    w0_0 = FUN_0c0dcea0((((int)stk + 4) + 0x8));
    *(float *)((v0_4 + 0x29C)) = w0_0;
    *(float *)((v0_4 + 0x2A0)) = (float)(*(int *)(((int)stk + 4)));
    v0_6 = *(int *)(((int)stk + 8));
    *(float *)((v0_4 + 0x2A4)) = (float)v0_6;
    v0_5 = (0x2A4);
    v0_0 = (v0_3);
    v0_2 = (0x3);
    F0 = (w0_0);
    FPUL_ = (v0_6);
    goto L_C082DB6;
    L_C082DB6:;
    *(unsigned int *)((v0_0 + 0x4)) = v0_1;
    v0_3 = (v0_2 - 0x1) != 0;
    v0_0 = ((v0_0 + 0x18));
    v0_2 = ((v0_2 - 0x1));
    if (v0_3) goto L_C082DB6;
    return F0;
    L_C082D3C:;
    w0_0 = nlLength((0x254 + v0_4), (0x278 + v0_4));
    *(float *)((v0_4 + 0x29C)) = w0_0;
    *(float *)((v0_4 + 0x2A0)) = (float)(*(short *)((v0_4 + 0x3CC)));
    v0_6 = *(short *)((v0_4 + 0x3CE));
    *(float *)((v0_4 + 0x2A4)) = (float)v0_6;
    v0_5 = (0x2A4);
    v0_0 = ((v0_3 + 0x48));
    v0_2 = (0x3);
    F0 = (w0_0);
    FPUL_ = (v0_6);
    goto L_C082DB6;
    L_C082D34:;
    v0_0 = ((0x90 + v0_3));
    v0_2 = (0x4);
    goto L_C082DB6;
}
