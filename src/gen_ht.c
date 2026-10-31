/* Straight-line functions with calls and guards (batch gen_ht): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[7]; } Stk7;
int FUN_0c016296(void);
int FUN_0c016316(void);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int, Stk7);
int FUN_0c0cead0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcca0(int);
int nlPopMatrix(int);
int thunk_FUN_0c214c44(void);
int FUN_0c0b5ac4(int a4);

int FUN_0c0b5ac4(int a4)
{
    int stk[18];
    register int t4;
    register int t11;
    register float u19;
    register int t13;
    register float u14;
    register float u31;
    register int t35;
    register int t46;
    register int t47;
    register int t90;
    register int t127;
    register float u129;
    register int t132;
    register float u24;
    register int t27;
    register int t44;
    register int t72;
    register int t73;
    register int t81;

    FUN_0c0dc5a0();
    FUN_0c0dcca0(0xC111C90);
    FUN_0c0c465c(0x144C);
    FUN_0c016296();
    t4 = *(int *)((a4 + 0x30));
    if (t4 != 0) {
        if (t4 != 1) {
        } else {
            FUN_0c0c465c(0x1454);
            if (((*(int *)0xC523158) & 32) != 0) {
                FUN_0c0c465c(0x1455);
            }
            if ((*(int *)0xC2041E8) != 4) {
                *(unsigned int *)0xC2041EC = 0x1;
                *(unsigned int *)0xC2041F0 = 0x1;
                u24 = 1.0f;
            } else {
                *(unsigned int *)0xC2041EC = 0x0;
                t11 = *(int *)0xC23EB38;
                u19 = 0.5f;
                if ((int)t11 >= 0) {
                    t13 = *(int *)(((FUN_0c0cead0(t11)) + 0x50));
                    u14 = 0.5f;
                    if (t13 == 1) {
                        *(unsigned int *)0xC2041EC = 0x1;
                        u14 = 1.0f;
                    }
                    u19 = u14;
                }
                u24 = u19;
            }
            u31 = u24;
            if (((*(int *)0xC2041E8) == 6) && (t27 = *(int *)0xC23EAB4, t27 == -3)) {
                *(unsigned int *)0xC2041F0 = 0x0;
                u31 = 0.5f;
            }
            FUN_0c0c475c((*(int *)((((*(int *)0xC2041E8) << 2) + 0xC111C9C))), u31);
            t35 = *(int *)((a4 + 0x50));
            *(unsigned int *)((a4 + 0x50)) = (t35 - 1);
            if ((int)(t35 - 1) <= 0) {
                *(unsigned int *)((a4 + 0x40)) = ((*(int *)((a4 + 0x40))) + 0x1);
            }
            { struct mv7 { int w[7]; }; *(struct mv7 *)(((int)stk + 4)) = *(struct mv7 *)(0xC111CB8); }
            *(unsigned int *)0xC23EABC = (*(int *)((((int)stk + 4) + ((*(int *)0xC2041E8) << 2))));
            *(unsigned int *)0xC204998 = ((((*(int *)0xC2041E8) == 1)) ? 1 : 0);
            t46 = 0x1;
            if (((*(int *)0xC2041E8) != 1) && (t44 = *(int *)0xC2041E8, t44 != 2)) {
                t46 = 0x0;
            }
            *(unsigned int *)0xC204994 = t46;
            t47 = *(int *)0xC2498F4;
            if ((t47 & 0x3030) != 0) {
                FUN_0c0cc3f8(0x29A9, *(Stk7 *)(((int)stk + 4)));
                if (((*(int *)0xC2498F4) & 0x1010) != 0) {
                    if ((*(int *)0xC2041E8) == 0) {
                        *(unsigned int *)0xC2041E8 = 0x6;
                    } else {
                        *(unsigned int *)0xC2041E8 = ((*(int *)0xC2041E8) - 1);
                    }
                } else {
                    if ((int)(*(int *)0xC2041E8) < (int)0x6) {
                        *(unsigned int *)0xC2041E8 = ((*(int *)0xC2041E8) + 0x1);
                    } else {
                        *(unsigned int *)0xC2041E8 = 0x0;
                    }
                }
                *(unsigned int *)((a4 + 0x50)) = 0x708;
            } else {
                if (((t47 & 8) != 0) && ((t72 = *(int *)0xC2041EC, t72 != 0) && (t73 = *(int *)0xC2041F0, t73 != 0))) {
                    if (((*(int *)0xC2041E8) == 6) && (t81 = *(int *)0xC23EAB4, t81 != -3)) {
                        thunk_FUN_0c214c44();
                    }
                    if ((*(int *)0xC204994) == 0) {
                        t90 = *(int *)0xC522D70;
                        if ((int)t90 < (int)0x10) {
                            *(unsigned int *)0xC5229BC = t90;
                            *(unsigned int *)0xC5229FC = 0x0;
                        } else {
                            *(unsigned int *)0xC5229FC = 0x1;
                        }
                        *(unsigned int *)0xC23ED6C = (*(int *)0xC522D6C);
                        *(unsigned int *)((a4 + 0x40)) = 0x2;
                    }
                    FUN_0c016316();
                }
            }
        }
    } else {
        FUN_0c0c465c(0x1450);
        t127 = *(int *)0xC523158;
        u129 = (float)(t127 & 0x1F);
        if (((*(int *)0xC523158) & 32) != 0) {
            u129 = (31.0f - (float)(t127 & 0x1F));
        }
        FUN_0c0c475c(0x1451, (u129 / 31.0f));
        t132 = *(int *)((a4 + 0x50));
        *(unsigned int *)((a4 + 0x50)) = (t132 - 1);
        if ((int)(t132 - 1) <= 0) {
            *(unsigned int *)((a4 + 0x40)) = ((*(int *)((a4 + 0x40))) + 0x1);
        }
        if (((*(int *)0xC2498F4) & 8) == 0) {
        } else {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        }
    }
    return (nlPopMatrix(0x1));
}
