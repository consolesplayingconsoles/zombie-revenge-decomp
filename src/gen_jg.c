/* Straight-line functions with calls and guards (batch gen_jg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01ce40(int, int, float);
int FUN_0c06e56e(int, int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e15d4(int);
int FUN_0c0e16c0(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e5f1c(void);
int FUN_0c0e6248(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScale(float, float, float);
int FUN_0c06b800(void);
int FUN_0c08ac50(int a4);
int FUN_0c06e6b0(int a4, int a5, int a6, int a7);
int FUN_0c02d32e(int a4, int a5, int a6, int a7, float f4);
int FUN_0c06cc48(void);
struct o14_float { char p[0x14]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o390_float { char p[0x390]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o474_uint { char p[0x474]; unsigned int v; };
struct o4B0_float { char p[0x4B0]; float v; };
struct o4B4_float { char p[0x4B4]; float v; };
struct o4B8_float { char p[0x4B8]; float v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_int { char p[0x64]; int v; };
struct o74_float { char p[0x74]; float v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };


int FUN_0c06b800(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC06B888, 0x474, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(0xC2003B8); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    *(unsigned int *)(((0x28C + t1) + 0x0)) = (unsigned short)(*(short *)0xC2003CA);
    FUN_0c0e6248();
    (((struct oBC_uint *)(t1))->v) = 0xC;
    FUN_0c01ce40(t1, 0xC1B6794, (*(float *)0xC06B940));
    *(unsigned int *)((((((((struct oBC_int *)(t1))->v)) << 2) + 0xC247030) + 0x0)) = 0x4;
    *(unsigned int *)((((((((struct oBC_int *)(t1))->v)) << 2) + 0xC246FF0) + 0x0)) = t1;
    return 0xBC;
}

int FUN_0c08ac50(int a4)
{
    register int t0;
    register float u0;

    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x40));
    u0 = (((struct o50_float *)(a4))->v);
    nlScale(u0, u0, u0);
    FUN_0c0de000(((((struct o50_float *)(a4))->v)));
    FUN_0c0c465c(((((struct o58_int *)(a4))->v)));
    nlPopMatrix(0x1);
    t0 = (((struct o5C_int *)(a4))->v);
    (((struct o5C_uint *)(a4))->v) = (t0 + 0x1);
    if ((int)((t0 + 0x1) - 1) >= (int)((((struct o64_int *)(a4))->v))) {
        (((struct o5C_uint *)(a4))->v) = 0x0;
        (((struct o58_uint *)(a4))->v) = (((((struct o58_int *)(a4))->v)) + 0x1);
        t0 = (((struct o60_int *)(a4))->v);
        (((struct o60_uint *)(a4))->v) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            return FUN_0c0e19f2();
        }
        return 0x60;
    }
    return 0x64;
}

int FUN_0c06e6b0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        FUN_0c0e15d4((*(int *)((a4 + 0x30))));
        *(unsigned int *)0xC247C60 = 0x0;
        FUN_0c0e19f2();
    }
    t0 = FUN_0c0e16c0((*(int *)((a4 + 0x30))));
    t1 = *(int *)((a4 + 0x38));
    *(unsigned int *)((a4 + 0x38)) = (t1 + 0x1);
    t2 = t0;
    if ((int)(t1 + 0x1) > (int)0x78) {
        FUN_0c0da2e0();
        t0 = FUN_0c0e5f1c();
        t1 = t0;
        if ((int)t0 < (int)0x1) {
            *(unsigned int *)((a4 + 0x38)) = 0x0;
            t0 = (((struct o40_int *)(a4))->v);
            (((struct o40_uint *)(a4))->v) = (t0 + 0x18);
            FUN_0c06e56e(((t0 + 0x18) - 24), 0x1);
            t0 = 0x4;
            if ((*(float *)0xC06E78C) > ((((struct o4_float *)(((((struct o40_int *)(a4))->v))))->v))) {
                (((struct o40_uint *)(a4))->v) = (*(int *)((a4 + 0x3C)));
                t0 = 0x40;
            }
            t1 = t0;
        }
        t2 = t1;
    }
    return t2;
}

int FUN_0c02d32e(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];
    register int t8;
    register float u15;

    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        (((struct o474_uint *)(a4))->v) = 0x0;
        return 0x474;
    }
    t8 = (((struct o4C8_int *)(a4))->v);
    if ((t8 == 0) || (t8 == 1)) {
        u15 = (((struct o390_float *)(a4))->v);
        if (!(u15 > ((((struct o34_float *)(a4))->v)))) {
            if (u15 > ((((struct o40_float *)(a4))->v))) {
                FUN_0c0cc3f8(0x431A9, a5, a6, a7);
            }
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
    (((struct o4B0_float *)(a4))->v) = 0.0f;
    (((struct o4B4_float *)(a4))->v) = 0.0f;
    (((struct o4B8_float *)(a4))->v) = 0.0f;
    return 0x4B8;
}

int FUN_0c06cc48(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    t1 = 0xC0FB378;
    for (;;) {
        t2 = FUN_0c0e1830(0xC06CBFC, 0xB4);
        FUN_0c0e19d0(t2);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)(t1); }
        FUN_0c0e6248();
        (((struct o74_float *)(t2))->v) = ((((struct o14_float *)(t1))->v));
        *(unsigned int *)(((0x78 + t2) + 0x0)) = (*(short *)((t1 + 0x12)));
        (((struct o88_uint *)(t2))->v) = t0;
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x18);
        if ((unsigned int)t0 >= (unsigned int)0x10) {
            break;
        }
    }
    return 0x88;
}
