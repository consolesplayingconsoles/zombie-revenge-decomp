/* Straight-line functions with calls and guards (batch gen_agp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[11]; } Stk11;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_ushort { char p[0x14]; unsigned short v; };
struct o16_ushort { char p[0x16]; unsigned short v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o180_uint { char p[0x180]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1CC_int { char p[0x1CC]; int v; };
struct o1CC_uint { char p[0x1CC]; unsigned int v; };
struct o1DC_uint { char p[0x1DC]; unsigned int v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_int { char p[0x1E8]; int v; };
struct o1E8_uint { char p[0x1E8]; unsigned int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F4_int { char p[0x1F4]; int v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1F8_int { char p[0x1F8]; int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o1FC_int { char p[0x1FC]; int v; };
struct o1FC_uint { char p[0x1FC]; unsigned int v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o200_int { char p[0x200]; int v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o204_int { char p[0x204]; int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o220_int { char p[0x220]; int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o224_short { char p[0x224]; short v; };
struct o228_int { char p[0x228]; int v; };
struct o228_uint { char p[0x228]; unsigned int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o230_int { char p[0x230]; int v; };
struct o230_uint { char p[0x230]; unsigned int v; };
struct o234_int { char p[0x234]; int v; };
struct o234_uint { char p[0x234]; unsigned int v; };
struct o23C_int { char p[0x23C]; int v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o240_int { char p[0x240]; int v; };
struct o240_uint { char p[0x240]; unsigned int v; };
struct o24C_float { char p[0x24C]; float v; };
struct o250_float { char p[0x250]; float v; };
struct o254_float { char p[0x254]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o308_int { char p[0x308]; int v; };
struct o310_int { char p[0x310]; int v; };
struct o32_ushort { char p[0x32]; unsigned short v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o390_float { char p[0x390]; float v; };
struct o3A4_int { char p[0x3A4]; int v; };
struct o3A4_uint { char p[0x3A4]; unsigned int v; };
struct o3B4_int { char p[0x3B4]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3E_short { char p[0x3E]; short v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o3E8_int { char p[0x3E8]; int v; };
struct o3E8_short { char p[0x3E8]; short v; };
struct o3E8_uint { char p[0x3E8]; unsigned int v; };
struct o3EC_float { char p[0x3EC]; float v; };
struct o3F0_float { char p[0x3F0]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_short { char p[0x40]; short v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o400_uint { char p[0x400]; unsigned int v; };
struct o410_uint { char p[0x410]; unsigned int v; };
struct o414_uint { char p[0x414]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o4B4_float { char p[0x4B4]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o4D0_uint { char p[0x4D0]; unsigned int v; };
struct o4E4_int { char p[0x4E4]; int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o508_int { char p[0x508]; int v; };
struct o50C_int { char p[0x50C]; int v; };
struct o510_int { char p[0x510]; int v; };
struct o538_uint { char p[0x538]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o544_int { char p[0x544]; int v; };
struct o544_uint { char p[0x544]; unsigned int v; };
struct o54C_int { char p[0x54C]; int v; };
struct o554_int { char p[0x554]; int v; };
struct o560_int { char p[0x560]; int v; };
struct o564_int { char p[0x564]; int v; };
struct o564_uint { char p[0x564]; unsigned int v; };
struct o568_uint { char p[0x568]; unsigned int v; };
struct o574_int { char p[0x574]; int v; };
struct o574_uint { char p[0x574]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5C_int { char p[0x5C]; int v; };
struct o60_float { char p[0x60]; float v; };
struct o60_int { char p[0x60]; int v; };
struct o64_float { char p[0x64]; float v; };
struct o64_int { char p[0x64]; int v; };
struct o64_short { char p[0x64]; short v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o68_float { char p[0x68]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_float { char p[0x70]; float v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct o78_float { char p[0x78]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_float { char p[0x80]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o84_int { char p[0x84]; int v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
struct oE4_float { char p[0xE4]; float v; };
struct oEC_float { char p[0xEC]; float v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF4_float { char p[0xF4]; float v; };
struct oF8_float { char p[0xF8]; float v; };
struct oFC_float { char p[0xFC]; float v; };
int FUN_0c016d2c(void);
int FUN_0c016d40(void);
int FUN_0c016d74(void);
int FUN_0c018142(void);
int FUN_0c018232(void);
int FUN_0c01937a(void);
int FUN_0c019980(void);
int FUN_0c019a36(void);
int FUN_0c01a50c(int, int);
int FUN_0c01a52c(int);
int FUN_0c01a874(void);
int FUN_0c0208fc(int);
int FUN_0c0316d4(int, int);
int FUN_0c0336d6(int, int, int);
int FUN_0c035828(int, int, int, int, int, float, float);
int FUN_0c04996a(void);
int FUN_0c0534a4(void);
int FUN_0c0555ca(int, int, int, int);
int FUN_0c05561a(int, int, int, int);
int FUN_0c055936(int);
int FUN_0c058fa0(int);
int FUN_0c05fd8c(int, int, int, int, int, float, float, float, float);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c082260(void);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0852bc(int);
int FUN_0c08b2d0(int, int);
int FUN_0c0a6610(int, int, int);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0b264e(void);
int FUN_0c0b2e48(void);
int FUN_0c0b72d6(int);
extern int FUN_0c0c0340();
int FUN_0c0c4290(int);
int FUN_0c0c4364(int, int);
int FUN_0c0c43dc(int, int);
int FUN_0c0c452c(int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0cc752(int);
int FUN_0c0cc88c(int);
int FUN_0c0cf1b0(int, int, int, int);
int FUN_0c0cf2dc(int, int, int, int);
int FUN_0c0d4184(void);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0de310(float, float, float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
extern int FUN_0c0e19f2();
int FUN_0c0e262a(int);
int FUN_0c0e2a4c(int);
int mwPlyPreInitSofdec(void);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0d382a(int a4);
int FUN_0c0d2b30(void);
int FUN_0c08cb10(int a4, int a5, int a6, int a7);
int FUN_0c090450(int a4, int a5, int a6, int a7);
int FUN_0c061030(int a4, int a5, int a6, int a7);
int FUN_0c01ad40(int a4);
void FUN_0c0d1b00(void);
int FUN_0c0cfb0e(int a4, int a5, int a6, int a7);
int FUN_0c02286c(int a4, int a5, float f4, float f5);
int FUN_0c02bfa8(int a4);
int FUN_0c035b26(int a4, int a5, int a6);
int FUN_0c033530(int a4, int a5, int a6, int a7);
int FUN_0c06c01c(int a4, int a5, int a6, int a7);
int FUN_0c01a672(int a4, int a5, int a6, int a7);
int FUN_0c05a2dc(int a4, int a5, int a6, float f4);
int FUN_0c066870(int a4, int a5);
int FUN_0c060ca0(int a4, int a5, int a6, int a7);

int FUN_0c0d382a(int a4)
{
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t2 = (((struct o0_int *)0xC9433FC)->v);
    t3 = t2;
    if (t2 == 3) {
    } else {
        if ((*(int *)((a4 + 0x30))) != 0) {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 1);
        } else {
            if ((((((struct o3C_int *)0xC9433FC)->v)) != -1) && ((t3 = *(int *)((a4 + 0x38)), t3 == 0) && (t1 = *(int *)((a4 + 0x34)), t1 != 0))) {
                t3 = *(int *)((a4 + 0x34));
                *(unsigned int *)((a4 + 0x34)) = (t3 - 1);
                if ((t3 - 1) == 0) {
                    *(unsigned int *)((a4 + 0x38)) = 0x2;
                }
            }
        }
        (((struct o40_float *)(a4))->v) = 320.0f;
        (((struct o48_float *)(a4))->v) = 0.00139999995f;
        if (((((struct o3C_int *)0xC9433FC)->v)) == -1) {
            (((struct o44_float *)(a4))->v) = ((*(float *)0xC2475BC) + 56.0f);
            u0 = 1.29999995f;
            u0 = u0 + ((((struct o20_float *)0xC0D3A6C)->v)) * (FUN_0c0da410(((*(int *)0xC23A258) << 8)));
            (((struct o4C_float *)(a4))->v) = u0;
            (((struct o50_float *)(a4))->v) = 1.29999995f;
            *(unsigned int *)((a4 + 0x3C)) = 0x2065;
            (((struct o70_uint *)(a4))->v) = 0x300E;
            t3 = (((int (*)(int))(FUN_0c0c0340))((a4 + 0x3C)));
        } else {
            (((struct o4C_float *)(a4))->v) = 1.29999995f;
            (((struct o50_float *)(a4))->v) = 1.29999995f;
            if ((int)(*(int *)((a4 + 0x34))) >= (int)0x258) {
                (((struct o44_float *)(a4))->v) = ((*(float *)0xC2475BC) + 56.0f);
                (((struct o68_float *)(a4))->v) = 1.0f;
                t1 = 0x2050;
                u0 = 56.0f;
            } else {
                t2 = *(int *)0xC23A258;
                t4 = 0x205A;
                if (((*(int *)0xC23A258) & 1) != 0) {
                    t4 = 0x2050;
                }
                u1 = 0.599999964f;
                u1 = u1 + ((((struct o0_float *)0xC0D3A6C)->v)) * (FUN_0c0da410((((t2 << 8) << 2) << 2)));
                (((struct o68_float *)(a4))->v) = u1;
                t1 = t4;
            }
            t2 = (int)((int)(*(int *)((a4 + 0x34))) / (int)0x3C);
            *(unsigned int *)((a4 + 0x3C)) = (((int)((int)t2 / (int)0xA)) + t1);
            (((struct o70_uint *)(a4))->v) = 0x300F;
            t4 = ((int (*)(int, float))(FUN_0c0c0340))((a4 + 0x3C), u0);
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 13.0f);
            *(unsigned int *)((a4 + 0x3C)) = (((int)((int)t2 % (int)0xA)) + t1);
            (((struct o70_uint *)(a4))->v) = 0x300D;
            t2 = ((int (*)(int))(FUN_0c0c0340))((a4 + 0x3C));
            (((struct o4C_float *)(a4))->v) = 0.599999964f;
            (((struct o50_float *)(a4))->v) = 0.599999964f;
            t2 = (int)((int)(*(int *)((a4 + 0x34))) % (int)0x3C);
            u0 = (((struct o10_float *)0xC0D3A6C)->v);
            u1 = (((struct o14_float *)0xC0D3A6C)->v);
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 54.0f);
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 1.0f);
            *(unsigned int *)((a4 + 0x3C)) = (((int)((int)(int)(((float)t2 / u0) * u1) / (int)0xA)) + t1);
            (((struct o70_uint *)(a4))->v) = 0x300F;
            t4 = ((int (*)(int))(FUN_0c0c0340))((a4 + 0x3C));
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 5.0f);
            *(unsigned int *)((a4 + 0x3C)) = (((int)((int)(int)(((float)t2 / u0) * u1) % (int)0xA)) + t1);
            (((struct o70_uint *)(a4))->v) = 0x300D;
            t1 = ((int (*)(int))(FUN_0c0c0340))((a4 + 0x3C));
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 1.0f);
            t3 = 0x44;
        }
    }
    return t3;
}

int FUN_0c0d2b30(void)
{
    int stk[13];
    register int t0;
    register int t2;
    register float u3;
    register int t5;
    register int t7;
    register int t61;
    register float u77;
    register int t23;
    register int t25;
    register int t27;
    register float u28;
    register int t47;
    register int t29;
    register int t30;
    register int t45;
    register int t17;
    register int t18;
    register float u57;

    t0 = *(int *)0xC94342C;
    *(unsigned int *)(((int)stk + 8)) = ((t0 * 0x2C) + 0xC20BF54);
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((((t0 * 0x2C) + 0xC20BF54) + 0x24)));
    t2 = FUN_0c0d4184();
    u3 = 360.0f;
    if (!(_builtin_fabsf((float)t2) > 360.0f)) {
        u3 = _builtin_fabsf((float)t2);
    }
    t5 = (int)((int)((int)u3 + 0x77) / (int)0x78);
    t7 = (int)((int)(int)u3 / (int)(t5 << 1));
    t61 = t7;
    u77 = _builtin_fabsf((float)t2);
    if ((int)t7 < (int)0xF) {
    } else {
        *(unsigned int *)0xC23A1A8 = ((*(int *)0xC23A1A8) & 0xFFE7FFFF);
        if ((int)t2 > 0) {
            *(unsigned int *)0xC23A1A8 = ((*(int *)0xC23A1A8) | 0x100000);
            t17 = ((((struct o4_int *)0xC246FF0)->v));
            t18 = ((((struct o0_int *)0xC246FF0)->v));
        } else {
            *(unsigned int *)0xC23A1A8 = ((*(int *)0xC23A1A8) | 0x80000);
            t17 = ((((struct o0_int *)0xC246FF0)->v));
            t18 = ((((struct o4_int *)0xC246FF0)->v));
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x28)) = *(struct mv3 *)((t18 + 0x30)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x1C)) = *(struct mv3 *)((t17 + 0x30)); }
        (((struct oE_ushort *)0xC20C4B8)->v) = t7;
        *(unsigned int *)(((int)stk + 4)) = ((int)((int)0x10000 / (int)((t5 << 1) + t5)));
        t23 = (int)((unsigned int)((int)((unsigned int)t5 + (unsigned int)0x0)) + ((((int)0x0 > (int)t5)) ? 1u : 0u));
        t25 = *(int *)(((int)stk + 4));
        t27 = (((struct o6E_short *)(t17))->v);
        u28 = *(float *)0xC0D2DA4;
        t47 = 0xC0D2DA4;
        if ((int)t5 > 0) {
            t29 = ((t27 - ((t23 >> 1) * t25)) + 0x8000);
            t30 = 0x0;
            for (;;) {
                (((struct o0_uint *)0xC20C4B8)->v) = (*(signed char *)(((*(int *)(((int)stk + 12))) + ((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((*(int *)(((int)stk + 8))) + 0x28))))))));
                FUN_0c0a6800(t29, (((int)stk + 0) + 0x10), 0.0f, 0.0f, u28);
                nlAddVector((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x1C));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC20C4C8) = *(struct mv3 *)((((int)stk + 0) + 0x10)); }
                FUN_0c0a68ec(((int)stk + 0), ((*(float *)(((int)stk + 16))) - ((((struct o28_float *)(((int)stk + 0)))->v))), ((*(float *)(((int)stk + 24))) - ((((struct o8_float *)((((int)stk + 0) + 0x28)))->v))));
                (((struct o1C_uint *)0xC20C4B8)->v) = (*(int *)(((int)stk + 0)));
                t45 = FUN_0c0208fc(0xC20C4B8);
                t30 = (t30 + 0x1);
                t29 = (t29 + (*(int *)(((int)stk + 4))));
                if ((int)t30 >= (int)t5) {
                    break;
                }
            }
            t47 = t45;
        } else {
            u57 = _builtin_fabsf((float)t2);
        }
        t61 = t47;
        u77 = u57;
    }
    return t61;
}

int FUN_0c08cb10(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;
    register int t4;
    register int t21;
    register float u46;
    register int t61;
    register float u73;

    FUN_0c0685a4(a4, a5, a6, a7);
    t1 = (((struct o4C_int *)(a4))->v);
    if (t1 != 0) {
        if (t1 != 1) {
        } else {
            t2 = (((struct o54_int *)(a4))->v);
            (((struct o54_uint *)(a4))->v) = (t2 + 0x1);
            if ((int)(t2 + 0x1) >= (int)0x20) {
                (((struct o54_uint *)(a4))->v) = 0x14;
            }
            t4 = (((struct o58_int *)(a4))->v);
            (((struct o58_uint *)(a4))->v) = (t4 - 1);
            if ((int)(t4 - 1) <= 0) {
                (((struct o4C_uint *)(a4))->v) = 0x0;
                (((struct o58_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(((((struct o60_int *)(a4))->v)) - ((((struct o5C_int *)(a4))->v))))) + ((((struct o5C_int *)(a4))->v)));
                FUN_0c0cc3f8(0x62AA9, 0x0, 0x0, 0x0);
            }
        }
    } else {
        t21 = (((struct o58_int *)(a4))->v);
        (((struct o58_uint *)(a4))->v) = (t21 - 1);
        if ((int)(t21 - 1) <= 0) {
            (((struct o4C_uint *)(a4))->v) = 0x1;
            (((struct o54_uint *)(a4))->v) = 0x0;
            (((struct o58_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(((((struct o68_int *)(a4))->v)) - ((((struct o64_int *)(a4))->v))))) + ((((struct o64_int *)(a4))->v)));
            FUN_0c0cc3f8(0x52AA9, 0x0, 0x0, 0x0);
        }
    }
    if (((((struct o4C_int *)(a4))->v)) == 0) {
        return 0x4C;
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAZ(((((struct o40_short *)(a4))->v)));
    nlRotateAY(((((struct o3E_short *)(a4))->v)));
    nlRotateAX(((((struct o3C_short *)(a4))->v)));
    u46 = (((struct o44_float *)(a4))->v);
    nlScale(u46, u46, u46);
    FUN_0c0de000(((((struct o44_float *)(a4))->v)));
    if ((int)((((struct o58_int *)(a4))->v)) < (int)0x14) {
        FUN_0c0c475c((((((struct o50_int *)(a4))->v)) + ((((struct o54_int *)(a4))->v))), ((float)((((struct o58_int *)(a4))->v)) / 20.0f));
    } else {
        FUN_0c0c465c((((((struct o50_int *)(a4))->v)) + ((((struct o54_int *)(a4))->v))));
    }
    nlPopMatrix(0x1);
    t61 = *(int *)0xC23ED50;
    if (t61 == 38) {
        nlPushMatrix(0x0);
        FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), (-((((struct o34_float *)(a4))->v))), ((((struct o38_float *)(a4))->v)));
        nlRotateAZ((-((((struct o40_short *)(a4))->v))));
        nlRotateAY(((((struct o3E_short *)(a4))->v)));
        nlRotateAX(((-((((struct o3C_short *)(a4))->v))) + 0x8000));
        u73 = (((struct o44_float *)(a4))->v);
        nlScale(u73, u73, u73);
        FUN_0c0de000(((((struct o44_float *)(a4))->v)));
        FUN_0c0848d6(0.299999982f, 0.299999982f, 0.399999976f);
        if ((int)((((struct o58_int *)(a4))->v)) < (int)0x14) {
            FUN_0c0c475c((((((struct o50_int *)(a4))->v)) + ((((struct o54_int *)(a4))->v))), ((float)((((struct o58_int *)(a4))->v)) / 20.0f));
        } else {
            FUN_0c0c465c((((((struct o50_int *)(a4))->v)) + ((((struct o54_int *)(a4))->v))));
        }
        FUN_0c0849da();
        return nlPopMatrix(0x1);
    }
    return t61;
}

int FUN_0c090450(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    if ((*(short *)((((((*(int *)((a4 + 0x34))) << 2) << 2) + 0xC2460F4) + 0x4))) == 0) {
        t3 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    if (((unsigned short)(*(short *)((((((*(int *)((a4 + 0x34))) << 2) << 2) + 0xC2460F4) + 0x4))) != 2) && (t0 = *(int *)((a4 + 0x34)), t1 = *(int *)(((((t0 << 2) << 2) + 0xC2460F4) + 0xC)), t1 == 3)) {
        t0 = t1;
    } else {
        t1 = *(int *)((((*(int *)((a4 + 0x30))) << 2) + 0xC247030));
        if (((int)t1 >= (int)0x2) && (t1 != 5)) {
        } else {
            t3 = ((int (*)(int))(FUN_0c0e19f2))(t1);
        }
        t1 = *(int *)((((*(int *)((a4 + 0x30))) << 2) + 0xC246FF0));
        if ((unsigned short)(*(short *)((((((*(int *)((a4 + 0x34))) << 2) << 2) + 0xC2460F4) + 0x4))) != 2) {
            (((struct o8_float *)((0x45C + t1)))->v) = 1.0f;
            (((struct o4_float *)((0x45C + t1)))->v) = 1.0f;
            t3 = ((int (*)(int))(FUN_0c0e19f2))((0x45C + t1));
        }
        t3 = *(int *)((a4 + 0x38));
        switch (t3) {
        case 0:
            t3 = (int)((int)(((((struct o3B4_int *)(t1))->v)) - ((((struct o4E4_int *)(t1))->v))) / (int)0x6);
            *(unsigned int *)((a4 + 0x3C)) = t3;
            if ((int)t3 < (int)0x2) {
                *(unsigned int *)((a4 + 0x3C)) = 0x2;
            }
            (((struct o48_float *)(a4))->v) = (3.0f / (float)(*(int *)((a4 + 0x3C))));
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
            u0 = (((struct o48_float *)(a4))->v);
            u1 = (((struct o44_float *)(a4))->v);
            (((struct o44_float *)(a4))->v) = (u1 - u0);
            if (!((u1 - u0) > 0.0f)) {
                (((struct o44_float *)(a4))->v) = 0.0f;
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
            }
            break;
        case 1:
            u0 = (((struct o48_float *)(a4))->v);
            u1 = (((struct o44_float *)(a4))->v);
            (((struct o44_float *)(a4))->v) = (u1 - u0);
            if (!((u1 - u0) > 0.0f)) {
                (((struct o44_float *)(a4))->v) = 0.0f;
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
            }
            break;
        case 2:
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
            if (!(((((struct o0_float *)0xC090688)->v)) > ((((struct o44_float *)(a4))->v)))) {
                (((struct o44_float *)(a4))->v) = ((((struct o4_float *)0xC090688)->v));
                *(unsigned int *)((a4 + 0x38)) = 0x0;
            }
            break;
        case 3:
            if ((int)((((struct o40_int *)(a4))->v)) >= (int)0x1E) {
                (((struct o44_float *)(a4))->v) = 1.0f;
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
            } else {
                (((struct o44_float *)(a4))->v) = ((-((((struct o44_float *)(a4))->v))) + 1.0f);
            }
            break;
        }
        u0 = (((struct o44_float *)(a4))->v);
        u1 = u0;
        if (u0 > 1.0f) {
            u1 = 1.0f;
        }
        (((struct o8_float *)((0x45C + t1)))->v) = u1;
        (((struct o4_float *)((0x45C + t1)))->v) = u1;
        t3 = (0x45C + t1);
        if (((((struct o4E4_int *)(t1))->v)) == 0) {
            if (((((struct o554_int *)(t1))->v)) == 2) {
                if (((int)((((struct o40_int *)(a4))->v)) > 0) && (t3 = *(int *)((a4 + 0x38)), (int)t3 <= (int)0x2)) {
                    (((struct o40_uint *)(a4))->v) = 0x0;
                    (((struct o44_float *)(a4))->v) = 0.0f;
                    *(unsigned int *)((a4 + 0x38)) = 0x3;
                }
                t3 = (0x45C + t1);
            } else {
                (((struct o8_float *)((0x45C + t1)))->v) = 1.0f;
                (((struct o4_float *)((0x45C + t1)))->v) = 1.0f;
                t4 = ((int (*)(int))(FUN_0c0e19f2))((0x45C + t1));
            }
        }
        (((struct o40_uint *)(a4))->v) = (((((struct o40_int *)(a4))->v)) + 0x1);
        t1 = 0x40;
        if ((int)(*(int *)((a4 + 0x38))) > (int)0x3) {
            t1 = (((int (*)(int))(FUN_0c0e19f2))(t3));
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c061030(int a4, int a5, int a6, int a7)
{
    int stk[13];
    register int t1;
    register int t8;
    register int t50;
    register int t10;
    register int t41;
    register int t43;

    *(unsigned int *)(((int)stk + 0)) = ((((struct o230_int *)(a4))->v));
    t1 = (((struct o22C_int *)(a4))->v);
    (((struct o22C_uint *)(a4))->v) = (t1 - 1);
    if ((int)(t1 - 1) < 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    t8 = (int)((int)((((struct o22C_int *)(a4))->v)) % (int)0xF);
    t50 = t8;
    if (t8 != 0) {
    } else {
        t10 = FUN_0c0e19aa(0xC060F76, 0x2BC, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t10);
        (((struct oBC_uint *)(t10))->v) = ((((struct oBC_int *)(a4))->v));
        (((struct o200_uint *)(t10))->v) = ((((struct o200_int *)(a4))->v));
        (((struct o1EC_uint *)(t10))->v) = ((((struct o1EC_int *)(a4))->v));
        (((struct o1E8_uint *)(t10))->v) = ((((struct o1E8_int *)(a4))->v));
        (((struct o1F4_uint *)(t10))->v) = ((((struct o1F4_int *)(a4))->v));
        (((struct o204_uint *)(t10))->v) = ((((struct o204_int *)(a4))->v));
        (((struct o1E4_float *)(t10))->v) = ((((struct o1E4_float *)(a4))->v));
        (((struct o1FC_uint *)(t10))->v) = ((((struct o1FC_int *)(a4))->v));
        (((struct o1F8_uint *)(t10))->v) = ((((struct o1F8_int *)(a4))->v));
        nlPushMatrix(0x0);
        FUN_0c0dbda0((((((struct o3E4_int *)((*(int *)(((int)stk + 0)))))->v)) + 0x100));
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 20)) = 0.0f;
        *(float *)(((int)stk + 24)) = 0.0f;
        FUN_0c0db470((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4));
        (((struct o28_float *)(((int)stk + 0)))->v) = (*(float *)(((int)stk + 4)));
        (((struct o4_float *)((((int)stk + 0) + 0x28)))->v) = (*(float *)(((int)stk + 8)));
        (((struct o8_float *)((((int)stk + 0) + 0x28)))->v) = (*(float *)(((int)stk + 12)));
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 20)) = (-((((struct o250_float *)(a4))->v)));
        *(float *)(((int)stk + 24)) = 0.0f;
        FUN_0c0db470((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4));
        (((struct o1C_float *)(((int)stk + 0)))->v) = (*(float *)(((int)stk + 4)));
        (((struct o4_float *)((((int)stk + 0) + 0x1C)))->v) = (*(float *)(((int)stk + 8)));
        (((struct o8_float *)((((int)stk + 0) + 0x1C)))->v) = (*(float *)(((int)stk + 12)));
        nlPopMatrix(0x1);
        (((struct o48_float *)(t10))->v) = (((((struct o1C_float *)(((int)stk + 0)))->v)) - ((((struct o28_float *)(((int)stk + 0)))->v)));
        (((struct o4C_float *)(t10))->v) = (((((struct o4_float *)((((int)stk + 0) + 0x1C)))->v)) - ((((struct o4_float *)((((int)stk + 0) + 0x28)))->v)));
        (((struct o50_float *)(t10))->v) = (((((struct o8_float *)((((int)stk + 0) + 0x1C)))->v)) - ((((struct o8_float *)((((int)stk + 0) + 0x28)))->v)));
        t41 = (((struct oBC_int *)(a4))->v);
        t43 = (((struct o1E8_int *)(a4))->v);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t10 + 0x30)) = *(struct mv3 *)((((((((t41 << 1) + t41) << 2) << 2) << 2) + 0xC23F268) + (((t43 << 1) + t43) << 2))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t10 + 0x3C)) = *(struct mv3 *)((t10 + 0x30)); }
        (((struct o220_uint *)(t10))->v) = ((((struct o220_int *)(a4))->v));
        (((struct o22C_uint *)(t10))->v) = ((((struct o22C_int *)(a4))->v));
        (((struct o24C_float *)(t10))->v) = ((((struct o24C_float *)(a4))->v));
        (((struct o250_float *)(t10))->v) = ((((struct o250_float *)(a4))->v));
        (((struct o254_float *)(t10))->v) = ((((struct o254_float *)(a4))->v));
        t50 = 0x254;
    }
    return t50;
}

int FUN_0c01ad40(int a4)
{
    int t20;
    register int t50;
    register int t53;
    register int t73;

    FUN_0c0de310(0.0f, 0.0f, 0.0f);
    (((struct o0_uint *)0xC23A19C)->v) = 0x0;
    FUN_0c0c43dc(((((struct o8_int *)0xC23ED50)->v)), 0x0);
    if ((((((struct o0_int *)0xC23A19C)->v)) & 0x10000) == 0) {
        FUN_0c0c4290(((((struct o0_int *)0xC23ED50)->v)));
        FUN_0c0c4364(((((struct o0_int *)0xC23ED50)->v)), 0x0);
        if ((*(int *)0xC204998) != 0) {
            FUN_0c0c452c(((((struct o0_int *)0xC23ED50)->v)));
        }
    }
    t20 = (((struct o0_int *)0xC23A19C)->v);
    if (((0x400 & t20) == 0) && ((t20 & 0x20000) == 0)) {
        FUN_0c0cc88c(((((struct o0_int *)0xC23ED50)->v)));
    }
    (((struct o0_uint *)0xC23A19C)->v) = (((((struct o0_int *)0xC23A19C)->v)) & 0xFFFCFAFF);
    FUN_0c019980();
    FUN_0c019a36();
    FUN_0c018142();
    FUN_0c018232();
    FUN_0c01937a();
    FUN_0c0b264e();
    FUN_0c0b2e48();
    FUN_0c0852bc(((((struct o0_int *)0xC23ED50)->v)));
    FUN_0c055936(((((struct o0_int *)0xC23ED50)->v)));
    FUN_0c058fa0(((((struct o0_int *)0xC23ED50)->v)));
    FUN_0c016d2c();
    FUN_0c016d40();
    FUN_0c016d74();
    FUN_0c0534a4();
    mwPlyPreInitSofdec();
    (((struct o44_uint *)(a4))->v) = 0x4;
    (((struct o0_uint *)0xC23ED9C)->v) = 0x3;
    FUN_0c01a874();
    t50 = *(int *)((0xC2078A4 + ((*(short *)(((*(int *)0xC23ECFC) + 0x2))) << 2)));
    *(unsigned int *)((a4 + 0x34)) = t50;
    (((struct o8_uint *)0xC23ED9C)->v) = ((int)((int)(t50 + 0x59) / (int)0x5A));
    FUN_0c04996a();
    t53 = (((struct oC_int *)0xC23A19C)->v);
    if ((t53 & 0x1) != 0) {
        t73 = (t53 & 0x1);
        if ((t53 & 0x1) != 0) {
            t73 = 0xC20BB28;
            if ((int)((((struct o0_int *)0xC23ED50)->v)) >= (int)(*(int *)((((*(int *)0xC9433A8) * 0x1C) + 0xC20BB28)))) {
                t73 = (FUN_0c0cc752(((((struct o0_int *)0xC23ED50)->v))));
            }
        }
    } else {
        t73 = (FUN_0c0cc752(((((struct o0_int *)0xC23ED50)->v))));
    }
    if ((*(int *)0xC204998) != 0) {
        *(unsigned int *)0xC1FF890 = 0x0;
    }
    if ((((((struct oC_int *)0xC23A19C)->v)) & 0x101) == 0) {
        *(unsigned int *)0xC1EFD5C = 0x0;
    }
    return t73;
}

void FUN_0c0d1b00(void)
{
    int stk[13];
    register int t0;
    register int t9;
    register int t2;
    register int t3;
    register int t4;
    register float u15;
    register int t37;
    register int t38;
    int R1000;

    R1000 = *(int *)((int)stk + 0);

    t0 = (((struct o0_int *)0xC943424)->v);
    t9 = 0x0;
    if (t0 != 0xFFFF) {
        t2 = (int)((int)((((struct oC_int *)0xC943424)->v)) / (int)0x7);
        t3 = (((struct o10_int *)0xC943424)->v);
        t4 = ((~(((~(t2 + t3)) + 0x1) & 0x7)) + 0x1);
        if ((int)(t2 + t3) >= 0) {
            t4 = ((t2 + t3) & 0x7);
        }
        t9 = ((*(int *)(((t4 << 2) + 0xC20BEDC))) + t0);
    }
    FUN_0c0a6800(t9, (((int)stk + 0) + 0x10), 0.0f, 0.0f, (-((((struct o4_float *)0xC943424)->v))));
    nlAddVector3op((((int)stk + 0) + 0x28), 0xC943418, (((int)stk + 0) + 0x10));
    u15 = (((struct o0_float *)0xC0D1CF0)->v);
    *(float *)(((int)stk + 44)) = ((*(float *)(((int)stk + 44))) + u15);
    FUN_0c0a6800(t9, (((int)stk + 0) + 0x4), 0.0f, 0.0f, ((((struct o4_float *)0xC0D1CF0)->v)));
    nlAddVector3op((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x28), (((int)stk + 0) + 0x4));
    (((struct o0_float *)0xC20C3C8)->v) = (*(float *)(((int)stk + 40)));
    (((struct oC_float *)0xC20C3C8)->v) = (*(float *)(((int)stk + 44)));
    (((struct o18_float *)0xC20C3C8)->v) = (*(float *)(((int)stk + 48)));
    (((struct o24_float *)0xC20C3C8)->v) = (*(float *)(((int)stk + 28)));
    (((struct o30_float *)0xC20C3C8)->v) = (*(float *)(((int)stk + 32)));
    (((struct o3C_float *)0xC20C3C8)->v) = (*(float *)(((int)stk + 36)));
    FUN_0c0a6800(t9, (((int)stk + 0) + 0x10), 0.0f, 0.0f, ((((struct o4_float *)0xC943424)->v)));
    nlAddVector3op((((int)stk + 0) + 0x28), 0xC943418, (((int)stk + 0) + 0x10));
    *(float *)(((int)stk + 44)) = ((*(float *)(((int)stk + 44))) + u15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x1C)) = *(struct mv3 *)(0xC943418); }
    (((struct o0_float *)0xC20C410)->v) = (*(float *)(((int)stk + 40)));
    (((struct oC_float *)0xC20C410)->v) = (*(float *)(((int)stk + 44)));
    (((struct o18_float *)0xC20C410)->v) = (*(float *)(((int)stk + 48)));
    (((struct o24_float *)0xC20C410)->v) = (*(float *)(((int)stk + 28)));
    (((struct o30_float *)0xC20C410)->v) = (*(float *)(((int)stk + 32)));
    (((struct o3C_float *)0xC20C410)->v) = (*(float *)(((int)stk + 36)));
    R1000 = 0xC943440;
    *(unsigned int *)0xC247D04 = 0xA;
    (((struct o4_uint *)0xC247CA4)->v) = 0xFFFFFFFF;
    (((struct o0_uint *)0xC247CA4)->v) = (FUN_0c082260());
    t37 = (((struct o0_int *)0xC247CA4)->v);
    t38 = R1000;
    { struct mv10 { int w[10]; }; *(struct mv10 *)(0xC943468) = *(struct mv10 *)(t37); }
    { struct mv10 { int w[10]; }; *(struct mv10 *)(t38) = *(struct mv10 *)(t37); }
    (((struct o0_ushort *)0xC943468)->v) = 0x2;
    (((struct o2_ushort *)0xC943468)->v) = 0xFFFFFE08;
    (((struct o4_uint *)0xC943468)->v) = 0xC20C45C;
    (((struct o14_ushort *)0xC943468)->v) = 0xFFFFFC72;
    (((struct o16_ushort *)0xC943468)->v) = 0xFFFFE71D;
    (((struct o18_float *)0xC943468)->v) = 0.0f;
    (((struct o1C_float *)0xC943468)->v) = 0.0f;
    (((struct o20_float *)0xC943468)->v) = ((((struct o30_float *)0xC0D1CF0)->v));
    (((struct o24_float *)0xC943468)->v) = ((((struct o34_float *)0xC0D1CF0)->v));
    { struct mv10 { int w[10]; }; *(struct mv10 *)(((((struct o0_int *)0xC247CA4)->v))) = *(struct mv10 *)(0xC943468); }
}

int FUN_0c0cfb0e(int a4, int a5, int a6, int a7)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    int R9;
    register int R14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    int R1000;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    v0_5 = a4;
    v0_0 = a5;
    v0_0 = a6;
    v0_0 = a7;
    v0_1 = (((struct o2C_int *)0xC9433A8)->v);
    R1004 = v0_1;
    v0_4 = (0x54);
    R9 = (v0_5);
    if (((((((struct o54_int *)(v0_1))->v)) + 0x4) != 0)) goto L_C0CFB38;
    L_C0CFCB8:;
    return v0_4;
    L_C0CFB38:;
    v0_5 = *(int *)(((((((struct o0_int *)0xC9433A8)->v)) * 0x1C) + 0xC20BB30));
    v0_3 = *(int *)((v0_5 + ((*(int *)0xC23A1B0) << 2)));
    R1008 = 0x0;
    R1016 = (((R9 == 0)) ? 1 : 0);
    R1020 = (((R9 == 0)) ? 1 : 0);
    R1012 = (((R9 == 0)) ? 1 : 0);
    v0_4 = ((((R9 == 0)) ? 1 : 0));
    v0_1 = (0x17);
    v0_2 = (0x3);
    v0_3 = (v0_3);
    v0_5 = (v0_5);
    v0_5 = (0xC0DA2E0);
    L_C0CFCAE:;
    if (((int)(*(signed char *)((v0_3 + 0x0))) < 0)) goto L_C0CFCB8;
    if (((*(signed char *)((v0_3 + 0x2))) != 0)) goto L_C0CFB78;
    R14 = ((*(signed char *)((v0_3 + 0x1))));
    L_C0CFBEC:;
    v0_4 = (R14);
    v0_5 = (0x1);
    if ((R14 == 30)) goto L_C0CFC0A;
    if ((v0_4 == 22)) goto L_C0CFC0A;
    if ((v0_4 == 23)) goto L_C0CFC0E;
    if ((v0_4 == 24)) goto L_C0CFC14;
    if (!((v0_4 == 29))) goto L_C0CFC2A;
    R14 = ((((int)((int)(FUN_0c0da2e0()) % (int)v0_2)) + 0x19));
    goto L_C0CFC2A;
    L_C0CFC2A:;
    v0_6 = *(signed char *)((v0_3 + 0x0));
    v0_4 = (v0_6);
    if ((v0_6 == 0)) goto L_C0CFC3C;
    if ((v0_4 == 2)) goto L_C0CFC5A;
    if (!((v0_4 == 3))) goto L_C0CFCAC;
    if (((R1012) != 0)) goto L_C0CFC88;
    if (((0x2 & R9) == 0)) goto L_C0CFCAC;
    goto L_C0CFC88;
    L_C0CFCAC:;
    v0_3 = ((v0_3 + 0x4));
    goto L_C0CFCAE;
    L_C0CFC88:;
    R1000 = 0x0;
    if (((int)v0_5 <= 0)) goto L_C0CFCAC;
    L_C0CFC90:;
    v0_4 = FUN_0c0cf1b0(R14, 0x1, 0x0, (((((struct o54_int *)((R1004)))->v)) + 0x4));
    v0_6 = R1000;
    R1000 = (v0_6 + 0x1);
    v0_4 = (v0_4);
    if (((int)(v0_6 + 0x1) < (int)v0_5)) goto L_C0CFC90;
    goto L_C0CFCAC;
    L_C0CFC5A:;
    if (((R1020) != 0)) goto L_C0CFC66;
    if (((0x1 & R9) == 0)) goto L_C0CFCAC;
    L_C0CFC66:;
    v0_4 = ((FUN_0c0cf1b0(R14, v0_5, 0x2, (((((struct o54_int *)((R1004)))->v)) + 0x4))));
    goto L_C0CFCAC;
    L_C0CFC3C:;
    if (((R1016) != 0)) goto L_C0CFC48;
    if (((0x1 & R9) == 0)) goto L_C0CFCAC;
    L_C0CFC48:;
    v0_4 = FUN_0c0cf2dc((R1008), R14, v0_5, v0_0);
    R1008 = ((R1008) + 0x1);
    v0_4 = (v0_4);
    goto L_C0CFCAC;
    L_C0CFC14:;
    v0_5 = (v0_2);
    R14 = (v0_1);
    goto L_C0CFC2A;
    L_C0CFC0E:;
    v0_5 = (0x2);
    R14 = (v0_1);
    goto L_C0CFC2A;
    L_C0CFC0A:;
    R14 = (v0_1);
    goto L_C0CFC2A;
    L_C0CFB78:;
    if (((*(signed char *)((v0_3 + 0x3))) != 0)) goto L_C0CFB92;
    v0_4 = (0x1 & (FUN_0c0da2e0())) == 0;
    if (v0_4) goto L_C0CFB8C;
    v0_4 = ((*(signed char *)((v0_3 + 0x1))));
    L_C0CFB8E:;
    R14 = (v0_4);
    goto L_C0CFBEC;
    L_C0CFB8C:;
    v0_4 = ((*(signed char *)((v0_3 + 0x2))));
    goto L_C0CFB8E;
    L_C0CFB92:;
    v0_5 = (int)((int)(FUN_0c0da2e0()) % (int)v0_2);
    v0_4 = (v0_5);
    if ((v0_5 == 0)) goto L_C0CFBB2;
    if ((v0_4 == 1)) goto L_C0CFBE4;
    if ((v0_4 == 2)) goto L_C0CFBE8;
    goto L_C0CFBEC;
    L_C0CFBE8:;
    v0_4 = ((*(signed char *)((v0_3 + 0x3))));
    L_C0CFBEA:;
    R14 = (v0_4);
    goto L_C0CFBEC;
    L_C0CFBE4:;
    v0_4 = ((*(signed char *)((v0_3 + 0x2))));
    goto L_C0CFBEA;
    L_C0CFBB2:;
    v0_4 = ((*(signed char *)((v0_3 + 0x1))));
    goto L_C0CFBEA;
}

int FUN_0c02286c(int a4, int a5, float f4, float f5)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    int t4;
    register int t5;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    if ((((((struct o50C_int *)(a4))->v)) != 0) && ((t0 = (((struct o508_int *)(a4))->v), t0 == 0) && (t1 = (((struct o510_int *)(a4))->v), t2 = *(int *)((((t1 << 2) + 0xC247030) + 0x0)), t2 != 0))) {
        u0 = ((((struct o390_float *)((*(int *)((((((((struct o510_int *)(a4))->v)) << 2) + 0xC246FF0) + 0x0)))))->v));
    } else {
        t0 = *(short *)(((*(int *)0xC23ECFC) + 0x2));
        u0 = (*(float *)((0xC205CBC + ((((t0 << 1) + t0) << 2) << 1))));
    }
    u1 = (f4 + 20.0f);
    if ((((((struct o50C_int *)(a4))->v)) != 0) && ((t3 = (((struct o508_int *)(a4))->v), t3 == 0) && (t4 = (((struct o510_int *)(a4))->v), t5 = *(int *)((0xC247030 + (t4 << 2))), t5 == 4))) {
        t0 = (((struct o510_int *)(a4))->v);
        u2 = (*(float *)(((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F26C)));
        u2 = u2 + 0.5f * (*(float *)(((((((struct o510_int *)(a4))->v)) << 2) + (0xC247084 + (((((((struct oBC_int *)(a4))->v)) << 2) << 2) << 2)))));
        u1 = ((u2 - u0) + f4);
    }
    u2 = u1;
    if (u1 > 40.0f) {
        u2 = 40.0f;
    }
    if (!(((((struct o34_float *)(a4))->v)) > (u0 + u2))) {
        u1 = (((struct o34_float *)(a4))->v);
        u3 = FUN_0c0da410((((((((((struct oBC_int *)(a4))->v)) << 8) << 2) << 2) << 1) + (((int)((int)0x10000 / (int)a5)) * (*(int *)0xC23A258))));
        u4 = (u3 * f5);
        u4 = u4 + 0.25f * ((((u0 + u2) - u1) / u2));
        (((struct o4B4_float *)(a4))->v) = (((((struct o4B4_float *)(a4))->v)) + u4);
    }
    if (((((struct o34_float *)(a4))->v)) > (u0 + u2)) {
        (((struct o4B4_float *)(a4))->v) = (((((struct o4B4_float *)(a4))->v)) + 0.0f);
    }
    (((struct o4B4_float *)(a4))->v) = (((((struct o4B4_float *)(a4))->v)) - 0.0272199996f);
    (((struct o48_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) * 0.949999988f);
    (((struct o4C_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) * 0.949999988f);
    (((struct o50_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) * 0.949999988f);
    return nlAddVector((a4 + 0x48), (0x4B0 + a4));
}

int FUN_0c02bfa8(int a4)
{
    int stk[22];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register float F12;
    register float F13;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    v0_5 = a4;
    v0_0 = (((struct o304_int *)(v0_5))->v);
    v0_1 = (int)((int)(((v0_0 << 2) + v0_0) << 1) / (int)((((struct o308_int *)(v0_5))->v)));
    { struct mv11 { int w[11]; }; *(struct mv11 *)((((int)stk + 0) + 0x2C)) = *(struct mv11 *)(0xC0F54DC); }
    { struct mv11 { int w[11]; }; *(struct mv11 *)(((int)stk + 0)) = *(struct mv11 *)(0xC0F5508); }
    v0_2 = ((((int)stk + 0) + 0x2C));
    v0_0 = (0x0);
    v0_3 = (v0_1);
    v0_1 = (v0_5);
    if (((int)((((struct o304_int *)(v0_5))->v)) > 0)) goto L_C02C014;
    v0_4 = (0x474);
    L_C02C13E:;
    *(unsigned int *)((v0_1 + v0_4)) = v0_0;
    L_C02C140:;
    return v0_4;
    L_C02C014:;
    v0_5 = (0x5);
    v0_4 = (0xC246FF0);
    v0_6 = (0xC246A3C);
    if (((int)((*(int *)0xC247074) + (*(int *)0xC246A3C)) >= (int)0x5)) goto L_C02C036;
    if (((int)v0_3 > (int)0x8)) goto L_C02C036;
    if (((int)v0_3 >= (int)0x3)) goto L_C02C03A;
    L_C02C036:;
    (((struct o574_uint *)(v0_1))->v) = v0_3;
    L_C02C03A:;
    if ((((((struct o574_int *)(v0_1))->v)) == v0_3)) goto L_C02C06A;
    if (((int)(((((struct o84_int *)(v0_4))->v)) + (*(int *)((v0_6 + 0x0)))) >= (int)v0_5)) goto L_C02C06A;
    v0_4 = (((struct o3A4_int *)(v0_1))->v);
    (((struct o3A4_uint *)(v0_1))->v) = (v0_4 - 1);
    if (((int)(v0_4 - 1) >= 0)) goto L_C02C06A;
    FUN_0c0336d6(v0_1, 0x0, 0x0);
    (((struct o3A4_uint *)(v0_1))->v) = 0x3C;
    L_C02C06A:;
    v0_6 = (((struct o4F8_int *)(v0_1))->v);
    v0_4 = (v0_6);
    v0_5 = (v0_6);
    if ((v0_6 == 12)) goto L_C02C140;
    v0_4 = (v0_5);
    if ((v0_5 == 13)) goto L_C02C140;
    v0_4 = (0x20C);
    if (((((((struct o20C_int *)(v0_1))->v)) & 0x80000) != 0)) goto L_C02C140;
    v0_5 = (((struct o4C8_int *)(v0_1))->v);
    v0_4 = (v0_5);
    if ((v0_5 == 9)) goto L_C02C140;
    v0_5 = (((struct o4C8_int *)(v0_1))->v);
    v0_4 = (v0_5);
    if ((v0_5 == 2)) goto L_C02C140;
    v0_6 = (((struct o560_int *)(v0_1))->v);
    v0_4 = (v0_6);
    v0_5 = (v0_6);
    if ((v0_6 == 8)) goto L_C02C140;
    v0_4 = (v0_5);
    if ((v0_5 == 9)) goto L_C02C140;
    v0_4 = (((struct o310_int *)(v0_1))->v);
    w0_0 = *(float *)((v0_2 + (v0_3 << 2)));
    v0_5 = FUN_0c0da2e0();
    FPUL_ = ((v0_5 & 0x3));
    if ((!((float)v0_4 > (w0_0 + (float)(v0_5 & 0x3))))) goto L_C02C10C;
    (((struct o4D0_uint *)(v0_1))->v) = v0_0;
    (((struct o4F8_uint *)(v0_1))->v) = 0xC;
    (((struct o568_uint *)(v0_1))->v) = ((((struct o310_int *)(v0_1))->v));
    v0_4 = (0x310);
    goto L_C02C13E;
    L_C02C10C:;
    v0_5 = (((struct o564_int *)(v0_1))->v);
    w0_0 = *(float *)((v0_2 + (v0_3 << 2)));
    v0_2 = FUN_0c0da2e0();
    v0_4 = ((v0_2 & 0x3));
    FPUL_ = ((v0_2 & 0x3));
    if ((!((float)v0_5 > (w0_0 + (float)(v0_2 & 0x3))))) goto L_C02C140;
    (((struct o4D0_uint *)(v0_1))->v) = v0_0;
    (((struct o4F8_uint *)(v0_1))->v) = 0xC;
    (((struct o564_uint *)(v0_1))->v) = v0_0;
    v0_4 = (0x56C);
    goto L_C02C13E;
}

int FUN_0c035b26(int a4, int a5, int a6)
{
    int stk[12];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t10;
    register int t13;
    register int t15;
    register int t16;
    register int t30;
    register int t31;
    register int t34;
    register int t40;
    register int t43;
    register int t44;
    register int t47;
    register int t50;
    register int t51;
    register int t71;
    register int t61;

    t0 = (((int)stk + 0) + 0x8);
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)((((int)stk + 0) + 0x8) + 0x28)) {
            break;
        }
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
    }
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t1 = (((struct o54C_int *)(a4))->v);
    if ((int)t1 < (int)0x1) {
        (((struct o538_uint *)(a4))->v) = 0xA;
        (((struct o544_uint *)(a4))->v) = 0xFFFFFFFF;
        t71 = 0x0;
    } else {
        if ((int)t1 > (int)0x3) {
            (((struct o538_uint *)(a4))->v) = 0xA;
            (((struct o544_uint *)(a4))->v) = 0xFFFFFFFF;
            t61 = 0x0;
        } else {
            t2 = 0x0;
            t3 = 0x0;
            for (;;) {
                t4 = (((struct o4F0_int *)(a4))->v);
                if ((*(int *)((((*(int *)((((((((struct o54C_int *)(a4))->v)) - 1) << 2) + (*(int *)((((((t4 << 2) + t4) << 2) + 0xC1F8E3C) + 0xC)))))) + ((t3 << 2) << 2)) + 0x0))) == 0) {
                    break;
                }
                t10 = (((struct o4F0_int *)(a4))->v);
                t13 = *(int *)((((((((struct o54C_int *)(a4))->v)) - 1) << 2) + (*(int *)((((((t10 << 2) + t10) << 2) + 0xC1F8E3C) + 0xC)))));
                *(unsigned int *)(((int)stk + 0)) = ((t3 << 2) << 2);
                t15 = FUN_0c0316d4(a4, (*(int *)(((t13 + ((t3 << 2) << 2)) + 0xC))));
                if (t15 != 0) {
                    *(unsigned int *)(((((int)stk + 0) + 0x8) + (t3 << 2))) = 0x1;
                    *(unsigned int *)(((int)stk + 4)) = 0x1;
                    t16 = (((struct o4F0_int *)(a4))->v);
                    t2 = (t2 + (*(int *)((((*(int *)((((((((struct o54C_int *)(a4))->v)) - 1) << 2) + (*(int *)((((((t16 << 2) + t16) << 2) + 0xC1F8E3C) + 0xC)))))) + (*(int *)(((int)stk + 0)))) + 0x8))));
                }
                t3 = (t3 + 0x1);
            }
            if (((*(int *)(((int)stk + 4))) != 0) && ((int)t2 > 0)) {
                (((struct o544_uint *)(a4))->v) = 0x0;
                t30 = ((int)((int)(FUN_0c0da2e0()) % (int)t2));
                t31 = 0x0;
                for (;;) {
                    if ((*(int *)(((((int)stk + 0) + 0x8) + (((((struct o544_int *)(a4))->v)) << 2)))) != 0) {
                        t34 = (((struct o4F0_int *)(a4))->v);
                        t30 = (t30 - (*(int *)((((*(int *)((((((((struct o54C_int *)(a4))->v)) - 1) << 2) + (*(int *)((((((t34 << 2) + t34) << 2) + 0xC1F8E3C) + 0xC)))))) + ((((((struct o544_int *)(a4))->v)) << 2) << 2)) + 0x8))));
                        if ((int)t30 < 0) {
                            break;
                        }
                        t40 = (((struct o4F0_int *)(a4))->v);
                        t43 = *(int *)((((((((struct o54C_int *)(a4))->v)) - 1) << 2) + (*(int *)((((((t40 << 2) + t40) << 2) + 0xC1F8E3C) + 0xC)))));
                        t44 = (((struct o544_int *)(a4))->v);
                        (((struct o544_uint *)(a4))->v) = (t44 + 0x1);
                        if ((*(int *)(((t43 + (((t44 + 0x1) << 2) << 2)) + 0x0))) == 0) {
                            (((struct o544_uint *)(a4))->v) = 0x0;
                        }
                        t31 = (t31 + 0x1);
                        if ((int)t31 > (int)0x14) {
                            (((struct o538_uint *)(a4))->v) = 0xA;
                            (((struct o544_uint *)(a4))->v) = 0xFFFFFFFF;
                            return 0x0;
                        }
                        continue;
                    }
                    t47 = (((struct o4F0_int *)(a4))->v);
                    t50 = *(int *)((((((((struct o54C_int *)(a4))->v)) - 1) << 2) + (*(int *)((((((t47 << 2) + t47) << 2) + 0xC1F8E3C) + 0xC)))));
                    t51 = (((struct o544_int *)(a4))->v);
                    (((struct o544_uint *)(a4))->v) = (t51 + 0x1);
                    if ((*(int *)(((t50 + (((t51 + 0x1) << 2) << 2)) + 0x0))) == 0) {
                        (((struct o544_uint *)(a4))->v) = 0x0;
                    }
                    t31 = (t31 + 0x1);
                    if ((int)t31 > (int)0x14) {
                        (((struct o538_uint *)(a4))->v) = 0xA;
                        (((struct o544_uint *)(a4))->v) = 0xFFFFFFFF;
                        return 0x0;
                    }
                }
                t61 = 0x1;
            } else {
                (((struct o538_uint *)(a4))->v) = 0xA;
                (((struct o544_uint *)(a4))->v) = 0xFFFFFFFF;
                t61 = 0x0;
            }
        }
        t71 = t61;
    }
    return t71;
}

int FUN_0c033530(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register float u8;
    register float u11;
    register int t20;
    register float u21;
    register float u22;
    register float u25;
    register float u26;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = FUN_0c0e1830(0xC0333F0, 0x41C);
    FUN_0c0e19d0(t0);
    (((struct o1DC_uint *)(t0))->v) = ((*(int *)(((int)stk + 0))) - 32768);
    (((struct o1CC_uint *)(t0))->v) = (*(int *)(((int)stk + 4)));
    (((struct o414_uint *)(t0))->v) = 0x0;
    (((struct o3EC_float *)(t0))->v) = 0.0272199996f;
    (((struct o400_uint *)(t0))->v) = 0x874;
    (((struct o3E8_uint *)(t0))->v) = ((*(int *)(((int)stk + 0))) + (*(int *)(((int)stk + 8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
    (((struct o3F0_float *)(t0))->v) = 1.5f;
    (((struct o1C_float *)(((int)stk + 0)))->v) = 0.0f;
    if (((((struct o1CC_int *)(t0))->v)) != 0) {
        u8 = (((struct o3F0_float *)(t0))->v);
        u11 = 0.699999988f;
        u11 = u11 + 0.099999994f * (float)((int)((int)(FUN_0c0da2e0()) % (int)0x6));
        (((struct o4_float *)((((int)stk + 0) + 0x1C)))->v) = ((0.659999967f / (u8 / (1.0f + 1.0f))) * u11);
    } else {
        (((struct o4_float *)((((int)stk + 0) + 0x1C)))->v) = 0.0f;
    }
    t20 = (((struct o1CC_int *)(t0))->v);
    u21 = *(float *)0xC033730;
    u22 = (((struct o3F0_float *)(t0))->v);
    u25 = 0.699999988f;
    u25 = u25 + 0.099999994f * (float)((int)((int)(FUN_0c0da2e0()) % (int)0x6));
    u26 = (((float)t20 * u21) / (u22 / (1.0f + 1.0f)));
    (((struct o8_float *)((((int)stk + 0) + 0x1C)))->v) = (u26 * u25);
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = 0x0;
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x4)) = (((((struct o3E8_int *)(t0))->v)) + 0x8000);
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x8)) = 0x0;
    FUN_0c0a6610((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x10), (0x220 + t0));
    (((struct o6E_ushort *)(t0))->v) = ((((struct o3E8_short *)(t0))->v));
    (((struct o22C_uint *)(t0))->v) = ((((int)((int)(FUN_0c0da2e0()) % (int)0xC)) << 8) - 1536);
    (((struct o230_uint *)(t0))->v) = 0x0;
    (((struct o234_uint *)(t0))->v) = ((((int)((int)(FUN_0c0da2e0()) % (int)0x6)) << 8) - 768);
    (((struct o410_uint *)(t0))->v) = 0x0;
    *(unsigned int *)0xC246A3C = ((*(int *)0xC246A3C) + 0x1);
    return 0x410;
}

int FUN_0c06c01c(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t18;
    register int t60;
    register int t69;

    FUN_0c0685a4(a4, a5, a6, a7);
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAZ(((((struct o64_short *)(a4))->v)));
    FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
    nlPopMatrix(0x1);
    t60 = (((struct o80_int *)(a4))->v);
    if (t60 != 0) {
        if (t60 != 1) {
            if (t60 != 2) {
                if (t60 == 3) {
                    (((struct o64_ushort *)(a4))->v) = (((((struct o64_short *)(a4))->v)) + ((((struct o98_int *)(a4))->v)));
                    (((struct o98_uint *)(a4))->v) = (((((struct o98_int *)(a4))->v)) - 4);
                    t69 = 0x64;
                    if ((int)((((struct o64_short *)(a4))->v)) < (int)0xFFFFE93F) {
                        FUN_0c0cc3f8(0x628A9, 0x0, 0x0, 0x0);
                        (((struct o64_ushort *)(a4))->v) = 0xFFFFE93F;
                        (((struct o98_uint *)(a4))->v) = (-((int)((int)((((struct o98_int *)(a4))->v)) / (int)0xA)));
                        t18 = (((struct oA0_int *)(a4))->v);
                        (((struct oA0_uint *)(a4))->v) = (t18 + 0x1);
                        t69 = 0xA0;
                        if ((int)(t18 + 0x1) >= (int)0x3) {
                            (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
                            t69 = 0x80;
                        }
                    }
                } else {
                    (((struct o64_ushort *)(a4))->v) = 0xFFFFE93F;
                    t69 = 0x64;
                }
            } else {
                (((struct o64_ushort *)(a4))->v) = (((((struct o64_short *)(a4))->v)) + ((((struct o98_int *)(a4))->v)));
                (((struct o98_uint *)(a4))->v) = (((((struct o98_int *)(a4))->v)) - 4);
                t69 = 0x64;
                if ((int)((((struct o64_short *)(a4))->v)) < (int)0xFFFFE93F) {
                    FUN_0c0cc3f8(0xF2BA9, 0x0, 0x0, 0x0);
                    FUN_0c0dc5a0();
                    *(float *)(((int)stk + 0)) = 50.0f;
                    *(float *)(((int)stk + 4)) = 0.0f;
                    *(float *)(((int)stk + 8)) = 0.0f;
                    FUN_0c0dcca0((a4 + 0x30));
                    nlRotateAZ(((((struct o64_short *)(a4))->v)));
                    FUN_0c0db470(((int)stk + 0), (((int)stk + 0) + 0xC));
                    FUN_0c08b2d0((((int)stk + 0) + 0xC), 0x4000);
                    nlPopMatrix(0x1);
                    (((struct o64_ushort *)(a4))->v) = 0xFFFFE93F;
                    (((struct o98_uint *)(a4))->v) = (-((int)((int)((((struct o98_int *)(a4))->v)) / (int)0xA)));
                    (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
                    (((struct oA0_uint *)(a4))->v) = 0x0;
                    t69 = 0xA0;
                }
            }
        } else {
            if (((*(int *)0xC23ED88) & 0x200) != 0) {
                (((struct o98_uint *)(a4))->v) = 0x0;
                (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
                t60 = 0x80;
            }
            t69 = t60;
        }
    } else {
        (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        t69 = 0x80;
    }
    return t69;
}

int FUN_0c01a672(int a4, int a5, int a6, int a7)
{
    int t4;
    int t40;
    register int t41;
    register int t50;
    register int t51;
    register int t52;
    int t68;

    if (a4 == 0) {
        (((struct o4_uint *)0xC23F21C)->v) = 0x2;
    } else {
        (((struct o4_uint *)0xC23F21C)->v) = 0x1;
    }
    if (((int)(*(int *)((0xC23F25C + (a4 << 2)))) > 0) && (t4 = (((struct o0_int *)0xC5229BC)->v), (unsigned int)t4 > (unsigned int)0x0)) {
        if (((((struct o0_int *)0xC5229FC)->v)) != 1) {
            if (((((struct o4_int *)0xC5229FC)->v)) == 0) {
                if ((int)((((struct o10_int *)0xC23F21C)->v)) >= (int)((((struct o0_int *)0xC5229BC)->v))) {
                    if ((((((struct o8_int *)0xC5229BC)->v)) != 1) && (t40 = (((struct o4_int *)0xC5229BC)->v), t41 = (((struct o18_int *)0xC23F21C)->v), (unsigned int)t41 < (unsigned int)t40)) {
                        *(unsigned int *)((0xC23F25C + (a4 << 2))) = 0x383;
                    }
                } else {
                    *(unsigned int *)((0xC23F25C + (a4 << 2))) = 0x383;
                }
            } else {
                if (((int)(*(int *)(((0xC23F22C + (a4 << 2)) + 0x0))) >= (int)(*(int *)(((((a4 << 2) << 2) + 0xC5229BC) + 0x0)))) && ((t50 = *(int *)(((((a4 << 2) << 2) + 0xC5229BC) + 0x8)), t50 == 1) || (t51 = *(int *)(((((a4 << 2) << 2) + 0xC5229BC) + 0x4)), t52 = *(int *)(((0xC23F234 + (a4 << 2)) + 0x0)), (unsigned int)t52 >= (unsigned int)t51))) {
                } else {
                    *(unsigned int *)((0xC23F25C + (a4 << 2))) = 0x383;
                }
            }
        }
        if ((((*(int *)(((((((a4 << 2) + a4) << 2) << 2) + 0xC2497E0) + 0x0))) & 4) != 0) && (t68 = *(int *)(((a4 << 2) + 0xC23F25C)), (int)t68 < (int)0x2D0)) {
            *(unsigned int *)((((a4 << 2) + 0xC23F25C) + 0x0)) = ((*(int *)((((a4 << 2) + 0xC23F25C) + 0x0))) - ((int)((int)(*(int *)((((a4 << 2) + 0xC23F25C) + 0x0))) % (int)0x5A)));
        } else {
            *(unsigned int *)((0xC23F25C + (a4 << 2))) = ((*(int *)((0xC23F25C + (a4 << 2)))) - 1);
        }
        if ((int)(*(int *)((0xC23F25C + (a4 << 2)))) < 0) {
            *(unsigned int *)((0xC23F25C + (a4 << 2))) = 0x0;
        }
        FUN_0c01a50c(a4, 0x4);
        return FUN_0c01a52c(a4);
    }
    if ((*(int *)(((a4 << 2) + 0xC23EDE0))) != 0) {
        FUN_0c0b72d6(a4);
    }
    *(unsigned int *)(((a4 << 2) + 0xC23EDE0)) = 0xB;
    *(unsigned int *)((((a4 << 2) + 0xC23F224) + 0x0)) = 0x78;
    (((struct o0_uint *)0xC23F21C)->v) = 0x0;
    return 0x70;
}

int FUN_0c05a2dc(int a4, int a5, int a6, float f4)
{
    int stk[13];
    register int t0;
    register int t1;
    register int t2;
    register int t74;
    register int t4;
    register int t8;
    register int t5;
    register int t6;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t25;
    register int t30;
    register int t45;
    register int t46;
    register int t47;
    register int t48;
    register int t66;
    register int t67;
    register int t68;
    int R1000;
    int R1004;
    int R1008;
    float R1012;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(float *)((int)stk + 12);

    R1000 = a6;
    R1012 = f4;
    t0 = (0x234 + a4);
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        t1 = (t1 + t2);
        if ((unsigned int)t0 >= (unsigned int)((0x234 + a4) + 0x10)) {
            break;
        }
    }
    t74 = 0xC;
    if ((int)t1 <= 0) {
    } else {
        t4 = FUN_0c0e262a((t1 << 1));
        t8 = t4;
        if ((int)t1 > 0) {
            t5 = t4;
            t6 = 0x0;
            for (;;) {
                t6 = (t6 + 0x1);
                *(unsigned short *)((t5 + 0x0)) = ((((struct o224_short *)(a4))->v));
                t5 = (t5 + 0x2);
                if ((int)t6 >= (int)t1) {
                    break;
                }
            }
            t8 = 0x224;
        }
        t16 = t8;
        t17 = 0x0;
        t18 = (((int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u))) >> 1);
        t19 = ((0x234 + a4) + 0x4);
        t20 = ((0x224 + a4) + 0x4);
        for (;;) {
            t21 = 0x0;
            for (;;) {
                if ((int)t21 >= (int)(*(int *)((t19 + 0x0)))) {
                    break;
                }
                t16 = t18;
                t17 = (*(int *)((t20 + 0x0)));
                t16 = (t16 << 1);
                *(unsigned short *)((t4 + t16)) = t17;
                t25 = (t18 + 0x4);
                for (;;) {
                    t16 = t1;
                    t17 = 0xC0E5F1C;
                    t16 = ((int)((int)t25 % (int)t16));
                    t18 = t16;
                    t16 = (t16 << 1);
                    t17 = (*(short *)((t4 + t16)));
                    t16 = 0x224;
                    if (t17 == (*(int *)((a4 + t16)))) {
                        break;
                    }
                    t25 = t18;
                    t25 = (t25 + 0x1);
                }
                t21 = (t21 + 0x1);
            }
            t19 = (t19 + 0x4);
            t20 = (t20 + 0x4);
            if ((unsigned int)t19 >= (unsigned int)((0x234 + a4) + 0x10)) {
                break;
            }
        }
        t46 = a5;
        if ((int)t1 > (int)0x1) {
            t30 = (((struct oF0_int *)(a4))->v);
            R1008 = ((int)((int)t30 / (int)t1));
            t46 = (a5 - (((int)((unsigned int)((int)((unsigned int)t30 + (unsigned int)0x0)) + ((((int)0x0 > (int)t30)) ? 1u : 0u))) >> 1));
        }
        *(float *)(((int)stk + 28)) = 0.0f;
        *(float *)(((int)stk + 32)) = 0.0f;
        *(float *)(((int)stk + 36)) = (R1012);
        *(float *)(((int)stk + 40)) = ((((struct o30_float *)(a4))->v));
        *(float *)(((int)stk + 44)) = (((((struct o34_float *)(a4))->v)) + 1.0f);
        *(float *)(((int)stk + 48)) = ((((struct o38_float *)(a4))->v));
        R1004 = t4;
        if ((int)t1 > 0) {
            t45 = 0x0;
            for (;;) {
                t47 = R1004;
                R1004 = (t47 + 0x2);
                t48 = *(short *)((((t47 + 0x2) - 2) + 0x0));
                FUN_0c0dc5a0();
                nlRotateAY(t46);
                nlRotateAX((R1000));
                FUN_0c0db4d0((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x10));
                nlPopMatrix(0x1);
                if ((int)(short)t48 < (int)0x16) {
                    FUN_0c05561a(a4, (short)t48, (((int)stk + 0) + 0x28), (((int)stk + 0) + 0x10));
                } else {
                    FUN_0c0555ca(a4, (short)t48, (((int)stk + 0) + 0x28), (((int)stk + 0) + 0x10));
                }
                t45 = (t45 + 0x1);
                t46 = (t46 + (R1008));
                if ((int)t45 >= (int)t1) {
                    break;
                }
            }
        } else {
            t66 = t19;
            t67 = t21;
            t68 = t20;
        }
        t74 = (FUN_0c0e2a4c(t4));
    }
    return t74;
}

int FUN_0c066870(int a4, int a5)
{
    FUN_0c0e19d0(a4);
    FUN_0c0dc5a0();
    FUN_0c0dcc70(0.0f, 50.0f, 0.0f);
    nlGetMatrix((0xA4 + a4));
    nlPopMatrix(0x1);
    (((struct o38_float *)(a4))->v) = 10.0f;
    (((struct o4C_float *)(a4))->v) = 0.599999964f;
    (((struct o50_float *)(a4))->v) = 0.25f;
    (((struct o32_ushort *)(a4))->v) = (((int)((int)(*(int *)((a5 + 0x38))) % (int)0x6)) + 0x99);
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    *(unsigned int *)((a4 + 0x34)) = 0x4;
    (((struct o60_float *)(a4))->v) = 5.0f;
    (((struct o64_float *)(a4))->v) = 0.0f;
    (((struct o68_float *)(a4))->v) = 5.0f;
    (((struct o6C_float *)(a4))->v) = 1.0f;
    (((struct o3C_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) * 233.333328f);
    (((struct o70_float *)(a4))->v) = -5.0f;
    (((struct o74_float *)(a4))->v) = 0.0f;
    (((struct o78_float *)(a4))->v) = 5.0f;
    (((struct o7C_float *)(a4))->v) = 1.0f;
    (((struct o40_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) * 233.333328f);
    (((struct o80_float *)(a4))->v) = -5.0f;
    (((struct o84_float *)(a4))->v) = 0.0f;
    (((struct o88_float *)(a4))->v) = -5.0f;
    (((struct o8C_float *)(a4))->v) = 1.0f;
    (((struct o44_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) * 233.333328f);
    (((struct o90_float *)(a4))->v) = 5.0f;
    (((struct o94_float *)(a4))->v) = 0.0f;
    (((struct o98_float *)(a4))->v) = -5.0f;
    (((struct o9C_float *)(a4))->v) = 1.0f;
    (((struct o48_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) * 233.333328f);
    (((struct oE4_float *)(a4))->v) = (((float)(((int)((int)(FUN_0c0da2e0()) % (int)0x64)) - 50) + 0.5f) * 0.00999999978f);
    (((struct oEC_float *)(a4))->v) = (((float)(((int)((int)(FUN_0c0da2e0()) % (int)0x64)) - 50) + 0.5f) * 0.00999999978f);
    (((struct oF4_float *)(a4))->v) = ((float)(((int)((int)(FUN_0c0da2e0()) % (int)0x64)) - 50) * 0.000499999966f);
    (((struct oF8_float *)(a4))->v) = ((float)(((int)((int)(FUN_0c0da2e0()) % (int)0x64)) - 50) * 0.000499999966f);
    (((struct oFC_float *)(a4))->v) = ((float)(((int)((int)(FUN_0c0da2e0()) % (int)0x64)) - 50) * 0.000499999966f);
    (((struct o180_uint *)(a4))->v) = 0x960;
    return 0x180;
}

int FUN_0c060ca0(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register int t3;
    register int t8;
    register int t54;
    register int t24;
    register int t25;
    register int t27;
    register int t41;
    register int t47;
    register int t48;
    register int t53;
    register int t35;
    int R1000;

    R1000 = *(int *)((int)stk + 0);

    t0 = (((struct o230_int *)(a4))->v);
    if ((*(int *)((0xC247030 + (((((struct oBC_int *)(t0))->v)) << 2)))) != 4) {
        t3 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(t0, a5, a6, a7);
    }
    t8 = (((struct o22C_int *)(a4))->v);
    (((struct o22C_uint *)(a4))->v) = (t8 - 1);
    t54 = 0x22C;
    if ((int)(t8 - 1) > 0) {
    } else {
        *(unsigned int *)(((int)stk + 12)) = (((int)((int)(FUN_0c0da2e0()) % (int)0x5)) + 0x4);
        if (((((struct o240_int *)(a4))->v)) != 0) {
            (((struct o240_uint *)(a4))->v) = 0x0;
            t35 = (((struct o228_int *)(a4))->v);
            if (16384.0f > _builtin_fabsf((float)t35)) {
                (((struct o228_uint *)(a4))->v) = 0xFFFFC000;
            } else {
                (((struct o228_uint *)(a4))->v) = 0x4000;
            }
            R1000 = (((int)stk + 4) + 0x4);
            FUN_0c035828(((((struct o230_int *)(a4))->v)), 0x800, 0xFFFFFFFF, (((int)stk + 0) + 0x4), (((int)stk + 4) + 0x4), 1.0f, 0.0272199996f);
            if (((*(int *)(((int)stk + 4))) & 0x8000) != 0) {
                *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 8)));
            }
            if ((int)(*(int *)(((int)stk + 4))) < (int)0x3000) {
                *(unsigned int *)(((int)stk + 4)) = 0x3000;
            }
        } else {
            t24 = FUN_0c0da2e0();
            t25 = ((~(((~t24) + 0x1) & 0xF)) + 0x1);
            if ((int)t24 >= 0) {
                t25 = (t24 & 0xF);
            }
            t27 = (((struct o228_int *)(a4))->v);
            *(unsigned int *)(((int)stk + 4)) = ((((((int)((int)(FUN_0c0da2e0()) % (int)0x5)) << 8) << 2) << 1) + 0x1800);
            (((struct o228_uint *)(a4))->v) = (((((struct o228_int *)(a4))->v)) + 0x8000);
            t35 = ((((t25 << 8) << 2) << 1) + t27);
        }
        t41 = (*(int *)(((int)stk + 12)));
        R1000 = t41;
        FUN_0c05fd8c(((((struct o230_int *)(a4))->v)), ((((struct o234_int *)(a4))->v)), (*(int *)(((int)stk + 4))), t35, t41, 1.0f, 1.0f, 1.0f, 1.0f);
        FUN_0c0cc3f8(0xE31A9, 0x0, 0x0, 0x0);
        t47 = (((struct o23C_int *)(a4))->v);
        (((struct o23C_uint *)(a4))->v) = (t47 - 1);
        if ((int)(t47 - 1) <= 0) {
            t48 = ((int (*)(void))(FUN_0c0e19f2))();
        }
        t53 = (int)((int)(FUN_0c0da2e0()) % (int)0xA);
        (((struct o22C_uint *)(a4))->v) = (t53 + 0x5);
        t54 = (t53 + 0x5);
    }
    return t54;
}
