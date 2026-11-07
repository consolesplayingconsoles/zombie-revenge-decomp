/* Straight-line functions with calls and guards (batch gen_tl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a6610(int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e5f1c(void);
int FUN_0c033530(int a4, int a5, int a6, int a7);

int FUN_0c033530(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t0;
    register float u8;
    register float u11;
    register int t20;
    register float u21;
    register float u22;
    register float u25;
    register float u26;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c0e1830(0xC0333F0, 0x41C);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x1DC)) = ((*(int *)(((int)stk + 4))) - 32768);
    *(unsigned int *)((t0 + 0x1CC)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)((t0 + 0x414)) = 0x0;
    *(float *)((t0 + 0x3EC)) = 0.0272199996f;
    *(unsigned int *)((t0 + 0x400)) = 0x874;
    *(unsigned int *)((t0 + 0x3E8)) = ((*(int *)(((int)stk + 4))) + (*(int *)(((int)stk + 12))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((*(int *)(((int)stk + 16)))); }
    *(float *)((t0 + 0x3F0)) = 1.5f;
    *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = 0.0f;
    if ((*(int *)((t0 + 0x1CC))) != 0) {
        u8 = *(float *)((t0 + 0x3F0));
        FUN_0c0da2e0();
        u11 = 0.699999988f;
        u11 = u11 + 0.099999994f * (float)(FUN_0c0e5f1c());
        *(float *)(((((int)stk + 4) + 0x1C) + 0x4)) = ((0.659999967f / (u8 / (1.0f + 1.0f))) * u11);
    } else {
        *(float *)(((((int)stk + 4) + 0x1C) + 0x4)) = 0.0f;
    }
    t20 = *(int *)((t0 + 0x1CC));
    u21 = *(float *)0xC033730;
    u22 = *(float *)((t0 + 0x3F0));
    FUN_0c0da2e0();
    u25 = 0.699999988f;
    u25 = u25 + 0.099999994f * (float)(FUN_0c0e5f1c());
    u26 = (((float)t20 * u21) / (u22 / (1.0f + 1.0f)));
    *(float *)(((((int)stk + 4) + 0x1C) + 0x8)) = (u26 * u25);
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = 0x0;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x4)) = ((*(int *)((t0 + 0x3E8))) + 0x8000);
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x8)) = 0x0;
    FUN_0c0a6610((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10), (0x220 + t0));
    *(unsigned short *)((t0 + 0x6E)) = (*(short *)((t0 + 0x3E8)));
    FUN_0c0da2e0();
    *(unsigned int *)(((0x22C + t0) + 0x0)) = (((FUN_0c0e5f1c()) << 8) - 1536);
    *(unsigned int *)((t0 + 0x230)) = 0x0;
    FUN_0c0da2e0();
    *(unsigned int *)(((0x234 + t0) + 0x0)) = (((FUN_0c0e5f1c()) << 8) - 768);
    *(unsigned int *)((t0 + 0x410)) = 0x0;
    *(unsigned int *)0xC246A3C = ((*(int *)0xC246A3C) + 0x1);
    return 0x410;
}
