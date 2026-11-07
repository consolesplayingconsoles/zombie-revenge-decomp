/* Straight-line functions with calls and guards (batch gen_afm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c08696c(int);
int FUN_0c04bc68(int a4, int a5);
struct o20C_int { char p[0x20C]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o29C_int { char p[0x29C]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o330_int { char p[0x330]; int v; };
struct o394_int { char p[0x394]; int v; };
struct o394_uint { char p[0x394]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };


int FUN_0c04bc68(int a4, int a5)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t2 = 0x394;
    if (((((struct o394_int *)(a4))->v)) == 0) {
        t3 = 0x330;
        if ((int)((((struct o330_int *)(a4))->v)) <= (int)0x2) {
            if (((((struct oC0_int *)(a4))->v)) == 2) {
                t4 = 0x20C;
                if ((((((struct o20C_int *)(a4))->v)) & 0x1) != 0) {
                    t5 = 0x29C;
                    if (((int)((((struct o29C_int *)(a4))->v)) <= (int)0x2) && (t0 = *(int *)((a5 + 0x10)), (unsigned int)t0 > (unsigned int)0x14)) {
                        FUN_0c08696c(a4);
                        (((struct o210_uint *)(a4))->v) = 0x71;
                        (((struct o2C4_uint *)(a4))->v) = 0x51A;
                        (((struct o2CC_uint *)(a4))->v) = 0x1;
                        (((struct o2D4_uint *)(a4))->v) = 0x2;
                        t5 = 0x2D4;
                    }
                    t4 = t5;
                }
                t0 = t4;
            } else {
                t4 = (((struct o20C_int *)(a4))->v);
                t5 = t4;
                if (((t4 & 5) != 0) && (t1 = *(int *)((a5 + 0x4)), (t1 & 0x200) != 0)) {
                    t1 = 0x32;
                    if ((unsigned int)(*(int *)((a5 + 0x14))) > (unsigned int)0x32) {
                        FUN_0c08696c(a4);
                        t4 = (((struct oC0_int *)(a4))->v);
                        if (t4 != 4) {
                            t6 = t4;
                            if (t4 != 0) {
                            } else {
                                (((struct o20C_uint *)(a4))->v) = 0x100;
                                (((struct o210_uint *)(a4))->v) = 0x73;
                                (((struct o2C4_uint *)(a4))->v) = 0x3B4;
                                (((struct o2CC_uint *)(a4))->v) = 0x1;
                                (((struct o394_uint *)(a4))->v) = 0x1;
                                t6 = 0x394;
                            }
                            t4 = t6;
                        } else {
                            (((struct o20C_uint *)(a4))->v) = 0x100;
                            (((struct o210_uint *)(a4))->v) = 0x73;
                            (((struct o2C4_uint *)(a4))->v) = 0x479;
                            (((struct o2CC_uint *)(a4))->v) = 0x1;
                            (((struct o394_uint *)(a4))->v) = 0x1;
                            t4 = 0x394;
                        }
                        t1 = t4;
                    }
                    t5 = t1;
                }
                t0 = t5;
            }
            t3 = t0;
        }
        t2 = t3;
    }
    return t2;
}
