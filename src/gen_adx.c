/* Straight-line functions with calls and guards (batch gen_adx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXPD_GetStat(int);
int ADXB_ExecOneAiff8(int a4, int a5, int a6, int a7);
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o90_int { char p[0x90]; int v; };
struct o94_int { char p[0x94]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };


int ADXB_ExecOneAiff8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;

    t0 = *(int *)(((a4 + 0x50) + 0x0));
    t1 = a7;
    if ((*(int *)((a4 + 0x4))) == 1) {
        t2 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t2 == 0) {
            t2 = ((int (*)(int, int, int, int))(((((struct o88_int *)(a4))->v))))(((((struct o8C_int *)(a4))->v)), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t2 = *(int *)(((a4 + 0x50) + 0x18));
            t3 = *(int *)(((a4 + 0x50) + 0x20));
            t4 = *(int *)(((a4 + 0x50) + 0x4));
            t5 = (t2 - t3);
            if ((int)(t2 - t3) > (int)(*(int *)(((a4 + 0x50) + 0x24)))) {
                t5 = (*(int *)(((a4 + 0x50) + 0x24)));
            }
            t2 = *(int *)(((a4 + 0x50) + 0x14));
            t3 = t5;
            if ((int)t5 > (int)t4) {
                t3 = (*(int *)(((a4 + 0x50) + 0x4)));
            }
            t4 = *(int *)(((a4 + 0x50) + 0x20));
            if ((*(signed char *)((a4 + 0xE))) == 2) {
                t5 = *(int *)(((a4 + 0x50) + 0x1C));
                t6 = *(int *)(((a4 + 0x50) + 0x20));
                t7 = 0x0;
                if ((int)t3 > 0) {
                    t8 = 0x0;
                    t9 = 0x0;
                    t10 = 0x0;
                    for (;;) {
                        *(unsigned short *)(((((t4 << 1) + t2) + t9) + 0x0)) = ((unsigned char)(*(signed char *)((t8 + t0))) << 8);
                        t11 = *(signed char *)((((t8 + 0x1) + t0) + 0x0));
                        t10 = (t10 + 0x1);
                        t8 = (t8 + 0x2);
                        *(unsigned short *)(((((t5 + t6) << 1) + t2) + t9)) = ((unsigned char)t11 << 8);
                        t9 = (t9 + 0x2);
                        if ((int)t10 >= (int)t3) {
                            break;
                        }
                    }
                    t7 = t10;
                }
                t5 = t7;
            } else {
                t6 = 0x0;
                if ((int)t3 > 0) {
                    t7 = (0x0 + t0);
                    t0 = (0x0 + ((t4 << 1) + t2));
                    t2 = 0x0;
                    for (;;) {
                        t4 = *(signed char *)((t7 + 0x0));
                        t7 = (t7 + 0x1);
                        t2 = (t2 + 0x1);
                        *(unsigned short *)((t0 + 0x0)) = ((unsigned char)t4 << 8);
                        t0 = (t0 + 0x2);
                        if ((int)t2 >= (int)t3) {
                            break;
                        }
                    }
                    t6 = t2;
                }
                t5 = t6;
            }
            (((struct oA0_uint *)(a4))->v) = t3;
            (((struct oA4_uint *)(a4))->v) = (t3 * (*(signed char *)((a4 + 0xE))));
            *(unsigned int *)((a4 + 0x4)) = 0x2;
            t0 = t5;
        }
        t1 = t0;
    }
    t0 = *(int *)((a4 + 0x4));
    t2 = t0;
    if (t0 == 2) {
        t0 = ((int (*)(int, int, int, int))(((((struct o90_int *)(a4))->v))))(((((struct o94_int *)(a4))->v)), ((((struct oA4_int *)(a4))->v)), ((((struct oA0_int *)(a4))->v)), t1);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t2 = t0;
    }
    return t2;
}
