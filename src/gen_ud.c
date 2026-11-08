/* Straight-line functions with calls and guards (batch gen_ud): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f1b8(int, int);
int FUN_0c03f4bc(int);
int FUN_0c041dd0(int);
int FUN_0c041f2a(int);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int FUN_0c0418d4(int a4);
struct o26C_float { char p[0x26C]; float v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4DC_int { char p[0x4DC]; int v; };
struct o4E0_int { char p[0x4E0]; int v; };
struct o4E0_uint { char p[0x4E0]; unsigned int v; };
struct o4E4_int { char p[0x4E4]; int v; };
struct o4E4_uint { char p[0x4E4]; unsigned int v; };
struct o4EC_int { char p[0x4EC]; int v; };
struct o4EC_uint { char p[0x4EC]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o6E_short { char p[0x6E]; short v; };


int FUN_0c0418d4(int a4)
{
    int stk[4];
    register int t0;
    register int t11;
    register int t13;
    register int t14;
    register int t15;
    register int t20;
    register float t59;
    register int t80;
    int t3;

    t0 = (((struct o4EC_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t80 = t0;
                if (t0 == 3) {
                    (((struct o4E4_uint *)(a4))->v) = (((((struct o4E4_int *)(a4))->v)) - 1);
                    t80 = 0x4E4;
                    if (((((((struct o2EC_int *)(a4))->v)) & 12) == 0) && (t3 = (((struct o4E4_int *)(a4))->v), (int)t3 >= 0)) {
                    } else {
                        t80 = (FUN_0c03f4bc(a4));
                    }
                }
            } else {
                t11 = (((struct o4E4_int *)(a4))->v);
                (((struct o4E4_uint *)(a4))->v) = (t11 - 1);
                t80 = 0x4E4;
                if ((int)(t11 - 1) < 0) {
                    t13 = (((struct o2EC_int *)(a4))->v);
                    t80 = t13;
                    if ((t13 & 12) != 0) {
                        t14 = (((struct o4DC_int *)(a4))->v);
                        t15 = (((struct o4E0_int *)(a4))->v);
                        (((struct o4E0_uint *)(a4))->v) = (t15 + 0x1);
                        if ((int)(*(short *)((((((t15 + 0x1) << 2) << 1) + (*(int *)((((((t14 - 76) << 1) + (t14 - 76)) << 2) + 0xC1F518C)))) + 0x0))) < 0) {
                            t20 = (((struct o4F0_int *)(a4))->v);
                            (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t20 << 2) + t20) << 2) + 0xC1F8E44))) + 0x0)));
                            (((struct o2CC_uint *)(a4))->v) = 0x1;
                            (((struct o2D4_uint *)(a4))->v) = 0x4;
                            (((struct o4E4_uint *)(a4))->v) = 0x1E;
                            (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
                            t80 = 0x4EC;
                        } else {
                            t80 = (FUN_0c041dd0(a4));
                        }
                    }
                }
            }
        } else {
            (((struct o26C_float *)(a4))->v) = (((((struct o26C_float *)(a4))->v)) - 0.0749999955f);
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + (((((struct o26C_float *)(a4))->v)) + 0.5f));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((-((FUN_0c0d9e90(((((struct o6E_short *)(a4))->v)))) * 0.166666657f))));
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((-((FUN_0c0da410(((((struct o6E_short *)(a4))->v)))) * 0.166666657f))));
            t59 = FUN_0c01f1b8((a4 + 0x30), ((int)stk + 4));
            t80 = 0x34;
            if (t59 > ((((struct o34_float *)(a4))->v))) {
                (((struct o4E0_uint *)(a4))->v) = (((((struct o4E0_int *)(a4))->v)) + 0x1);
                (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
                (((struct o34_float *)(a4))->v) = t59;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                t80 = (FUN_0c041dd0(a4));
            }
        }
    } else {
        FUN_0c041f2a(a4);
        (((struct o26C_float *)(a4))->v) = 0.0f;
        (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
        t80 = 0x4EC;
    }
    return t80;
}
