/* Straight-line functions with calls and guards (batch gen_adl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c017718(int, int, float);
int FUN_0c01cdf2(int);
int FUN_0c01d9c2(int);
int FUN_0c0c465c(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19f2(void);
int mwPlySetLpFlg(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int FUN_0c01788c(int a4);
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o1BC_int { char p[0x1BC]; int v; };
struct o1BC_uint { char p[0x1BC]; unsigned int v; };
struct o1C4_int { char p[0x1C4]; int v; };
struct o21C_int { char p[0x21C]; int v; };
struct o220_int { char p[0x220]; int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o6E_short { char p[0x6E]; short v; };
struct o0_int { int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };



int FUN_0c01788c(int a4)
{
    register int t0;

    if ((((((struct oC_int *)0xC23ED50)->v)) & 6) != 0) {
        mwPlySetLpFlg(a4);
        FUN_0c01d9c2(a4);
        FUN_0c0e19f2();
    }
    if (((((struct o1BC_int *)(a4))->v)) != 0) {
        if ((int)((((struct o1C4_int *)(a4))->v)) < (int)0x2) {
            t0 = (((struct o1C4_int *)(a4))->v);
            *(unsigned int *)(((t0 << 2) + 0xC247584)) = ((*(int *)(((t0 << 2) + 0xC247584))) + 0x3E8);
        }
        (((struct o38_uint *)0xC23ED50)->v) = (((((struct o38_int *)0xC23ED50)->v)) | 0x100);
        (((struct o1BC_uint *)(a4))->v) = 0x0;
        (((struct o1B0_uint *)(a4))->v) = ((int)0x1 << (int)((((struct o1C4_int *)(a4))->v)));
        (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) + 0x1);
    }
    if (((((struct o220_int *)(a4))->v)) != 0) {
        t0 = 0x0;
        for (;;) {
            FUN_0c017718(a4, t0, 0.0f);
            FUN_0c017718(a4, t0, 12.0f);
            t0 = (t0 + 0x1);
            if ((unsigned int)t0 >= (unsigned int)0xA) {
                break;
            }
        }
        if (((((struct o0_int *)0xC23ED50)->v)) == 20) {
            *(unsigned int *)((((((((struct o22C_int *)(a4))->v)) << 2) << 1) + 0xC23EE14)) = 0x0;
        }
        mwPlySetLpFlg(a4);
        FUN_0c01d9c2(a4);
        FUN_0c0e19f2();
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    FUN_0c0c465c(((((struct o21C_int *)(a4))->v)));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), (((((struct o34_float *)(a4))->v)) + 12.0f), ((((struct o38_float *)(a4))->v)));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    FUN_0c0c465c(((((struct o21C_int *)(a4))->v)));
    nlPopMatrix(0x1);
    return FUN_0c01cdf2(a4);
}
