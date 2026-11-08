/* Straight-line functions with calls and guards (batch gen_bt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c0340(int, float);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0b1fe4(int a4, int a5, int a6, int a7, float f4);
struct o5C_float { char p[0x5C]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o90_int { char p[0x90]; int v; };
struct o90_uint { char p[0x90]; unsigned int v; };


int FUN_0c0b1fe4(int a4, int a5, int a6, int a7, float f4)
{
    float u14;
    int t23;
    float u32;

    u14 = f4;
    if (((((struct o68_int *)(a4))->v)) == 0) {
        if (1.0f > ((((struct o5C_float *)(a4))->v))) {
            (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) + 0.0199999996f);
        } else {
            (((struct o68_uint *)(a4))->v) = 0x1;
            (((struct o5C_float *)(a4))->v) = 1.0f;
        }
        u14 = 1.0f;
    }
    if ((int)((((struct o90_int *)(a4))->v)) < (int)0x3C) {
        (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) - 0.0166666657f);
    }
    t23 = (((struct o90_int *)(a4))->v);
    (((struct o90_uint *)(a4))->v) = (t23 - 1);
    if ((int)(t23 - 1) <= 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    } else {
        u32 = u14;
    }
    return FUN_0c0c0340((a4 + 0x30), u32);
}
