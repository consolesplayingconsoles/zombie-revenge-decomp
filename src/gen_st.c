/* Straight-line functions with calls and guards (batch gen_st): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01d562(int, int, int, int, int, int, int, int, int);
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bb0f4(int);
int FUN_0c0c1480(void);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0c22be(int a4);

int FUN_0c0c22be(int a4)
{
    int stk[4];
    register int t0;
    int t2;
    register int t23;
    register int t24;
    register int t25;

    t0 = FUN_0c0e1830(0xC0C1508, 0x5EC);
    FUN_0c0e19d0(t0);
    *(unsigned int *)0xC246FF0 = t0;
    *(unsigned int *)0xC247030 = 0x2;
    *(unsigned int *)0xC247070 = 0x1;
    *(unsigned int *)0xC2460F4 = t0;
    *(unsigned short *)0xC2460F8 = 0x2;
    *(unsigned int *)0xC2460FC = 0x1;
    *(unsigned int *)((t0 + 0xBC)) = 0x0;
    *(unsigned int *)((t0 + 0x498)) = 0x0;
    *(float *)((t0 + 0x30)) = 200.0f;
    *(float *)((t0 + 0x34)) = 0.000999999931f;
    *(float *)((t0 + 0x38)) = 130.0f;
    *(unsigned short *)((t0 + 0x6E)) = 0xFFFFC000;
    *(unsigned int *)((t0 + 0xC0)) = 0x4;
    t2 = *(int *)0xC2497B0;
    if ((0x8 & t2) != 0) {
        *(unsigned int *)(((0xC0 + t0) + 0x0)) = 0x37;
    } else {
        if ((t2 & 0x80000) != 0) {
            *(unsigned int *)(((0xC0 + t0) + 0x0)) = 0x30;
        }
    }
    *(unsigned int *)((t0 + 0x20C)) = 0x40000000;
    *(unsigned int *)((t0 + 0x74)) = 0x4;
    *(unsigned int *)((t0 + 0x388)) = 0x1;
    *(float *)((t0 + 0x390)) = (*(float *)0xC0C24C0);
    *(float *)((t0 + 0x214)) = (*(float *)0xC0C24C4);
    *(float *)((t0 + 0x218)) = (*(float *)0xC0C24C8);
    *(float *)((t0 + 0x274)) = 1.0f;
    *(float *)((t0 + 0x278)) = 1.0f;
    *(float *)((t0 + 0x27C)) = 1.0f;
    *(float *)((t0 + 0x284)) = 1.0f;
    *(float *)(((0x468 + t0) + 0x8)) = 1.0f;
    *(float *)(((0x468 + t0) + 0x4)) = 1.0f;
    *(float *)(((0x468 + t0) + 0x0)) = 1.0f;
    *(float *)(((0x45C + t0) + 0x8)) = 1.0f;
    *(float *)(((0x45C + t0) + 0x4)) = 1.0f;
    *(float *)(((0x45C + t0) + 0x0)) = 1.0f;
    *(unsigned int *)((t0 + 0x32C)) = 0x0;
    *(unsigned int *)((t0 + 0x4C8)) = 0x1;
    *(unsigned int *)((((*(int *)((t0 + 0xBC))) << 2) + 0xC24759C)) = 0x200;
    *(float *)((((*(int *)((t0 + 0xBC))) << 2) + 0xC24758C)) = 0.0f;
    *(unsigned int *)((t0 + 0xA4)) = 0xA7F;
    *(unsigned int *)((t0 + 0x354)) = 0x1;
    FUN_0c0855ba(t0);
    FUN_0c0bb0f4(t0);
    FUN_0c01d562(t0, 0xC209AD0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
    *(unsigned int *)((a4 + 0x38)) = t0;
    FUN_0c0c1480();
    FUN_0c0ba6e8(t0);
    FUN_0c0ba776(t0);
    FUN_0c085638(t0);
    *(unsigned int *)((a4 + 0x5C)) = (*(int *)((t0 + 0x3D4)));
    t23 = 0x30;
    for (;;) {
        t24 = *(int *)((a4 + 0x5C));
        t23 = (t23 - 0x1);
        *(unsigned int *)((a4 + 0x5C)) = (t24 + 0x2);
        *(unsigned short *)((((t24 + 0x2) - 0x2) + 0x0)) = 0x0;
        if (t23 == 0) {
            break;
        }
    }
    t25 = *(int *)((t0 + 0x3D4));
    *(float *)((t25 + 0x68)) = 0.0f;
    *(float *)((t25 + 0x64)) = 0.0f;
    *(float *)((t25 + 0x60)) = 0.0f;
    *(unsigned int *)0xC262384 = 0xCEEFF24;
    *(unsigned int *)((a4 + 0x84)) = 0x0;
    *(unsigned int *)((a4 + 0x88)) = 0x0;
    *(unsigned int *)((a4 + 0x8C)) = 0x0;
    *(unsigned int *)((a4 + 0x90)) = 0x0;
    *(unsigned int *)((a4 + 0x78)) = (*(int *)((t0 + 0xC0)));
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
    return 0x78;
}
