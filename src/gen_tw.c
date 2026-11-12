/* Straight-line functions with calls and guards (batch gen_tw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o12_ushort { char p[0x12]; unsigned short v; };
struct o14_ushort { char p[0x14]; unsigned short v; };
struct o16_ushort { char p[0x16]; unsigned short v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o288_int { char p[0x288]; int v; };
struct o288_uint { char p[0x288]; unsigned int v; };
struct o2A0_int { char p[0x2A0]; int v; };
struct o2BC_int { char p[0x2BC]; int v; };
struct o2C4_int { char p[0x2C4]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o394_uint { char p[0x394]; unsigned int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o454_ushort { char p[0x454]; unsigned short v; };
struct o458_float { char p[0x458]; float v; };
struct o4D4_uint { char p[0x4D4]; unsigned int v; };
struct o4DC_int { char p[0x4DC]; int v; };
struct o4E0_int { char p[0x4E0]; int v; };
struct o4E0_uint { char p[0x4E0]; unsigned int v; };
struct o4E4_int { char p[0x4E4]; int v; };
struct o4E4_uint { char p[0x4E4]; unsigned int v; };
struct o4EC_int { char p[0x4EC]; int v; };
struct o4EC_uint { char p[0x4EC]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o508_uint { char p[0x508]; unsigned int v; };
struct o514_uint { char p[0x514]; unsigned int v; };
struct o51C_float { char p[0x51C]; float v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c034fbc(int, int, int, int);
int FUN_0c035280(int, int, int);
int FUN_0c03f4bc(int);
int FUN_0c041dd0(int);
int FUN_0c041f2a(int);
int FUN_0c049b80(int);
int FUN_0c04e9da(int);
int FUN_0c050d20(int);
int FUN_0c050f1c(int);
int FUN_0c053ac4(int);
int FUN_0c07da2c(int);
extern float _builtin_sqrtf(float);
int FUN_0c041c04(int a4);
int FUN_0c04179c(int a4);
int FUN_0c050df4(int a4);
int FUN_0c050cd0(int a4);
int FUN_0c0418ac(int a4);

int FUN_0c041c04(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o4EC_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct o4E4_int *)(a4))->v);
                (((struct o4E4_uint *)(a4))->v) = (t1 - 1);
                if ((int)(t1 - 1) < 0) {
                    t1 = (((struct o2EC_int *)(a4))->v);
                    if ((t1 & 12) != 0) {
                        t2 = (((struct o4DC_int *)(a4))->v);
                        t3 = (((struct o4E0_int *)(a4))->v);
                        (((struct o4E0_uint *)(a4))->v) = (t3 + 0x1);
                        if ((int)(*(short *)((((((t3 + 0x1) << 2) << 1) + (*(int *)((((((t2 - 76) << 1) + (t2 - 76)) << 2) + 0xC1F518C)))) + 0x0))) < 0) {
                            (((struct o0_uint *)0xC23EDB0)->v) = 0x0;
                            (((struct o4_uint *)0xC23EDB0)->v) = 0x0;
                            (((struct o4D4_uint *)(a4))->v) = 0xB4;
                            return FUN_0c03f4bc(a4);
                        }
                        return FUN_0c041dd0(a4);
                    }
                    return t1;
                }
                return 0x4E4;
            }
            return t0;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((0x518 + a4)); }
        FUN_0c035280(a4, 0x200, 0x1);
        (((struct o508_uint *)(a4))->v) = 0x0;
        FUN_0c034fbc(a4, 0x200, 0x0, 0x0);
        (((struct o0_uint *)0xC23EDB0)->v) = 0x1;
        (((struct o4_uint *)0xC23EDB0)->v) = 0x1;
        *(unsigned int *)0xC247D04 = 0x5;
        (((struct o0_uchar *)0xC247CB8)->v) = (*(signed char *)((a4 + 0xBC)));
        (((struct o6_ushort *)0xC247CB8)->v) = 0x294;
        (((struct o8_float *)0xC247CB8)->v) = 40.0f;
        (((struct o10_ushort *)0xC247CB8)->v) = 0xAAA;
        (((struct o12_ushort *)0xC247CB8)->v) = (((((struct o6E_short *)(a4))->v)) + 0x6000);
        (((struct o4_ushort *)0xC247CB8)->v) = 0x1;
        (((struct oC_float *)0xC247CB8)->v) = 50.0f;
        (((struct o14_ushort *)0xC247CB8)->v) = 0x1555;
        (((struct o16_ushort *)0xC247CB8)->v) = (((((struct o6E_short *)(a4))->v)) - 28672);
        FUN_0c07da2c(0x1E0);
        (((struct o4E0_uint *)(a4))->v) = (((((struct o4E0_int *)(a4))->v)) + 0x1);
        FUN_0c041dd0(a4);
        (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
        return 0x4EC;
    }
    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x2)));
    if (((((struct o2C4_int *)(a4))->v)) != ((((struct o2BC_int *)(a4))->v))) {
        (((struct o2D4_uint *)(a4))->v) = 0x4;
        (((struct o2CC_uint *)(a4))->v) = 0x1;
    }
    (((struct o508_uint *)(a4))->v) = 0x1;
    (((struct o514_uint *)(a4))->v) = 0x1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x518 + a4)) = *(struct mv3 *)((0x24C + a4)); }
    (((struct o51C_float *)(a4))->v) = 22.5f;
    (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
    return 0x4EC;
}

int FUN_0c04179c(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = (((struct o4EC_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c041f2a(a4);
            }
            if (((((struct o38_float *)(a4))->v)) > -160.0f) {
                *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | 0x10);
                (((struct o288_uint *)(a4))->v) = (((((struct o288_int *)(a4))->v)) + 0x1);
            }
            return FUN_0c041f2a(a4);
        }
        u0 = (((struct o3C_float *)(a4))->v);
        u1 = (((struct o30_float *)(a4))->v);
        u2 = (((struct o44_float *)(a4))->v);
        u3 = (((struct o38_float *)(a4))->v);
        u4 = ((u3 - u2) * (u3 - u2));
        u4 = u4 + ((u1 - u0)) * ((u1 - u0));
        (((struct o6E_ushort *)(a4))->v) = (int)((float)((((struct o6E_short *)(a4))->v)) + (((_builtin_sqrtf(u4) / 25.0f) * 10430.3779f)));
        if ((int)(short)(0xFFFF8000 - ((((struct o6E_short *)(a4))->v))) < (int)0x100) {
            (((struct o6E_ushort *)(a4))->v) = 0xFFFF8000;
            (((struct o4E0_uint *)(a4))->v) = (((((struct o4E0_int *)(a4))->v)) + 0x1);
            (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
            return FUN_0c041dd0(a4);
        }
        if ((0xC & ((((struct o2EC_int *)(a4))->v))) != 0) {
            return FUN_0c041dd0(a4);
        }
        return 0x2EC;
    }
    if ((0xC & ((((struct o2EC_int *)(a4))->v))) != 0) {
        FUN_0c041dd0(a4);
    }
    t0 = 0x30;
    if (150.0f > ((((struct o30_float *)(a4))->v))) {
        *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | 0x8);
        (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
        t0 = 0x4EC;
    }
    return t0;
}

int FUN_0c050df4(int a4)
{
    register int t0;

    t0 = (((struct o2EC_int *)(a4))->v);
    if ((t0 & 12) != 0) {
        FUN_0c053ac4(a4);
        (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + (*(short *)(((((((struct o2A0_int *)(a4))->v)) << 1) + 0xC0F85D8))));
        (((struct o394_uint *)(a4))->v) = 0x0;
        (((struct o20C_uint *)(a4))->v) = 0x4000;
        if ((int)(*(int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247594))) > 0) {
            (((struct o3AC_uint *)(a4))->v) = 0x28;
            return FUN_0c04e9da(a4);
        }
        return FUN_0c050f1c(a4);
    }
    return t0;
}

int FUN_0c050cd0(int a4)
{
    register int t0;

    t0 = (((struct o2EC_int *)(a4))->v);
    if ((t0 & 12) != 0) {
        FUN_0c053ac4(a4);
        (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + (*(short *)(((((((struct o2A0_int *)(a4))->v)) << 1) + 0xC0F85D8))));
        if ((int)(*(int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247594))) <= 0) {
            return FUN_0c050d20(a4);
        }
        return FUN_0c049b80(a4);
    }
    return t0;
}

int FUN_0c0418ac(int a4)
{
    (((struct o458_float *)(a4))->v) = (((((struct o458_float *)(a4))->v)) + 0.0299999993f);
    if (!(1.0f > ((((struct o458_float *)(a4))->v)))) {
        (((struct o454_ushort *)(a4))->v) = 0x0;
        (((struct o458_float *)(a4))->v) = 1.0f;
        return FUN_0c03f4bc(a4);
    }
    return FUN_0c041dd0(a4);
}
