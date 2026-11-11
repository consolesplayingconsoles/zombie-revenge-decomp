/* Straight-line functions with calls and guards (batch gen_ago): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o220_short { char p[0x220]; short v; };
struct o222_short { char p[0x222]; short v; };
struct o24_int { char p[0x24]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o374_uint { char p[0x374]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o3A0_int { char p[0x3A0]; int v; };
struct o3A0_uint { char p[0x3A0]; unsigned int v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c016ac0(void);
int FUN_0c01993e(int);
int FUN_0c01a874(void);
int FUN_0c0211a0(void);
int FUN_0c029646(int, int, int);
int FUN_0c02a19a(int);
int FUN_0c0372f8(int, int, int, int);
int FUN_0c04fb24(void);
int FUN_0c0500ee(void);
int FUN_0c057fd4(int, int);
int FUN_0c062d4a(int, int, int, int, int, int, int);
int FUN_0c062f54(int, int, int);
int FUN_0c084bf6(int, int);
int FUN_0c0a59f8(int);
int FUN_0c0a5a7a(int);
int FUN_0c0bd65c(int);
int FUN_0c0cc3f8(int);
int __init_target_cc_f(void);
int FUN_0c01b49a(int a4);
int FUN_0c029e06(int a4);

int FUN_0c01b49a(int a4)
{
    int t4;
    register int t26;
    register int t38;
    register int t58;
    register int t64;
    register int t69;
    register int t145;

    if (((((struct o14_int *)0xC23ED9C)->v)) == 1) {
        (((struct o44_uint *)(a4))->v) = ((((struct o0_int *)0xC23ED9C)->v));
        (((struct o0_uint *)0xC23ED9C)->v) = 0x3;
        return 0x44;
    }
    t4 = (((struct o0_int *)0xC23ED5C)->v);
    if ((0x40 & t4) != 0) {
        (((struct o0_uint *)0xC23ED9C)->v) = 0xA;
        return FUN_0c084bf6(((((struct o34_int *)0xC23ED5C)->v)), ((((struct o38_int *)0xC23ED5C)->v)));
    }
    if ((t4 & 0x10) != 0) {
        (((struct o0_uint *)0xC23ED9C)->v) = 0x8;
        return FUN_0c084bf6(((((struct o34_int *)0xC23ED5C)->v)), ((((struct o38_int *)0xC23ED5C)->v)));
    }
    if ((int)(*(int *)((a4 + 0x38))) <= 0) {
        (((struct o0_uint *)0xC23ED9C)->v) = 0x17;
        (((struct o44_uint *)(a4))->v) = 0x7;
        FUN_0c057fd4(0xC23ED9C, t4);
        FUN_0c04fb24();
        FUN_0c0211a0();
        __init_target_cc_f();
        (((struct o54_uint *)(a4))->v) = 0xB4;
        (((struct o50_uint *)(a4))->v) = 0x168;
        return FUN_0c0cc3f8(0xC4);
    }
    FUN_0c0500ee();
    FUN_0c01993e(a4);
    FUN_0c016ac0();
    FUN_0c01a874();
    if (((((struct o0_int *)0xC204998)->v)) != 1) {
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 1);
    } else {
        if (((((struct o8_int *)0xC204998)->v)) == 0) {
            t26 = (((struct o0_int *)0xC1FF890)->v);
            if ((int)t26 < 0) {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 1);
            } else {
                (((struct o0_uint *)0xC1FF890)->v) = (t26 - 1);
                if ((int)(t26 - 1) < 0) {
                    (((struct o8_uint *)0xC1FF890)->v) = 0x0;
                }
            }
        }
        if ((int)((((struct o4_int *)0xC1FF890)->v)) >= 0) {
            t38 = (((struct o4_int *)0xC1FF890)->v);
            (((struct o4_uint *)0xC1FF890)->v) = (t38 - 1);
            if (((((struct o4_int *)0xC204998)->v)) != 0) {
                if (((((struct o24_int *)0xC23ED9C)->v)) == 4) {
                    if ((int)(t38 - 1) < 0) {
                        FUN_0c0bd65c(0x0);
                        FUN_0c0a59f8(0x0);
                        FUN_0c0a5a7a(0x0);
                        (((struct oC_uint *)0xC1FF890)->v) = 0x0;
                    } else {
                        if ((int)(t38 - 1) < (int)0xB4) {
                            t58 = 0x1;
                            if ((((((struct o4_int *)0xC1FF890)->v)) & 16) == 0) {
                                t58 = 0x0;
                            }
                            FUN_0c0bd65c(t58);
                        } else {
                            if ((int)(t38 - 1) < (int)0x12C) {
                                t64 = 0x1;
                                if ((((((struct o4_int *)0xC1FF890)->v)) & 8) == 0) {
                                    t64 = 0x0;
                                }
                                FUN_0c0bd65c(t64);
                            } else {
                                if ((int)(t38 - 1) < (int)0x258) {
                                    t69 = 0x1;
                                    if ((((((struct o4_int *)0xC1FF890)->v)) & 4) == 0) {
                                        t69 = 0x0;
                                    }
                                    FUN_0c0bd65c(t69);
                                }
                            }
                        }
                    }
                } else {
                    if ((int)(t38 - 1) < 0) {
                        (((struct o10_uint *)0xC1FF890)->v) = 0x0;
                    }
                }
            } else {
                if ((int)(t38 - 1) < 0) {
                    (((struct o10_uint *)0xC1FF890)->v) = 0x0;
                }
            }
        }
    }
    t145 = (int)((int)((*(int *)((a4 + 0x38))) + 0x59) / (int)0x5A);
    (((struct o8_uint *)0xC23ED9C)->v) = t145;
    return t145;
}

int FUN_0c029e06(int a4)
{
    int stk[16];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    int R1012;
    int R1016;
    int R1020;
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    v0_0 = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 24) + 0x1C)) = *(struct mv3 *)(0xC0F54B4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 24) + 0x10)) = *(struct mv3 *)(0xC0F54C0); }
    v0_3 = (((struct o3A0_int *)(v0_0))->v);
    v0_1 = (v0_3);
    v0_2 = (0x1);
    v0_0 = (v0_0);
    if ((v0_3 == 0)) goto L_C029E54;
    if ((v0_1 == 1)) goto L_C029EE4;
    if ((v0_1 != 2)) goto L_C029E40;
    FUN_0c029646(v0_0, 0x1, 0x40);
    v0_3 = (((struct o3AC_int *)(v0_0))->v);
    (((struct o3AC_uint *)(v0_0))->v) = (v0_3 - 1);
    v0_1 = (0x3AC);
    if (((int)(v0_3 - 1) >= 0)) goto L_C02A002;
    (((struct o2C4_uint *)(v0_0))->v) = 0x32;
    (((struct o2CC_uint *)(v0_0))->v) = v0_2;
    (((struct o3A0_uint *)(v0_0))->v) = (((((struct o3A0_int *)(v0_0))->v)) + 0x1);
    v0_1 = (0x3A0);
    L_C02A002:;
    return v0_1;
    L_C029E40:;
    if ((v0_1 != 3)) goto L_C029E48;
    if (((((((struct o2EC_int *)(v0_0))->v)) & 12) == 0)) goto L_C029FD6;
    v0_1 = (((struct o4F0_int *)(v0_0))->v);
    (((struct o2C4_uint *)(v0_0))->v) = (unsigned short)(*(short *)(((*(int *)(((((v0_1 << 2) + v0_1) << 2) + 0xC1F8E44))) + 0x0)));
    (((struct o2CC_uint *)(v0_0))->v) = v0_2;
    (((struct o3A0_uint *)(v0_0))->v) = (((((struct o3A0_int *)(v0_0))->v)) + 0x1);
    L_C029FD6:;
    FUN_0c029646(v0_0, 0x0, 0x40);
    v0_2 = (((struct o220_short *)(v0_0))->v);
    v0_1 = (0x220);
    w0_0 = (64.0f);
    FPUL_ = (v0_2);
    if ((_builtin_fabsf((float)v0_2) > 64.0f)) goto L_C02A002;
    v0_2 = (((struct o222_short *)(v0_0))->v);
    v0_1 = (0x222);
    FPUL_ = (v0_2);
    if ((_builtin_fabsf((float)v0_2) > w0_0)) goto L_C02A002;
    v0_1 = ((FUN_0c02a19a(v0_0)));
    goto L_C02A002;
    L_C029E48:;
    if ((v0_1 != 4)) goto L_C029E50;
    goto L_C029FD6;
    L_C029E50:;
    goto L_C02A002;
    L_C029EE4:;
    FUN_0c029646(v0_0, 0x1, 0x40);
    v0_4 = (((struct o3B0_int *)(v0_0))->v);
    (((struct o3B0_uint *)(v0_0))->v) = (v0_4 - 1);
    v0_1 = (0x3B0);
    v0_3 = (0x0);
    if (((int)(v0_4 - 1) > 0)) goto L_C029F08;
    (((struct o374_uint *)(v0_0))->v) = v0_3;
    (((struct o3B0_uint *)(v0_0))->v) = v0_3;
    (((struct o3AC_uint *)(v0_0))->v) = v0_3;
    L_C029F1C:;
    v0_4 = (((struct o3AC_int *)(v0_0))->v);
    (((struct o3AC_uint *)(v0_0))->v) = (v0_4 - 1);
    v0_1 = (0x3AC);
    if (((int)(v0_4 - 1) >= 0)) goto L_C02A002;
    *(unsigned int *)((v0_0 + v0_1)) = 0x78;
    *(unsigned int *)((v0_0 + (v0_1 + 0x4))) = v0_3;
    *(unsigned int *)((v0_0 + ((v0_1 + 0x4) - 16))) = ((*(int *)((v0_0 + ((v0_1 + 0x4) - 16)))) + 0x1);
    { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 24)) = *(struct mv4 *)(0xC0F54CC); }
    R1020 = (v0_3);
    R1016 = (v0_2);
    R1012 = (v0_3);
    FUN_0c062d4a(v0_0, (((int)stk + 12) + 0xC), (((int)stk + 12) + 0x28), 0xFFFFF800, R1012, R1016, R1020);
    v0_1 = v0_3;
    *(int *)((int)stk + 8) = v0_1;
    v0_2 = v0_2;
    *(int *)((int)stk + 4) = v0_2;
    v0_3 = v0_3;
    *(int *)((int)stk + 0) = v0_3;
    FUN_0c062d4a(v0_0, (((int)stk + 0) + 0x18), (((int)stk + 0) + 0x28), 0xFFFFF800, v0_3, v0_2, v0_1);
    v0_1 = ((FUN_0c0372f8(v0_0, 0x123A9, 0x223A9, ((((struct o3AC_int *)(v0_0))->v)))));
    goto L_C02A002;
    L_C029F08:;
    (((struct o374_uint *)(v0_0))->v) = ((int)((int)((-(*(int *)((v0_0 + v0_1)))) + 0xB4) / (int)0x3));
    goto L_C029F1C;
    L_C029E54:;
    FUN_0c029646(v0_0, 0x1, 0x40);
    v0_3 = (((struct o2EC_int *)(v0_0))->v);
    v0_1 = (v0_3);
    if (((v0_3 & 12) != 0)) goto L_C029E68;
    goto L_C02A002;
    L_C029E68:;
    (((struct o2C4_uint *)(v0_0))->v) = 0x2F;
    (((struct o2CC_uint *)(v0_0))->v) = v0_2;
    (((struct o3AC_uint *)(v0_0))->v) = 0x82;
    (((struct o3A0_uint *)(v0_0))->v) = (((((struct o3A0_int *)(v0_0))->v)) + 0x1);
    FUN_0c062f54(v0_0, (((int)stk + 24) + 0x1C), 0x1);
    FUN_0c062f54(v0_0, (((int)stk + 24) + 0x10), 0x1);
    (((struct o3B0_uint *)(v0_0))->v) = 0x82;
    v0_1 = ((FUN_0c0372f8(v0_0, 0x323A9, 0x423A9, ((((struct o3B0_int *)(v0_0))->v)))));
    goto L_C02A002;
}
