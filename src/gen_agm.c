/* Straight-line functions with calls and guards (batch gen_agm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
struct o44_uint { char p[0x44]; unsigned int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c016ac0(void);
extern int FUN_0c01993e();
int FUN_0c01a874(void);
int FUN_0c0211a0(void);
int FUN_0c04fb24(void);
int FUN_0c0500ee(void);
int FUN_0c057fd4(int, int);
int FUN_0c084bf6(int, int);
int FUN_0c0a59f8(int);
int FUN_0c0a5a7a(int);
int FUN_0c0bd65c(int);
int FUN_0c0cc3f8(int);
int FUN_0c0de310(float, float, float);
int __init_target_cc_f(void);
int FUN_0c01b0b4(int a4, int a5, int a6);

int FUN_0c01b0b4(int a4, int a5, int a6)
{
    register int t146;
    register int t20;
    register int t128;
    register int t34;
    register int t54;
    register int t60;
    register int t65;
    register int t155;
    int t175;
    register int t185;
    register int t186;
    register int t197;

    if (((((struct o20_int *)0xC23ED90)->v)) == 1) {
        (((struct o44_uint *)(a4))->v) = ((((struct oC_int *)0xC23ED90)->v));
        (((struct oC_uint *)0xC23ED90)->v) = 0x3;
        return 0x44;
    }
    t128 = (((struct oC_int *)0xC23ED44)->v);
    t146 = t128;
    if (((*(int *)0xC23A1A8) & 0x101) != 0) {
    } else {
        if (((((struct o0_int *)0xC204998)->v)) != 1) {
            if ((int)t128 < (int)0x63) {
                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 1);
            }
            t146 = t128;
        } else {
            if (((((struct o8_int *)0xC204998)->v)) == 0) {
                t20 = (((struct o0_int *)0xC1FF890)->v);
                if ((int)t20 < 0) {
                    if ((int)t128 < (int)0x63) {
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
                if (((((struct o4_int *)0xC204998)->v)) != 0) {
                    if (((((struct o30_int *)0xC23ED90)->v)) == 4) {
                        if ((int)(t34 - 1) < 0) {
                            FUN_0c0bd65c(0x0);
                            FUN_0c0a59f8(0x0);
                            FUN_0c0a5a7a(0x0);
                            (((struct oC_uint *)0xC1FF890)->v) = 0x0;
                        } else {
                            if ((int)(t34 - 1) < (int)0xB4) {
                                t54 = 0x1;
                                if ((((((struct o4_int *)0xC1FF890)->v)) & 16) == 0) {
                                    t54 = 0x0;
                                }
                                FUN_0c0bd65c(t54);
                            } else {
                                if ((int)(t34 - 1) < (int)0x12C) {
                                    t60 = 0x1;
                                    if ((((((struct o4_int *)0xC1FF890)->v)) & 8) == 0) {
                                        t60 = 0x0;
                                    }
                                    FUN_0c0bd65c(t60);
                                } else {
                                    if ((int)(t34 - 1) < (int)0x258) {
                                        t65 = 0x1;
                                        if ((((((struct o4_int *)0xC1FF890)->v)) & 4) == 0) {
                                            t65 = 0x0;
                                        }
                                        FUN_0c0bd65c(t65);
                                    } else {
                                        t128 = (t34 - 1);
                                    }
                                }
                            }
                        }
                    } else {
                        if ((int)(t34 - 1) < 0) {
                            (((struct o10_uint *)0xC1FF890)->v) = 0x0;
                        }
                        t128 = (t34 - 1);
                    }
                } else {
                    if ((int)(t34 - 1) < 0) {
                        (((struct o10_uint *)0xC1FF890)->v) = 0x0;
                    }
                    t128 = (t34 - 1);
                }
            }
            t146 = t128;
        }
    }
    if (((*(int *)0xC23A1A8) & 0x101) == 0) {
        if (((((struct oC_int *)0xC23ED44)->v)) == 52) {
            if (((((struct o4_int *)0xC1EFD58)->v)) != 0) {
                t155 = (((struct o0_int *)0xC1EFD58)->v);
                (((struct o0_uint *)0xC1EFD58)->v) = (t155 - 1);
                if ((int)(t155 - 1) < 0) {
                    (((struct o18_uint *)0xC23ED44)->v) = (((((struct o18_int *)0xC23ED44)->v)) | 0x200);
                }
            }
        } else {
            (((struct o4_uint *)0xC1EFD58)->v) = 0x0;
        }
    }
    (((struct o14_uint *)0xC23ED90)->v) = ((int)((int)((*(int *)((a4 + 0x34))) + 0x59) / (int)0x5A));
    t175 = (((struct o18_int *)0xC23ED44)->v);
    if ((0x40 & t175) != 0) {
        (((struct oC_uint *)0xC23ED90)->v) = 0xF;
        return FUN_0c084bf6(((((struct o0_int *)0xC23ED90)->v)), ((((struct o4_int *)0xC23ED90)->v)));
    }
    if ((0x10 & t175) != 0) {
        (((struct oC_uint *)0xC23ED90)->v) = 0x5;
        return FUN_0c084bf6(((((struct o0_int *)0xC23ED90)->v)), ((((struct o4_int *)0xC23ED90)->v)));
    }
    if ((t175 & 0x10000) != 0) {
        (((struct o0_uint *)0xC23ED44)->v) = 0x1;
        FUN_0c0de310(0.0f, 0.0f, 0.0f);
        t185 = *(short *)(((*(int *)0xC23ED00) + 0x0));
        if (t185 != 2) {
            if (t185 != 1) {
                if (t185 != 0) {
                    t186 = ((int (*)(int, int))(FUN_0c01993e))(a4, 0xC23ED48);
                    FUN_0c016ac0();
                    return FUN_0c01a874();
                }
                (((struct o18_uint *)0xC23ED44)->v) = (((((struct o18_int *)0xC23ED44)->v)) | 0x40007);
                (((struct o4_uint *)0xC23ED44)->v) = 0xE;
                return t185;
            }
            (((struct oC_uint *)0xC23ED90)->v) = 0x13;
            (((struct o18_uint *)0xC23ED44)->v) = (((((struct o18_int *)0xC23ED44)->v)) | 0x40007);
            (((struct o4_uint *)0xC23ED44)->v) = 0x9;
            return t185;
        }
        (((struct o18_uint *)0xC23ED44)->v) = (((((struct o18_int *)0xC23ED44)->v)) | 0x40007);
        (((struct o4_uint *)0xC23ED44)->v) = 0xB;
        return t185;
    }
    if ((int)(*(int *)((a4 + 0x34))) <= 0) {
        (((struct oC_uint *)0xC23ED90)->v) = 0x17;
        (((struct o44_uint *)(a4))->v) = 0x4;
        FUN_0c057fd4(t175, t146);
        FUN_0c04fb24();
        FUN_0c0211a0();
        __init_target_cc_f();
        (((struct o54_uint *)(a4))->v) = 0xB4;
        (((struct o50_uint *)(a4))->v) = 0x168;
        return FUN_0c0cc3f8(0xC4);
    }
    FUN_0c0500ee();
    t197 = ((int (*)(int))(FUN_0c01993e))(a4);
    FUN_0c016ac0();
    return FUN_0c01a874();
}
