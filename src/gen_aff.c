/* Straight-line functions with calls and guards (batch gen_aff): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02a19a(int);
int FUN_0c030848(int, int, int);
int FUN_0c03227c(int);
int FUN_0c030882(int a4);
struct o3BC_float { char p[0x3BC]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4E0_int { char p[0x4E0]; int v; };
struct o4E0_uint { char p[0x4E0]; unsigned int v; };
struct o4E4_int { char p[0x4E4]; int v; };
struct o4E4_uint { char p[0x4E4]; unsigned int v; };
struct o4E8_int { char p[0x4E8]; int v; };
struct o4E8_uint { char p[0x4E8]; unsigned int v; };
struct o4EC_int { char p[0x4EC]; int v; };
struct o4EC_uint { char p[0x4EC]; unsigned int v; };
struct o534_int { char p[0x534]; int v; };


int FUN_0c030882(int a4)
{
    register int t0;
    register int t5;
    register int t31;
    register int t24;
    int t37;
    register int t40;
    register int t46;

    t0 = FUN_0c03227c(a4);
    if (t0 != 0) {
        if ((((((struct o534_int *)(a4))->v)) & 1) != 0) {
            t5 = (((struct o4EC_int *)(a4))->v);
            (((struct o4EC_uint *)(a4))->v) = (t5 + 0x1);
            if (((t5 + 0x1) & 0x8) != 0) {
                (((struct o4EC_uint *)(a4))->v) = 0x0;
                FUN_0c030848(0x328A9, 0x428A9, 0x5A);
            }
            if (((((struct o4E8_int *)(a4))->v)) != 0) {
                (((struct o4E8_uint *)(a4))->v) = (((((struct o4E8_int *)(a4))->v)) - 1);
                (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - (((*(float *)(((0x3BC + a4) + 0x0))) / 4.0f) + -0.5f));
            }
            t31 = 0x4E0;
            if ((int)((((struct o4E0_int *)(a4))->v)) < (int)0x3) {
                t24 = (((struct o4E4_int *)(a4))->v);
                (((struct o4E4_uint *)(a4))->v) = (t24 + 0x1);
                if ((int)(t24 + 0x1) >= (int)0x8) {
                    (((struct o4E0_uint *)(a4))->v) = (((((struct o4E0_int *)(a4))->v)) + 0x1);
                    (((struct o4E4_uint *)(a4))->v) = 0x0;
                    *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | 0x200);
                }
                t31 = 0x4E4;
            }
            t46 = t31;
        } else {
            t37 = (((struct o534_int *)(a4))->v);
            t40 = t37;
            if ((0x8 & t37) != 0) {
                (((struct o4E8_uint *)(a4))->v) = 0x4;
                (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + (1.0f + 1.0f));
                (((struct o3BC_float *)(a4))->v) = (((((struct o3BC_float *)(a4))->v)) + (1.0f + 1.0f));
                t40 = 0x3BC;
            }
            t46 = t40;
        }
        return t46;
    }
    return FUN_0c02a19a(a4);
}
