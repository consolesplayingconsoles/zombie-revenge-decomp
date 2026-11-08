/* Straight-line functions with calls and guards (batch gen_il): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c01ce40(int, int, float);
int FUN_0c01f8a0(int, int, int);
int FUN_0c0465fa(int);
int FUN_0c04685c(int, int, float, float);
int FUN_0c053cf0(int, int);
int FUN_0c053d60(int, int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c07e2b0(int);
int FUN_0c07e5c8(int);
int FUN_0c082f04(int, int, float);
int FUN_0c082fae(int, int, int, int, float);
int FUN_0c083074(int, int, int, int, int);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(void);
int FUN_0c090bf0(int);
int FUN_0c09d6c8(int);
int FUN_0c0a6688(int, int, int);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a6bf8(int, int, int, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a7984(int, int, float, float, float);
int FUN_0c0a7c66(int, int, int);
int FUN_0c0bea20(int, int);
int FUN_0c0c465c(int);
int FUN_0c0c473c(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcc80(int);
int FUN_0c0dcca0(int);
int FUN_0c0dccf0(void);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e6248(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlInvertMatrix(int);
float nlLength(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateAxe(int, int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c05d624(int a4, int a5, int a6, int a7);
int FUN_0c080ed8(int a4);
int FUN_0c087ca8(int a4);
int FUN_0c02d544(int a4);
int FUN_0c05cb48(int a4, int a5, int a6, int a7);
int FUN_0c06af2e(void);
int FUN_0c05970c(int a4);
int FUN_0c06e87a(int a4, int a5, int a6, int a7);
int FUN_0c06ba4c(void);
float FUN_0c041a74(int a4, float f4);
void FUN_0c0cd85c(int a4);
int FUN_0c07fc50(int a4);
int FUN_0c04caf8(int a4);
int FUN_0c063bbc(int a4, int a5);
int FUN_0c0824c0(int a4, int a5, int a6);
int FUN_0c0833ec(int a4);
int FUN_0c0175bc(int a4, int a5, int a6, int a7);
void FUN_0c0a339c(int a4, int a5, int a6, int a7);
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1DC_int { char p[0x1DC]; int v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_uint { char p[0x1E8]; unsigned int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1F8_int { char p[0x1F8]; int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o1FC_int { char p[0x1FC]; int v; };
struct o1FC_uint { char p[0x1FC]; unsigned int v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o21C_int { char p[0x21C]; int v; };
struct o21C_uint { char p[0x21C]; unsigned int v; };
struct o220_int { char p[0x220]; int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o228_uint { char p[0x228]; unsigned int v; };
struct o22C_float { char p[0x22C]; float v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o230_float { char p[0x230]; float v; };
struct o234_float { char p[0x234]; float v; };
struct o238_float { char p[0x238]; float v; };
struct o23C_int { char p[0x23C]; int v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o248_int { char p[0x248]; int v; };
struct o250_int { char p[0x250]; int v; };
struct o250_uint { char p[0x250]; unsigned int v; };
struct o258_int { char p[0x258]; int v; };
struct o258_uint { char p[0x258]; unsigned int v; };
struct o25C_float { char p[0x25C]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o284_float { char p[0x284]; float v; };
struct o290_int { char p[0x290]; int v; };
struct o29C_float { char p[0x29C]; float v; };
struct o2BC_int { char p[0x2BC]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o390_float { char p[0x390]; float v; };
struct o39C_int { char p[0x39C]; int v; };
struct o39C_uint { char p[0x39C]; unsigned int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_float { char p[0x3B0]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3D4_int { char p[0x3D4]; int v; };
struct o3D4_uint { char p[0x3D4]; unsigned int v; };
struct o3D8_int { char p[0x3D8]; int v; };
struct o3D8_uint { char p[0x3D8]; unsigned int v; };
struct o3DC_int { char p[0x3DC]; int v; };
struct o3E0_int { char p[0x3E0]; int v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o454_short { char p[0x454]; short v; };
struct o458_float { char p[0x458]; float v; };
struct o45C_float { char p[0x45C]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4B0_float { char p[0x4B0]; float v; };
struct o4B4_float { char p[0x4B4]; float v; };
struct o4B8_float { char p[0x4B8]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o4E_short { char p[0x4E]; short v; };
struct o4E_ushort { char p[0x4E]; unsigned short v; };
struct o50_float { char p[0x50]; float v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o518_float { char p[0x518]; float v; };
struct o51C_float { char p[0x51C]; float v; };
struct o520_float { char p[0x520]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o5E_ushort { char p[0x5E]; unsigned short v; };
struct o60_short { char p[0x60]; short v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o62_short { char p[0x62]; short v; };
struct o64_float { char p[0x64]; float v; };
struct o64_short { char p[0x64]; short v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_float { char p[0x68]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o6C_ushort { char p[0x6C]; unsigned short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_short { char p[0x70]; short v; };
struct o70_ushort { char p[0x70]; unsigned short v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o90_float { char p[0x90]; float v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oE8_short { char p[0xE8]; short v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_short { char p[0x10]; short v; };
struct o12_short { char p[0x12]; short v; };
struct o2_short { char p[0x2]; short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct oC_short { char p[0xC]; short v; };
struct oE_short { char p[0xE]; short v; };



int FUN_0c05d624(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    if (((((struct oD8_int *)(a4))->v)) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        if ((int)((((struct oBC_int *)(a4))->v)) < (int)0x2) {
            t0 = (((struct oBC_int *)(a4))->v);
            *(unsigned int *)(((((t0 << 2) << 2) << 1) + 0xC247548)) = ((*(int *)(((((t0 << 2) << 2) << 1) + 0xC247548))) + 0x1);
        }
        if (((((struct oD8_int *)(a4))->v)) == 1) {
            FUN_0c054c8a(a4);
            FUN_0c090bf0(a4);
        }
        t0 = ((int (*)(void))(FUN_0c0e19f2))();
    } else {
        t0 = (((struct o22C_int *)(a4))->v);
        (((struct o22C_uint *)(a4))->v) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            t0 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
        }
    }
    t0 = (((struct o23C_int *)(a4))->v);
    (((struct o23C_uint *)(a4))->v) = (t0 + 0x1);
    if (((t0 + 0x1) - 1) != 0) {
        if (((t0 + 0x1) - 1) != 1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
        } else {
            (((struct o1E4_float *)(a4))->v) = (((((struct o1E4_float *)(a4))->v)) * 5.0f);
        }
    } else {
        (((struct o23C_uint *)(a4))->v) = 0x1;
    }
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    FUN_0c01cdc2(a4);
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    u0 = *(float *)0xC05D7A8;
    nlScale(u0, u0, 1.0f);
    FUN_0c0de000(u0);
    FUN_0c0c465c(((((struct o220_int *)(a4))->v)));
    return nlPopMatrix(0x1);
}

int FUN_0c080ed8(int a4)
{
    int stk[16];
    register float u0;
    register int t38;
    register float u28;

    u0 = (((struct o29C_float *)(a4))->v);
    nlSubVector3op((((int)stk + 4) + 0x20), (0x260 + a4), (0x284 + a4));
    nlScaleUnitVector((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20), ((u0 + 30.0f) * (1.0f + 1.0f)));
    *(float *)(((int)stk + 40)) = 0.0f;
    nlSubVector3op((a4 + 0x6C), (0x284 + a4), (((int)stk + 4) + 0x20));
    nlAddVector3op((a4 + 0x60), (0x284 + a4), (((int)stk + 4) + 0x20));
    FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
    t38 = 0xD8;
    if (((((struct oD8_int *)(a4))->v)) != 0) {
        FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x284 + a4), ((((struct o18_float *)((*(int *)0xC247CA4)))->v)));
        FUN_0c07e2b0(a4);
        FUN_0c0dc5a0();
        nlSubVector3op((((int)stk + 4) + 0x8), (0x260 + a4), (0x284 + a4));
        FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))));
        nlRotateAX((-(*(int *)(((int)stk + 4)))));
        nlRotateAY((-(*(int *)(((int)stk + 8)))));
        FUN_0c0dcc80((0x260 + a4));
        FUN_0c0db470((0xBC + a4), (((int)stk + 4) + 0x14));
        nlInvertMatrix(0x0);
        FUN_0c0db4d0(0xC1027C8, (((int)stk + 4) + 0x8));
        u28 = (*(float *)(((int)stk + 28)));
        u28 = u28 + (*(float *)(((int)stk + 32))) * (*(float *)0xC247D10);
        if (!(0.0f > u28)) {
            FUN_0c0dce80((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x8), u28);
            nlAddVector((0x284 + a4), (((int)stk + 4) + 0x8));
            nlAddVector((0x260 + a4), (((int)stk + 4) + 0x8));
        }
        t38 = (nlPopMatrix(0x1));
    }
    return t38;
}


int FUN_0c02d544(int a4)
{
    int stk[25];
    register float t21;
    register float t28;
    register float u32;

    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAZ(((((struct o70_short *)(a4))->v)));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 10.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    (((struct o10_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 24)));
    (((struct o8_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 28)));
    (((struct oC_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 32)));
    nlPopMatrix(0x1);
    FUN_0c0a7984(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 16))));
    if (!(0.0f > (*(float *)(((int)stk + 12))))) {
        nlPushMatrix(0x0);
        nlUnitMatrix();
        t21 = FUN_0c0da410((*(int *)(((int)stk + 8))));
        nlRotateAZ((int)(-(t21 * 128.0f)));
        u32 = (-((FUN_0c0da410((*(int *)(((int)stk + 4))))) * 128.0f));
    } else {
        nlPushMatrix(0x0);
        nlUnitMatrix();
        t28 = FUN_0c0da410((*(int *)(((int)stk + 8))));
        nlRotateAZ((int)(t28 * 128.0f));
        u32 = ((FUN_0c0da410((*(int *)(((int)stk + 4))))) * 128.0f);
    }
    nlRotateAX((int)u32);
    FUN_0c0a7c66((((int)stk + 4) + 0x2C), ((((int)stk + 4) + 0x2C) + 0x4), ((((int)stk + 4) + 0x2C) + 0x8));
    nlPopMatrix(0x1);
    (((struct o6C_ushort *)(a4))->v) = (((((struct o6C_short *)(a4))->v)) + (*(int *)(((((int)stk + 4) + 0x2C) + 0x0))));
    (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + (*(int *)(((((int)stk + 4) + 0x2C) + 0x4))));
    (((struct o70_ushort *)(a4))->v) = (((((struct o70_short *)(a4))->v)) + (*(int *)(((((int)stk + 4) + 0x2C) + 0x8))));
    return 0x70;
}

int FUN_0c05cb48(int a4, int a5, int a6, int a7)
{
    register int t0;

    if (((((struct oD8_int *)(a4))->v)) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        if (((((struct oD8_int *)(a4))->v)) == 1) {
            FUN_0c054c8a(a4);
            FUN_0c090bf0(a4);
        }
        if ((int)((((struct oBC_int *)(a4))->v)) < (int)0x2) {
            t0 = (((struct oBC_int *)(a4))->v);
            *(unsigned int *)(((((t0 << 2) << 2) << 1) + 0xC247548)) = ((*(int *)(((((t0 << 2) << 2) << 1) + 0xC247548))) + 0x1);
        }
        t0 = ((int (*)(void))(FUN_0c0e19f2))();
    } else {
        t0 = (((struct o22C_int *)(a4))->v);
        (((struct o22C_uint *)(a4))->v) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            t0 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
        }
    }
    if (((((struct o23C_int *)(a4))->v)) == 0) {
        (((struct o23C_uint *)(a4))->v) = 0x1;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
        (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    }
    FUN_0c01cdc2(a4);
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    nlScale(1.0f, 1.0f, ((((struct o238_float *)(a4))->v)));
    FUN_0c0de000(((((struct o238_float *)(a4))->v)));
    FUN_0c0c465c(((((struct o220_int *)(a4))->v)));
    return nlPopMatrix(0x1);
}

int FUN_0c06af2e(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t0 = *(int *)0xC23ED50;
    t1 = 0xC0FA8D8;
    if ((t0 != 67) && ((t0 != 66) && (t0 != 68))) {
        t1 = 0xC0FA890;
    }
    t0 = 0xC23ED50;
    t2 = t1;
    for (;;) {
        t1 = *(short *)((t2 + 0x2));
        if (t1 == 0) {
            break;
        }
        t3 = (*(short *)((t2 + 0x0)));
        if (t3 == 0) {
            t4 = 0x0;
            for (;;) {
                if ((int)t4 >= (int)(unsigned short)(*(short *)((t2 + 0x2)))) {
                    break;
                }
                t0 = 0xC0E19AA;
                t7 = FUN_0c0e19aa(0xC06B1B2, 0x70, (*(int *)0xC23ECE4));
                t5 = t7;
                FUN_0c0e19d0(t7);
                t3 = t4;
                t3 = (t3 << 1);
                t0 = t4;
                t6 = (*(int *)((t2 + 0x4)));
                t3 = (t3 + t0);
                t0 = 0xC0E61D4;
                t3 = (t3 << 2);
                t3 = (t3 + t6);
                t6 = t5;
                t6 = (t6 + 0x34);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t6) = *(struct mv3 *)(t3); }
                t6 = (*(int *)((t2 + 0x8)));
                t4 = (t4 + 0x1);
                (((struct o6C_uint *)(t5))->v) = t6;
            }
        } else {
            t4 = 0x0;
            for (;;) {
                if ((int)t4 >= (int)(unsigned short)(*(short *)((t2 + 0x2)))) {
                    break;
                }
                t7 = t4;
                t7 = (t7 << 8);
                t7 = (t7 << 2);
                t7 = (t7 << 2);
                t3 = 0xC0E19AA;
                t8 = FUN_0c0e19aa(0xC06B114, 0x70, (*(int *)0xC23ECE4));
                t5 = t8;
                FUN_0c0e19d0(t8);
                t3 = 0x4000;
                t0 = t5;
                t0 = (t0 + 0x4C);
                t3 = (t3 + t7);
                *(unsigned int *)((t0 + 0x0)) = t3;
                t0 = 0x2000;
                t0 = (t0 + t7);
                (((struct o50_uint *)(t5))->v) = t0;
                t0 = 0xC0DA2E0;
                (((struct o54_uint *)(t5))->v) = t7;
                t6 = 0x58;
                t3 = t4;
                t6 = (t6 + t5);
                t0 = t4;
                t3 = (t3 << 1);
                *(unsigned int *)((t6 + 0x0)) = ((FUN_0c0da2e0()) << 1);
                t6 = (*(int *)((t2 + 0x4)));
                t3 = (t3 + t0);
                t3 = (t3 << 2);
                t0 = 0xC0E61D4;
                t3 = (t3 + t6);
                t6 = t5;
                t6 = (t6 + 0x34);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t6) = *(struct mv3 *)(t3); }
                t6 = (*(int *)((t2 + 0x8)));
                t4 = (t4 + 0x1);
                (((struct o6C_uint *)(t5))->v) = t6;
            }
        }
        t2 = (t2 + 0xC);
    }
    return t1;
}

int FUN_0c05970c(int a4)
{
    register float u55;

    if (((((struct o21C_int *)(a4))->v)) != 0) {
        return 0x21C;
    }
    if (((((struct o1FC_int *)(a4))->v)) != ((((struct o1F8_int *)(a4))->v))) {
        (((struct o64_float *)(a4))->v) = 1.0f;
        (((struct o6C_ushort *)(a4))->v) = (int)((FUN_0c0d9e90(((((struct o1DC_int *)(a4))->v)))) * 1024.0f);
        (((struct o70_ushort *)(a4))->v) = (int)((FUN_0c0da410(((((struct o1DC_int *)(a4))->v)))) * 1024.0f);
    }
    if (((((struct o64_float *)(a4))->v)) > 0.0f) {
        (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) - 0.049999997f);
        if (0.099999994f > ((((struct o64_float *)(a4))->v))) {
            (((struct o6C_ushort *)(a4))->v) = 0x0;
            (((struct o70_ushort *)(a4))->v) = 0x0;
        } else {
            (((struct o250_uint *)(a4))->v) = (int)((float)((((struct o250_int *)(a4))->v)) - ((float)((((struct o6C_short *)(a4))->v)) * 0.099999994f));
            (((struct o258_uint *)(a4))->v) = (int)((float)((((struct o258_int *)(a4))->v)) - ((float)((((struct o70_short *)(a4))->v)) * 0.199999988f));
            (((struct o6C_ushort *)(a4))->v) = (((((struct o6C_short *)(a4))->v)) + ((((struct o250_int *)(a4))->v)));
            (((struct o70_ushort *)(a4))->v) = (((((struct o70_short *)(a4))->v)) + ((((struct o258_int *)(a4))->v)));
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    FUN_0c0dcca0((a4 + 0x60));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAZ(((((struct o70_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    u55 = (((struct o25C_float *)(a4))->v);
    nlScale(u55, u55, u55);
    FUN_0c0de000(((((struct o25C_float *)(a4))->v)));
    FUN_0c0c465c(((((struct o248_int *)(a4))->v)));
    return nlPopMatrix(0x1);
}


int FUN_0c06ba4c(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    t1 = 0xC200340;
    for (;;) {
        t2 = FUN_0c0e19aa(0xC06BDE0, 0x24C, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t2);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x60)) = *(struct mv3 *)(t1); }
        (((struct o21C_uint *)(t2))->v) = (unsigned short)(*(short *)((t1 + 0x12)));
        FUN_0c0e6248();
        if ((unsigned short)(*(short *)((t1 + 0x12))) == 0xF55) {
            (((struct o228_uint *)(t2))->v) = 0xC0FB144;
        } else {
            (((struct o228_uint *)(t2))->v) = 0xC0FB138;
        }
        (((struct oBC_uint *)(t2))->v) = (t0 + 0xC);
        FUN_0c01ce40(t2, 0xC1CED54, 22.0f);
        t0 = (t0 + 0x1);
        *(unsigned int *)((((((((struct oBC_int *)(t2))->v)) << 2) + 0xC247030) + 0x0)) = 0x4;
        *(unsigned int *)((((((((struct oBC_int *)(t2))->v)) << 2) + 0xC246FF0) + 0x0)) = t2;
        *(unsigned int *)((((((((struct oBC_int *)(t2))->v)) << 2) + 0xC246FF0) + 0x0)) = t2;
        t1 = (t1 + 0x14);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    t0 = 0x0;
    t1 = 0xC1FFE54;
    for (;;) {
        t2 = FUN_0c0e19aa(0xC06BBC0, 0x58, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t2);
        (((struct o48_uint *)(t2))->v) = t0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)(t1); }
        (((struct o44_uint *)(t2))->v) = (unsigned short)(*(short *)((t1 + 0x12)));
        FUN_0c0e6248();
        t0 = (t0 + 0x1);
        if ((unsigned short)(*(short *)((t1 + 0x12))) == 0xF55) {
            (((struct o54_uint *)(t2))->v) = 0xC0FB144;
        } else {
            (((struct o54_uint *)(t2))->v) = 0xC0FB138;
        }
        t1 = (t1 + 0x14);
        if ((unsigned int)t0 >= (unsigned int)0x3F) {
            break;
        }
    }
    return 0x54;
}

float FUN_0c041a74(int a4, float f4)
{
    int stk[18];
    register float u17;
    register float u18;
    register float u19;
    register float u20;
    register float u21;
    register float u26;
    register float u29;

    *(float *)(((int)stk + 16)) = f4;
    (((struct o8_float *)((((int)stk + 4) + 0x28)))->v) = 0.0f;
    (((struct o4_float *)((((int)stk + 4) + 0x28)))->v) = 0.0f;
    (((struct o28_float *)(((int)stk + 4)))->v) = 0.0f;
    FUN_0c0a7714((((int)stk + 4) + 0x8), ((int)stk + 4), (((((struct o518_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v))), (((((struct o51C_float *)(a4))->v)) - ((((struct o34_float *)(a4))->v))), (((((struct o520_float *)(a4))->v)) - ((((struct o38_float *)(a4))->v))));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 4))));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 16)));
    FUN_0c0db470((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10));
    (((struct o4B0_float *)(a4))->v) = (*(float *)(((int)stk + 20)));
    (((struct o4_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 24)));
    (((struct o4B8_float *)(a4))->v) = (*(float *)(((int)stk + 28)));
    nlPopMatrix(0x1);
    u17 = (((struct o30_float *)(a4))->v);
    u18 = (((struct o518_float *)(a4))->v);
    u19 = (((struct o38_float *)(a4))->v);
    u20 = (((struct o520_float *)(a4))->v);
    u21 = ((u20 - u19) * (u20 - u19));
    u21 = u21 + (u18 - u17) * (u18 - u17);
    FUN_0c0465fa(a4);
    FUN_0c04685c(a4, 0xA, ((((struct o4_float *)0xC041BE0)->v)), ((((struct o0_float *)0xC041BE0)->v)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
    u26 = (((struct o10_float *)0xC041BE0)->v);
    if (((((((struct o390_float *)(a4))->v)) + u26) > ((((struct o34_float *)(a4))->v))) && (u29 = (((struct o4C_float *)(a4))->v), !(u29 > 0.0f))) {
        (((struct o4C_float *)(a4))->v) = ((((((struct o390_float *)(a4))->v)) - ((((struct o34_float *)(a4))->v))) + u26);
        (((struct o64_float *)(a4))->v) = 0.0f;
    }
    (((struct o4B0_float *)(a4))->v) = 0.0f;
    (((struct o4B4_float *)(a4))->v) = 0.0f;
    (((struct o4B8_float *)(a4))->v) = 0.0f;
    return _builtin_sqrtf((u21 + 0.0f));
}

void FUN_0c0cd85c(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t0 + 0x1);
    if ((int)(t0 + 0x1) >= (int)0x17) {
        t0 = 0xA;
        for (;;) {
            t1 = FUN_0c0e19aa(0xC0CD9C0, 0x80, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t1);
            u0 = ((((struct o0_float *)0xC1E9E9C)->v));
            u0 = u0 + 0.000976592302f * (float)((FUN_0c0da2e0()) - 16384);
            (((struct o44_float *)(t1))->v) = u0;
            (((struct o48_float *)(t1))->v) = ((((struct o4_float *)0xC1E9E9C)->v));
            u0 = ((((struct o8_float *)0xC1E9E9C)->v));
            u0 = u0 + 0.000976592302f * (float)((FUN_0c0da2e0()) - 16384);
            (((struct o4C_float *)(t1))->v) = u0;
            *(unsigned int *)((t1 + 0x34)) = 0xC1E9EA8;
            u0 = ((((struct oC_float *)0xC1E9E9C)->v));
            u0 = u0 + 0.000488296151f * (float)((FUN_0c0da2e0()) - 16384);
            (((struct o38_float *)(t1))->v) = u0;
            (((struct o3C_float *)(t1))->v) = ((((struct o10_float *)0xC1E9E9C)->v));
            u0 = ((((struct o14_float *)0xC1E9E9C)->v));
            u0 = u0 + 0.000488296151f * (float)((FUN_0c0da2e0()) - 16384);
            (((struct o40_float *)(t1))->v) = u0;
            u0 = 0.599999964f;
            u0 = u0 + 3.12204284e-05f * (float)(FUN_0c0da2e0());
            (((struct o68_float *)(t1))->v) = u0;
            u1 = 0.5f;
            u1 = u1 + 0.5f * (u0 + -0.349999994f);
            (((struct o64_float *)(t1))->v) = u1;
            (((struct o5E_ushort *)(t1))->v) = (FUN_0c0d9dc0((((((struct o38_float *)(t1))->v)) - ((((struct o44_float *)(t1))->v))), (((((struct o40_float *)(t1))->v)) - ((((struct o4C_float *)(t1))->v)))));
            (((struct o78_uint *)(t1))->v) = 0x5;
            t0 = (t0 - 0x1);
            (((struct o74_uint *)(t1))->v) = 0x1;
            if (t0 == 0) {
                break;
            }
        }
        *(unsigned int *)((a4 + 0x30)) = 0x0;
    }
}

int FUN_0c07fc50(int a4)
{
    int stk[12];
    register int t0;
    register float t4;
    register float u5;
    register float t11;
    register float u14;
    register float t29;
    register float u30;
    register int t33;

    t0 = *(int *)0xC247D70;
    FUN_0c07e5c8(a4);
    nlGetAverageVector((0x3A4 + a4), (t0 + 0x10), (0x284 + a4), 0.5f, 0.5f);
    nlSubVector3op(((int)stk + 4), (0x284 + a4), (t0 + 0x10));
    t4 = FUN_0c0dcea0(((int)stk + 4));
    u5 = (((struct o1C_float *)(t0))->v);
    if (t4 > u5) {
        nlScaleUnitVector(((int)stk + 4), ((int)stk + 4), u5);
        nlAddVector3op((0x284 + a4), (t0 + 0x10), ((int)stk + 4));
    }
    t11 = nlLength(t0, (0x284 + a4));
    u14 = t11;
    if (((((struct o3B0_float *)(a4))->v)) > t11) {
        u14 = ((((struct o3B0_float *)(a4))->v));
    }
    (((struct o29C_float *)(a4))->v) = u14;
    nlSubVector3op((((int)stk + 4) + 0xC), t0, (0x3A4 + a4));
    FUN_0c0a7714((0x3DC + a4), (0x3E0 + a4), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))));
    (((struct o3D4_uint *)(a4))->v) = (int)((float)((((struct o3D4_int *)(a4))->v)) + ((float)(((((struct o3DC_int *)(a4))->v)) - ((((struct o3D4_int *)(a4))->v))) * 0.0399999991f));
    (((struct o3D8_uint *)(a4))->v) = (int)((float)((((struct o3D8_int *)(a4))->v)) + ((float)(((((struct o3E0_int *)(a4))->v)) - ((((struct o3D8_int *)(a4))->v))) * 0.0399999991f));
    FUN_0c07e2b0(a4);
    nlSubVector3op(((int)stk + 4), (0x260 + a4), t0);
    t29 = FUN_0c0dcea0(((int)stk + 4));
    u30 = (((struct oC_float *)(t0))->v);
    t33 = 0xC;
    if (t29 > u30) {
        nlScaleUnitVector(((int)stk + 4), ((int)stk + 4), u30);
        t33 = (nlAddVector3op((0x260 + a4), t0, ((int)stk + 4)));
    }
    return t33;
}

int FUN_0c04caf8(int a4)
{
    int stk[12];
    register int t1;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register float u14;
    register int t21;
    register int t37;

    t1 = *(int *)(((((((struct oCC_int *)(a4))->v)) << 2) + 0xC246FF0));
    FUN_0c053cf0(t1, 0x1);
    FUN_0c053d60(a4, 0x1);
    FUN_0c0a68ec(((int)stk + 4), (((((struct o30_float *)(a4))->v)) - ((((struct o30_float *)(t1))->v))), (((((struct o38_float *)(a4))->v)) - ((((struct o38_float *)(t1))->v))));
    u9 = (((struct o30_float *)(a4))->v);
    u10 = (((struct o30_float *)(t1))->v);
    u11 = (((struct o38_float *)(a4))->v);
    u12 = (((struct o38_float *)(t1))->v);
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0xC);
    u14 = ((u11 - u12) * (u11 - u12));
    u14 = u14 + (u9 - u10) * (u9 - u10);
    FUN_0c0a6800((*(int *)(((int)stk + 4))), (((int)stk + 4) + 0xC), 0.0f, 0.0f, ((_builtin_sqrtf(u14) + -19.5f) * 0.5f));
    (((struct o48_float *)(t1))->v) = (((((struct o48_float *)(t1))->v)) + (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x14);
    (((struct o50_float *)(t1))->v) = (((((struct o50_float *)(t1))->v)) + ((((struct o14_float *)(((int)stk + 4)))->v)));
    t21 = (((struct o2EC_int *)(a4))->v);
    t37 = t21;
    if ((t21 & 12) != 0) {
        FUN_0c053cf0(t1, 0x0);
        FUN_0c053d60(a4, 0x0);
        (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((((((struct oC0_int *)(a4))->v)) << 1) + 0xC0F8426)));
        (((struct o210_uint *)(a4))->v) = 0x3D;
        (((struct o39C_uint *)(a4))->v) = (((((struct o39C_int *)(a4))->v)) | 0x400);
        (((struct o2D4_uint *)(a4))->v) = 0x0;
        (((struct o2D4_uint *)(t1))->v) = 0x0;
        (((struct o2CC_uint *)(a4))->v) = 0x1;
        (((struct o2CC_uint *)(t1))->v) = 0x1;
        (((struct o2C4_uint *)(t1))->v) = (unsigned short)(*(short *)(((((((struct oC0_int *)(t1))->v)) << 1) + (*(int *)((0xC1FE3B0 + (((((struct oC0_int *)(a4))->v)) << 2)))))));
        (((struct o48_float *)(t1))->v) = (((((struct o48_float *)(t1))->v)) + (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
        (((struct o50_float *)(t1))->v) = (((((struct o50_float *)(t1))->v)) + (*(float *)(((*(int *)(((int)stk + 12))) + 0x0))));
        (((struct o3AC_uint *)(a4))->v) = 0x3C;
        t37 = 0x3AC;
    }
    return t37;
}

int FUN_0c063bbc(int a4, int a5)
{
    int stk[11];
    register int t1;
    register int t10;
    register int t14;

    t1 = FUN_0c0e19aa(0xC063A90, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    (((struct oBC_uint *)(t1))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct o200_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    if ((int)((((struct oE8_short *)(a4))->v)) < (int)0x4) {
        t10 = 0x0;
        if ((*(signed char *)((a5 + 0x4))) != 0) {
            t10 = ((((struct o1EC_int *)(a4))->v));
        }
        t14 = t10;
    } else {
        t14 = ((int)0x1 << (int)((((struct oBC_int *)(a4))->v)));
    }
    (((struct o1EC_uint *)(t1))->v) = t14;
    (((struct o1E8_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    (((struct o1F4_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    (((struct o204_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    (((struct o1E4_float *)(t1))->v) = ((((struct oC_float *)(a5))->v));
    (((struct o1FC_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    (((struct o1F8_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    (((struct o22C_uint *)(t1))->v) = (unsigned short)(*(short *)((a5 + 0x8)));
    nlPushMatrix(0x0);
    FUN_0c0dbda0((((((struct o3E4_int *)(a4))->v)) + 0x1C0));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = -10.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    (((struct o30_float *)(t1))->v) = (*(float *)(((int)stk + 4)));
    (((struct o34_float *)(t1))->v) = (*(float *)(((int)stk + 8)));
    (((struct o38_float *)(t1))->v) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    FUN_0c0e6248();
    (((struct o220_uint *)(t1))->v) = ((((struct o2BC_int *)(a4))->v));
    FUN_0c0cc3f8(0x132A9, 0x0, 0x0, 0x0);
    return (FUN_0c09d6c8(a4));
}


int FUN_0c0833ec(int a4)
{
    int stk[16];
    register int t1;
    register int t2;
    register int t3;
    register int t40;

    t1 = *(int *)((((unsigned char)(*(signed char *)0xC247CB8) << 2) + 0xC246FF0));
    t2 = (((struct o0_short *)0xC247CBC)->v);
    t3 = (((struct o2_short *)0xC247CBC)->v);
    FUN_0c0dc5a0();
    FUN_0c0dcca0((0x22C + t1));
    nlRotateAY(((((struct oE_short *)0xC247CBC)->v)));
    nlRotateAX(((((struct oC_short *)0xC247CBC)->v)));
    *(float *)0xC2009A8 = ((((struct o4_float *)0xC247CBC)->v));
    FUN_0c0db470(0xC2009A0, (((int)stk + 16) + 0xC));
    FUN_0c0dccf0();
    nlRotateAY(((((struct o12_short *)0xC247CBC)->v)));
    nlRotateAX(((((struct o10_short *)0xC247CBC)->v)));
    *(float *)0xC2009A8 = ((((struct o8_float *)0xC247CBC)->v));
    FUN_0c0db470(0xC2009A0, ((int)stk + 16));
    nlPopMatrix(0x1);
    FUN_0c082f04(a4, 0x3, ((((struct o22C_float *)(t1))->v)));
    FUN_0c082f04(a4, 0x4, ((((struct o230_float *)(t1))->v)));
    FUN_0c082f04(a4, 0x5, ((((struct o234_float *)(t1))->v)));
    *(int *)((int)stk + 12) = 0x0;
    FUN_0c083074(a4, 0x3, (0x22C + t1), 0x3, 0x0);
    *(int *)((int)stk + 8) = 0x0;
    FUN_0c083074(a4, 0x4, (0x230 + t1), 0x3, 0x0);
    *(int *)((int)stk + 4) = 0x0;
    FUN_0c083074(a4, 0x5, (0x234 + t1), 0x3, 0x0);
    FUN_0c082f04(a4, 0x0, (*(float *)(((int)stk + 28))));
    FUN_0c082f04(a4, 0x1, (*(float *)(((int)stk + 32))));
    FUN_0c082f04(a4, 0x2, (*(float *)(((int)stk + 36))));
    FUN_0c082fae(a4, 0x0, t2, t3, (*(float *)(((int)stk + 16))));
    FUN_0c082fae(a4, 0x1, t2, t3, (*(float *)(((int)stk + 20))));
    t40 = FUN_0c082fae(a4, 0x2, t2, t3, (*(float *)(((int)stk + 24))));
    *(unsigned short *)0xC10291C = t3;
    return t40;
}

int FUN_0c0175bc(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t1;
    register float u19;
    register int t56;
    register int t62;
    register int t64;
    register int t27;
    register int t28;
    register int t52;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        t1 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o68_uint *)(a4))->v) = (((((struct o68_int *)(a4))->v)) + (*(int *)(((a4 + 0x68) + 0x4))));
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.0599999987f);
    if (!(((((struct o34_float *)(a4))->v)) > ((((struct o90_float *)(a4))->v)))) {
        (((struct o34_float *)(a4))->v) = ((((struct o90_float *)(a4))->v));
        u19 = ((((struct o4C_float *)(a4))->v));
        u19 *= -0.599999964f;
        (((struct o4C_float *)(a4))->v) = u19;
    }
    if ((((((struct o80_int *)(a4))->v)) != 0) && (t27 = (((struct o84_int *)(a4))->v), t28 = (((struct oA0_int *)(a4))->v), ((t28 + t27) & 1) == 0)) {
        t52 = (a4 + 0x68);
    } else {
        nlPushMatrix(0x0);
        FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
        nlRotateAZ(((((struct o64_short *)(a4))->v)));
        nlRotateAY(((((struct o62_short *)(a4))->v)));
        nlRotateAX(((((struct o60_short *)(a4))->v)));
        *(float *)(((int)stk + 4)) = ((((struct o54_float *)(a4))->v));
        *(float *)(((int)stk + 8)) = ((((struct o58_float *)(a4))->v));
        *(float *)(((int)stk + 12)) = ((((struct o5C_float *)(a4))->v));
        nlRotateAxe(((int)stk + 4), ((((struct o68_int *)(a4))->v)));
        FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
        nlPopMatrix(0x1);
    }
    t56 = (((struct oA0_int *)(a4))->v);
    (((struct oA0_uint *)(a4))->v) = (t56 - 1);
    if ((int)(t56 - 1) <= 0) {
        (((struct oA0_uint *)(a4))->v) = ((((struct oA4_int *)(a4))->v));
        (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
    }
    t62 = (((struct o80_int *)(a4))->v);
    t64 = t62;
    if (t62 == 2) {
        t64 = (((int (*)(int))(FUN_0c0e19f2))(t52));
    }
    return t64;
}

void FUN_0c0a339c(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t12;
    register int t22;
    register int t24;
    register int t46;

    if (((*(int *)0xC23A1A8) & 0x10000001) == 0x10000001) {
        return;
    }
    if ((*(short *)(((((((((struct o88_int *)(a4))->v)) << 2) << 2) + 0xC2460F4) + 0x4))) != 0) {
        if ((unsigned short)(*(short *)(((((((((struct o88_int *)(a4))->v)) << 2) << 2) + 0xC2460F4) + 0x4))) != 1) {
            t12 = *(int *)(((((((((struct o88_int *)(a4))->v)) << 2) << 2) + 0xC2460F4) + 0x0));
            if ((((((struct o290_int *)(t12))->v)) & 0x40000000) != 0) {
                FUN_0c0e19f2();
            }
            if ((*(int *)((0xC247030 + (((((struct oBC_int *)(t12))->v)) << 2)))) != 8) {
                t22 = (((struct oA0_int *)(a4))->v);
                (((struct oA0_uint *)(a4))->v) = (t22 + 0x1);
                t24 = *(short *)((((t22 + 0x1) << 1) + ((((struct o8C_int *)(a4))->v))));
                (((struct o78_uint *)(a4))->v) = t24;
                if ((int)t24 < 0) {
                    (((struct oA0_uint *)(a4))->v) = 0x0;
                    (((struct o78_uint *)(a4))->v) = (*(short *)(((((((struct oA0_int *)(a4))->v)) << 1) + ((((struct o8C_int *)(a4))->v)))));
                }
                nlPushMatrix(0x0);
                nlMultiMatrix(((((((((struct o7C_int *)(a4))->v)) << 2) << 2) << 2) + ((((struct o3E4_int *)(t12))->v))));
                FUN_0c0dcca0((a4 + 0x30));
                FUN_0c0848d6(((((struct o45C_float *)(t12))->v)), ((((struct o4_float *)((0x45C + t12)))->v)), ((((struct o8_float *)((0x45C + t12)))->v)));
                FUN_0c0de000(_builtin_fabsf(((((struct o284_float *)(t12))->v))));
                t46 = ((int (*)(int, float))((*(int *)((((unsigned short)((((struct o454_short *)(t12))->v)) << 2) + 0xC195F48)))))(((((struct o78_int *)(a4))->v)), ((((struct o458_float *)(t12))->v)));
                FUN_0c0849da();
                nlPopMatrix(0x1);
    return;
            }
            return;
        }
        return;
    }
    FUN_0c0e19f2();
}


int FUN_0c087ca8(int a4)
{
    int stk[18];
    register int t0;
    register int t27;
    int t1;
    register int t3;
    register float u8;
    register float u15;
    register int t23;
    register int t26;

    t0 = (((struct oC8_int *)(a4))->v);
    t27 = t0;
    if (t0 == 1) {
        *(unsigned int *)(((int)stk + 4)) = 0x4;
        for (;;) {
            t1 = FUN_0c0da2e0();
            t3 = FUN_0c0e19aa(0xC087F9C, 0x6C, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t3);
            FUN_0c0bea20(((((struct o404_int *)(a4))->v)), (((int)stk + 4) + 0x4));
            *(unsigned int *)((t3 + 0x34)) = a4;
            *(unsigned int *)((t3 + 0x3C)) = 0xC087EF2;
            *(unsigned int *)((t3 + 0x38)) = 0xC0C465C;
            u8 = -0.5f;
            u8 = u8 + 3.05185094e-05f * (float)(FUN_0c0da2e0());
            (((struct o44_float *)(t3))->v) = u8;
            (((struct o48_float *)(t3))->v) = ((-((float)(FUN_0c0da2e0()) * 3.05185063e-06f)) - ((*(float *)(((int)stk + 20))) * ((((struct o0_float *)0xC087E20)->v))));
            (((struct o58_float *)(t3))->v) = 1.0f;
            (((struct o64_uint *)(t3))->v) = 0x258;
            u15 = ((((struct o4_float *)0xC087E20)->v));
            u15 = u15 + ((((struct o8_float *)0xC087E20)->v)) * (float)(FUN_0c0da2e0());
            (((struct o54_float *)(t3))->v) = u15;
            (((struct o60_uint *)(t3))->v) = (unsigned short)(*(short *)(((((0x3 & t1) << 2) + 0xC10A9C4) + 0x0)));
            (((struct o5C_uint *)(t3))->v) = (unsigned short)(*(short *)((((((0x3 & t1) << 2) + 0xC10A9C4) + 0x2) + 0x0)));
            (((struct o4C_ushort *)(t3))->v) = 0xFFFFC001;
            (((struct o4E_ushort *)(t3))->v) = (((FUN_0c0da2e0()) & 0x1FFF) - 8192);
            FUN_0c0dc5a0();
            nlRotateAY(((((struct o4E_short *)(t3))->v)));
            FUN_0c0db470((t3 + 0x40), (t3 + 0x40));
            t23 = nlPopMatrix(0x1);
            (((struct o0_uint *)0xC248DC8)->v) = (((((struct o0_int *)0xC248DC8)->v)) + 0x1);
            (((struct o4_uint *)0xC248DC8)->v) = (((((struct o4_int *)0xC248DC8)->v)) + 0x1);
            t26 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t26 - 1);
            if ((t26 - 1) == 0) {
                break;
            }
        }
        t27 = t23;
    }
    return t27;
}

