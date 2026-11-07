/* Straight-line functions with calls and guards (batch gen_ed): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0da2e0(void);
int FUN_0c0dce80(int, int, float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int nlAddVector3op(int, int, int);
int FUN_0c0913aa(int a4, float f4);
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };


int FUN_0c0913aa(int a4, float f4)
{
    int t0;
    int t2;
    int t28;
    int t20;
    int stk[7];

    t0 = (((struct oA0_int *)(a4))->v);
    (((struct oA0_uint *)(a4))->v) = (t0 - 1);
    if ((t0 & 0x3) == 0) {
        t2 = FUN_0c0e19aa(0xC0914FE, 0xB4, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t2);
        FUN_0c0dce80(((int)stk + 4), (a4 + 0x48), (1.0f + 1.0f));
        nlAddVector3op((t2 + 0x30), (a4 + 0x30), ((int)stk + 4));
        (((struct o74_float *)(t2))->v) = ((((struct o74_float *)(a4))->v));
        (((struct o78_uint *)(t2))->v) = 0xFB;
        (((struct oA0_uint *)(t2))->v) = 0x7;
        (((struct o48_float *)(t2))->v) = ((((struct o48_float *)(a4))->v));
        (((struct o4C_float *)(t2))->v) = ((((struct o4C_float *)(a4))->v));
        (((struct o50_float *)(t2))->v) = ((((struct o50_float *)(a4))->v));
        *(unsigned short *)(((0x64 + t2) + 0x0)) = (FUN_0c0da2e0());
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) * 0.799999952f);
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.199999988f);
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) * 0.799999952f);
        (((struct o74_float *)(a4))->v) = (((((struct o74_float *)(a4))->v)) - 1.0f);
    } else {
        t20 = a4;
    }
    t28 = 0xA0;
    if ((int)((((struct oA0_int *)(a4))->v)) <= 0) {
        t28 = (FUN_0c0e19f2());
    }
    return t28;
}
