/* Straight-line functions with calls and guards (batch gen_ia): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0de3c0(int, int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int _modls(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int FUN_0c08cb10(int a4, int a5, int a6, int a7);
int FUN_0c0acd48(int a4);
int FUN_0c09b4f4(int a4, int a5, int a6, int a7);
int FUN_0c05dd5c(int a4);
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o60_short { char p[0x60]; short v; };
struct o62_short { char p[0x62]; short v; };
struct o64_short { char p[0x64]; short v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o78_int { char p[0x78]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };





int FUN_0c05dd5c(int a4)
{
    int stk[8];
    register int t22;
    register int t29;
    register float u32;
    register int t45;
    register int t46;

    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(((((struct o62_short *)(a4))->v)));
    nlRotateAX(((((struct o60_short *)(a4))->v)));
    nlRotateAY(0x8000);
    nlScale(0.099999994f, 0.099999994f, 50.0f);
    FUN_0c0de000(100.0f);
    FUN_0c0848d6(1.0f, ((((struct o54_float *)(a4))->v)), 0.199999988f);
    FUN_0c0de3c0(0x1, 0x1);
    FUN_0c0c475c(((((struct o78_int *)(a4))->v)), ((((struct o90_float *)(a4))->v)));
    FUN_0c0de3c0(0x4, 0x5);
    FUN_0c0849da();
    nlPopMatrix(0x1);
    if (((((struct o80_int *)(a4))->v)) != 0) {
        (((struct o90_float *)(a4))->v) = (((((struct o90_float *)(a4))->v)) - 0.0349999964f);
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.0249999985f);
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.099999994f);
        t22 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t22 - 1);
        if ((int)(t22 - 1) <= 0) {
            return FUN_0c0e19f2();
        }
        return 0xA0;
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(((((struct o62_short *)(a4))->v)));
    nlRotateAX(((((struct o60_short *)(a4))->v)));
    t29 = (((struct o64_short *)(a4))->v);
    (((struct o64_ushort *)(a4))->v) = (t29 + 0x800);
    nlRotateAZ((short)(t29 + 0x800));
    nlRotateAY(0x8000);
    u32 = (((struct o48_float *)(a4))->v);
    nlScale(u32, u32, 50.0f);
    FUN_0c0de000(100.0f);
    FUN_0c0848d6(1.0f, ((((struct o54_float *)(a4))->v)), 0.199999988f);
    FUN_0c0c475c(((((struct o78_int *)(a4))->v)), ((((struct o94_float *)(a4))->v)));
    FUN_0c0849da();
    nlPopMatrix(0x1);
    (((struct o94_float *)(a4))->v) = (((((struct o94_float *)(a4))->v)) - 0.0149999987f);
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0899999961f);
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.0249999985f);
    t45 = (((struct oA0_int *)(a4))->v);
    (((struct oA0_uint *)(a4))->v) = (t45 - 1);
    t46 = 0xA0;
    if ((int)(t45 - 1) <= 0) {
        (((struct oA0_uint *)(a4))->v) = 0x14;
        (((struct o80_uint *)(a4))->v) = 0x1;
        t46 = 0x80;
    }
    return t46;
}
