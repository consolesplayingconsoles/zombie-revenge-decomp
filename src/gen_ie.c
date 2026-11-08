/* Straight-line functions with calls and guards (batch gen_ie): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int FUN_0c010c40(int);
int FUN_0c0162ee(int);
int FUN_0c0236ce(int);
int FUN_0c02a220(int);
int FUN_0c02a35a(int);
int FUN_0c02a416(int);
int FUN_0c034e2c(int);
int FUN_0c034fbc(int, int, int);
int FUN_0c03593a(int);
int FUN_0c035b26(int);
int FUN_0c035ce4(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0848d6(int, int, int, int, float, float, float);
int FUN_0c0849da(void);
int FUN_0c08f5d0(int, int);
int FUN_0c0a6780(int, int, float, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c0340(int);
int FUN_0c0c0504(int);
int FUN_0c0c465c(int);
int FUN_0c0c46cc(int);
int FUN_0c0c473c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
extern int FUN_0c0e19f2();
int nlAddVector(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateAxe(int, int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c05ff8c(int a4, int a5, int a6, int a7);
float FUN_0c08fcdc(int a4, int a5, int a6, float f4);
void FUN_0c05e518(int a4, int a5);
float FUN_0c08f844(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0789f4(int a4, int a5, int a6, int a7);
int FUN_0c08ae04(int a4);
void FUN_0c02e13c(int a4);
int FUN_0c0a6e8c(int a4, int a5, int a6, Stk4 s, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c0117c6(void);
int FUN_0c059f6c(int a4, int a5, int a6, int a7);
int FUN_0c07dd98(int a4, int a5, int a6, int a7);
void FUN_0c0a369c(int a4, int a5, int a6, int a7);
int FUN_0c0c5b90(int a4, int a5, int a6, int a7);
struct o1E4_float { char p[0x1E4]; float v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o21C_int { char p[0x21C]; int v; };
struct o21C_uint { char p[0x21C]; unsigned int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o244_int { char p[0x244]; int v; };
struct o244_uint { char p[0x244]; unsigned int v; };
struct o248_int { char p[0x248]; int v; };
struct o24C_float { char p[0x24C]; float v; };
struct o250_float { char p[0x250]; float v; };
struct o254_float { char p[0x254]; float v; };
struct o290_int { char p[0x290]; int v; };
struct o290_uint { char p[0x290]; unsigned int v; };
struct o2B4_int { char p[0x2B4]; int v; };
struct o2BC_int { char p[0x2BC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o304_int { char p[0x304]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o340_int { char p[0x340]; int v; };
struct o344_int { char p[0x344]; int v; };
struct o34C_int { char p[0x34C]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4D0_int { char p[0x4D0]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o4FC_uint { char p[0x4FC]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o524_uint { char p[0x524]; unsigned int v; };
struct o538_int { char p[0x538]; int v; };
struct o538_uint { char p[0x538]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o54C_int { char p[0x54C]; int v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_int { char p[0x60]; int v; };
struct o60_short { char p[0x60]; short v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o62_short { char p[0x62]; short v; };
struct o62_ushort { char p[0x62]; unsigned short v; };
struct o64_short { char p[0x64]; short v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o6C_ushort { char p[0x6C]; unsigned short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_float { char p[0x70]; float v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct o74_uchar { char p[0x74]; unsigned char v; };
struct o75_uchar { char p[0x75]; unsigned char v; };
struct o78_float { char p[0x78]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_short { char p[0x78]; short v; };
struct o7A_short { char p[0x7A]; short v; };
struct o7A_ushort { char p[0x7A]; unsigned short v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_short { char p[0x7C]; short v; };
struct o7C_ushort { char p[0x7C]; unsigned short v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o88_short { char p[0x88]; short v; };
struct o88_ushort { char p[0x88]; unsigned short v; };
struct o8C_short { char p[0x8C]; short v; };
struct o8C_ushort { char p[0x8C]; unsigned short v; };
struct o8E_short { char p[0x8E]; short v; };
struct o8E_ushort { char p[0x8E]; unsigned short v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9A_short { char p[0x9A]; short v; };
struct o9A_ushort { char p[0x9A]; unsigned short v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9E_ushort { char p[0x9E]; unsigned short v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA2_ushort { char p[0xA2]; unsigned short v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_int { char p[0xA8]; int v; };
struct oA8_uint { char p[0xA8]; unsigned int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oAC_uint { char p[0xAC]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oD8_int { char p[0xD8]; int v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o220_int { char p[0x220]; int v; };
struct o64_int { char p[0x64]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };




int FUN_0c05ff8c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = (((struct o244_int *)(a4))->v);
    t1 = *(int *)0xC247CAC;
    (((struct o244_uint *)(a4))->v) = (t0 + 0x1);
    if ((int)(t0 + 0x1) >= (int)((((struct o248_int *)(a4))->v))) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.0272199996f);
    t0 = (((struct o248_int *)(a4))->v);
    t2 = 0x3CDEFC7A;
    t3 = ((((((t0 - 1) - 1) << 1) + ((t0 - 1) - 1)) << 2) + (0x25C + a4));
    t4 = ((((((t0 - 1) << 1) + (t0 - 1)) << 2) + (0x25C + a4)) + 0xC);
    for (;;) {
        if ((unsigned int)t4 <= (unsigned int)((0x25C + a4) + 0x24)) {
            break;
        }
        t4 = (t4 - 12);
        t2 = t4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t2) = *(struct mv3 *)(t3); }
        t3 = (t3 - 12);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x274 + a4)) = *(struct mv3 *)((a4 + 0x3C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x268 + a4)) = *(struct mv3 *)((a4 + 0x3C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x25C + a4)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c0848d6(t3, t4, (t0 - 1), (0x25C + a4), ((((struct o24C_float *)(a4))->v)), ((((struct o250_float *)(a4))->v)), ((((struct o254_float *)(a4))->v)));
    t0 = ((((struct o244_int *)(a4))->v));
    for (;;) {
        if ((int)t0 >= (int)((((struct o248_int *)(a4))->v))) {
            break;
        }
        nlPushMatrix(0x0);
        FUN_0c0dcca0(((((t0 << 1) + t0) << 2) + (0x25C + a4)));
        nlRotateAY(((((struct o3CE_short *)(t1))->v)));
        nlRotateAX(((((struct o3CC_short *)(t1))->v)));
        u0 = 4.0f;
        u0 = (u0 - ((float)t0 / (1.0f + 1.0f)));
        nlScale(u0, u0, u0);
        FUN_0c0de000(u0);
        t2 = FUN_0c0da2e0();
        t3 = ((~(((~t2) + 0x1) & 0x3)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0x3);
        }
        FUN_0c0c465c((((((struct o220_int *)(a4))->v)) + t3));
        nlPopMatrix(0x1);
        t0 = (t0 + 0x1);
    }
    return FUN_0c0849da();
}

float FUN_0c08fcdc(int a4, int a5, int a6, float f4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R11;
    register int R12;
    register int R13;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    v0_2 = a4;
    v0_1 = a5;
    v0_0 = a6;
    w0_0 = f4;
    v0_3 = R13;
    v0_5 = R12;
    v0_6 = R11;
    v0_4 = (*(short *)((((((*(int *)((v0_2 + 0x34))) << 2) << 2) + 0xC2460F4) + 0x4))) != 0;
    R12 = (0xC0E19F2);
    R13 = (0xC246074);
    v0_3 = (v0_2);
    if (v0_4) goto L_C08FD02;
    v0_4 = ((int (*)(int, int, int))(FUN_0c0e19f2))(v0_2, v0_1, v0_0);
    L_C08FD02:;
    v0_4 = (unsigned short)(*(short *)((((((*(int *)((v0_3 + 0x34))) << 2) << 2) + (0x80 + R13)) + 0x4))) == 2;
    if (v0_4) goto L_C08FD30;
    v0_5 = *(int *)((((((*(int *)((v0_3 + 0x34))) << 2) << 2) + (0x80 + R13)) + 0xC));
    v0_4 = (v0_5);
    if ((v0_5 != 3)) goto L_C08FD2C;
    L_C08FE96:;
    return F0;
    L_C08FD2C:;
    v0_2 = ((int (*)(int, int, int))(FUN_0c0e19f2))(v0_2, v0_1, v0_0);
    L_C08FD30:;
    v0_4 = *(int *)((((*(int *)((v0_3 + 0x30))) << 2) + 0xC247030));
    v0_2 = (v0_4);
    if (((int)v0_4 < (int)0x2)) goto L_C08FD44;
    if (((int)v0_2 < (int)0x5)) goto L_C08FD48;
    L_C08FD44:;
    v0_4 = ((int (*)(int, int, int))(FUN_0c0e19f2))(v0_2, v0_1, v0_0);
    L_C08FD48:;
    v0_4 = *(int *)((((*(int *)((v0_3 + 0x30))) << 2) + 0xC246FF0));
    v0_5 = ((((struct oD8_int *)(v0_4))->v)) != 0;
    R13 = (v0_4);
    if (v0_5) goto L_C08FD60;
    v0_4 = ((((struct o4D0_int *)(R13))->v)) == 0;
    if (v0_4) goto L_C08FD64;
    L_C08FD60:;
    v0_1 = ((int (*)(int, int, int))(FUN_0c0e19f2))(v0_2, v0_1, v0_0);
    L_C08FD64:;
    v0_5 = (((struct o4C_int *)(v0_3))->v);
    v0_4 = (v0_5);
    R11 = (0xC034FBC);
    v0_2 = (0x0);
    v0_1 = (0x1B);
    w0_0 = (0.0f);
    if ((v0_5 == 0)) goto L_C08FD88;
    if ((v0_4 == 1)) goto L_C08FDA0;
    if ((v0_4 == 2)) goto L_C08FDB4;
    if ((v0_4 == 3)) goto L_C08FDF8;
    if ((v0_4 == 4)) goto L_C08FE16;
    L_C08FE7C:;
    nlAddVector((R13 + 0x48), (v0_3 + 0x38));
    v0_3 = (int)((((struct o4C_int *)(v0_3))->v)) <= (int)0x5;
    v0_4 = (0x4C);
    if (v0_3) goto L_C08FE96;
    v0_0 = ((int (*)(int, int, int))(FUN_0c0e19f2))(v0_2, v0_1, v0_0);
    v0_4 = (v0_0);
    goto L_C08FE96;
    L_C08FE16:;
    v0_4 = (((struct o48_int *)(v0_3))->v);
    (((struct o48_uint *)(v0_3))->v) = (v0_4 + 0x1);
    if (((int)(v0_4 + 0x1) <= (int)0x9)) goto L_C08FE3A;
    (((struct o40_float *)(v0_3))->v) = w0_0;
    (((struct o3C_float *)(v0_3))->v) = w0_0;
    (((struct o38_float *)(v0_3))->v) = w0_0;
    L_C08FE30:;
    (((struct o4C_uint *)(v0_3))->v) = (((((struct o4C_int *)(v0_3))->v)) + 0x1);
    goto L_C08FE7C;
    L_C08FE3A:;
    FUN_0c034fbc(R13, 0x40, 0x1);
    (((struct o44_float *)(v0_3))->v) = (((((struct o44_float *)(v0_3))->v)) + -0.166666657f);
    L_C08FE50:;
    (((struct o40_float *)(v0_3))->v) = (((((struct o44_float *)(v0_3))->v)) * (FUN_0c0d9e90((((((struct o6E_short *)(R13))->v)) + 0x8000))));
    (((struct o38_float *)(v0_3))->v) = (((((struct o44_float *)(v0_3))->v)) * (FUN_0c0da410((((((struct o6E_short *)(R13))->v)) + 0x8000))));
    goto L_C08FE7C;
    L_C08FDF8:;
    v0_4 = (((struct o48_int *)(v0_3))->v);
    (((struct o48_uint *)(v0_3))->v) = (v0_4 + 0x1);
    if (!(((int)(v0_4 + 0x1) <= (int)v0_1))) goto L_C08FE04;
    FUN_0c034fbc(R13, 0x40, 0x1);
    goto L_C08FE50;
    L_C08FE04:;
    (((struct o48_uint *)(v0_3))->v) = v0_2;
    goto L_C08FE30;
    L_C08FDB4:;
    v0_4 = (((struct o48_int *)(v0_3))->v);
    (((struct o48_uint *)(v0_3))->v) = (v0_4 + 0x1);
    if (((int)(v0_4 + 0x1) > (int)v0_1)) goto L_C08FE04;
    FUN_0c034fbc(R13, 0x40, 0x1);
    (((struct o44_float *)(v0_3))->v) = (((((struct o44_float *)(v0_3))->v)) + 0.0555555522f);
    goto L_C08FE50;
    L_C08FDA0:;
    v0_4 = (((struct o48_int *)(v0_3))->v);
    (((struct o48_uint *)(v0_3))->v) = (v0_4 + 0x1);
    if (((int)(v0_4 + 0x1) <= (int)0x26)) goto L_C08FE7C;
    (((struct o44_float *)(v0_3))->v) = w0_0;
    goto L_C08FE04;
    L_C08FD88:;
    (((struct o38_float *)(v0_3))->v) = w0_0;
    (((struct o3C_float *)(v0_3))->v) = w0_0;
    (((struct o40_float *)(v0_3))->v) = w0_0;
    (((struct o48_uint *)(v0_3))->v) = v0_2;
    (((struct o4C_uint *)(v0_3))->v) = (((((struct o4C_int *)(v0_3))->v)) + 0x1);
    goto L_C08FDA0;
}

void FUN_0c05e518(int a4, int a5)
{
    int stk[9];
    register int t1;
    register int t6;
    register int t25;

    t1 = *(int *)(((((((struct o34C_int *)(a4))->v)) << 2) + 0xC2475D4));
    if (((((struct o344_int *)(a4))->v)) == 0) {
    } else {
        if ((int)((((struct o21C_int *)(t1))->v)) <= 0) {
            (((struct o21C_uint *)(t1))->v) = 0x0;
        } else {
            t6 = FUN_0c0e19aa(0xC05E6DC, 0x2BC, (*(int *)0xC23ECE4));
            FUN_0c0e19d0(t6);
            (((struct o21C_uint *)(t1))->v) = (((((struct o21C_int *)(t1))->v)) - 1);
            (((struct oBC_uint *)(t6))->v) = ((((struct oBC_int *)(a4))->v));
            *(unsigned int *)(((0x200 + t6) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
            FUN_0c0cc3f8(0x52BA9, 0x0, 0x0, 0x0);
            FUN_0c0cc054(((((struct oBC_int *)(a4))->v)), 0xC);
            (((struct o1EC_uint *)(t6))->v) = ((((struct o1EC_int *)(a4))->v));
            *(unsigned int *)(((0x1E8 + t6) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
            *(unsigned int *)(((0x1F4 + t6) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
            *(unsigned int *)(((0x204 + t6) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
            (((struct o1E4_float *)(t6))->v) = 1.0f;
            *(unsigned int *)(((0x1FC + t6) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
            (((struct o1F8_uint *)(t6))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
            (((struct o22C_uint *)(t6))->v) = 0x46;
            (((struct o24C_float *)(t6))->v) = ((((struct oC_float *)(a5))->v));
            nlPushMatrix(0x0);
            FUN_0c0dbda0((((((((struct oBC_int *)(a4))->v)) << 8) + 0xC25F840) + ((((((*(int *)0xC23A258) + 0x1) & 0x1) << 2) << 2) << 2)));
            t25 = (((struct o340_int *)(a4))->v);
            FUN_0c0db470(((((t25 << 1) + t25) << 2) + 0xC1FEFBC), (t6 + 0x30));
            nlPopMatrix(0x1);
            (((struct o6E_ushort *)(t6))->v) = ((((struct o6E_short *)(a4))->v));
            (((struct o220_uint *)(t6))->v) = 0x125C;
            *(unsigned int *)((((int)stk + 0) + 0x0)) = 0x0;
            *(unsigned int *)((((int)stk + 0) + 0x4)) = ((((struct o6E_short *)(t6))->v));
            *(unsigned int *)((((int)stk + 0) + 0x8)) = 0x0;
            FUN_0c0a6780(((int)stk + 0), (t6 + 0x54), 0.0f, 0.0f, -0.399999976f);
            (((struct o6C_ushort *)(t6))->v) = (*(int *)((((int)stk + 0) + 0x0)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x3C)) = *(struct mv3 *)((t6 + 0x30)); }
        }
    }
}

float FUN_0c08f844(int a4, int a5, int a6, int a7, float f4)
{

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    v0_3 = a4;
    v0_2 = a5;
    w0_0 = f4;
    v0_0 = (0xC0E19F2);
    v0_1 = (0xC246074);
    v0_0 = (v0_3);
    if (((*(short *)((((((*(int *)((v0_3 + 0x34))) << 2) << 2) + 0xC2460F4) + 0x4))) != 0)) goto L_C08F86A;
    v0_4 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(v0_3, v0_2, a6, a7);
    L_C08F86A:;
    if (((unsigned short)(*(short *)((((((*(int *)((v0_0 + 0x34))) << 2) << 2) + (0x80 + v0_1)) + 0x4))) == 2)) goto L_C08F898;
    v0_1 = *(int *)((((((*(int *)((v0_0 + 0x34))) << 2) << 2) + (0x80 + v0_1)) + 0xC));
    v0_4 = (v0_1);
    if (!((v0_1 != 3))) goto L_C08F9FC;
    v0_1 = ((int (*)(int, int))(FUN_0c0e19f2))(v0_3, v0_2);
    goto L_C08F898;
    L_C08F9FC:;
    return F0;
    L_C08F898:;
    v0_1 = *(int *)((((*(int *)((v0_0 + 0x30))) << 2) + 0xC247030));
    v0_3 = (v0_1);
    if (((int)v0_1 < (int)0x2)) goto L_C08F8AC;
    if (((int)v0_3 < (int)0x5)) goto L_C08F8B0;
    L_C08F8AC:;
    v0_1 = ((int (*)(int, int))(FUN_0c0e19f2))(v0_3, v0_2);
    L_C08F8B0:;
    v0_4 = *(int *)((((*(int *)((v0_0 + 0x30))) << 2) + 0xC246FF0));
    v0_1 = (v0_4);
    if ((((((struct o4D0_int *)(v0_4))->v)) != 0)) goto L_C08F8CA;
    if (((((((struct o20C_int *)(v0_1))->v)) & 0x80000) == 0)) goto L_C08F8CE;
    L_C08F8CA:;
    v0_4 = ((int (*)(int, int))(FUN_0c0e19f2))(v0_3, v0_2);
    L_C08F8CE:;
    if (((int)((((struct o304_int *)(v0_1))->v)) > 0)) goto L_C08F8DA;
    v0_2 = ((int (*)(int, int))(FUN_0c0e19f2))(v0_3, v0_2);
    L_C08F8DA:;
    v0_2 = (((struct o6C_int *)(v0_0))->v);
    (((struct o6C_uint *)(v0_0))->v) = (v0_2 - 1);
    v0_4 = (0x6C);
    if (((int)(v0_2 - 1) <= 0)) goto L_C08F8EA;
    goto L_C08F9FC;
    L_C08F8EA:;
    if (((*(int *)((v0_0 + 0x38))) != 0)) goto L_C08F968;
    v0_2 = (((struct o60_int *)(v0_0))->v);
    v0_3 = (((struct o64_int *)(v0_0))->v);
    w0_0 = ((((struct o48_float *)(v0_0))->v));
    w0_0 = w0_0 + (float)((v0_2 << 1) + 0x1) * ((((struct o3C_float *)(v0_0))->v));
    (((struct o54_float *)(v0_0))->v) = w0_0;
    w0_0 = ((((struct o4C_float *)(v0_0))->v));
    w0_0 = w0_0 + (float)((v0_2 << 1) + 0x1) * ((((struct o44_float *)(v0_0))->v));
    (((struct o5C_float *)(v0_0))->v) = w0_0;
    w0_0 = (((((struct o40_float *)(v0_0))->v)) * (float)(((v0_3 - v0_2) << 1) - 1));
    w0_1 = (float)(((((v0_3 - v0_2) - 1) * (v0_3 - v0_2)) << 1) + 0x1);
    F0 = ((float)((v0_2 << 1) + 0x1));
    w0_0 = ((w0_0 * w0_1));
    L_C08F988:;
    (((struct o58_float *)(v0_0))->v) = w0_0;
    (((struct o58_float *)(v0_0))->v) = (((((struct o58_float *)(v0_0))->v)) - (*(float *)0xC08FACC));
    (((struct o48_float *)(v0_1))->v) = (((((struct o48_float *)(v0_1))->v)) + ((((struct o54_float *)(v0_0))->v)));
    (((struct o4C_float *)(v0_1))->v) = (((((struct o4C_float *)(v0_1))->v)) + ((((struct o58_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_1))->v) = (((((struct o50_float *)(v0_1))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    v0_2 = (((struct o60_int *)(v0_0))->v);
    (((struct o60_uint *)(v0_0))->v) = (v0_2 + 0x1);
    v0_3 = *(int *)(((((*(int *)((v0_0 + 0x38))) << 2) + (v0_0 + 0x64)) + 0x0));
    v0_4 = (v0_3);
    if (((v0_2 + 0x1) != v0_3)) goto L_C08F9FC;
    v0_2 = *(int *)((v0_0 + 0x38));
    *(unsigned int *)((v0_0 + 0x38)) = (v0_2 + 0x1);
    if (((v0_2 + 0x1) != 2)) goto L_C08F9F6;
    FUN_0c08f5d0((v0_1 + 0x30), (((((struct o6E_short *)(v0_1))->v)) + 0x8000));
    v0_1 = ((int (*)(void))(FUN_0c0e19f2))();
    L_C08F9F6:;
    (((struct o60_uint *)(v0_0))->v) = 0x0;
    v0_4 = (0x60);
    goto L_C08F9FC;
    L_C08F968:;
    v0_2 = (((struct o60_int *)(v0_0))->v);
    w0_0 = (float)(((((v0_2 + 0x1) * v0_2) << 1) + ((v0_2 + 0x1) * v0_2)) + 0x1);
    w0_0 = ((-(((((struct o50_float *)(v0_0))->v)) * w0_0)));
    goto L_C08F988;
}

int FUN_0c0789f4(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t2;
    register int t3;
    register float u56;
    register float u57;
    register float u66;
    register float u68;

    t0 = (((struct o14_int *)0xC23ED88)->v);
    if (((int)t0 >= (int)0x5) && ((int)t0 <= (int)0x9)) {
        return 0x9;
    }
    FUN_0c0685a4(t0, a5, a6, a7);
    t2 = (((struct o80_int *)(a4))->v);
    t3 = (((struct o0_int *)0xC23ED88)->v);
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
            } else {
                if ((t3 & ((((struct o9C_int *)(a4))->v))) != 0) {
                    (((struct o58_float *)(a4))->v) = -0.299999982f;
                    (((struct o90_float *)(a4))->v) = 10000.0f;
                    (((struct o94_float *)(a4))->v) = -10000.0f;
                    (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
                }
            }
        } else {
            if (((((struct o34_float *)(a4))->v)) > ((((struct o40_float *)(a4))->v))) {
                (((struct o4C_float *)(a4))->v) = 0.0199999996f;
                (((struct o58_float *)(a4))->v) = -0.0299999993f;
                (((struct o90_float *)(a4))->v) = 0.049999997f;
                (((struct o94_float *)(a4))->v) = -0.049999997f;
                FUN_0c0cc3f8(0x428A9, 0x0, 0x0, 0x0);
                (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
            }
        }
    } else {
        if ((t3 & ((((struct o98_int *)(a4))->v))) != 0) {
            (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + 1.0f);
            (((struct o4C_float *)(a4))->v) = 0.25f;
            (((struct o58_float *)(a4))->v) = 0.0299999993f;
            (((struct o90_float *)(a4))->v) = 0.399999976f;
            (((struct o94_float *)(a4))->v) = 0.149999991f;
            FUN_0c0cc3f8(0x328A9, 0x0, 0x0, 0x0);
            (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        }
    }
    if (((((struct o80_int *)(a4))->v)) != 0) {
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v)));
        u56 = (((struct o34_float *)(a4))->v);
        u57 = (((struct o4C_float *)(a4))->v);
        (((struct o34_float *)(a4))->v) = (u56 + u57);
        if (0.0f > (u56 + u57)) {
            (((struct o34_float *)(a4))->v) = 0.0f;
            FUN_0c0cc3f8(0xB2BA9, 0x0, 0x0, 0x0);
            *(unsigned int *)0xC247D04 = ((*(int *)0xC247D04) | 0x40000);
            (((struct o0_uint *)0xC23ED88)->v) = (((((struct o0_int *)0xC23ED88)->v)) & (~(((((struct o98_int *)(a4))->v)) | ((((struct o9C_int *)(a4))->v)))));
            (((struct o80_uint *)(a4))->v) = 0x0;
        } else {
            u66 = (((struct o4C_float *)(a4))->v);
            if ((((((struct o90_float *)(a4))->v)) > u66) && (u68 = (((struct o94_float *)(a4))->v), u66 > u68)) {
            } else {
                (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) * (-1.0f));
            }
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(((((struct o62_short *)(a4))->v)));
    FUN_0c0c46cc(((((struct o78_int *)(a4))->v)));
    return nlPopMatrix(0x1);
}

int FUN_0c08ae04(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    if (((*(int *)0xC23A258) & 1) != 0) {
        t1 = FUN_0c0e19aa(0xC08AFC6, 0xA4, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t1);
        u0 = ((((struct o70_float *)(a4))->v));
        u0 = u0 + 0.000183111057f * (float)((FUN_0c0da2e0()) - 16384);
        (((struct o70_float *)(t1))->v) = u0;
        (((struct o74_float *)(t1))->v) = ((((struct o74_float *)(a4))->v));
        u0 = ((((struct o78_float *)(a4))->v));
        u0 = u0 + 0.000183111057f * (float)((FUN_0c0da2e0()) - 16384);
        (((struct o78_float *)(t1))->v) = u0;
        (((struct o9A_ushort *)(t1))->v) = 0x291;
        (((struct oA2_ushort *)(t1))->v) = 0x1;
        u0 = 0.0599999987f;
        u0 = u0 + 1.83111047e-06f * (float)(FUN_0c0da2e0());
        (((struct o94_float *)(t1))->v) = u0;
        u0 = 0.25f;
        u0 = u0 + 7.62962736e-06f * (float)(FUN_0c0da2e0());
        (((struct o90_float *)(t1))->v) = u0;
        (((struct o9E_ushort *)(t1))->v) = 0x3C;
    }
    nlPushMatrix(0x0);
    u0 = FUN_0c0d9e90(((((struct o88_short *)(a4))->v)));
    u1 = (((struct o90_float *)(a4))->v);
    FUN_0c0dcca0((a4 + 0x70));
    nlRotateAY(((((struct o3CE_short *)(t0))->v)));
    nlRotateAX(((((struct o3CC_short *)(t0))->v)));
    t0 = (((struct o8C_short *)(a4))->v);
    (((struct o8C_ushort *)(a4))->v) = (t0 + 0x71C);
    nlRotateAZ((short)(t0 + 0x71C));
    nlScale((u1 * u0), (u1 * u0), (u1 * u0));
    FUN_0c0de000((u1 * u0));
    FUN_0c0c473c(((((struct o9A_short *)(a4))->v)));
    nlPopMatrix(0x1);
    if ((int)((((struct o88_short *)(a4))->v)) < (int)0x3FFF) {
        (((struct o88_ushort *)(a4))->v) = (((((struct o88_short *)(a4))->v)) + 0x6D);
    }
    (((struct o74_float *)(a4))->v) = (((((struct o74_float *)(a4))->v)) + 0.549999952f);
    t0 = (((struct o8E_short *)(a4))->v);
    (((struct o8E_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        return FUN_0c0e19f2();
    }
    return 0x8E;
}

void FUN_0c02e13c(int a4)
{
    register int t0;

    (((struct o4FC_uint *)(a4))->v) = 0x0;
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
    if ((unsigned int)t0 >= (unsigned int)0xE) {
        return;
    }
    switch ((t0 << 1)) {
        case 0:
        {
            return;
        }
        case 2:
        {
            t0 = FUN_0c02a416(a4);
            if (t0 != 0) {
                (((struct o538_uint *)(a4))->v) = 0x0;
                (((struct o4F8_uint *)(a4))->v) = 0x0;
            } else {
                t0 = FUN_0c03593a(a4);
                if (t0 != 0) {
                    t0 = FUN_0c02a35a(a4);
                    if (t0 != 0) {
                        if (t0 != 1) {
                            if (t0 != 2) {
                                if (t0 != 3) {
                                    (((struct o4F8_uint *)(a4))->v) = 0x0;
                                } else {
                                    (((struct o524_uint *)(a4))->v) = 0x0;
                                    t0 = FUN_0c0236ce(a4);
                                    if (t0 != 0) {
                                        (((struct o538_uint *)(a4))->v) = 0x2;
                                        (((struct o4F8_uint *)(a4))->v) = 0x2;
                                    } else {
                                        (((struct o4F8_uint *)(a4))->v) = 0x0;
                                    }
                                }
                            } else {
                                (((struct o538_uint *)(a4))->v) = 0x2;
                                (((struct o4F8_uint *)(a4))->v) = 0x6;
                            }
                        } else {
                            t0 = FUN_0c035b26(a4);
                            if (t0 != 0) {
                                t0 = FUN_0c035ce4(a4);
                                if (t0 != 0) {
                                    (((struct o4F8_uint *)(a4))->v) = 0x4;
                                } else {
                                    t0 = (((struct o538_int *)(a4))->v);
                                    if (t0 != 8) {
                                        if (t0 == 4) {
                                            (((struct o4F8_uint *)(a4))->v) = 0x2;
                                        } else {
                                            (((struct o4F8_uint *)(a4))->v) = 0x0;
                                        }
                                    } else {
                                        (((struct o4F8_uint *)(a4))->v) = 0x2;
                                    }
                                }
                            } else {
                                t0 = (((struct o538_int *)(a4))->v);
                                if (t0 != 8) {
                                    if (t0 == 4) {
                                        (((struct o4F8_uint *)(a4))->v) = 0x2;
                                    } else {
                                        (((struct o4F8_uint *)(a4))->v) = 0x0;
                                    }
                                } else {
                                    (((struct o4F8_uint *)(a4))->v) = 0x2;
                                }
                            }
                        }
                    } else {
                        (((struct o4F8_uint *)(a4))->v) = 0xC;
                    }
                } else {
                    (((struct o538_uint *)(a4))->v) = 0x1;
                    if (((((struct o54C_int *)(a4))->v)) == 0) {
                        t0 = FUN_0c034e2c(a4);
                        if (t0 != 0) {
                            (((struct o4F8_uint *)(a4))->v) = 0x2;
                        } else {
                            (((struct o4F8_uint *)(a4))->v) = 0x0;
                        }
                    } else {
                        (((struct o4F8_uint *)(a4))->v) = 0x2;
                    }
                }
            }
            return;
        }
        case 4:
        {
            return;
        }
        case 6:
        {
            FUN_0c02a416(a4);
            (((struct o4F8_uint *)(a4))->v) = 0x0;
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
            (((struct o4F8_uint *)(a4))->v) = 0x0;
            return;
        }
        case 16:
        {
            return;
        }
        case 18:
        {
            (((struct o4F8_uint *)(a4))->v) = 0xC;
            return;
        }
        case 20:
        {
            return;
        }
        case 22:
        {
            FUN_0c02a416(a4);
            (((struct o4F8_uint *)(a4))->v) = 0x6;
            return;
        }
        case 24:
        {
            return;
        }
        default:
        {
            FUN_0c02a416(a4);
            (((struct o4F8_uint *)(a4))->v) = 0x6;
            return;
        }
    }
}


int FUN_0c0117c6(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F409C);
    t0 = 0xC0F41A4;
    for (;;) {
        t1 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        FUN_0c0c465c(t1);
        if ((unsigned int)t0 >= (unsigned int)0xC0F41B4) {
            break;
        }
    }
    FUN_0c0c465c((*(int *)((((*(int *)0xC1EF55C) << 2) + 0xC0F41B4))));
    t0 = *(int *)0xC523158;
    u0 = (float)(t0 & 0x3F);
    if (((*(int *)0xC523158) & 64) != 0) {
        u0 = (63.0f - (float)(t0 & 0x3F));
    }
    t0 = 0x0;
    for (;;) {
        if (t0 == (*(int *)0xC1EF55C)) {
            FUN_0c0c465c((*(int *)((((t0 << 2) + 0xC0F4198) + 0x0))));
            FUN_0c0c465c(0x13B5);
            FUN_0c0c475c(0x13B4, (u0 / 63.0f));
        } else {
            FUN_0c0c475c((*(int *)((((t0 << 2) + 0xC0F4198) + 0x0))), 0.5f);
            FUN_0c0c465c(0x13B1);
        }
        FUN_0c0dcc70(2.0999999f, 0.0f, 0.0f);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x3) {
            break;
        }
    }
    nlPopMatrix(0x1);
    t0 = *(short *)0xC2497C8;
    t1 = *(int *)0xC1EF55C;
    if (((unsigned short)t0 & 0xC0C0) != 0) {
        t2 = *(short *)0xC2497C8;
        if (((unsigned short)t2 & 0x8080) != 0) {
            if ((int)t1 < (int)0x2) {
                *(unsigned int *)0xC1EF55C = ((*(int *)0xC1EF55C) + 0x1);
            }
            t3 = (unsigned short)t2;
        } else {
            t4 = (unsigned short)t2;
            if ((int)t1 > 0) {
                t1 = *(int *)0xC1EF55C;
                *(unsigned int *)0xC1EF55C = (t1 - 1);
                t4 = (t1 - 1);
            }
            t3 = t4;
        }
        return t3;
    }
    if (((unsigned short)t0 & 12) != 0) {
        if (((((*(signed char *)0xC1EF2D4) | (*(signed char *)0xC1EF2D5)) | (*(signed char *)0xC1EF2D6)) | (*(signed char *)0xC1EF2D7)) == 0) {
            FUN_0c0162ee(0xC1EF500);
            FUN_0c010c40(0x1);
        } else {
            FUN_0c010c40(0x7);
        }
        t0 = ((int (*)(void))((*(int *)((((*(int *)0xC1EF55C) << 2) + 0xC209A40)))))();
        return FUN_0c0c0504((*(int *)0xC1EF55C));
    }
    t0 = *(short *)0xC2497C8;
    if (((unsigned short)t0 & 0x2) != 0) {
        *(unsigned int *)0xC23A260 = 0x3;
    }
    return (unsigned short)t0;
}

int FUN_0c059f6c(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register float u4;
    register float u8;
    register float u12;
    register float u24;
    register float u38;
    register float u66;
    register int t96;
    register int t102;
    register int t104;
    register int t57;
    register int t58;

    FUN_0c0685a4(a4, a5, a6, a7);
    u4 = ((((struct o30_float *)(a4))->v));
    u4 = u4 + (*(float *)(((0x90 + a4) + 0x0))) * (*(float *)(((0x48 + a4) + 0x0)));
    (((struct o30_float *)(a4))->v) = u4;
    u8 = ((((struct o34_float *)(a4))->v));
    u8 = u8 + (*(float *)(((0x90 + a4) + 0x0))) * (*(float *)(((0x4C + a4) + 0x0)));
    (((struct o34_float *)(a4))->v) = u8;
    u12 = ((((struct o38_float *)(a4))->v));
    u12 = u12 + (*(float *)(((0x90 + a4) + 0x0))) * (*(float *)(((0x50 + a4) + 0x0)));
    (((struct o38_float *)(a4))->v) = u12;
    (((struct o98_uint *)(a4))->v) = (((((struct o98_int *)(a4))->v)) + (*(int *)(((0x9C + a4) + 0x0))));
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.0599999987f);
    if (((((struct o38_float *)(a4))->v)) > (float)((((struct oAC_int *)(a4))->v))) {
        if (!((((((struct o34_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v))) > ((((struct o94_float *)(a4))->v)))) {
            (((struct o34_float *)(a4))->v) = (((((struct o94_float *)(a4))->v)) - ((((struct o58_float *)(a4))->v)));
            u24 = ((((struct o4C_float *)(a4))->v));
            u24 *= -0.599999964f;
            (((struct o4C_float *)(a4))->v) = u24;
        }
    } else {
        if (!((((((struct o34_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v))) > (float)((((struct oA8_int *)(a4))->v)))) {
            (((struct o34_float *)(a4))->v) = ((float)((((struct oA8_int *)(a4))->v)) - ((((struct o58_float *)(a4))->v)));
            u38 = ((((struct o4C_float *)(a4))->v));
            u38 *= -0.599999964f;
            (((struct o4C_float *)(a4))->v) = u38;
        }
    }
    if ((((((struct o80_int *)(a4))->v)) != 0) && (t57 = (((struct o84_int *)(a4))->v), t58 = (((struct oA0_int *)(a4))->v), ((t58 + t57) & 1) == 0)) {
    } else {
        nlPushMatrix(0x0);
        FUN_0c0dcc70(((((struct o54_float *)(a4))->v)), ((((struct o58_float *)(a4))->v)), ((((struct o5C_float *)(a4))->v)));
        nlRotateAY(((((struct o6C_int *)(a4))->v)));
        u66 = (((struct o74_float *)(a4))->v);
        nlScale(u66, u66, u66);
        FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
        nlRotateAZ(((((struct o64_short *)(a4))->v)));
        nlRotateAY(((((struct o62_short *)(a4))->v)));
        nlRotateAX(((((struct o60_short *)(a4))->v)));
        *(float *)(((int)stk + 0)) = ((((struct o48_float *)(a4))->v));
        *(float *)(((int)stk + 4)) = ((((struct o4C_float *)(a4))->v));
        *(float *)(((int)stk + 8)) = ((((struct o50_float *)(a4))->v));
        nlRotateAxe(((int)stk + 0), ((((struct o98_int *)(a4))->v)));
        FUN_0c0de000(((((struct o74_float *)(a4))->v)));
        FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
        nlPopMatrix(0x1);
    }
    t96 = (((struct oA0_int *)(a4))->v);
    (((struct oA0_uint *)(a4))->v) = (t96 - 1);
    if ((int)(t96 - 1) <= 0) {
        (((struct oA0_uint *)(a4))->v) = ((((struct oA4_int *)(a4))->v));
        (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
    }
    t102 = (((struct o80_int *)(a4))->v);
    t104 = t102;
    if (t102 == 2) {
        t104 = (FUN_0c0e19f2());
    }
    return t104;
}

int FUN_0c07dd98(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t3 = (((struct o88_int *)(a4))->v);
    t4 = *(int *)(((0xC246FF0 + (t3 << 2)) + 0x0));
    if ((((*(int *)0xC23ED5C) & 0x200) == 0) && ((t0 = (((struct o290_int *)(t4))->v), (t0 & 0x40000000) == 0) && (t1 = *(int *)(((t3 << 2) + 0xC247030)), t1 != 5))) {
    } else {
        t0 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))((t3 << 2), a5, a6, a7);
    }
    if (((*(int *)0xC23ED88) & 0x100) != 0) {
        *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFFFEFF);
        (((struct o290_uint *)(t4))->v) = (((((struct o290_int *)(t4))->v)) | 0x2);
        t0 = ((int (*)(int))(FUN_0c0e19f2))(0xC23ED88);
    }
    t0 = *(int *)((0xC247030 + (((((struct o88_int *)(a4))->v)) << 2)));
    if (t0 == 8) {
        return t0;
    }
    nlPushMatrix(0x0);
    nlMultiMatrix(((((struct o3E4_int *)(t4))->v)));
    u0 = (((struct o74_float *)(a4))->v);
    nlScale(u0, u0, u0);
    FUN_0c0dcca0(0xC1011E0);
    nlRotateAZ((*(short *)0xC1011F0));
    nlRotateAY((*(short *)0xC1011EE));
    nlRotateAX((*(short *)0xC1011EC));
    if ((((((struct o2BC_int *)(t4))->v)) == 0x328) && (t2 = (((struct o2B4_int *)(t4))->v), (int)t2 > (int)0x8)) {
        t0 = (((struct oA8_int *)(a4))->v);
        (((struct oA8_uint *)(a4))->v) = (t0 + 0x800);
        (((struct o68_uint *)(a4))->v) = (int)((FUN_0c0da410((t0 + 0x800))) * 1024.0f);
        t0 = (((struct oAC_int *)(a4))->v);
        (((struct oAC_uint *)(a4))->v) = (t0 + 0x800);
        (((struct o70_uint *)(a4))->v) = (int)((FUN_0c0d9e90((t0 + 0x800))) * 2048.0f);
        nlRotateAZ(((((struct o68_int *)(a4))->v)));
        nlRotateAX(((((struct o70_int *)(a4))->v)));
    }
    FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
    return nlPopMatrix(0x1);
}

void FUN_0c0a369c(int a4, int a5, int a6, int a7)
{
    register int t12;

    if (((*(int *)0xC23A1A8) & 0x10000001) == 0x10000001) {
        return;
    }
    if ((*(short *)(((((((((struct o88_int *)(a4))->v)) << 2) << 2) + 0xC2460F4) + 0x4))) == 0) {
        FUN_0c0e19f2(0xC246074, a5, a6, a7);
    return;
    }
    if ((unsigned short)(*(short *)(((((((((struct o88_int *)(a4))->v)) << 2) << 2) + 0xC2460F4) + 0x4))) == 1) {
        return;
    }
    t12 = *(int *)(((((((((struct o88_int *)(a4))->v)) << 2) << 2) + 0xC2460F4) + 0x0));
    if ((((((struct o290_int *)(t12))->v)) & 0x40000000) != 0) {
        FUN_0c0e19f2(0xC246074, a5, a6, a7);
    }
    if ((*(int *)((0xC247030 + (((((struct oBC_int *)(t12))->v)) << 2)))) == 8) {
        return;
    }
    if ((int)((((struct o80_int *)(a4))->v)) > 0) {
        (((struct o62_ushort *)(a4))->v) = (((((struct o62_short *)(a4))->v)) + 0x100);
        if ((int)((((struct o62_short *)(a4))->v)) > (int)0x1800) {
            (((struct o80_uint *)(a4))->v) = 0xFFFFFFFF;
        }
    } else {
        if ((int)((((struct o80_int *)(a4))->v)) < 0) {
            (((struct o62_ushort *)(a4))->v) = (((((struct o62_short *)(a4))->v)) - 0x100);
            if ((int)((((struct o62_short *)(a4))->v)) < (int)0xFFFFE800) {
                (((struct o80_uint *)(a4))->v) = 0x1;
            }
        }
    }
    if ((int)((((struct o84_int *)(a4))->v)) > 0) {
        (((struct o60_ushort *)(a4))->v) = (((((struct o60_short *)(a4))->v)) + 0x100);
        if ((int)((((struct o60_short *)(a4))->v)) > (int)0x800) {
            (((struct o84_uint *)(a4))->v) = 0xFFFFFFFF;
        }
    } else {
        if ((int)((((struct o84_int *)(a4))->v)) < 0) {
            (((struct o60_ushort *)(a4))->v) = (((((struct o60_short *)(a4))->v)) - 0x100);
            if ((int)((((struct o60_short *)(a4))->v)) < (int)0xFFFFF800) {
                (((struct o84_uint *)(a4))->v) = 0x1;
            }
        }
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dbda0(((((((((struct o7C_int *)(a4))->v)) << 2) << 2) << 2) + ((((struct o3E4_int *)(t12))->v))));
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAY(((((struct o62_short *)(a4))->v)));
    nlRotateAX(((((struct o60_short *)(a4))->v)));
    FUN_0c0c47ae(((((struct o78_int *)(a4))->v)));
    nlPopMatrix(0x1);
}

int FUN_0c0c5b90(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t4;
    register int t10;
    register int t11;
    register int t14;
    register int t21;
    register int t31;
    register int t88;
    register int t122;
    register int t125;
    register int t1;
    register int t85;
    register int t107;
    register int t108;
    register int t115;
    register int t116;
    register int t117;

    if (((((((struct o8_int *)0xC23A1A0)->v)) & 0x101) == 0) && (t1 = *(int *)0xC247D04, t1 != 10)) {
        t115 = a4;
    } else {
        *(unsigned char *)((0xC31FC44 + (unsigned char)(*(signed char *)((a4 + 0x75))))) = 0x0;
        *(unsigned char *)(((unsigned char)(*(signed char *)((a4 + 0x75))) + 0xC31FC7E)) = 0x0;
        t4 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    t10 = *(signed char *)((a4 + 0x74));
    if ((unsigned char)t10 != 0) {
        if ((unsigned char)t10 == 1) {
            t11 = (((struct o7C_short *)(a4))->v);
            (((struct o7C_ushort *)(a4))->v) = (t11 - 1);
            t14 = 0x7C;
            if ((int)(short)((t11 - 1) + 0x1) <= 0) {
                *(unsigned char *)((0xC31FC44 + (unsigned char)(*(signed char *)((a4 + 0x75))))) = 0x0;
                t14 = (((int (*)(int))(FUN_0c0e19f2))(t115));
            }
            if ((*(int *)((a4 + 0x30))) != 0) {
                return FUN_0c0c0340((a4 + 0x30));
            }
            return t14;
        }
        return (unsigned char)t10;
    }
    t21 = (((struct o7A_short *)(a4))->v);
    (((struct o7A_ushort *)(a4))->v) = (t21 - 1);
    if ((int)(short)(t21 - 1) > 0) {
        return 0x7A;
    }
    (((struct o74_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x74))) + 0x1);
    if (((((struct o78_short *)(a4))->v)) != 0) {
        t31 = (((struct o78_short *)(a4))->v);
        if ((unsigned short)t31 != 1) {
            if ((unsigned short)t31 != 2) {
                if ((unsigned short)t31 != 3) {
                    t85 = 0xC2475A4;
                    if ((unsigned short)t31 != 4) {
                    } else {
                        if ((*(int *)0xC247070) == 2) {
                            t85 = 0x0;
                            if ((*(int *)0xC2475A4) == 1) {
                                t85 = 0x1;
                            }
                        } else {
                            t85 = 0x1;
                            if ((*(int *)0xC2475A4) == 1) {
                                t85 = 0x0;
                            }
                        }
                    }
                } else {
                    t85 = 0x1;
                    if ((*(int *)0xC2475A4) == 1) {
                        t85 = 0x0;
                    }
                }
            } else {
                t85 = 0x0;
                if ((int)((((struct o4_int *)0xC247030)->v)) >= (int)0x2) {
                    t85 = 0x1;
                }
            }
        } else {
            t85 = 0x0;
            if ((int)((((struct o0_int *)0xC247030)->v)) < (int)0x2) {
                t85 = 0x1;
            }
        }
        (((struct o75_uchar *)(a4))->v) = ((((*(int *)(((t85 << 2) + 0xC23EDC0))) >> 1) << 1) + 0x1);
        t88 = *(signed char *)((a4 + 0x75));
        *(unsigned int *)((a4 + 0x30)) = (unsigned short)(*(short *)(((((unsigned int)(unsigned char)t88 >> 1) << 1) + ((((struct o68_int *)(a4))->v)))));
        t115 = ((unsigned int)(unsigned char)t88 >> 1);
        if (((((struct o70_int *)(a4))->v)) != 0) {
            (((struct o6C_uint *)(a4))->v) = (*(int *)(((((unsigned int)(unsigned char)t88 >> 1) << 2) + ((((struct o70_int *)(a4))->v)))));
            t115 = (((unsigned int)(unsigned char)t88 >> 1) << 2);
        }
        t116 = 0xC246FF0;
        t117 = 0x2;
    }
    if ((((((struct o6C_int *)(a4))->v)) != 0) && ((t107 = (((struct o0_int *)0xC23A1A0)->v), t107 != 3) || (t108 = *(signed char *)((a4 + 0x75)), (unsigned char)t108 != 3))) {
        FUN_0c0cc3f8(((((struct o6C_int *)(a4))->v)), t116, t117, 0x0);
    } else {
    }
    *(unsigned char *)((0xC31FC44 + (unsigned char)(*(signed char *)((a4 + 0x75))))) = (*(signed char *)(((0x76 + a4) + 0x0)));
    *(unsigned char *)(((unsigned char)(*(signed char *)((a4 + 0x75))) + 0xC31FC7E)) = (*(signed char *)((a4 + 0x77)));
    t122 = (((struct o7C_short *)(a4))->v);
    (((struct o7C_ushort *)(a4))->v) = (t122 - 1);
    t125 = 0x7C;
    if ((int)(short)((t122 - 1) + 0x1) <= 0) {
        *(unsigned char *)((0xC31FC44 + (unsigned char)(*(signed char *)((a4 + 0x75))))) = 0x0;
        t125 = (((int (*)(int, int, int))(FUN_0c0e19f2))(t115, t116, t117));
    }
    if ((*(int *)((a4 + 0x30))) != 0) {
        return FUN_0c0c0340((a4 + 0x30));
    }
    return t125;
}
