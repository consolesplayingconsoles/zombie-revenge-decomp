/* Straight-line functions with calls and guards (batch gen_to): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c040266(int);
int FUN_0c041f2a(int);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int FUN_0c0402b8(int a4);
struct o26C_float { char p[0x26C]; float v; };
struct o2C4_int { char p[0x2C4]; int v; };
struct o2CC_int { char p[0x2CC]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o4E0_int { char p[0x4E0]; int v; };
struct o4EC_int { char p[0x4EC]; int v; };
struct o4EC_uint { char p[0x4EC]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o6E_short { char p[0x6E]; short v; };


int FUN_0c0402b8(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o4EC_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
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
                if (t0 == 4) {
                    t1 = FUN_0c040266(a4);
                    t2 = t1;
                    if (t1 != 0) {
                        (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
                        t2 = 0x4EC;
                    }
                    return t2;
                }
                if (t0 == 5) {
                    return FUN_0c041f2a(a4);
                }
                return t0;
            }
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - ((((FUN_0c0da410((((((struct o6E_short *)(a4))->v)) + 0x8000))) * 1.32089996f) / 27.0f)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - ((((FUN_0c0d9e90((((((struct o6E_short *)(a4))->v)) + 0x8000))) * 1.32089996f) / 27.0f)));
            FUN_0c041f2a(a4);
            t0 = (((struct o2CC_int *)(a4))->v);
            t1 = t0;
            if (t0 == 1) {
                (((struct o4EC_uint *)(a4))->v) = 0x0;
                t1 = 0x4EC;
            }
            return t1;
        }
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((FUN_0c0da410(((((struct o6E_short *)(a4))->v)))) * 2.9053998f) / 32.0f)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((FUN_0c0d9e90(((((struct o6E_short *)(a4))->v)))) * 2.9053998f) / 32.0f)));
        FUN_0c041f2a(a4);
        t0 = (((struct o2CC_int *)(a4))->v);
        t1 = t0;
        if (t0 == 1) {
            (((struct o4EC_uint *)(a4))->v) = 0x0;
            t1 = 0x4EC;
        }
        return t1;
    }
    FUN_0c041f2a(a4);
    t0 = (((struct o2CC_int *)(a4))->v);
    t1 = t0;
    if (t0 != 1) {
    } else {
        t0 = (((struct o2C4_int *)(a4))->v);
        if (t0 != 0x241) {
            t2 = t0;
            if (t0 != 0x243) {
            } else {
                (((struct o4EC_uint *)(a4))->v) = 0x2;
                t2 = 0x4EC;
            }
            t0 = t2;
        } else {
            t2 = 0x3;
            if ((int)((((struct o4E0_int *)(a4))->v)) < (int)0x4) {
                t2 = 0x1;
            }
            (((struct o4EC_uint *)(a4))->v) = t2;
            t0 = 0x4EC;
        }
        t1 = t0;
    }
    return t1;
}
