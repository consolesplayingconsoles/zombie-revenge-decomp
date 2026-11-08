/* Straight-line functions with calls and guards (batch gen_mz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c06ca54(int a4);
struct o126C_float { char p[0x126C]; float v; };
struct o1270_float { char p[0x1270]; float v; };
struct o1274_float { char p[0x1274]; float v; };
struct o1278_float { char p[0x1278]; float v; };
struct o127C_float { char p[0x127C]; float v; };
struct o1280_float { char p[0x1280]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o84_uint { char p[0x84]; unsigned int v; };


int FUN_0c06ca54(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(int *)0xC247C5C;
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    if (((((struct o30_float *)(a4))->v)) > ((((struct o1278_float *)(t0))->v))) {
        (((struct o30_float *)(a4))->v) = ((((struct o1278_float *)(t0))->v));
        u0 = ((((struct o54_float *)(a4))->v));
        u0 *= -1.0f;
        (((struct o54_float *)(a4))->v) = u0;
    } else {
        if (!(((((struct o30_float *)(a4))->v)) > ((((struct o126C_float *)(t0))->v)))) {
            (((struct o30_float *)(a4))->v) = ((((struct o126C_float *)(t0))->v));
            u0 = ((((struct o54_float *)(a4))->v));
            u0 *= -1.0f;
            (((struct o54_float *)(a4))->v) = u0;
        }
    }
    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v)));
    (((struct o84_uint *)(a4))->v) = 0x0;
    if (((((struct o34_float *)(a4))->v)) > ((((struct o127C_float *)(t0))->v))) {
        (((struct o34_float *)(a4))->v) = ((((struct o127C_float *)(t0))->v));
        (((struct o58_float *)(a4))->v) = 0.0f;
    } else {
        if (!(((((struct o34_float *)(a4))->v)) > ((((struct o1270_float *)(t0))->v)))) {
            (((struct o34_float *)(a4))->v) = ((((struct o1270_float *)(t0))->v));
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o84_uint *)(a4))->v) = 0x1;
        }
    }
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    if (((((struct o38_float *)(a4))->v)) > ((((struct o1280_float *)(t0))->v))) {
        (((struct o38_float *)(a4))->v) = ((((struct o1280_float *)(t0))->v));
        u0 = ((((struct o5C_float *)(a4))->v));
        u0 *= -1.0f;
        (((struct o5C_float *)(a4))->v) = u0;
        t1 = 0x5C;
    } else {
        t1 = 0x38;
        if (!(((((struct o38_float *)(a4))->v)) > ((((struct o1274_float *)(t0))->v)))) {
            (((struct o38_float *)(a4))->v) = ((((struct o1274_float *)(t0))->v));
            u0 = ((((struct o5C_float *)(a4))->v));
            u0 *= -1.0f;
            (((struct o5C_float *)(a4))->v) = u0;
            t1 = 0x5C;
        }
    }
    return t1;
}
