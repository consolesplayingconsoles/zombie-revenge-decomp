/* Straight-line functions with calls and guards (batch gen_zh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c037acc(int, float);
int FUN_0c037e44(int a4);
struct o220_float { char p[0x220]; float v; };
struct o224_float { char p[0x224]; float v; };
struct o228_float { char p[0x228]; float v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o230_int { char p[0x230]; int v; };
struct o230_uint { char p[0x230]; unsigned int v; };
struct o234_int { char p[0x234]; int v; };
struct o234_uint { char p[0x234]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o3DC_uint { char p[0x3DC]; unsigned int v; };
struct o3E0_int { char p[0x3E0]; int v; };
struct o3EC_float { char p[0x3EC]; float v; };


int FUN_0c037e44(int a4)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = (((struct o224_float *)(a4))->v);
    u1 = (((struct o3EC_float *)(a4))->v);
    u2 = (u1 * (1.0f + 1.0f));
    u2 = -u2;
    if ((u0 > u2) && ((u1 * (1.0f + 1.0f)) > u0)) {
        if ((*(float *)0xC037FA4) > ((((struct o34_float *)(a4))->v))) {
            if (0.0f > ((((struct o224_float *)(a4))->v))) {
                u0 = ((((struct o224_float *)(a4))->v));
                u0 *= -0.25f;
                (((struct o224_float *)(a4))->v) = u0;
            }
            return 0x0;
        }
        (((struct o3EC_float *)(a4))->v) = 0.0f;
        (((struct o220_float *)(a4))->v) = 0.0f;
        (((struct o224_float *)(a4))->v) = 0.0f;
        (((struct o228_float *)(a4))->v) = 0.0f;
        (((struct o3DC_uint *)(a4))->v) = ((((struct o3E0_int *)(a4))->v));
        FUN_0c037acc(a4, 0.0f);
        u0 = *(float *)0xC037FAC;
        (((struct o22C_uint *)(a4))->v) = (int)((float)((((struct o22C_int *)(a4))->v)) * u0);
        (((struct o230_uint *)(a4))->v) = (int)((float)((((struct o230_int *)(a4))->v)) * u0);
        (((struct o234_uint *)(a4))->v) = (int)((float)((((struct o234_int *)(a4))->v)) * u0);
        return 0x1;
    }
    if (0.0f > ((((struct o224_float *)(a4))->v))) {
        u0 = ((((struct o224_float *)(a4))->v));
        u0 *= -0.25f;
        (((struct o224_float *)(a4))->v) = u0;
    }
    return 0x0;
}
