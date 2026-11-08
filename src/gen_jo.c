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
int FUN_0c02a19a(int);
int FUN_0c04685c(int, int, float, float, float, float);
int FUN_0c055dfa(int);
int FUN_0c055f24(int);
int FUN_0c084218(void);
int FUN_0c0bb1a8(int, int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0d8c40(int, int, int);
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
struct o210_uint { char p[0x210]; unsigned int v; };
struct o2B4_int { char p[0x2B4]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o334_int { char p[0x334]; int v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4E0_uint { char p[0x4E0]; unsigned int v; };
struct o4E4_uint { char p[0x4E4]; unsigned int v; };
struct o4E8_uint { char p[0x4E8]; unsigned int v; };
struct o4EC_uint { char p[0x4EC]; unsigned int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o4_int { char p[0x4]; int v; };
struct oC_int { char p[0xC]; int v; };



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
    FUN_0c0e16c0(((((struct o0_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct oC_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct o4_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct o10_int *)0xC23ECE0)->v)));
    return (FUN_0c0e16c0(((((struct o14_int *)0xC23ECE0)->v))));
}

int FUN_0c025684(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = (((struct o3AC_int *)(a4))->v);
    (((struct o3AC_uint *)(a4))->v) = (t0 + 0x1);
    if ((int)(t0 + 0x1) > (int)((((struct o3B0_int *)(a4))->v))) {
        FUN_0c02a19a(a4);
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
                    return FUN_0c02a19a(a4);
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
    FUN_0c0d8c40(0x0, 0x0, 0x0);
    *(unsigned int *)((a4 + 0x30)) = 0x0;
    *(unsigned int *)0xC23EABC = 0x0;
    (((struct o50_uint *)(a4))->v) = 0x258;
    (((struct o40_uint *)(a4))->v) = (((((struct o40_int *)(a4))->v)) + 0x1);
    return 0x40;
}

int FUN_0c02474c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = (((struct o3AC_int *)(a4))->v);
    (((struct o3AC_uint *)(a4))->v) = (t0 + 0x1);
    if ((int)(t0 + 0x1) > (int)((((struct o3B0_int *)(a4))->v))) {
        (((struct o4E0_uint *)(a4))->v) = 0x0;
        (((struct o4E4_uint *)(a4))->v) = 0x0;
        (((struct o4E8_uint *)(a4))->v) = 0x0;
        (((struct o4EC_uint *)(a4))->v) = 0x0;
        return FUN_0c02a19a(a4);
    }
    return 0x3B0;
}

int FUN_0c048d90(int a4, float f4, float f5, float f6, float f7)
{
    (((struct o2C4_uint *)(a4))->v) = 0x2D5;
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o4C8_uint *)(a4))->v) = 0x3;
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return FUN_0c04685c(a4, 0xA, 0.0f, (*(float *)0xC048E20), f6, f7);
}

int FUN_0c04c174(int a4)
{
    register int t4;

    t4 = 0x2B4;
    if (((((struct o2B4_int *)(a4))->v)) == ((((struct o334_int *)(a4))->v))) {
        FUN_0c055f24(a4);
        FUN_0c055dfa(a4);
        (((struct o210_uint *)(a4))->v) = 0x39;
        t4 = 0x210;
    }
    return t4;
}

int FUN_0c0cc978(int a4, int a5, int a6, int a7)
{
    return FUN_0c0cc3f8((*(int *)((((((((struct oC0_int *)(a4))->v)) - 11) << 2) + (*(int *)((0xC20AD60 + ((unsigned short)(*(short *)((a5 + 0x4))) << 2))))))), a5, a6, a7);
}

int FUN_0c024638(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x2EC));
    if ((t0 & 12) != 0) {
        *(unsigned int *)((a4 + 0x4C4)) = 0x4;
        *(unsigned int *)((a4 + 0x4C8)) = 0x0;
        *(unsigned int *)((a4 + 0x4CC)) = 0x1;
        return FUN_0c02a19a(a4);
    }
    return t0;
}

int FUN_0c0311e4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = (((struct o3AC_int *)(a4))->v);
    (((struct o3AC_uint *)(a4))->v) = (t0 + 0x1);
    if ((int)(t0 + 0x1) > (int)((((struct o3B0_int *)(a4))->v))) {
        t0 = (((struct o2EC_int *)(a4))->v);
        if ((t0 & 12) != 0) {
            return FUN_0c02a19a(a4);
        }
        return t0;
    }
    return 0x3B0;
}
