/* Straight-line functions with calls and guards (batch gen_iv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c0c473c(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c06e7ac(int a4, int a5, int a6, int a7);
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o60_short { char p[0x60]; short v; };
struct o62_short { char p[0x62]; short v; };
struct o64_short { char p[0x64]; short v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct o0_int { int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };



int FUN_0c06e7ac(int a4, int a5, int a6, int a7)
{
    register int t0;

    FUN_0c0685a4(a4, a5, a6, a7);
    if (((((struct o80_int *)(a4))->v)) == 0) {
        (((struct o2C_uint *)0xC23ED5C)->v) = (((((struct o2C_int *)0xC23ED5C)->v)) | ((((struct o64_short *)(a4))->v)));
        if (((((((struct o0_int *)0xC23ED5C)->v)) & 0x200) != 0) && (t0 = (((struct o0_int *)0xC23ED5C)->v), (t0 & 0x800) != 0)) {
            (((struct o80_uint *)(a4))->v) = 0x1;
            (((struct o8C_uint *)(a4))->v) = 0xC0FBAB0;
            t0 = (((struct o8C_int *)(a4))->v);
            (((struct oA0_uint *)(a4))->v) = (*(short *)((t0 + 0x0)));
            (((struct o78_uint *)(a4))->v) = (*(short *)((t0 + 0x2)));
        }
    } else {
        t0 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            t0 = (((struct o8C_int *)(a4))->v);
            (((struct o8C_uint *)(a4))->v) = (t0 + 0x4);
            (((struct oA0_uint *)(a4))->v) = (*(short *)(((t0 + 0x4) + 0x0)));
            if ((int)((((struct oA0_int *)(a4))->v)) < 0) {
                (((struct o2C_uint *)0xC23ED5C)->v) = (((((struct o2C_int *)0xC23ED5C)->v)) & (~((((struct o64_short *)(a4))->v))));
                FUN_0c0e19f2();
            } else {
                (((struct o78_uint *)(a4))->v) = (*(short *)(((t0 + 0x4) + 0x2)));
            }
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAZ(((((struct o64_short *)(a4))->v)));
    nlRotateAY(((((struct o62_short *)(a4))->v)));
    nlRotateAX(((((struct o60_short *)(a4))->v)));
    FUN_0c0c473c(((((struct o78_int *)(a4))->v)));
    return nlPopMatrix(0x1);
}
