/* Straight-line functions with calls and guards (batch gen_th): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[14]; } Stk14;
int FUN_0c0c0340(int);
int FUN_0c0c475c(int, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c0ae7b0(int a4, int a5, int a6, int a7, float f4);
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o62_short { char p[0x62]; short v; };
struct o62_ushort { char p[0x62]; unsigned short v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o4_float { char p[0x4]; float v; };



int FUN_0c0ae7b0(int a4, int a5, int a6, int a7, float f4)
{
    int stk[15];
    register int t0;
    register int t38;
    register float u97;

    { struct mv14 { int w[14]; }; *(struct mv14 *)(((int)stk + 4)) = *(struct mv14 *)(0xC10F8E0); }
    t0 = (((struct o80_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                if ((*(int *)0xC23A1A0) == 0) {
                    *(unsigned int *)(((int)stk + 4)) = 0x2072;
                } else {
                    *(unsigned int *)(((int)stk + 4)) = 0x2076;
                }
                if ((((unsigned int)(*(int *)0xC23A258) >> 2) & 1) != 0) {
                    FUN_0c0c0340(((int)stk + 4));
                }
                (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + 0.00016666665f);
                (((struct o62_ushort *)(a4))->v) = (((((struct o62_short *)(a4))->v)) + 0x100);
                if (((((struct o14_float *)0xC0AE99C)->v)) > ((((struct o90_float *)(a4))->v))) {
                    (((struct o90_float *)(a4))->v) = (((((struct o90_float *)(a4))->v)) + 0.00999999978f);
                }
            }
        } else {
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - (((float)(*(int *)(((0x88 + a4) + 0x0))) * 0.00166666647f)));
            (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + 0.00016666665f);
            t38 = (((struct oA0_int *)(a4))->v);
            (((struct oA0_uint *)(a4))->v) = (t38 - 1);
            if ((int)(t38 - 1) <= 0) {
                if (((((struct o88_int *)(a4))->v)) != 0) {
                    FUN_0c0e19f2();
                } else {
                    (((struct o34_float *)(a4))->v) = 0.0f;
                    (((struct o74_float *)(a4))->v) = ((((struct o0_float *)0xC0AE99C)->v));
                    (((struct o78_uint *)(a4))->v) = 0xA6;
                    (((struct o90_float *)(a4))->v) = ((((struct o4_float *)0xC0AE99C)->v));
                    (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
                }
            }
        }
    } else {
        (((struct o62_ushort *)(a4))->v) = (((((struct o62_short *)(a4))->v)) + 0x100);
        if (((((struct o80_int *)((*(int *)0xC24FA6C)))->v)) != 3) {
        } else {
            (((struct oA0_uint *)(a4))->v) = 0x3C;
            (((struct o88_uint *)(a4))->v) = (((((struct o88_int *)(a4))->v)) - 1);
            (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        }
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAX(0x1000);
    nlRotateAY(((((struct o62_short *)(a4))->v)));
    u97 = (((struct o74_float *)(a4))->v);
    nlScale(u97, u97, u97);
    FUN_0c0de000(((((struct o74_float *)(a4))->v)));
    FUN_0c0c475c(((((struct o78_int *)(a4))->v)), ((((struct o90_float *)(a4))->v)));
    return (nlPopMatrix(0x1));
}
