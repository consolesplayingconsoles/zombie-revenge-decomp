/* Straight-line functions with calls and guards (batch gen_aei): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c082c64(int);
int FUN_0c082b76(int a4, int a5, int a6, int a7);
struct o24C_int { char p[0x24C]; int v; };
struct o3F4_uint { char p[0x3F4]; unsigned int v; };
struct o3FC_int { char p[0x3FC]; int v; };
struct o3FC_uint { char p[0x3FC]; unsigned int v; };
struct o41C_int { char p[0x41C]; int v; };
struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };



int FUN_0c082b76(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)(((a4 << 2) + 0xC247CAC));
    *(unsigned int *)0xC247CF8 = a4;
    t1 = (((struct o24C_int *)(t0))->v);
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 3) {
                if (t1 != 2) {
                    if (t1 != 4) {
                        t2 = t1;
                        if (t1 != 5) {
                        } else {
                            t1 = (((struct o41C_int *)(t0))->v);
                            t3 = ((int (*)(int, int, int, int))((*(int *)((t1 + 0x0)))))((*(int *)((t1 + 0x4))), (*(int *)((t1 + 0x8))), a6, a7);
                            t1 = (((struct o3FC_int *)(t0))->v);
                            (((struct o3FC_uint *)(t0))->v) = (t1 - 1);
                            if ((t1 - 1) == 0) {
                                (((struct o0_uint *)0xC23ED44)->v) = 0x1;
                                (((struct o4_uint *)0xC23ED44)->v) = 0x0;
                            }
                            t2 = 0x3FC;
                        }
                        return t2;
                    }
                    t1 = (((struct o41C_int *)(t0))->v);
                    t2 = ((int (*)(int, int, int, int))((*(int *)((t1 + 0x0)))))((*(int *)((t1 + 0x4))), (*(int *)((t1 + 0x8))), a6, a7);
                    t2 = (((struct o3FC_int *)(t0))->v);
                    (((struct o3FC_uint *)(t0))->v) = (t2 - 1);
                    if ((t2 - 1) == 0) {
                        return FUN_0c082c64((t1 + 0x10));
                    }
                    return 0x3FC;
                }
            } else {
                t1 = (((struct o3FC_int *)(t0))->v);
                (((struct o3FC_uint *)(t0))->v) = (t1 - 1);
                if ((int)(t1 - 1) <= 0) {
                    (((struct o0_uint *)0xC23ED44)->v) = 0x1;
                    (((struct o4_uint *)0xC23ED44)->v) = 0x0;
                }
            }
            t1 = (((struct o41C_int *)(t0))->v);
            t2 = *(int *)((t1 + 0x4));
            t3 = *(int *)((t1 + 0x0));
            t4 = *(int *)((t1 + 0x8));
            return ((int (*)(int, int, int, int))(t3))(t2, t4, a6, a7);
        }
        t1 = (((struct o3FC_int *)(t0))->v);
        (((struct o3FC_uint *)(t0))->v) = (t1 - 1);
        if ((t1 - 1) == 0) {
            (((struct o0_uint *)0xC23ED44)->v) = 0x1;
            (((struct o4_uint *)0xC23ED44)->v) = 0x0;
        }
        return 0x3FC;
    }
    (((struct o3F4_uint *)(t0))->v) = 0x0;
    t1 = *(int *)((((*(int *)(((0x400 + t0) + 0x0))) << 2) + (*(int *)(((*(int *)0xC23ECFC) + 0x14)))));
    FUN_0c082c64(t1);
    t0 = *(int *)((t1 + 0x4));
    t2 = *(int *)((t1 + 0x0));
    t3 = *(int *)((t1 + 0x8));
    return ((int (*)(int, int, int, int))(t2))(t0, t3, a6, a7);
}
