/* Straight-line functions with calls and guards (batch gen_pe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c084570(int, int, int, int, int);
int FUN_0c0db0a0(int, int);
int nlPrintf(int, ...);
int FUN_0c0c0bda(int a4);
struct o21C_int { char p[0x21C]; int v; };
struct o238_int { char p[0x238]; int v; };
struct o238_uint { char p[0x238]; unsigned int v; };
struct o23C_int { char p[0x23C]; int v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o240_int { char p[0x240]; int v; };
struct o240_uint { char p[0x240]; unsigned int v; };
struct o244_int { char p[0x244]; int v; };
struct o244_uint { char p[0x244]; unsigned int v; };
struct o248_int { char p[0x248]; int v; };
struct o248_uint { char p[0x248]; unsigned int v; };


int FUN_0c0c0bda(int a4)
{
    register int t0;
    register int t156;
    register int t7;
    int t44;
    int t82;
    int t97;
    register int t167;
    register float u21;
    register float u32;
    register float u59;
    register float u70;

    t0 = (((struct o21C_int *)(a4))->v);
    if (t0 != 0) {
        t156 = t0;
        if (t0 != 1) {
        } else {
            if (((*(int *)0xC2497B0) & 0x4000000) != 0) {
                t7 = *(int *)0xC2497B0;
                if ((t7 & 0x100000) != 0) {
                    (((struct o240_uint *)(a4))->v) = (((((struct o240_int *)(a4))->v)) + 0x1);
                } else {
                    if ((t7 & 0x200000) != 0) {
                        (((struct o240_uint *)(a4))->v) = (((((struct o240_int *)(a4))->v)) - 1);
                    }
                }
                if (((*(int *)0xC2497B0) & 0x400000) != 0) {
                    if (((*(int *)0xC2497B0) & 0x4000000) != 0) {
                        u21 = ((*(float *)0xC248A74) - 0.099999994f);
                    } else {
                        u21 = ((*(float *)0xC248A74) - 0.00999999978f);
                    }
                    *(float *)0xC248A74 = u21;
                }
                if (((*(int *)0xC2497B0) & 0x800000) != 0) {
                    if (((*(int *)0xC2497B0) & 0x4000000) != 0) {
                        u32 = ((*(float *)0xC248A74) + 0.099999994f);
                    } else {
                        u32 = ((*(float *)0xC248A74) + 0.00999999978f);
                    }
                    *(float *)0xC248A74 = u32;
                }
            }
            t44 = *(int *)0xC2497B0;
            if ((0x40000 & t44) != 0) {
                if ((t44 & 0x100000) != 0) {
                    (((struct o244_uint *)(a4))->v) = (((((struct o244_int *)(a4))->v)) + 0x1);
                } else {
                    if ((t44 & 0x200000) != 0) {
                        (((struct o244_uint *)(a4))->v) = (((((struct o244_int *)(a4))->v)) - 1);
                    }
                }
                if (((*(int *)0xC2497B0) & 0x400000) != 0) {
                    if (((*(int *)0xC2497B0) & 0x4000000) != 0) {
                        u59 = ((*(float *)0xC248A78) - 0.099999994f);
                    } else {
                        u59 = ((*(float *)0xC248A78) - 0.00999999978f);
                    }
                    *(float *)0xC248A78 = u59;
                }
                if (((*(int *)0xC2497B0) & 0x800000) != 0) {
                    if ((0x4000000 & (*(int *)0xC2497B0)) != 0) {
                        u70 = ((*(float *)0xC248A78) + 0.099999994f);
                    } else {
                        u70 = ((*(float *)0xC248A78) + 0.00999999978f);
                    }
                    *(float *)0xC248A78 = u70;
                }
            }
            t82 = *(int *)0xC2497B0;
            if ((0x20000 & t82) != 0) {
                if ((t82 & 0x100000) != 0) {
                    (((struct o248_uint *)(a4))->v) = (((((struct o248_int *)(a4))->v)) + 0x1);
                } else {
                    if ((t82 & 0x200000) != 0) {
                        (((struct o248_uint *)(a4))->v) = (((((struct o248_int *)(a4))->v)) - 1);
                    }
                }
            }
            t97 = *(int *)0xC2497B0;
            if ((0x4060000 & t97) == 0) {
                if ((0x400000 & t97) != 0) {
                    (((struct o238_uint *)(a4))->v) = (((((struct o238_int *)(a4))->v)) + 0x1);
                } else {
                    if ((0x800000 & t97) != 0) {
                        (((struct o238_uint *)(a4))->v) = (((((struct o238_int *)(a4))->v)) - 1);
                    } else {
                        if ((0x100000 & t97) != 0) {
                            (((struct o23C_uint *)(a4))->v) = (((((struct o23C_int *)(a4))->v)) + 0x1);
                        } else {
                            if ((t97 & 0x200000) != 0) {
                                (((struct o23C_uint *)(a4))->v) = (((((struct o23C_int *)(a4))->v)) - 1);
                            }
                        }
                    }
                }
            }
            FUN_0c0db0a0(0x32, 0x1B);
            nlPrintf(0xC1E39D4);
            FUN_0c0db0a0(0x32, 0x20);
            nlPrintf(0xC1E39E0, (((((struct o238_int *)(a4))->v))));
            FUN_0c0db0a0(0x32, 0x21);
            nlPrintf(0xC1E39E8, (((((struct o23C_int *)(a4))->v))));
            FUN_0c0db0a0(0x32, 0x22);
            nlPrintf(0xC1E39F0, (((((struct o240_int *)(a4))->v))));
            FUN_0c0db0a0(0x32, 0x23);
            nlPrintf(0xC1E39F8, (((((struct o244_int *)(a4))->v))));
            FUN_0c0db0a0(0x32, 0x24);
            nlPrintf(0xC1E3A00, (((((struct o248_int *)(a4))->v))));
            FUN_0c0db0a0(0x32, 0x25);
            nlPrintf(0xC1E3A08, (*(float *)0xC248A74));
            FUN_0c0db0a0(0x32, 0x26);
            nlPrintf(0xC1E3A14, (*(float *)0xC248A78));
            t156 = (FUN_0c084570(((((struct o238_int *)(a4))->v)), ((((struct o23C_int *)(a4))->v)), ((((struct o240_int *)(a4))->v)), ((((struct o244_int *)(a4))->v)), (((((struct o248_int *)(a4))->v)))));
        }
        t167 = t156;
    } else {
        (((struct o238_uint *)(a4))->v) = (unsigned char)((int)(*(int *)0xC248A70) >> 8);
        (((struct o23C_uint *)(a4))->v) = (unsigned char)(*(signed char *)0xC248A70);
        (((struct o240_uint *)(a4))->v) = (*(int *)0xC248A64);
        (((struct o244_uint *)(a4))->v) = (*(int *)0xC248A68);
        (((struct o248_uint *)(a4))->v) = (*(int *)0xC248A6C);
        t167 = 0x248;
    }
    return t167;
}
