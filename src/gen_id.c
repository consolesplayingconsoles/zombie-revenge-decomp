/* Straight-line functions with calls and guards (batch gen_id): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c084800(float, float, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0d9dc0(float, float);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateAxe(int, int);
int nlScale(float, float, float);
int FUN_0c0a4234(int a4);
int FUN_0c059b98(int a4, int a5, int a6, int a7);
int FUN_0c0889f4(int a4);
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5C_short { char p[0x5C]; short v; };
struct o5C_ushort { char p[0x5C]; unsigned short v; };
struct o5E_short { char p[0x5E]; short v; };
struct o60_int { char p[0x60]; int v; };
struct o60_short { char p[0x60]; short v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o62_short { char p[0x62]; short v; };
struct o64_short { char p[0x64]; short v; };
struct o6C_int { char p[0x6C]; int v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };


int FUN_0c0a4234(int a4)
{
    int stk[12];
    register int t1;
    register float u6;
    register float u21;
    register float u22;
    register float u25;
    register float u26;
    register int t28;
    register float u31;
    register int t51;
    register int t53;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    u6 = 1.0f;
    if ((int)((((struct o50_int *)(a4))->v)) < (int)0x14) {
        u6 = ((float)((((struct o50_int *)(a4))->v)) * 0.049999997f);
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    FUN_0c0db470((a4 + 0x3C), (((int)stk + 4) + 0x8));
    FUN_0c0a78fc((((int)stk + 4) + 0x4), ((int)stk + 4), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))));
    nlRotateAY(((((struct o3CE_short *)(t1))->v)));
    nlRotateAX(((((struct o3CC_short *)(t1))->v)));
    u21 = (((struct o58_float *)(a4))->v);
    u22 = (((struct o48_float *)(a4))->v);
    u25 = (((-(FUN_0c0da410(((*(int *)(((int)stk + 4))) & 0x7FFF)))) + 1.0f) * 6.0f);
    u25 = -u25;
    u26 = (u22 * u21);
    nlScale((u26 * (u25 + 7.0f)), (u22 * u21), (u22 * u21));
    t28 = *(int *)0xC23A258;
    u31 = (float)t28;
    if ((int)t28 < 0) {
        u31 = ((float)t28 + 4.2949673e+09f);
    }
    nlRotateAZ(((int)(u31 * ((((struct o54_float *)(a4))->v))) & 0xFFFF));
    FUN_0c0de000(((((struct o48_float *)(a4))->v)));
    FUN_0c0848bc(u6, u6, u6);
    FUN_0c0c465c((((((struct o4C_int *)(a4))->v)) + 0x260));
    FUN_0c0849da();
    nlPopMatrix(0x1);
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), 0.979999959f);
    if ((((((struct o48_float *)(a4))->v)) * 0.5f) > ((((struct o34_float *)(a4))->v))) {
        (((struct o34_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) * 0.5f);
    }
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0389999971f);
    t51 = (((struct o50_int *)(a4))->v);
    (((struct o50_uint *)(a4))->v) = (t51 - 1);
    t53 = 0x50;
    if ((int)(t51 - 1) <= 0) {
        t53 = (FUN_0c0e19f2());
    }
    return t53;
}

int FUN_0c059b98(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register float u4;
    register float u8;
    register float u12;
    register float u22;
    register int t33;
    register float u40;
    register int t76;
    register int t83;
    register int t85;
    register int t30;
    register int t31;

    FUN_0c0685a4(a4, a5, a6, a7);
    u4 = ((((struct o30_float *)(a4))->v));
    u4 = u4 + ((((struct o90_float *)(a4))->v)) * ((((struct o48_float *)(a4))->v));
    (((struct o30_float *)(a4))->v) = u4;
    u8 = ((((struct o34_float *)(a4))->v));
    u8 = u8 + ((((struct o90_float *)(a4))->v)) * ((((struct o4C_float *)(a4))->v));
    (((struct o34_float *)(a4))->v) = u8;
    u12 = ((((struct o38_float *)(a4))->v));
    u12 = u12 + ((((struct o90_float *)(a4))->v)) * ((((struct o50_float *)(a4))->v));
    (((struct o38_float *)(a4))->v) = u12;
    (((struct o98_uint *)(a4))->v) = (((((struct o98_int *)(a4))->v)) + ((((struct o9C_int *)(a4))->v)));
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.0599999987f);
    if (!((((((struct o34_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v))) > ((((struct o94_float *)(a4))->v)))) {
        (((struct o34_float *)(a4))->v) = (((((struct o94_float *)(a4))->v)) - ((((struct o58_float *)(a4))->v)));
        u22 = ((((struct o4C_float *)(a4))->v));
        u22 *= -0.599999964f;
        (((struct o4C_float *)(a4))->v) = u22;
    }
    if ((((((struct o80_int *)(a4))->v)) != 0) && (t30 = (((struct o84_int *)(a4))->v), t31 = (((struct oA0_int *)(a4))->v), ((t31 + t30) & 1) == 0)) {
    } else {
        nlPushMatrix(0x0);
        t33 = (((struct o8C_int *)(a4))->v);
        FUN_0c0dcc70(((((struct o54_float *)(a4))->v)), ((((struct o58_float *)(a4))->v)), ((((struct o5C_float *)(a4))->v)));
        nlRotateAY(((((struct o6C_int *)(a4))->v)));
        u40 = (((struct o74_float *)(a4))->v);
        nlScale(u40, u40, u40);
        FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
        nlRotateAZ(((((struct o64_short *)(a4))->v)));
        nlRotateAY(((((struct o62_short *)(a4))->v)));
        nlRotateAX(((((struct o60_short *)(a4))->v)));
        *(float *)(((int)stk + 4)) = ((((struct o48_float *)(a4))->v));
        *(float *)(((int)stk + 8)) = ((((struct o4C_float *)(a4))->v));
        *(float *)(((int)stk + 12)) = ((((struct o50_float *)(a4))->v));
        nlRotateAxe(((int)stk + 4), ((((struct o98_int *)(a4))->v)));
        FUN_0c0de000(((((struct o74_float *)(a4))->v)));
        FUN_0c084800((*(float *)((t33 + 0x0))), ((((struct o4_float *)(t33))->v)), ((((struct o8_float *)(t33))->v)));
        FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
        FUN_0c0849da();
        nlPopMatrix(0x1);
    }
    t76 = (((struct oA0_int *)(a4))->v);
    (((struct oA0_uint *)(a4))->v) = (t76 - 1);
    if ((int)(t76 - 1) <= 0) {
        (((struct oA0_uint *)(a4))->v) = ((((struct oA4_int *)(a4))->v));
        (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
    }
    t83 = (((struct o80_int *)(a4))->v);
    t85 = t83;
    if (t83 == 2) {
        t85 = (FUN_0c0e19f2());
    }
    return t85;
}

int FUN_0c0889f4(int a4)
{
    int stk[8];
    register int t1;
    register int t9;
    register int t10;
    register float u12;
    register float u15;
    register int t29;
    register float u31;
    register float u37;
    register int t52;
    register int t55;
    register float u53;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    if ((((((struct o60_int *)(a4))->v)) & 31) != 0) {
        (((struct o48_uint *)(a4))->v) = (((FUN_0c0da2e0()) & 0x3) + 0xFB);
    }
    t9 = (((struct o5E_short *)(a4))->v);
    t10 = (((struct o5C_short *)(a4))->v);
    (((struct o5C_ushort *)(a4))->v) = (t10 + t9);
    u12 = 0.699999988f;
    u12 = u12 + 0.299999982f * (FUN_0c0da410((short)(t10 + t9)));
    u15 = ((((struct o50_float *)(a4))->v));
    u15 = u15 + u12 * ((((struct o58_float *)(a4))->v));
    (((struct o54_float *)(a4))->v) = u15;
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.049999997f);
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.083166644f);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), 0.979999959f);
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    FUN_0c0db4d0((a4 + 0x3C), ((int)stk + 4));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(((((struct o3CE_short *)(t1))->v)));
    nlRotateAX(((((struct o3CC_short *)(t1))->v)));
    t29 = FUN_0c0d9dc0((*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 4))));
    nlRotateAZ((short)t29);
    u31 = (((struct o50_float *)(a4))->v);
    nlScale(u31, ((((struct o54_float *)(a4))->v)), u31);
    FUN_0c0de000((((((struct o54_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v))));
    u37 = (((struct o4C_float *)(a4))->v);
    FUN_0c0848d6(u37, u37, u37);
    FUN_0c0c465c(((((struct o48_int *)(a4))->v)));
    FUN_0c0849da();
    nlPopMatrix(0x1);
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.0199999996f);
    if ((int)((((struct o60_int *)(a4))->v)) < (int)0x8) {
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) * 0.799999952f);
    }
    t52 = (((struct o60_int *)(a4))->v);
    (((struct o60_uint *)(a4))->v) = (t52 - 1);
    t55 = 0x34;
    if (((int)(t52 - 1) > 0) && (u53 = (((struct o34_float *)(a4))->v), u53 > 0.0f)) {
    } else {
        t55 = (FUN_0c0e19f2());
    }
    return t55;
}
