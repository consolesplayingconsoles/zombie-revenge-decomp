/* Straight-line functions with calls and guards (batch gen_agr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_short { short v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o250_float { char p[0x250]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_short { char p[0x4]; short v; };
struct o48_float { char p[0x48]; float v; };
struct o48C_int { char p[0x48C]; int v; };
struct o4B4_float { char p[0x4B4]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o62_short { char p[0x62]; short v; };
struct o62_ushort { char p[0x62]; unsigned short v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o74_short { char p[0x74]; short v; };
struct o74_ushort { char p[0x74]; unsigned short v; };
struct o7C_int { char p[0x7C]; int v; };
struct o8_float { char p[0x8]; float v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
float FUN_0c0467c2(int, int, float, float, float, float);
int FUN_0c075f30(int);
int FUN_0c08448c(int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
float FUN_0c0da410(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0b3ef8(int a4, int a5, int a6, int a7);
int FUN_0c04685c(int a4, int a5, float f4, float f5, float f6, float f7);
int FUN_0c0760c4(int a4, int a5, int a6, int a7);

int FUN_0c0b3ef8(int a4, int a5, int a6, int a7)
{
    register int t0;

    if (((*(int *)0xC23ED5C) & 4) != 0) {
        FUN_0c0e19f2();
    }
    FUN_0c08448c(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcc70(1.0f, 0.0f, 0.0f);
    FUN_0c0c465c((unsigned short)((((struct o0_short *)0xC203F70)->v)));
    FUN_0c0c465c((unsigned short)((((struct o2_short *)0xC203F70)->v)));
    FUN_0c0c465c((unsigned short)((((struct o4_short *)0xC203F70)->v)));
    nlPopMatrix(0x1);
    t0 = (((struct oA4_int *)(a4))->v);
    (((struct oA4_uint *)(a4))->v) = (t0 + 0x1);
    if ((t0 + 0x1) == 60) {
        (((struct oA4_uint *)(a4))->v) = 0x0;
        t0 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t0 + 0x1);
        if ((t0 + 0x1) == 60) {
            (((struct oA0_uint *)(a4))->v) = 0x0;
        }
    }
    (((struct o62_ushort *)(a4))->v) = ((int)((int)(((-((((struct oA0_int *)(a4))->v))) + 0x1E) << 16) / (int)0x3C));
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o8_float *)0xC0B4058)->v)), ((((struct o4_float *)0xC0B4058)->v)), ((((struct o0_float *)0xC0B4058)->v)));
    nlRotateAZ(0xFFFFFFF6);
    nlRotateAX(0xA);
    nlRotateAY(((((struct o62_short *)(a4))->v)));
    FUN_0c0c465c(((((struct o7C_int *)(a4))->v)));
    nlPopMatrix(0x1);
    FUN_0c0dcc70(((((struct o20_float *)0xC0B4058)->v)), ((((struct o1C_float *)0xC0B4058)->v)), ((((struct o18_float *)0xC0B4058)->v)));
    nlRotateAZ(0xFFFFFFF6);
    nlRotateAX(0xA);
    nlRotateAY(((((struct o62_short *)(a4))->v)));
    nlScale(1.0f, 1.0f, ((((struct o24_float *)0xC0B4058)->v)));
    FUN_0c0de000(1.0f);
    FUN_0c0c465c((((((struct o7C_int *)(a4))->v)) + 0x1));
    return (nlPopMatrix(0x1));
}

int FUN_0c04685c(int a4, int a5, float f4, float f5, float f6, float f7)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    u0 = (((struct o250_float *)(a4))->v);
    u1 = FUN_0c0467c2(a4, a5, f4, u0, f6, f7);
    u2 = (((struct o0_float *)0xC046980)->v);
    if (((((struct o48C_int *)(a4))->v)) == 54) {
        u3 = (((struct o4_float *)0xC046980)->v);
        if (!(((((struct o34_float *)(a4))->v)) > (u0 + (u1 + u3)))) {
            u4 = ((((struct o4B4_float *)(a4))->v));
            u4 = u4 + u2 * (((((u1 + u3) + u0) - ((((struct o34_float *)(a4))->v))) / (u1 + u3)));
            (((struct o4B4_float *)(a4))->v) = u4;
        }
    } else {
        if (!(((((struct o34_float *)(a4))->v)) > (u0 + u1))) {
            u3 = (((struct o34_float *)(a4))->v);
            u4 = FUN_0c0da410((((((((((struct oBC_int *)(a4))->v)) << 8) << 2) << 2) << 1) + (((int)((int)0x10000 / (int)a5)) * (*(int *)0xC23A258))));
            u5 = (u4 * f5);
            u5 = u5 + u2 * ((((u0 + u1) - u3) / u1));
            (((struct o4B4_float *)(a4))->v) = (((((struct o4B4_float *)(a4))->v)) + u5);
        }
        if (((((struct o34_float *)(a4))->v)) > (u0 + u1)) {
            (((struct o4B4_float *)(a4))->v) = (((((struct o4B4_float *)(a4))->v)) + 0.0f);
        }
    }
    (((struct o4B4_float *)(a4))->v) = (((((struct o4B4_float *)(a4))->v)) - 0.0272199996f);
    u0 = (((struct o1C_float *)0xC046980)->v);
    (((struct o48_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) * u0);
    (((struct o4C_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) * u0);
    (((struct o50_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) * u0);
    return nlAddVector((a4 + 0x48), (0x4B0 + a4));
}

int FUN_0c0760c4(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register float u0;

    if (((*(int *)0xC23A180) == 3) && (t0 = *(int *)0xC23ED5C, (t0 & 4) != 0)) {
        FUN_0c0e19f2();
    }
    t0 = *(int *)0xC23ED9C;
    if (((int)t0 >= (int)0x11) && ((int)t0 <= (int)0x12)) {
        return 0x12;
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0FE620);
    nlRotateAY(((((struct o0_short *)0xC0FE62E)->v)));
    FUN_0c0c465c(((((struct o4_short *)0xC0FE62E)->v)));
    nlPopMatrix(0x1);
    if ((((((struct o74_short *)(a4))->v)) & 32) != 0) {
        t0 = 0x0;
        t1 = 0xC0FE650;
        for (;;) {
            nlPushMatrix(0x0);
            FUN_0c0dcca0(t1);
            nlRotateAY((*(short *)((t1 + 0xE))));
            u0 = FUN_0c0da410(((int)((int)((((((((0x1F & ((((struct o74_short *)(a4))->v))) << 1) + 0x1) << 8) << 2) << 2) << 2) << 1) / (int)0x40)));
            FUN_0c0c475c((*(short *)((t1 + 0x12))), (u0 * (1.0f + 1.0f)));
            nlPopMatrix(0x1);
            t0 = (t0 + 0x1);
            t1 = (t1 + 0x18);
            if ((unsigned int)t0 >= (unsigned int)0x2) {
                break;
            }
        }
    }
    (((struct o74_ushort *)(a4))->v) = (((((struct o74_short *)(a4))->v)) + 0x1);
    return FUN_0c075f30(a4);
}
