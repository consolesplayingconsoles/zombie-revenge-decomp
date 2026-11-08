/* Straight-line functions with calls and guards (batch gen_iw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0c473c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c4784(int, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlAddVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0919fc(int a4);
int FUN_0c0696a4(int a4, int a5, int a6, int a7);
int FUN_0c0917ec(int a4);
int FUN_0c08afc6(int a4);
int FUN_0c089494(int a4);
int FUN_0c08f440(int a4);
int FUN_0c0af484(int a4);
int FUN_0c08e3a8(int a4);
int FUN_0c0abe80(int a4);
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4A_short { char p[0x4A]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o4E_short { char p[0x4E]; short v; };
struct o4E_ushort { char p[0x4E]; unsigned short v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o50_short { char p[0x50]; short v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o54_float { char p[0x54]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o58_float { char p[0x58]; float v; };
struct o60_int { char p[0x60]; int v; };
struct o64_int { char p[0x64]; int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_float { char p[0x7C]; float v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_short { char p[0x88]; short v; };
struct o88_ushort { char p[0x88]; unsigned short v; };
struct o8E_short { char p[0x8E]; short v; };
struct o8E_ushort { char p[0x8E]; unsigned short v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o9A_short { char p[0x9A]; short v; };
struct o9A_ushort { char p[0x9A]; unsigned short v; };
struct o9C_short { char p[0x9C]; short v; };
struct o9E_short { char p[0x9E]; short v; };
struct o9E_ushort { char p[0x9E]; unsigned short v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_short { char p[0xA0]; short v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA0_ushort { char p[0xA0]; unsigned short v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };



int FUN_0c0919fc(int a4)
{
    int stk[5];
    register int t1;
    register int t11;
    register float u13;
    register int t21;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    FUN_0c0848bc(((((struct o4_float *)0xC091B24)->v)), ((((struct o0_float *)0xC091B24)->v)), 1.0f);
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(((((struct o3CE_short *)(t1))->v)));
    nlRotateAX(((((struct o3CC_short *)(t1))->v)));
    t11 = FUN_0c0da2e0();
    nlRotateAZ((t11 << 1));
    u13 = (((struct o54_float *)(a4))->v);
    nlScale(u13, u13, u13);
    FUN_0c0de000(((((struct o54_float *)(a4))->v)));
    FUN_0c0c465c(((((struct o60_int *)(a4))->v)));
    nlPopMatrix(0x1);
    FUN_0c0849da();
    t21 = (((struct o64_int *)(a4))->v);
    (((struct o64_uint *)(a4))->v) = (t21 - 1);
    if ((int)(t21 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.083166644f);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), (*(float *)0xC091B68));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.0399999991f);
    return 0x54;
}

int FUN_0c0696a4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(int *)0xC247CAC;
    FUN_0c0685a4(a4, a5, a6, a7);
    t1 = (((struct oA4_int *)(a4))->v);
    (((struct oA4_uint *)(a4))->v) = (t1 + 0x1);
    if ((t1 & 0x1) == 0) {
        (((struct o78_uint *)(a4))->v) = (((((struct oA0_int *)(a4))->v)) + 0x24F);
        t1 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t1 + 0x1);
        if ((int)(t1 + 0x1) > (int)0xA) {
            FUN_0c0e19f2();
        }
    }
    if ((int)((((struct oA4_int *)(a4))->v)) > (int)0x28) {
        (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + 0.0299999993f);
    }
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + 0.049999997f);
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAY(((((struct o3CE_short *)(t0))->v)));
    nlRotateAX(((((struct o3CC_short *)(t0))->v)));
    nlRotateAZ(0x4000);
    u0 = (((struct o74_float *)(a4))->v);
    nlScale(u0, u0, u0);
    FUN_0c0de000(((((struct o74_float *)(a4))->v)));
    FUN_0c0c475c(((((struct o78_int *)(a4))->v)), 0.5f);
    return nlPopMatrix(0x1);
}

int FUN_0c0917ec(int a4)
{
    register int t0;
    register float u0;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(((((struct o3CE_short *)(t0))->v)));
    nlRotateAX(((((struct o3CC_short *)(t0))->v)));
    u0 = (((struct o54_float *)(a4))->v);
    nlScale(u0, u0, (u0 + 1.0f));
    FUN_0c0de000((((((struct o54_float *)(a4))->v)) + 1.0f));
    FUN_0c0c475c(((((struct o60_int *)(a4))->v)), ((((struct o58_float *)(a4))->v)));
    nlPopMatrix(0x1);
    t0 = (((struct o64_int *)(a4))->v);
    (((struct o64_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.083166644f);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), 0.979999959f);
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.0399999991f);
    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) * 0.899999976f);
    return 0x58;
}

int FUN_0c08afc6(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    nlPushMatrix(0x0);
    u0 = *(float *)0xC08B0E0;
    u1 = (((struct o90_float *)(a4))->v);
    t1 = FUN_0c0da2e0();
    t2 = (((struct o88_short *)(a4))->v);
    (((struct o88_ushort *)(a4))->v) = (t2 + (t1 & 0x1FF));
    u2 = (u1 * u0);
    u2 = u2 + (FUN_0c0d9e90((short)(t2 + (t1 & 0x1FF)))) * (u1 * u0);
    FUN_0c0dcca0((a4 + 0x70));
    nlRotateAY(((((struct o3CE_short *)(t0))->v)));
    nlRotateAX(((((struct o3CC_short *)(t0))->v)));
    nlScale(u2, u2, u2);
    FUN_0c0de000(u2);
    FUN_0c0c473c(((((struct o9A_short *)(a4))->v)));
    nlPopMatrix(0x1);
    (((struct o74_float *)(a4))->v) = (((((struct o74_float *)(a4))->v)) + ((((struct o94_float *)(a4))->v)));
    (((struct o90_float *)(a4))->v) = (((((struct o90_float *)(a4))->v)) * 0.997999966f);
    t0 = (((struct o8E_short *)(a4))->v);
    (((struct o8E_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        return FUN_0c0e19f2();
    }
    return 0x8E;
}


int FUN_0c08f440(int a4)
{
    register int t0;
    register float u0;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x70));
    nlRotateAY(((((struct o3CE_short *)(t0))->v)));
    nlRotateAX(((((struct o3CC_short *)(t0))->v)));
    u0 = (((struct o90_float *)(a4))->v);
    nlScale(u0, u0, u0);
    FUN_0c0de000(((((struct o90_float *)(a4))->v)));
    FUN_0c0c4784(((((struct o9A_short *)(a4))->v)), ((((struct o94_float *)(a4))->v)));
    nlPopMatrix(0x1);
    (((struct o9A_ushort *)(a4))->v) = (((((struct o9A_short *)(a4))->v)) + 0x1);
    t0 = (((struct oA0_short *)(a4))->v);
    (((struct oA0_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    t0 = (((struct o9E_short *)(a4))->v);
    (((struct o9E_ushort *)(a4))->v) = (t0 + 0x1);
    if ((int)(short)((t0 + 0x1) - 1) >= (int)((((struct o9C_short *)(a4))->v))) {
        (((struct o94_float *)(a4))->v) = (((((struct o94_float *)(a4))->v)) - ((((struct o84_float *)(a4))->v)));
        u0 = (((((struct o90_float *)(a4))->v)) - ((((struct o80_float *)(a4))->v)));
    } else {
        u0 = (((((struct o90_float *)(a4))->v)) + ((((struct o7C_float *)(a4))->v)));
    }
    (((struct o90_float *)(a4))->v) = u0;
    return 0x90;
}

int FUN_0c0af484(int a4)
{
    int stk[9];
    register float u10;
    register int t26;

    nlPushMatrix(0x0);
    FUN_0c0a78fc(((int)stk + 4), (((int)stk + 4) + 0x4), ((((struct o3C_float *)(a4))->v)), ((((struct o40_float *)(a4))->v)), ((((struct o44_float *)(a4))->v)));
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAX((*(int *)(((int)stk + 4))));
    nlRotateAZ((*(int *)(((int)stk + 8))));
    u10 = (((struct o54_float *)(a4))->v);
    nlScale((u10 * 0.399999976f), u10, u10);
    FUN_0c0de000(((((struct o54_float *)(a4))->v)));
    FUN_0c0848d6(((((struct o48_float *)(a4))->v)), ((((struct o4C_float *)(a4))->v)), ((((struct o50_float *)(a4))->v)));
    FUN_0c0c465c(0x297);
    FUN_0c0849da();
    nlPopMatrix(0x1);
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.0277222153f);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), 0.979999959f);
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    t26 = 0x34;
    if (25.0f > ((((struct o34_float *)(a4))->v))) {
        t26 = (FUN_0c0e19f2());
    }
    return t26;
}

int FUN_0c08e3a8(int a4)
{
    int stk[9];
    register int t1;
    register float t3;
    register float u4;
    register int t16;
    register float t17;
    register int t23;
    register int t24;
    register int t26;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    t3 = FUN_0c0d9e90(((((struct o4C_int *)(a4))->v)));
    u4 = (((struct o40_float *)(a4))->v);
    nlGetAverageVector((*(int *)((a4 + 0x3C))), (a4 + 0x30), ((int)stk + 4), (1.0f - t3), t3);
    nlPushMatrix(0x0);
    FUN_0c0dcca0(((int)stk + 4));
    nlRotateAY(((((struct o3CE_short *)(t1))->v)));
    nlRotateAX(((((struct o3CC_short *)(t1))->v)));
    nlScale((u4 * t3), (u4 * t3), (u4 * t3));
    FUN_0c0de000((u4 * t3));
    if ((int)((((struct o50_int *)(a4))->v)) <= (int)0x3FFF) {
        t16 = (((struct o50_int *)(a4))->v);
        (((struct o50_uint *)(a4))->v) = (t16 + 0x100);
        t17 = FUN_0c0da410((t16 + 0x100));
        FUN_0c0c475c(0x291, t17);
    } else {
        FUN_0c0c465c(0x291);
    }
    nlPopMatrix(0x1);
    t23 = (((struct o4A_short *)(a4))->v);
    t24 = (((struct o4C_int *)(a4))->v);
    (((struct o4C_uint *)(a4))->v) = (t24 + t23);
    t26 = 0x4C;
    if ((int)(t24 + t23) >= (int)0x3FFF) {
        t26 = (FUN_0c0e19f2());
    }
    return t26;
}

int FUN_0c0abe80(int a4)
{
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x34));
    nlRotateAX(((((struct o4C_short *)(a4))->v)));
    nlRotateAY(((((struct o4E_short *)(a4))->v)));
    nlRotateAZ(((((struct o50_short *)(a4))->v)));
    FUN_0c0c465c(((((struct o54_int *)(a4))->v)));
    nlPopMatrix(0x1);
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.149999991f);
    FUN_0c0dce80((a4 + 0x40), (a4 + 0x40), (*(float *)0xC0ABFCC));
    nlAddVector((a4 + 0x34), (a4 + 0x40));
    (((struct o4E_ushort *)(a4))->v) = (((((struct o4E_short *)(a4))->v)) + ((FUN_0c0da2e0()) & 0xFFF));
    (((struct o4C_ushort *)(a4))->v) = (((((struct o4C_short *)(a4))->v)) + ((FUN_0c0da2e0()) & 0xFFF));
    (((struct o50_ushort *)(a4))->v) = (((((struct o50_short *)(a4))->v)) + ((FUN_0c0da2e0()) & 0xFFF));
    if ((*(float *)0xC0ABFDC) > ((((struct o38_float *)(a4))->v))) {
        return FUN_0c0e19f2();
    }
    return 0x38;
}


