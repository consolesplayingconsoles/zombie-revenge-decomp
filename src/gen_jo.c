/* Straight-line functions with calls and guards (batch gen_jo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c018422(int);
int FUN_0c019a5c(void);
int FUN_0c01d9c2(int);
int FUN_0c02286c(int, int, float, float);
int FUN_0c027d08(int);
int FUN_0c02800c(int, int, int, int);
int FUN_0c02829e(int, int, int, int);
int FUN_0c0287ce(int);
int FUN_0c02a19a(int, int, int, int);
int FUN_0c04685c(int, int, float, float, float, float);
int FUN_0c055dfa(int);
int FUN_0c055f24(int);
int FUN_0c084218(void);
int FUN_0c0bb1a8(int, int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0d8c40(int, int, int, float);
int FUN_0c0e16c0(int);
int FUN_0c0e19f2(void);
int FUN_0c018ef8(int a4);
int FUN_0c0937d6(int a4);
int FUN_0c0a955c(void);
int FUN_0c025684(int a4, int a5, int a6, int a7);
int FUN_0c028d9a(int a4, int a5, int a6, int a7);
int FUN_0c0b5a1a(int a4, float f4);
int FUN_0c02474c(int a4, int a5, int a6, int a7);
int FUN_0c048d90(int a4, float f4, float f5, float f6, float f7);
int FUN_0c04c174(int a4);
int FUN_0c0cc978(int a4, int a5, int a6, int a7);
int FUN_0c024638(int a4, int a5, int a6, int a7);
int FUN_0c0311e4(int a4, int a5, int a6, int a7);

int FUN_0c018ef8(int a4)
{
    register int t0;
    int t2;

    t0 = FUN_0c018422(a4);
    if ((((*(int *)0xC23A1A8) & 0x101) == 0) && (t2 = *(int *)0xC23ED5C, (0x200 & t2) != 0)) {
        if ((0x800 & t2) != 0) {
            FUN_0c01d9c2(a4);
            return FUN_0c0e19f2();
        }
        return 0x800;
    }
    return t0;
}

int FUN_0c0937d6(int a4)
{
    register int t1;
    int t4;

    t1 = *(int *)((((*(int *)((a4 + 0x88))) << 2) + 0xC246FF0));
    if (((int)(*(int *)((a4 + 0xA4))) > (int)(*(int *)((t1 + 0x2B4)))) && (t4 = *(int *)((t1 + 0x2EC)), (t4 & 12) == 0)) {
        return t4;
    }
    FUN_0c0bb1a8(t1, 0x0);
    return FUN_0c0e19f2();
}

int FUN_0c0a955c(void)
{
    FUN_0c084218();
    FUN_0c019a5c();
    FUN_0c0e16c0((*(int *)0xC23ECE0));
    FUN_0c0e16c0((*(int *)0xC23ECEC));
    FUN_0c0e16c0((*(int *)0xC23ECE4));
    FUN_0c0e16c0((*(int *)0xC23ECF0));
    return (FUN_0c0e16c0((*(int *)0xC23ECF4)));
}

int FUN_0c025684(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x3AC));
    *(unsigned int *)((a4 + 0x3AC)) = (t0 + 0x1);
    if ((int)(t0 + 0x1) > (int)(*(int *)((a4 + 0x3B0)))) {
        FUN_0c02a19a(a4, a5, a6, a7);
    }
    return FUN_0c02286c(a4, 0x28, 5.0f, 0.049999997f);
}

int FUN_0c028d9a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x544));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return FUN_0c02a19a(a4, a5, a6, a7);
                }
                return FUN_0c0287ce(a4);
            }
            return FUN_0c02829e(a4, a5, a6, a7);
        }
        return FUN_0c02800c(a4, a5, a6, a7);
    }
    return FUN_0c027d08(a4);
}

int FUN_0c0b5a1a(int a4, float f4)
{
    FUN_0c0d8c40(0x0, 0x0, 0x0, f4);
    *(unsigned int *)((a4 + 0x30)) = 0x0;
    *(unsigned int *)0xC23EABC = 0x0;
    *(unsigned int *)((a4 + 0x50)) = 0x258;
    *(unsigned int *)((a4 + 0x40)) = ((*(int *)((a4 + 0x40))) + 0x1);
    return 0x40;
}

int FUN_0c02474c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x3AC));
    *(unsigned int *)((a4 + 0x3AC)) = (t0 + 0x1);
    if ((int)(t0 + 0x1) > (int)(*(int *)((a4 + 0x3B0)))) {
        *(unsigned int *)((a4 + 0x4E0)) = 0x0;
        *(unsigned int *)((a4 + 0x4E4)) = 0x0;
        *(unsigned int *)((a4 + 0x4E8)) = 0x0;
        *(unsigned int *)((a4 + 0x4EC)) = 0x0;
        return FUN_0c02a19a(a4, 0x0, a6, a7);
    }
    return 0x3B0;
}

int FUN_0c048d90(int a4, float f4, float f5, float f6, float f7)
{
    *(unsigned int *)((a4 + 0x2C4)) = 0x2D5;
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x4C8)) = 0x3;
    *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
    return FUN_0c04685c(a4, 0xA, 0.0f, (*(float *)0xC048E20), f6, f7);
}

int FUN_0c04c174(int a4)
{
    register int t4;

    t4 = 0x2B4;
    if ((*(int *)((a4 + 0x2B4))) == (*(int *)((a4 + 0x334)))) {
        FUN_0c055f24(a4);
        FUN_0c055dfa(a4);
        *(unsigned int *)((a4 + 0x210)) = 0x39;
        t4 = 0x210;
    }
    return t4;
}

int FUN_0c0cc978(int a4, int a5, int a6, int a7)
{
    return FUN_0c0cc3f8((*(int *)(((((*(int *)(((0xC0 + a4) + 0x0))) - 11) << 2) + (*(int *)((0xC20AD60 + ((unsigned short)(*(short *)((a5 + 0x4))) << 2))))))), a5, a6, a7);
}

int FUN_0c024638(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x2EC));
    if ((t0 & 12) != 0) {
        *(unsigned int *)((a4 + 0x4C4)) = 0x4;
        *(unsigned int *)((a4 + 0x4C8)) = 0x0;
        *(unsigned int *)((a4 + 0x4CC)) = 0x1;
        return FUN_0c02a19a(a4, a5, a6, a7);
    }
    return t0;
}

int FUN_0c0311e4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x3AC));
    *(unsigned int *)((a4 + 0x3AC)) = (t0 + 0x1);
    if ((int)(t0 + 0x1) > (int)(*(int *)((a4 + 0x3B0)))) {
        t0 = *(int *)((a4 + 0x2EC));
        if ((t0 & 12) != 0) {
            return FUN_0c02a19a(a4, a5, a6, a7);
        }
        return t0;
    }
    return 0x3B0;
}
