/* Straight-line functions with calls and guards (batch gen_nr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07e636(int, int);
int FUN_0c0c465c(int);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int FUN_0c0cd9c0(int a4);
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_short { char p[0x5C]; short v; };
struct o5C_ushort { char p[0x5C]; unsigned short v; };
struct o5E_short { char p[0x5E]; short v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o74_int { char p[0x74]; int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o9A_ushort { char p[0x9A]; unsigned short v; };
struct oA0_ushort { char p[0xA0]; unsigned short v; };
struct o5E_ushort { char p[0x5E]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };



int FUN_0c0cd9c0(int a4)
{
    register int t0;
    register int t2;
    float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;

    t0 = *(int *)((a4 + 0x34));
    u1 = 0.00999999978f;
    u1 = u1 + 2.44148055e-06f * (float)(FUN_0c0da2e0());
    u2 = (((struct o64_float *)(a4))->v);
    u3 = (((struct o44_float *)(a4))->v);
    u4 = (((struct o38_float *)(a4))->v);
    u5 = (((struct o4C_float *)(a4))->v);
    u6 = (((struct o40_float *)(a4))->v);
    u7 = (((struct o4_float *)((t0 - 12)))->v);
    u8 = ((u6 - u5) * (u6 - u5));
    u8 = u8 + ((u4 - u3)) * ((u4 - u3));
    u3 = ((((struct o38_float *)(a4))->v));
    u3 = u3 + 0.000213629566f * ((float)((FUN_0c0da2e0()) - 16384));
    u4 = (((struct o44_float *)(a4))->v);
    u5 = ((((struct o40_float *)(a4))->v));
    u5 = u5 + 0.000213629566f * ((float)((FUN_0c0da2e0()) - 16384));
    t0 = FUN_0c0d9dc0((u5 - ((((struct o4C_float *)(a4))->v))), (u3 - u4));
    u3 = (u1 * u2);
    u4 = ((((struct o50_float *)(a4))->v));
    u4 = u4 + u3 * (FUN_0c0d9e90((short)t0));
    (((struct o50_float *)(a4))->v) = u4;
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.0102572199f);
    u3 = (u1 * u2);
    u1 = ((((struct o58_float *)(a4))->v));
    u1 = u1 + u3 * (FUN_0c0da410((short)t0));
    (((struct o58_float *)(a4))->v) = u1;
    FUN_0c0dce80((a4 + 0x50), (a4 + 0x50), 0.979999959f);
    nlAddVector((a4 + 0x44), (a4 + 0x50));
    t0 = *(int *)((a4 + 0x30));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            (((struct o5C_ushort *)(a4))->v) = (int)((float)((((struct o5C_short *)(a4))->v)) + ((float)((-((((struct o5C_short *)(a4))->v))) - 16383) * 0.049999997f));
            if (((((struct o4C_float *)(a4))->v)) > 230.0f) {
                (((struct o4C_float *)(a4))->v) = 230.0f;
            }
            if (3.0f > ((((struct o48_float *)(a4))->v))) {
                t0 = FUN_0c0da2e0();
                if ((t0 & 31) != 0) {
                    t0 = FUN_0c0e19aa(0xC08C1AA, 0xA4, (*(int *)0xC23ECF0));
                    FUN_0c0e19d0(t0);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x70)) = *(struct mv3 *)((a4 + 0x44)); }
                    (((struct o9A_ushort *)(t0))->v) = 0x3B7;
                    (((struct oA0_ushort *)(t0))->v) = 0x10;
                    u1 = 0.199999988f;
                    u1 = u1 + 1.52592547e-05f * (float)(FUN_0c0da2e0());
                    (((struct o90_float *)(t0))->v) = u1;
                }
                FUN_0c0e19f2();
            }
        }
    } else {
        if (((((struct o74_int *)(a4))->v)) != 0) {
            if (!(1145.0f > ((((struct o44_float *)(a4))->v))) && (u0 = (((struct o50_float *)(a4))->v), !(0.0f > u0))) {
                (((struct o44_float *)(a4))->v) = 1145.0f;
                (((struct o50_float *)(a4))->v) = (-((((struct o50_float *)(a4))->v)));
            }
            if (!(((((struct o4C_float *)(a4))->v)) > 260.0f)) {
                if (10.0f > ((((struct o48_float *)(a4))->v))) {
                    (((struct o48_float *)(a4))->v) = 10.0f;
                }
            } else {
                if (u7 > ((((struct o48_float *)(a4))->v))) {
                    (((struct o48_float *)(a4))->v) = u7;
                }
            }
            if (!(((((struct o4C_float *)(a4))->v)) > 230.0f)) {
                *(unsigned int *)((a4 + 0x30)) = 0x1;
            }
        } else {
            if (u7 > ((((struct o48_float *)(a4))->v))) {
                (((struct o48_float *)(a4))->v) = u7;
            }
        }
    }
    t0 = FUN_0c0d9dc0(((((struct o50_float *)(a4))->v)), ((((struct o58_float *)(a4))->v)));
    (((struct o5E_ushort *)(a4))->v) = (int)((float)((((struct o5E_short *)(a4))->v)) + ((float)(FUN_0c07e636(((((struct o5E_short *)(a4))->v)), (0x7FFF + (short)t0))) * 0.099999994f));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x44));
    nlRotateAY(((((struct o5E_short *)(a4))->v)));
    nlRotateAX(((((struct o5C_short *)(a4))->v)));
    u0 = (((struct o68_float *)(a4))->v);
    nlScale(u0, u0, u0);
    FUN_0c0de000(((((struct o68_float *)(a4))->v)));
    FUN_0c0c465c((*(short *)(((((((struct o6C_int *)(a4))->v)) << 1) + 0xC1E9F14))));
    nlPopMatrix(0x1);
    t0 = (((struct o6C_int *)(a4))->v);
    (((struct o6C_uint *)(a4))->v) = (t0 + 0x1);
    if ((unsigned int)(t0 + 0x1) >= (unsigned int)0x8) {
        (((struct o6C_uint *)(a4))->v) = 0x0;
    }
    t0 = 0xC0CDD08;
    if (!(_builtin_sqrtf(u8) > 5.0f)) {
        t0 = (((struct o78_int *)(a4))->v);
        (((struct o78_uint *)(a4))->v) = (t0 - 1);
        if ((t0 - 1) == 0) {
            FUN_0c0e19f2();
        }
        t0 = *(int *)((a4 + 0x34));
        *(unsigned int *)((a4 + 0x34)) = (t0 + 0xC);
        (((struct o38_float *)(a4))->v) = ((((struct oC_float *)(t0))->v));
        (((struct o3C_float *)(a4))->v) = ((((struct o4_float *)((*(int *)((a4 + 0x34)))))->v));
        (((struct o40_float *)(a4))->v) = ((((struct o8_float *)((*(int *)((a4 + 0x34)))))->v));
        t0 = 0x74;
        if (((((struct o74_int *)(a4))->v)) != 0) {
            u0 = ((((struct o38_float *)(a4))->v));
            u0 = u0 + 0.000976592302f * ((float)((FUN_0c0da2e0()) - 16384));
            (((struct o38_float *)(a4))->v) = u0;
            t2 = FUN_0c0da2e0();
            u0 = ((((struct o40_float *)(a4))->v));
            u0 = u0 + 0.000976592302f * ((float)(t2 - 16384));
            (((struct o40_float *)(a4))->v) = u0;
            t0 = (t2 - 16384);
        }
    }
    return t0;
}
