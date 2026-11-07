/* Straight-line functions with calls and guards (batch gen_ux): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c040266(int);
int FUN_0c041dd0(int);
int FUN_0c041f2a(int);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int FUN_0c04045c(int a4);
struct o26C_float { char p[0x26C]; float v; };
struct o2CC_int { char p[0x2CC]; int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4E0_int { char p[0x4E0]; int v; };
struct o4E0_uint { char p[0x4E0]; unsigned int v; };
struct o4EC_int { char p[0x4EC]; int v; };
struct o4EC_uint { char p[0x4EC]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };


int FUN_0c04045c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = (((struct o4EC_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    *(float *)(((0x48 + a4) + 0x0)) = ((*(float *)(((0x48 + a4) + 0x0))) - (((FUN_0c0da410((((((struct o6E_short *)(a4))->v)) + 0x8000))) * 0.571428537f)));
                    *(float *)(((0x50 + a4) + 0x0)) = ((*(float *)(((0x50 + a4) + 0x0))) - (((FUN_0c0d9e90((((((struct o6E_short *)(a4))->v)) + 0x8000))) * 0.571428537f)));
                    (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) - 390);
                    if (64.0f > _builtin_fabsf((float)(((((struct o6E_short *)(a4))->v)) - 16384))) {
                        (((struct o6E_ushort *)(a4))->v) = 0x4000;
                        (((struct o4E0_uint *)(a4))->v) = (((((struct o4E0_int *)(a4))->v)) + 0x1);
                        (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
                        FUN_0c041dd0(a4);
                        (((struct o2D4_uint *)(a4))->v) = 0x2;
                        return 0x2D4;
                    }
                    t1 = (((struct o2EC_int *)(a4))->v);
                    if ((t1 & 12) != 0) {
                        return FUN_0c041dd0(a4);
                    }
                    return t1;
                }
                if (t0 == 4) {
                    FUN_0c041f2a(a4);
                    t1 = (((struct o2CC_int *)(a4))->v);
                    t2 = t1;
                    if (t1 == 1) {
                        (((struct o26C_float *)(a4))->v) = 0.0333333313f;
                        (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
                        t2 = 0x4EC;
                    }
                    return t2;
                }
                if (t0 == 5) {
                    t1 = FUN_0c040266(a4);
                    t2 = t1;
                    if (t1 != 0) {
                        (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
                        t2 = 0x4EC;
                    }
                    return t2;
                }
                if (t0 == 6) {
                    return FUN_0c041f2a(a4);
                }
                return t0;
            }
        } else {
            (((struct o26C_float *)(a4))->v) = (((((struct o26C_float *)(a4))->v)) - 0.049999997f);
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + ((*(float *)(((0x26C + a4) + 0x0))) + 0.5f));
            u0 = (*(float *)(((a4 + 0x50) + 0x0)));
            u0 = u0 + 0.5f * (FUN_0c0d9e90((((((struct o6E_short *)(a4))->v)) + 0x8000)));
            *(float *)(((a4 + 0x50) + 0x0)) = u0;
            u0 = (*(float *)(((a4 + 0x48) + 0x0)));
            u0 = u0 + 0.5f * (FUN_0c0da410((((((struct o6E_short *)(a4))->v)) + 0x8000)));
            *(float *)(((a4 + 0x48) + 0x0)) = u0;
            if (110.0f > ((((struct o34_float *)(a4))->v))) {
                (((struct o4E0_uint *)(a4))->v) = (((((struct o4E0_int *)(a4))->v)) + 0x1);
                (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
                (((struct o34_float *)(a4))->v) = 110.0f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                FUN_0c041dd0(a4);
            }
        }
        if (((((struct o4E0_int *)(a4))->v)) == 2) {
            if (!(75.0f > ((((struct o38_float *)(a4))->v)))) {
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((-(*(float *)(((0x38 + a4) + 0x0)))) + 75.0f));
                (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
            }
            t0 = (((struct o2EC_int *)(a4))->v);
            if ((t0 & 12) != 0) {
                return FUN_0c041dd0(a4);
            }
            return t0;
        }
        return FUN_0c041f2a(a4);
    }
    FUN_0c041f2a(a4);
    (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
    (((struct o26C_float *)(a4))->v) = 0.0333333313f;
    return 0x26C;
}
