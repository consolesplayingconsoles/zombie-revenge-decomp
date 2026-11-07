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
struct o44_uint { char p[0x44]; unsigned int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



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

    if (((((struct o20_int *)0xC23ED90)->v)) == 1) {
        (((struct o44_uint *)(a4))->v) = ((((struct oC_int *)0xC23ED90)->v));
        (((struct oC_uint *)0xC23ED90)->v) = 0x3;
        return 0x44;
    }
    t8 = (((struct oC_int *)0xC23ED44)->v);
    if (((*(int *)0xC23A1A8) & 0x101) != 0) {
    } else {
        if (((((struct o0_int *)0xC204998)->v)) != 1) {
            if ((int)t8 < (int)0x63) {
                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 1);
            }
        } else {
            if (((((struct o8_int *)0xC204998)->v)) == 0) {
                t20 = (((struct o0_int *)0xC1FF890)->v);
                if ((int)t20 < 0) {
                    if ((int)t8 < (int)0x63) {
                        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 1);
                    }
                } else {
                    (((struct o0_uint *)0xC1FF890)->v) = (t20 - 1);
                    if ((int)(t20 - 1) < 0) {
                        (((struct o8_uint *)0xC1FF890)->v) = 0x0;
                    }
                }
            }
            if ((int)((((struct o4_int *)0xC1FF890)->v)) >= 0) {
                t34 = (((struct o4_int *)0xC1FF890)->v);
                (((struct o4_uint *)0xC1FF890)->v) = (t34 - 1);
                if ((((((struct o4_int *)0xC204998)->v)) != 0) && (t36 = (((struct o30_int *)0xC23ED90)->v), t36 == 4)) {
                    if ((int)(t34 - 1) < 0) {
                        FUN_0c0bd65c(0x0);
                        FUN_0c0a59f8(0x0);
                        FUN_0c0a5a7a(0x0);
                        (((struct oC_uint *)0xC1FF890)->v) = 0x0;
                    } else {
                        if ((int)(t34 - 1) < (int)0xB4) {
                            t53 = 0x1;
                            if ((((((struct o4_int *)0xC1FF890)->v)) & 16) == 0) {
                                t53 = 0x0;
                            }
                            FUN_0c0bd65c(t53);
                        } else {
                            if ((int)(t34 - 1) < (int)0x12C) {
                                t59 = 0x1;
                                if ((((((struct o4_int *)0xC1FF890)->v)) & 8) == 0) {
                                    t59 = 0x0;
                                }
                                FUN_0c0bd65c(t59);
                            } else {
                                if ((int)(t34 - 1) < (int)0x258) {
                                    t64 = 0x1;
                                    if ((((((struct o4_int *)0xC1FF890)->v)) & 4) == 0) {
                                        t64 = 0x0;
                                    }
                                    FUN_0c0bd65c(t64);
                                }
                            }
                        }
                    }
                } else {
                    if ((int)(t34 - 1) < 0) {
                        (((struct o10_uint *)0xC1FF890)->v) = 0x0;
                    }
                }
            }
        }
    }
    if (((*(int *)0xC23A1A8) & 0x101) == 0) {
        if (((((struct oC_int *)0xC23ED44)->v)) == 52) {
            if (((((struct o4_int *)0xC1EFD58)->v)) != 0) {
                t143 = (((struct o0_int *)0xC1EFD58)->v);
                (((struct o0_uint *)0xC1EFD58)->v) = (t143 - 1);
                if ((int)(t143 - 1) < 0) {
                    (((struct o18_uint *)0xC23ED44)->v) = (((((struct o18_int *)0xC23ED44)->v)) | 0x200);
                }
            }
        } else {
            (((struct o4_uint *)0xC1EFD58)->v) = 0x0;
        }
    }
    *(volatile int *)((a4 + 0x34));
    (((struct o14_uint *)0xC23ED90)->v) = (FUN_0c0e5dc0());
    t163 = (((struct o18_int *)0xC23ED44)->v);
    if ((0x40 & t163) != 0) {
        (((struct oC_uint *)0xC23ED90)->v) = 0xF;
        return FUN_0c084bf6(((((struct o0_int *)0xC23ED90)->v)), ((((struct o4_int *)0xC23ED90)->v)));
    }
    if ((0x10 & t163) != 0) {
        (((struct oC_uint *)0xC23ED90)->v) = 0x5;
        return FUN_0c084bf6(((((struct o0_int *)0xC23ED90)->v)), ((((struct o4_int *)0xC23ED90)->v)));
    }
    if ((t163 & 0x10000) != 0) {
        (((struct o0_uint *)0xC23ED44)->v) = 0x1;
        FUN_0c0de310(0.0f, 0.0f, 0.0f);
        t173 = *(short *)(((*(int *)0xC23ED00) + 0x0));
        if (t173 != 2) {
            if (t173 != 1) {
                if (t173 != 0) {
                    t174 = ((int (*)(int, int))(FUN_0c01993e))(a4, 0xC23ED48);
                    FUN_0c016ac0();
                    return FUN_0c01a874();
                }
                (((struct o18_uint *)0xC23ED44)->v) = (((((struct o18_int *)0xC23ED44)->v)) | 0x40007);
                (((struct o4_uint *)0xC23ED44)->v) = 0xE;
                return t173;
            }
            (((struct oC_uint *)0xC23ED90)->v) = 0x13;
            (((struct o18_uint *)0xC23ED44)->v) = (((((struct o18_int *)0xC23ED44)->v)) | 0x40007);
            (((struct o4_uint *)0xC23ED44)->v) = 0x9;
            return t173;
        }
        (((struct o18_uint *)0xC23ED44)->v) = (((((struct o18_int *)0xC23ED44)->v)) | 0x40007);
        (((struct o4_uint *)0xC23ED44)->v) = 0xB;
        return t173;
    }
    if ((int)(*(int *)((a4 + 0x34))) <= 0) {
        (((struct oC_uint *)0xC23ED90)->v) = 0x17;
        (((struct o44_uint *)(a4))->v) = 0x4;
        FUN_0c057fd4(t163);
        FUN_0c04fb24();
        FUN_0c0211a0();
        __init_target_cc_f();
        (((struct o54_uint *)(a4))->v) = 0xB4;
        (((struct o50_uint *)(a4))->v) = 0x168;
        return FUN_0c0cc3f8(0xC4);
    }
    FUN_0c0500ee(t163);
    t185 = ((int (*)(int))(FUN_0c01993e))(a4);
    FUN_0c016ac0();
    return FUN_0c01a874();
}
