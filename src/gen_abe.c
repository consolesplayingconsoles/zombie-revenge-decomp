/* Straight-line functions with calls and guards (batch gen_abe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e3630(int, int, int);
int FUN_0c0e36ac(void);
int FUN_0c0e4428(int);
int FUN_0c0e3dc4(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };


int FUN_0c0e3dc4(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC94C828;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    if ((unsigned char)t0 != 4) {
                        if ((unsigned char)t0 == 5) {
                            if (((((struct o4_int *)0xA08000B0)->v)) != 0) {
                                return 0x1;
                            }
                            (((struct o0_uint *)0xA08000B0)->v) = 0x0;
                            (((struct o0_uint *)0xC94C828)->v) = 0x0;
                            return 0x0;
                        }
                        return (unsigned char)t0;
                    }
                } else {
                    t0 = FUN_0c0e36ac();
                    if (t0 != 0) {
                        return 0x1;
                    }
                    (((struct o0_uint *)0xC94C828)->v) = (((((struct o0_int *)0xC94C828)->v)) + 0x1);
                }
                if ((((((struct o0_int *)0xC94C828)->v)) & 0xFF00) == 0) {
                    t0 = 0x0;
                    for (;;) {
                        if ((int)t0 >= (int)((((struct o4_int *)0xC94C828)->v))) {
                            return 0x1;
                        }
                        t1 = (((struct o14_int *)0xC94C828)->v);
                        (((struct o14_uint *)0xC94C828)->v) = (t1 + 0x4);
                        t2 = (((struct o10_int *)0xC94C828)->v);
                        (((struct o10_uint *)0xC94C828)->v) = (t2 + 0x4);
                        *(unsigned int *)((((t1 + 0x4) - 4) + 0x0)) = (*(int *)((((t2 + 0x4) - 4) + 0x0)));
                        t1 = (((struct o8_int *)0xC94C828)->v);
                        (((struct o8_uint *)0xC94C828)->v) = (t1 - 4);
                        if ((t1 - 4) == 0) {
                            break;
                        }
                        t0 = (t0 + 0x1);
                    }
                }
                (((struct o0_uint *)0xA08000B0)->v) = 0x1;
            } else {
                if (((((struct o4_int *)0xA08000B0)->v)) == 0) {
                    return 0x1;
                }
                if (((((struct oC_int *)0xC94C828)->v)) != 0) {
                    FUN_0c0e3630(((((struct o14_int *)0xC94C828)->v)), (((((struct o14_int *)0xC94C828)->v)) + ((((struct o8_int *)0xC94C828)->v))), ((((struct oC_int *)0xC94C828)->v)));
                }
            }
        } else {
            for (;;) {
                t0 = FUN_0c0e4428(0x18A0);
                if (t0 != -1) {
                    break;
                }
            }
        }
        (((struct o0_uint *)0xC94C828)->v) = (((((struct o0_int *)0xC94C828)->v)) + 0x1);
        return 0x1;
    }
    return 0xFFFFFFFF;
}
