/* Straight-line functions with calls and guards (batch gen_ut): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01fd30(int);
int FUN_0c03542e(int);
int FUN_0c049c0a(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c020c80(int a4, int a5);

int FUN_0c020c80(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a5 + 0xC0));
    t1 = FUN_0c0e1830(0xC020AA4, 0x5EC);
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0xBC)) = a4;
    *(unsigned int *)((t1 + 0x48C)) = (*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0)));
    *(unsigned int *)((t1 + 0x4BC)) = (*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x24)));
    *(unsigned int *)((t1 + 0x4C0)) = (*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x28)));
    *(unsigned int *)((t1 + 0xC8)) = (*(int *)((((((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2) + 0xC1F958C) + 0x4)));
    *(unsigned int *)(((0x304 + t1) + 0x0)) = (unsigned short)(*(short *)((((t0 * 0x2C) + 0xC1EFAF0) + 0xE)));
    *(unsigned int *)(((0x308 + t1) + 0x0)) = (unsigned short)(*(short *)((((t0 * 0x2C) + 0xC1EFAF0) + 0xE)));
    *(float *)((t1 + 0x274)) = ((float)(unsigned short)(*(short *)((((((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2) + 0xC1F958C) + 0xA))) * 0.00999999978f);
    *(float *)((t1 + 0x278)) = ((float)(unsigned short)(*(short *)((((((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2) + 0xC1F958C) + 0xA))) * 0.00999999978f);
    *(float *)((t1 + 0x27C)) = ((float)(unsigned short)(*(short *)((((((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2) + 0xC1F958C) + 0xA))) * 0.00999999978f);
    *(float *)((t1 + 0x284)) = ((float)(unsigned short)(*(short *)((((((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2) + 0xC1F958C) + 0xA))) * 0.00999999978f);
    *(unsigned int *)(((0x4F0 + t1) + 0x0)) = (unsigned short)(*(short *)((((((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2) + 0xC1F958C) + 0x8)));
    *(unsigned int *)((t1 + 0x47C)) = (*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x4)));
    *(unsigned int *)((t1 + 0x4A8)) = (*(int *)0xC23ED50);
    *(unsigned int *)((t1 + 0x4AC)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((a5 + 0x30)); }
    *(unsigned short *)((t1 + 0x6E)) = (*(short *)((a5 + 0x6E)));
    *(unsigned int *)((t1 + 0xC0)) = (*(int *)((a5 + 0xC0)));
    *(unsigned int *)((t1 + 0xC4)) = (*(int *)((a5 + 0xC4)));
    *(unsigned int *)((t1 + 0x2A0)) = (*(int *)((a5 + 0x2A0)));
    *(float *)((t1 + 0x45C)) = (*(float *)((a5 + 0x45C)));
    *(float *)((t1 + 0x460)) = (*(float *)((a5 + 0x460)));
    *(float *)((t1 + 0x464)) = (*(float *)((a5 + 0x464)));
    *(unsigned int *)((t1 + 0x5C4)) = (*(int *)(((0xC1F958C + (((*(int *)((((t0 * 0x2C) + 0xC1EFAF0) + 0x0))) << 2) << 2)) + 0xC)));
    *(unsigned int *)((t1 + 0x494)) = (*(int *)((a5 + 0xBC)));
    *(unsigned int *)((t1 + 0x4)) = 0xC01FDDC;
    FUN_0c03542e(t1);
    *(unsigned int *)(((0xC246FF0 + (a4 << 2)) + 0x0)) = t1;
    *(unsigned int *)((((a4 << 2) + 0xC246FF0) + 0x0)) = t1;
    FUN_0c01fd30(t1);
    return FUN_0c049c0a(t1);
}
