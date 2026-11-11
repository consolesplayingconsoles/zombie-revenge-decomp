/* Straight-line functions with calls and guards (batch gen_ii): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c035828(int, int, int, int, int, float, float);
int FUN_0c05fd8c(int, int, int, int, int, float, float, float, float);
int FUN_0c0848d6(int, float, float, float);
int FUN_0c0849da(void);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int _modls(void);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c060ca0(int a4, int a5, int a6, int a7);
int FUN_0c093844(int a4, int a5, int a6, int a7);
int FUN_0c092f14(int a4);
struct o228_int { char p[0x228]; int v; };
struct o228_uint { char p[0x228]; unsigned int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o230_int { char p[0x230]; int v; };
struct o234_int { char p[0x234]; int v; };
struct o23C_int { char p[0x23C]; int v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o240_int { char p[0x240]; int v; };
struct o240_uint { char p[0x240]; unsigned int v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o45C_float { char p[0x45C]; float v; };
struct o60_short { char p[0x60]; short v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o62_short { char p[0x62]; short v; };
struct o64_short { char p[0x64]; short v; };
struct o68_int { char p[0x68]; int v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA8_int { char p[0xA8]; int v; };
struct oA8_uint { char p[0xA8]; unsigned int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oAC_uint { char p[0xAC]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };



int FUN_0c093844(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = (((struct o88_int *)(a4))->v);
    t1 = *(int *)(((0xC246FF0 + (t0 << 2)) + 0x0));
    if ((*(int *)((((t0 << 2) + 0xC247030) + 0x0))) == 0) {
        FUN_0c0e19f2();
    } else {
        t2 = ((t0 << 2) + 0xC247030);
    }
    t0 = *(int *)((0xC247030 + (((((struct o88_int *)(a4))->v)) << 2)));
    if (t0 == 8) {
        return t0;
    }
    FUN_0c0848d6(t2, ((((struct o45C_float *)(t1))->v)), ((((struct o4_float *)((0x45C + t1)))->v)), ((((struct o8_float *)((0x45C + t1)))->v)));
    t0 = (((struct o9C_int *)(a4))->v);
    t2 = (((struct o8C_int *)(a4))->v);
    if ((((((struct oA8_int *)(a4))->v)) & 0x8000) != 0) {
        (((struct oA8_uint *)(a4))->v) = (((((struct oA8_int *)(a4))->v)) + 0x180);
    } else {
        (((struct oA8_uint *)(a4))->v) = (((((struct oA8_int *)(a4))->v)) + 0x1800);
    }
    (((struct oAC_uint *)(a4))->v) = (((((struct oAC_int *)(a4))->v)) + 0x280);
    u0 = 1.19999993f;
    u0 = u0 + 0.199999988f * (FUN_0c0d9e90(((((struct oA8_int *)(a4))->v))));
    (((struct o74_float *)(a4))->v) = u0;
    u0 = (float)((((struct o68_int *)(a4))->v));
    u0 = u0 + 2048.0f * (FUN_0c0da410(((((struct oAC_int *)(a4))->v))));
    (((struct o60_ushort *)(a4))->v) = (int)u0;
    nlPushMatrix(0x0);
    nlMultiMatrix(((((struct o3E4_int *)(t1))->v)));
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAZ(((((struct o64_short *)(a4))->v)));
    nlRotateAY(((((struct o62_short *)(a4))->v)));
    nlRotateAX(((((struct o60_short *)(a4))->v)));
    nlScale(1.0f, ((((struct o74_float *)(a4))->v)), 1.0f);
    FUN_0c0de000(((((struct o74_float *)(a4))->v)));
    FUN_0c0c465c((*(short *)((((t0 << 1) + t2) + 0x0))));
    nlPopMatrix(0x1);
    t1 = (((struct o98_int *)(a4))->v);
    (((struct o98_uint *)(a4))->v) = (t1 + 0x1);
    if ((((t1 + 0x1) - 1) & ((((struct oA0_int *)(a4))->v))) == 0) {
        (((struct o9C_uint *)(a4))->v) = (((((struct o9C_int *)(a4))->v)) + 0x1);
        if ((int)(*(short *)(((((t0 << 1) + t2) + 0x2) + 0x0))) < 0) {
            (((struct o9C_uint *)(a4))->v) = 0x0;
        }
    }
    return FUN_0c0849da();
}


