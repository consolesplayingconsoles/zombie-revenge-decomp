/* Straight-line functions with calls and guards (batch gen_rt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdf2(int);
int FUN_0c0c465c(int);
float FUN_0c0da410(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19f2(void);
int mwPlySetLpFlg(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c068b62(int a4);
struct o1BC_int { char p[0x1BC]; int v; };
struct o1BC_uint { char p[0x1BC]; unsigned int v; };
struct o1C4_int { char p[0x1C4]; int v; };
struct o21C_int { char p[0x21C]; int v; };
struct o220_int { char p[0x220]; int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o228_int { char p[0x228]; int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o230_int { char p[0x230]; int v; };
struct o230_uint { char p[0x230]; unsigned int v; };
struct o234_int { char p[0x234]; int v; };
struct o234_uint { char p[0x234]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6C_ushort { char p[0x6C]; unsigned short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o70_short { char p[0x70]; short v; };
struct o70_ushort { char p[0x70]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };


int FUN_0c068b62(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        mwPlySetLpFlg(a4);
        FUN_0c0e19f2();
    }
    t1 = (((struct o220_int *)(a4))->v);
    if (t1 != 0) {
        if (t1 != 1) {
        } else {
            (((struct o1BC_uint *)(a4))->v) = 0x0;
            (((struct o6C_ushort *)(a4))->v) = (int)((FUN_0c0da410(((((struct o230_int *)(a4))->v)))) * (float)((((struct o22C_int *)(a4))->v)));
            (((struct o70_ushort *)(a4))->v) = (int)((FUN_0c0da410(((((struct o234_int *)(a4))->v)))) * (float)((((struct o22C_int *)(a4))->v)));
            (((struct o230_uint *)(a4))->v) = (((((struct o230_int *)(a4))->v)) + 0x500);
            (((struct o234_uint *)(a4))->v) = (((((struct o234_int *)(a4))->v)) + 0x800);
            u0 = FUN_0c0da410(((((struct o6C_short *)(a4))->v)));
            u1 = FUN_0c0da410(((((struct o70_short *)(a4))->v)));
            u2 = _builtin_fabsf((u0 * 10.0f));
            (((struct o64_float *)(a4))->v) = (u2 + (_builtin_fabsf((u1 * 10.0f))));
            t1 = 0xC0;
            t2 = t0;
            t0 = ((((struct oC0_int *)(a4))->v));
            u0 = 10.0f;
            for (;;) {
                t3 = (int)t0 <= 0;
                t0 = (t0 - 1);
                if (t3) {
                    break;
                }
                t1 = 0x228;
                t2 = (*(int *)((a4 + t1)));
                t1 = 0x64;
                t3 = t1;
                u1 = (*(float *)((a4 + t1)));
                t3 = (t3 + t2);
                u0 = (*(float *)((t3 + 0x0)));
                u1 = (u1 + u0);
                *(float *)((a4 + t1)) = u1;
            }
            t0 = (((struct o22C_int *)(a4))->v);
            (((struct o22C_uint *)(a4))->v) = (t0 - 32);
            if ((int)(t0 - 32) < 0) {
                (((struct o1BC_uint *)(a4))->v) = 0x0;
                (((struct o220_uint *)(a4))->v) = 0x0;
                (((struct o64_float *)(a4))->v) = 0.0f;
            }
        }
    } else {
        if (((((struct oC0_int *)(a4))->v)) != 0) {
            (((struct o1BC_uint *)(a4))->v) = (((((struct o1BC_int *)(a4))->v)) | ((((struct o1BC_int *)(((((struct o228_int *)(a4))->v))))->v)));
        }
        if (((((struct o1BC_int *)(a4))->v)) == 0) {
        } else {
            if ((int)((((struct o1C4_int *)(a4))->v)) < (int)0x2) {
                t0 = (((struct o1C4_int *)(a4))->v);
                *(unsigned int *)(((t0 << 2) + 0xC247584)) = ((*(int *)(((t0 << 2) + 0xC247584))) + 0xA);
            }
            t0 = (((struct oC0_int *)(a4))->v);
            (((struct o22C_uint *)(a4))->v) = ((-(((((t0 << 2) + t0) << 2) << 2) << 1)) + 0x300);
            (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) + 0x1);
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), (((((struct o34_float *)(a4))->v)) + ((((struct o64_float *)(a4))->v))), ((((struct o38_float *)(a4))->v)));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAZ(((((struct o70_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    FUN_0c0c465c(((((struct o21C_int *)(a4))->v)));
    nlPopMatrix(0x1);
    return FUN_0c01cdf2(a4);
}
