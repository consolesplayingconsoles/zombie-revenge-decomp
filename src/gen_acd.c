/* Straight-line functions with calls and guards (batch gen_acd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0164d6(void);
int FUN_0c016530(void);
int FUN_0c016576(void);
int FUN_0c0165bc(void);
int FUN_0c016602(void);
int FUN_0c0166c4(void);
int FUN_0c0168b0(void);
int FUN_0c086b70(void);
int FUN_0c0b25d0(void);
int FUN_0c0cc6ac(void);
int FUN_0c0cf908(void);
int FUN_0c016728(void);

int FUN_0c016728(void)
{
    int t0;
    register int t1;

    if (((*(int *)0xC23A1A8) & 1) != 0) {
        *(volatile int *)0xC2497E0;
    }
    if ((*(int *)0xC23ED44) == 0) {
        t0 = ((int (*)(void))((*(int *)(((*(int *)0xC23ECFC) + 0x10)))))();
        return FUN_0c0168b0();
    }
    FUN_0c0cc6ac();
    FUN_0c086b70();
    FUN_0c0b25d0();
    *(unsigned int *)0xC23ED58 = (*(int *)0xC23ED50);
    *(unsigned int *)0xC23A184 = 0x1;
    *(unsigned int *)0xC23ED60 = 0x0;
    *(unsigned int *)0xC23A19C = ((*(int *)0xC23A19C) & 0xFFFF0000);
    t0 = *(int *)0xC23ED48;
    t1 = *(int *)0xC23ED54;
    if (t0 != 7) {
        if (t0 != 8) {
            if ((t0 != 5) && (t0 != 6)) {
                if ((t0 != 9) && (t0 != 10)) {
                    if (t0 != 14) {
                        if (t0 != 13) {
                            if (t0 != 11) {
                                if (t0 != 12) {
                                    if (t0 != 31) {
                                        *(unsigned int *)0xC23ED50 = (unsigned char)(*(short *)((0x4 + (*(int *)0xC23ECFC))));
                                    } else {
                                        *(unsigned int *)0xC23ED50 = t1;
                                        *(unsigned int *)0xC23ED54 = 0x0;
                                    }
                                } else {
                                    *(unsigned int *)0xC23ED50 = (unsigned char)(*(short *)(((*(int *)0xC23ECFC) + 0x4)));
                                }
                                FUN_0c0164d6();
                            } else {
                                *(unsigned int *)0xC23ED50 = (unsigned char)(*(short *)(((*(int *)0xC23ECFC) + 0x4)));
                                *(unsigned int *)0xC23ED54 = 0x0;
                                FUN_0c0166c4();
                            }
                        } else {
                            *(unsigned int *)0xC23ED98 = 0x0;
                            *(unsigned int *)0xC23ED50 = 0x0;
                            *(unsigned int *)0xC23A190 = 0x0;
                        }
                    } else {
                        *(unsigned int *)0xC23ED50 = (unsigned char)(*(short *)(((*(int *)0xC23ECFC) + 0x4)));
                        *(unsigned int *)0xC23ED54 = 0x0;
                        FUN_0c016602();
                    }
                } else {
                    *(unsigned int *)0xC23ED50 = (unsigned char)(*(short *)(((*(int *)0xC23ECFC) + 0x4)));
                    *(unsigned int *)0xC23ED54 = 0x0;
                    FUN_0c0165bc();
                }
            } else {
                *(unsigned int *)0xC23ED50 = t1;
                *(unsigned int *)0xC23ED54 = 0x0;
                FUN_0c016530();
            }
        } else {
            *(unsigned int *)0xC23ED50 = (unsigned char)(*(short *)(((*(int *)0xC23ECFC) + 0x4)));
            FUN_0c016576();
        }
    } else {
        *(unsigned int *)0xC23ED50 = t1;
        *(unsigned int *)0xC23ED54 = 0x0;
        FUN_0c016576();
    }
    return FUN_0c0cf908();
}
