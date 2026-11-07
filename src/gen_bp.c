/* Straight-line functions with calls and guards (batch gen_bp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_Close(int);
int ADXF_GetFsizeSct(int);
int ADXF_OpenAfs(int, int);
int ADXF_ReadNw32(int, int, int);
int FUN_0c010a30(void);
int FUN_0c015436(int, int);
int FUN_0c0156ea(int, int, int, int);
int FUN_0c0169da(int);
int FUN_0c01843e(void);
int FUN_0c01c230(void);
int FUN_0c01ce40(int, int, float);
int FUN_0c01d394(void);
int FUN_0c01d3c6(void);
int FUN_0c01d636(int, int, int);
int FUN_0c01fa90(void);
int FUN_0c02d6a8(int);
int FUN_0c02ef26(int, int, int, int);
int FUN_0c0349ea(int, int, int);
int FUN_0c037002(int, int);
int FUN_0c03bd28(int, int, int, int, int);
int FUN_0c043338(int);
int FUN_0c04994c(int);
int FUN_0c049b80(int);
int FUN_0c04c98e(int, int);
int FUN_0c050f98(int);
int FUN_0c051a48(int);
int FUN_0c054d8e(void);
int FUN_0c054e1c(int);
int FUN_0c05518c(int, int, int);
int FUN_0c06e9cc(int, int);
int FUN_0c07e1e8(void);
int FUN_0c082f04(int, int, float);
int FUN_0c082f78(int, int, int);
int FUN_0c084104(void);
int FUN_0c084218(void);
int FUN_0c0844dc(int, int, int, float);
int FUN_0c08455e(float);
int FUN_0c084570(int, int, int, int, int);
int FUN_0c0847a2(int);
int FUN_0c0847b8(int);
int FUN_0c0847de(int);
int FUN_0c0847f4(float, float);
int FUN_0c084a48(void);
int FUN_0c0853d4(int, float);
int FUN_0c0925e0(int, int);
int FUN_0c092858(int);
int FUN_0c0a6610(int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0a81ac(int, int, int, int);
int FUN_0c0b4404(int);
int FUN_0c0b70b4(void);
int FUN_0c0bf940(int, int, int, int, int, int);
int FUN_0c0bfa90(void);
extern int FUN_0c0c0340();
int FUN_0c0c45d0(void);
int FUN_0c0c465c(int);
int FUN_0c0c523c(void);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cbf40(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d8d00(int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
int FUN_0c0da320(int);
float FUN_0c0da410(int);
int FUN_0c0db430(int, int);
int FUN_0c0db470(int, int);
int nlGetMatrix(int);
int nlInvertMatrix(int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0dc5a0(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int nlGetAverageVector(int, int, int, float, float);
float nlLength(int, int);
int FUN_0c0ddd20(float, float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
extern int FUN_0c0e19f2();
int FUN_0c0e2400(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0e262a(int);
int FUN_0c0e2a4c(int);
int FUN_0c0e40ec(int, int, int);
int FUN_0c0e4428(int);
int FUN_0c0e5dc0(void);
int _quick_odd_mvn(void);
int FUN_0c0e6248(void);
int FUN_0c0e631c(int, int, int);
int FUN_0c20d298(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
extern int _builtin_tas(char *);
int kdRecvFrame(void);
int kdSetCallback(int, int, int);
int kmSetPixelClipping(int, int, int, int);
int memset(int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_set_dreset_ns(int);
int syCblCheck(void);
int FUN_0c0264ba(int a4);
int FUN_0c056234(int a4, int a5);
int FUN_0c056508(int a4, int a5, int a6);
int FUN_0c083848(int a4);
int FUN_0c095e5e(int a4);
int FUN_0c0a6780(int a4, int a5, float f4, float f5, float f6);
int FUN_0c0b4384(int a4);
int FUN_0c0bd708(int a4, int a5, int a6);
void FUN_0c0c1488(int a4, int a5, int a6, int a7);
int FUN_0c0ccabc(int a4, int a5);
float FUN_0c0d6c6a(int a4);
int FUN_0c017a04(void);
int FUN_0c043510(int a4);
int FUN_0c0498ce(void);
int FUN_0c04d094(int a4, int a5, int a6);
int FUN_0c08b454(int a4, int a5);
int nlCommonTextureGetNextTextureIndex(void);
int FUN_0c0ddba0(int a4, int a5);
int kdSetDeviceResetEx(int a4, int a5);
int FUN_0c0109b4(void);
int FUN_0c0112b0(int a4);
int FUN_0c01898c(int a4);
int FUN_0c04d270(int a4, int a5);
int FUN_0c054e36(int a4);
int FUN_0c050f1c(int a4, int a5, int a6, int a7);
int FUN_0c054eb2(int a4);
int FUN_0c06eb74(void);
void FUN_0c078bec(int a4, int a5);
int FUN_0c08b730(int a4, int a5, int a6, int a7);
int FUN_0c0a5ac4(void);
int FUN_0c0a6870(int a4, int a5, int a6, float f4, float f5, float f6);
int FUN_0c0a6704(int a4, int a5, int a6);
int FUN_0c0a6688(int a4, int a5, int a6);
int FUN_0c0b39ba(void);
int FUN_0c0c27a0(int a4);
int FUN_0c0cf88c(int a4, int a5, int a6, int a7);
void kmiRegisterCallback(int a4, int a5, int a6, int a7);
int FUN_0c0108c6(void);
int FUN_0c015d04(void);
int FUN_0c01a5b8(int a4, float f4);
int FUN_0c02db82(int a4);
int FUN_0c032394(int a4);
int FUN_0c02f04a(int a4);
int FUN_0c02d9ee(int a4);
int FUN_0c037334(int a4, int a5);
int FUN_0c035e22(int a4);
int FUN_0c03c966(int a4);
int FUN_0c04a058(int a4);
int FUN_0c04fb24(void);
int FUN_0c04fb9e(void);
int FUN_0c0bffc4(void);
int FUN_0c0cbe74(int a4, int a5, int a6);
int FUN_0c0b5e12(void);
int FUN_0c0e4ca0(int a4);
int FUN_0c0e54ec(int a4, int a5, int a6);
float FUN_0c0341a6(int a4, int a5);
void FUN_0c09c8c0(int a4);
int FUN_0c0ac46a(int a4);
float FUN_0c0ae738(int a4, int a5);
struct o10_float { char p[0x10]; float v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct o114_uint { char p[0x114]; unsigned int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o11C_uint { char p[0x11C]; unsigned int v; };
struct o120_uint { char p[0x120]; unsigned int v; };
struct o124_int { char p[0x124]; int v; };
struct o124_uint { char p[0x124]; unsigned int v; };
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1BC_uint { char p[0x1BC]; unsigned int v; };
struct o1CC_int { char p[0x1CC]; int v; };
struct o1CC_uint { char p[0x1CC]; unsigned int v; };
struct o1D4_float { char p[0x1D4]; float v; };
struct o1D8_int { char p[0x1D8]; int v; };
struct o1DC_int { char p[0x1DC]; int v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o20C_int { char p[0x20C]; int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o224_int { char p[0x224]; int v; };
struct o25C_uint { char p[0x25C]; unsigned int v; };
struct o2B4_int { char p[0x2B4]; int v; };
struct o2C4_int { char p[0x2C4]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o308_int { char p[0x308]; int v; };
struct o328_int { char p[0x328]; int v; };
struct o328_uint { char p[0x328]; unsigned int v; };
struct o330_uint { char p[0x330]; unsigned int v; };
struct o338_uint { char p[0x338]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o340_uint { char p[0x340]; unsigned int v; };
struct o344_int { char p[0x344]; int v; };
struct o344_uint { char p[0x344]; unsigned int v; };
struct o348_int { char p[0x348]; int v; };
struct o348_uint { char p[0x348]; unsigned int v; };
struct o34C_int { char p[0x34C]; int v; };
struct o34C_uint { char p[0x34C]; unsigned int v; };
struct o350_int { char p[0x350]; int v; };
struct o350_uint { char p[0x350]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o394_int { char p[0x394]; int v; };
struct o394_uint { char p[0x394]; unsigned int v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o454_ushort { char p[0x454]; unsigned short v; };
struct o458_float { char p[0x458]; float v; };
struct o478_int { char p[0x478]; int v; };
struct o478_uint { char p[0x478]; unsigned int v; };
struct o4D4_int { char p[0x4D4]; int v; };
struct o4D4_uint { char p[0x4D4]; unsigned int v; };
struct o4F0_uint { char p[0x4F0]; unsigned int v; };
struct o4F4_uint { char p[0x4F4]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o508_int { char p[0x508]; int v; };
struct o50C_int { char p[0x50C]; int v; };
struct o50C_uint { char p[0x50C]; unsigned int v; };
struct o510_int { char p[0x510]; int v; };
struct o510_uint { char p[0x510]; unsigned int v; };
struct o528_int { char p[0x528]; int v; };
struct o538_uint { char p[0x538]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o548_uint { char p[0x548]; unsigned int v; };
struct o54C_uint { char p[0x54C]; unsigned int v; };
struct o57C_int { char p[0x57C]; int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5C0_int { char p[0x5C0]; int v; };
struct o5C0_uint { char p[0x5C0]; unsigned int v; };
struct o5CC_uint { char p[0x5CC]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_float { char p[0x64]; float v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o70_float { char p[0x70]; float v; };
struct o70_short { char p[0x70]; short v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct o74_int { char p[0x74]; int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_float { char p[0x78]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oB4_uint { char p[0xB4]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };


int FUN_0c0264ba(int a4)
{
    int stk[17];

    nlPushMatrix(0x0);
    FUN_0c0dbda0((*(int *)((a4 + 0x3E4))));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
    FUN_0c0a79fa((((int)stk + 4) + 0x18), ((((int)stk + 4) + 0x18) + 0x4), ((((int)stk + 4) + 0x18) + 0x8));
    nlPopMatrix(0x1);
    *(float *)((a4 + 0x34)) = (*(float *)(((((int)stk + 4) + 0x24) + 0x4)));
    *(unsigned short *)((a4 + 0x6E)) = (*(int *)(((((int)stk + 4) + 0x18) + 0x4)));
    return 0x6E;
}

int FUN_0c056234(int a4, int a5)
{
    float u6;
    int stk[12];

    (((struct o1D4_float *)(a4))->v) = (((((struct o1D4_float *)(a4))->v)) * 0.049999997f);
    if (((((struct o1D4_float *)(a4))->v)) > 1.0f) {
        (((struct o1D4_float *)(a4))->v) = 1.0f;
    }
    (((struct o10_float *)(((int)stk + 4)))->v) = 0.0f;
    (((struct o4_float *)((((int)stk + 4) + 0x10)))->v) = 0.0f;
    u6 = ((((struct o1D4_float *)(a4))->v));
    u6 = u6 + (*(float *)0xC05636C) * (float)((((struct o1CC_int *)(a4))->v));
    (((struct o8_float *)((((int)stk + 4) + 0x10)))->v) = u6;
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = ((((struct o1D8_int *)(a4))->v));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = ((((struct o1DC_int *)(a4))->v));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = 0x0;
    FUN_0c0a6610((((int)stk + 4) + 0x10), (*(int *)(((int)stk + 4))), (a5 + 0x60));
    if (1.0f > ((((struct o64_float *)(a5))->v))) {
        (((struct o64_float *)(a5))->v) = 1.0f;
    }
    return 0x64;
}

int FUN_0c056508(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t3;
    int t18;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t13;

    t1 = *(int *)((((*(int *)((a4 + 0x358))) << 2) + 0xC2475D4));
    t2 = *(int *)((a4 + 0xBC));
    t3 = *(int *)((a4 + 0x344));
    t18 = t3;
    if ((int)t3 <= (int)0x3) {
        FUN_0c0925e0(a4, t1);
        *(unsigned int *)(((0x21C + t1) + 0x0)) = ((*(int *)(((0x21C + t1) + 0x0))) + (unsigned short)(*(short *)((((t2 * 0xE) + 0xC247998) + 0x4))));
        t7 = *(short *)((((t2 * 0xE) + 0xC247998) + 0x2));
        *(unsigned short *)((((t2 * 0xE) + 0xC247998) + 0x2)) = (t7 - 1);
        if ((int)(unsigned short)(t7 - 1) <= 0) {
            *(unsigned short *)((((t2 * 0xE) + 0xC247998) + 0x4)) = 0x0;
            t13 = 0x0;
        } else {
            t8 = (0x21C + t1);
            t9 = 0x0;
            t10 = a5;
            for (;;) {
                t11 = *(short *)((((t2 * 0xE) + 0xC247998) + 0x2));
                if ((int)t9 >= (int)(unsigned short)t11) {
                    break;
                }
                t8 = ((t2 * 0xE) + 0xC247998);
                t10 = t9;
                t8 = (t8 + 0x4);
                t10 = (t10 << 1);
                t10 = (t10 + t8);
                t9 = (t9 + 0x1);
                *(unsigned short *)((t10 + 0x0)) = (*(short *)((t10 + 0x2)));
            }
            *(unsigned short *)((((t9 << 1) + (((t2 * 0xE) + 0xC247998) + 0x4)) + 0x0)) = 0x0;
            t13 = (unsigned short)t11;
        }
        t18 = t13;
    }
    return t18;
}

int FUN_0c083848(int a4)
{
    int t0;
    int stk[7];

    t0 = *(int *)0xC247000;
    FUN_0c082f78(a4, 0x3, (0x22C + t0));
    FUN_0c082f78(a4, 0x4, (0x230 + t0));
    FUN_0c082f78(a4, 0x5, (0x234 + t0));
    FUN_0c0dc5a0();
    FUN_0c0dcca0(0xC1028C8);
    nlRotateAY((((((struct o6E_short *)(t0))->v)) + 0x5555));
    nlRotateAX(0x1FFF);
    FUN_0c0db470(0xC1028E0, ((int)stk + 4));
    nlPopMatrix(0x1);
    FUN_0c082f04(a4, 0x0, (*(float *)(((int)stk + 4))));
    FUN_0c082f04(a4, 0x1, (*(float *)(((int)stk + 8))));
    return (FUN_0c082f04(a4, 0x2, (*(float *)(((int)stk + 12)))));
}

int FUN_0c095e5e(int a4)
{
    float u1;
    int t14;
    int t15;

    nlPushMatrix(0x0);
    u1 = (((struct o40_float *)(a4))->v);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), (((((struct o34_float *)(a4))->v)) + (-1.0f)), ((((struct o38_float *)(a4))->v)));
    nlRotateAY((*(int *)((a4 + 0x3C))));
    nlRotateAX(0xFFFFC223);
    nlScale(u1, u1, u1);
    FUN_0c0de000(u1);
    FUN_0c0c465c((((((struct o44_int *)(a4))->v)) + 0x245));
    nlPopMatrix(0x1);
    t14 = *(int *)0xC23A258;
    if ((t14 & 1) != 0) {
        t15 = (((struct o44_int *)(a4))->v);
        (((struct o44_uint *)(a4))->v) = (t15 + 0x1);
        if ((int)(t15 + 0x1) >= (int)0x14) {
            return FUN_0c0e19f2();
        }
        return 0x44;
    }
    return t14;
}

int FUN_0c0a6780(int a4, int a5, float f4, float f5, float f6)
{
    int stk[13];

    *(float *)(((int)stk + 12)) = f4;
    *(float *)(((int)stk + 4)) = f5;
    *(float *)(((int)stk + 8)) = f6;
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAZ((*(int *)((a4 + 0x8))));
    nlRotateAY((*(int *)((a4 + 0x4))));
    nlRotateAX((*(int *)((a4 + 0x0))));
    *(float *)(((int)stk + 28)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 32)) = (*(float *)(((int)stk + 4)));
    *(float *)(((int)stk + 36)) = (*(float *)(((int)stk + 8)));
    FUN_0c0db470((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
    *(float *)((a5 + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)(((a5 + 0x4) + 0x0)) = (*(float *)(((int)stk + 20)));
    *(float *)(((a5 + 0x8) + 0x0)) = (*(float *)(((int)stk + 24)));
    return (nlPopMatrix(0x1));
}


int FUN_0c0bd708(int a4, int a5, int a6)
{
    int t0;
    int t7;
    int t1;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)(((a5 << 2) + (((a4 << 2) << 1) + 0xC26086C)));
    t7 = t0;
    if (t0 == 0) {
        t1 = FUN_0c0e262a(0x128);
        *(unsigned int *)((((((a4 << 2) << 1) + 0xC26086C) + (a5 << 2)) + 0x0)) = t1;
        memset(t1, 0x0, 0x128);
        (((struct o110_uint *)(t1))->v) = 0xC0BF3F2;
        (((struct o114_uint *)(t1))->v) = 0xC0BF3F2;
        (((struct o118_uint *)(t1))->v) = 0xC0BF3F2;
        (((struct o11C_uint *)(t1))->v) = 0xC0BF3F2;
        (((struct o120_uint *)(t1))->v) = 0xC0BF3F2;
        t3 = 0x0;
        t4 = t1;
        for (;;) {
            t5 = t3;
            t3 = (t3 + 0x1);
            *(unsigned short *)((t4 + 0xA)) = t5;
            *(unsigned int *)((t4 + 0x4)) = 0xC0BF3F2;
            t4 = (t4 + 0x10);
            if ((int)t3 >= (int)0x11) {
                break;
            }
        }
        t7 = t1;
    }
    (((struct o124_uint *)(t7))->v) = (((((struct o124_int *)(t7))->v)) + 0x1);
    return t7;
}

void FUN_0c0c1488(int a4, int a5, int a6, int a7)
{
    if ((*(int *)0xC247030) != 0) {
        if (((((struct o344_int *)(a4))->v)) != 0) {
            (((struct o25C_uint *)((*(int *)((((((((struct o34C_int *)(a4))->v)) << 2) + 0xC2475D4) + 0x0)))))->v) = 0x0;
            *(unsigned int *)((((((((struct o34C_int *)(a4))->v)) << 2) + 0xC247604) + 0x0)) = 0x7;
            (((struct o344_uint *)(a4))->v) = 0x0;
            (((struct o34C_uint *)(a4))->v) = 0x0;
        }
        if (((((struct o348_int *)(a4))->v)) != 0) {
            (((struct o25C_uint *)((*(int *)((((((((struct o350_int *)(a4))->v)) << 2) + 0xC2475D4) + 0x0)))))->v) = 0x0;
            *(unsigned int *)((((((((struct o350_int *)(a4))->v)) << 2) + 0xC247604) + 0x0)) = 0x7;
            (((struct o348_uint *)(a4))->v) = 0x0;
            (((struct o350_uint *)(a4))->v) = 0x0;
        }
        (((struct o340_uint *)(a4))->v) = 0x0;
        (((struct o338_uint *)(a4))->v) = 0x0;
        (((struct o330_uint *)(a4))->v) = 0x0;
    }
}


float FUN_0c0d6c6a(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u4;
    float t6;
    float u16;

    t0 = *(int *)((a4 + 0x8));
    t1 = (((struct o54_int *)(a4))->v);
    t2 = *(int *)0xC247CB0;
    if (t1 != 0x10000) {
        t3 = (((struct o3CE_short *)(t2))->v);
        u4 = *(float *)0xC0D6D2C;
        *(unsigned int *)((((0xC943564 + ((t0 << 1) << 2)) + 0x4) + 0x0)) = (int)(-((FUN_0c0da410((t1 - t3))) * u4));
        t6 = FUN_0c0d9e90((t1 - t3));
        *(unsigned int *)(((0xC943564 + ((t0 << 1) << 2)) + 0x0)) = (int)(t6 * u4);
        u16 = (t6 * u4);
    } else {
        *(unsigned int *)(((0xC943564 + ((t0 << 1) << 2)) + 0x4)) = 0x0;
        *(unsigned int *)(((0xC943564 + ((t0 << 1) << 2)) + 0x0)) = 0x0;
    }
    return u16;
}


int FUN_0c043510(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4C8));
    if (t0 != 0) {
        if ((t0 != 1) && ((t0 != 2) && ((t0 != 3) && (t0 != 4)))) {
            if ((t0 != 5) && (t0 != 6)) {
                if ((t0 != 7) && ((t0 != 8) && ((t0 != 9) && (t0 != 10)))) {
                    return t0;
                }
                return FUN_0c043338(a4);
            }
            return ((int (*)(int))(0xC04345A))(a4);
        }
        return FUN_0c043338(a4);
    }
    return t0;
}

int FUN_0c0498ce(void)
{
    float u0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;

    u0 = *(float *)0xC0499D8;
    t1 = 0x0;
    t2 = 0xC247084;
    t3 = 0x0;
    for (;;) {
        *(unsigned int *)(((0xC246FF0 + t1) + 0x0)) = 0x0;
        *(unsigned int *)(((0xC247030 + t1) + 0x0)) = 0x0;
        t4 = t2;
        t5 = 0x0;
        for (;;) {
            t5 = (t5 + 0x1);
            *(float *)((t4 + 0x0)) = u0;
            t4 = (t4 + 0x4);
            if ((int)t5 >= (int)0x10) {
                break;
            }
        }
        t1 = (t1 + 0x4);
        *(unsigned int *)(((0xC247484 + t3) + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)(((0xC2474C4 + t3) + 0x0)) = 0xFFFFFFFF;
        t7 = (0xC247504 + t3);
        t3 = (t3 + 0x4);
        *(unsigned int *)((t7 + 0x0)) = 0xFFFFFFFF;
        t2 = (t2 + 0x40);
        if ((unsigned int)t1 >= (unsigned int)0x40) {
            break;
        }
    }
    *(float *)0xC247078 = 0.0f;
    *(float *)0xC24707C = 0.0f;
    *(float *)0xC247080 = 0.0f;
    *(unsigned int *)0xC247070 = 0x0;
    *(unsigned int *)0xC247074 = 0x0;
    return 0x84;
}

int FUN_0c04d094(int a4, int a5, int a6)
{
    int t5;
    int t19;
    int t11;
    int t13;
    int t18;

    if (((*(int *)((a5 + 0x0))) & 0x606) != 0) {
        (((struct o3AC_uint *)(a4))->v) = (((((struct o3AC_int *)(a4))->v)) + 0x1);
    }
    t5 = (((struct o2EC_int *)(a4))->v);
    t19 = t5;
    if ((t5 & 12) != 0) {
        t11 = *(int *)(((((((struct oCC_int *)(a4))->v)) << 2) + 0xC246FF0));
        if (((int)((((struct o3AC_int *)(a4))->v)) > (int)0xB) && (t13 = (((struct o394_int *)(a4))->v), t13 == 0)) {
            (((struct o2C4_uint *)(a4))->v) = 0x329;
            (((struct o2CC_uint *)(a4))->v) = 0x1;
            (((struct o2C4_uint *)(t11))->v) = (((((struct o2C4_int *)(a4))->v)) + 0x1);
            (((struct o2CC_uint *)(t11))->v) = 0x1;
            t18 = 0x45;
        } else {
            (((struct o2C4_uint *)(a4))->v) = 0x32B;
            (((struct o2CC_uint *)(a4))->v) = 0x1;
            (((struct o2C4_uint *)(t11))->v) = (((((struct o2C4_int *)(a4))->v)) + 0x1);
            (((struct o2CC_uint *)(t11))->v) = 0x1;
            t18 = 0x47;
        }
        (((struct o210_uint *)(a4))->v) = t18;
        (((struct o3AC_uint *)(a4))->v) = 0x0;
        t19 = 0x3AC;
    }
    return t19;
}

int FUN_0c08b454(int a4, int a5)
{
    int t0;
    int t2;
    float u5;

    t0 = *(int *)((a4 + 0xBC));
    t2 = FUN_0c0e19aa(0xC08B4D2, 0x48, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t2);
    *(unsigned int *)((t2 + 0x30)) = a4;
    *(unsigned int *)((t2 + 0x34)) = a5;
    *(unsigned int *)((t2 + 0x38)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t2 + 0x3C)) = 0xE38;
    *(float *)((((((t0 << 2) + t0) << 2) + 0xC248CBC) + 0x4)) = 1.0f;
    *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC248CBC) + 0x0)) = t2;
    u5 = *(float *)0xC08B568;
    nlGetAverageVector((a4 + 0x30), (a5 + 0x30), (((((t0 << 2) + t0) << 2) + 0xC248CBC) + 0x8), u5, u5);
    *(unsigned int *)((a4 + 0x38C)) = ((*(int *)((t2 + 0x38))) + 0x1);
    *(unsigned int *)((a5 + 0x38C)) = ((*(int *)((t2 + 0x38))) + 0x1);
    return 0x38C;
}

int nlCommonTextureGetNextTextureIndex(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t8;
    int t9;
    int t10;
    int t11;

    t0 = 0x0;
    t1 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)0xC20CC4C)) {
            return 0xFFFFFFFF;
        }
        t8 = *(int *)((t2 + (*(int *)0xC943D7C)));
        if (t8 != -1) {
            break;
        }
        t3 = (t3 + 0x4);
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x1);
        t0 = (t0 + 0x20);
    }
    t9 = 0x1;
    t10 = 0x0;
    for (;;) {
        if ((t8 & t9) == 0) {
            break;
        }
        t9 = (t9 << 1);
        t10 = (t10 + 0x1);
    }
    t11 = *(int *)0xC943D7C;
    *(unsigned int *)((t3 + t11)) = ((*(int *)((t3 + t11))) | t9);
    return (t0 + t10);
}

int FUN_0c0ddba0(int a4, int a5)
{
    float u3;
    float u6;
    float u11;
    float u16;
    int stk[8];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    nlPushMatrix(0xC9484A8);
    FUN_0c0db430((*(int *)(((int)stk + 8))), (((int)stk + 4) + 0x8));
    u3 = *(float *)(((int)stk + 24));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) * (1.0f / u3));
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) * (1.0f / u3));
    u6 = *(float *)0xC0DDCC4;
    u11 = (*(float *)0xC20CE40);
    u11 = u11 + u6 * (((*(float *)(((int)stk + 12))) + 1.0f) * (*(float *)0xC20CE34));
    *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = u11;
    u16 = (*(float *)0xC20CE3C);
    u16 = u16 + u6 * (((-(*(float *)(((((int)stk + 4) + 0xC) + 0x0)))) + 1.0f) * (*(float *)0xC20CE38));
    *(float *)((0x4 + (*(int *)(((int)stk + 4))))) = u16;
    return (nlPopMatrix(0x1));
}

int kdSetDeviceResetEx(int a4, int a5)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0xC231FAC)) == 0) {
        mpdrv_dpf(0xC237B88);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreset_ns(a4);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a5, t2);
    }
    *(unsigned char *)(((*(int *)0xC231FAC) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC98E18C)))->v)) != 0) {
        kdRecvFrame();
    }
    return t2;
}

int FUN_0c0109b4(void)
{
    int t0;

    *(unsigned int *)0xC23ED6C = 0x3;
    *(unsigned int *)0xC2475B4 = 0x100;
    *(unsigned int *)0xC23A1A4 = 0x0;
    *(unsigned int *)0xC23EDAC = 0x0;
    *(unsigned int *)0xC23ED84 = 0x0;
    *(unsigned int *)0xC23A180 = 0x0;
    *(unsigned int *)0xC23A190 = 0x0;
    *(unsigned int *)0xC23A18C = 0x0;
    *(unsigned int *)0xC23A184 = 0x0;
    *(unsigned int *)0xC23A188 = 0x0;
    *(unsigned int *)0xC23ED50 = 0x0;
    *(unsigned int *)0xC23A258 = 0x0;
    *(unsigned int *)0xC23A194 = 0x0;
    *(unsigned int *)0xC23ED70 = 0x0;
    *(unsigned int *)0xC23ED74 = 0x0;
    *(unsigned int *)0xC23ED78 = 0x0;
    *(unsigned int *)0xC23ED7C = 0x0;
    *(unsigned int *)0xC23EDE4 = 0x0;
    *(unsigned int *)0xC23EDE0 = 0x0;
    t0 = FUN_0c0c523c();
    *(unsigned int *)0xC23ECFC = 0xC2087EC;
    *(unsigned int *)0xC23A1A8 = 0x0;
    *(unsigned int *)0xC23A1B8 = 0x0;
    *(unsigned int *)0xC23A1B4 = 0x0;
    *(unsigned int *)0xC23A1B0 = 0x0;
    *(unsigned int *)0xC23A1AC = 0x0;
    *(unsigned int *)0xC23A1BC = 0x0;
    return t0;
}

int FUN_0c0112b0(int a4)
{
    int t0;
    int t2;
    int t6;
    int t7;
    int t8;
    int t9;

    t0 = FUN_0c0e262a(0xE020);
    *(unsigned int *)0xC23EB08 = t0;
    *(unsigned int *)0xC23EB0C = ((t0 + 0x1F) & 0xFFFFFFE0);
    FUN_0c0cbe74(0x1, 0x138, ((t0 + 0x1F) & 0xFFFFFFE0));
    t2 = FUN_0c0e262a(0x2020);
    FUN_0c0cbe74(0x1, (*(int *)(((a4 << 2) + 0xC1EF440))), ((t2 + 0x1F) & 0xFFFFFFE0));
    t6 = 0x1080;
    t7 = ((*(int *)0xC23EB0C) + 0xC0DF);
    t8 = ((t2 + 0x1F) & 0xFFFFFFE0);
    for (;;) {
        t9 = *(signed char *)((t8 + 0x0));
        t8 = (t8 + 0x1);
        t6 = (t6 - 0x1);
        *(unsigned char *)((t7 + 0x0)) = t9;
        t7 = (t7 + 0x1);
        if (t6 == 0) {
            break;
        }
    }
    *(unsigned char *)((((*(int *)0xC23EB0C) + 0xD87D) + 0x0)) = (*(signed char *)((a4 + 0xC1EF450)));
    return FUN_0c0e2a4c(t2);
}

int FUN_0c01898c(int a4)
{
    float t2;
    int t6;

    t2 = nlLength((a4 + 0x30), (0x254 + (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)))));
    if (t2 > ((((struct o1E4_float *)(a4))->v))) {
        t6 = (((((struct o224_int *)(a4))->v)) + 0x1);
    } else {
        t6 = ((((struct o224_int *)(a4))->v));
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAZ(((((struct o70_short *)(a4))->v)));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    FUN_0c0c465c(t6);
    nlPopMatrix(0x1);
    return FUN_0c01843e();
}

int FUN_0c04d270(int a4, int a5)
{
    int t24;
    int t17;

    if ((((((struct o2EC_int *)(a4))->v)) & 12) != 0) {
        FUN_0c04c98e(a4, (*(int *)(((((((struct oCC_int *)(a4))->v)) << 2) + 0xC246FF0))));
    }
    if (((*(int *)((a5 + 0x0))) & 0x606) != 0) {
        (((struct o3AC_uint *)(a4))->v) = (((((struct o3AC_int *)(a4))->v)) + 0x1);
    }
    t24 = 0x2B4;
    if (((((struct o2B4_int *)(a4))->v)) == 0xC7) {
        if ((int)((((struct o3AC_int *)(a4))->v)) < (int)0x10) {
            t17 = *(int *)(((((((struct oCC_int *)(a4))->v)) << 2) + 0xC246FF0));
            (((struct o2C4_uint *)(a4))->v) = 0x391;
            (((struct o2CC_uint *)(a4))->v) = 0x1;
            (((struct o2C4_uint *)(t17))->v) = (((((struct o2C4_int *)(a4))->v)) + 0x1);
            (((struct o2CC_uint *)(t17))->v) = 0x1;
            (((struct o210_uint *)(a4))->v) = 0x4F;
            (((struct o3AC_uint *)(a4))->v) = 0x0;
        }
        t24 = 0x3AC;
    }
    return t24;
}

int FUN_0c054e36(int a4)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t7;
    int t2;
    int t6;

    t0 = *(int *)((a4 + 0xBC));
    t1 = (t0 & 0x1);
    t3 = 0xC247AFC;
    t4 = 0x0;
    t5 = (0x344 + a4);
    t7 = (0x34C + a4);
    for (;;) {
        if ((int)(*(int *)((t5 + 0x0))) > (int)0x3) {
            t6 = (*(int *)((t7 + 0x0)));
            t1 = 0x21C;
            t6 = (t6 << 2);
            t6 = (t6 + 0xC2475D4);
            t6 = (*(int *)((t6 + 0x0)));
            t3 = (*(int *)((t6 + t1)));
            if ((int)t3 > 0) {
                t2 = (((((t0 & 0x1) << 2) + (t0 & 0x1)) << 2) + 0xC247AFC);
                t2 = (t2 + 0x4);
                t3 = (*(int *)((((0x344 + a4) + t4) + 0x0)));
                t2 = (t2 + t4);
                *(unsigned int *)((t2 + 0x0)) = t3;
                t3 = (*(int *)((t6 + t1)));
                *(unsigned int *)(((((((((t0 & 0x1) << 2) + (t0 & 0x1)) << 2) + 0xC247AFC) + 0xC) + t4) + 0x0)) = t3;
            }
            t1 = 0x330;
            *(unsigned int *)(((((((t0 & 0x1) << 2) + (t0 & 0x1)) << 2) + 0xC247AFC) + 0x0)) = (*(int *)((a4 + t1)));
        }
        t5 = (t5 + 0x4);
        t4 = (t4 + 0x4);
        t7 = (t7 + 0x4);
        if ((unsigned int)t5 >= (unsigned int)((0x344 + a4) + 0x8)) {
            break;
        }
    }
    return t1;
}

int FUN_0c050f1c(int a4, int a5, int a6, int a7)
{
    int stk[3];

    if (((*(int *)((a4 + 0x2A0))) & 1) != 0) {
        *(unsigned int *)((a4 + 0x2C4)) = 0x260;
    } else {
        *(unsigned int *)((a4 + 0x2C4)) = 0x262;
    }
    *(unsigned int *)((a4 + 0x328)) = 0x0;
    *(unsigned int *)((a4 + 0x20C)) = 0x4000;
    if ((*(int *)0xC23A1A0) != 3) {
        FUN_0c0cc3f8((*(int *)(((((*(int *)((a4 + 0xC0))) >> 1) << 2) + 0xC1FE888))), a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    }
    if (((*(int *)0xC23A1A8) & 0x101) == 0) {
        *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC23EDE0)) = 0x6;
        return FUN_0c050f98(a4);
    }
    *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x7;
    *(unsigned int *)((a4 + 0x0)) = 0xC051198;
    return 0xC247030;
}

int FUN_0c054eb2(int a4)
{
    int t0;
    int t25;

    t0 = *(int *)((a4 + 0xBC));
    t25 = 0x0;
    if ((int)(*(int *)(((((((t0 & 0x1) << 2) + (t0 & 0x1)) << 2) + 0xC247AFC) + 0x0))) <= (int)0x1) {
    } else {
        t25 = 0x0;
        if ((*(int *)(((((((t0 & 0x1) << 2) + (t0 & 0x1)) << 2) + 0xC247AFC) + 0x4))) != 0) {
            *(unsigned int *)(((*(int *)((((FUN_0c05518c(a4, (*(int *)(((((((t0 & 0x1) << 2) + (t0 & 0x1)) << 2) + 0xC247AFC) + 0x4))), 0x1)) << 2) + 0xC2475D4))) + 0x21C)) = (*(int *)(((((((t0 & 0x1) << 2) + (t0 & 0x1)) << 2) + 0xC247AFC) + 0xC)));
            t25 = 0x1;
        }
        if ((*(int *)(((((((t0 & 0x1) << 2) + (t0 & 0x1)) << 2) + 0xC247AFC) + 0x8))) != 0) {
            *(unsigned int *)(((*(int *)((((FUN_0c05518c(a4, (*(int *)(((((((t0 & 0x1) << 2) + (t0 & 0x1)) << 2) + 0xC247AFC) + 0x8))), 0x1)) << 2) + 0xC2475D4))) + 0x21C)) = (*(int *)(((((((t0 & 0x1) << 2) + (t0 & 0x1)) << 2) + 0xC247AFC) + 0x10)));
        }
        FUN_0c054e1c((t0 & 0x1));
    }
    return t25;
}

int FUN_0c06eb74(void)
{
    FUN_0c06e9cc(0xC0FBAC4, 0x1);
    return ((int (*)(int, int))(0xC06EB08))(0xC0FBB84, 0x2);
}


int FUN_0c08b730(int a4, int a5, int a6, int a7)
{
    int t0;
    int t5;
    int t11;
    int t2;
    int t3;
    int t10;

    t0 = *(int *)((a4 + 0x38));
    if (((*(int *)((((((t0 << 2) + t0) << 2) + 0xC248CBC) + 0x0))) == a4) && (t2 = *(int *)((a4 + 0x38)), t3 = *(int *)((0xC247030 + (t2 << 2))), t3 == 4)) {
        t10 = a4;
    } else {
        *(unsigned int *)(((*(int *)((a4 + 0x30))) + 0x38C)) = 0x0;
        *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC248CBC) + 0x0)) = 0x0;
        t5 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    t11 = *(int *)((a4 + 0x40));
    *(unsigned int *)((a4 + 0x40)) = (t11 - 1);
    if ((int)(t11 - 1) <= 0) {
        *(float *)((((((t0 << 2) + t0) << 2) + 0xC248CBC) + 0x4)) = ((*(float *)((((((t0 << 2) + t0) << 2) + 0xC248CBC) + 0x4))) - (*(float *)(((0x44 + a4) + 0x0))));
        if (!((*(float *)((((((t0 << 2) + t0) << 2) + 0xC248CBC) + 0x4))) > 0.099999994f)) {
            *(unsigned int *)(((*(int *)((a4 + 0x30))) + 0x38C)) = 0x0;
            *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC248CBC) + 0x0)) = 0x0;
            return ((int (*)(int))(FUN_0c0e19f2))(t10);
        }
        return 0x4;
    }
    return 0x40;
}

int FUN_0c0a5ac4(void)
{
    int t0;
    int t1;

    t0 = FUN_0c0e262a(0x5020);
    *(unsigned int *)0xC249904 = t0;
    *(unsigned int *)0xC249908 = ((t0 + 0x1F) & 0xFFFFFFE0);
    *(unsigned int *)0xC2498B4 = ((t0 + 0x1F) & 0xFFFFFFE0);
    *(unsigned int *)0xC2498B8 = (((t0 + 0x1F) & 0xFFFFFFE0) + 0x4B0);
    *(unsigned int *)0xC2498BC = ((((t0 + 0x1F) & 0xFFFFFFE0) + 0x4B0) + 0x4B0);
    *(unsigned int *)0xC2498C0 = (((((t0 + 0x1F) & 0xFFFFFFE0) + 0x4B0) + 0x4B0) + 0x4B0);
    *(unsigned int *)0xC2498D4 = (0x4B0 + (((((t0 + 0x1F) & 0xFFFFFFE0) + 0x4B0) + 0x4B0) + 0x4B0));
    t1 = *(int *)0xC2498D4;
    *(unsigned int *)0xC2498D8 = (t1 + 0x12C0);
    *(unsigned int *)0xC2498DC = (0x12C0 + (t1 + 0x12C0));
    *(unsigned int *)0xC249890 = 0x1;
    *(unsigned int *)0xC24989C = 0x0;
    *(unsigned int *)0xC249898 = 0x0;
    *(unsigned int *)0xC249894 = 0x0;
    *(unsigned int *)0xC2498AC = 0x0;
    *(unsigned int *)0xC2498A8 = 0x0;
    *(unsigned int *)0xC2498A4 = 0x0;
    *(unsigned int *)0xC2498A0 = 0x0;
    return 0xC24989C;
}

int FUN_0c0a6870(int a4, int a5, int a6, float f4, float f5, float f6)
{
    int stk[14];

    *(float *)(((int)stk + 16)) = f4;
    *(float *)(((int)stk + 12)) = f5;
    *(float *)(((int)stk + 8)) = f6;
    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 20))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    *(float *)(((int)stk + 36)) = (*(float *)(((int)stk + 16)));
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 8)));
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    *(float *)((a6 + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((a6 + 0x4) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((a6 + 0x8) + 0x0)) = (*(float *)(((int)stk + 32)));
    return (nlPopMatrix(0x1));
}

int FUN_0c0a6704(int a4, int a5, int a6)
{
    int stk[11];

    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(short *)((a5 + 0x2))));
    nlRotateAX((*(short *)((a5 + 0x0))));
    nlRotateAZ((*(short *)((a5 + 0x4))));
    *(float *)(((int)stk + 16)) = (*(float *)((a4 + 0x0)));
    *(float *)(((int)stk + 20)) = (*(float *)((a4 + 0x4)));
    *(float *)(((int)stk + 24)) = (*(float *)((a4 + 0x8)));
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)((a6 + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)(((a6 + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)(((a6 + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
    return (nlPopMatrix(0x1));
}

int FUN_0c0a6688(int a4, int a5, int a6)
{
    int stk[11];

    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAZ((*(short *)((a5 + 0x4))));
    nlRotateAY((*(short *)((a5 + 0x2))));
    nlRotateAX((*(short *)((a5 + 0x0))));
    *(float *)(((int)stk + 16)) = (*(float *)((a4 + 0x0)));
    *(float *)(((int)stk + 20)) = (*(float *)((a4 + 0x4)));
    *(float *)(((int)stk + 24)) = (*(float *)((a4 + 0x8)));
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)((a6 + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)(((a6 + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)(((a6 + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
    return (nlPopMatrix(0x1));
}

int FUN_0c0b39ba(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0B3A88, 0xB0);
    FUN_0c0e19d0(t0);
    (((struct o70_uint *)(t0))->v) = 0x206B;
    *(unsigned int *)((t0 + 0x30)) = 0x206C;
    (((struct o34_float *)(t0))->v) = 320.0f;
    (((struct o38_float *)(t0))->v) = 240.0f;
    (((struct o3C_float *)(t0))->v) = 0.00139999995f;
    (((struct o40_float *)(t0))->v) = 1.0f;
    (((struct o44_float *)(t0))->v) = 1.0f;
    (((struct o54_float *)(t0))->v) = 1.0f;
    (((struct o50_float *)(t0))->v) = 1.0f;
    (((struct o5C_float *)(t0))->v) = 0.5f;
    (((struct o64_uint *)(t0))->v) = 0x300A;
    (((struct o60_uint *)(t0))->v) = 0xFFFFFFFF;
    (((struct o74_float *)(t0))->v) = ((((struct o34_float *)(t0))->v));
    (((struct o78_float *)(t0))->v) = ((((struct o38_float *)(t0))->v));
    (((struct o7C_float *)(t0))->v) = ((((struct o3C_float *)(t0))->v));
    return 0x7C;
}

int FUN_0c0c27a0(int a4)
{
    FUN_0c084104();
    FUN_0c084570(0x80, 0xF, 0x0, 0x0, 0x0);
    FUN_0c08455e((*(float *)((a4 + 0xAC))));
    FUN_0c0844dc((*(int *)(((0x9C + a4) + 0x0))), (*(int *)(((0x9C + a4) + 0x4))), 0x0, (*(float *)((a4 + 0xA8))));
    FUN_0c0844dc((*(int *)(((0x9C + a4) + 0x0))), (*(int *)(((0x9C + a4) + 0x4))), 0x1, (*(float *)((a4 + 0xA8))));
    FUN_0c0847a2((*(int *)((a4 + 0xB0))));
    FUN_0c0847f4((*(float *)((a4 + 0xB4))), (*(float *)((a4 + 0xB8))));
    FUN_0c0847b8((0xBC + a4));
    return FUN_0c0847de((0xC8 + a4));
}

int FUN_0c0cf88c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t7;
    int t8;

    t0 = *(int *)0xC23A1A8;
    if (((0x20 & t0) != 0) && (((0x2 & t0) != 0) && ((0x40 & t0) == 0))) {
        return 0x0;
    }
    if ((t0 & 0x2) != 0) {
        t7 = *(short *)((((a5 * 0x2C) + 0xC522B04) + 0x0));
        if ((t7 != 5) && (t8 = *(int *)0xC23A1B0, t7 == (t8 + 0x1))) {
            *(unsigned short *)((((a5 * 0x2C) + 0xC522B04) + 0x0)) = (t7 + 0x1);
        }
        if ((int)(*(signed char *)(((((a6 << 2) << 1) + (((a5 * 0x2C) + 0xC522B04) + 0x4)) + 0x1))) < (int)0x63) {
            *(unsigned char *)(((((a6 << 2) << 1) + (((a5 * 0x2C) + 0xC522B04) + 0x4)) + 0x1)) = ((*(signed char *)(((((a6 << 2) << 1) + (((a5 * 0x2C) + 0xC522B04) + 0x4)) + 0x1))) + 0x1);
        }
    }
    if ((int)(*(signed char *)(((((a6 << 2) << 1) + (((a5 * 0x2C) + 0xC522B04) + 0x4)) + 0x2))) < (int)0x63) {
        *(unsigned char *)(((((a6 << 2) << 1) + (((a5 * 0x2C) + 0xC522B04) + 0x4)) + 0x2)) = ((*(signed char *)(((((a6 << 2) << 1) + (((a5 * 0x2C) + 0xC522B04) + 0x4)) + 0x2))) + 0x1);
    }
    if ((int)(*(int *)(((((a6 << 2) << 1) + (((a5 * 0x2C) + 0xC522B04) + 0x4)) + 0x4))) > (int)a4) {
        *(unsigned char *)(((((a6 << 2) << 1) + (((a5 * 0x2C) + 0xC522B04) + 0x4)) + 0x0)) = a7;
        *(unsigned int *)(((((a6 << 2) << 1) + (((a5 * 0x2C) + 0xC522B04) + 0x4)) + 0x4)) = a4;
        return 0x1;
    }
    return 0x0;
}

void kmiRegisterCallback(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    if (a6 != 0) {
        *(unsigned int *)(((((a5 << 2) << 1) + (0x234 + a4)) + 0x0)) = a6;
        *(unsigned int *)((((0x234 + a4) + ((a5 << 2) << 1)) + 0x4)) = a7;
    } else {
        FUN_0c20d298(a4, a5);
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int FUN_0c0108c6(void)
{
    int t0;
    int t3;
    int t7;

    *(unsigned int *)0xC23A1A0 = 0x2;
    *(unsigned int *)0xC522924 = 0x1;
    t0 = syCblCheck();
    t3 = 0x0;
    if (t0 != 1) {
        t3 = 0x9;
        if (t0 != 0) {
            t3 = 0x13;
        }
    }
    FUN_0c0d8d00(t3, 0x80, 0x1);
    FUN_0c0ddd20(0.0f, 0.0f, 640.0f, 480.0f);
    t7 = syCblCheck();
    if (t7 == 2) {
        kmSetPixelClipping(0x0, 0x0, 0x27F, ((*(int *)0xC23EAB8) - 1));
    }
    *(unsigned int *)0xC31FDA0 = 0x0;
    *(unsigned int *)0xC23A260 = 0x0;
    *(unsigned int *)0xC23A25C = 0x1;
    return 0xC23A25C;
}

int FUN_0c015d04(void)
{
    int t1;
    int t23;
    int t14;

    t23 = *(int *)0xC23EB34;
    t1 = *(int *)0xC23EB20;
    if (t23 != 0) {
        if (t23 != 1) {
        } else {
            FUN_0c0156ea(t1, 0xC522A54, 0x3E0, 0x1);
            t23 = *(int *)0xC23EB1C;
            if (t23 == 9) {
                *(unsigned int *)0xC23EB34 = 0x9;
            }
        }
    } else {
        t23 = FUN_0c015436(t1, 0x1);
        if (((int)(*(int *)0xC23EB24) < 0) && (t14 = *(int *)0xC23EB24, t14 != 0xFFFFFF05)) {
            *(unsigned int *)0xC23EB34 = 0x9;
        } else {
            FUN_0c0e631c(0xC522D94, 0xC20116C, 0x20);
            t23 = FUN_0c0b70b4();
            *(unsigned int *)0xC23EB34 = ((*(int *)0xC23EB34) + 0x1);
        }
    }
    return t23;
}

int FUN_0c01a5b8(int a4, float f4)
{
    int t0;
    int t1;
    int t2;
    float u15;
    int t5;
    int t6;

    t0 = ((int (*)(int, float))(FUN_0c0c0340))(0xC23F1AC, f4);
    t1 = FUN_0c0e5dc0();
    t2 = 0x205A;
    if ((int)a4 > (int)0x168) {
        t2 = 0x2050;
    }
    *(unsigned int *)0xC23F1E4 = (t1 + t2);
    if (((int)(*(int *)0xC23F250) >= (int)a4) && (t5 = *(int *)0xC23F1E4, t6 = *(int *)0xC23F254, t6 == t5)) {
        *(float *)0xC23F258 = ((*(float *)0xC23F258) - 0.0388888866f);
    } else {
        *(unsigned int *)0xC23F254 = (*(int *)0xC23F1E4);
        *(float *)0xC23F258 = (*(float *)0xC01A6B8);
    }
    *(unsigned int *)0xC23F250 = a4;
    u15 = *(float *)0xC23F258;
    *(float *)0xC23F1F8 = u15;
    *(float *)0xC23F1F4 = u15;
    return ((int (*)(int))(FUN_0c0c0340))(0xC23F1E4);
}

int FUN_0c02db82(int a4)
{
    int t8;
    int t10;
    int t17;

    if (((((struct o478_int *)(a4))->v)) == 0) {
        (((struct o478_uint *)(a4))->v) = 0xC02DB78;
        (((struct o5CC_uint *)(a4))->v) = 0x0;
    }
    if ((int)((((struct o304_int *)(a4))->v)) < (int)((((struct o308_int *)(a4))->v))) {
        (((struct o50C_uint *)(a4))->v) = 0x0;
        (((struct o4D4_uint *)(a4))->v) = 0x1;
    }
    t8 = (((struct o4D4_int *)(a4))->v);
    if (t8 != 0) {
        t17 = t8;
        if (t8 != 1) {
        } else {
            t10 = ((int (*)(int))(((((struct o478_int *)(a4))->v))))(a4);
            (((struct o478_uint *)(a4))->v) = 0x0;
            (((struct o4F0_uint *)(a4))->v) = 0x2;
            (((struct o4F4_uint *)(a4))->v) = 0x1;
            (((struct o5CC_uint *)(a4))->v) = (*(int *)0xC246300);
            t17 = 0x5CC;
        }
    } else {
        (((struct o510_uint *)(a4))->v) = 0x2;
        (((struct o50C_uint *)(a4))->v) = 0x1;
        (((struct o4F4_uint *)(a4))->v) = 0x1D;
        t17 = 0x4F4;
    }
    return t17;
}

int FUN_0c032394(int a4)
{
    int t0;
    int t3;
    int t6;
    int stk[6];

    t0 = *(int *)((a4 + 0x510));
    *(float *)(((int)stk + 4)) = ((*(float *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + 0xC))) - (*(float *)((a4 + 0x30))));
    t3 = *(int *)((a4 + 0x510));
    *(float *)(((int)stk + 8)) = ((*(float *)((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC23F268) + 0x10))) - (*(float *)((a4 + 0x34))));
    t6 = *(int *)((a4 + 0x510));
    *(float *)(((int)stk + 12)) = ((*(float *)(((0xC23F268 + (((((t6 << 1) + t6) << 2) << 2) << 2)) + 0x14))) - (*(float *)((a4 + 0x38))));
    return (FUN_0c037002(((int)stk + 4), (a4 + 0x60)));
}

int FUN_0c02f04a(int a4)
{
    int t0;
    int t1;
    int t2;
    int stk[6];

    t0 = (((struct oBC_int *)(a4))->v);
    t1 = FUN_0c0853d4(((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268), 1.0f);
    if (t1 == 0) {
        (((struct o538_uint *)(a4))->v) = 0x4;
        return 0x0;
    }
    t2 = FUN_0c02ef26(a4, (((int)stk + 4) + 0x4), ((int)stk + 4), (((int)stk + 4) + 0x8));
    if (t2 != 0) {
        (((struct o510_uint *)(a4))->v) = ((((struct oBC_int *)((*(int *)(((int)stk + 8)))))->v));
        if ((int)((((struct o528_int *)(a4))->v)) > (int)(*(int *)(((int)stk + 4)))) {
            (((struct o538_uint *)(a4))->v) = 0x1;
            return 0x0;
        }
        (((struct o54C_uint *)(a4))->v) = (*(int *)(((int)stk + 4)));
        (((struct o548_uint *)(a4))->v) = (*(int *)(((int)stk + 12)));
        return 0x1;
    }
    (((struct o538_uint *)(a4))->v) = 0x1;
    return 0x0;
}


int FUN_0c037334(int a4, int a5)
{
    int t5;
    int t7;
    int t1;
    int t2;
    int t3;
    int stk[6];

    *(unsigned int *)(((int)stk + 4)) = 0xFFFF0000;
    if ((((((struct o508_int *)(a4))->v)) == 0) && ((t1 = (((struct o50C_int *)(a4))->v), t1 != 0) && (t2 = (((struct o510_int *)(a4))->v), t3 = *(int *)((((t2 << 2) + 0xC247030) + 0x0)), t3 != 0))) {
        t5 = (((struct o3E4_int *)(a4))->v);
        t7 = (((struct o3E4_int *)((*(int *)((((((((struct o510_int *)(a4))->v)) << 2) + 0xC246FF0) + 0x0)))))->v);
        FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (((((struct o30_float *)(((((a5 << 2) << 2) << 2) + t5)))->v)) - ((((struct o70_float *)(t7))->v))), (((((struct o4_float *)((((((a5 << 2) << 2) << 2) + t5) + 0x30)))->v)) - ((((struct o4_float *)((t7 + 0x70)))->v))), (((((struct o8_float *)((((((a5 << 2) << 2) << 2) + t5) + 0x30)))->v)) - ((((struct o8_float *)((t7 + 0x70)))->v))));
    }
    return (*(int *)(((int)stk + 4)));
}

int FUN_0c035e22(int a4)
{
    int t1;
    int t2;
    int t7;
    int t8;
    int t15;
    int t6;
    int stk[6];

    t1 = *(int *)(((((((struct o510_int *)(a4))->v)) << 2) + 0xC246FF0));
    t2 = FUN_0c0349ea(a4, ((int)stk + 4), (((int)stk + 4) + 0x4));
    if (t2 == 0) {
        (((struct o538_uint *)(a4))->v) = 0x8;
        t15 = 0x0;
    } else {
        if (((((((struct o20C_int *)(t1))->v)) & 0x402CDE00) == 0) && (t6 = (((struct o328_int *)(t1))->v), (int)t6 <= 0)) {
            t7 = (((struct oBC_int *)(a4))->v);
            t8 = FUN_0c0853d4(((((((t7 << 1) + t7) << 2) << 2) << 2) + 0xC23F268), 1.0f);
            if (t8 == 0) {
                (((struct o538_uint *)(a4))->v) = 0x4;
                t15 = 0x0;
            } else {
                (((struct o538_uint *)(a4))->v) = 0x0;
                t15 = 0x1;
            }
        } else {
            (((struct o538_uint *)(a4))->v) = 0x5;
            t15 = 0x0;
        }
    }
    return t15;
}

int FUN_0c03c966(int a4)
{
    int t10;
    int t18;
    int stk[5];

    FUN_0c03bd28(a4, 0x0, 0x5, 0x5, 0x0);
    if ((int)((((struct o304_int *)(a4))->v)) <= 0) {
        t18 = 0x5C0;
        if (((((struct o5C0_int *)(a4))->v)) == 0) {
            (((struct o5C0_uint *)(a4))->v) = 0x1;
            t18 = (FUN_0c0cc3f8(0xA2EA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
        }
    } else {
        t10 = (((struct o57C_int *)(a4))->v);
        if ((t10 != 0) && ((t10 != 1) && ((t10 != 2) && (t10 != 3)))) {
            t18 = t10;
            if (t10 != 4) {
            } else {
                t18 = (FUN_0c0cc3f8(0xA2EA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
            }
        } else {
            t18 = (FUN_0c0cc3f8(0x12EA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
        }
    }
    return t18;
}

int FUN_0c04a058(int a4)
{
    int t8;

    *(unsigned int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247030)) = 0x4;
    (((struct oD8_uint *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x0)) = 0xC04A118;
    FUN_0c051a48(a4);
    FUN_0c092858(a4);
    (((struct oA4_uint *)(a4))->v) = 0xA7F;
    (((struct o1BC_uint *)(a4))->v) = 0x0;
    if (((*(int *)0xC23A1A8) & 0x101) != 0) {
        (((struct o1CC_uint *)(a4))->v) = 0x0;
        FUN_0c04994c(((((struct oBC_int *)(a4))->v)));
        *(float *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC24758C)) = 0.0f;
        *(unsigned int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247584)) = 0x0;
        t8 = (((struct oBC_int *)(a4))->v);
        *(unsigned int *)(((0xC247594 + (t8 << 2)) + 0x0)) = (*(int *)(((t8 << 2) + 0xC24759C)));
    }
    return FUN_0c049b80(a4);
}

int FUN_0c04fb24(void)
{
    int t1;
    int t2;
    int t4;
    int t14;
    int t0;
    int t3;
    int t11;

    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        t4 = *(int *)((t2 + 0xC247030));
        t14 = t4;
        if (t4 == 4) {
            t3 = 0xC246FF0;
            t3 = (t3 + t1);
            t3 = (*(int *)((t3 + 0x0)));
            if (((*(int *)((t3 + 0x20C))) & 12) != 0) {
                FUN_0c049b80(t3);
            } else {
                t11 = t0;
            }
            t0 = t11;
            *(unsigned int *)((t3 + 0x1B0)) = 0xFFFFFFFF;
            *(unsigned int *)((t3 + 0x394)) = 0xFFFFFFFF;
            t0 = (*(int *)((t3 + 0xA4)));
            t0 = (t0 | 0x2);
            *(unsigned int *)((t3 + 0xA4)) = t0;
            *(unsigned int *)((t3 + 0x328)) = 0x0;
            *(unsigned short *)((t3 + 0x454)) = 0x0;
            *(float *)((t3 + 0x458)) = 1.0f;
            t14 = 0x458;
        }
        t0 = 0x8;
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)t0) {
            break;
        }
    }
    return t14;
}

int FUN_0c04fb9e(void)
{
    int t1;
    int t2;
    int t4;
    int t13;
    int t0;
    int t3;

    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        t4 = *(int *)((t2 + 0xC247030));
        t13 = t4;
        if (t4 == 4) {
            t3 = 0xC246FF0;
            t3 = (t3 + t1);
            t3 = (*(int *)((t3 + 0x0)));
            t0 = ((((struct o394_int *)(t3))->v));
            t13 = 0x394;
            if ((int)t0 >= 0) {
                t0 = 0xC049B80;
                FUN_0c049b80(t3);
                (((struct o394_uint *)(t3))->v) = 0xFFFFFFFF;
                (((struct o1B0_uint *)(t3))->v) = 0xFFFFFFFF;
                t0 = ((((struct oA4_int *)(t3))->v));
                t0 = (t0 | 0x2);
                (((struct oA4_uint *)(t3))->v) = t0;
                (((struct o328_uint *)(t3))->v) = 0x0;
                (((struct o454_ushort *)(t3))->v) = 0x0;
                (((struct o458_float *)(t3))->v) = 1.0f;
                t13 = 0x458;
            }
        }
        t0 = 0x8;
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)t0) {
            break;
        }
    }
    return t13;
}

int FUN_0c0bffc4(void)
{
    int t1;
    int t4;

    t1 = FUN_0c0e19aa(0xC0C003E, 0xB0, (*(int *)0xC23ECF4));
    FUN_0c0e19d0(t1);
    t4 = 0xC1A4788;
    if ((*(int *)0xC23A1A0) == 0) {
        t4 = 0xC1A4774;
    }
    (((struct o34_float *)(t1))->v) = (*(float *)((t4 + 0x0)));
    (((struct o38_float *)(t1))->v) = ((((struct o4_float *)(t4))->v));
    (((struct o3C_float *)(t1))->v) = ((((struct o8_float *)(t4))->v));
    (((struct o40_float *)(t1))->v) = ((((struct oC_float *)(t4))->v));
    (((struct o44_float *)(t1))->v) = ((((struct oC_float *)(t4))->v));
    *(unsigned int *)((t1 + 0x30)) = (*(int *)((t4 + 0x10)));
    (((struct o5C_float *)(t1))->v) = 1.0f;
    (((struct o54_float *)(t1))->v) = 1.0f;
    (((struct o50_float *)(t1))->v) = 1.0f;
    (((struct o64_uint *)(t1))->v) = 0xA;
    (((struct o90_uint *)(t1))->v) = 0x3C;
    (((struct o60_uint *)(t1))->v) = 0xFFFFFFFF;
    return 0x60;
}

int FUN_0c0cbe74(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t5;
    int t11;

    t0 = ADXF_OpenAfs(a4, a5);
    *(unsigned int *)0xC521CBC = t0;
    t1 = ADXF_GetFsizeSct(t0);
    ADXF_ReadNw32((*(int *)0xC521CBC), t1, a6);
    for (;;) {
        t5 = FUN_0c0cbf40((*(int *)0xC521CBC));
        if (t5 == 4) {
            FUN_0c0e40ec(0x0, 0x100A0, 0x0);
            FUN_0c010a30();
        }
        if (t5 == 3) {
            break;
        }
    }
    t11 = ADXF_Close((*(int *)0xC521CBC));
    *(unsigned int *)0xC521CBC = 0x0;
    return t11;
}

int FUN_0c0b5e12(void)
{
    int t14;
    int stk[3];

    FUN_0c0da320(0x0);
    *(unsigned int *)0xC23A184 = 0x0;
    *(unsigned int *)0xC23ED9C = 0x0;
    *(unsigned int *)0xC2475B0 = 0x0;
    FUN_0c0169da(0x0);
    FUN_0c0169da(0x1);
    FUN_0c0bfa90();
    FUN_0c0e2400(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    FUN_0c0c45d0();
    FUN_0c0bf940(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    FUN_0c084a48();
    FUN_0c0498ce();
    FUN_0c054d8e();
    FUN_0c01c230();
    FUN_0c01d394();
    FUN_0c01d3c6();
    FUN_0c07e1e8();
    t14 = FUN_0c01fa90();
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    return t14;
}

int FUN_0c0e4ca0(int a4)
{
    int t0;
    int t1;
    int t4;
    int t6;
    int t8;
    int stk[4];

    *(unsigned short *)(((((int)stk + 4) + 0x6) + 0x0)) = a4;
    t0 = *(signed char *)(((int)stk + 10));
    t1 = *(signed char *)((0xC94C848 + (unsigned char)((((t0 << 1) + t0) << 2) << 1)));
    if (t1 != 1) {
        return t1;
    }
    t4 = *(short *)(((int)stk + 10));
    if ((*(signed char *)(((unsigned char)((((t4 << 1) + t4) << 2) << 1) + 0xC94C849))) != 0) {
        return 0xC94C849;
    }
    t6 = *(short *)(((int)stk + 10));
    *(unsigned int *)(((int)stk + 4)) = ((((t6 << 8) << 2) << 2) + 0x1A1);
    FUN_0c0e4428(((((t6 << 8) << 2) << 2) + 0x1A1));
    t8 = *(short *)(((int)stk + 10));
    *(unsigned char *)(((unsigned char)((((t8 << 1) + t8) << 2) << 1) + 0xC94C849)) = 0x1;
    return 0xC94C849;
}

int FUN_0c0e54ec(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int stk[5];

    *(unsigned short *)(((((int)stk + 4) + 0x6) + 0x0)) = a4;
    *(unsigned short *)(((((int)stk + 4) + 0x4) + 0x0)) = a5;
    *(unsigned short *)(((((int)stk + 4) + 0x2) + 0x0)) = a6;
    t0 = *(signed char *)(((int)stk + 10));
    t1 = *(signed char *)((0xC94C848 + (unsigned char)((((t0 << 1) + t0) << 2) << 1)));
    if (t1 != 1) {
        return t1;
    }
    FUN_0c0e4428(((((((*(short *)(((int)stk + 10))) << 8) << 2) << 2) | ((*(short *)(((int)stk + 8))) << 16)) | 0xAA1));
    return (FUN_0c0e4428(((((((*(short *)(((int)stk + 10))) << 8) << 2) << 2) | ((*(short *)(((int)stk + 6))) << 16)) | 0xBA1)));
}


void FUN_0c09c8c0(int a4)
{
    int t2;
    int t4;
    int t5;

    if ((*(int *)0xC249710) == 0) {
        t2 = FUN_0c0e19aa(0xC09C4F4, 0x5850, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t2);
        *(unsigned int *)((t2 + 0x30)) = a4;
        t4 = (((struct o2E8_int *)(a4))->v);
        (((struct o40_uint *)(t2))->v) = (((int)t4 >= 0) ? (0x2 << (t4 & 31)) : ((-(int)t4 & 31) ? ((int)0x2 >> (-(int)t4 & 31)) : ((int)0x2 >> 31)));
        t5 = 0x2A7;
        for (;;) {
            FUN_0c0cbafc(t5, 0x2, 0xFC007000, 0x84000000);
            t5 = (t5 + 0x1);
            if ((int)t5 >= (int)0x2B7) {
                break;
            }
        }
        FUN_0c0cbafc(0x291, 0x2, 0xFC007000, 0x84000000);
        *(unsigned int *)0xC249710 = 0x1;
    }
}

int FUN_0c0ac46a(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC0AC548, 0xBC, (*(int *)0xC23ECE0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x4)) = 0xC0AC45C;
    (((struct o74_uint *)(t1))->v) = ((a4 * 0x1C) + 0xC10ED74);
    *(unsigned int *)0xC24FA34 = (t1 + 0x34);
    FUN_0c0a81ac((*(int *)((((((struct o74_int *)(t1))->v)) + 0x10))), 0x0, (t1 + 0x78), (0x90 + t1));
    if ((int)(*(int *)0xC23ED50) < (int)0x68) {
        (((struct oB4_uint *)(t1))->v) = (*(short *)0xC0FE476);
    }
    FUN_0c0cbafc(0x3DA, 0x2, 0xFC007000, 0x84002000);
    return FUN_0c0cbafc(0x291, 0x2, 0xFC007000, 0x84002000);
}

float FUN_0c0ae738(int a4, int a5)
{
    int t1;
    float u7;
    float u8;

    t1 = FUN_0c0e19aa(0xC0AE7B0, 0xB4, (*(int *)0xC24FA2C));
    FUN_0c0e19d0(t1);
    (((struct o88_uint *)(t1))->v) = a4;
    (((struct o78_uint *)(t1))->v) = (unsigned short)(*(short *)(((((a5 << 2) << 1) + 0xC202450) + 0x2)));
    (((struct o74_float *)(t1))->v) = (((((struct o4_float *)((((a5 << 2) << 1) + 0xC202450)))->v)) * (*(float *)0xC0AE868));
    u7 = *(float *)0xC0AE870;
    u8 = (*(float *)0xC0AE86C);
    u8 = u8 + u7 * (float)a4;
    (((struct o30_float *)(t1))->v) = u8;
    (((struct o34_float *)(t1))->v) = (*(float *)0xC0AE874);
    (((struct o38_float *)(t1))->v) = (*(float *)0xC0AE878);
    (((struct o90_float *)(t1))->v) = 1.0f;
    return u7;
}


