/* Straight-line functions with calls and guards (batch gen_mg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c086b70(void);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0b8700(int a4, int a5, int a6, int a7);

int FUN_0c0b8700(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = a4;
    if (((((struct o0_int *)0xC23ED44)->v)) != 0) {
        FUN_0c086b70();
        (((struct o14_uint *)0xC23ED44)->v) = ((((struct oC_int *)0xC23ED44)->v));
        (((struct oC_uint *)0xC23A180)->v) = 0x1;
        if (((((struct o4_int *)0xC23ED44)->v)) == 31) {
            (((struct oC_uint *)0xC23ED44)->v) = ((((struct o10_int *)0xC23ED44)->v));
            (((struct o10_uint *)0xC23ED44)->v) = 0x0;
        } else {
            (((struct oC_uint *)0xC23ED44)->v) = (unsigned char)(*(short *)((((((struct o0_int *)0xC23ECFC)->v)) + 0x4)));
        }
        (((struct o10_uint *)0xC23A180)->v) = 0x0;
        (((struct o0_uint *)0xC23ED44)->v) = 0x0;
        (((struct o4_uint *)0xC23ED44)->v) = 0x0;
        t1 = (((struct oC_int *)0xC23ED44)->v);
        (((struct o0_uint *)0xC23ECFC)->v) = ((((t1 << 2) << 2) << 1) + 0xC2087EC);
        t2 = *(short *)((0x4 + ((((t1 << 2) << 2) << 1) + 0xC2087EC)));
        (((struct o4_uint *)0xC23ECFC)->v) = (0xC2087EC + ((((unsigned char)t2 << 2) << 2) << 1));
        t0 = (0xC2087EC + ((((unsigned char)t2 << 2) << 2) << 1));
    }
    t1 = ((int (*)(int, int, int, int))((*(int *)((((((struct o0_int *)0xC23ECFC)->v)) + 0x10)))))(t0, a5, a6, a7);
    t0 = *(int *)0xC2498F4;
    if ((t0 & 8) == 0) {
        return t0;
    }
    t0 = (((struct oC_int *)0xC23ED44)->v);
    if (t0 != 9) {
        t1 = t0;
        if (t0 == 11) {
        } else {
            t2 = t0;
            if (t0 == 12) {
            } else {
                t0 = FUN_0c0cc3f8(0x828A9, 0x0, 0x0, 0x0);
                *(unsigned int *)0xC23A260 = 0x3;
                t2 = t0;
            }
            t1 = t2;
        }
        return t1;
    }
    if (((((struct o0_int *)0xC2041EC)->v)) != 0) {
        if (((((struct o4_int *)0xC2041EC)->v)) != 0) {
            t0 = 0x828A9;
            if ((*(int *)0xC522D6C) == 4) {
                t0 = 0x2A;
            }
            t1 = FUN_0c0cc3f8(t0, 0x0, 0x0, 0x0);
            if ((*(int *)0xC204994) != 0) {
                t0 = *(short *)0xC2497D8;
                if (((unsigned short)t0 & 8) == 0) {
                    if ((int)(*(int *)0xC23EABC) > 0) {
                        (((struct o0_uint *)0xC23A180)->v) = 0x2;
                        (((struct oC_uint *)0xC23ED44)->v) = 0x1;
                        (((struct o0_uint *)0xC23ED44)->v) = 0x0;
                        (((struct o4_uint *)0xC23ED44)->v) = 0x0;
                        (((struct o4_uint *)0xC23A180)->v) = 0x0;
                        (((struct o10_uint *)0xC23A180)->v) = 0x0;
                        (((struct oC_uint *)0xC23A180)->v) = 0x0;
                        *(unsigned int *)0xC249890 = 0x0;
                        *(unsigned int *)0xC2475B0 = 0x0;
                        return 0xC23A180;
                    }
                    return (unsigned short)t0;
                }
                return (unsigned short)t0;
            }
            if ((int)(*(int *)0xC23EABC) > 0) {
                (((struct o0_uint *)0xC23A180)->v) = 0x2;
                (((struct oC_uint *)0xC23ED44)->v) = 0x1;
                (((struct o0_uint *)0xC23ED44)->v) = 0x0;
                (((struct o4_uint *)0xC23ED44)->v) = 0x0;
                (((struct o4_uint *)0xC23A180)->v) = 0x0;
                (((struct o10_uint *)0xC23A180)->v) = 0x0;
                (((struct oC_uint *)0xC23A180)->v) = 0x0;
                *(unsigned int *)0xC249890 = 0x0;
                *(unsigned int *)0xC2475B0 = 0x0;
                return 0xC23A180;
            }
            return t1;
        }
    }
    t0 = 0x28A9;
    if ((*(int *)0xC522D6C) == 4) {
        t0 = 0x3A;
    }
    return (FUN_0c0cc3f8(t0, 0x0, 0x0, 0x0));
}
