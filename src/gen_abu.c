/* Straight-line functions with calls and guards (batch gen_abu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0dd0a0(int, int);
int FUN_0c0e19aa(int, int, int);
extern float _builtin_sqrtf(float);
int FUN_0c059d72(int a4, int a5, int a6, int a7, int a8, float f4);

int FUN_0c059d72(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int stk[10];
    register int t1;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register float u18;

    *(float *)(((int)stk + 12)) = f4;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t1 = FUN_0c0e19aa(0xC059B98, 0xB4, (*(int *)0xC23ECE4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(a5); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x54)) = *(struct mv3 *)((a4 + 0x30)); }
    *(unsigned short *)((t1 + 0x60)) = 0x0;
    *(unsigned short *)(((0x62 + t1) + 0x0)) = (*(short *)((a5 + 0xC)));
    *(unsigned short *)((t1 + 0x64)) = 0x0;
    *(unsigned int *)(((t1 + 0x68) + 0x0)) = (*(short *)((a4 + 0x6C)));
    *(unsigned int *)((t1 + 0x6C)) = (*(short *)((a4 + 0x6E)));
    *(unsigned int *)((t1 + 0x70)) = (*(short *)((a4 + 0x70)));
    *(float *)((t1 + 0x74)) = (*(float *)((a4 + 0x25C)));
    *(unsigned int *)(((0x78 + t1) + 0x0)) = (*(short *)((a5 + 0xE)));
    *(unsigned int *)((t1 + 0x80)) = 0x0;
    *(unsigned int *)((t1 + 0xA0)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)((t1 + 0xA4)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((0x84 + t1) + 0x0)) = ((*(short *)((a5 + 0xE))) & 0x1);
    *(float *)((t1 + 0x94)) = (*(float *)(((int)stk + 12)));
    if (a8 != 0) {
        *(unsigned int *)((t1 + 0x8C)) = a8;
    } else {
        *(unsigned int *)((t1 + 0x8C)) = 0xC0F9B34;
    }
    u14 = *(float *)((a5 + 0x0));
    u15 = *(float *)((a5 + 0x4));
    u16 = *(float *)((a5 + 0x8));
    u17 = (u15 * u15);
    u17 = u17 + u14 * u14;
    *(unsigned int *)(((int)stk + 4)) = 0x888;
    u18 = u17;
    u18 = u18 + u16 * u16;
    *(float *)((t1 + 0x48)) = ((1.0f * (*(float *)((a5 + 0x0)))) / _builtin_sqrtf(u18));
    *(float *)((t1 + 0x4C)) = ((1.0f * (*(float *)((a5 + 0x4)))) / _builtin_sqrtf(u18));
    *(float *)((t1 + 0x50)) = ((1.0f * (*(float *)((a5 + 0x8)))) / _builtin_sqrtf(u18));
    *(float *)((t1 + 0x90)) = 1.0f;
    *(float *)(((int)stk + 28)) = (-(*(float *)((t1 + 0x50))));
    *(float *)(((int)stk + 32)) = (*(float *)((t1 + 0x4C)));
    *(float *)(((int)stk + 36)) = (*(float *)((t1 + 0x48)));
    FUN_0c0dd0a0((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
    *(float *)(((t1 + 0x48) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)(((t1 + 0x4C) + 0x0)) = (*(float *)(((int)stk + 20)));
    *(float *)(((t1 + 0x50) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(unsigned int *)((t1 + 0x98)) = 0x0;
    *(unsigned int *)((t1 + 0x9C)) = (*(int *)(((int)stk + 4)));
    return 0x9C;
}
