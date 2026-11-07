/* Straight-line functions with calls and guards (batch gen_tc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c086b96(int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
void FUN_0c05b274(int a4, int a5, int a6, int a7, int a8);

void FUN_0c05b274(int a4, int a5, int a6, int a7, int a8)
{
    int stk[6];
    register int t0;
    register int t2;
    register int t4;
    register int t8;
    register int t22;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = *(int *)((a4 + 0xBC));
    t2 = *(int *)0xC23A258;
    t4 = FUN_0c0e19aa(0xC05BFAC, 0xB4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t4);
    *(unsigned int *)((t4 + 0x88)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t4 + 0x8C)) = a4;
    *(float *)((t4 + 0x54)) = 0.099999994f;
    *(float *)((t4 + 0x58)) = -0.5f;
    *(float *)((t4 + 0x5C)) = -0.5f;
    *(unsigned int *)((t4 + 0x78)) = 0x124F;
    *(unsigned int *)((t4 + 0xA0)) = 0x3C;
    *(unsigned int *)((t4 + 0xA4)) = 0x3;
    *(unsigned int *)((t4 + 0x98)) = a8;
    t8 = FUN_0c0e19aa(0xC08C20E, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t8);
    { struct mv16 { int w[16]; }; *(struct mv16 *)((t8 + 0x30)) = *(struct mv16 *)(((((t0 << 8) + 0xC25F840) + ((((a8 << 2) << 2) << 2) << 1)) + (((((t2 + 0x1) & 0x1) << 2) << 2) << 2))); }
    if ((*(int *)(((int)stk + 8))) != 0) {
        *(float *)((t8 + 0x90)) = (1.0f + 1.0f);
    } else {
        *(float *)((t8 + 0x90)) = 1.0f;
    }
    *(unsigned short *)((t8 + 0x9A)) = (*(short *)((((*(int *)((a4 + 0x344))) << 1) + 0xC0F9B60)));
    *(unsigned short *)((t8 + 0xA2)) = 0x1;
    *(unsigned short *)((t8 + 0xA0)) = 0x3;
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((((t0 << 8) + 0xC25F840) + ((((a8 << 2) << 2) << 2) << 1)) + (((((t2 + 0x1) & 0x1) << 2) << 2) << 2)));
    FUN_0c0db840((((int)stk + 4) + 0x8));
    FUN_0c086b96((((int)stk + 4) + 0x8));
    nlPopMatrix(0x1);
    if (a6 != 0) {
        t22 = FUN_0c0e19aa(0xC05C148, 0x2BC, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t22);
        *(unsigned int *)((t22 + 0xBC)) = (*(int *)((a4 + 0xBC)));
        *(unsigned int *)((t22 + 0x200)) = 0x0;
        *(unsigned int *)((t22 + 0x1F8)) = 0x0;
        *(unsigned int *)((t22 + 0x1EC)) = (*(int *)((a6 + 0x1EC)));
        *(float *)((t22 + 0x1E4)) = ((*(float *)(((*(int *)(((int)stk + 4))) + 0xC))) * (1.0f + 1.0f));
        *(unsigned int *)(((0x1FC + t22) + 0x0)) = (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 4))) + 0x1)));
        *(unsigned int *)((t22 + 0x22C)) = (*(int *)((a6 + 0x22C)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t22 + 0x30)) = *(struct mv3 *)((a6 + 0x30)); }
        *(unsigned short *)((t22 + 0x6E)) = (*(short *)((a4 + 0x6E)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t22 + 0x3C)) = *(struct mv3 *)((t22 + 0x30)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t22 + 0x48)) = *(struct mv3 *)((a6 + 0x48)); }
    }
}
