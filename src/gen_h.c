/* Straight-line functions with calls and guards (batch gen_h): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int ADXF_GetFsizeSct(int);
int ADXF_GetStat(int);
int ADXF_OpenAfs(void);
int ADXF_ReadNw32(int, int, int);
int ADXT_Stop(void);
int FUN_0c0169da(int);
int FUN_0c016d74(void);
int FUN_0c018142(void);
int FUN_0c018232(void);
int FUN_0c01937a(void);
int FUN_0c01a38e(int, int);
int FUN_0c01c214(int, int);
int FUN_0c01c24e(void);
int FUN_0c01c274(void);
int FUN_0c01d3ee(int, int);
int FUN_0c04faa4(void);
int FUN_0c051a74(void);
int FUN_0c084218(void);
int FUN_0c0844dc(int, int, int, float);
int FUN_0c08498e(float, float, float);
int FUN_0c0849da(void);
int FUN_0c084b1a(int, int);
int FUN_0c0a87b4(int, int, int, int);
int FUN_0c0b70fe(void);
int FUN_0c0bdb70(int, int, int);
int FUN_0c0be88a(int, int);
int FUN_0c0bf88c(int, int);
int FUN_0c0c281c(int);
int FUN_0c0c3d90(int, int, int, int);
int FUN_0c0c3ef8(int);
int FUN_0c0c4654(void);
int FUN_0c0c47ae(int);
int FUN_0c0c4844(int, float);
int FUN_0c0c4ff0(int, int);
int FUN_0c0c6798(int, int, int);
int FUN_0c0c98ce(int, int);
int FUN_0c0c9a12(int);
int FUN_0c0ca538(int, int, int);
int FUN_0c0ca794(void);
int FUN_0c0ca9a8(int);
int FUN_0c0cac3a(int, float, float);
int FUN_0c0cbe74(int, int, int);
int FUN_0c0cf09e(int, int, int, int, int);
int FUN_0c0cf16a(int, int, int, int, int);
int FUN_0c0cf1b0(int, int, int, int);
int FUN_0c0cf808(void);
int FUN_0c0d432e(void);
int FUN_0c0d4b14(void);
int FUN_0c0d5d94(void);
int FUN_0c0d60a6(void);
int FUN_0c0d6ad4(void);
int FUN_0c0d6cea(void);
int FUN_0c0d76f0(int);
int FUN_0c0d80c0(int);
int FUN_0c0d80d0(int, int);
int FUN_0c0d8450(int);
int FUN_0c0db0a0(int, int);
int nlPrintf(int, ...);
int nlFogTableColor(int);
int FUN_0c0db1c0(int);
int FUN_0c0db320(int, int, int);
int nlGetMatrix(int);
int FUN_0c0db840(int);
int nlInvertMatrix(int);
int FUN_0c0dbda0(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0dc5a0(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0dcca0(int);
int nlObjPut(int);
int nlObjPutTrnsl(int, float);
int FUN_0c0df510(int);
int FUN_0c0df530(int);
int FUN_0c0df9fc(int, int);
int FUN_0c0dfcae(int, int);
int FUN_0c0dfd50(int);
extern int FUN_0c0e15d4();
int FUN_0c0e16c0(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e262a(int);
int FUN_0c0e2a4c(int);
int FUN_0c0e3c22(int, int);
int FUN_0c0e40ec(int, int, int);
int FUN_0c0e5f1c(void);
int _quick_evn_mvn(void);
int _quick_odd_mvn(int);
int FUN_0c0e6248(int);
int FUN_0c0e631c(int, int, int);
int FUN_0c0e6380(void);
int FUN_0c21045c(void);
int buDeleteFile(int);
int buInit(int, int, int, int);
int kmCreateTextureSurface(int, int, int, int);
int kmGarbageCollectTexture(void);
int kmGetFreeTextureMem(int, int);
int kmLoadTexture(int, int, int, int);
int kmProcessVertexRenderState(int);
int kmSetFogTable(void);
int thunk_kmSetFogTable(void);
int kmSetVertexRenderState(int);
int memset(int, int, int);
int syCfgExit(void);
int syCfgGetLanguage(int);
int syCfgGetSoundMode(int);
int syCfgInit(int);
int syRtcGetDate(int);
int FUN_0c0b4c10(void);
int FUN_0c0b9da0(void);
int FUN_0c0c0b9a(void);
int FUN_0c0c69b6(void);
int FUN_0c0ce8b8(int a4);
int FUN_0c0d6e1a(float f4);
int FUN_0c0b62a4(int a4);
float FUN_0c0c8cc8(int a4, float f4, float f5);
int FUN_0c0caeac(int a4);
int FUN_0c0d0f6c(void);
int FUN_0c0d19d4(void);
int FUN_0c0d7a00(int a4, int a5);
int FUN_0c0d7a40(int a4, int a5);
int FUN_0c0d7ab0(int a4, int a5);
int nlCommonTextureGarbageCollection(void);
int FUN_0c06defc(int a4);
int FUN_0c0b63ac(int a4);
int FUN_0c0c26dc(int a4);
int FUN_0c0c2764(int a4);
int FUN_0c0c4a00(int a4);
int FUN_0c0c4c54(void);
int FUN_0c0cf3b0(int a4);
int FUN_0c06ecaa(void);
int FUN_0c0b789c(int a4);
int FUN_0c0be8d2(int a4, int a5, int a6);
int FUN_0c0c0554(void);
int FUN_0c0cf908(void);
int FUN_0c0b5f5e(void);
int FUN_0c0b6702(void);
int FUN_0c0c0424(void);
int FUN_0c0c04cc(void);
void FUN_0c0ce57a(int a4);
int FUN_0c0b7596(int a4, int a5, int a6, int a7);
int FUN_0c0cbf40(int a4);
int FUN_0c0b06d0(void);
int FUN_0c0b4e02(void);
int FUN_0c0c4580(void);
int FUN_0c0c497c(int a4, float f4);
int FUN_0c0cbbf4(void);
int FUN_0c0b8b42(int a4);
int FUN_0c0b5fc2(void);
int FUN_0c0cc720(void);
int FUN_0c0ceaf8(int a4);
void FUN_0c0d42f6(void);
int FUN_0c0b6138(int a4);
int FUN_0c0c157e(int a4);
void FUN_0c0c99a0(int a4, int a5);
int FUN_0c0cc6ac(void);
int FUN_0c0bb1ec(int a4, int a5, int a6);
int FUN_0c0c0eac(int a4, int a5, int a6);
int FUN_0c0c0eda(int a4, int a5, float f4);
int FUN_0c0c0f08(int a4, int a5, int a6);
int FUN_0c0c2736(int a4);
void FUN_0c0c523c(void);
int FUN_0c0cacde(int a4, float f4, float f5);
int FUN_0c0bfa90(void);
int FUN_0c0c5184(int a4);
int FUN_0c0cbdb8(int a4, int a5);
int FUN_0c0caef0(void);
int FUN_0c0cc3cc(int a4, int a5);
int FUN_0c0cc860(void);
int nlInitTextureSurface(int a4, int a5);
int FUN_0c0b756c(void);
int FUN_0c0b8a12(void);
int FUN_0c0bc750(int a4, int a5);
int FUN_0c0c03da(void);
int FUN_0c0c4784(int a4, float f4);
int FUN_0c0c4898(int a4, float f4);
int FUN_0c0c8dd4(void);
int FUN_0c0cdf02(void);
void FUN_0c0ce10c(void);
int FUN_0c0ce88e(void);
int FUN_0c0cfd74(void);
int FUN_0c0cfd9e(int a4, int a5, int a6, int a7);
int FUN_0c0d1de6(void);
int FUN_0c0d1e10(int a4, int a5, int a6, int a7);
int FUN_0c0d7e90(int a4, int a5);
int FUN_0c0b9b8e(int a4);
int FUN_0c0c15f8(void);
void FUN_0c0c465c(int a4);
void FUN_0c0c475c(int a4, float f4);
int FUN_0c0ce784(int a4);
int FUN_0c0d8590(void);
int FUN_0c0bea20(int a4, int a5);
int FUN_0c0c0504(int a4);
int FUN_0c0c6694(void);
int FUN_0c0c65d2(void);
int FUN_0c0c8e1a(int a4);
int FUN_0c0d7af0(void);
int FUN_0c0b4f4a(void);
int FUN_0c0b530a(void);
int FUN_0c0b59ce(void);
int FUN_0c0c2506(void);
int FUN_0c0c35ca(void);
void FUN_0c0c4684(int a4);
void FUN_0c0c46a8(int a4);
int FUN_0c0cbeee(int a4, int a5, int a6);
int FUN_0c0cec76(int a4, int a5);
int FUN_0c0cf486(void);
int FUN_0c0d4184(void);
int nlCommonTextureClearTextureIndex(int a4, int a5);
int FUN_0c0c0340(int a4);
int FUN_0c0c366c(void);
int FUN_0c0c64aa(void);
int FUN_0c0cee40(void);
int FUN_0c0d1942(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0d3a3a(void);
int FUN_0c0bb0f4(int a4);
int FUN_0c0bb1a8(int a4, int a5);
int FUN_0c0bb114(int a4);
int FUN_0c0bb1c8(int a4, int a5);
int FUN_0c0bdb50(int a4, int a5, int a6);
int FUN_0c0bf908(int a4);
int FUN_0c0cddba(int a4);
int FUN_0c0cddda(int a4);
int FUN_0c0ce5b2(Stk4 s);
int FUN_0c0cea9c(void);
int FUN_0c0d2040(int a4, int a5);
int FUN_0c0b607c(void);
int FUN_0c0b68aa(void);
int FUN_0c0b75e8(void);
int FUN_0c0b976e(void);
int FUN_0c0b687e(void);
int FUN_0c0c2718(int a4);
void FUN_0c0ca844(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0ca6b4(int a4, int a5, int a6);
int FUN_0c0cdd9c(int a4);
void FUN_0c0ce2ac(int a4);
int FUN_0c0ce708(void);
int FUN_0c0ce752(void);
void FUN_0c0cf392(int a4);
void FUN_0c0d41a8(void);
int FUN_0c0b4b98(int a4);
int FUN_0c0c3d46(void);
int FUN_0c0c8dfe(int a4);
int FUN_0c0d19b8(int a4, int a5);
int FUN_0c0d85c0(int a4);
int FUN_0c0b7882(void);
int FUN_0c0bea46(void);
int FUN_0c0caf50(void);
void FUN_0c0cdfd8(void);
int FUN_0c0cf46c(int a4);
int FUN_0c0cf4aa(int a4);
int FUN_0c0be930(int a4);
int FUN_0c0bf928(void);
void FUN_0c0c3d78(void);
int FUN_0c0c9d1c(int a4);
int FUN_0c0cac22(int a4);
int FUN_0c0d81e0(void);
int FUN_0c0d8200(void);
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o224_int { char p[0x224]; int v; };
struct o234_float { char p[0x234]; float v; };
struct o238_uint { char p[0x238]; unsigned int v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o240_uint { char p[0x240]; unsigned int v; };
struct o244_uint { char p[0x244]; unsigned int v; };
struct o248_uint { char p[0x248]; unsigned int v; };
struct o24C_uint { char p[0x24C]; unsigned int v; };
struct o254_float { char p[0x254]; float v; };
struct o258_float { char p[0x258]; float v; };
struct o25C_float { char p[0x25C]; float v; };
struct o280_int { char p[0x280]; int v; };
struct o280_uint { char p[0x280]; unsigned int v; };
struct o284_int { char p[0x284]; int v; };
struct o284_uint { char p[0x284]; unsigned int v; };
struct o394_uint { char p[0x394]; unsigned int v; };
struct o3CC_ushort { char p[0x3CC]; unsigned short v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o3E4_uint { char p[0x3E4]; unsigned int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o418_uint { char p[0x418]; unsigned int v; };
struct o424_uint { char p[0x424]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o80_float { char p[0x80]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o88_int { char p[0x88]; int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o94_uint { char p[0x94]; unsigned int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oD4_float { char p[0xD4]; float v; };
struct oD8_float { char p[0xD8]; float v; };
struct oDC_float { char p[0xDC]; float v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_short { char p[0x16]; short v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_short { char p[0x18]; short v; };
struct o1A_short { char p[0x1A]; short v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_short { char p[0x2]; short v; };
struct o30_int { char p[0x30]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



int FUN_0c0b4c10(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0B4C50, 0xB4);
    FUN_0c0e19d0(t0);
    FUN_0c0b4b98(t0);
    *(unsigned int *)((t0 + 0x98)) = 0xB4;
    return FUN_0c0844dc((*(int *)0xC247F20), (*(int *)0xC247F24), 0x0, 0.199999988f);
}

int FUN_0c0b9da0(void)
{
    int t2;
    int t7;

    FUN_0c084218();
    if (((*(int *)0xC23EDE0) != 0) && (t2 = *(int *)0xC247548, t2 != 0)) {
        *(volatile int *)0xC247548;
    }
    if (((*(int *)0xC23EDE4) != 0) && (t7 = *(int *)0xC247568, t7 != 0)) {
        *(volatile int *)0xC247568;
    }
    return FUN_0c0e16c0((*(int *)0xC23ECE0));
}

int FUN_0c0c0b9a(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0C0BDA, 0x274);
    FUN_0c0e19d0(t0);
    (((struct o238_uint *)(t0))->v) = 0xCF;
    (((struct o23C_uint *)(t0))->v) = 0x8;
    (((struct o240_uint *)(t0))->v) = 0x5;
    (((struct o244_uint *)(t0))->v) = 0x9;
    (((struct o248_uint *)(t0))->v) = 0xC;
    (((struct o24C_uint *)(t0))->v) = 0x0;
    return 0x24C;
}

int FUN_0c0c69b6(void)
{
    int t1;
    int t2;
    int t3;
    int t6;
    int t4;
    int t5;

    FUN_0c0c65d2();
    t1 = *(int *)0xC23ED50;
    t2 = *(int *)0xC31FCF4;
    t3 = *(int *)(((((t1 << 1) + t1) << 2) + 0xC1FCEA0));
    t6 = 0xC1FCEA0;
    if ((int)t3 > 0) {
        t4 = 0x0;
        for (;;) {
            t5 = FUN_0c0c6798(t4, t3, (t2 + 0x38));
            t4 = (t4 + 0x1);
            if ((int)t4 >= (int)t3) {
                break;
            }
        }
        t6 = t5;
    }
    return t6;
}

int FUN_0c0ce8b8(int a4)
{
    *(unsigned short *)((((((((a4 << 1) + a4) << 2) << 2) << 1) + 0xC522E4C) + 0x0)) = 0x0;
    *(unsigned short *)((((((((a4 << 1) + a4) << 2) << 2) << 1) + 0xC522E4C) + 0x2)) = 0x0;
    *(unsigned int *)((((((((a4 << 1) + a4) << 2) << 2) << 1) + 0xC522E4C) + 0x8)) = 0x0;
    *(unsigned int *)((((((((a4 << 1) + a4) << 2) << 2) << 1) + 0xC522E4C) + 0xC)) = 0x0;
    *(float *)((((((((a4 << 1) + a4) << 2) << 2) << 1) + 0xC522E4C) + 0x10)) = 0.0f;
    *(unsigned int *)((((((((a4 << 1) + a4) << 2) << 2) << 1) + 0xC522E4C) + 0x14)) = 0x0;
    *(unsigned int *)((((((((a4 << 1) + a4) << 2) << 2) << 1) + 0xC522E4C) + 0x54)) = 0x0;
    return memset((((((((a4 << 1) + a4) << 2) << 2) << 1) + 0xC522E4C) + 0x18), 0x0, 0x38);
}

int FUN_0c0d6e1a(float f4)
{
    int t10;

    t10 = 0x0;
    if (10.0f > f4) {
    } else {
        t10 = 0x1;
        if (22.0f > f4) {
        } else {
            t10 = 0x3;
            if ((*(float *)0xC0D6F30) > f4) {
                t10 = 0x2;
            }
        }
    }
    return t10;
}

int FUN_0c0b62a4(int a4)
{
    FUN_0c018142();
    FUN_0c018232();
    FUN_0c01937a();
    *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) & 0xFFFFFFDF);
    *(unsigned int *)0xC23ED9C = 0x7;
    *(unsigned int *)((a4 + 0x38)) = 0xBB8;
    FUN_0c016d74();
    return FUN_0c084b1a((*(int *)0xC23ED8C), 0x0);
}

float FUN_0c0c8cc8(int a4, float f4, float f5)
{
    float u5;
    float u6;
    float u7;

    u5 = ((((1.0f - f5) * f4)) * (*(float *)((a4 + 0x1C))));
    u5 = u5 + (*(float *)((a4 + 0x4))) * ((1.0f - f4) * (1.0f - f5));
    u6 = u5;
    u6 = u6 + (*(float *)((a4 + 0x10))) * ((1.0f - f4) * f5);
    u7 = u6;
    u7 = u7 + (*(float *)((a4 + 0x28))) * (f4 * f5);
    return u7;
}

int FUN_0c0caeac(int a4)
{
    int t1;

    t1 = FUN_0c0e262a((*(int *)((((((a4 << 1) + a4) << 2) + 0xC24FB50) + 0x4))));
    FUN_0c0e631c(t1, (*(int *)((((((a4 << 1) + a4) << 2) + 0xC2623A0) + 0x0))), (*(int *)((((((a4 << 1) + a4) << 2) + 0xC24FB50) + 0x4))));
    return t1;
}

int FUN_0c0d0f6c(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0D0FFC, 0x74);
    *(unsigned int *)0xC9433D8 = t0;
    FUN_0c0e19d0(t0);
    (((struct o44_float *)(t0))->v) = 415.0f;
    (((struct o4C_float *)(t0))->v) = 1.0f;
    (((struct o50_float *)(t0))->v) = 1.0f;
    (((struct o60_float *)(t0))->v) = 1.0f;
    (((struct o5C_float *)(t0))->v) = 1.0f;
    (((struct o6C_uint *)(t0))->v) = 0xFFFFFFFF;
    return 0x6C;
}

int FUN_0c0d19d4(void)
{
    int t1;
    int t2;
    int t0;

    t1 = 0x0;
    t2 = 0xC943494;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)0xC943490)) {
            break;
        }
        t0 = (FUN_0c0cf16a(0x2, (*(int *)((t2 + 0x0))), (*(int *)((t2 + 0x4))), (t2 + 0x8), (t2 + 0x14)));
        t1 = (t1 + 0x1);
        t2 = (t2 + 0x1C);
    }
    return t0;
}

int FUN_0c0d7a00(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x0)) = 0x300008;
    *(unsigned int *)((a4 + 0x4)) = 0x1;
    *(unsigned int *)((a4 + 0x8)) = 0x1;
    *(unsigned int *)((a4 + 0x20)) = 0x3;
    (((struct o6C_uint *)(a4))->v) = ((a5 * 0x3C) + (*(int *)0xC947AA8));
    (((struct oA0_uint *)(a4))->v) = 0x20000000;
    kmProcessVertexRenderState(a4);
    return kmSetVertexRenderState(a4);
}

int FUN_0c0d7a40(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x0)) = 0x300008;
    *(unsigned int *)((a4 + 0x4)) = 0x1;
    *(unsigned int *)((a4 + 0x8)) = 0x1;
    *(unsigned int *)((a4 + 0x20)) = 0x3;
    (((struct o6C_uint *)(a4))->v) = ((a5 * 0x3C) + (*(int *)0xC947AA8));
    (((struct oA0_uint *)(a4))->v) = 0x0;
    kmProcessVertexRenderState(a4);
    return kmSetVertexRenderState(a4);
}

int FUN_0c0d7ab0(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x0)) = 0x300008;
    *(unsigned int *)((a4 + 0x4)) = 0x1;
    *(unsigned int *)((a4 + 0x8)) = 0x1;
    *(unsigned int *)((a4 + 0x20)) = 0x3;
    (((struct o6C_uint *)(a4))->v) = ((a5 * 0x3C) + (*(int *)0xC947AA8));
    (((struct oA0_uint *)(a4))->v) = 0x0;
    kmProcessVertexRenderState(a4);
    return kmSetVertexRenderState(a4);
}

int nlCommonTextureGarbageCollection(void)
{
    int t2;
    int t3;
    int t4;

    t4 = (((struct o0_int *)0xC947AA8)->v);
    t2 = (kmGarbageCollectTexture());
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)((((struct o4_int *)0xC947AA8)->v))) {
            break;
        }
        if ((*(int *)((t4 + 0x28))) == 0) {
            t2 = (FUN_0c0d8450(t4));
        }
        t4 = (t4 + 0x3C);
        t3 = (t3 + 0x1);
    }
    return t2;
}


int FUN_0c0b63ac(int a4)
{
    int t5;

    FUN_0c018142();
    FUN_0c018232();
    FUN_0c01937a();
    *(unsigned int *)0xC23ED9C = 0x4;
    FUN_0c016d74();
    t5 = FUN_0c084b1a((*(int *)0xC23ED8C), 0x0);
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x383);
    return t5;
}

int FUN_0c0c26dc(int a4)
{
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = (*(float *)0xC0C2838);
    (((struct o54_float *)(a4))->v) = 1.0f;
    (((struct o58_float *)(a4))->v) = 1.0f;
    (((struct o5C_float *)(a4))->v) = 1.0f;
    (((struct o60_uint *)(a4))->v) = 0x0;
    (((struct o64_uint *)(a4))->v) = 0x0;
    (((struct o68_uint *)(a4))->v) = 0x0;
    (((struct oD4_float *)(a4))->v) = 1.0f;
    (((struct oD8_float *)(a4))->v) = 1.0f;
    (((struct oDC_float *)(a4))->v) = 1.0f;
    return 0xDC;
}

int FUN_0c0c2764(int a4)
{
    *(unsigned int *)(((0x9C + a4) + 0x8)) = 0x0;
    *(unsigned int *)(((0x9C + a4) + 0x4)) = 0x0;
    *(unsigned int *)(((0x9C + a4) + 0x0)) = 0x0;
    *(float *)((a4 + 0xA8)) = 1.0f;
    *(float *)((a4 + 0xAC)) = (*(float *)0xC0C2844);
    *(unsigned int *)((a4 + 0xB0)) = 0x0;
    *(float *)(((0xBC + a4) + 0x8)) = 1.0f;
    *(float *)(((0xBC + a4) + 0x4)) = 1.0f;
    *(float *)(((0xBC + a4) + 0x0)) = 1.0f;
    *(float *)(((0xC8 + a4) + 0x8)) = 1.0f;
    *(float *)(((0xC8 + a4) + 0x4)) = 1.0f;
    *(float *)(((0xC8 + a4) + 0x0)) = 1.0f;
    return 0x4;
}


int FUN_0c0c4c54(void)
{
    int t2;
    int t0;
    int t1;

    t2 = 0xC31E9F0;
    for (;;) {
        if ((*(int *)0xC31E9EC) == 0) {
            break;
        }
        t0 = (FUN_0c0d80c0((*(short *)((t2 + 0x0)))));
        t0 = (*(short *)((t2 + 0x2)));
        t0 = (FUN_0c0d80d0(t0, (*(int *)((t2 + 0x4)))));
        t1 = (*(int *)0xC31E9EC);
        t2 = (t2 + 0x8);
        t1 = (t1 - 1);
        *(unsigned int *)0xC31E9EC = t1;
    }
    return t0;
}

int FUN_0c0cf3b0(int a4)
{
    int t0;
    int t1;
    int t5;

    t0 = (((struct o284_int *)(a4))->v);
    t1 = (((struct o280_int *)(a4))->v);
    if (t1 != 0) {
        if (t0 != 0) {
            (((struct o284_uint *)(t1))->v) = t0;
            (((struct o280_uint *)(t0))->v) = t1;
            t5 = 0x280;
        } else {
            (((struct o284_uint *)(t1))->v) = 0x0;
            (((struct o4_uint *)0xC94315C)->v) = t1;
            t5 = 0x284;
        }
    } else {
        if (t0 != 0) {
            (((struct o280_uint *)(t0))->v) = 0x0;
            (((struct o0_uint *)0xC94315C)->v) = t0;
        } else {
            (((struct o0_uint *)0xC94315C)->v) = 0x0;
            (((struct o4_uint *)0xC94315C)->v) = 0x0;
        }
        t5 = 0x280;
    }
    return t5;
}


int FUN_0c0b789c(int a4)
{
    nlPushMatrix(0x0);
    FUN_0c0dbda0((((((((struct o88_int *)(a4))->v)) << 8) + 0xC25F840) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)));
    FUN_0c0c47ae(0x1252);
    return nlPopMatrix(0x1);
}

int FUN_0c0be8d2(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)((a5 + 0x0));
    t2 = *(int *)(((a5 + 0x4) + 0x0));
    t3 = *(int *)((((a5 + 0x4) + 0x4) + 0x0));
    t4 = 0xC2623A0;
    t5 = ((*(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0))) + 0x18);
    t6 = ((a5 + 0x4) + 0x4);
    t7 = a6;
    for (;;) {
        if ((*(int *)((t5 + 0x0))) == 0) {
            break;
        }
        t4 = 0x4C;
        t6 = t5;
        t7 = (*(int *)((t5 + t4)));
        *(unsigned int *)((t6 + 0x30)) = t0;
        t7 = ((unsigned int)t7 >> 2);
        t5 = (t6 + 0x50);
        t7 = (t7 << 2);
        *(unsigned int *)((t6 + 0x34)) = t2;
        t5 = (t5 + t7);
        *(unsigned int *)((t6 + 0x38)) = t3;
    }
    return t4;
}

int FUN_0c0c0554(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0C058E, 0x274);
    FUN_0c0e19d0(t0);
    (((struct o238_uint *)(t0))->v) = ((((struct o8_int *)0xC247F1C)->v));
    (((struct o23C_uint *)(t0))->v) = ((((struct o4_int *)0xC247F1C)->v));
    (((struct o234_float *)(t0))->v) = ((((struct o0_float *)0xC247F1C)->v));
    return 0x234;
}

int FUN_0c0cf908(void)
{
    int t1;
    int t0;

    t1 = 0x0;
    for (;;) {
        if ((*(int *)0xC23ED50) == (*(int *)((((t1 * 0x1C) + 0xC20BB20) + 0xC)))) {
            t0 = (*(short *)0xC522B00);
            if ((int)t0 < (int)(t1 + 0x1)) {
                *(unsigned short *)0xC522B00 = (t1 + 0x1);
            }
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0xE) {
            break;
        }
    }
    return t0;
}

int FUN_0c0b5f5e(void)
{
    FUN_0c01c24e();
    FUN_0c051a74();
    FUN_0c0e16c0(((((struct o0_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct oC_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct o4_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct o10_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct o14_int *)0xC23ECE0)->v)));
    return FUN_0c01c274();
}

int FUN_0c0b6702(void)
{
    FUN_0c01c24e();
    FUN_0c051a74();
    FUN_0c0e16c0(((((struct o0_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct oC_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct o4_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct o10_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct o14_int *)0xC23ECE0)->v)));
    return FUN_0c01c274();
}

int FUN_0c0c0424(void)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t8;
    int t9;
    int t11;
    int t12;

    t0 = 0xC2089CC;
    t1 = 0xC208C30;
    for (;;) {
        t3 = (*(int *)((t0 + 0x0)));
        for (;;) {
            t4 = *(int *)((t1 + 0x0));
            t1 = (t1 + 0x4);
            *(unsigned char *)((t3 + 0x4)) = t4;
            t3 = (t3 + 0x10);
            if ((*(signed char *)((t3 + 0x0))) == 0) {
                break;
            }
        }
        t0 = (t0 + 0x4);
        if ((*(int *)((t0 + 0x0))) == 0) {
            break;
        }
    }
    t8 = 0xC208A1C;
    t9 = 0xC209050;
    for (;;) {
        t11 = (*(int *)((t8 + 0x0)));
        for (;;) {
            t12 = *(int *)((t9 + 0x0));
            t9 = (t9 + 0x4);
            *(unsigned char *)((t11 + 0x4)) = t12;
            t11 = (t11 + 0x10);
            if ((*(signed char *)((t11 + 0x0))) == 0) {
                break;
            }
        }
        t8 = (t8 + 0x4);
        if ((*(int *)((t8 + 0x0))) == 0) {
            break;
        }
    }
    return t12;
}

int FUN_0c0c04cc(void)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t8;
    int t9;
    int t11;
    int t12;

    t0 = 0xC2089CC;
    t1 = 0xC208D90;
    for (;;) {
        t3 = (*(int *)((t0 + 0x0)));
        for (;;) {
            t4 = *(int *)((t1 + 0x0));
            t1 = (t1 + 0x4);
            *(unsigned char *)((t3 + 0x4)) = t4;
            t3 = (t3 + 0x10);
            if ((*(signed char *)((t3 + 0x0))) == 0) {
                break;
            }
        }
        t0 = (t0 + 0x4);
        if ((*(int *)((t0 + 0x0))) == 0) {
            break;
        }
    }
    t8 = 0xC208A1C;
    t9 = 0xC2096F0;
    for (;;) {
        t11 = (*(int *)((t8 + 0x0)));
        for (;;) {
            t12 = *(int *)((t9 + 0x0));
            t9 = (t9 + 0x4);
            *(unsigned char *)((t11 + 0x4)) = t12;
            t11 = (t11 + 0x10);
            if ((*(signed char *)((t11 + 0x0))) == 0) {
                break;
            }
        }
        t8 = (t8 + 0x4);
        if ((*(int *)((t8 + 0x0))) == 0) {
            break;
        }
    }
    return t12;
}

void FUN_0c0ce57a(int a4)
{
    int t2;
    int t1;

    t2 = a4;
    for (;;) {
        if ((*(int *)((t2 + 0x0))) == 0) {
            break;
        }
        t1 = (*(int *)((t2 + 0x0)));
        FUN_0c0db0a0((*(int *)((t1 + 0x0))), (*(int *)((t1 + 0x4))));
        nlPrintf(((*(int *)(((*(int *)((t2 + 0x0))) + 0x8)))));
        t2 = (t2 + 0x8);
    }
}

int FUN_0c0b7596(int a4, int a5, int a6, int a7)
{
    int t1;
    int t3;
    int t5;
    int t7;
    int t9;

    t1 = ((int (*)(int, int, int, int))(FUN_0c0e15d4))(((((struct o0_int *)0xC23ECE0)->v)), a5, a6, a7);
    t3 = ((int (*)(int))(FUN_0c0e15d4))(((((struct oC_int *)0xC23ECE0)->v)));
    t5 = ((int (*)(int))(FUN_0c0e15d4))(((((struct o4_int *)0xC23ECE0)->v)));
    t7 = ((int (*)(int))(FUN_0c0e15d4))(((((struct o10_int *)0xC23ECE0)->v)));
    t9 = ((int (*)(int))(FUN_0c0e15d4))(((((struct o14_int *)0xC23ECE0)->v)));
    (((struct o0_uint *)0xC23ED44)->v) = 0x1;
    (((struct o4_uint *)0xC23ED44)->v) = 0x0;
    return 0xC23ED48;
}

int FUN_0c0cbf40(int a4)
{
    int t0;

    t0 = ADXF_GetStat(a4);
    if ((t0 != 1) && ((t0 != 2) && ((t0 != 3) && (t0 != 4)))) {
        _builtin_set_cr((_builtin_get_cr() & 0xEFFFFF0F));
        _builtin_trapa(16);
        return 0x0;
    }
    return t0;
}

int FUN_0c0b06d0(void)
{
    int t1;
    int t4;

    FUN_0c0a87b4(0xC0B0704, 0xC0A8C94, 0xC0B070C, 0x686);
    t1 = *(int *)0xC23A1A8;
    t4 = t1;
    if ((t1 & 1) != 0) {
        t4 = (FUN_0c0e6380() % 3);
        *(unsigned int *)0xC23EDBC = t4;
        *(unsigned int *)0xC246DEC = t4;
    }
    return t4;
}

int FUN_0c0b4e02(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0B4E70, 0x440);
    FUN_0c0e19d0(t0);
    *(unsigned int *)0xC247CAC = t0;
    (((struct o254_float *)(t0))->v) = 0.0f;
    (((struct o258_float *)(t0))->v) = 0.0f;
    (((struct o25C_float *)(t0))->v) = 0.0f;
    (((struct o3CC_ushort *)(t0))->v) = 0x0;
    return 0x3CC;
}

int FUN_0c0c4580(void)
{
    int t2;
    int t11;
    int t8;
    int t3;
    int t4;
    int t14;

    if ((*(int *)0xC209CB4) != 0) {
        t2 = *(int *)0xC23A180;
        t11 = t2;
        if (t2 == 2) {
            *(unsigned int *)0xC209CB4 = 0x0;
            t8 = t2;
            if (0xC151F3C != 0) {
                t3 = t2;
                t4 = 0xC151F3C;
                for (;;) {
                    if ((*(int *)((t4 + 0x0))) == 0) {
                        break;
                    }
                    t3 = (FUN_0c0c3ef8((*(int *)((t4 + 0x0)))));
                    t4 = (t4 + 0x8);
                }
                t8 = t3;
            }
            t11 = t8;
        }
        t14 = t11;
    }
    return t14;
}


int FUN_0c0cbbf4(void)
{
    int t0;

    t0 = FUN_0c0e262a(0x4000);
    syCfgInit(t0);
    syCfgGetSoundMode(0xC23ECD8);
    syCfgGetLanguage(0xC1EF578);
    syCfgExit();
    return FUN_0c0e2a4c(t0);
}

int FUN_0c0b8b42(int a4)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0B8BCC, 0xB0);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x98)) = a4;
    *(unsigned int *)(((a4 << 2) + 0xC23EDD0)) = 0x0;
    return 0xC23EDD0;
}

int FUN_0c0b5fc2(void)
{
    FUN_0c0169da(0x0);
    FUN_0c0169da(0x1);
    (((struct o0_uint *)0xC23EDC0)->v) = 0x4;
    (((struct o4_uint *)0xC23EDC0)->v) = 0x0;
    (((struct o10_uint *)0xC23EDC0)->v) = 0x0;
    (((struct o14_uint *)0xC23EDC0)->v) = 0x0;
    FUN_0c01a38e(0x0, 0x1);
    return FUN_0c01a38e(0x1, 0x1);
}

int FUN_0c0cc720(void)
{
    int t0;

    t0 = 0x2;
    for (;;) {
        FUN_0c0e40ec(t0, 0x1200A0, 0x0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    *(volatile int *)0xC5158E4;
    return ADXT_Stop();
}

int FUN_0c0ceaf8(int a4)
{
    int t7;
    int stk[6];

    syRtcGetDate(((int)stk + 4));
    *(unsigned short *)((a4 + 0x0)) = (*(short *)(((int)stk + 4)));
    *(unsigned char *)((a4 + 0x2)) = (*(signed char *)(((int)stk + 6)));
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)(((int)stk + 7)));
    *(unsigned char *)((a4 + 0x4)) = (*(signed char *)(((int)stk + 8)));
    *(unsigned char *)((a4 + 0x5)) = (*(signed char *)(((int)stk + 9)));
    *(unsigned char *)((a4 + 0x6)) = (*(signed char *)(((int)stk + 10)));
    t7 = *(signed char *)(((int)stk + 11));
    *(unsigned char *)((a4 + 0x7)) = t7;
    return t7;
}

void FUN_0c0d42f6(void)
{
    if (((*(int *)0xC23A1A8) & 0x2000) != 0) {
        FUN_0c0d6cea();
        FUN_0c0d432e();
        FUN_0c0d4b14();
        FUN_0c0d5d94();
        FUN_0c0d6ad4();
        FUN_0c0d60a6();
    return;
    }
}

int FUN_0c0b6138(int a4)
{
    int t3;

    FUN_0c018142();
    FUN_0c018232();
    FUN_0c01937a();
    t3 = FUN_0c04faa4();
    *(unsigned int *)0xC23ED9C = 0x4;
    *(unsigned int *)((a4 + 0x34)) = 0x1194;
    return t3;
}

int FUN_0c0c157e(int a4)
{
    int t0;

    t0 = (((struct o84_int *)(a4))->v);
    nlPushMatrix(0x0);
    nlMultiMatrix((t0 + 0x10));
    FUN_0c0c465c(((((struct o224_int *)(a4))->v)));
    return nlPopMatrix(0x1);
}

void FUN_0c0c99a0(int a4, int a5)
{
    int t0;
    int t1;

    t0 = *(int *)((((((a4 << 1) + a4) << 2) + 0xC2623A0) + 0x0));
    t1 = *(int *)((((((a5 << 1) + a5) << 2) + 0xC2623A0) + 0x0));
    if ((t0 != 0) && (t1 != 0)) {
        FUN_0c0c98ce(t0, t1);
    return;
    }
}

int FUN_0c0cc6ac(void)
{
    *(volatile int *)0xC5158E8;
    ADXT_Stop();
    *(volatile int *)0xC5158EC;
    ADXT_Stop();
    *(volatile int *)0xC5158F0;
    ADXT_Stop();
    (((struct oC_uint *)0xC522928)->v) = 0x0;
    (((struct o8_uint *)0xC522928)->v) = 0x0;
    (((struct o4_uint *)0xC522928)->v) = 0x0;
    (((struct o0_uint *)0xC522928)->v) = 0x0;
    return 0xC52292C;
}

int FUN_0c0bb1ec(int a4, int a5, int a6)
{
    FUN_0c0dcca0(a4);
    nlRotateAZ((*(short *)((a5 + 0x0))));
    nlRotateAY((*(short *)(((a5 + 0x2) + 0x0))));
    nlRotateAX((*(short *)((((a5 + 0x2) + 0x2) + 0x0))));
    return FUN_0c0c47ae((*(int *)((a6 + 0x0))));
}

int FUN_0c0c0eac(int a4, int a5, int a6)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0C0FB8, 0x144);
    *(unsigned int *)((t0 + 0x34)) = a4;
    *(unsigned int *)((t0 + 0x38)) = a5;
    (((struct o40_uint *)(t0))->v) = a6;
    *(unsigned int *)((t0 + 0x30)) = 0x78;
    return 0x40;
}

int FUN_0c0c0eda(int a4, int a5, float f4)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0C0FEE, 0x144);
    *(unsigned int *)((t0 + 0x34)) = a4;
    *(unsigned int *)((t0 + 0x38)) = a5;
    *(float *)((t0 + 0x3C)) = f4;
    *(unsigned int *)((t0 + 0x30)) = 0x78;
    return 0x3C;
}

int FUN_0c0c0f08(int a4, int a5, int a6)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0C1024, 0x144);
    *(unsigned int *)((t0 + 0x34)) = a4;
    *(unsigned int *)((t0 + 0x38)) = a5;
    (((struct o40_uint *)(t0))->v) = a6;
    *(unsigned int *)((t0 + 0x30)) = 0x78;
    return 0x40;
}

int FUN_0c0c2736(int a4)
{
    int t1;

    FUN_0c0c26dc(a4);
    *(unsigned int *)((a4 + 0x3C)) = 0x0;
    (((struct o40_uint *)(a4))->v) = 0x1;
    (((struct o44_uint *)(a4))->v) = 0x1;
    t1 = *(int *)0xC209AE8;
    return FUN_0c0c3d90((*(int *)((t1 + 0x0))), (unsigned short)(*(short *)((t1 + 0x4))), (unsigned short)(*(short *)((t1 + 0x6))), 0x0);
}

void FUN_0c0c523c(void)
{
    int t1;
    int t3;
    int t4;

    t1 = 0x1;
    if ((*(int *)0xC23A1A0) == 0) {
        t1 = 0x0;
    }
    t3 = 0xC1E9750;
    t4 = 0x8;
    for (;;) {
        t4 = (t4 - 0x1);
        *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x0)) = (unsigned short)(*(short *)((((t3 + 0x4) + (t1 << 1)) + 0x0)));
        t3 = (t3 + 0x8);
        if (t4 == 0) {
            break;
        }
    }
}

int FUN_0c0cacde(int a4, float f4, float f5)
{
    int t0;

    t0 = *(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0));
    if (t0 != 0) {
        return FUN_0c0cac3a(t0, f4, f5);
    }
    return 0xC2623A0;
}

int FUN_0c0bfa90(void)
{
    int t4;

    if ((*(int *)0xC260CB8) != 0) {
        FUN_0c0d80c0(0x2008);
        FUN_0c0dfcae(0xC260CBC, 0xC261CBC);
        t4 = (FUN_0c0d80c0(0x0));
    }
    *(unsigned int *)0xC260CB8 = 0x0;
    return t4;
}

int FUN_0c0c5184(int a4)
{
    int t1;
    int t2;
    int t3;
    int t0;

    t1 = 0x0;
    t2 = a4;
    for (;;) {
        t3 = *(int *)((t2 + 0x0));
        if (t3 == 0) {
            break;
        }
        t0 = (FUN_0c0c4ff0(t3, (*(int *)((t2 + 0x4)))));
        t2 = (t2 + 0x8);
        t1 = (t1 + t0);
    }
    return t1;
}

int FUN_0c0cbdb8(int a4, int a5)
{
    int t0;
    int t9;

    t0 = *(int *)0xC523158;
    t9 = t0;
    if ((t0 & 63) == 0) {
        t9 = FUN_0c21045c();
        if (t9 == -23) {
            if ((int)((((struct o0_int *)0xC23A25C)->v)) < 0) {
                (((struct o0_uint *)0xC23A25C)->v) = 0x2;
            }
            (((struct o4_uint *)0xC23A25C)->v) = 0x2;
        }
    }
    return t9;
}

int FUN_0c0caef0(void)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC0CAEEA, 0x30, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    FUN_0c0ca794();
    (((struct o0_uint *)0xC31FD38)->v) = 0x1;
    *(unsigned int *)0xC20A28C = 0x1;
    (((struct o4_uint *)0xC31FD38)->v) = 0x0;
    return 0xC31FD3C;
}

int FUN_0c0cc3cc(int a4, int a5)
{
    FUN_0c0cbe74(0x1, a4, (*(int *)0xC4BFE28));
    FUN_0c01c214((*(int *)0xC4BFE28), 0x1A0000);
    return FUN_0c0e3c22((*(int *)0xC4BFE28), a5);
}

int FUN_0c0cc860(void)
{
    int t0;
    int t1;

    t0 = 0x2;
    for (;;) {
        t1 = FUN_0c0e40ec(t0, 0x2A0, 0x0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return t1;
}

int nlInitTextureSurface(int a4, int a5)
{
    int t2;
    int t0;
    int t1;

    (((struct o0_uint *)0xC947AA8)->v) = a4;
    (((struct o4_uint *)0xC947AA8)->v) = a5;
    (((struct o0_uint *)0xC948268)->v) = 0x0;
    (((struct o8_uint *)0xC948268)->v) = 0x0;
    t2 = 0x0;
    if ((int)a5 > 0) {
        t0 = 0x0;
        t1 = a4;
        for (;;) {
            t0 = (t0 + 0x1);
            *(unsigned int *)((t1 + 0x28)) = 0xFFFFFFFF;
            *(unsigned int *)((t1 + 0x2C)) = 0x0;
            *(unsigned int *)((t1 + 0x38)) = 0xFFFFFFFF;
            t1 = (t1 + 0x3C);
            if ((int)t0 >= (int)a5) {
                break;
            }
        }
        t2 = t0;
    }
    return t2;
}

int FUN_0c0b756c(void)
{
    FUN_0c0e16c0(((((struct o0_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct oC_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct o4_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct o10_int *)0xC23ECE0)->v)));
    return (FUN_0c0e16c0(((((struct o14_int *)0xC23ECE0)->v))));
}

int FUN_0c0b8a12(void)
{
    FUN_0c0e16c0(((((struct o0_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct oC_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct o10_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct o4_int *)0xC23ECE0)->v)));
    return (FUN_0c0e16c0(((((struct o14_int *)0xC23ECE0)->v))));
}

int FUN_0c0bc750(int a4, int a5)
{
    return FUN_0c0db840((((((((a4 << 1) + a4) << 2) << 2) << 2) + 0xC23F268) + (((a5 << 1) + a5) << 2)));
}

int FUN_0c0c03da(void)
{
    int t0;

    t0 = 0xC2620BC;
    for (;;) {
        *(float *)((t0 + 0x0)) = 0.0f;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0xC2622C0) {
            break;
        }
    }
    thunk_kmSetFogTable();
    nlFogTableColor(0x0);
    return FUN_0c0db1c0(0x9008);
}

int FUN_0c0c4784(int a4, float f4)
{
    FUN_0c08498e(1.0f, 1.0f, 1.0f);
    FUN_0c0c475c(a4, f4);
    return FUN_0c0849da();
}

int FUN_0c0c4898(int a4, float f4)
{
    FUN_0c08498e(1.0f, 1.0f, 1.0f);
    FUN_0c0c4844(a4, f4);
    return FUN_0c0849da();
}

int FUN_0c0c8dd4(void)
{
    int t5;

    t5 = (((((struct o4_int *)0xC20A1B0)->v)) & 0x1);
    (((struct o4_uint *)0xC20A1B0)->v) = (((((((struct o4_int *)0xC20A1B0)->v)) >> 1) | ((int)(((unsigned int)t5 >> 1) | ((unsigned int)t5 << 31)))) ^ ((((struct o8_int *)0xC20A1B0)->v)));
    (((struct o8_uint *)0xC20A1B0)->v) = ((((((struct o4_int *)0xC20A1B0)->v)) | ((((struct o8_int *)0xC20A1B0)->v))) * ((((struct o0_int *)0xC20A1B0)->v)));
    return ((((struct o4_int *)0xC20A1B0)->v));
}

int FUN_0c0cdf02(void)
{
    if ((unsigned int)(*(int *)0xC5229BC) >= (unsigned int)((((struct o30_int *)0xC5229FC)->v))) {
        if (((((struct o0_int *)0xC5229FC)->v)) != 1) {
            *(unsigned int *)0xC5229BC = ((*(int *)0xC5229BC) - ((((struct o30_int *)0xC5229FC)->v)));
        }
        return 0x1;
    }
    return 0x0;
}

void FUN_0c0ce10c(void)
{
    if (((*(int *)0xC23A1A8) & 0x101) == 0) {
        if (((*(int *)0xC23A258) & 15) == 0) {
            *(unsigned int *)0xC23F244 = ((*(int *)0xC23F244) ^ 0x1);
        }
        ((int (*)(int))((*(int *)0xC522A44)))(0xC23F1AC);
    return;
    }
}

int FUN_0c0ce88e(void)
{
    int t0;
    int t4;

    t0 = *(signed char *)0xC522E4A;
    t4 = t0;
    if (t0 != 0) {
        (((struct o16_uchar *)0xC522E34)->v) = 0x0;
        *(unsigned int *)0xC522AC0 = ((*(int *)0xC522AC0) + (((((struct o4_int *)0xC522E34)->v)) - ((((struct o8_int *)0xC522E34)->v))));
        (((struct o0_uint *)0xC522E34)->v) = 0x1;
        t4 = 0xC522E34;
    }
    return t4;
}

int FUN_0c0cfd74(void)
{
    FUN_0c0e16c0((*(int *)0xC23ECE0));
    FUN_0c0e16c0((*(int *)0xC23ECEC));
    FUN_0c0e16c0((*(int *)0xC23ECF0));
    FUN_0c0e16c0((*(int *)0xC23ECE4));
    return (FUN_0c0e16c0((*(int *)0xC23ECF4)));
}

int FUN_0c0cfd9e(int a4, int a5, int a6, int a7)
{
    int t1;
    int t3;
    int t5;
    int t7;

    t1 = ((int (*)(int, int, int, int))(FUN_0c0e15d4))(((((struct o0_int *)0xC23ECE0)->v)), a5, a6, a7);
    t3 = ((int (*)(int))(FUN_0c0e15d4))(((((struct oC_int *)0xC23ECE0)->v)));
    t5 = ((int (*)(int))(FUN_0c0e15d4))(((((struct o10_int *)0xC23ECE0)->v)));
    t7 = ((int (*)(int))(FUN_0c0e15d4))(((((struct o4_int *)0xC23ECE0)->v)));
    return (((int (*)(int))(FUN_0c0e15d4))(((((struct o14_int *)0xC23ECE0)->v))));
}

int FUN_0c0d1de6(void)
{
    FUN_0c0e16c0(((((struct o0_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct oC_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct o10_int *)0xC23ECE0)->v)));
    FUN_0c0e16c0(((((struct o4_int *)0xC23ECE0)->v)));
    return (FUN_0c0e16c0(((((struct o14_int *)0xC23ECE0)->v))));
}

int FUN_0c0d1e10(int a4, int a5, int a6, int a7)
{
    int t1;
    int t3;
    int t5;
    int t7;

    t1 = ((int (*)(int, int, int, int))(FUN_0c0e15d4))(((((struct o0_int *)0xC23ECE0)->v)), a5, a6, a7);
    t3 = ((int (*)(int))(FUN_0c0e15d4))(((((struct oC_int *)0xC23ECE0)->v)));
    t5 = ((int (*)(int))(FUN_0c0e15d4))(((((struct o10_int *)0xC23ECE0)->v)));
    t7 = ((int (*)(int))(FUN_0c0e15d4))(((((struct o4_int *)0xC23ECE0)->v)));
    return (((int (*)(int))(FUN_0c0e15d4))(((((struct o14_int *)0xC23ECE0)->v))));
}

int FUN_0c0d7e90(int a4, int a5)
{
    *(unsigned int *)0xC990EB4 = ((a4 + 0x1F) & 0xFFFFFFE0);
    *(unsigned short *)0xC990E86 = 0x0;
    *(unsigned int *)0xC9480B8 = ((a4 + 0x1F) & 0xFFFFFFE0);
    *(unsigned int *)0xC990EAC = ((a4 + 0x1F) & 0xFFFFFFE0);
    *(unsigned int *)0xC990EB0 = ((a4 + 0x1F) & 0xFFFFFFE0);
    *(unsigned int *)0xC990EC0 = ((a5 + 0x1F) & 0xFFFFFFE0);
    *(unsigned int *)0xC948178 = ((a5 + 0x1F) & 0xFFFFFFE0);
    *(unsigned int *)0xC990EB8 = ((a5 + 0x1F) & 0xFFFFFFE0);
    *(unsigned int *)0xC990EBC = ((a5 + 0x1F) & 0xFFFFFFE0);
    return 0x40;
}

int FUN_0c0b9b8e(int a4)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0B9BF0, 0xB4);
    FUN_0c0e19d0(t0);
    (((struct o88_uint *)(t0))->v) = a4;
    return 0x88;
}

int FUN_0c0c15f8(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0C157E, 0x244);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x224)) = 0xD55;
    return FUN_0c01d3ee(t0, 0xC209A50);
}

void FUN_0c0c465c(int a4)
{
    if (((*(int *)((((((a4 << 1) + a4) << 2) + 0xC2623A0) + 0x0))) != 0) && ((unsigned int)a4 > (unsigned int)0x0)) {
        nlObjPut((*(int *)((((((a4 << 1) + a4) << 2) + 0xC2623A0) + 0x0))));
    return;
    }
}

void FUN_0c0c475c(int a4, float f4)
{
    if (((*(int *)((((((a4 << 1) + a4) << 2) + 0xC2623A0) + 0x0))) != 0) && ((unsigned int)a4 > (unsigned int)0x0)) {
        nlObjPutTrnsl((*(int *)((((((a4 << 1) + a4) << 2) + 0xC2623A0) + 0x0))), f4);
    return;
    }
}

int FUN_0c0ce784(int a4)
{
    *(unsigned short *)((((a4 << 1) + 0xC522AD0) + 0x0)) = ((*(short *)((((a4 << 1) + 0xC522AD0) + 0x0))) + 0x1);
    (((struct o0_uint *)0xC522E34)->v) = 0x1;
    *(unsigned int *)(((a4 << 2) + 0xC522E40)) = ((((struct o4_int *)0xC522E34)->v));
    *(unsigned char *)((a4 + 0xC522E48)) = 0x1;
    return 0xC522E48;
}

int FUN_0c0d8590(void)
{
    kmCreateTextureSurface(0xC943D80, ((((struct o0_short *)0xC1EA298)->v)), ((((struct o2_short *)0xC1EA298)->v)), ((((struct o4_int *)0xC1EA298)->v)));
    kmLoadTexture(0xC943D80, ((((struct o8_int *)0xC1EA298)->v)), 0x0, 0x0);
    return FUN_0c0d8450(0xC943D80);
}

int FUN_0c0bea20(int a4, int a5)
{
    int t0;

    t0 = *(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0));
    *(float *)((a5 + 0x0)) = (*(float *)(((t0 + 0x8) + 0x0)));
    *(float *)((a5 + 0x4)) = (*(float *)((((t0 + 0x8) + 0x4) + 0x0)));
    *(float *)((a5 + 0x8)) = (*(float *)(((((t0 + 0x8) + 0x4) + 0x4) + 0x0)));
    *(float *)((a5 + 0xC)) = (*(float *)((((((t0 + 0x8) + 0x4) + 0x4) + 0x4) + 0x0)));
    return 0xC;
}

int FUN_0c0c0504(int a4)
{
    if (a4 != 1) {
        if (a4 != 2) {
            *(unsigned int *)0xC1FF6D4 = 0x5;
        } else {
            *(unsigned int *)0xC1FF6D4 = 0x0;
        }
    } else {
        *(unsigned int *)0xC1FF6D4 = 0x1;
    }
    return a4;
}



int FUN_0c0c8e1a(int a4)
{
    int t2;
    int t3;
    int t0;
    int t1;
    int t9;
    int t11;

    t2 = a4;
    t3 = a4;
    for (;;) {
        if ((int)(*(short *)((t3 + 0x0))) < 0) {
            break;
        }
        t1 = (*(short *)((t3 + 0x0)));
        if (t1 != 0) {
            t2 = (*(short *)((t3 + 0x0)));
            t0 = (FUN_0c0c4654());
        } else {
            t9 = t1;
            t11 = t2;
        }
        t3 = (t3 + 0x10);
        t1 = t9;
        t2 = t11;
    }
    return t0;
}

int FUN_0c0d7af0(void)
{
    FUN_0c0d76f0(0xC943A74);
    FUN_0c0d7a00(0xC943B34, 0x0);
    FUN_0c0d7a40(0xC943BF4, 0x0);
    return FUN_0c0d7ab0(0xC943CB4, 0x0);
}

int FUN_0c0b4f4a(void)
{
    FUN_0c084218();
    FUN_0c0e16c0((*(int *)0xC23ECE0));
    FUN_0c0e16c0((*(int *)0xC23ECE4));
    return (FUN_0c0e16c0((*(int *)0xC23ECF0)));
}

int FUN_0c0b530a(void)
{
    FUN_0c084218();
    FUN_0c0e16c0((*(int *)0xC23ECE0));
    FUN_0c0e16c0((*(int *)0xC23ECE4));
    return (FUN_0c0e16c0((*(int *)0xC23ECF0)));
}

int FUN_0c0b59ce(void)
{
    FUN_0c084218();
    FUN_0c0e16c0((*(int *)0xC23ECE0));
    FUN_0c0e16c0((*(int *)0xC23ECE4));
    return (FUN_0c0e16c0((*(int *)0xC23ECF0)));
}

int FUN_0c0c2506(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0C2484, 0x94);
    FUN_0c0e19d0(t0);
    (((struct o0_float *)0xC23FE68)->v) = 0.0f;
    (((struct o4_float *)0xC23FE68)->v) = 0.0f;
    (((struct o8_float *)0xC23FE68)->v) = 0.0f;
    return 0x8;
}

int FUN_0c0c35ca(void)
{
    int t0;
    int t1;

    t0 = FUN_0c0e1830(0xC081E08, 0x440);
    t1 = FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x0)) = 0xC07E24E;
    *(unsigned int *)0xC247CAC = t0;
    return t1;
}

void FUN_0c0c4684(int a4)
{
    if ((unsigned int)a4 > (unsigned int)0x0) {
        FUN_0c0df510((*(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0))));
    return;
    }
}

void FUN_0c0c46a8(int a4)
{
    if ((unsigned int)a4 > (unsigned int)0x0) {
        FUN_0c0df530((*(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0))));
    return;
    }
}

int FUN_0c0cbeee(int a4, int a5, int a6)
{
    int t0;
    int t1;

    t0 = ADXF_OpenAfs();
    *(unsigned int *)0xC521CBC = t0;
    t1 = ADXF_GetFsizeSct(t0);
    return ADXF_ReadNw32((*(int *)0xC521CBC), t1, a6);
}

int FUN_0c0cec76(int a4, int a5)
{
    int t0;

    for (;;) {
        t0 = buDeleteFile(a4);
        if (t0 == 0) {
            break;
        }
    }
    return t0;
}

int FUN_0c0cf486(void)
{
    int t0;
    int t1;

    t0 = 0xC2497E0;
    for (;;) {
        t1 = t0;
        t0 = (t0 + 0x50);
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        *(unsigned int *)((t1 + 0x4)) = 0x602;
        *(unsigned int *)((t1 + 0x8)) = 0x0;
        *(unsigned int *)((t1 + 0x10)) = 0x0;
        *(unsigned int *)((t1 + 0x18)) = 0x0;
        *(unsigned int *)((t1 + 0x20)) = 0x0;
        if ((unsigned int)t0 >= (unsigned int)0xC249880) {
            break;
        }
    }
    return 0xC249880;
}

int FUN_0c0d4184(void)
{
    return (((((((struct o0_short *)0xC20C5A8)->v)) + ((((struct o2_short *)0xC20C5A8)->v))) + ((((struct o4_short *)0xC20C5A8)->v))) - ((((((struct o16_short *)0xC20C5A8)->v)) + ((((struct o18_short *)0xC20C5A8)->v))) + ((((struct o1A_short *)0xC20C5A8)->v))));
}

int nlCommonTextureClearTextureIndex(int a4, int a5)
{
    int t2;

    if ((int)a4 >= 0) {
        t2 = *(int *)0xC943D7C;
        *(unsigned int *)(((((int)a4 >> 5) << 2) + t2)) = ((*(int *)(((((int)a4 >> 5) << 2) + t2))) & (~(((int)(0x1F & a4) >= 0) ? (0x1 << ((0x1F & a4) & 31)) : ((-(int)(0x1F & a4) & 31) ? ((int)0x1 >> (-(int)(0x1F & a4) & 31)) : ((int)0x1 >> 31)))));
    }
    return t2;
}

int FUN_0c0c0340(int a4)
{
    FUN_0c08498e(1.0f, 1.0f, 1.0f);
    FUN_0c0dfd50(a4);
    return FUN_0c0849da();
}

int FUN_0c0c366c(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0C2868, 0xE0);
    FUN_0c0e19d0(t0);
    FUN_0c0c2736(t0);
    return FUN_0c0c281c(t0);
}

int FUN_0c0c64aa(void)
{
    int t1;
    int t2;

    t1 = FUN_0c0e19aa(0xC0C64CC, 0x38, (*(int *)0xC23ECE4));
    t2 = FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x34)) = 0x78;
    return t2;
}

int FUN_0c0cee40(void)
{
    int t0;

    t0 = 0xC20B188;
    for (;;) {
        if ((int)(*(int *)((t0 + 0x0))) < 0) {
            return 0x0;
        }
        if ((*(int *)((t0 + 0x0))) == (*(int *)0xC23ED50)) {
            break;
        }
        t0 = (t0 + 0x14);
    }
    return t0;
}

int FUN_0c0d1942(int a4, int a5, int a6, int a7, int a8)
{
    return (FUN_0c0cf09e(((*(int *)(((*(int *)0xC943404) + 0x60))) + 0x4), a5, a6, a7, a8));
}

int FUN_0c0d3a3a(void)
{
    int t0;
    int t1;

    t0 = FUN_0c0e1830(0xC0D3AA0, 0x40);
    *(unsigned int *)0xC943510 = t0;
    t1 = FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x38)) = 0x28;
    return t1;
}

int FUN_0c0bb0f4(int a4)
{
    int t0;

    t0 = FUN_0c0e262a(0x400);
    (((struct o3E4_uint *)(a4))->v) = t0;
    return t0;
}

int FUN_0c0bb1a8(int a4, int a5)
{
    int t2;

    t2 = 0xBC;
    if ((int)((((struct oBC_int *)(a4))->v)) < (int)0x2) {
        (((struct o424_uint *)(a4))->v) = (*(int *)(((((a5 & 0x1) << 2) + (0x444 + a4)) + 0x0)));
        t2 = 0x424;
    }
    return t2;
}

int FUN_0c0bb114(int a4)
{
    if (((((struct o3E4_int *)(a4))->v)) != 0) {
        FUN_0c0e2a4c(((((struct o3E4_int *)(a4))->v)));
        (((struct o3E4_uint *)(a4))->v) = 0x0;
    }
    return 0x3E4;
}

int FUN_0c0bb1c8(int a4, int a5)
{
    int t2;

    t2 = 0xBC;
    if ((int)((((struct oBC_int *)(a4))->v)) < (int)0x2) {
        (((struct o418_uint *)(a4))->v) = (*(int *)(((((a5 & 0x1) << 2) + (0x444 + a4)) + 0x8)));
        t2 = 0x418;
    }
    return t2;
}

int FUN_0c0bdb50(int a4, int a5, int a6)
{
    FUN_0c0dc5a0();
    FUN_0c0bdb70(a4, a5, a6);
    return nlPopMatrix(0x1);
}


int FUN_0c0cddba(int a4)
{
    if ((*(int *)0xC522A00) == 0) {
        return (*(int *)0xC5229C0);
    }
    return (*(int *)(((((a4 << 2) << 2) + 0xC5229BC) + 0x4)));
}

int FUN_0c0cddda(int a4)
{
    if (((((struct o3C_int *)0xC5229C4)->v)) == 0) {
        return ((((struct o0_int *)0xC5229C4)->v));
    }
    return (*(int *)(((((a4 << 2) << 2) + 0xC5229BC) + 0x8)));
}


int FUN_0c0cea9c(void)
{
    *(unsigned int *)0xC23EB20 = 0xFFFFFFFF;
    memset(0xC522E4C, 0x0, 0x300);
    return buInit(0x7A, 0xF, 0x0, 0xC0CEA58);
}

int FUN_0c0d2040(int a4, int a5)
{
    *(unsigned int *)(((a4 << 2) + 0xC23EDC0)) = (*(int *)(((((a5 << 2) << 1) + 0xC20BEA4) + 0x0)));
    *(unsigned int *)(((a4 << 2) + 0xC23EDD0)) = (*(int *)(((((a5 << 2) << 1) + 0xC20BEA4) + 0x4)));
    *(unsigned int *)(((a4 << 2) + 0xC943410)) = a5;
    return 0xC943410;
}

int FUN_0c0b607c(void)
{
    int t0;
    int t1;

    t0 = FUN_0c0e1830(0xC0B60BA, 0x68);
    t1 = FUN_0c0e19d0(t0);
    *(unsigned int *)0xC23ECF8 = t0;
    return t1;
}

int FUN_0c0b68aa(void)
{
    int t0;
    int t1;

    t0 = FUN_0c0e1830(0xC0B673A, 0x68);
    t1 = FUN_0c0e19d0(t0);
    *(unsigned int *)0xC23ECF8 = t0;
    return t1;
}

int FUN_0c0b75e8(void)
{
    int t0;
    int t1;

    t0 = FUN_0c0e1830(0xC0B7606, 0x68);
    t1 = FUN_0c0e19d0(t0);
    *(unsigned int *)0xC23ECF8 = t0;
    return t1;
}

int FUN_0c0b976e(void)
{
    int t0;
    int t1;

    t0 = FUN_0c0e1830(0xC0B97D4, 0x68);
    t1 = FUN_0c0e19d0(t0);
    *(unsigned int *)0xC23ECF8 = t0;
    return t1;
}

int FUN_0c0b687e(void)
{
    FUN_0c0169da(0x0);
    (((struct o0_uint *)0xC23EDC0)->v) = 0x4;
    (((struct o10_uint *)0xC23EDC0)->v) = 0x0;
    return FUN_0c01a38e(0x0, 0x1);
}

int FUN_0c0c2718(int a4)
{
    (((struct o78_float *)(a4))->v) = 0.0f;
    (((struct o7C_float *)(a4))->v) = 0.0f;
    (((struct o80_float *)(a4))->v) = 0.0f;
    (((struct o90_uint *)(a4))->v) = 0x0;
    (((struct o94_uint *)(a4))->v) = 0x0;
    (((struct o98_uint *)(a4))->v) = 0x0;
    return 0x98;
}

void FUN_0c0ca844(int a4, int a5, int a6, int a7, int a8)
{
    *(unsigned int *)((a4 + 0x0)) = a5;
    if (a7 == 0x3F6) {
        *(volatile int *)0xC20A290;
    }
    if ((int)a6 > 0) {
        *(unsigned int *)((a4 + 0x4)) = ((*(int *)((a4 + 0x4))) | 0x1);
    }
}

int FUN_0c0ca6b4(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0));
    if (t0 != 0) {
        return FUN_0c0ca538(t0, a5, a6);
    }
    return 0xC2623A0;
}

int FUN_0c0cdd9c(int a4)
{
    if ((*(int *)0xC522A00) == 0) {
        return (*(int *)0xC5229BC);
    }
    return (*(int *)((0xC5229BC + ((a4 << 2) << 2))));
}

void FUN_0c0ce2ac(int a4)
{
    if (((*(int *)0xC23A1A8) & 0x101) == 0) {
        ((int (*)(int, int))((*(int *)0xC522A4C)))(0xC23F1AC, a4);
    return;
    }
}

int FUN_0c0ce708(void)
{
    (((struct o0_uint *)0xC522E34)->v) = 0x0;
    (((struct o14_uchar *)0xC522E34)->v) = 0x0;
    (((struct o15_uchar *)0xC522E34)->v) = 0x0;
    (((struct o16_uchar *)0xC522E34)->v) = 0x0;
    *(unsigned int *)0xC522AB8 = 0x0;
    (((struct o4_uint *)0xC522E34)->v) = 0x0;
    return 0xC522E38;
}

int FUN_0c0ce752(void)
{
    FUN_0c0db320(0xC522A54, 0xC20AD7C, 0x3E0);
    *(unsigned int *)0xC522E34 = 0x0;
    FUN_0c0b70fe();
    return FUN_0c0cf808();
}

void FUN_0c0cf392(int a4)
{
    if (((((struct o0_int *)0xC94315C)->v)) == 0) {
        (((struct o0_uint *)0xC94315C)->v) = a4;
    } else {
        (((struct o284_uint *)(((((struct o4_int *)0xC94315C)->v))))->v) = a4;
        (((struct o280_uint *)(a4))->v) = ((((struct o4_int *)0xC94315C)->v));
    }
    (((struct o4_uint *)0xC94315C)->v) = a4;
}

void FUN_0c0d41a8(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    t1 = 0xC943554;
    for (;;) {
        t0 = (t0 + 0x1);
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0x142) {
            break;
        }
    }
    (((struct o0_uint *)0xC23ED6C)->v) = 0x3;
    (((struct o4_uint *)0xC23ED6C)->v) = 0x0;
}

int FUN_0c0b4b98(int a4)
{
    (((struct o80_uint *)(a4))->v) = 0x0;
    (((struct o90_float *)(a4))->v) = 0.899999976f;
    (((struct o94_float *)(a4))->v) = 0.0599999987f;
    (((struct oA0_uint *)(a4))->v) = 0x0;
    return 0xA0;
}

int FUN_0c0c3d46(void)
{
    int t0;

    t0 = FUN_0c0e262a(0x1640);
    (((struct o0_uint *)0xC262394)->v) = t0;
    (((struct o4_uint *)0xC262394)->v) = ((t0 + 0x1F) & 0xFFFFFFE0);
    return ((t0 + 0x1F) & 0xFFFFFFE0);
}

int FUN_0c0c8dfe(int a4)
{
    FUN_0c0c8dd4();
    return (FUN_0c0e5f1c());
}

int FUN_0c0d19b8(int a4, int a5)
{
    return FUN_0c0cf1b0(a4, 0x1, a5, ((*(int *)(((*(int *)0xC943404) + 0x60))) + 0x4));
}

int FUN_0c0d85c0(int a4)
{
    int t2;
    int t3;

    t2 = *(int *)((a4 + 0xC));
    t3 = (((struct o4_int *)0xC943DB0)->v);
    *(unsigned int *)((a4 + 0x8)) = (((*(int *)((a4 + 0x8))) & 0xFFFFFFC0) | ((((struct o0_int *)0xC943DB0)->v)));
    *(unsigned int *)((a4 + 0xC)) = ((t2 & 0xF8000000) | t3);
    return t3;
}

int FUN_0c0b7882(void)
{
    *(unsigned int *)(((FUN_0c0e19aa(0xC0B789C, 0xB4, (*(int *)0xC23ECE4))) + 0x88)) = 0x0;
    return 0x88;
}

int FUN_0c0bea46(void)
{
    nlGetMatrix(0xC260A38);
    nlGetMatrix(0xC260A78);
    return nlInvertMatrix(0xC260A78);
}

int FUN_0c0caf50(void)
{
    FUN_0c0caef0();
    *(unsigned int *)0xC31FD38 = 0x0;
    *(unsigned int *)0xC20A28C = 0x0;
    *(unsigned int *)0xC31FD3C = 0x1;
    return 0xC31FD3C;
}

void FUN_0c0cdfd8(void)
{
    int t2;

    t2 = 0x0;
    if ((unsigned int)((((struct o0_int *)0xC5229BC)->v)) >= (unsigned int)(*(int *)0xC522A2C)) {
        t2 = 0x2;
    }
    (((struct oC_uint *)0xC5229BC)->v) = t2;
    (((struct o1C_uint *)0xC5229BC)->v) = t2;
}

int FUN_0c0cf46c(int a4)
{
    int t0;
    int t1;

    t0 = 0x0;
    for (;;) {
        t1 = (0xC246FF0 + t0);
        t0 = (t0 + 0x4);
        (((struct o394_uint *)((*(int *)((t1 + 0x0)))))->v) = a4;
        if ((unsigned int)t0 >= (unsigned int)0x8) {
            break;
        }
    }
    return 0x394;
}

int FUN_0c0cf4aa(int a4)
{
    int t0;
    int t1;

    t0 = 0x0;
    for (;;) {
        t1 = (0xC246FF0 + t0);
        t0 = (t0 + 0x4);
        (((struct o1B0_uint *)((*(int *)((t1 + 0x0)))))->v) = a4;
        if ((unsigned int)t0 >= (unsigned int)0x8) {
            break;
        }
    }
    return 0x1B0;
}

int FUN_0c0be930(int a4)
{
    FUN_0c0e2a4c((*(int *)(((*(int *)((a4 + 0x0))) + 0x4))));
    return FUN_0c0e2a4c((*(int *)((a4 + 0x0))));
}

int FUN_0c0bf928(void)
{
    int t1;

    t1 = FUN_0c0cbe74(0x2, (*(int *)0xC19131C), 0xCF20000);
    *(unsigned int *)0xC260CB8 = 0x0;
    return t1;
}

void FUN_0c0c3d78(void)
{
    int t0;
    int stk[2];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    R1004 = 0x0;
    for (;;) {
        t0 = R1004;
        R1004 = (t0 + 0x1);
        if ((int)((t0 + 0x1) - 1) >= (int)0x64) {
            break;
        }
    }
}

int FUN_0c0c9d1c(int a4)
{
    int t0;

    t0 = *(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0));
    if (t0 != 0) {
        return FUN_0c0c9a12(t0);
    }
    return 0xC2623A0;
}

int FUN_0c0cac22(int a4)
{
    int t0;

    t0 = *(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0));
    if (t0 != 0) {
        return FUN_0c0ca9a8(t0);
    }
    return 0xC2623A0;
}

int FUN_0c0d81e0(void)
{
    int stk[4];

    kmGetFreeTextureMem(((int)stk + 4), (((int)stk + 4) + 0x4));
    return (*(int *)(((int)stk + 4)));
}

int FUN_0c0d8200(void)
{
    int stk[4];

    kmGetFreeTextureMem((((int)stk + 4) + 0x4), ((int)stk + 4));
    return (*(int *)(((int)stk + 4)));
}
