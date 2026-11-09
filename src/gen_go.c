/* Straight-line functions with calls and guards (batch gen_go): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c01db0e(int, int);
int FUN_0c01e7e8(int, int, int);
float FUN_0c01f172(int);
int FUN_0c054c8a(int);
int FUN_0c056e7a(int);
int FUN_0c058e7c(int, int);
int FUN_0c05a98a(int, int, int);
int FUN_0c081074(int);
int FUN_0c081e0c(int);
int FUN_0c085704(int);
int FUN_0c086b96(int);
extern int FUN_0c08a3d4();
int FUN_0c08d834(int);
int FUN_0c08d840(int, float);
int FUN_0c090bf0(int);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0bbbf4(int);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0c8d06(int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0cf392(int);
int FUN_0c0d8ae0(int);
int FUN_0c0d8ba0(int);
int FUN_0c0d91e0(int);
int FUN_0c0d9a40(int);
int FUN_0c0d9ca0(float);
int FUN_0c0d9dc0(float, float);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int FUN_0c0dd0a0(int, int);
int FUN_0c0ddd20(int, float, float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e5dc0(void);
int FUN_0c0e6248(int);
int FUN_0c20e0ba(float);
extern void _builtin_set_imask(int);
int kmInitDevice(int);
int kmSetDisplayMode(int, int, int, int);
int kmSetWaitVsyncCount(int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int sys_init(void);
int FUN_0c05e6dc(int a4, int a5, int a6);
int FUN_0c07d17c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c08b8e0(int a4, int a5);
int FUN_0c0598e4(int a4);
int FUN_0c0553b6(int a4, int a5, int a6);
int FUN_0c0b35e4(int a4);
void FUN_0c08a5e4(int a4, int a5);
int FUN_0c081e8c(int a4);
int FUN_0c087aa0(int a4, int a5, int a6);
void FUN_0c0d8d00(int a4, int a5, int a6);
int FUN_0c05fd8c(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7);
void FUN_0c05b274(int a4, int a5, int a6, int a7, int a8);
int FUN_0c05f1e2(int a4, int a5);
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
struct o21C_int { char p[0x21C]; int v; };
struct o220_int { char p[0x220]; int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o224_uint { char p[0x224]; unsigned int v; };
struct o228_uint { char p[0x228]; unsigned int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o230_uint { char p[0x230]; unsigned int v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o240_uint { char p[0x240]; unsigned int v; };
struct o24C_float { char p[0x24C]; float v; };
struct o250_int { char p[0x250]; int v; };
struct o250_uint { char p[0x250]; unsigned int v; };
struct o258_float { char p[0x258]; float v; };
struct o25C_float { char p[0x25C]; float v; };
struct o2B4_int { char p[0x2B4]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o2E8_uint { char p[0x2E8]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o348_int { char p[0x348]; int v; };
struct o350_int { char p[0x350]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3C8_int { char p[0x3C8]; int v; };
struct o3C8_uint { char p[0x3C8]; unsigned int v; };
struct o3D0_int { char p[0x3D0]; int v; };
struct o3D0_uint { char p[0x3D0]; unsigned int v; };
struct o3EC_int { char p[0x3EC]; int v; };
struct o3EC_uint { char p[0x3EC]; unsigned int v; };
struct o3F4_int { char p[0x3F4]; int v; };
struct o3F4_uint { char p[0x3F4]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o4E_ushort { char p[0x4E]; unsigned short v; };
struct o50_float { char p[0x50]; float v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_float { char p[0x64]; float v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6C_ushort { char p[0x6C]; unsigned short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_short { char p[0x70]; short v; };
struct o70_ushort { char p[0x70]; unsigned short v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_int { char p[0xA8]; int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC8_uint { char p[0xC8]; unsigned int v; };
struct oCC_uint { char p[0xCC]; unsigned int v; };
struct oD8_int { char p[0xD8]; int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_short { char p[0x14]; short v; };
struct o14_ushort { char p[0x14]; unsigned short v; };
struct o16_short { char p[0x16]; short v; };
struct o16_ushort { char p[0x16]; unsigned short v; };
struct o18_short { char p[0x18]; short v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1A_short { char p[0x1A]; short v; };
struct o1A_ushort { char p[0x1A]; unsigned short v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



int FUN_0c05e6dc(int a4, int a5, int a6)
{
    int t0;
    int t5;
    int t19;
    int t1;
    int t14;
    int stk[6];

    t0 = (((struct o22C_int *)(a4))->v);
    (((struct o22C_uint *)(a4))->v) = (t0 - 1);
    if (((int)(t0 - 1) > 0) && (t1 = (((struct oD8_int *)(a4))->v), t1 == 0)) {
        if (((*(int *)0xC23A258) & 7) == 0) {
            t5 = FUN_0c0e1830(0xC05E952, 0xB4);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t5 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
            { struct mvb6 { char c[6]; }; *(struct mvb6 *)((t5 + 0x60)) = *(struct mvb6 *)((a4 + 0x6C)); }
            (((struct o78_uint *)(a4))->v) = 0x2D0;
            (((struct oA0_uint *)(a4))->v) = 0x10;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
        FUN_0c01e7e8(a4, 0xA7F, ((((struct oBC_int *)(a4))->v)));
        if ((((((struct oA8_int *)(a4))->v)) != 0) && (t14 = (((struct oAC_int *)(a4))->v), (int)t14 <= (int)0x16)) {
            (((struct o1E4_float *)(a4))->v) = ((((struct o24C_float *)(a4))->v));
            FUN_0c08d834((a4 + 0x30));
            (((struct o23C_uint *)(a4))->v) = 0x0;
            (((struct o220_uint *)(a4))->v) = 0x344;
            (((struct o1E4_float *)(a4))->v) = 30.0f;
            FUN_0c0cc3f8(0x1331A9, 0x0, 0x0, 0x0);
            t19 = FUN_0c0cc054(((((struct oBC_int *)(a4))->v)), 0xD);
            *(unsigned int *)((a4 + 0x0)) = 0xC05EE68;
            return t19;
        }
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v)));
        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) * 1.06999993f);
        (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) * 1.06999993f);
        (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) * 1.06999993f);
        FUN_0c01cdc2(a4);
        nlPushMatrix(0x0);
        FUN_0c0dcca0((a4 + 0x30));
        nlRotateAY(((((struct o6E_short *)(a4))->v)));
        nlRotateAX(((((struct o6C_short *)(a4))->v)));
        FUN_0c0c465c(((((struct o220_int *)(a4))->v)));
        FUN_0c0dcc70(0.0f, 0.0f, 7.0f);
        nlRotateAX(0xC000);
        nlScale(10.0f, 10.0f, 10.0f);
        FUN_0c0de000(10.0f);
        FUN_0c0c465c((0x281 + ((*(int *)0xC23A258) & 0xF)));
        nlRotateAY(0x4000);
        FUN_0c0de000(10.0f);
        FUN_0c0c465c((0x281 + ((*(int *)0xC23A258) & 0xF)));
        return nlPopMatrix(0x1);
    }
    (((struct o1E4_float *)(a4))->v) = ((((struct o24C_float *)(a4))->v));
    FUN_0c05a98a(a4, a5, a6);
    if (((((struct oD8_int *)(a4))->v)) == 1) {
        FUN_0c054c8a(a4);
        FUN_0c090bf0(a4);
    }
    FUN_0c08d834((a4 + 0x30));
    (((struct o23C_uint *)(a4))->v) = 0x0;
    (((struct o220_uint *)(a4))->v) = 0x344;
    (((struct o1E4_float *)(a4))->v) = 30.0f;
    FUN_0c0cc3f8(0x1331A9, 0x0, 0x0, 0x0);
    FUN_0c0cc054(((((struct oBC_int *)(a4))->v)), 0xD);
    *(unsigned int *)((a4 + 0x0)) = 0xC05EE68;
    return FUN_0c08d840((a4 + 0x30), 35.0f);
}



int FUN_0c0598e4(int a4)
{
    float u1;
    float u8;
    int t10;
    float u17;
    int t19;
    int t24;
    float u38;
    int t40;
    int t45;
    float u58;
    int t63;
    int stk[25];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x30)); }
    u1 = -4.0f;
    u1 = u1 + 6.0f * ((((struct o25C_float *)(a4))->v));
    (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) - u1);
    FUN_0c0dc5a0();
    FUN_0c0dcca0((a4 + 0x60));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    *(float *)(((int)stk + 4)) = 0.0f;
    u8 = -4.0f;
    u8 = u8 + 6.0f * ((((struct o25C_float *)(a4))->v));
    *(float *)(((int)stk + 8)) = u8;
    *(float *)(((int)stk + 12)) = 0.0f;
    FUN_0c0db470(((int)stk + 4), (((int)stk + 4) + 0xC));
    t10 = FUN_0c0c8d06((((int)stk + 4) + 0xC));
    if ((int)t10 >= 0) {
        (((struct o34_float *)(a4))->v) = ((((struct o4_float *)((((int)stk + 4) + 0xC)))->v));
    } else {
        (((struct o4_float *)((((int)stk + 4) + 0xC)))->v) = ((((struct o34_float *)(a4))->v));
    }
    *(float *)(((int)stk + 4)) = 8.5f;
    u17 = -4.0f;
    u17 = u17 + 6.0f * ((((struct o25C_float *)(a4))->v));
    *(float *)(((int)stk + 8)) = u17;
    *(float *)(((int)stk + 12)) = 0.0f;
    FUN_0c0db470(((int)stk + 4), ((((int)stk + 4) + 0xC) + 0xC));
    t19 = FUN_0c0c8d06(((((int)stk + 4) + 0xC) + 0xC));
    if ((int)t19 >= 0) {
        (((struct o70_ushort *)(a4))->v) = ((FUN_0c0d9ca0(((((((struct o4_float *)(((((int)stk + 4) + 0xC) + 0xC)))->v)) - ((((struct o4_float *)((((int)stk + 4) + 0xC)))->v))) / 8.5f))) << 1);
    } else {
        *(float *)(((int)stk + 4)) = -8.5f;
        FUN_0c0db470(((int)stk + 4), ((((int)stk + 4) + 0xC) + 0xC));
        t24 = FUN_0c0c8d06(((((int)stk + 4) + 0xC) + 0xC));
        if ((int)t24 >= 0) {
            (((struct o70_ushort *)(a4))->v) = ((FUN_0c0d9ca0(((((((struct o4_float *)(((((int)stk + 4) + 0xC) + 0xC)))->v)) - ((((struct o4_float *)((((int)stk + 4) + 0xC)))->v))) / -8.5f))) << 1);
        }
    }
    nlRotateAZ(((((struct o70_short *)(a4))->v)));
    *(float *)(((int)stk + 4)) = 0.0f;
    u38 = -4.0f;
    u38 = u38 + 6.0f * ((((struct o25C_float *)(a4))->v));
    *(float *)(((int)stk + 8)) = u38;
    *(float *)(((int)stk + 12)) = 6.0f;
    FUN_0c0db470(((int)stk + 4), ((((int)stk + 4) + 0xC) + 0x18));
    t40 = FUN_0c0c8d06(((((int)stk + 4) + 0xC) + 0x18));
    if ((int)t40 >= 0) {
        (((struct o6C_ushort *)(a4))->v) = (-((FUN_0c0d9ca0(((((((struct o4_float *)(((((int)stk + 4) + 0xC) + 0x18)))->v)) - ((((struct o4_float *)((((int)stk + 4) + 0xC)))->v))) / 6.0f))) << 1));
    } else {
        *(float *)(((int)stk + 12)) = -6.0f;
        FUN_0c0db470(((int)stk + 4), ((((int)stk + 4) + 0xC) + 0x18));
        t45 = FUN_0c0c8d06(((((int)stk + 4) + 0xC) + 0x18));
        if ((int)t45 >= 0) {
            (((struct o6C_ushort *)(a4))->v) = (-((FUN_0c0d9ca0(((((((struct o4_float *)(((((int)stk + 4) + 0xC) + 0x18)))->v)) - ((((struct o4_float *)((((int)stk + 4) + 0xC)))->v))) / -6.0f))) << 1));
        }
    }
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    u58 = (((struct o25C_float *)(a4))->v);
    nlScale(u58, u58, u58);
    FUN_0c0de000(((((struct o25C_float *)(a4))->v)));
    t63 = 0x24C;
    if (((((struct o21C_int *)(a4))->v)) == 0) {
        t63 = 0x248;
    }
    FUN_0c0c47ae((*(int *)((a4 + t63))));
    return (nlPopMatrix(0x1));
}

int FUN_0c0553b6(int a4, int a5, int a6)
{
    int t67;
    int t21;
    int t2;
    int t5;
    int t8;
    int t16;
    int t33;
    int t44;
    int t22;
    int t4;
    int t12;
    int t13;
    int t14;

    t67 = 0x0;
    if ((int)a4 < (int)0x16) {
    } else {
        t21 = 0x0;
        if ((*(int *)0xC204998) == 1) {
            t2 = FUN_0c0da2e0();
            if (((*(int *)0xC23ED50) == 40) && (t4 = *(int *)0xC1FF6D4, t4 == 0)) {
                (((struct o4_uint *)0xC1FF880)->v) = ((((int)t2 > (int)0x4E20)) ? 1 : 0);
                t5 = 0x1;
                if ((int)t2 <= (int)0x2710) {
                    t5 = 0x0;
                }
                t12 = t5;
            } else {
                (((struct o4_uint *)0xC1FF880)->v) = ((((int)t2 > (int)0x4E20)) ? 1 : 0);
                t8 = 0x1;
                if (((int)t2 <= (int)0x7530) && (((int)a4 < (int)0x19) || ((int)a4 >= (int)0x1D))) {
                    t8 = 0x0;
                }
                t12 = t8;
            }
            t16 = 0x0;
            if ((t12 == 1) && ((t13 = (((struct o8_int *)0xC1FF880)->v), t13 == 1) && (t14 = (((struct o4_int *)0xC1FF880)->v), t14 == 1))) {
                t16 = 0x1;
            }
            t21 = t16;
            t22 = t2;
        }
        (((struct o8_uint *)0xC1FF880)->v) = 0x0;
        if (t21 != 0) {
            *(unsigned int *)((((a4 << 2) + 0xC1FF74C) + 0x0)) = 0xC05878C;
        } else {
            *(unsigned int *)((((a4 << 2) + 0xC1FF74C) + 0x0)) = 0xC057142;
        }
        t33 = FUN_0c0e19aa((*(int *)(((a4 << 2) + 0xC1FF74C))), 0x288, ((((struct o0_int *)0xC23ECF0)->v)));
        FUN_0c0e19d0(t33);
        if (((*(int *)0xC23A1A8) & 0x100) != 0) {
            FUN_0c0cf392(t33);
        }
        if (t21 == 0) {
            (((struct o0_uint *)0xC1FF880)->v) = 0x13;
            (((struct oC8_uint *)(t33))->v) = 0x40000;
            (((struct o220_uint *)(t33))->v) = a4;
            (((struct o228_uint *)(t33))->v) = a5;
            (((struct o240_uint *)(t33))->v) = (unsigned short)(*(short *)(((a4 << 1) + 0xC1FE8AA)));
            (((struct o224_uint *)(t33))->v) = (*(int *)((((a4 - 22) << 2) + 0xC1FF680)));
        } else {
            t44 = FUN_0c058e7c(a4, t22);
            (((struct o0_uint *)0xC1FF880)->v) = t44;
            (((struct oC8_uint *)(t33))->v) = 0x40000;
            (((struct o220_uint *)(t33))->v) = t44;
            (((struct o228_uint *)(t33))->v) = a5;
            (((struct o240_uint *)(t33))->v) = (unsigned short)(*(short *)(((t44 << 1) + 0xC1FF7C0)));
            (((struct o224_uint *)(t33))->v) = (*(int *)(((t44 << 2) + 0xC1FF834)));
        }
        if ((*(short *)((((((struct oC_int *)0xC23ECF0)->v)) + 0x0))) == 3) {
            (((struct o230_uint *)(t33))->v) = 0x1;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t33 + 0x30)) = *(struct mv3 *)(a6); }
        if (a5 == 11) {
            (((struct o34_float *)(t33))->v) = ((FUN_0c01f172(t33)) + ((((struct o258_float *)(t33))->v)));
            (((struct o6E_ushort *)(t33))->v) = (FUN_0c0da2e0());
        }
        t67 = t33;
    }
    return t67;
}

int FUN_0c0b35e4(int a4)
{
    int t0;
    int t36;
    int t54;
    int t80;
    int t99;
    int t101;
    int t2;
    int t29;
    int t37;
    int t116;

    t0 = (((struct o3D0_int *)(a4))->v);
    if (((*(int *)0xC204994) != 0) && (t2 = *(int *)0xC23ED50, t2 == 5)) {
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 5.0f);
        (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + 0.75f);
    }
    FUN_0c085704(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    if ((((((struct o20C_int *)(a4))->v)) & 0x20000000) != 0) {
        FUN_0c01db0e(a4, ((((struct oA4_int *)(a4))->v)));
    } else {
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
        (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
    }
    FUN_0c0bbbf4(a4);
    if (((*(int *)0xC204994) != 0) && (t29 = *(int *)0xC23ED50, t29 == 5)) {
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 5.0f);
        (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) - 0.75f);
    }
    t36 = *(short *)((t0 + 0x6));
    if (((short)t36 != 0) && (t37 = (((struct o2B4_int *)(a4))->v), (short)t36 == t37)) {
        if (((((struct o3AC_int *)(a4))->v)) == 0) {
            t54 = *(short *)(((t0 + 0xC) + 0x2));
            t116 = t54;
            if (t54 != -1) {
                (((struct o2C4_uint *)(a4))->v) = (*(short *)(((t0 + 0xC) + 0x2)));
                (((struct o2E8_uint *)(a4))->v) = 0x0;
                (((struct o3AC_uint *)(a4))->v) = ((*(short *)(((t0 + 0xC) + 0x4))) - 1);
                if ((unsigned short)(*(short *)(((t0 + 0xC) + 0x8))) != 0xFFFF) {
                    (((struct o6E_ushort *)(a4))->v) = (*(short *)(((t0 + 0xC) + 0x8)));
                }
                (((struct o3D0_uint *)(a4))->v) = (t0 + 0xC);
                (((struct o2CC_uint *)(a4))->v) = 0x1;
                (((struct o2D4_uint *)(a4))->v) = (*(short *)(((t0 + 0xC) + 0x0)));
                t116 = 0x2D4;
            }
        } else {
            (((struct o3AC_uint *)(a4))->v) = (((((struct o3AC_int *)(a4))->v)) - 1);
            (((struct o2CC_uint *)(a4))->v) = 0x1;
            t116 = 0x2CC;
        }
    } else {
        if ((((((struct o2EC_int *)(a4))->v)) & 12) != 0) {
            if (((((struct o3AC_int *)(a4))->v)) == 0) {
                t80 = *(short *)(((t0 + 0xC) + 0x2));
                t116 = t80;
                if (t80 != -1) {
                    (((struct o2C4_uint *)(a4))->v) = (*(short *)(((t0 + 0xC) + 0x2)));
                    (((struct o2E8_uint *)(a4))->v) = 0x0;
                    (((struct o3AC_uint *)(a4))->v) = ((*(short *)(((t0 + 0xC) + 0x4))) - 1);
                    if ((unsigned short)(*(short *)(((t0 + 0xC) + 0x8))) != 0xFFFF) {
                        (((struct o6E_ushort *)(a4))->v) = (*(short *)(((t0 + 0xC) + 0x8)));
                    }
                    (((struct o3D0_uint *)(a4))->v) = (t0 + 0xC);
                    (((struct o2D4_uint *)(a4))->v) = (*(short *)(((t0 + 0xC) + 0x0)));
                    t116 = 0x2D4;
                }
            } else {
                (((struct o3AC_uint *)(a4))->v) = (((((struct o3AC_int *)(a4))->v)) - 1);
                t116 = 0x3AC;
            }
        } else {
            t99 = (((struct o2EC_int *)(a4))->v);
            t116 = t99;
            if ((t99 & 3) != 0) {
                t101 = *(short *)((t0 + 0xA));
                t116 = t101;
                if ((unsigned char)t101 != 0) {
                    (((struct o2E8_uint *)(a4))->v) = (unsigned char)(*(short *)((t0 + 0xA)));
                    t116 = 0x2E8;
                }
            }
        }
    }
    return t116;
}


int FUN_0c081e8c(int a4)
{
    int t0;
    int t4;
    int t8;
    int t13;
    float u45;
    int t29;
    float t60;
    float u65;
    float u61;
    float t68;
    float u73;
    float u69;
    int t1;
    int t9;
    int t22;
    int t23;
    float u38;
    float u57;
    int stk[15];

    t0 = (((struct o0_int *)0xC247CFC)->v);
    if ((((int)t0 >= (int)0x6) && (t0 != 8)) || (t1 = (((struct o3F4_int *)(a4))->v), t1 != 0)) {
    } else {
        t4 = ((int (*)(int))((*(int *)(((((((struct o8_int *)0xC247D64)->v)) << 2) + 0xC1027D8)))))(a4);
    }
    t8 = (((struct o0_int *)0xC247CFC)->v);
    if ((t8 == 6) && (t9 = (((struct oC_int *)0xC247D64)->v), t9 != 0)) {
    } else {
        if ((int)t8 > (int)0x7) {
            FUN_0c081074(a4);
        } else {
            t13 = ((int (*)(int))((*(int *)(((*(int *)0xC247CA4) + 0x8)))))(a4);
        }
    }
    if ((((((struct o0_int *)0xC247CFC)->v)) == ((((struct o0_int *)0xC247D64)->v))) && (t22 = (((struct o4_int *)0xC247D64)->v), t23 = (((struct o4_int *)0xC247CFC)->v), t23 == t22)) {
    } else {
        (((struct o250_uint *)(a4))->v) = (((((struct o250_int *)(a4))->v)) | 0x1);
        (((struct o3C8_uint *)(a4))->v) = 0x0;
    }
    u45 = 1.0f;
    if ((0x1 & ((((struct o250_int *)(a4))->v))) != 0) {
        t29 = (((struct o3C8_int *)(a4))->v);
        (((struct o3C8_uint *)(a4))->v) = (t29 + 0x88);
        if ((int)(t29 + 0x88) >= (int)0x3FFF) {
            (((struct o250_uint *)(a4))->v) = (((((struct o250_int *)(a4))->v)) & 0xFFFFFFFE);
            (((struct o3C8_uint *)(a4))->v) = 0x0;
            u38 = 1.0f;
        } else {
            u38 = (FUN_0c0da410(((((struct o3C8_int *)(a4))->v))));
        }
        u45 = u38;
    }
    if (((((struct o3F4_int *)(a4))->v)) != 0) {
        (((struct o3F4_uint *)(a4))->v) = (((((struct o3F4_int *)(a4))->v)) - 1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x254 + a4)) = *(struct mv3 *)((0x260 + a4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x278 + a4)) = *(struct mv3 *)((0x284 + a4)); }
    } else {
        nlSubVector3op(((int)stk + 4), (0x284 + a4), (0x278 + a4));
        nlSubVector3op((((int)stk + 4) + 0xC), (0x260 + a4), (0x254 + a4));
        if ((((((struct o250_int *)(a4))->v)) & 24) != 0) {
            (((struct o250_uint *)(a4))->v) = (((((struct o250_int *)(a4))->v)) & 0xFFFFFFE7);
            (((struct o3EC_uint *)(a4))->v) = (((((struct o3EC_int *)(a4))->v)) + 0x1);
            u57 = (u45 * 1.5f);
        } else {
            (((struct o3EC_uint *)(a4))->v) = 0x0;
            u57 = u45;
        }
        t60 = FUN_0c0dcea0(((int)stk + 4));
        u65 = (u57 * 0.099999994f);
        if (!(10.0f > t60)) {
        } else {
            u61 = (u57 * t60);
            u65 = (u61 * 0.00999999978f);
        }
        FUN_0c0dce80(((int)stk + 4), ((int)stk + 4), u65);
        t68 = FUN_0c0dcea0((((int)stk + 4) + 0xC));
        u73 = (u57 * 0.099999994f);
        if (!(10.0f > t68)) {
        } else {
            u69 = (u57 * t68);
            u73 = (u69 * 0.00999999978f);
        }
        FUN_0c0dce80((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC), u73);
        nlAddVector((0x278 + a4), ((int)stk + 4));
        nlAddVector((0x254 + a4), (((int)stk + 4) + 0xC));
    }
    return (FUN_0c081e0c(a4));
}

int FUN_0c087aa0(int a4, int a5, int a6)
{
    int t52;
    int t3;
    float u12;
    float u19;
    int t20;
    int t26;
    float u29;
    int t37;
    int t49;
    int stk[10];

    *(unsigned int *)(((int)stk + 12)) = a6;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC248AD0) = *(struct mv3 *)(a4); }
    FUN_0c0dce80(0xC248AF4, a5, 16.0f);
    FUN_0c01e7e8(0xC248AA0, 0x100, 0xFFFFFFFF);
    t52 = 0xA8;
    if (((((struct o10_int *)0xC248B38)->v)) == 0) {
    } else {
        t3 = FUN_0c0e1830(0xC087F9C, 0x6C);
        FUN_0c0e19d0(t3);
        FUN_0c0a78fc(((int)stk + 4), (((int)stk + 4) + 0x4), ((((struct o0_float *)0xC248B38)->v)), ((((struct o4_float *)0xC248B38)->v)), ((((struct o8_float *)0xC248B38)->v)));
        *(unsigned int *)((t3 + 0x3C)) = 0xC087E3C;
        *(unsigned int *)((t3 + 0x38)) = 0xC0C465C;
        (((struct o58_float *)(t3))->v) = 1.0f;
        (((struct o64_uint *)(t3))->v) = 0x258;
        FUN_0c0dc5a0();
        FUN_0c0dcca0(0xC248B2C);
        u12 = 0.099999994f;
        u12 = u12 + 3.05185094e-05f * (float)(FUN_0c0da2e0());
        FUN_0c0dce80((t3 + 0x40), 0xC248B38, u12);
        FUN_0c0db470((t3 + 0x40), (t3 + 0x40));
        nlPopMatrix(0x1);
        if (((((struct o4_float *)0xC248B38)->v)) > 0.699999988f) {
            *(unsigned int *)(((int)stk + 16)) = ((FUN_0c0da2e0()) & 0x3);
            u19 = 0.699999988f;
            u19 = u19 + 3.96740579e-05f * (float)(FUN_0c0da2e0());
            (((struct o54_float *)(t3))->v) = u19;
            t20 = *(int *)(((int)stk + 16));
            (((struct o60_uint *)(t3))->v) = (unsigned short)(*(short *)((((t20 << 2) + 0xC10A9C4) + 0x0)));
            (((struct o5C_uint *)(t3))->v) = (unsigned short)(*(short *)((((t20 << 2) + 0xC10A9C4) + 0x2)));
            (((struct o4C_ushort *)(t3))->v) = (*(int *)(((int)stk + 4)));
            (((struct o50_ushort *)(t3))->v) = (*(int *)(((int)stk + 8)));
            (((struct o4E_ushort *)(t3))->v) = (*(int *)(((int)stk + 12)));
            t37 = ((t20 << 2) + 0xC10A9C4);
        } else {
            t26 = FUN_0c0da2e0();
            u29 = ((((struct o4_float *)((((((0x7 & t26) << 1) + (0x7 & t26)) << 2) + 0xC10A9D4)))->v));
            u29 = u29 + 6.10370189e-05f * (float)(FUN_0c0da2e0());
            (((struct o54_float *)(t3))->v) = u29;
            (((struct o60_uint *)(t3))->v) = (unsigned short)(*(short *)(((((((0x7 & t26) << 1) + (0x7 & t26)) << 2) + 0xC10A9D4) + 0x0)));
            (((struct o5C_uint *)(t3))->v) = (unsigned short)(*(short *)(((((((0x7 & t26) << 1) + (0x7 & t26)) << 2) + 0xC10A9D4) + 0x2)));
            (((struct o4C_ushort *)(t3))->v) = 0x3FFF;
            (((struct o50_ushort *)(t3))->v) = ((*(int *)(((int)stk + 12))) + 0x7FFF);
            (((struct o4E_ushort *)(t3))->v) = 0x7FFF;
            t37 = 0x7FFF;
        }
        if ((*(int *)0xC23ED84) == 0) {
            *(unsigned int *)((t3 + 0x0)) = 0xC0E19F2;
            t49 = t37;
        } else {
            (((struct o0_uint *)0xC248DC8)->v) = (((((struct o0_int *)0xC248DC8)->v)) + 0x1);
            (((struct o4_uint *)0xC248DC8)->v) = (((((struct o4_int *)0xC248DC8)->v)) + 0x1);
            t49 = 0xC248DCC;
        }
        t52 = (FUN_0c0e19f2());
    }
    return t52;
}

void FUN_0c0d8d00(int a4, int a5, int a6)
{
    int t19;
    float u25;

    _builtin_set_imask(0xE);
    if ((int)(*(int *)0xA05F689C) >= (int)0x8) {
        *(unsigned int *)0xC943E38 = 0x1;
    } else {
        *(unsigned int *)0xC943E38 = 0x0;
    }
    _builtin_set_gbr((void *)(0xC990E80));
    sys_init();
    (((struct o18_ushort *)0xC948268)->v) = 0x0;
    (((struct o1A_ushort *)0xC948268)->v) = 0x0;
    if ((0x80 & a5) != 0) {
        (((struct o18_ushort *)0xC948268)->v) = 0x1;
    }
    if ((0x8000 & a5) != 0) {
        (((struct o1A_ushort *)0xC948268)->v) = 0x1;
    }
    (((struct o0_uint *)0xC943EA4)->v) = (*(int *)((((a5 & 0xF) << 2) + 0xC1EA3B4)));
    kmInitDevice((*(int *)((((unsigned char)(((a4 << 1) + a4) << 2) + 0xC1EA2B8) + 0x0))));
    ((int (*)(int, int, int, int))(*(int *)0xC0D8E34))((*(int *)((((unsigned char)(((a4 << 1) + a4) << 2) + 0xC1EA2B8) + 0x4))), ((((struct o0_int *)0xC943EA4)->v)), ((((struct o18_short *)0xC948268)->v)), ((((struct o1A_short *)0xC948268)->v)));
    (((struct o14_ushort *)0xC948268)->v) = (*(short *)((((unsigned char)(((a4 << 1) + a4) << 2) + 0xC1EA2B8) + 0x8)));
    (((struct o16_ushort *)0xC948268)->v) = (*(short *)((((unsigned char)(((a4 << 1) + a4) << 2) + 0xC1EA2B8) + 0xA)));
    FUN_0c0d8ba0(0xC944470);
    FUN_0c0d8ae0(0xC947AB0);
    (((struct o0_uint *)0xC9480B0)->v) = 0xC947AB0;
    (((struct o4_uint *)0xC9480B0)->v) = 0x0;
    (((struct o4_uint *)0xC948268)->v) = 0xFFFFFFFF;
    (((struct oC_uint *)0xC948268)->v) = 0x0;
    (((struct o1C_uint *)0xC948268)->v) = 0x0;
    (((struct o0_uint *)0xC948268)->v) = 0x0;
    (((struct o30_float *)0xC948268)->v) = 0.0f;
    (((struct o34_float *)0xC948268)->v) = 0.0f;
    (((struct o38_float *)0xC948268)->v) = 0.0f;
    (((struct o3C_float *)0xC948268)->v) = 0.0f;
    (((struct o20_uint *)0xC948268)->v) = 0x0;
    (((struct o24_uint *)0xC948268)->v) = 0x0;
    (((struct o28_uint *)0xC948268)->v) = 0x0;
    (((struct o2C_uint *)0xC948268)->v) = 0x0;
    (((struct o0_float *)0xC990EA8)->v) = 1.0f;
    (((struct o1C_uint *)0xC990EA8)->v) = 0x0;
    t19 = (((struct o14_short *)0xC948268)->v);
    u25 = 480.0f;
    if ((((((struct o1A_short *)0xC948268)->v)) == 1) && (a4 != 0)) {
    } else {
        u25 = (float)((((struct o16_short *)0xC948268)->v));
    }
    FUN_0c0ddd20(0xC990E80, 0.0f, 0.0f, (float)t19, u25);
    FUN_0c20e0ba((*(float *)0xC0D8F90));
    (((struct o0_uint *)0xFF000038)->v) = 0xC;
    (((struct o4_uint *)0xFF000038)->v) = 0xC;
    kmSetWaitVsyncCount(a6);
    FUN_0c0d91e0(0x200000);
    FUN_0c0d9a40(0x0);
    (((struct o8_uint *)0xC943EA4)->v) = 0x0;
    _builtin_set_imask(0x0);
}



int FUN_0c05f1e2(int a4, int a5)
{
    int t0;
    int t2;
    int t9;
    int t17;
    int t18;
    float u34;
    int t23;
    float u26;
    int t21;
    int t22;

    t0 = (((struct o348_int *)(a4))->v);
    if (t0 != 13) {
        return t0;
    }
    t2 = FUN_0c0e19aa(0xC05F3E0, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t2);
    (((struct oBC_uint *)(t2))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct o200_uint *)(t2))->v) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    t9 = 0x0;
    if ((*(signed char *)((a5 + 0x4))) != 0) {
        t9 = ((((struct o1EC_int *)(a4))->v));
    }
    (((struct o1EC_uint *)(t2))->v) = t9;
    (((struct o1E8_uint *)(t2))->v) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    (((struct o1F4_uint *)(t2))->v) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    (((struct o204_uint *)(t2))->v) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    (((struct o1E4_float *)(t2))->v) = ((((struct oC_float *)(a5))->v));
    (((struct o1FC_uint *)(t2))->v) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    (((struct o1F8_uint *)(t2))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    t17 = (((struct oBC_int *)(a4))->v);
    t18 = (((struct o1E8_int *)(t2))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)((((((((t17 << 1) + t17) << 2) << 2) << 2) + 0xC23F268) + (((t18 << 1) + t18) << 2))); }
    (((struct o70_ushort *)(t2))->v) = 0x4000;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x3C)) = *(struct mv3 *)((t2 + 0x30)); }
    (((struct o220_uint *)(t2))->v) = 0x125E;
    (((struct oCC_uint *)(t2))->v) = ((((struct o350_int *)(a4))->v));
    u34 = -0.799999952f;
    if (((int)((((struct oBC_int *)(a4))->v)) < (int)0x2) && (t21 = (((struct oBC_int *)(a4))->v), t22 = *(int *)(((((((t21 << 2) + t21) << 2) << 2) + 0xC2497E0) + 0x10)), t22 != 0)) {
        t23 = *(int *)(((((((t21 << 2) + t21) << 2) << 2) + 0xC2497E0) + 0x10));
        u26 = (float)(t23 & 0x3F);
        if ((int)(t23 & 0x3F) < 0) {
            u26 = ((float)(t23 & 0x3F) + 4.2949673e+09f);
        }
        u34 = ((-(u26 * 0.0129999993f)) + -0.399999976f);
    }
    FUN_0c0a6800(((((struct o6E_short *)(a4))->v)), (t2 + 0x60), 0.0f, 0.0f, u34);
    (((struct o64_float *)(t2))->v) = (0.0f - (u34 * 0.299999982f));
    return FUN_0c056e7a(a4);
}
