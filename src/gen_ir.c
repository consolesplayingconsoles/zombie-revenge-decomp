/* Straight-line functions with calls and guards (batch gen_ir): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c016d2c(void);
int FUN_0c016d40(void);
int FUN_0c016d74(void);
int FUN_0c018142(void);
int FUN_0c018232(void);
int FUN_0c01937a(void);
int FUN_0c019a36(void);
int FUN_0c01a874(void);
int FUN_0c01d562(int, int);
float FUN_0c01f1b8(int, int);
int FUN_0c01f4fe(int, int, float, float, float, float, float, float);
int FUN_0c0236ce(int);
int FUN_0c029646(int, int, int);
int FUN_0c02a19a(int);
int FUN_0c02a220(int);
int FUN_0c02a416(int);
int FUN_0c02a712(int);
int FUN_0c02f39e(int);
int FUN_0c034efc(int, int, int, int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c035ad6(int, int);
int FUN_0c038bd6(int, int);
int FUN_0c03a66c(int);
int FUN_0c041dd0(int);
int FUN_0c041f2a(int);
int FUN_0c04996a(void);
int FUN_0c049c0a(int);
int FUN_0c04faa4(void);
int FUN_0c0534a4(void);
int FUN_0c055936(int);
int FUN_0c058fa0(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c07cdb0(int);
int FUN_0c0845e8(int);
int FUN_0c0845f0(int);
int FUN_0c0845f8(int, int);
int FUN_0c084610(int, int);
int FUN_0c08463a(int, int);
int FUN_0c0846a6(int, float, float, float);
int FUN_0c0846be(int, float);
int FUN_0c0846de(int, float, float, float, float);
int FUN_0c08476e(float, float, float);
int FUN_0c0852bc(int);
int FUN_0c0853d4(int, float);
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c085704(int);
int FUN_0c08c170(int);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a73ec(float, float, float, float, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a8362(void);
int FUN_0c0b145c(int, float, float);
int FUN_0c0b1542(int, float);
int FUN_0c0b264e(void);
int FUN_0c0b26a2(int);
int FUN_0c0b2e48(void);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bb788(int);
int FUN_0c0bdb70(int, int, int);
int FUN_0c0bdd2c(int, int, int);
int FUN_0c0be88a(int, int);
int FUN_0c0bf940(void);
int FUN_0c0bfa90(void);
int FUN_0c0c4364(int, int);
int FUN_0c0c43dc(int, int);
int FUN_0c0c44d6(int, int, int);
int FUN_0c0c45d0(void);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0c99a0(int, int);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc752(int);
int FUN_0c0cc88c(int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db0a0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
float FUN_0c0dcea0(int);
int FUN_0c0de000(float);
int FUN_0c0de310(float, float, float);
int FUN_0c0de9c0(void);
int FUN_0c0e14c4(int);
int FUN_0c0e15d4(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e2400(void);
int _divls(void);
int FUN_0c0e631c(int, int, int);
extern float _builtin_sqrtf(float);
int mwPlyPreInitSofdec(void);
int nlAddVector(int, int);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlUnitMatrix(void);
int thunk_FUN_0c0546fe(int, int, int, int);
int FUN_0c0b16f0(int a4, int a5, int a6, int a7, float f4, float f5);
void FUN_0c02a760(int a4);
int FUN_0c068298(void);
int FUN_0c07ce44(int a4, float f4);
int FUN_0c0a9670(void);
int FUN_0c0bf75c(int a4);
int FUN_0c045bbc(int a4);
int FUN_0c0b26d6(int a4);
int FUN_0c030314(int a4);
int FUN_0c03bc12(int a4);
int FUN_0c01af34(int a4);
int FUN_0c08c25a(int a4);
int FUN_0c0a2c4c(int a4);
int FUN_0c0b1800(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c05aaf8(int a4, int a5);
int FUN_0c07a7bc(int a4, int a5, int a6, int a7);
int FUN_0c029948(int a4);
int FUN_0c051384(void);
int FUN_0c07ccd4(void);
int FUN_0c02cf68(int a4);
int FUN_0c03b30c(int a4, int a5);
int FUN_0c05ae64(int a4, int a5);
int FUN_0c05af74(int a4, int a5);
int FUN_0c05b084(int a4, int a5);
int FUN_0c0828dc(int a4, int a5);
int FUN_0c0a84d8(void);
int FUN_0c0400e4(int a4);
int FUN_0c0949b4(int a4, int a5, int a6, int a7);
struct o14_float { char p[0x14]; float v; };
struct o1C4_int { char p[0x1C4]; int v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_int { char p[0x1E8]; int v; };
struct o1E8_uint { char p[0x1E8]; unsigned int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1F8_int { char p[0x1F8]; int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o1FC_uint { char p[0x1FC]; unsigned int v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o24C_float { char p[0x24C]; float v; };
struct o254_float { char p[0x254]; float v; };
struct o258_float { char p[0x258]; float v; };
struct o25C_float { char p[0x25C]; float v; };
struct o26C_float { char p[0x26C]; float v; };
struct o288_int { char p[0x288]; int v; };
struct o288_uint { char p[0x288]; unsigned int v; };
struct o28C_int { char p[0x28C]; int v; };
struct o2BC_int { char p[0x2BC]; int v; };
struct o2C4_int { char p[0x2C4]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_int { char p[0x2CC]; int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D0_uint { char p[0x2D0]; unsigned int v; };
struct o2D4_int { char p[0x2D4]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o338_float { char p[0x338]; float v; };
struct o33C_float { char p[0x33C]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o340_float { char p[0x340]; float v; };
struct o340_int { char p[0x340]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o3B4_int { char p[0x3B4]; int v; };
struct o3CC_ushort { char p[0x3CC]; unsigned short v; };
struct o3CE_ushort { char p[0x3CE]; unsigned short v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o3F4_int { char p[0x3F4]; int v; };
struct o3F4_uint { char p[0x3F4]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o46_ushort { char p[0x46]; unsigned short v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o4C4_uint { char p[0x4C4]; unsigned int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4E_ushort { char p[0x4E]; unsigned short v; };
struct o4E0_int { char p[0x4E0]; int v; };
struct o4E0_uint { char p[0x4E0]; unsigned int v; };
struct o4E4_int { char p[0x4E4]; int v; };
struct o4E4_uint { char p[0x4E4]; unsigned int v; };
struct o4E8_uint { char p[0x4E8]; unsigned int v; };
struct o4EC_int { char p[0x4EC]; int v; };
struct o4EC_uint { char p[0x4EC]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o4FC_uint { char p[0x4FC]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o50C_int { char p[0x50C]; int v; };
struct o50C_uint { char p[0x50C]; unsigned int v; };
struct o510_int { char p[0x510]; int v; };
struct o524_uint { char p[0x524]; unsigned int v; };
struct o52C_int { char p[0x52C]; int v; };
struct o554_int { char p[0x554]; int v; };
struct o554_uint { char p[0x554]; unsigned int v; };
struct o57C_int { char p[0x57C]; int v; };
struct o57C_uint { char p[0x57C]; unsigned int v; };
struct o584_int { char p[0x584]; int v; };
struct o584_uint { char p[0x584]; unsigned int v; };
struct o5A4_int { char p[0x5A4]; int v; };
struct o5B4_int { char p[0x5B4]; int v; };
struct o60_short { char p[0x60]; short v; };
struct o62_short { char p[0x62]; short v; };
struct o62_ushort { char p[0x62]; unsigned short v; };
struct o64_short { char p[0x64]; short v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o72_short { char p[0x72]; short v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8C_int { char p[0x8C]; int v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_short { char p[0x9C]; short v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct o9C_ushort { char p[0x9C]; unsigned short v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA2_short { char p[0xA2]; short v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_short { char p[0xA8]; short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC8_uint { char p[0xC8]; unsigned int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o60_int { char p[0x60]; int v; };
struct o68_int { char p[0x68]; int v; };





void FUN_0c02a760(int a4)
{
    register int t0;

    (((struct o4FC_uint *)(a4))->v) = 0x0;
    (((struct o50C_uint *)(a4))->v) = 0x0;
    (((struct o524_uint *)(a4))->v) = 0x0;
    t0 = FUN_0c0236ce(a4);
    if (t0 == 0) {
        t0 = (((struct o4F8_int *)(a4))->v);
        if ((t0 != 6) && (t0 != 7)) {
            t0 = (((struct o4F8_int *)(a4))->v);
            if ((t0 != 8) && (t0 != 9)) {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
            } else {
                (((struct o4F8_uint *)(a4))->v) = 0xA;
            }
        } else {
            (((struct o4F8_uint *)(a4))->v) = 0x8;
        }
        return;
    }
    t0 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t0 < (unsigned int)0xE) {
        switch ((t0 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                FUN_0c02a712(a4);
    return;
            }
            case 4:
            {
                return;
            }
            case 6:
            {
                FUN_0c02a712(a4);
    return;
            }
            case 8:
            {
                return;
            }
            case 10:
            {
                FUN_0c02a220(a4);
    return;
            }
            case 12:
            {
                return;
            }
            case 14:
            {
                (((struct o4F8_uint *)(a4))->v) = 0x8;
                return;
            }
            case 16:
            {
                return;
            }
            case 18:
            {
                (((struct o4F8_uint *)(a4))->v) = 0xA;
                return;
            }
            case 20:
            {
                return;
            }
            case 22:
            {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
                return;
            }
            case 24:
            {
                return;
            }
            default:
            {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
                return;
            }
        }
    }
}

int FUN_0c068298(void)
{
    int stk[12];
    register int t8;
    register int t29;
    register int t27;
    register int t28;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0FA2AC); }
    FUN_0c0de9c0();
    FUN_0c0845e8(0x1);
    FUN_0c0845f0(0x1);
    FUN_0c08476e((*(float *)0xC0683D0), (*(float *)0xC0683CC), (*(float *)0xC0683C8));
    t8 = FUN_0c0e19aa(0xC068382, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t8);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t8 + 0x30)) = *(struct mv3 *)(0xC0FA2A0); }
    (((struct o78_uint *)(t8))->v) = 0x1;
    (((struct o90_float *)(t8))->v) = (*(float *)0xC0683E8);
    (((struct o48_float *)(t8))->v) = (*(float *)0xC0683EC);
    (((struct o4C_float *)(t8))->v) = (*(float *)0xC0683F0);
    (((struct o50_float *)(t8))->v) = (*(float *)0xC0683F4);
    FUN_0c084610(0x1, 0x3);
    FUN_0c0846be(0x1, ((((struct o90_float *)(t8))->v)));
    FUN_0c0846de(0x1, 0.0f, (*(float *)0xC068408), (*(float *)0xC068404), (*(float *)0xC068400));
    FUN_0c0845f8(0x1, 0x1);
    FUN_0c08463a(0x1, 0xC0FA2A0);
    t29 = (FUN_0c0846a6(0x1, ((((struct o48_float *)(t8))->v)), ((((struct o4C_float *)(t8))->v)), ((((struct o50_float *)(t8))->v))));
    if ((int)0x2 < (int)0x10) {
        t27 = 0x2;
        for (;;) {
            t28 = FUN_0c0845f8(t27, 0x0);
            t27 = (t27 + 0x1);
            if ((int)t27 >= (int)0x10) {
                break;
            }
        }
        t29 = t28;
    }
    return t29;
}

int FUN_0c07ce44(int a4, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = (((struct oA2_short *)(a4))->v);
    t1 = *(short *)((((((struct oA4_int *)(a4))->v)) + 0x0));
    if ((int)((unsigned short)t1 - t0) > 0) {
        (((struct o94_float *)(a4))->v) = (((((struct o94_float *)(a4))->v)) - 0.0199999996f);
        (((struct o88_float *)(a4))->v) = (((((struct o88_float *)(a4))->v)) + ((((struct o94_float *)(a4))->v)));
        (((struct o9C_ushort *)(a4))->v) = (((((struct o9C_short *)(a4))->v)) + ((((unsigned short)t1 - t0) << 1) + ((unsigned short)t1 - t0)));
    } else {
        t0 = (((struct oA8_short *)(a4))->v);
        t1 = *(short *)((((((struct oA4_int *)(a4))->v)) + 0x0));
        if ((int)((unsigned short)t1 + t0) <= 0) {
            nlScaleUnitVector((0x84 + a4), (a4 + 0x78), ((float)(-((unsigned short)t1 + t0)) * 15.0f));
            (((struct o9C_ushort *)(a4))->v) = (((((((unsigned short)t1 + t0) << 1) + ((unsigned short)t1 + t0)) << 8) << 2) << 1);
        } else {
            (((struct o94_float *)(a4))->v) = 0.0f;
            (((struct o84_float *)(a4))->v) = 0.0f;
            (((struct o88_float *)(a4))->v) = 0.0f;
            (((struct o8C_float *)(a4))->v) = 0.0f;
            (((struct o9C_ushort *)(a4))->v) = 0x0;
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((0x84 + a4));
    nlMultiMatrix((a4 + 0x30));
    nlRotateAX(((((struct o9C_short *)(a4))->v)));
    u0 = (((struct o74_float *)(a4))->v);
    nlScale(u0, u0, u0);
    FUN_0c0de000(((((struct o74_float *)(a4))->v)));
    FUN_0c0c465c((unsigned short)((((struct o72_short *)(a4))->v)));
    return nlPopMatrix(0x1);
}

int FUN_0c0a9670(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c0e1830(0xC0A975A, 0x70);
    FUN_0c0e19d0(t0);
    FUN_0c0e631c((t0 + 0x30), 0xC10D22C, 0x38);
    if ((*(int *)0xC23A1A0) == 0) {
        t1 = *(int *)0xC23ED50;
        if ((t1 != 7) && (t1 != 18)) {
            if (t1 != 31) {
                if (t1 != 42) {
                    if (t1 != 60) {
                        if (t1 != 69) {
                            (((struct o68_uint *)(t0))->v) = 0x206D;
                        } else {
                            (((struct o68_uint *)(t0))->v) = 0x206D;
                        }
                    } else {
                        (((struct o68_uint *)(t0))->v) = 0x206D;
                    }
                } else {
                    (((struct o68_uint *)(t0))->v) = 0x206D;
                }
            } else {
                (((struct o68_uint *)(t0))->v) = 0x206D;
            }
        } else {
            (((struct o68_uint *)(t0))->v) = 0x206D;
        }
        (((struct o6C_uint *)(t0))->v) = 0x206E;
    } else {
        t1 = *(int *)0xC23ED50;
        if (t1 != 7) {
            if ((t1 != 18) && ((t1 != 31) && (t1 != 42))) {
                if (t1 != 60) {
                    if (t1 != 69) {
                        (((struct o68_uint *)(t0))->v) = 0x206B;
                    } else {
                        (((struct o68_uint *)(t0))->v) = 0x206B;
                    }
                } else {
                    (((struct o68_uint *)(t0))->v) = 0x206B;
                }
            } else {
                (((struct o68_uint *)(t0))->v) = 0x206B;
            }
        } else {
            (((struct o68_uint *)(t0))->v) = 0x206B;
        }
        (((struct o6C_uint *)(t0))->v) = 0x206C;
    }
    return FUN_0c0cc752((*(int *)0xC23ED50));
}

int FUN_0c0bf75c(int a4)
{
    int stk[15];
    register int t6;
    register int t41;

    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x8);
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x14);
    t6 = FUN_0c01f4fe((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8), ((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)), (-((((struct o0_float *)0xC247F28)->v))), (-((((struct o4_float *)0xC247F28)->v))), (-((((struct o8_float *)0xC247F28)->v))));
    t41 = t6;
    if (t6 == 1) {
        t41 = 0x4;
        if (!(0.899999976f > ((((struct o4_float *)((((int)stk + 4) + 0x8)))->v)))) {
            nlPushMatrix(0x0);
            nlUnitMatrix();
            FUN_0c0dcc70((*(float *)(((*(int *)(((int)stk + 4))) + 0x0))), (((((struct o4_float *)((((int)stk + 4) + 0x14)))->v)) + 0.349999994f), ((((struct o8_float *)((((int)stk + 4) + 0x14)))->v)));
            FUN_0c0a73ec((-((((struct o0_float *)0xC247F28)->v))), (-((((struct o4_float *)0xC247F28)->v))), (-((((struct o8_float *)0xC247F28)->v))), (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))), ((((struct o4_float *)((((int)stk + 4) + 0x8)))->v)), ((((struct o8_float *)((((int)stk + 4) + 0x8)))->v)));
            nlRotateAY(((((struct o62_short *)(a4))->v)));
            nlRotateAX(((((struct o60_short *)(a4))->v)));
            nlRotateAZ(((((struct o64_short *)(a4))->v)));
            nlMultiMatrixRevOrder(((*(int *)0xC247CAC) + 0x2AC));
            FUN_0c0de000(10.0f);
            FUN_0c0c47ae(((((struct o7C_int *)(a4))->v)));
            t41 = (nlPopMatrix(0x1));
        }
    }
    return t41;
}

int FUN_0c045bbc(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o68_int *)(a4))->v);
    t1 = *(int *)((t0 + 0x8));
    t2 = *(int *)((t0 + 0x4));
    FUN_0c0db0a0((*(int *)(((((*(int *)((a4 + 0x34))) << 2) + (a4 + 0x4C)) + 0x0))), ((((((struct o60_int *)(a4))->v)) + (*(int *)((t1 + 0x0)))) + 0x1));
    nlPrintf(0xC0F5E20);
    t0 = *(int *)0xC249830;
    if ((t0 & 16) != 0) {
        t3 = *(int *)((t1 + 0x0));
        *(unsigned int *)((t1 + 0x0)) = (t3 - 1);
        if ((int)(t3 - 1) < 0) {
            *(unsigned int *)((t1 + 0x0)) = ((*(int *)(((((*(int *)((a4 + 0x34))) << 2) + (a4 + 0x38)) + 0x0))) - 1);
        }
    } else {
        if ((t0 & 32) != 0) {
            t0 = *(int *)((t1 + 0x0));
            *(unsigned int *)((t1 + 0x0)) = (t0 + 0x1);
            if ((int)(t0 + 0x1) >= (int)(*(int *)(((((*(int *)((a4 + 0x34))) << 2) + (a4 + 0x38)) + 0x0)))) {
                *(unsigned int *)((t1 + 0x0)) = 0x0;
            }
        }
    }
    t0 = *(int *)0xC249830;
    if ((t0 & 64) != 0) {
        t3 = *(int *)((a4 + 0x34));
        *(unsigned int *)((a4 + 0x34)) = (t3 - 1);
        if ((int)(t3 - 1) < 0) {
            *(unsigned int *)((a4 + 0x34)) = 0x0;
        }
        return t0;
    }
    if ((t0 & 128) != 0) {
        t3 = *(int *)((t1 + 0x0));
        if ((*(int *)((((((t3 << 1) + t3) << 2) + t2) + 0x4))) != 0) {
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
            return t0;
        }
        t3 = *(int *)((t1 + 0x0));
        if ((*(int *)((((((t3 << 1) + t3) << 2) + t2) + 0x8))) != 0) {
            t3 = *(int *)((t1 + 0x0));
            t1 = *(int *)(((t2 + (((t3 << 1) + t3) << 2)) + 0x8));
            return ((int (*)(int))(t1))(a4);
        }
        return t0;
    }
    return t0;
}

int FUN_0c0b26d6(int a4)
{
    register int t0;

    t0 = (((struct o288_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            t0 = (((struct o3AC_int *)(a4))->v);
            (((struct o3AC_uint *)(a4))->v) = (t0 - 1);
            if ((int)(t0 - 1) <= 0) {
                (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + 0x8000);
                (((struct o3AC_uint *)(a4))->v) = 0x3E8;
            }
        }
    } else {
        (((struct o3AC_uint *)(a4))->v) = 0x3E8;
        (((struct o288_uint *)(a4))->v) = (((((struct o288_int *)(a4))->v)) + 0x1);
        t0 = (((struct o3AC_int *)(a4))->v);
        (((struct o3AC_uint *)(a4))->v) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + 0x8000);
            (((struct o3AC_uint *)(a4))->v) = 0x3E8;
        }
    }
    FUN_0c085704(a4);
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    FUN_0c0bb788(a4);
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    t0 = *(int *)0xC23ED5C;
    if ((t0 & 4) != 0) {
        return FUN_0c0b26a2(a4);
    }
    return t0;
}

int FUN_0c030314(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
    t3 = FUN_0c035ad6(a4, ((((struct o510_int *)(a4))->v)));
    if ((int)t3 < 0) {
        t3 = ((int (*)(int))(FUN_0c02a19a))(a4);
    }
    t3 = FUN_0c02f39e(a4);
    if (t3 != 0) {
        if ((t3 == 2) && (t0 = (((struct o28C_int *)(a4))->v), t1 = *(int *)(((t0 << 2) + 0xC246FF0)), t2 = (((struct o554_int *)(t1))->v), t2 == 2)) {
            t0 = ((int (*)(int))(FUN_0c02a19a))(a4);
        }
    } else {
        t0 = ((int (*)(int))(FUN_0c02a19a))(a4);
    }
    t0 = (((struct oBC_int *)(a4))->v);
    t1 = FUN_0c0853d4(((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268), 1.0f);
    if (t1 == 0) {
        t0 = ((int (*)(int))(FUN_0c02a19a))(a4);
    }
    if (((((struct o340_int *)(a4))->v)) == 1) {
        if (((((struct o2BC_int *)(a4))->v)) != 0x537) {
            if ((0xC & ((((struct o2EC_int *)(a4))->v))) != 0) {
                (((struct o2C4_uint *)(a4))->v) = 0x537;
                (((struct o2CC_uint *)(a4))->v) = 0x1;
            }
            (((struct o4E4_uint *)(a4))->v) = (((((struct o4E4_int *)(a4))->v)) + 0x1);
            t0 = 0x4E4;
        } else {
            t1 = (((struct o4E4_int *)(a4))->v);
            (((struct o4E4_uint *)(a4))->v) = (t1 + 0x1);
            t2 = 0x3B4;
            if ((int)(t1 + 0x1) > (int)((((struct o3B4_int *)(a4))->v))) {
                (((struct o4E4_uint *)(a4))->v) = 0x0;
                (((struct o4E8_uint *)(a4))->v) = 0x1;
                t2 = (((int (*)(int, int, int))(FUN_0c02a19a))(a4, 0x1, 0x537));
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        if (((((struct o340_int *)(a4))->v)) == 2) {
            if (((((struct o2BC_int *)(a4))->v)) != 0x539) {
                if ((0xC & ((((struct o2EC_int *)(a4))->v))) != 0) {
                    (((struct o2C4_uint *)(a4))->v) = 0x539;
                    (((struct o2CC_uint *)(a4))->v) = 0x1;
                }
                (((struct o4E4_uint *)(a4))->v) = (((((struct o4E4_int *)(a4))->v)) + 0x1);
                t0 = 0x4E4;
            } else {
                t2 = (((struct o4E4_int *)(a4))->v);
                (((struct o4E4_uint *)(a4))->v) = (t2 + 0x1);
                t3 = 0x3B4;
                if ((int)(t2 + 0x1) > (int)((((struct o3B4_int *)(a4))->v))) {
                    (((struct o4E4_uint *)(a4))->v) = 0x0;
                    (((struct o4E8_uint *)(a4))->v) = 0x1;
                    t3 = (((int (*)(int, int, int))(FUN_0c02a19a))(a4, 0x1, 0x539));
                }
                t0 = t3;
            }
            t2 = t0;
        } else {
            t0 = (((struct o4E4_int *)(a4))->v);
            (((struct o4E4_uint *)(a4))->v) = (t0 + 0x1);
            t3 = 0x3B4;
            if ((int)(t0 + 0x1) > (int)((((struct o3B4_int *)(a4))->v))) {
                (((struct o4E4_uint *)(a4))->v) = 0x0;
                (((struct o4E8_uint *)(a4))->v) = 0x1;
                t3 = (((int (*)(int, int))(FUN_0c02a19a))(a4, 0x1));
            }
            t2 = t3;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c03bc12(int a4)
{
    register int t0;
    register int t1;

    if ((int)((((struct o3AC_int *)(a4))->v)) > 0) {
        (((struct o3AC_uint *)(a4))->v) = (((((struct o3AC_int *)(a4))->v)) - 1);
    } else {
        if ((int)((((struct o3B0_int *)(a4))->v)) > 0) {
            if ((int)((((struct o1C4_int *)(a4))->v)) < (int)0x10) {
                if ((*(int *)((0xC247030 + (((((struct o1C4_int *)(a4))->v)) << 2)))) == 4) {
                    FUN_0c034efc(a4, ((((struct o1C4_int *)(a4))->v)), 0x200, 0x0);
                } else {
                    if (((((struct o50C_int *)(a4))->v)) != 0) {
                        if ((*(int *)((0xC247030 + (((((struct o510_int *)(a4))->v)) << 2)))) != 4) {
                        } else {
                            FUN_0c034efc(a4, ((((struct o510_int *)(a4))->v)), 0x200, 0x0);
                        }
                    }
                }
            } else {
                if ((((((struct o50C_int *)(a4))->v)) != 0) && (t0 = (((struct o510_int *)(a4))->v), t1 = *(int *)((0xC247030 + (t0 << 2))), t1 == 4)) {
                    FUN_0c034efc(a4, ((((struct o510_int *)(a4))->v)), 0x200, 0x0);
                }
            }
            (((struct o3B0_uint *)(a4))->v) = (((((struct o3B0_int *)(a4))->v)) - 1);
        }
    }
    t0 = (((struct o2EC_int *)(a4))->v);
    if ((t0 & 12) != 0) {
        return FUN_0c03a66c(a4);
    }
    return t0;
}


int FUN_0c08c25a(int a4)
{
    register int t0;
    register float u0;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    if ((*(short *)((a4 + 0x98))) != 0) {
        *(unsigned short *)((a4 + 0x98)) = ((*(short *)((a4 + 0x98))) - 1);
        return 0x98;
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x70));
    nlRotateAY(((*(short *)((t0 + 0x3CE))) + (*(short *)((a4 + 0x8A)))));
    nlRotateAX(((*(short *)((t0 + 0x3CC))) + (*(short *)((a4 + 0x88)))));
    nlRotateAZ((*(short *)((a4 + 0x8C))));
    u0 = *(float *)((a4 + 0x90));
    nlScale(u0, u0, u0);
    FUN_0c0de000((*(float *)((a4 + 0x90))));
    t0 = ((int (*)(int))((*(int *)((((*(short *)((a4 + 0xA2))) << 2) + 0xC10A9B4)))))((*(short *)((a4 + 0x9A))));
    nlPopMatrix(0x1);
    return FUN_0c08c170(a4);
}

int FUN_0c0a2c4c(int a4)
{
    int stk[12];
    register int t1;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t18;
    register float t21;
    register int t23;
    register int t26;
    register int t27;
    register int t28;
    register int t29;
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1008 = a4;
    t1 = FUN_0c0e19aa(0xC0A2D84, 0x2B0, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x4)) = 0xC0A2BCE;
    *(unsigned int *)((t1 + 0x30)) = (R1008);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x150 + t1)) = *(struct mv3 *)(0xC10D01C); }
    nlPushMatrix(0x0);
    R1012 = 0x6;
    nlUnitMatrix();
    FUN_0c0dcca0(0xC10CFBC);
    FUN_0c0bdd2c(0xC10CFA2, (*(short *)0xC10CF94), (0xB0 + t1));
    R1004 = (0x34 + t1);
    *(float *)(((0x34 + t1) + 0x0)) = ((*(float *)(((0x34 + t1) + 0x0))) + (FUN_0c0dcea0(0xC10CFBC)));
    t11 = ((0xB0 + t1) + 0x10);
    t12 = 0xC10CF94;
    t13 = 0xC10CFBC;
    for (;;) {
        t14 = *(short *)((t12 + 0x0));
        t12 = (t12 + 0x2);
        R1008 = t14;
        nlUnitMatrix();
        t13 = (t13 + 0xC);
        FUN_0c0dcca0(t13);
        t18 = t11;
        t11 = (t11 + 0x10);
        FUN_0c0bdb70((R1008), (*(short *)((t12 + 0x0))), t18);
        R1004 = (0x34 + t1);
        t21 = FUN_0c0dcea0(t13);
        *(float *)(((0x34 + t1) + 0x0)) = ((*(float *)(((0x34 + t1) + 0x0))) + t21);
        t23 = R1012;
        R1012 = (t23 - 1);
        if ((t23 - 1) == 0) {
            break;
        }
    }
    *(float *)((t1 + 0x34)) = ((*(float *)((t1 + 0x34))) - t21);
    nlPopMatrix(0x1);
    t26 = 0x9;
    t27 = 0xC10CFA8;
    for (;;) {
        t28 = *(short *)((t27 + 0x0));
        t27 = (t27 + 0x2);
        t29 = FUN_0c0be88a(t28, 0xC10D028);
        t26 = (t26 - 0x1);
        if (t26 == 0) {
            break;
        }
    }
    return t29;
}


int FUN_0c05aaf8(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0e19aa(0xC05AC0C, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t0);
    (((struct oBC_uint *)(t0))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct o200_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    t1 = 0x0;
    if ((*(signed char *)((a5 + 0x4))) != 0) {
        t1 = ((((struct o1EC_int *)(a4))->v));
    }
    (((struct o1EC_uint *)(t0))->v) = t1;
    (((struct o1E8_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    (((struct o1F4_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    (((struct o204_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    (((struct o1E4_float *)(t0))->v) = ((((struct oC_float *)(a5))->v));
    (((struct o1FC_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    (((struct o1F8_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    (((struct o22C_uint *)(t0))->v) = ((unsigned short)(*(short *)((a5 + 0x8))) << 1);
    (((struct o23C_uint *)(t0))->v) = 0x0;
    t1 = (((struct oBC_int *)(a4))->v);
    t2 = (((struct o1E8_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F268) + (((t2 << 1) + t2) << 2))); }
    t0 = (((struct oBC_int *)(a4))->v);
    t1 = t0;
    if ((int)t0 < (int)0x2) {
        t0 = (((struct oBC_int *)(a4))->v);
        *(unsigned int *)(((((t0 << 2) << 2) << 1) + 0xC24754C)) = ((*(int *)(((((t0 << 2) << 2) << 1) + 0xC24754C))) + 0x1);
        t1 = 0xC24754C;
    }
    return t1;
}

int FUN_0c07a7bc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    FUN_0c0685a4(a4, a5, a6, a7);
    t0 = (((struct o8C_int *)(a4))->v);
    if (((((struct o80_int *)(a4))->v)) == 0) {
        if (((((struct o1F8_int *)(t0))->v)) != 0) {
            (((struct oA0_uint *)(a4))->v) = (((FUN_0c0da2e0()) & 0x1F) + 0x28);
            (((struct oA4_uint *)(a4))->v) = 0x1000;
            (((struct o80_uint *)(a4))->v) = 0x1;
        }
    } else {
        if (((((struct o1F8_int *)(t0))->v)) != 0) {
            (((struct oA0_uint *)(a4))->v) = (((FUN_0c0da2e0()) & 0x1F) + 0x28);
            (((struct oA4_uint *)(a4))->v) = 0x1000;
        }
        t1 = (((struct o9C_int *)(a4))->v);
        t2 = (((struct oA4_int *)(a4))->v);
        (((struct o9C_uint *)(a4))->v) = (t1 + t2);
        u0 = (float)((((struct o60_short *)(a4))->v));
        u0 = u0 + (*(float *)0xC07A90C) * (FUN_0c0da410((t1 + t2)));
        (((struct o62_ushort *)(a4))->v) = (int)u0;
        (((struct oA4_uint *)(a4))->v) = (((((struct oA4_int *)(a4))->v)) - 50);
        t1 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t1 - 1);
        if ((int)(t1 - 1) <= 0) {
            (((struct o80_uint *)(a4))->v) = 0x0;
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dbda0((0x24C + t0));
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAY(((((struct o62_short *)(a4))->v)));
    FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
    return nlPopMatrix(0x1);
}

int FUN_0c029948(int a4)
{
    int stk[11];
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register int t20;
    register int t38;
    register int t39;
    register int t41;
    float s1;

    FUN_0c029646(a4, 0x0, 0x40);
    FUN_0c0a68ec(((int)stk + 4), (((((struct o24C_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v))), (((((struct o254_float *)(a4))->v)) - ((((struct o38_float *)(a4))->v))));
    u6 = (((struct o30_float *)(a4))->v);
    u7 = (((struct o24C_float *)(a4))->v);
    u8 = (((struct o38_float *)(a4))->v);
    u9 = (((struct o254_float *)(a4))->v);
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0xC);
    u11 = ((u9 - u8) * (u9 - u8));
    u11 = u11 + (u7 - u6) * (u7 - u6);
    s1 = _builtin_sqrtf(u11);
    FUN_0c0a6800((*(int *)(((int)stk + 4))), (((int)stk + 4) + 0xC), 0.0f, 0.0f, (s1 * 0.5f));
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x14);
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o14_float *)(((int)stk + 4)))->v)));
    thunk_FUN_0c0546fe(a4, ((((struct o52C_int *)(a4))->v)), 0x20, 0x1);
    t20 = (((struct o3AC_int *)(a4))->v);
    (((struct o3AC_uint *)(a4))->v) = (t20 + 0x1);
    t38 = 0;
    if ((int)(t20 + 0x1) > (int)((((struct o3B0_int *)(a4))->v))) {
        if (1.0f > s1) {
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + (*(float *)(((*(int *)(((int)stk + 12))) + 0x0))));
        }
        FUN_0c02a19a(a4);
        t38 = ((1.0f > s1));
    } else {
        t38 = (0);
    }
    t39 = FUN_0c02a416(a4);
    t41 = t39;
    if (t39 != 0) {
        t41 = (FUN_0c02a19a(a4));
    }
    return t41;
}

int FUN_0c051384(void)
{
    int stk[3];
    register int t1;

    t1 = FUN_0c0e19aa(0xC0514C0, 0x474, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(float *)((t1 + 0x274)) = 1.0f;
    *(float *)((t1 + 0x278)) = 1.0f;
    *(float *)((t1 + 0x27C)) = 1.0f;
    *(float *)((t1 + 0x284)) = 1.0f;
    *(float *)(((0x468 + t1) + 0x8)) = 1.0f;
    *(float *)(((0x468 + t1) + 0x4)) = 1.0f;
    *(float *)(((0x468 + t1) + 0x0)) = 1.0f;
    *(float *)(((0x45C + t1) + 0x8)) = 1.0f;
    *(float *)(((0x45C + t1) + 0x4)) = 1.0f;
    *(float *)(((0x45C + t1) + 0x0)) = 1.0f;
    *(unsigned int *)((t1 + 0xBC)) = 0x2;
    *(unsigned int *)((t1 + 0xC8)) = 0x2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(0xC0F8668); }
    *(unsigned short *)((t1 + 0x6E)) = (*(short *)0xC0F8674);
    *(unsigned int *)((t1 + 0xC0)) = 0x9;
    *(unsigned int *)((t1 + 0xA4)) = 0xA7D;
    *(unsigned int *)((t1 + 0x20C)) = 0x1;
    *(unsigned int *)((t1 + 0x1EC)) = 0xF;
    *(unsigned int *)((t1 + 0x1B0)) = 0xFFFFFFCF;
    *(unsigned int *)(((((*(int *)((t1 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x4;
    *(unsigned int *)(((((*(int *)((t1 + 0xBC))) << 2) + 0xC246FF0) + 0x0)) = t1;
    FUN_0c0855ba(t1);
    FUN_0c0ba6e8(t1);
    FUN_0c0ba776(t1);
    FUN_0c085638(t1);
    FUN_0c01d562(t1, 0xC1FE840);
    FUN_0c049c0a(t1);
    *(unsigned int *)((t1 + 0x2C4)) = 0xF2;
    *(unsigned int *)((t1 + 0x2CC)) = 0x1;
    *(unsigned int *)((t1 + 0x288)) = 0x0;
    return 0x288;
}

int FUN_0c07ccd4(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x0;
    t1 = 0xC100EFC;
    for (;;) {
        t2 = FUN_0c0e19aa(0xC07CA74, 0x50, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t2);
        *(unsigned int *)((t2 + 0x30)) = t0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x38)) = *(struct mv3 *)(t1); }
        (((struct o46_ushort *)(t2))->v) = (*(short *)((t1 + 0xC)));
        if ((int)(*(short *)((t1 + 0xE))) > 0) {
            (((struct o4C_ushort *)(t2))->v) = 0x1;
            t3 = (*(short *)((t1 + 0xE)));
        } else {
            (((struct o4C_ushort *)(t2))->v) = 0x0;
            t3 = (-(*(short *)((t1 + 0xE))));
        }
        (((struct o4E_ushort *)(t2))->v) = t3;
        t0 = (t0 + 0x1);
        *(unsigned int *)((t2 + 0x34)) = (FUN_0c0e14c4(0x0));
        t1 = (t1 + 0x10);
        if ((unsigned int)t0 >= (unsigned int)0x3) {
            break;
        }
    }
    t0 = FUN_0c0e19aa(0xC07CC3A, 0x38, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t0);
    *(unsigned int *)0xC247CA0 = t0;
    t0 = 0xC100DDC;
    t1 = 0x0;
    for (;;) {
        FUN_0c07cdb0((*(int *)((t0 + 0x14))));
        t1 = (t1 + 0x1);
        t0 = (t0 + 0x18);
        if ((unsigned int)t1 >= (unsigned int)0xC) {
            break;
        }
    }
    FUN_0c0cbafc(0x2BE, 0x2, 0xC00000, 0x800000);
    FUN_0c0cbafc(0x2BE, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x2C0, 0x2, 0xC00000, 0x800000);
    FUN_0c0cbafc(0x2C0, 0x2, 0xFC000000, 0x84000000);
    return FUN_0c0c99a0(0xF38, 0x2C0);
}

int FUN_0c02cf68(int a4)
{
    int stk[10];
    register int t0;
    register int t28;

    t0 = (((struct oBC_int *)(a4))->v);
    nlPushMatrix(0x0);
    FUN_0c0dbda0((((((struct o3E4_int *)(a4))->v)) + 0x40));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = 1.19999993f;
    *(float *)(((int)stk + 24)) = -2.0999999f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    (((struct oB4_float *)(((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268)))->v) = (*(float *)(((int)stk + 4)));
    (((struct o4_float *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + 0xB4)))->v) = (*(float *)(((int)stk + 8)));
    (((struct o8_float *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + 0xB4)))->v) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    (((struct oC8_uint *)(a4))->v) = (((((struct oC8_int *)(a4))->v)) | 0x400);
    (((struct o1EC_uint *)(a4))->v) = (((((struct o1EC_int *)(a4))->v)) & 0xFFFFF00F);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((0x24C + a4)); }
    if (((((struct o2CC_int *)(a4))->v)) == 1) {
        *(unsigned int *)(((0x2C4 + a4) + 0x4)) = ((((struct o2C4_int *)(a4))->v));
        *(unsigned int *)(((0x2D4 + a4) + 0x4)) = ((((struct o2D4_int *)(a4))->v));
        (((struct o2D0_uint *)(a4))->v) = 0x3;
    }
    t28 = 0x304;
    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        t28 = (((struct o2EC_int *)(a4))->v);
        if ((t28 & 12) != 0) {
            *(unsigned int *)0xC23EDB0 = 0x0;
            *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x10000);
        }
    }
    return t28;
}

int FUN_0c03b30c(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    if ((int)((((struct o57C_int *)(a4))->v)) > 0) {
        (((struct o57C_uint *)(a4))->v) = 0x0;
    }
    if ((((((struct o554_int *)(a4))->v)) == 2) && ((t0 = (((struct o4F8_int *)(a4))->v), t0 == 4) || (t1 = (((struct o4F8_int *)(a4))->v), t1 == 5))) {
        (((struct o554_uint *)(a4))->v) = 0x1;
        (((struct o4F8_uint *)(a4))->v) = 0x0;
    }
    FUN_0c038bd6(a4, a5);
    if (((((struct o584_int *)(a4))->v)) == 1) {
        (((struct o584_uint *)(a4))->v) = 0x0;
    }
    t0 = (((struct o4F0_int *)(a4))->v);
    t1 = (((struct o584_int *)(a4))->v);
    t2 = (((struct o5A4_int *)(a4))->v);
    *(unsigned int *)((((((((struct o5B4_int *)(a4))->v)) << 2) + (0x2C4 + a4)) + 0x0)) = (unsigned short)(*(short *)(((((((struct o57C_int *)(a4))->v)) << 1) + ((((*(int *)((0xC1F8E4C + (((t0 << 2) + t0) << 2)))) + 0x84) + ((((t1 << 1) + t1) << 2) << 2)) + (((t2 << 1) + t2) << 2)))));
    *(unsigned int *)((((((((struct o5B4_int *)(a4))->v)) << 2) + (0x2D4 + a4)) + 0x0)) = 0x2;
    *(unsigned int *)((((((((struct o5B4_int *)(a4))->v)) << 2) + (0x2CC + a4)) + 0x0)) = 0x1;
    (((struct o20C_uint *)(a4))->v) = 0x200;
    (((struct o210_uint *)(a4))->v) = 0x7;
    (((struct o4C4_uint *)(a4))->v) = 0x1;
    (((struct o4C8_uint *)(a4))->v) = 0x4;
    return 0x4C8;
}

int FUN_0c05ae64(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0e19aa(0xC05B194, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t0);
    (((struct oBC_uint *)(t0))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct o200_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    (((struct o1EC_uint *)(t0))->v) = (~((int)0x1 << (int)((((struct oCC_int *)(a4))->v))));
    (((struct o1E8_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    (((struct o1F4_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    (((struct o204_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    (((struct o1E4_float *)(t0))->v) = ((((struct oC_float *)(a5))->v));
    (((struct o1FC_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    (((struct o1F8_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    (((struct o22C_uint *)(t0))->v) = ((unsigned short)(*(short *)((a5 + 0x8))) << 1);
    (((struct o23C_uint *)(t0))->v) = 0x1;
    t1 = (((struct oBC_int *)(a4))->v);
    t2 = (((struct o1E8_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F268) + (((t2 << 1) + t2) << 2))); }
    t0 = (((struct oBC_int *)(a4))->v);
    t1 = t0;
    if ((int)t0 < (int)0x2) {
        t0 = (((struct oBC_int *)(a4))->v);
        *(unsigned int *)(((((t0 << 2) << 2) << 1) + 0xC24754C)) = ((*(int *)(((((t0 << 2) << 2) << 1) + 0xC24754C))) + 0x1);
        t1 = 0xC24754C;
    }
    return t1;
}

int FUN_0c05af74(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0e19aa(0xC05B194, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t0);
    (((struct oBC_uint *)(t0))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct o200_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    (((struct o1EC_uint *)(t0))->v) = (~((int)0x1 << (int)((((struct oCC_int *)(a4))->v))));
    (((struct o1E8_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    (((struct o1F4_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    (((struct o204_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    (((struct o1E4_float *)(t0))->v) = ((((struct oC_float *)(a5))->v));
    (((struct o1FC_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    (((struct o1F8_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    (((struct o22C_uint *)(t0))->v) = ((unsigned short)(*(short *)((a5 + 0x8))) << 1);
    (((struct o23C_uint *)(t0))->v) = 0x0;
    t1 = (((struct oBC_int *)(a4))->v);
    t2 = (((struct o1E8_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F268) + (((t2 << 1) + t2) << 2))); }
    t0 = (((struct oBC_int *)(a4))->v);
    t1 = t0;
    if ((int)t0 < (int)0x2) {
        t0 = (((struct oBC_int *)(a4))->v);
        *(unsigned int *)(((((t0 << 2) << 2) << 1) + 0xC24754C)) = ((*(int *)(((((t0 << 2) << 2) << 1) + 0xC24754C))) + 0x1);
        t1 = 0xC24754C;
    }
    return t1;
}

int FUN_0c05b084(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0e19aa(0xC05B194, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t0);
    (((struct oBC_uint *)(t0))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct o200_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    (((struct o1EC_uint *)(t0))->v) = (~((int)0x1 << (int)((((struct oD0_int *)(a4))->v))));
    (((struct o1E8_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    (((struct o1F4_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    (((struct o204_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    (((struct o1E4_float *)(t0))->v) = ((((struct oC_float *)(a5))->v));
    (((struct o1FC_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    (((struct o1F8_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    (((struct o22C_uint *)(t0))->v) = ((unsigned short)(*(short *)((a5 + 0x8))) << 1);
    (((struct o23C_uint *)(t0))->v) = 0x1;
    t1 = (((struct oBC_int *)(a4))->v);
    t2 = (((struct o1E8_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F268) + (((t2 << 1) + t2) << 2))); }
    t0 = (((struct oBC_int *)(a4))->v);
    t1 = t0;
    if ((int)t0 < (int)0x2) {
        t0 = (((struct oBC_int *)(a4))->v);
        *(unsigned int *)(((((t0 << 2) << 2) << 1) + 0xC24754C)) = ((*(int *)(((((t0 << 2) << 2) << 1) + 0xC24754C))) + 0x1);
        t1 = 0xC24754C;
    }
    return t1;
}

int FUN_0c0828dc(int a4, int a5)
{
    int stk[5];
    register int t1;
    register int t30;
    register int t6;
    register float u11;
    register float u13;
    register float u14;
    register float u16;
    register float u17;
    register float u19;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    t30 = 0x44;
    if ((*(int *)0xC247034) != 0) {
        t6 = *(int *)0xC246FF4;
        if (((((struct o3F4_int *)(t1))->v)) == 1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x254 + t1)) = *(struct mv3 *)(a4); }
            (((struct o3F4_uint *)(t1))->v) = 0x0;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x338 + t1)) = *(struct mv3 *)((t6 + 0x30)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x404 + t1)) = *(struct mv3 *)(a5); }
        }
        u11 = (((struct o338_float *)(t1))->v);
        u13 = u11;
        u13 = u13 + 0.199999988f * (((((struct o30_float *)(t6))->v)) - u11);
        (((struct o338_float *)(t1))->v) = u13;
        u14 = (((struct o33C_float *)(t1))->v);
        u16 = u14;
        u16 = u16 + 0.199999988f * ((((((struct o34_float *)(t6))->v)) - u14) + 15.0f);
        (((struct o33C_float *)(t1))->v) = u16;
        u17 = (((struct o340_float *)(t1))->v);
        u19 = u17;
        u19 = u19 + 0.199999988f * (((((struct o38_float *)(t6))->v)) - u17);
        (((struct o340_float *)(t1))->v) = u19;
        FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (((((struct o254_float *)(t1))->v)) - ((((struct o338_float *)(t1))->v))), (((((struct o258_float *)(t1))->v)) - ((((struct o33C_float *)(t1))->v))), (((((struct o25C_float *)(t1))->v)) - ((((struct o340_float *)(t1))->v))));
        (((struct o3CC_ushort *)(t1))->v) = (*(int *)(((int)stk + 4)));
        (((struct o3CE_ushort *)(t1))->v) = (*(int *)(((int)stk + 8)));
        t30 = (nlAddVector((0x254 + t1), (0x404 + t1)));
    }
    return t30;
}

int FUN_0c0a84d8(void)
{
    int stk[4];

    if (((*(short *)((((((struct o1C_int *)0xC23ECE0)->v)) + 0x6))) & 8) != 0) {
        FUN_0c0bfa90();
    }
    if (((*(short *)((((((struct o1C_int *)0xC23ECE0)->v)) + 0x4))) & 0x100) != 0) {
        FUN_0c0e2400();
        FUN_0c0c45d0();
    } else {
        FUN_0c0e15d4(((((struct o0_int *)0xC23ECE0)->v)));
        FUN_0c0e15d4(((((struct oC_int *)0xC23ECE0)->v)));
        FUN_0c0e15d4(((((struct o4_int *)0xC23ECE0)->v)));
        FUN_0c0e15d4(((((struct o10_int *)0xC23ECE0)->v)));
        FUN_0c0e15d4(((((struct o14_int *)0xC23ECE0)->v)));
        FUN_0c0c43dc((*(int *)0xC23ED58), 0x0);
        if (((((struct o20_int *)0xC23EDC0)->v)) == 5) {
            FUN_0c0c44d6((*(int *)0xC23ED58), ((((struct o0_int *)0xC23EDC0)->v)), ((((struct o10_int *)0xC23EDC0)->v)));
        }
        if (((((struct o24_int *)0xC23EDC0)->v)) == 5) {
            FUN_0c0c44d6((*(int *)0xC23ED58), ((((struct o4_int *)0xC23EDC0)->v)), ((((struct o14_int *)0xC23EDC0)->v)));
        }
    }
    if (((*(short *)((((((struct o1C_int *)0xC23ECE0)->v)) + 0x6))) & 8) != 0) {
        FUN_0c0bf940();
    }
    return FUN_0c0a8362();
}

int FUN_0c0400e4(int a4)
{
    int stk[9];
    register int t0;
    register float t14;
    register int t32;

    t0 = (((struct o4EC_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            t32 = t0;
            if (t0 != 2) {
            } else {
                t32 = (FUN_0c041f2a(a4));
            }
        } else {
            (((struct o26C_float *)(a4))->v) = (((((struct o26C_float *)(a4))->v)) - 0.0749999955f);
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + (((((struct o26C_float *)(a4))->v)) + 0.5f));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + (-((FUN_0c0d9e90(((((struct o6E_short *)(a4))->v)))) * 0.166666657f)));
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + (-((FUN_0c0da410(((((struct o6E_short *)(a4))->v)))) * 0.166666657f)));
            t14 = FUN_0c01f1b8((a4 + 0x30), ((int)stk + 4));
            t32 = 0x34;
            if (t14 > ((((struct o34_float *)(a4))->v))) {
                (((struct o4E0_uint *)(a4))->v) = (((((struct o4E0_int *)(a4))->v)) + 0x1);
                (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
                (((struct o34_float *)(a4))->v) = t14;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                t32 = (FUN_0c041dd0(a4));
            }
        }
    } else {
        FUN_0c041f2a(a4);
        (((struct o26C_float *)(a4))->v) = 0.0f;
        (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
        t32 = 0x4EC;
    }
    return t32;
}

int FUN_0c0949b4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)((a4 + 0x38));
    *(unsigned int *)((a4 + 0x38)) = (t0 + 0x1);
    if (((t0 + 0x1) & 1) == 0) {
        if ((int)(*(int *)((a4 + 0x34))) < (int)0x6) {
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
        } else {
            FUN_0c0e19f2();
        }
    }
    nlPushMatrix(0x0);
    t0 = *(int *)((a4 + 0x30));
    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    t2 = *(int *)((a4 + 0x34));
    t3 = 0xFFFFA001;
    t4 = 0xD;
    for (;;) {
        FUN_0c0dbda0((0x2AC + t1));
        FUN_0c0dcca0((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + 0xC));
        nlRotateAY(((((struct o3CE_short *)(t1))->v)));
        nlRotateAX(((((struct o3CC_short *)(t1))->v)));
        nlRotateAZ(t3);
        FUN_0c0dcca0(0xC10BB5C);
        nlScale(10.0f, 6.0f, 6.0f);
        FUN_0c0de000(10.0f);
        FUN_0c0c465c((t2 + 0xFF));
        t4 = (t4 - 0x1);
        t3 = (t3 + 0x1333);
        if (t4 == 0) {
            break;
        }
    }
    return nlPopMatrix(0x1);
}



