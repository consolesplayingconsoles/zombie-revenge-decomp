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
