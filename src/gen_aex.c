/* Straight-line functions with calls and guards (batch gen_aex): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c08f5d0(int, int);
int FUN_0c08f638(int, int, int, int, float, float, float, float, float);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
extern float _builtin_sqrtf(float);
int FUN_0c08f728(int a4, int a5);

int FUN_0c08f728(int a4, int a5)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register float F0;
    register float F2;
    register float F3;
    register float F5;
    register float F6;
    register float F7;
    register float F8;
    register float F13;
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
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_3 = a4;
    v0_2 = a5;
    v0_1 = (0xC8);
    v0_0 = (v0_3);
    if ((((*(int *)((v0_3 + 0xC8))) & 0x1FC) == 0)) goto L_C08F802;
    v0_1 = *(short *)((v0_0 + 0x6E));
    *(unsigned int *)(((int)stk + 4)) = (unsigned short)(*(short *)((v0_2 + 0x4)));
    v0_4 = *(short *)((v0_2 + 0x6));
    w0_0 = ((float)(unsigned short)v0_4 * (*(float *)((v0_0 + 0x284))));
    v0_5 = *(int *)((v0_0 + 0x510));
    v0_2 = ((v0_1 - 32768));
    v0_1 = ((unsigned short)v0_4);
    v0_3 = (v0_5);
    w0_0 = ((w0_0 * 0.599999964f));
    w0_1 = (25.0f);
    FPUL_ = ((unsigned short)v0_4);
    if ((v0_5 == -1)) goto L_C08F7B8;
    if (((*(int *)(((v0_3 << 2) + 0xC247030))) == 0)) goto L_C08F7B8;
    v0_3 = *(int *)((((*(int *)((v0_0 + 0x510))) << 2) + 0xC246FF0));
    w0_2 = *(float *)((v0_0 + 0x30));
    w0_3 = *(float *)((v0_3 + 0x30));
    w0_4 = *(float *)((v0_0 + 0x38));
    w0_5 = *(float *)((v0_3 + 0x38));
    w0_4 = ((w0_5 - w0_4) * (w0_5 - w0_4));
    w0_4 = w0_4 + ((w0_3 - w0_2)) * ((w0_3 - w0_2));
    v0_4 = !((_builtin_sqrtf(w0_4) + -10.0f) > ((*(float *)((v0_0 + 0x284))) * w0_1));
    v0_3 = (v0_3);
    w0_2 = ((_builtin_sqrtf(w0_4) + -10.0f));
    if (v0_4) goto L_C08F7BE;
    L_C08F7B8:;
    w0_2 = (((*(float *)((v0_0 + 0x284))) * w0_1));
    L_C08F7BE:;
    w0_1 = FUN_0c0da410(v0_2);
    w0_3 = FUN_0c0d9e90(v0_2);
    FUN_0c08f638(v0_0, 0x0, (*(int *)(((int)stk + 4))), v0_1, -0.5f, 1.5f, (w0_2 * w0_1), (w0_2 * w0_3), w0_0);
    return FUN_0c08f5d0((v0_0 + 0x30), (*(short *)((v0_0 + 0x6E))));
    L_C08F802:;
    return v0_1;
}
