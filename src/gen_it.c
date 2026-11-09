/* Straight-line functions with calls and guards (batch gen_it): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(int);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXT_Stop(void);
int FUN_0c01cdc2(int);
int FUN_0c01ce40(int, int, float);
int FUN_0c01d636(int, int, int);
int FUN_0c02a19a(int);
int FUN_0c02c4f6(int);
int FUN_0c03217c(int, int, int);
int FUN_0c0321d4(int, int);
int FUN_0c038ce0(int, int);
int FUN_0c046134(int);
int FUN_0c046968(int);
int FUN_0c049b80(int);
int FUN_0c053dcc(int, int);
int FUN_0c061fb8(int);
int FUN_0c062034(int);
int FUN_0c068d54(int);
int FUN_0c0844dc(int, int, int, float);
int FUN_0c0845e8(int);
int FUN_0c0845f0(int);
int FUN_0c0845f8(int, int);
int FUN_0c084610(int, int);
int FUN_0c084622(int, float, float, float);
int FUN_0c084658(int, float, float, float);
int FUN_0c0846be(int, float);
int FUN_0c0846de(int, float, float, float, float);
int FUN_0c084730(int, int);
int FUN_0c08476e(float, float, float);
int FUN_0c0849da(void);
int FUN_0c085704(int);
int FUN_0c08fea2(int);
int FUN_0c090110(int);
int FUN_0c0903dc(int);
int FUN_0c0b145c(int, float);
int FUN_0c0b32a8(int);
int FUN_0c0b4b62(int);
int FUN_0c0b4b98(int);
int FUN_0c0bbbf4(int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int, int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
int FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcc80(int);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0de3c0(int, int);
int FUN_0c0de9c0(void);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e262a(int);
extern int FUN_0c0e5f1c();
int FUN_0c0e6248(void);
int FUN_0c22cd5e(int, int);
int FUN_0c22cfdc(void);
int FUN_0c22cff4(int, int);
int adxt_start_sj(int, int);
int nlAddVector(int, int);
int nlGetMatrix(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c068a90(void);
int FUN_0c049308(int a4);
int FUN_0c0618dc(int a4, int a5, int a6, int a7);
int FUN_0c067654(void);
int FUN_0c02ea20(int a4, int a5, int a6, int a7);
int FUN_0c03b40c(int a4, int a5);
int FUN_0c0786a0(int a4, int a5, int a6, int a7);
void FUN_0c07b640(void);
int FUN_0c22d2b8(int a4, int a5, int a6);
int FUN_0c0172a0(int a4, int a5, int a6, int a7);
int FUN_0c0b07a8(int a4, int a5, int a6, int a7);
int FUN_0c213640(int a4, int a5, int a6);
int FUN_0c04f9dc(int a4);
int FUN_0c05e41c(int a4, int a5, int a6, int a7);
int FUN_0c0b1eec(int a4, int a5, int a6, int a7);
int FUN_0c02c55a(int a4, float f4, float f5);
int FUN_0c05c200(int a4, int a5);
int FUN_0c0aba56(int a4, float f4);
int FUN_0c04e236(int a4);
void FUN_0c05f930(int a4, int a5);
int FUN_0c0759be(int a4);
int FUN_0c0b4c50(int a4, int a5, int a6, int a7);
struct o134_short { char p[0x134]; short v; };
struct o136_short { char p[0x136]; short v; };
struct o138_short { char p[0x138]; short v; };
struct o13A_short { char p[0x13A]; short v; };
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1BC_uint { char p[0x1BC]; unsigned int v; };
struct o1C0_uint { char p[0x1C0]; unsigned int v; };
struct o1C4_int { char p[0x1C4]; int v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_int { char p[0x1E8]; int v; };
struct o1E8_uint { char p[0x1E8]; unsigned int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o1FC_uint { char p[0x1FC]; unsigned int v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o21C_uint { char p[0x21C]; unsigned int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o228_uint { char p[0x228]; unsigned int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o230_uint { char p[0x230]; unsigned int v; };
struct o234_uint { char p[0x234]; unsigned int v; };
struct o238_uint { char p[0x238]; unsigned int v; };
struct o24C_float { char p[0x24C]; float v; };
struct o250_float { char p[0x250]; float v; };
struct o254_float { char p[0x254]; float v; };
struct o29C_int { char p[0x29C]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o308_int { char p[0x308]; int v; };
struct o324_uint { char p[0x324]; unsigned int v; };
struct o328_uint { char p[0x328]; unsigned int v; };
struct o32C_int { char p[0x32C]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o340_int { char p[0x340]; int v; };
struct o350_int { char p[0x350]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o390_float { char p[0x390]; float v; };
struct o394_int { char p[0x394]; int v; };
struct o394_uint { char p[0x394]; unsigned int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o3B8_int { char p[0x3B8]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o42_short { char p[0x42]; short v; };
struct o42_ushort { char p[0x42]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o46_short { char p[0x46]; short v; };
struct o474_int { char p[0x474]; int v; };
struct o474_uint { char p[0x474]; unsigned int v; };
struct o478_int { char p[0x478]; int v; };
struct o478_uint { char p[0x478]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_short { char p[0x48]; short v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o488_uint { char p[0x488]; unsigned int v; };
struct o4A_short { char p[0x4A]; short v; };
struct o4B0_float { char p[0x4B0]; float v; };
struct o4B4_float { char p[0x4B4]; float v; };
struct o4B8_float { char p[0x4B8]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o4C4_uint { char p[0x4C4]; unsigned int v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4D0_uint { char p[0x4D0]; unsigned int v; };
struct o4D4_uint { char p[0x4D4]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F0_uint { char p[0x4F0]; unsigned int v; };
struct o4F4_uint { char p[0x4F4]; unsigned int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o534_uint { char p[0x534]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o544_int { char p[0x544]; int v; };
struct o54C_int { char p[0x54C]; int v; };
struct o558_int { char p[0x558]; int v; };
struct o558_uint { char p[0x558]; unsigned int v; };
struct o55C_uint { char p[0x55C]; unsigned int v; };
struct o564_uint { char p[0x564]; unsigned int v; };
struct o56C_uint { char p[0x56C]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o580_int { char p[0x580]; int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5CC_uint { char p[0x5CC]; unsigned int v; };
struct o60_int { char p[0x60]; int v; };
struct o60_short { char p[0x60]; short v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o62_short { char p[0x62]; short v; };
struct o62_ushort { char p[0x62]; unsigned short v; };
struct o64_float { char p[0x64]; float v; };
struct o64_short { char p[0x64]; short v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_float { char p[0x78]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_float { char p[0x7C]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oAC_uint { char p[0xAC]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
struct oD0_uint { char p[0xD0]; unsigned int v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o4_int { char p[0x4]; int v; };
struct oC_int { char p[0xC]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o22C_int { char p[0x22C]; int v; };
struct o244_int { char p[0x244]; int v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o70_short { char p[0x70]; short v; };
struct oD8_int { char p[0xD8]; int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };




int FUN_0c068a90(void)
{
    int stk[11];
    register float u0;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t17;
    register int t1;
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    u0 = *(float *)0xC068BA4;
    t2 = 0x0;
    t3 = 0xC0FA3F0;
    for (;;) {
        R1004 = ((t2 << 1) + t2);
        t4 = 0x0;
        for (;;) {
            t6 = FUN_0c0e19aa(0xC068B62, 0x24C, (*(int *)0xC23ECE4));
            FUN_0c0e19d0(t6);
            (((struct o22C_uint *)(t6))->v) = 0x0;
            (((struct o230_uint *)(t6))->v) = 0x3;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x30)) = *(struct mv3 *)(t3); }
            { struct mvb6 { char c[6]; }; *(struct mvb6 *)((t6 + 0x6C)) = *(struct mvb6 *)((t3 + 0xC)); }
            (((struct o21C_uint *)(t6))->v) = (unsigned short)(*(short *)((t3 + 0x12)));
            (((struct o78_uint *)(t6))->v) = 0xC1B6844;
            (((struct o74_uint *)(t6))->v) = 0x15;
            (((struct oC0_uint *)(t6))->v) = t4;
            (((struct oBC_uint *)(t6))->v) = (((R1004) + t4) + 0x10);
            FUN_0c01ce40(t6, 0xC1BC6F4, u0);
            if ((int)t4 > 0) {
                (((struct o228_uint *)(t6))->v) = t1;
            }
            t1 = t6;
            t3 = (t3 + 0x14);
            t17 = t4;
            if (t4 == 2) {
                t17 = t2;
                if (t2 == 1) {
                    t17 = (FUN_0c068d54(t6));
                }
            }
            t4 = (t4 + 0x1);
            if ((int)t4 >= (int)0x3) {
                break;
            }
        }
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)0x3) {
            break;
        }
    }
    return t17;
}

int FUN_0c049308(int a4)
{
    if (((((struct o474_int *)(a4))->v)) == 0) {
        (((struct o474_uint *)(a4))->v) = 0xC049276;
        (((struct o5CC_uint *)(a4))->v) = 0x0;
        (((struct o558_uint *)(a4))->v) = 0xC;
        (((struct o4D4_uint *)(a4))->v) = (FUN_0c046134(a4));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
        (((struct o24C_float *)(a4))->v) = (*(float *)0xC049424);
        (((struct o250_float *)(a4))->v) = (*(float *)0xC049428);
        (((struct o254_float *)(a4))->v) = 0.0f;
    }
    if (((((struct o478_int *)(a4))->v)) == 0) {
        (((struct o488_uint *)(a4))->v) = (FUN_0c0e262a(0x8));
        (((struct o478_uint *)(a4))->v) = 0xC0492CE;
        FUN_0c046968(a4);
    }
    if ((int)((((struct o558_int *)(a4))->v)) >= 0) {
        if (!(((float)((((struct o308_int *)(a4))->v)) * (*(float *)0xC049438)) > (float)((((struct o304_int *)(a4))->v)))) {
            (((struct o4F0_uint *)(a4))->v) = 0x2E;
        } else {
            (((struct o558_uint *)(a4))->v) = 0x0;
        }
    } else {
        if ((float)((((struct o304_int *)(a4))->v)) > ((float)((((struct o308_int *)(a4))->v)) * (*(float *)0xC04943C))) {
            (((struct o4F0_uint *)(a4))->v) = 0x2F;
        } else {
            (((struct o4F0_uint *)(a4))->v) = 0x30;
        }
    }
    (((struct o4F4_uint *)(a4))->v) = 0x32;
    return 0x4F4;
}

int FUN_0c0618dc(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t14;

    if (((((struct oD8_int *)(a4))->v)) != 0) {
        if (((((struct oD8_int *)(a4))->v)) == 1) {
            if (((((struct o244_int *)(a4))->v)) == 1) {
                FUN_0c062034(a4);
            } else {
                FUN_0c061fb8(a4);
            }
        }
        (((struct oD8_uint *)(a4))->v) = 0x0;
    } else {
        t14 = (((struct o22C_int *)(a4))->v);
        (((struct o22C_uint *)(a4))->v) = (t14 - 1);
        if ((int)(t14 - 1) <= 0) {
            FUN_0c0e19f2();
        }
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAZ(((((struct o70_short *)(a4))->v)));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = (-((((struct o50_float *)(a4))->v)));
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    (((struct o18_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 4)));
    (((struct o1C_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 8)));
    (((struct o20_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    nlAddVector((a4 + 0x30), (((int)stk + 4) + 0x18));
    return (FUN_0c01cdc2(a4));
}

int FUN_0c067654(void)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC067784, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)(0xC1FFE0C); }
    (((struct o78_uint *)(t1))->v) = (unsigned short)(*(short *)0xC1FFE1E);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x54)) = *(struct mv3 *)(0xC1FFE20); }
    { struct mvb6 { char c[6]; }; *(struct mvb6 *)((t1 + 0x60)) = *(struct mvb6 *)(0xC1FFE18); }
    FUN_0c0de9c0();
    FUN_0c0845e8(0x1);
    FUN_0c08476e(0.5f, 0.5f, 0.5f);
    FUN_0c0845f0(0x1);
    FUN_0c084610(0x0, 0x4);
    FUN_0c084658(0x0, 0.0f, (-1.0f), 0.0f);
    FUN_0c0846be(0x0, 60.0f);
    FUN_0c0846de(0x0, 0.0f, 0.849999964f, 0.73999995f, 0.619999945f);
    FUN_0c084730(0x0, 0x1800);
    FUN_0c0845f8(0x0, 0x1);
    return FUN_0c084622(0x0, ((((struct o54_float *)(t1))->v)), ((((struct o58_float *)(t1))->v)), ((((struct o5C_float *)(t1))->v)));
}

int FUN_0c02ea20(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t6;

    if ((int)((((struct o544_int *)(a4))->v)) >= 0) {
        t1 = (((struct o4F0_int *)(a4))->v);
        t6 = *(int *)((((*(int *)((((((((struct o54C_int *)(a4))->v)) - 1) << 2) + (*(int *)((0xC1F8E48 + (((t1 << 2) + t1) << 2))))))) + ((((((struct o544_int *)(a4))->v)) << 2) << 2)) + 0x0));
        (((struct o4C8_uint *)(a4))->v) = 0x2;
        if (t6 == ((((struct o0_int *)0xC1F31B4)->v))) {
            FUN_0c0321d4(a4, 0x8);
        } else {
            if (t6 == ((((struct o10_int *)0xC1F31B4)->v))) {
                FUN_0c0321d4(a4, 0x9);
                FUN_0c08fea2(a4);
            } else {
                if (t6 == ((((struct o20_int *)0xC1F31B4)->v))) {
                    FUN_0c0321d4(a4, 0xA);
                    FUN_0c090110(a4);
                } else {
                    if (t6 == ((((struct o30_int *)0xC1F31B4)->v))) {
                        FUN_0c0321d4(a4, 0xB);
                        FUN_0c0903dc(a4);
                    } else {
                        FUN_0c03217c(a4, ((((struct o54C_int *)(a4))->v)), ((((struct o544_int *)(a4))->v)));
                    }
                }
            }
        }
        (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
        return 0x4F8;
    }
    (((struct o534_uint *)(a4))->v) = 0x0;
    return FUN_0c02a19a(a4);
}


int FUN_0c0786a0(int a4, int a5, int a6, int a7)
{
    register int t9;

    if ((int)(*(int *)0xC23ED50) > (int)0x4F) {
        FUN_0c0e19f2();
    }
    t9 = *(short *)(((*(int *)0xC23ECFC) + 0x0));
    if (t9 == 2) {
        nlAddVector((a4 + 0x30), (a4 + 0x48));
        if (0.0f > ((((struct o34_float *)(a4))->v))) {
            (((struct o34_float *)(a4))->v) = 0.0f;
            (((struct o48_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o68_uint *)(a4))->v) = 0x0;
            (((struct o6C_uint *)(a4))->v) = 0x0;
            (((struct o70_uint *)(a4))->v) = 0x0;
        } else {
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.099999994f);
            (((struct o60_ushort *)(a4))->v) = (((((struct o60_short *)(a4))->v)) + ((((struct o68_int *)(a4))->v)));
            (((struct o62_ushort *)(a4))->v) = (((((struct o62_short *)(a4))->v)) + ((((struct o6C_int *)(a4))->v)));
            (((struct o64_ushort *)(a4))->v) = (((((struct o64_short *)(a4))->v)) + ((((struct o70_int *)(a4))->v)));
        }
        nlPushMatrix(0x0);
        FUN_0c0dcca0((a4 + 0x30));
        nlRotateAZ(((((struct o64_short *)(a4))->v)));
        nlRotateAY(((((struct o62_short *)(a4))->v)));
        nlRotateAX(((((struct o60_short *)(a4))->v)));
        FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
        return nlPopMatrix(0x1);
    }
    return t9;
}

void FUN_0c07b640(void)
{
    register int t0;
    register int t2;

    t0 = 0x0;
    for (;;) {
        t2 = FUN_0c0e19aa(0xC07B70E, 0x24C, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t2);
        (((struct oBC_uint *)(t2))->v) = t0;
        (((struct o21C_uint *)(t2))->v) = 0x8;
        (((struct o234_uint *)(t2))->v) = ((FUN_0c0da2e0()) & 0x3FF);
        if ((int)(*(int *)0xC23ED50) >= (int)0x5F) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)((0xC2008B8 + (((t0 << 1) + t0) << 2))); }
            (((struct o228_uint *)(t2))->v) = 0xC200870;
            (((struct o220_uint *)(t2))->v) = 0x2;
            (((struct o238_uint *)(t2))->v) = 0x1;
            FUN_0c01d636(t2, 0xC19723C, 0x0);
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)((0xC200870 + (((t0 << 1) + t0) << 2))); }
            (((struct o228_uint *)(t2))->v) = 0xC2008B8;
            (((struct o238_uint *)(t2))->v) = 0x0;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x60)) = *(struct mv3 *)((t2 + 0x30)); }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x6) {
            break;
        }
    }
}

int FUN_0c22d2b8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c22cfdc();
    if (a5 == 0) {
        *(volatile int *)((a4 + 0x14));
        *(volatile int *)((a4 + 0x20));
        *(volatile int *)((a6 + 0x4));
        t1 = ((int (*)(void))(FUN_0c0e5f1c))();
        *(volatile int *)((a6 + 0x0));
        *(volatile int *)((a4 + 0x1C));
        t2 = ((int (*)(int))(FUN_0c0e5f1c))(t1);
        if (a4 == t2) {
            *(unsigned int *)((a4 + 0x14)) = a4;
            *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + (*(int *)((a6 + 0x4))));
        } else {
            if ((*(int *)((a4 + 0x28))) == 0) {
            } else {
                t1 = ((int (*)(int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD);
            }
        }
    } else {
        if (a5 == 1) {
            *(volatile int *)((a4 + 0x18));
            *(volatile int *)((a4 + 0x20));
            *(volatile int *)((a6 + 0x4));
            t1 = ((int (*)(void))(FUN_0c0e5f1c))();
            *(volatile int *)((a6 + 0x0));
            *(volatile int *)((a4 + 0x1C));
            t2 = ((int (*)(int))(FUN_0c0e5f1c))(t1);
            if (a4 == t2) {
                *(unsigned int *)((a4 + 0x18)) = a4;
                *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) + (*(int *)((a6 + 0x4))));
            } else {
                if ((*(int *)((a4 + 0x28))) != 0) {
                    t1 = ((int (*)(int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD);
                }
            }
        } else {
            *(unsigned int *)((a6 + 0x4)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x0;
            if ((*(int *)((a4 + 0x28))) != 0) {
                t1 = ((int (*)(int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD);
            }
        }
    }
    return FUN_0c22cff4(a4, t0);
}

int FUN_0c0172a0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((((((struct oC_int *)0xC23ED50)->v)) & 6) != 0) {
        FUN_0c0e19f2();
    }
    if (((((struct o0_int *)0xC23ED50)->v)) == ((((struct o80_int *)(a4))->v))) {
        t2 = (((struct o98_int *)(a4))->v);
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 != 2) {
                } else {
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 0.625f);
                    t2 = (((struct oA0_int *)(a4))->v);
                    (((struct oA0_uint *)(a4))->v) = (t2 - 1);
                    if ((int)(t2 - 1) <= 0) {
                        (((struct o98_uint *)(a4))->v) = (((((struct o98_int *)(a4))->v)) + 0x1);
                    }
                }
            } else {
                if (((((((struct oC_int *)0xC23ED50)->v)) & 16) != 0) && (t0 = (((struct o4_int *)0xC23ED50)->v), t1 = (((struct o84_int *)(a4))->v), t0 == t1)) {
                    (((struct o98_uint *)(a4))->v) = (((((struct o98_int *)(a4))->v)) + 0x1);
                    (((struct oA0_uint *)(a4))->v) = 0x14;
                }
            }
            nlPushMatrix(0x0);
            nlMultiMatrix((*(int *)0xC247BF4));
            FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
            FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
            return nlPopMatrix(0x1);
        }
        t0 = (((struct o9C_int *)(a4))->v);
        (((struct o9C_uint *)(a4))->v) = (t0 + 0x1);
        if ((int)(t0 + 0x1) > (int)0x3) {
            (((struct o98_uint *)(a4))->v) = (((((struct o98_int *)(a4))->v)) + 0x1);
            return 0x98;
        }
        return 0x9C;
    }
    return 0x80;
}


int FUN_0c213640(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    ADXT_Stop();
    t0 = *(int *)((a5 + 0x4));
    if (((int)a6 < (int)((((unsigned char)(signed char)((unsigned int)((unsigned int)t0 >> 16) >> 8) | (((int)t0 >> 8) & 0xFF00)) | ((t0 << 8) & 0xFF0000)) | ((t0 << 16) << 8))) && ((int)a6 >= 0)) {
        ADXCRS_Lock(t0);
        t0 = *(int *)((a5 + (((a6 + 0x1) << 1) << 2)));
        t1 = FUN_0c22cd5e((((((unsigned char)(signed char)((unsigned int)((unsigned int)t0 >> 16) >> 8) | (((int)t0 >> 8) & 0xFF00)) | ((t0 << 8) & 0xFF0000)) | ((t0 << 16) << 8)) + a5), 0x40000000);
        if (t1 == 0) {
            ADXCRS_Unlock();
            ADXERR_CallErrFunc(0xC236CE8);
        } else {
            adxt_start_sj(a4, t1);
            *(unsigned char *)((a4 + 0x2)) = 0x2;
        }
        return ADXCRS_Unlock();
    }
    return 0xFF00;
}

int FUN_0c04f9dc(int a4)
{
    register int t0;

    t0 = *(int *)0xC23ECFC;
    if ((*(int *)(((((short)(*(short *)((t0 + 0x2))) * (short)0x1C) + 0xC206228) + 0x0))) == 0) {
        if ((*(int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC2475A4))) != 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)(((((short)(*(short *)((t0 + 0x2))) * (short)0x1C) + 0xC206228) + 0x4)); }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)(((((short)(*(short *)((t0 + 0x2))) * (short)0x1C) + 0xC206228) + 0x10)); }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
        (((struct oAC_uint *)(a4))->v) = 0x0;
        (((struct o1BC_uint *)(a4))->v) = 0x0;
        (((struct o1C0_uint *)(a4))->v) = 0x0;
        (((struct o1B0_uint *)(a4))->v) = 0x0;
        (((struct o324_uint *)(a4))->v) = 0x0;
        (((struct o328_uint *)(a4))->v) = 0x0;
        (((struct o20C_uint *)(a4))->v) = 0x40000000;
        FUN_0c0b32a8(a4);
    } else {
        (((struct o1B0_uint *)(a4))->v) = 0x0;
        (((struct o394_uint *)(a4))->v) = 0x0;
        (((struct oAC_uint *)(a4))->v) = 0x0;
        if ((((((struct o20C_int *)(a4))->v)) & 128) != 0) {
            FUN_0c049b80(a4);
        } else {
            (((struct o210_uint *)(a4))->v) = ((((struct o3B8_int *)(a4))->v));
        }
        *(unsigned int *)((a4 + 0x0)) = 0xC04A118;
    }
    FUN_0c085704(a4);
    return FUN_0c0bbbf4(a4);
}

int FUN_0c05e41c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = (((struct o54_int *)(a4))->v);
    (((struct o54_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o3C_float *)(a4))->v)), ((((struct o40_float *)(a4))->v)), ((((struct o44_float *)(a4))->v)));
    nlRotateAY(((((struct o4A_short *)(a4))->v)));
    nlRotateAX(((((struct o48_short *)(a4))->v)));
    nlRotateAY(0x4000);
    t0 = (((struct o50_int *)(a4))->v);
    t1 = (((struct o4C_short *)(a4))->v);
    (((struct o4C_ushort *)(a4))->v) = (t1 + t0);
    nlRotateAX((short)(t1 + t0));
    (((struct o50_uint *)(a4))->v) = (((((struct o50_int *)(a4))->v)) + 0x200);
    u0 = (((struct o38_float *)(a4))->v);
    nlScale(((((struct o34_float *)(a4))->v)), u0, u0);
    FUN_0c0de000(((((struct o34_float *)(a4))->v)));
    FUN_0c0de3c0(0x1, 0x1);
    FUN_0c0c475c((*(int *)((a4 + 0x30))), 0.199999988f);
    nlScale(1.0f, 0.799999952f, 0.799999952f);
    FUN_0c0de000(((((struct o34_float *)(a4))->v)));
    FUN_0c0c475c((*(int *)((a4 + 0x30))), 0.199999988f);
    FUN_0c0de3c0(0x4, 0x5);
    return nlPopMatrix(0x1);
}


int FUN_0c02c55a(int a4, float f4, float f5)
{
    register int t3;
    register float u15;
    register int t28;
    register float u18;

    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        (((struct o474_uint *)(a4))->v) = 0x0;
        t28 = 0x474;
    } else {
        if ((int)(*(int *)0xC23EDA4) >= (int)0xA) {
            t3 = FUN_0c02c4f6(a4);
            if (t3 != 0) {
                (((struct o4D0_uint *)(a4))->v) = 0x0;
                (((struct o4F8_uint *)(a4))->v) = 0xC;
                (((struct o564_uint *)(a4))->v) = 0x0;
                (((struct o56C_uint *)(a4))->v) = 0x0;
            }
        }
        (((struct oA4_uint *)(a4))->v) = (((((struct oA4_int *)(a4))->v)) & 0xFFFFF7F7);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
        if (((((struct o4C8_int *)(a4))->v)) != 2) {
            u15 = *(float *)0xC02C654;
            if (((((((struct o390_float *)(a4))->v)) + u15) > ((((struct o34_float *)(a4))->v))) && (u18 = (((struct o4C_float *)(a4))->v), !(u18 > 0.0f))) {
                (((struct o4C_float *)(a4))->v) = ((((((struct o390_float *)(a4))->v)) - ((((struct o34_float *)(a4))->v))) + u15);
                (((struct o64_float *)(a4))->v) = 0.0f;
            }
        }
        (((struct o4B0_float *)(a4))->v) = 0.0f;
        (((struct o4B4_float *)(a4))->v) = 0.0f;
        (((struct o4B8_float *)(a4))->v) = 0.0f;
        t28 = 0x4B8;
    }
    return t28;
}

int FUN_0c05c200(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0e19aa(0xC05C2F8, 0x2BC, (*(int *)0xC23ECE4));
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
    t1 = (((struct oBC_int *)(a4))->v);
    t2 = (((struct o1E8_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F268) + (((t2 << 1) + t2) << 2))); }
    (((struct oD0_uint *)(t0))->v) = ((((struct o350_int *)(a4))->v));
    return 0xD0;
}

int FUN_0c0aba56(int a4, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    *(unsigned int *)0xC247CF8 = 0x0;
    t0 = *(int *)((a4 + 0x30));
    t1 = *(int *)0xC24FA38;
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            if (t1 == 0x21C) {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
            } else {
                u0 = *(float *)((a4 + 0x3C));
                *(float *)((a4 + 0x3C)) = (u0 + 0.099999994f);
                if (!(66.877533f > (u0 + 0.099999994f))) {
                    *(float *)((a4 + 0x3C)) = ((*(float *)((a4 + 0x3C))) - 66.877533f);
                }
            }
        }
        t0 = *(int *)0xC247CAC;
        FUN_0c0dbda0((0x2AC + t0));
        FUN_0c0dcc80((a4 + 0x38));
        return nlGetMatrix((0x2AC + t0));
    }
    if (t1 == 0xB4) {
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
    }
    return FUN_0c0dbda0(((*(int *)0xC247CAC) + 0x2AC));
}

int FUN_0c04e236(int a4)
{
    register int t0;
    register int t1;

    if (((int)((((struct o29C_int *)(a4))->v)) > (int)0x2) && (t0 = (((struct o394_int *)(a4))->v), (int)t0 >= 0)) {
        t0 = *(int *)((((((((struct oC0_int *)(a4))->v)) >> 1) << 2) + 0xC1FE200));
        (((struct o20C_uint *)(a4))->v) = 0x4;
        (((struct o210_uint *)(a4))->v) = 0x0;
        if ((int)((((struct o394_int *)(a4))->v)) >= 0) {
            (((struct o394_uint *)(a4))->v) = 0x0;
        }
        (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)((t0 + (((((((struct o32C_int *)(a4))->v)) * 0x16) + ((((struct o340_int *)(a4))->v))) << 1))));
        (((struct o2D4_uint *)(a4))->v) = 0x2;
        (((struct o2CC_uint *)(a4))->v) = 0x1;
        (((struct o3AC_uint *)(a4))->v) = 0x0;
        (((struct o3B0_uint *)(a4))->v) = 0x0;
        return FUN_0c053dcc(a4, 0x1);
    }
    t0 = (((struct o2EC_int *)(a4))->v);
    t1 = t0;
    if ((t0 & 12) != 0) {
        (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)((((((((struct o340_int *)(a4))->v)) << 1) + (0xC1FE210 + ((((((struct oC0_int *)(a4))->v)) >> 1) * 0x2C))) + 0x0)));
        (((struct o20C_uint *)(a4))->v) = (((((struct o20C_int *)(a4))->v)) & 0xFFFFFFEF);
        (((struct o20C_uint *)(a4))->v) = (((((struct o20C_int *)(a4))->v)) | 0x1);
        (((struct o210_uint *)(a4))->v) = 0x0;
        (((struct o2D4_uint *)(a4))->v) = 0x2;
        if ((int)((((struct o394_int *)(a4))->v)) >= 0) {
            (((struct o394_uint *)(a4))->v) = 0x0;
        }
        t1 = 0x394;
    }
    return t1;
}

void FUN_0c05f930(int a4, int a5)
{
    register int t1;
    register int t13;
    register int t14;

    t1 = FUN_0c0e19aa(0xC05FBFE, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    (((struct oBC_uint *)(t1))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct o200_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    (((struct o1EC_uint *)(t1))->v) = (~((int)0x1 << (int)((((struct o1C4_int *)(a4))->v))));
    (((struct o1E8_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    (((struct o1F4_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    (((struct o204_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    (((struct o1E4_float *)(t1))->v) = ((((struct oC_float *)(a5))->v));
    (((struct o1FC_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    (((struct o1F8_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    (((struct o22C_uint *)(t1))->v) = ((unsigned short)(*(short *)((a5 + 0x8))) << 1);
    (((struct o220_uint *)(t1))->v) = 0x9C;
    t13 = (((struct oBC_int *)(a4))->v);
    t14 = (((struct o1E8_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((((((((t13 << 1) + t13) << 2) << 2) << 2) + 0xC23F268) + (((t14 << 1) + t14) << 2))); }
}

int FUN_0c0759be(int a4)
{
    register int t0;

    t0 = (((struct o80_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                t0 = (((struct o6C_int *)(a4))->v);
                (((struct o6C_uint *)(a4))->v) = (t0 + 0x80);
                if ((int)(t0 + 0x80) > 0) {
                    (((struct o6C_uint *)(a4))->v) = 0x0;
                    (((struct o80_uint *)(a4))->v) = 0x0;
                }
            }
        } else {
            t0 = (((struct o6C_int *)(a4))->v);
            (((struct o6C_uint *)(a4))->v) = (t0 - 0x200);
            if ((int)(t0 - 0x200) <= (int)0xFFFFD000) {
                (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
            }
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((((((struct o62_short *)(a4))->v)) + ((((struct o6C_int *)(a4))->v))));
    FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
    return nlPopMatrix(0x1);
}

int FUN_0c0b4c50(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t5;
    register int t6;
    register int t12;
    register int t14;

    t0 = (((struct o80_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        (((struct o90_float *)(a4))->v) = (((((struct o90_float *)(a4))->v)) - ((((struct o94_float *)(a4))->v)));
        if (!(((((struct o90_float *)(a4))->v)) > 0.399999976f)) {
            FUN_0c0cc3f8(0x928A9, a5, a6, a7);
            t5 = (((struct oA0_int *)(a4))->v);
            if (t5 != 0) {
                if (t5 != 1) {
                    t6 = FUN_0c0da2e0();
                    if ((int)(t6 & 0x1F) < (int)0x14) {
                        return FUN_0c0b4b62(a4);
                    }
                    return FUN_0c0b4b98(a4);
                }
                FUN_0c0b4b98(a4);
                (((struct o80_uint *)(a4))->v) = 0x1;
                return 0x80;
            }
            FUN_0c0b4b62(a4);
            (((struct o80_uint *)(a4))->v) = 0x1;
            return 0x80;
        }
        return FUN_0c0844dc((*(int *)0xC247F20), (*(int *)0xC247F24), 0x0, ((((struct o90_float *)(a4))->v)));
    }
    t12 = (((struct o98_int *)(a4))->v);
    (((struct o98_uint *)(a4))->v) = (t12 - 1);
    t14 = 0x98;
    if ((int)(t12 - 1) <= 0) {
        (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        t14 = 0x80;
    }
    return t14;
}

int FUN_0c0b07a8(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register float u11;
    register int t12;
    register float u13;
    register float u16;
    register float u24;

    t0 = (((struct o48_int *)(a4))->v);
    (((struct o48_uint *)(a4))->v) = (t0 + 0x39);
    if ((int)(t0 + 0x39) >= (int)0x3FFF) {
        FUN_0c0e19f2();
    }
    FUN_0c0da410(((((struct o48_int *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (FUN_0c0d9e90(((((struct o48_int *)(a4))->v))));
    u11 = *(float *)0xC0B08A8;
    t12 = (((struct o48_int *)(a4))->v);
    u13 = (((-(float)(t12 * t12)) + u11) / u11);
    u13 = -u13;
    u16 = (*(float *)0xC0B08AC);
    u16 = u16 + (*(float *)0xC0B08B0) * (u13 + 1.0f);
    (((struct o42_ushort *)(a4))->v) = (int)u16;
    FUN_0c0db470(0xC23F4A8, (a4 + 0x34));
    FUN_0c0dce80((a4 + 0x34), (a4 + 0x34), (u13 + 1.0f));
    FUN_0c0dc5a0();
    FUN_0c0dcca0((a4 + 0x34));
    nlRotateAY(((((struct o42_short *)(a4))->v)));
    nlRotateAZ(0x1555);
    u24 = (((struct o50_float *)(a4))->v);
    nlScale(u24, u24, u24);
    FUN_0c0de000(((((struct o50_float *)(a4))->v)));
    FUN_0c0849da();
    FUN_0c0c475c(((((struct o46_short *)(a4))->v)), ((((struct o54_float *)(a4))->v)));
    return nlPopMatrix(0x1);
}

int FUN_0c03b40c(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    FUN_0c038ce0(a4, a5);
    if (((((struct o580_int *)(a4))->v)) != 1) {
        if ((int)((((struct o54C_int *)(a4))->v)) < (int)0x1) {
            t0 = (((struct o4F0_int *)(a4))->v);
            (((struct o2C4_uint *)(a4))->v) = (unsigned short)((((struct o136_short *)((*(int *)(((0xC1F8E3C + (((t0 << 2) + t0) << 2)) + 0x10)))))->v));
            (((struct o3AC_uint *)(a4))->v) = 0x3C;
            t0 = 0x28;
        } else {
            t1 = (((struct o4F0_int *)(a4))->v);
            (((struct o2C4_uint *)(a4))->v) = (unsigned short)((((struct o134_short *)((*(int *)(((0xC1F8E3C + (((t1 << 2) + t1) << 2)) + 0x10)))))->v));
            (((struct o3AC_uint *)(a4))->v) = 0x1E;
            t0 = 0x14;
        }
        t1 = t0;
    } else {
        if ((int)((((struct o54C_int *)(a4))->v)) < (int)0x1) {
            t0 = (((struct o4F0_int *)(a4))->v);
            (((struct o2C4_uint *)(a4))->v) = (unsigned short)((((struct o13A_short *)((*(int *)(((0xC1F8E3C + (((t0 << 2) + t0) << 2)) + 0x10)))))->v));
            (((struct o3AC_uint *)(a4))->v) = 0x3C;
            t0 = 0x28;
        } else {
            t2 = (((struct o4F0_int *)(a4))->v);
            (((struct o2C4_uint *)(a4))->v) = (unsigned short)((((struct o138_short *)((*(int *)(((0xC1F8E3C + (((t2 << 2) + t2) << 2)) + 0x10)))))->v));
            (((struct o3AC_uint *)(a4))->v) = 0x1E;
            t0 = 0x14;
        }
        t1 = t0;
    }
    (((struct o3B0_uint *)(a4))->v) = t1;
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o20C_uint *)(a4))->v) = 0x200;
    (((struct o210_uint *)(a4))->v) = 0x7;
    (((struct o4C4_uint *)(a4))->v) = 0x1;
    (((struct o4C8_uint *)(a4))->v) = 0xA;
    (((struct o55C_uint *)(a4))->v) = 0x63;
    return 0x55C;
}

int FUN_0c0b1eec(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x30));
    switch (t0) {
    case 0:
        (((struct o58_uint *)(a4))->v) = 0x3C;
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        (((struct o78_float *)(a4))->v) = (((((struct o78_float *)(a4))->v)) + 0.0166666657f);
        t0 = (((struct o58_int *)(a4))->v);
        (((struct o58_uint *)(a4))->v) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            (((struct o58_uint *)(a4))->v) = 0x3C;
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        }
        break;
    case 1:
        (((struct o78_float *)(a4))->v) = (((((struct o78_float *)(a4))->v)) + 0.0166666657f);
        t0 = (((struct o58_int *)(a4))->v);
        (((struct o58_uint *)(a4))->v) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            (((struct o58_uint *)(a4))->v) = 0x3C;
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        }
        break;
    case 2:
        (((struct o7C_float *)(a4))->v) = (((((struct o7C_float *)(a4))->v)) + 0.0166666657f);
        t0 = (((struct o58_int *)(a4))->v);
        (((struct o58_uint *)(a4))->v) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            (((struct o58_uint *)(a4))->v) = 0x12C;
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        }
        break;
    case 3:
        if ((int)((((struct o58_int *)(a4))->v)) < (int)0x3C) {
            (((struct o78_float *)(a4))->v) = (((((struct o78_float *)(a4))->v)) - 0.0166666657f);
            (((struct o7C_float *)(a4))->v) = (((((struct o7C_float *)(a4))->v)) - 0.0166666657f);
        }
        t0 = (((struct o58_int *)(a4))->v);
        (((struct o58_uint *)(a4))->v) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            FUN_0c0e19f2();
        }
        break;
    }
    FUN_0c0b145c(((((struct o60_int *)(a4))->v)), ((((struct o78_float *)(a4))->v)));
    return FUN_0c0b145c((((((struct o60_int *)(a4))->v)) + 0x1), ((((struct o7C_float *)(a4))->v)));
}

