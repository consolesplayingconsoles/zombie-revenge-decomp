/* Straight-line functions with calls and guards (batch gen_abf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c086b70(void);
int FUN_0c0cc3f8(int, int, int, int, int);
int FUN_0c0b86cc(int a4, int a5, int a6, int a7);

int FUN_0c0b86cc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned int *)0xC23ED6C = 0x1;
    *(unsigned int *)0xC23ED70 = 0x0;
    *(unsigned int *)0xC23EDE4 = 0x0;
    *(unsigned int *)0xC23EDE0 = 0x0;
    *(unsigned int *)0xC23ECFC = (((((*(int *)0xC23ED50) << 2) << 2) << 1) + 0xC2087EC);
    *(unsigned int *)0xC23ED44 = 0x0;
    *(unsigned int *)0xC23A190 = 0x0;
    *(unsigned int *)0xC23A18C = ((*(int *)0xC23A18C) + 0x1);
    t0 = 0xC23A18C;
    if ((*(int *)0xC23ED44) != 0) {
        FUN_0c086b70();
        *(unsigned int *)0xC23ED58 = (*(int *)0xC23ED50);
        *(unsigned int *)0xC23A18C = 0x1;
        if ((*(int *)0xC23ED48) == 31) {
            *(unsigned int *)0xC23ED50 = (*(int *)0xC23ED54);
            *(unsigned int *)0xC23ED54 = 0x0;
        } else {
            *(unsigned int *)0xC23ED50 = (unsigned char)(*(short *)(((*(int *)0xC23ECFC) + 0x4)));
        }
        *(unsigned int *)0xC23A190 = 0x0;
        *(unsigned int *)0xC23ED44 = 0x0;
        *(unsigned int *)0xC23ED48 = 0x0;
        t1 = *(int *)0xC23ED50;
        *(unsigned int *)0xC23ECFC = ((((t1 << 2) << 2) << 1) + 0xC2087EC);
        t2 = *(short *)((0x4 + ((((t1 << 2) << 2) << 1) + 0xC2087EC)));
        *(unsigned int *)0xC23ED00 = (0xC2087EC + ((((unsigned char)t2 << 2) << 2) << 1));
        t0 = (0xC2087EC + ((((unsigned char)t2 << 2) << 2) << 1));
    } else {
        t1 = 0xC23EDE0;
    }
    t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC23ECFC) + 0x10)))))(t0, t1, a6, a7);
    t0 = *(int *)0xC2498F4;
    if ((t0 & 8) == 0) {
        return t0;
    }
    t0 = *(int *)0xC23ED50;
    if (t0 != 9) {
        t1 = t0;
        if (t0 == 11) {
        } else {
            t2 = t0;
            if (t0 == 12) {
            } else {
                t0 = FUN_0c0cc3f8(0x828A9, 0x0, 0x0, 0x0, 0xC23ECFC);
                *(unsigned int *)0xC23A260 = 0x3;
                t2 = t0;
            }
            t1 = t2;
        }
        return t1;
    }
    if ((*(int *)0xC2041EC) != 0) {
        if ((*(int *)0xC2041F0) != 0) {
            t0 = 0x828A9;
            if ((*(int *)0xC522D6C) == 4) {
                t0 = 0x2A;
            }
            t1 = FUN_0c0cc3f8(t0, 0x0, 0x0, 0x0, 0xC23ECFC);
            if ((*(int *)0xC204994) != 0) {
                t0 = *(short *)0xC2497D8;
                if (((unsigned short)t0 & 8) == 0) {
                    if ((int)(*(int *)0xC23EABC) > 0) {
                        *(unsigned int *)0xC23A180 = 0x2;
                        *(unsigned int *)0xC23ED50 = 0x1;
                        *(unsigned int *)0xC23ED44 = 0x0;
                        *(unsigned int *)0xC23ED48 = 0x0;
                        *(unsigned int *)0xC23A184 = 0x0;
                        *(unsigned int *)0xC23A190 = 0x0;
                        *(unsigned int *)0xC23A18C = 0x0;
                        *(unsigned int *)0xC249890 = 0x0;
                        *(unsigned int *)0xC2475B0 = 0x0;
                        return 0xC23A180;
                    }
                    return (unsigned short)t0;
                }
                return (unsigned short)t0;
            }
            if ((int)(*(int *)0xC23EABC) > 0) {
                *(unsigned int *)0xC23A180 = 0x2;
                *(unsigned int *)0xC23ED50 = 0x1;
                *(unsigned int *)0xC23ED44 = 0x0;
                *(unsigned int *)0xC23ED48 = 0x0;
                *(unsigned int *)0xC23A184 = 0x0;
                *(unsigned int *)0xC23A190 = 0x0;
                *(unsigned int *)0xC23A18C = 0x0;
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
    return (FUN_0c0cc3f8(t0, 0x0, 0x0, 0x0, 0xC23ECFC));
}
