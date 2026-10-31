/* Straight-line functions with calls and guards (batch gen_hr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c016ac0(void);
extern int FUN_0c01993e();
int FUN_0c01a874(void);
int FUN_0c0211a0(void);
int FUN_0c04fb24(void);
int FUN_0c0500ee(int);
int FUN_0c057fd4(int);
int FUN_0c084bf6(int, int);
int FUN_0c0a59f8(int);
int FUN_0c0a5a7a(int);
int FUN_0c0bd65c(int);
int FUN_0c0cc3f8(int);
int FUN_0c0de310(float, float, float);
int FUN_0c0e5dc0(void);
int __init_target_cc_f(void);
int FUN_0c01b0b4(int a4, int a5, int a6);

int FUN_0c01b0b4(int a4, int a5, int a6)
{
    register int t8;
    register int t20;
    register int t34;
    register int t53;
    register int t59;
    register int t64;
    register int t143;
    int t163;
    register int t173;
    register int t174;
    register int t185;
    register int t36;

    if ((*(int *)0xC23EDB0) == 1) {
        *(unsigned int *)((a4 + 0x44)) = (*(int *)0xC23ED9C);
        *(unsigned int *)0xC23ED9C = 0x3;
        return 0x44;
    }
    t8 = *(int *)0xC23ED50;
    if (((*(int *)0xC23A1A8) & 0x101) != 0) {
    } else {
        if ((*(int *)0xC204998) != 1) {
            if ((int)t8 < (int)0x63) {
                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 1);
            }
        } else {
            if ((*(int *)0xC2049A0) == 0) {
                t20 = *(int *)0xC1FF890;
                if ((int)t20 < 0) {
                    if ((int)t8 < (int)0x63) {
                        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 1);
                    }
                } else {
                    *(unsigned int *)0xC1FF890 = (t20 - 1);
                    if ((int)(t20 - 1) < 0) {
                        *(unsigned int *)0xC1FF898 = 0x0;
                    }
                }
            }
            if ((int)(*(int *)0xC1FF894) >= 0) {
                t34 = *(int *)0xC1FF894;
                *(unsigned int *)0xC1FF894 = (t34 - 1);
                if (((*(int *)0xC20499C) != 0) && (t36 = *(int *)0xC23EDC0, t36 == 4)) {
                    if ((int)(t34 - 1) < 0) {
                        FUN_0c0bd65c(0x0);
                        FUN_0c0a59f8(0x0);
                        FUN_0c0a5a7a(0x0);
                        *(unsigned int *)0xC1FF89C = 0x0;
                    } else {
                        if ((int)(t34 - 1) < (int)0xB4) {
                            t53 = 0x1;
                            if (((*(int *)0xC1FF894) & 16) == 0) {
                                t53 = 0x0;
                            }
                            FUN_0c0bd65c(t53);
                        } else {
                            if ((int)(t34 - 1) < (int)0x12C) {
                                t59 = 0x1;
                                if (((*(int *)0xC1FF894) & 8) == 0) {
                                    t59 = 0x0;
                                }
                                FUN_0c0bd65c(t59);
                            } else {
                                if ((int)(t34 - 1) < (int)0x258) {
                                    t64 = 0x1;
                                    if (((*(int *)0xC1FF894) & 4) == 0) {
                                        t64 = 0x0;
                                    }
                                    FUN_0c0bd65c(t64);
                                }
                            }
                        }
                    }
                } else {
                    if ((int)(t34 - 1) < 0) {
                        *(unsigned int *)0xC1FF8A0 = 0x0;
                    }
                }
            }
        }
    }
    if (((*(int *)0xC23A1A8) & 0x101) == 0) {
        if ((*(int *)0xC23ED50) == 52) {
            if ((*(int *)0xC1EFD5C) != 0) {
                t143 = *(int *)0xC1EFD58;
                *(unsigned int *)0xC1EFD58 = (t143 - 1);
                if ((int)(t143 - 1) < 0) {
                    *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x200);
                }
            }
        } else {
            *(unsigned int *)0xC1EFD5C = 0x0;
        }
    }
    *(volatile int *)((a4 + 0x34));
    *(unsigned int *)0xC23EDA4 = (FUN_0c0e5dc0());
    t163 = *(int *)0xC23ED5C;
    if ((0x40 & t163) != 0) {
        *(unsigned int *)0xC23ED9C = 0xF;
        return FUN_0c084bf6((*(int *)0xC23ED90), (*(int *)0xC23ED94));
    }
    if ((0x10 & t163) != 0) {
        *(unsigned int *)0xC23ED9C = 0x5;
        return FUN_0c084bf6((*(int *)0xC23ED90), (*(int *)0xC23ED94));
    }
    if ((t163 & 0x10000) != 0) {
        *(unsigned int *)0xC23ED44 = 0x1;
        FUN_0c0de310(0.0f, 0.0f, 0.0f);
        t173 = *(short *)(((*(int *)0xC23ED00) + 0x0));
        if (t173 != 2) {
            if (t173 != 1) {
                if (t173 != 0) {
                    t174 = ((int (*)(int, int))(FUN_0c01993e))(a4, 0xC23ED48);
                    FUN_0c016ac0();
                    return FUN_0c01a874();
                }
                *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x40007);
                *(unsigned int *)0xC23ED48 = 0xE;
                return t173;
            }
            *(unsigned int *)0xC23ED9C = 0x13;
            *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x40007);
            *(unsigned int *)0xC23ED48 = 0x9;
            return t173;
        }
        *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x40007);
        *(unsigned int *)0xC23ED48 = 0xB;
        return t173;
    }
    if ((int)(*(int *)((a4 + 0x34))) <= 0) {
        *(unsigned int *)0xC23ED9C = 0x17;
        *(unsigned int *)((a4 + 0x44)) = 0x4;
        FUN_0c057fd4(t163);
        FUN_0c04fb24();
        FUN_0c0211a0();
        __init_target_cc_f();
        *(unsigned int *)((a4 + 0x54)) = 0xB4;
        *(unsigned int *)((a4 + 0x50)) = 0x168;
        return FUN_0c0cc3f8(0xC4);
    }
    FUN_0c0500ee(t163);
    t185 = ((int (*)(int))(FUN_0c01993e))(a4);
    FUN_0c016ac0();
    return FUN_0c01a874();
}
