/* Straight-line functions with calls and guards (batch gen_pl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f1b8(int, int);
int FUN_0c0553b6(int, int, int);
int FUN_0c0c465c(int);
float FUN_0c0da410(int);
int FUN_0c0dcc70(float, float, float);
extern int FUN_0c0e19f2();
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c068da8(int a4, int a5, int a6, int a7);
struct o1BC_int { char p[0x1BC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_short { char p[0x60]; short v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o62_short { char p[0x62]; short v; };
struct o62_ushort { char p[0x62]; unsigned short v; };
struct o64_short { char p[0x64]; short v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o78_int { char p[0x78]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_int { char p[0xA8]; int v; };
struct oA8_uint { char p[0xA8]; unsigned int v; };


int FUN_0c068da8(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t1;
    register int t6;
    register float t15;
    register int t38;
    register float u17;
    register float u20;
    register int t40;
    register float t64;
    register float t66;
    register float u67;
    register float u29;
    float s1;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        t1 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    t6 = (((struct o80_int *)(a4))->v);
    if (t6 != 0) {
        if (t6 != 1) {
            if (t6 == 2) {
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o90_float *)(a4))->v)));
                (((struct o90_float *)(a4))->v) = (((((struct o90_float *)(a4))->v)) * 0.969999969f);
                (((struct o94_float *)(a4))->v) = (((((struct o94_float *)(a4))->v)) + -0.0599999987f);
                (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o94_float *)(a4))->v)));
                t15 = FUN_0c01f1b8((a4 + 0x30), ((int)stk + 4));
                t38 = 0;
                if (t15 > ((((struct o34_float *)(a4))->v))) {
                    u17 = (((struct o94_float *)(a4))->v);
                    s1 = _builtin_fabsf(u17);
                    if (s1 > 0.199999988f) {
                        (((struct o62_ushort *)(a4))->v) = (((((struct o62_short *)(a4))->v)) + 0x2000);
                        (((struct o34_float *)(a4))->v) = ((t15 + t15) - ((((struct o34_float *)(a4))->v)));
                        u20 = (((struct o94_float *)(a4))->v);
                        (((struct o94_float *)(a4))->v) = (-(u20 * 0.199999988f));
                        (((struct o64_ushort *)(a4))->v) = (-((((struct o64_short *)(a4))->v)));
                        (((struct o60_ushort *)(a4))->v) = (-((((struct o60_short *)(a4))->v)));
                        u29 = (-(u20 * 0.199999988f));
                    } else {
                        (((struct o34_float *)(a4))->v) = t15;
                        (((struct o64_ushort *)(a4))->v) = 0x0;
                        (((struct o60_ushort *)(a4))->v) = 0x0;
                        (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
                        u29 = s1;
                    }
                    t38 = ((s1 > 0.199999988f));
                } else {
                    t38 = (0);
                }
            } else {
                if (t6 == 3) {
                    FUN_0c0553b6(0x19, 0xB, (a4 + 0x30));
                    t40 = ((int (*)(void))(FUN_0c0e19f2))();
                }
            }
        } else {
            (((struct o60_ushort *)(a4))->v) = (int)((FUN_0c0da410(((((struct oA4_int *)(a4))->v)))) * (float)((((struct o98_int *)(a4))->v)));
            (((struct o64_ushort *)(a4))->v) = (int)((FUN_0c0da410(((((struct oA8_int *)(a4))->v)))) * (float)((((struct o98_int *)(a4))->v)));
            (((struct oA4_uint *)(a4))->v) = (((((struct oA4_int *)(a4))->v)) + 0x500);
            (((struct oA8_uint *)(a4))->v) = (((((struct oA8_int *)(a4))->v)) + 0x800);
            t64 = FUN_0c0da410(((((struct o60_short *)(a4))->v)));
            t66 = FUN_0c0da410(((((struct o64_short *)(a4))->v)));
            u67 = _builtin_fabsf((t64 * 10.0f));
            (((struct o58_float *)(a4))->v) = (u67 + (_builtin_fabsf((t66 * 10.0f))));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o90_float *)(a4))->v)));
            if (((((struct o30_float *)(a4))->v)) > 238.0f) {
                (((struct o94_float *)(a4))->v) = 0.0f;
                (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
            } else {
                (((struct o98_uint *)(a4))->v) = (((((struct o98_int *)(a4))->v)) - 32);
                (((struct o90_float *)(a4))->v) = (((((struct o90_float *)(a4))->v)) * 0.959999979f);
                if ((int)((((struct o98_int *)(a4))->v)) >= 0) {
                } else {
                    (((struct o98_uint *)(a4))->v) = 0x0;
                    if (0.099999994f > ((((struct o90_float *)(a4))->v))) {
                        (((struct o80_uint *)(a4))->v) = 0x0;
                        (((struct o58_float *)(a4))->v) = 0.0f;
                        (((struct o60_ushort *)(a4))->v) = 0x0;
                        (((struct o64_ushort *)(a4))->v) = 0x0;
                    }
                }
            }
        }
    } else {
        if (((((struct o1BC_int *)(((((struct o8C_int *)(a4))->v))))->v)) == 0) {
        } else {
            (((struct o98_uint *)(a4))->v) = 0x500;
            (((struct o90_float *)(a4))->v) = 0.239999995f;
            (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), (((((struct o34_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v))), ((((struct o38_float *)(a4))->v)));
    nlRotateAY(((((struct o62_short *)(a4))->v)));
    nlRotateAZ(((((struct o64_short *)(a4))->v)));
    nlRotateAX(((((struct o60_short *)(a4))->v)));
    FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
    return (nlPopMatrix(0x1));
}
