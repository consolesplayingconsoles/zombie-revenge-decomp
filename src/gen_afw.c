/* Straight-line functions with calls and guards (batch gen_afw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c0340(int);
int FUN_0c0b1542(int a4, float f4);

int FUN_0c0b1542(int a4, float f4)
{
    int stk[15];

    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_4 = a4;
    w0_0 = f4;
    v0_3 = *(int *)(((v0_4 << 2) + 0xC202588));
    *(float *)(((int)stk + 8)) = ((float)(unsigned short)(*(short *)(((0xC111120 + (v0_4 << 2)) + 0x0))) + (*(float *)0xC0B1644));
    v0_2 = *(short *)(((0xC111120 + (v0_4 << 2)) + 0x2));
    w0_1 = *(float *)0xC0B1648;
    *(float *)(((int)stk + 12)) = ((float)(unsigned short)v0_2 + w0_1);
    *(float *)(((int)stk + 16)) = (*(float *)0xC0B164C);
    *(float *)(((int)stk + 20)) = (*(float *)0xC0B1650);
    *(float *)(((int)stk + 24)) = (*(float *)0xC0B1654);
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 1.0f;
    *(float *)(((int)stk + 40)) = 1.0f;
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    *(unsigned int *)(((int)stk + 56)) = 0x1000;
    *(float *)(((int)stk + 48)) = w0_0;
    *(unsigned int *)(((int)stk + 52)) = 0xFFFFFFFF;
    v0_0 = (0xC0B165C);
    v0_1 = (0xC0C0340);
    v0_1 = (0xC1121DC);
    v0_3 = (v0_3);
    v0_4 = ((v0_4 << 2));
    w0_1 = (w0_1);
    w0_1 = ((*(float *)0xC0B165C));
    w0_2 = (1.0f);
    FPUL_ = ((unsigned short)v0_2);
    L_C0B15F0:;
    v0_2 = *(signed char *)((v0_3 + 0x0));
    v0_3 = ((v0_3 + 0x1));
    v0_4 = (v0_2);
    if (((signed char)v0_2 != 0)) goto L_C0B15C4;
    return v0_0;
    L_C0B15C4:;
    v0_0 = ((signed char)v0_4);
    if (((signed char)v0_4 == 32)) goto L_C0B15E6;
    if ((v0_0 == 0)) goto L_C0B15E6;
    if ((v0_0 == 32)) goto L_C0B15E6;
    *(unsigned int *)(((int)stk + 4)) = (*(short *)((v0_1 + ((signed char)v0_4 << 1))));
    FUN_0c0c0340(((int)stk + 4));
    L_C0B15E6:;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + w0_1);
    v0_0 = (0x4);
    goto L_C0B15F0;
}
