/* Straight-line functions with calls and guards (batch gen_aw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0c47ae(int);
int FUN_0c0d1942(int, int, int, int, int);
int FUN_0c0d6592(int, int);
float FUN_0c0d7178(int, int, float);
int FUN_0c0da2e0(void);
float FUN_0c0da300(void);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dccf0(void);
int nlAddVector(int, int);
float nlLength(int, int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int, int, int, int);
int _quick_odd_mvn(void);
int FUN_0c0d637e(int a4, int a5, int a6, int a7, float f4);
int FUN_0c09bdec(int a4, int a5, int a6, int a7);
struct o11C_int { char p[0x11C]; int v; };
struct o14C_float { char p[0x14C]; float v; };
struct o154_float { char p[0x154]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o70_int { char p[0x70]; int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oF4_int { char p[0xF4]; int v; };


int FUN_0c0d637e(int a4, int a5, int a6, int a7, float f4)
{
    int t11;
    float t14;
    float u16;
    float u18;
    float u19;
    int t29;
    int t31;
    int t32;
    int t33;
    float t34;
    float u36;
    float u37;
    int t41;
    int t58;
    int stk[24];

    (((struct o74_uint *)(a4))->v) = a5;
    if (a5 == 2) {
        (((struct o78_uint *)(a4))->v) = ((((struct oF4_int *)(a4))->v));
    } else {
        if (a5 == 3) {
            (((struct o78_uint *)(a4))->v) = ((((struct o11C_int *)(a4))->v));
        } else {
            (((struct o78_uint *)(a4))->v) = 0xFFFFFFFF;
        }
    }
    if (a5 != 4) {
    } else {
        if ((*(int *)((a4 + 0x30))) != 8) {
            t11 = (((struct o6C_int *)(a4))->v);
            FUN_0c0d1942(a4, a5, a6, a7, (0x14C + a4));
            t14 = nlLength((((((struct o6C_int *)(a4))->v)) + 0x30), (0x14C + a4));
            u16 = *(float *)0xC0D65F4;
            u18 = u16;
            u18 = u18 + u16 * ((-(*(float *)((((((*(int *)((a4 + 0x8))) << 2) << 2) << 1) + 0xC943530)))) + 1.0f);
            u19 = u18;
            if (!(t14 > u18)) {
                u19 = t14;
            }
            FUN_0c0a68ec((((int)stk + 8) + 0xC), (((((struct o30_float *)(t11))->v)) - ((((struct o14C_float *)(a4))->v))), (((((struct o38_float *)(t11))->v)) - ((((struct o154_float *)(a4))->v))));
            FUN_0c0a6800((*(int *)(((int)stk + 20))), (((int)stk + 8) + 0x1C), 0.0f, 0.0f, (-u19));
            nlAddVector((0x14C + a4), (((int)stk + 8) + 0x1C));
        } else {
            t29 = (((struct o6C_int *)(a4))->v);
            *(unsigned int *)(((int)stk + 16)) = ((((struct o70_int *)(a4))->v));
            t31 = (((struct oC0_int *)(a4))->v);
            *(unsigned int *)(((int)stk + 12)) = 0x8;
            t32 = 0x0;
            t33 = (t31 - 16384);
            for (;;) {
                t34 = FUN_0c0d7178((t29 + 0x30), t33, f4);
                if ((t34 - 40.0f) > 22.0f) {
                    u36 = 22.0f;
                    u36 = u36 + (FUN_0c0da300()) * ((t34 - 40.0f) + -22.0f);
                    u37 = u36;
                    if (u36 > 35.0f) {
                        u37 = 35.0f;
                    }
                    FUN_0c0a6800(t33, (((int)stk + 8) + 0x1C), 0.0f, 0.0f, (-u37));
                    nlAddVector((((int)stk + 8) + 0x1C), (t29 + 0x30));
                    t41 = *(int *)(((int)stk + 16));
                    FUN_0c0a68ec(((int)stk + 8), ((*(float *)(((int)stk + 36))) - ((((struct o30_float *)(t41))->v))), ((*(float *)(((int)stk + 44))) - ((((struct o38_float *)(t41))->v))));
                    if ((int)(*(int *)(((int)stk + 8))) > (int)t32) {
                        _quick_odd_mvn();
                        t32 = (*(int *)(((int)stk + 8)));
                    }
                }
                t58 = *(int *)(((int)stk + 12));
                t33 = (t33 + 0x1000);
                *(unsigned int *)(((int)stk + 12)) = (t58 - 1);
                if ((t58 - 1) == 0) {
                    break;
                }
            }
            if ((int)t32 > (int)0x11C7) {
                _quick_odd_mvn();
            } else {
                FUN_0c0d1942(0x0, 0x0, 0x0, 0x0, (0x14C + a4));
            }
        }
    }
    return (FUN_0c0d6592(a4, a5));
}

