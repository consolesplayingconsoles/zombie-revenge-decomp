/* Straight-line functions with calls and guards (batch gen_ic): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0d9dc0(int, int, float, float);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5f1c(int);
int nlGetAverageVector(int, int, int, float, float);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c061030(int a4, int a5, int a6, int a7);
int FUN_0c0811f4(int a4);

int FUN_0c061030(int a4, int a5, int a6, int a7)
{
    int stk[20];
    register int t1;
    register int t8;
    register int t48;
    register int t10;
    register int t41;
    register int t42;
    register int t5;

    *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x230)));
    t1 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t1 - 1);
    if ((int)(t1 - 1) < 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    } else {
        t5 = a4;
    }
    *(volatile int *)((a4 + 0x22C));
    t8 = FUN_0c0e5f1c(t5);
    t48 = t8;
    if (t8 != 0) {
    } else {
        t10 = FUN_0c0e19aa(0xC060F76, 0x2BC, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t10);
        *(unsigned int *)((t10 + 0xBC)) = (*(int *)((a4 + 0xBC)));
        *(unsigned int *)((t10 + 0x200)) = (*(int *)((a4 + 0x200)));
        *(unsigned int *)((t10 + 0x1EC)) = (*(int *)((a4 + 0x1EC)));
        *(unsigned int *)((t10 + 0x1E8)) = (*(int *)((a4 + 0x1E8)));
        *(unsigned int *)((t10 + 0x1F4)) = (*(int *)((a4 + 0x1F4)));
        *(unsigned int *)((t10 + 0x204)) = (*(int *)((a4 + 0x204)));
        *(float *)((t10 + 0x1E4)) = (*(float *)((a4 + 0x1E4)));
        *(unsigned int *)((t10 + 0x1FC)) = (*(int *)((a4 + 0x1FC)));
        *(unsigned int *)((t10 + 0x1F8)) = (*(int *)((a4 + 0x1F8)));
        nlPushMatrix(0x0);
        FUN_0c0dbda0(((*(int *)(((*(int *)(((int)stk + 4))) + 0x3E4))) + 0x100));
        *(float *)(((int)stk + 20)) = 0.0f;
        *(float *)(((int)stk + 24)) = 0.0f;
        *(float *)(((int)stk + 28)) = 0.0f;
        FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
        *(float *)(((((int)stk + 4) + 0x28) + 0x0)) = (*(float *)(((int)stk + 8)));
        *(float *)((((((int)stk + 4) + 0x28) + 0x4) + 0x0)) = (*(float *)(((int)stk + 12)));
        *(float *)((((((int)stk + 4) + 0x28) + 0x8) + 0x0)) = (*(float *)(((int)stk + 16)));
        *(float *)(((int)stk + 20)) = 0.0f;
        *(float *)(((int)stk + 24)) = (-(*(float *)((a4 + 0x250))));
        *(float *)(((int)stk + 28)) = 0.0f;
        FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
        *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = (*(float *)(((int)stk + 8)));
        *(float *)((((((int)stk + 4) + 0x1C) + 0x4) + 0x0)) = (*(float *)(((int)stk + 12)));
        *(float *)((((((int)stk + 4) + 0x1C) + 0x8) + 0x0)) = (*(float *)(((int)stk + 16)));
        nlPopMatrix(0x1);
        *(float *)((t10 + 0x48)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x28) + 0x0))));
        *(float *)((t10 + 0x4C)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x4))) - (*(float *)(((((int)stk + 4) + 0x28) + 0x4))));
        *(float *)((t10 + 0x50)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x8))) - (*(float *)(((((int)stk + 4) + 0x28) + 0x8))));
        t41 = *(int *)((a4 + 0xBC));
        t42 = *(int *)((a4 + 0x1E8));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t10 + 0x30)) = *(struct mv3 *)((((((((t41 << 1) + t41) << 2) << 2) << 2) + 0xC23F268) + (((t42 << 1) + t42) << 2))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t10 + 0x3C)) = *(struct mv3 *)((t10 + 0x30)); }
        *(unsigned int *)((t10 + 0x220)) = (*(int *)((a4 + 0x220)));
        *(unsigned int *)((t10 + 0x22C)) = (*(int *)((a4 + 0x22C)));
        *(float *)((t10 + 0x24C)) = (*(float *)((a4 + 0x24C)));
        *(float *)((t10 + 0x250)) = (*(float *)((a4 + 0x250)));
        *(float *)((t10 + 0x254)) = (*(float *)((a4 + 0x254)));
        t48 = 0x254;
    }
    return t48;
}

int FUN_0c0811f4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)((0xC246FF0 + ((*(int *)((a4 + 0x3B4))) << 2)));
    t1 = *(int *)((0xC246FF0 + ((*(int *)((a4 + 0x3B8))) << 2)));
    t2 = *(int *)((a4 + 0x3B4));
    t3 = *(int *)((a4 + 0x3B8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x338 + a4)) = *(struct mv3 *)(((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F268)); }
    if (((*(int *)0xC23A1A8) & 0x100) == 0) {
        u0 = ((*(float *)((t0 + 0x270))) + 15.0f);
    } else {
        u0 = ((*(float *)((t0 + 0x270))) + 12.0f);
    }
    if (u0 > (*(float *)((a4 + 0x33C)))) {
        *(float *)((a4 + 0x33C)) = u0;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x344 + a4)) = *(struct mv3 *)(((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC23F268)); }
    if ((0x100 & (*(int *)0xC23A1A8)) == 0) {
        u0 = ((*(float *)((t1 + 0x270))) + 15.0f);
    } else {
        u0 = ((*(float *)((t1 + 0x270))) + 12.0f);
    }
    if (u0 > (*(float *)((a4 + 0x348)))) {
        *(float *)((a4 + 0x348)) = u0;
    }
    FUN_0c0db470((0x338 + a4), (0x37C + a4));
    FUN_0c0db470((0x344 + a4), (0x390 + a4));
    *(float *)((a4 + 0x388)) = ((*(float *)((a4 + 0x37C))) / ((*(float *)0xC247D0C) * (*(float *)((a4 + 0x384)))));
    *(float *)((a4 + 0x38C)) = ((*(float *)((a4 + 0x380))) / ((*(float *)0xC247D10) * (*(float *)((a4 + 0x384)))));
    *(float *)((a4 + 0x39C)) = ((*(float *)((a4 + 0x390))) / ((*(float *)0xC247D0C) * (*(float *)((a4 + 0x398)))));
    *(float *)((a4 + 0x3A0)) = ((*(float *)((a4 + 0x394))) / ((*(float *)0xC247D10) * (*(float *)((a4 + 0x398)))));
    *(unsigned int *)((a4 + 0x370)) = (*(short *)((t0 + 0x6E)));
    *(unsigned int *)((a4 + 0x374)) = (*(short *)((t1 + 0x6E)));
    *(unsigned int *)(((0x378 + a4) + 0x0)) = (short)(FUN_0c0d9dc0(0xC247D10, 0xC247D0C, ((*(float *)((((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F268) + 0x0))) - (*(float *)((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC23F268) + 0x0)))), ((*(float *)((((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F268) + 0x8))) - (*(float *)((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC23F268) + 0x8))))));
    u0 = *(float *)((a4 + 0x388));
    t0 = 0;
    if (1.0f > _builtin_fabsf(u0)) {
        u1 = *(float *)((a4 + 0x38C));
        if (!(1.0f > _builtin_fabsf(u1))) {
            *(unsigned int *)((a4 + 0x250)) = ((*(int *)((a4 + 0x250))) | 0x8);
        }
        u2 = _builtin_fabsf(u1);
        t0 = ((1.0f > _builtin_fabsf(u1)));
    } else {
        *(unsigned int *)((a4 + 0x250)) = ((*(int *)((a4 + 0x250))) | 0x8);
        u2 = _builtin_fabsf(u0);
        t0 = (0);
    }
    u0 = *(float *)((a4 + 0x39C));
    t0 = 0;
    if (1.0f > _builtin_fabsf(u0)) {
        u1 = *(float *)((a4 + 0x3A0));
        if (!(1.0f > _builtin_fabsf(u1))) {
            *(unsigned int *)((a4 + 0x250)) = ((*(int *)((a4 + 0x250))) | 0x10);
        }
        u2 = _builtin_fabsf(u1);
        t0 = ((1.0f > _builtin_fabsf(u1)));
    } else {
        *(unsigned int *)((a4 + 0x250)) = ((*(int *)((a4 + 0x250))) | 0x10);
        u2 = _builtin_fabsf(u0);
        t0 = (0);
    }
    *(float *)((a4 + 0x3B0)) = (nlLength((0x338 + a4), (0x344 + a4)));
    return nlGetAverageVector((0x338 + a4), (0x344 + a4), (0x3A4 + a4), 0.5f, 0.5f);
}
