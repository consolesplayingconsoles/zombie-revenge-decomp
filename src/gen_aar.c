/* Straight-line functions with calls and guards (batch gen_aar): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0b1606(void);
int FUN_0c0b16cc(void);
int FUN_0c0b17dc(void);
int FUN_0c0b18e0(void);
int FUN_0c0b19fc(void);
int FUN_0c0b1b3c(void);
int FUN_0c0b1c64(void);
int FUN_0c0b1d80(void);
int FUN_0c0b1ec8(void);
int FUN_0c0b1fb4(void);
int FUN_0c0e19f2(void);
int FUN_0c0b1330(int a4);

int FUN_0c0b1330(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x80));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    if (t0 != 8) {
                                        return t0;
                                    }
                                    t0 = *(int *)((a4 + 0xA0));
                                    *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
                                    if ((int)(t0 - 1) <= 0) {
                                        FUN_0c0b1ec8();
                                        FUN_0c0b1fb4();
                                        return FUN_0c0e19f2();
                                    }
                                    return 0xA0;
                                }
                                t0 = *(int *)((a4 + 0xA0));
                                *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
                                t1 = 0xA0;
                                if ((int)(t0 - 1) <= 0) {
                                    FUN_0c0b1d80();
                                    *(unsigned int *)((a4 + 0xA0)) = 0x26C;
                                    *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                                    t1 = 0x80;
                                }
                                return t1;
                            }
                            t0 = *(int *)((a4 + 0xA0));
                            *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
                            t1 = 0xA0;
                            if ((int)(t0 - 1) <= 0) {
                                FUN_0c0b1c64();
                                *(unsigned int *)((a4 + 0xA0)) = 0x17C;
                                *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                                t1 = 0x80;
                            }
                            return t1;
                        }
                        t0 = *(int *)((a4 + 0xA0));
                        *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
                        t1 = 0xA0;
                        if ((int)(t0 - 1) <= 0) {
                            FUN_0c0b1b3c();
                            *(unsigned int *)((a4 + 0xA0)) = 0xF0;
                            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                            t1 = 0x80;
                        }
                        return t1;
                    }
                    t0 = *(int *)((a4 + 0xA0));
                    *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
                    t1 = 0xA0;
                    if ((int)(t0 - 1) <= 0) {
                        FUN_0c0b19fc();
                        *(unsigned int *)((a4 + 0xA0)) = 0x244;
                        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                        t1 = 0x80;
                    }
                    return t1;
                }
                t0 = *(int *)((a4 + 0xA0));
                *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
                t1 = 0xA0;
                if ((int)(t0 - 1) <= 0) {
                    FUN_0c0b18e0();
                    *(unsigned int *)((a4 + 0xA0)) = 0x262;
                    *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                    t1 = 0x80;
                }
                return t1;
            }
            t0 = *(int *)((a4 + 0xA0));
            *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
            t1 = 0xA0;
            if ((int)(t0 - 1) <= 0) {
                FUN_0c0b17dc();
                *(unsigned int *)((a4 + 0xA0)) = 0x258;
                *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                t1 = 0x80;
            }
            return t1;
        }
    } else {
        FUN_0c0b1606();
        *(unsigned int *)((a4 + 0xA0)) = 0x12C;
        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
    }
    t0 = *(int *)((a4 + 0xA0));
    *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
    t1 = 0xA0;
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0b16cc();
        *(unsigned int *)((a4 + 0xA0)) = 0x26C;
        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
        t1 = 0x80;
    }
    return t1;
}
