/* Straight-line functions with calls and guards (batch gen_kr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c01ce40(int, int, float);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int);
int FUN_0c07a89a(int);
int FUN_0c08f500(int, float);
int FUN_0c0dce80(int, int, float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
extern int FUN_0c0e19f2();
int FUN_0c0e6248(void);
int nlAddVector(int, int);
int FUN_0c061418(int a4);
int FUN_0c07a520(void);


int FUN_0c07a520(void)
{
    register int t1;
    int t8;
    register int t9;
    register int t11;
    register int t13;
    register int t14;

    t1 = FUN_0c0e19aa(0xC07A5F8, 0x28C, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(0xC0FFCEC); }
    FUN_0c0e6248();
    *(unsigned int *)(((0x21C + t1) + 0x0)) = (unsigned short)(*(short *)0xC0FFCFE);
    *(unsigned int *)((t1 + 0x78)) = 0xC1B6844;
    *(unsigned int *)((t1 + 0x74)) = 0x15;
    *(unsigned int *)((t1 + 0xBC)) = 0x10;
    FUN_0c01ce40(t1, 0xC1B6844, (*(float *)0xC07A64C));
    FUN_0c07a89a(t1);
    t8 = 0x0;
    t9 = 0xC0FFD00;
    for (;;) {
        t11 = FUN_0c0e19aa(0xC07A7BC, 0xB4, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t11);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t11 + 0x30)) = *(struct mv3 *)(t9); }
        t13 = *(short *)((t9 + 0xE));
        t14 = 0x400;
        if ((0x1 & t8) != 0) {
            t14 = 0xFFFFFC00;
        }
        *(unsigned short *)(((0x62 + t11) + 0x0)) = (t13 + t14);
        *(unsigned short *)(((0x60 + t11) + 0x0)) = (t13 + t14);
        *(unsigned int *)(((0x78 + t11) + 0x0)) = (unsigned short)(*(short *)((t9 + 0x12)));
        *(unsigned int *)((t11 + 0x8C)) = t1;
        *(unsigned int *)((t11 + 0x88)) = t8;
        t8 = (t8 + 0x1);
        t9 = (t9 + 0x14);
        if ((int)t8 >= (int)0x4) {
            break;
        }
    }
    return 0x88;
}

int FUN_0c061418(int a4)
{
    int stk[7];
    register int t0;
    register int t22;
    register int t24;
    register int t12;

    t0 = *(int *)((a4 + 0x23C));
    *(unsigned int *)((a4 + 0x23C)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0dce80(((int)stk + 4), (a4 + 0x48), (*(float *)0xC06155C));
        nlAddVector(((int)stk + 4), (a4 + 0x30));
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - (((*(float *)((a4 + 0x1E4))) * (*(float *)0xC061568)) / (1.0f + 1.0f)));
        FUN_0c08f500(((int)stk + 4), ((*(float *)((a4 + 0x1E4))) / (1.0f + 1.0f)));
        *(unsigned int *)((a4 + 0x23C)) = (*(int *)((a4 + 0x240)));
    } else {
        t12 = a4;
    }
    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4);
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c054c8a(a4);
        }
        t22 = ((int (*)(void))(FUN_0c0e19f2))();
    } else {
        if (!((*(float *)((a4 + 0x24C))) > 0.0f)) {
            t24 = ((int (*)(int))(FUN_0c0e19f2))(t12);
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    nlAddVector((a4 + 0x30), (a4 + 0x48));
    *(float *)((a4 + 0x1E4)) = ((*(float *)((a4 + 0x1E4))) * (*(float *)(((0x254 + a4) + 0x0))));
    *(float *)((a4 + 0x24C)) = ((*(float *)((a4 + 0x24C))) - (*(float *)(((0x250 + a4) + 0x0))));
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + (*(float *)(((0x258 + a4) + 0x0))));
    return (FUN_0c01cdc2(a4));
}

