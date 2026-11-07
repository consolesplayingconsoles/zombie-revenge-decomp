/* Straight-line functions with calls and guards (batch gen_ld): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01d2c2(int a4, int a5);
struct o1CC_int { char p[0x1CC]; int v; };
struct o1CC_uint { char p[0x1CC]; unsigned int v; };
struct o1F4_int { char p[0x1F4]; int v; };
struct o200_int { char p[0x200]; int v; };
struct oBC_int { char p[0xBC]; int v; };


int FUN_0c01d2c2(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = (((struct o200_int *)(a5))->v);
    if (((int)t0 >= (int)0x3) && ((int)t0 <= (int)0x16)) {
        t0 = 0x8;
        t1 = (0xC943514 + (((((((struct oBC_int *)(a5))->v)) << 2) << 2) << 1));
        u0 = (float)((((struct o1F4_int *)(a5))->v));
    } else {
        t0 = 0x4;
        t1 = (0xC943514 + (((((((struct oBC_int *)(a5))->v)) << 2) << 2) << 1));
        u0 = (float)((((struct o1F4_int *)(a5))->v));
    }
    (((struct o1CC_uint *)(a4))->v) = (int)(u0 * (*(float *)((t1 + t0))));
    t0 = 0x1F4;
    if (((((struct o1F4_int *)(a5))->v)) != 0) {
        (((struct o1CC_uint *)(a4))->v) = (int)((float)((((struct o1CC_int *)(a4))->v)) / (*(float *)(((((((((struct oBC_int *)(a4))->v)) << 2) << 2) << 1) + 0xC943520))));
        t1 = (((struct o1CC_int *)(a4))->v);
        t2 = 0x1;
        if ((int)t1 >= (int)0x1) {
            t2 = t1;
        }
        (((struct o1CC_uint *)(a4))->v) = t2;
        t0 = 0x1CC;
    }
    return t0;
}
