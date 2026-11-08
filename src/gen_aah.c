/* Straight-line functions with calls and guards (batch gen_aah): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c0c473c(int);
int FUN_0c0dcc70(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c06e87a(int a4, int a5, int a6, int a7);
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o64_short { char p[0x64]; short v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };


int FUN_0c06e87a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c0685a4(a4, a5, a6, a7);
    t0 = (((struct o80_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                nlPushMatrix(0x0);
            } else {
                *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | ((((struct o64_short *)(a4))->v)));
                t0 = (((struct oA0_int *)(a4))->v);
                (((struct oA0_uint *)(a4))->v) = (t0 - 1);
                if ((int)(t0 - 1) <= 0) {
                    t0 = (((struct o8C_int *)(a4))->v);
                    (((struct o8C_uint *)(a4))->v) = (t0 + 0x4);
                    (((struct oA0_uint *)(a4))->v) = (*(short *)(((t0 + 0x4) + 0x0)));
                    if ((int)((((struct oA0_int *)(a4))->v)) < 0) {
                        (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
                    } else {
                        (((struct o78_uint *)(a4))->v) = (*(short *)(((t0 + 0x4) + 0x2)));
                    }
                }
                nlPushMatrix(0x0);
            }
            FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
            FUN_0c0c473c(((((struct o78_int *)(a4))->v)));
            return nlPopMatrix(0x1);
        }
    } else {
        (((struct o8C_uint *)(a4))->v) = 0xC0FBA9C;
        t0 = (((struct o8C_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (*(short *)((t0 + 0x0)));
        (((struct o78_uint *)(a4))->v) = (*(short *)((t0 + 0x2)));
        (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)(((0xC246FF0 + (t0 << 2)) + 0x0));
        if ((*(int *)(((t0 << 2) + 0xC247030))) == 4) {
            u0 = ((((struct o30_float *)(a4))->v));
            u0 = (u0 + (0.0f));
            if (!(u0 > (((((struct o30_float *)(t1))->v))))) {
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)0x2) {
                    break;
                }
                continue;
            }
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    t1 = t0;
    if (t0 == 2) {
        (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        t1 = 0x80;
    }
    return t1;
}
