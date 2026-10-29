/* Straight-line functions with calls and guards (batch gen_dg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c029646(int, int, int);
int FUN_0c02a19a(int);
int FUN_0c034134(int, float);
int FUN_0c0350a4(int, int, int, int);
int FUN_0c0372f8(int, int, int, int);
int FUN_0c043338(int);
int FUN_0c043394(int);
int FUN_0c0434f2(int);
int FUN_0c062d4a(int, int, int, int, int, int, int);
int FUN_0c062f54(int, int, int);
int FUN_0c0c0340(int);
float FUN_0c0da410(int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(void);
int _quick_evn_mvn(void);
extern int _quick_odd_mvn();
int kmiCreateRegionArray(int, int, int, int, int, int);
int mpdrv_init_globals(void);
int mpdrv_insertnop(int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_end_ns(void);
int mpdrv_v2p(int);
int FUN_0c217e2a(void);
int FUN_0c0d382a(int a4);
int mpdrv_setcmd_force(int a4, int a5, int a6, int a7, int a8, int a9);
int mpdrv_init_ex(int a4, int a5, int a6, int a7);
int FUN_0c029e06(int a4);
int FUN_0c043b7c(int a4);
int FUN_0c0929fe(int a4, int a5, int a6, int a7);

int FUN_0c217e2a(void)
{
    int t2;
    int t3;
    int t26;
    int t32;
    int t49;
    int t50;

    t2 = 0x0;
    for (;;) {
        t3 = *(int *)((0xC952648 + (t2 << 2)));
        if (t3 != 3) {
            t2 = (t2 + 0x1);
            if ((int)t2 < (int)0x4) continue;
            return t3;
        }
        if (((*(int *)(((0xC952504) + 0x0)))) != 0) {
            t2 = (t2 + 0x1);
            if ((int)t2 < (int)0x4) continue;
            return t3;
        }
        break;
    }
    if ((((t2 & 0x1) + 0x1) & (*(int *)0xC9524BC)) != 0) {
        kmiCreateRegionArray((*(int *)0xC952758), (*(int *)0xC95275C), 0x0, 0x1, (t2 & 0x1), ((~(*(int *)0xC952364)) & 0x1));
        *(unsigned int *)0xC9524BC = (((~((t2 & 0x1) + 0x1)) & (*(int *)0xC9524BC)) & 0x3);
    }
    *(unsigned int *)0xC952504 = 0x1;
    *(unsigned int *)(((t2 << 2) + 0xC952648)) = 0x4;
    if (((*(int *)0xC952300) & 16) != 0) {
        *(unsigned int *)0xA05F8008 = 0x2;
        *(unsigned int *)0xA05F8008 = 0x0;
    }
    *(unsigned int *)0xA05F802C = (*(int *)((((((t2 & 0x1) << 2) << 2) << 1) + 0xC95276C)));
    *(unsigned int *)0xA05F8020 = (*(int *)((((((t2 & 0x1) << 2) << 2) << 1) + 0xC952780)));
    if ((*(int *)0xC952330) != 1) {
        if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t26 = *(int *)0xC95231C, (t26 & 0x2C) == 32) && (0x1 != 0))) {
            t32 = (*(int *)((((*(int *)0xC95285C) << 2) + 0xC952630)));
        } else {
            t32 = (*(int *)((((t2 & 0x1) << 2) + 0xC952630)));
        }
        *(unsigned int *)0xA05F8060 = t32;
    }
    *(unsigned int *)0xA05F808C = (*(int *)0xC9524B0);
    *(unsigned int *)0xA05F8088 = ((*(int *)0xC9524AC) & 0xFFFFFFF0);
    *(unsigned int *)0xA05F8068 = (*(int *)0xC9525B0);
    *(unsigned int *)0xA05F806C = (*(int *)0xC9525B4);
    *(unsigned int *)0xA05F804C = (*(int *)0xC9525C0);
    *(unsigned int *)0xA05F8048 = (*(int *)0xC9525C8);
    *(unsigned int *)0xC952804 = 0x0;
    if (((*(int *)0xC95231C) & 0xFFFFFFED) == 32) {
        if ((*(int *)0xC95285C) == 0) {
            t49 = (*(int *)0xC9525FC);
            t50 = 0x20000;
        } else {
            t49 = (*(int *)0xC9525FC);
            t50 = 0x60000;
        }
        *(unsigned int *)0xA05F80F4 = (t49 | t50);
    }
    *(unsigned int *)0xC952844 = (*(int *)0xFFD8000C);
    *(unsigned int *)0xC95265C = t2;
    *(unsigned int *)0xC952858 = 0x1;
    *(unsigned int *)0xA05F8014 = 0xFFFFFFFF;
    return 0xC95265C;
}

int FUN_0c0d382a(int a4)
{
    int t0;
    int t80;
    int t13;
    float u29;
    int t36;
    int t37;
    float u41;
    int t11;
    int t12;
    int t72;
    int t43;

    t0 = *(int *)0xC9433FC;
    t80 = t0;
    if (t0 == 3) {
    } else {
        if ((*(int *)((a4 + 0x30))) != 0) {
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 1);
        } else {
            if (((*(int *)0xC943438) != -1) && ((t11 = *(int *)((a4 + 0x38)), t11 == 0) && (t12 = *(int *)((a4 + 0x34)), t12 != 0))) {
                t13 = *(int *)((a4 + 0x34));
                *(unsigned int *)((a4 + 0x34)) = (t13 - 1);
                if ((t13 - 1) == 0) {
                    *(unsigned int *)((a4 + 0x38)) = 0x2;
                }
            }
        }
        *(float *)((a4 + 0x40)) = 320.0f;
        *(float *)((a4 + 0x48)) = 0.00139999995f;
        if ((*(int *)0xC943438) == -1) {
            *(float *)((a4 + 0x44)) = ((*(float *)0xC2475BC) + 56.0f);
            u29 = 1.29999995f;
            u29 = u29 + (*(float *)0xC0D3A8C) * (FUN_0c0da410(((*(int *)0xC23A258) << 8)));
            *(float *)((a4 + 0x4C)) = u29;
            *(float *)((a4 + 0x50)) = 1.29999995f;
            *(unsigned int *)((a4 + 0x3C)) = 0x2065;
            *(unsigned int *)((a4 + 0x70)) = 0x300E;
            t72 = (FUN_0c0c0340((a4 + 0x3C)));
        } else {
            *(float *)((a4 + 0x4C)) = 1.29999995f;
            *(float *)((a4 + 0x50)) = 1.29999995f;
            if ((int)(*(int *)((a4 + 0x34))) >= (int)0x258) {
                *(float *)((a4 + 0x44)) = ((*(float *)0xC2475BC) + 56.0f);
                *(float *)((a4 + 0x68)) = 1.0f;
                t43 = 0x2050;
            } else {
                t36 = *(int *)0xC23A258;
                t37 = 0x205A;
                if (((*(int *)0xC23A258) & 1) != 0) {
                    t37 = 0x2050;
                }
                u41 = 0.599999964f;
                u41 = u41 + (*(float *)0xC0D3A6C) * (FUN_0c0da410((((t36 << 8) << 2) << 2)));
                *(float *)((a4 + 0x68)) = u41;
                t43 = t37;
            }
            *(volatile int *)((a4 + 0x34));
            FUN_0c0e5dc0();
            *(unsigned int *)((a4 + 0x3C)) = ((FUN_0c0e5dc0()) + t43);
            *(unsigned int *)((a4 + 0x70)) = 0x300F;
            FUN_0c0c0340((a4 + 0x3C));
            *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) - 13.0f);
            *(unsigned int *)((a4 + 0x3C)) = ((FUN_0c0e5f1c()) + t43);
            *(unsigned int *)((a4 + 0x70)) = 0x300D;
            FUN_0c0c0340((a4 + 0x3C));
            *(float *)((a4 + 0x4C)) = 0.599999964f;
            *(float *)((a4 + 0x50)) = 0.599999964f;
            *(volatile int *)((a4 + 0x34));
            FUN_0c0e5f1c();
            *(volatile float *)0xC0D3A7C;
            *(volatile float *)0xC0D3A80;
            *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 54.0f);
            *(float *)((a4 + 0x44)) = ((*(float *)((a4 + 0x44))) - 1.0f);
            *(unsigned int *)((a4 + 0x3C)) = ((FUN_0c0e5dc0()) + t43);
            *(unsigned int *)((a4 + 0x70)) = 0x300F;
            FUN_0c0c0340((a4 + 0x3C));
            *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) - 5.0f);
            *(unsigned int *)((a4 + 0x3C)) = ((FUN_0c0e5f1c()) + t43);
            *(unsigned int *)((a4 + 0x70)) = 0x300D;
            FUN_0c0c0340((a4 + 0x3C));
            *(float *)((a4 + 0x44)) = ((*(float *)((a4 + 0x44))) + 1.0f);
            t72 = 0x44;
        }
        t80 = t72;
    }
    return t80;
}

int mpdrv_setcmd_force(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t2;
    int t3;
    int t17;
    int t21;
    int t22;
    int t23;
    int t28;
    int t40;
    int t35;
    int t36;
    int t37;
    int t38;
    int t51;
    int t45;
    int t46;
    int t47;
    int t48;
    int t66;
    int t67;
    int t68;
    int t79;
    int t80;
    int t81;
    int t82;
    int t97;
    int t5;
    int t6;
    int t7;
    int t59;
    int stk[16];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 24)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 16)) = ((a7 + a9) + 0x3);
    *(unsigned char *)(((int)stk + 20)) = (*(signed char *)(((*(int *)(((int)stk + 8))) + 0xC2382AC)));
    t2 = *(signed char *)(((((int)stk + 8) + 0xC) + 0x0));
    t3 = *(int *)0xC98E18C;
    if (((int)(*(int *)((t3 + 0x10CC))) > 0) && ((t5 = *(int *)((t3 + 0xFD8)), (int)t5 > 0) && (t6 = *(int *)((t3 + 0xFCC)), t7 = *(int *)((t6 + 0x0)), (((int)(unsigned char)(t2 & 0xC0) >> 6) & 0x3) == ((short)((unsigned int)t7 >> 16) & 0x3)))) {
        mpdrv_insertnop((*(int *)((t3 + 0x10CC))));
    }
    t17 = *(int *)0xC98E18C;
    *(unsigned int *)((t17 + 0xFCC)) = ((*(int *)((t17 + 0xFCC))) + ((*(int *)(((0xFD8 + t17) + 0x0))) << 2));
    t21 = *(int *)(((*(int *)0xC98E18C) + 0xFCC));
    *(unsigned int *)(((int)stk + 28)) = (unsigned char)(a7 + a9);
    *(unsigned int *)((t21 + 0x0)) = (((((int)(unsigned char)(t2 & 0xC0) >> 6) & 0x3) << 16) | (unsigned char)(a7 + a9));
    t22 = *(int *)0xC98E18C;
    t23 = *(int *)(((0x10B4 + t22) + 0x0));
    *(unsigned int *)(((t21 + 0x4) + 0x0)) = (mpdrv_v2p((*(int *)((((*(int *)(((int)stk + 8))) << 2) + ((t22 + 0xFE8) + (((((t23 << 1) + t23) << 2) << 2) << 1)))))));
    t28 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = (unsigned char)(*(signed char *)(((int)stk + 24)));
    *(unsigned int *)(((int)stk + 8)) = (unsigned char)(*(signed char *)(((int)stk + 20)));
    if ((*(int *)((0x10C4 + (*(int *)0xC98E18C)))) == 1) {
        *(unsigned int *)((((t21 + 0x4) + 0x4) + 0x0)) = (((((((*(int *)(((int)stk + 12))) << 16) << 8) & 0xFF000000) | (((*(int *)(((int)stk + 8))) << 16) & 0xFF0000)) | (((unsigned char)(t2 & 0xC0) << 8) & 0xFF00)) | (*(int *)(((int)stk + 28))));
        t40 = (((t21 + 0x4) + 0x4) + 0x4);
        if ((int)a7 > 0) {
            t35 = t28;
            t36 = 0x0;
            t37 = (((t21 + 0x4) + 0x4) + 0x4);
            for (;;) {
                t38 = *(int *)((t35 + 0x0));
                t35 = (t35 + 0x4);
                t36 = (t36 + 0x1);
                *(unsigned int *)((t37 + 0x0)) = t38;
                t37 = (t37 + 0x4);
                if ((int)t36 >= (int)a7) {
                    break;
                }
            }
            t40 = t37;
        }
        t59 = t40;
    } else {
        *(unsigned int *)((((t21 + 0x4) + 0x4) + 0x0)) = ((((((unsigned char)(t2 & 0xC0) << 16) & 0xFF0000) | (((*(int *)(((int)stk + 8))) << 8) & 0xFF00)) | ((((a7 + a9) << 16) << 8) & 0xFF000000)) | (*(int *)(((int)stk + 12))));
        t51 = (((t21 + 0x4) + 0x4) + 0x4);
        if ((int)a7 > 0) {
            t45 = t28;
            t46 = 0x0;
            t47 = (((t21 + 0x4) + 0x4) + 0x4);
            for (;;) {
                t48 = *(int *)((t45 + 0x0));
                t45 = (t45 + 0x4);
                t46 = (t46 + 0x1);
                *(unsigned int *)((t47 + 0x0)) = ((((((t48 << 16) << 8) & 0xFF000000) | ((t48 << 8) & 0xFF0000)) | (((int)t48 >> 8) & 0xFF00)) | (unsigned char)(signed char)((unsigned int)((unsigned int)t48 >> 16) >> 8));
                t47 = (t47 + 0x4);
                if ((int)t46 >= (int)a7) {
                    break;
                }
            }
            t51 = t47;
        }
        t59 = t51;
    }
    if ((*(int *)((0x10C4 + (*(int *)0xC98E18C)))) == 1) {
        if ((int)a9 > 0) {
            t66 = a8;
            t67 = 0x0;
            t68 = t59;
            for (;;) {
                t67 = (t67 + 0x1);
                *(unsigned int *)((t68 + 0x0)) = ((((((*(signed char *)((t66 + 0x1))) << 16) & 0xFF0000) | (((*(signed char *)((t66 + 0x2))) << 8) & 0xFF00)) | ((((*(signed char *)((t66 + 0x0))) << 16) << 8) & 0xFF000000)) | (unsigned char)(*(signed char *)((t66 + 0x3))));
                t68 = (t68 + 0x4);
                t66 = (t66 + 0x4);
                if ((int)t67 >= (int)a9) {
                    break;
                }
            }
        }
    } else {
        if ((int)a9 > 0) {
            t79 = 0x0;
            t80 = a8;
            t81 = t59;
            for (;;) {
                t82 = *(int *)((t80 + 0x0));
                t80 = (t80 + 0x4);
                t79 = (t79 + 0x1);
                *(unsigned int *)((t81 + 0x0)) = t82;
                t81 = (t81 + 0x4);
                if ((int)t79 >= (int)a9) {
                    break;
                }
            }
        }
    }
    *(unsigned int *)(((*(int *)0xC98E18C) + 0xFD8)) = (*(int *)(((int)stk + 16)));
    t97 = *(int *)0xC98E18C;
    *(unsigned int *)((t97 + 0xFDC)) = ((*(int *)((t97 + 0xFDC))) + ((*(int *)(((int)stk + 16))) << 2));
    return 0x0;
}

int mpdrv_init_ex(int a4, int a5, int a6, int a7)
{
    int t4;
    int t6;
    int t12;
    int t15;
    int t20;
    int t22;
    int t25;
    int t28;
    int t30;
    int t31;
    int t32;
    int t33;
    int t35;
    int t36;
    int t45;
    int t47;
    int t49;
    int t51;
    int t53;
    int t55;
    int t56;
    int t57;
    int t58;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t99;
    int t88;
    int t89;
    int t90;
    int t91;
    int stk[11];

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)0xC98E18C = 0xC98D090;
    *(unsigned int *)0xC98E054 = a6;
    *(unsigned int *)(((*(int *)0xC98E18C) + 0xFC8)) = (*(int *)(((int)stk + 4)));
    if (((*(int *)(((*(int *)0xC98E18C) + 0xFC4))) & 0x1F) != 0) {
        t4 = *(int *)0xC98E18C;
        *(unsigned int *)((t4 + 0xFC4)) = ((*(int *)((t4 + 0xFC4))) + 0x20);
        t6 = *(int *)0xC98E18C;
        *(unsigned int *)((t6 + 0xFC4)) = ((*(int *)((t6 + 0xFC4))) & 0xFFFFFFE0);
    }
    t12 = *(int *)0xC98E18C;
    if (((*(int *)((t12 + 0xFC8))) & 0x1F) != 0) {
        *(unsigned int *)((t12 + 0xFC8)) = ((*(int *)((t12 + 0xFC8))) + 0x20);
        t15 = *(int *)0xC98E18C;
        *(unsigned int *)((t15 + 0xFC8)) = ((*(int *)((t15 + 0xFC8))) & 0xFFFFFFE0);
    }
    t20 = *(int *)0xC98E18C;
    *(unsigned int *)((t20 + 0xFC4)) = ((*(int *)((t20 + 0xFC4))) | 0xA0000000);
    t22 = *(int *)0xC98E18C;
    *(unsigned int *)((t22 + 0xFC8)) = ((*(int *)((t22 + 0xFC8))) | 0xA0000000);
    mpdrv_init_globals();
    t25 = 0x0;
    for (;;) {
        *(unsigned int *)((((0xFE8 + (*(int *)0xC98E18C)) + t25) + 0x0)) = 0x0;
        t28 = ((0xFE8 + (*(int *)0xC98E18C)) + t25);
        t25 = (t25 + 0x4);
        *(unsigned int *)(((t28 + 0x60) + 0x0)) = 0x0;
        if ((unsigned int)t25 >= (unsigned int)0x60) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 12)));
    if ((int)a7 > 0) {
        t30 = 0x0;
        for (;;) {
            t31 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t31 + 0x4);
            t32 = *(int *)((((t31 + 0x4) - 4) + 0x0));
            t33 = t32;
            if ((t32 & 0x1F) != 0) {
                t33 = ((t32 + 0x20) & 0xFFFFFFE0);
            }
            t35 = *(int *)(((int)stk + 8));
            t30 = (t30 + 0x1);
            *(unsigned int *)(((int)stk + 8)) = (t35 + 0x4);
            t36 = *(int *)((((t35 + 0x4) - 4) + 0x0));
            *(unsigned int *)((((0xFE8 + (*(int *)0xC98E18C)) + (t36 << 2)) + 0x0)) = (t33 | 0xA0000000);
            *(unsigned int *)(((((t36 << 2) + (0xFE8 + (*(int *)0xC98E18C))) + 0x60) + 0x0)) = ((t33 | 0xA0000000) + 0x400);
            if ((int)t30 >= (int)a7) {
                break;
            }
        }
    }
    t45 = *(int *)0xC98E18C;
    *(unsigned int *)((t45 + 0x10A8)) = (*(int *)((t45 + 0xFC4)));
    t47 = *(int *)0xC98E18C;
    *(unsigned int *)((t47 + 0x10AC)) = (((a7 << 8) << 2) + (*(int *)((t47 + 0xFC4))));
    t49 = *(int *)0xC98E18C;
    *(unsigned int *)((t49 + 0xFCC)) = (*(int *)((t49 + 0x10A8)));
    t51 = 0x0;
    for (;;) {
        t53 = ((0xF90 + (*(int *)0xC98E18C)) + t51);
        t51 = (t51 + 0x1);
        *(unsigned char *)((t53 + 0x0)) = 0x0;
        if ((int)t51 >= (int)0x18) {
            break;
        }
    }
    t55 = *(int *)(((int)stk + 12));
    if ((int)a7 > 0) {
        t56 = 0x0;
        t57 = t55;
        for (;;) {
            t58 = *(int *)((t57 + 0x0));
            t57 = (t57 + 0x4);
            if (t58 != 0) {
                if ((t58 != 6) && ((t58 != 12) && (t58 != 18))) {
                    *(unsigned char *)(((t58 + (0xF90 + (*(int *)0xC98E18C))) + 0x0)) = 0x65;
                } else {
                    *(unsigned char *)(((t58 + (0xF90 + (*(int *)0xC98E18C))) + 0x0)) = 0x72;
                }
            } else {
                *(unsigned char *)(((t58 + (0xF90 + (*(int *)0xC98E18C))) + 0x0)) = 0x72;
            }
            t56 = (t56 + 0x1);
            if ((int)t56 >= (int)a7) {
                break;
            }
        }
    }
    t73 = 0xC2382C4;
    t74 = 0xC2382C4;
    t75 = 0x72;
    t76 = 0x65;
    t77 = 0xC2382C4;
    t78 = 0xC2382C4;
    for (;;) {
        if ((*(signed char *)((((0xF90 + (*(int *)0xC98E18C)) + (*(int *)((t78 + 0x0)))) + 0x0))) != 0) {
            t73 = (*(int *)((t77 + 0x0)));
            mpdrv_set_dreq_ns(t73);
        } else {
            t88 = t73;
            t89 = t74;
            t90 = t75;
            t91 = t76;
        }
        t78 = (t78 + 0x4);
        t73 = t88;
        t74 = t89;
        t75 = t90;
        t76 = t91;
        t77 = (t77 + 0x4);
        if ((unsigned int)t78 >= (unsigned int)0xC2382D4) {
            break;
        }
    }
    mpdrv_set_end_ns();
    *(unsigned int *)(((*(int *)0xC98E18C) + 0xFC0)) = 0x1;
    *(unsigned int *)(((*(int *)(((*(int *)0xC98E18C) + 0x10F4))) + 0x8C)) = 0x6155404F;
    *(unsigned int *)(((*(int *)(((*(int *)0xC98E18C) + 0x10F4))) + 0x10)) = 0x0;
    t99 = *(int *)0xC98E18C;
    *(unsigned int *)(((*(int *)((t99 + 0x10F4))) + 0x80)) = ((*(int *)((t99 + 0x10C0))) | (*(int *)((t99 + 0x10D0))));
    *(unsigned int *)(((*(int *)(((*(int *)0xC98E18C) + 0x10F4))) + 0x14)) = 0x1;
    return 0x0;
}


int FUN_0c043b7c(int a4)
{
    int t0;
    int t7;
    int t26;
    int t28;
    int t33;
    int t34;
    int t39;
    int t40;
    int t42;
    int t43;

    t0 = *(int *)((a4 + 0x4C8));
    if (t0 == 0) {
        return t0;
    }
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    if (t0 == 5) {
                        if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                            return ((int (*)(int))(0xC04345A))(a4);
                        }
                        return 0x2EC;
                    }
                    if (t0 == 6) {
                        t7 = *(int *)((a4 + 0x3AC));
                        *(unsigned int *)((a4 + 0x3AC)) = (t7 + 0x1);
                        if ((int)(t7 + 0x1) > (int)(*(int *)((a4 + 0x3B0)))) {
                            return ((int (*)(int))(0xC043498))(a4);
                        }
                        return 0x3B0;
                    }
                    if (t0 == 7) {
                        if ((0xC & (*(int *)((a4 + 0x2EC)))) == 0) {
                            return 0x2EC;
                        }
                        return FUN_0c043338(a4);
                    }
                    if (t0 == 8) {
                        return t0;
                    }
                    if (t0 == 9) {
                        *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) + 0x1);
                        if ((*(int *)((a4 + 0x3AC))) == 6) {
                            *(unsigned int *)0xC246310 = ((*(int *)0xC246310) | 0x8);
                        }
                        if ((*(int *)((a4 + 0x3AC))) == 68) {
                            *(unsigned int *)0xC246310 = (((*(int *)0xC246310) & 0xFFFFFFF7) | 0x10);
                        }
                        if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                            *(unsigned int *)0xC246310 = ((*(int *)0xC246310) & 0xFFFFFFEF);
                            return FUN_0c043338(a4);
                        }
                        return 0x2EC;
                    }
                    if (t0 == 10) {
                        FUN_0c0350a4(a4, 0x200, 0x1, 0x0);
                        if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                            return ((int (*)(int))(0xC043356))(a4);
                        }
                        return 0x2EC;
                    }
                    return t0;
                }
                if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                    t26 = *(int *)((a4 + 0x3AC));
                    *(unsigned int *)((a4 + 0x3AC)) = (t26 + 0x1);
                    if ((int)(t26 + 0x1) <= (int)(*(int *)((a4 + 0x3B0)))) {
                        return 0x3B0;
                    }
                    return FUN_0c043338(a4);
                }
                return 0x2EC;
            }
            t28 = FUN_0c034134(a4, 30.0f);
            if (t28 != 0) {
                FUN_0c0434f2(a4);
            } else {
                FUN_0c0350a4(a4, 0x300, 0x1, 0x0);
            }
            t33 = FUN_0c034134(a4, 7.0f);
            if (t33 != 0) {
                return ((int (*)(int))(0xC0434D4))(a4);
            }
            return t33;
        }
        t34 = FUN_0c034134(a4, 30.0f);
        if (t34 != 0) {
            FUN_0c0350a4(a4, 0x200, 0x1, 0x0);
        } else {
            FUN_0c043394(a4);
        }
        t39 = FUN_0c034134(a4, 7.0f);
        if (t39 != 0) {
            return ((int (*)(int))(0xC0434D4))(a4);
        }
        return t39;
    }
    t40 = *(int *)((a4 + 0x3AC));
    *(unsigned int *)((a4 + 0x3AC)) = (t40 + 0x1);
    if ((int)(t40 + 0x1) <= (int)(*(int *)((a4 + 0x3B0)))) {
        return 0x3B0;
    }
    t42 = FUN_0c034134(a4, 7.0f);
    if (t42 == 0) {
        t43 = FUN_0c034134(a4, 30.0f);
        if (t43 != 0) {
            return ((int (*)(int))(0xC043356))(a4);
        }
        return FUN_0c043394(a4);
    }
    return ((int (*)(int))(0xC0434D4))(a4);
}

int FUN_0c0929fe(int a4, int a5, int a6, int a7)
{
    int t3;
    int t4;
    int t9;
    int t11;
    int t17;
    int t21;
    int t24;
    int t26;
    int t29;
    int t31;
    int t35;
    int t37;
    int t39;
    int t43;
    int t45;
    int t48;
    int t50;
    int t53;
    int t58;
    int t61;
    int t64;
    int t66;
    int t69;
    int t72;
    int t77;
    int stk[8];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C0929FE:;
    t3 = ((*(int *)0xC23A1A8) & 0x100) == 0;
    t4 = *(int *)((R4 + 0xBC));
    *(unsigned int *)(((int)stk + 8)) = (R9);
    *(unsigned int *)(((int)stk + 4)) = (R8);
    R10 = (0xC246DF8);
    R11 = (0xF0);
    R12 = (0xC23A1A8);
    R13 = (t4);
    if (t3) goto L_C092A2A;
    goto L_C092A22;
    L_C092A22:;
    t9 = *(int *)((R12 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R1 = (t9);
    goto L_C092A24;
    L_C092A24:;
    *(unsigned int *)((R12 + 0x0)) = (R1 & 0xFF9FFFFF);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_C092A2A;
    L_C092A2A:;
    t11 = *(int *)((0xC246FE0 + (R13 << 2)));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R14 = ((R13 << 2));
    R2 = (0x3);
    R3 = (t11);
    R9 = (0xC246FE0);
    goto L_C092A38;
    L_C092A38:;
    t17 = (int)R3 <= (int)(unsigned char)(*(signed char *)(((R2 + R6) + 0x0)));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (t17) goto L_C092A6C;
    goto L_C092A42;
    L_C092A42:;
    *(unsigned int *)((R4 + 0x394)) = 0x1;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (0x394);
    goto L_C092BF2;
    L_C092BF2:;
    return R0;
    L_C092A6C:;
    t21 = (int)(*(int *)((R9 + R14))) >= (int)(unsigned char)(*(signed char *)(((0x2 + R6) + 0x0)));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (R14);
    if (t21) goto L_C092A82;
    goto L_C092A7E;
    L_C092A7E:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_C092BF2;
    L_C092A82:;
    t24 = (*(signed char *)((R6 + 0x2))) == 0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R8 = (0xC246FE8);
    if (t24) goto L_C092AB0;
    goto L_C092A8A;
    L_C092A8A:;
    t26 = *(int *)((0xC246DF0 + R14));
    t29 = (*(int *)((R8 + R14))) == (*(int *)(((((((t26 - 1) << 1) + (t26 - 1)) << 2) + ((R13 * R11) + R10)) + 0x8)));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (R14);
    if (t29) goto L_C092AB0;
    goto L_C092AAC;
    L_C092AAC:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_C092BF2;
    L_C092AB0:;
    t31 = *(int *)((R7 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = ((((t31 == 0)) ? 1 : 0));
    if ((((((t31 == 0)) ? 1 : 0) & 0x202) == 0)) goto L_C092AC0;
    goto L_C092ABC;
    L_C092ABC:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_C092BF2;
    L_C092AC0:;
    t35 = ((unsigned short)(*(short *)((R6 + 0xC))) & 1) == 0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (t35) goto L_C092AD4;
    goto L_C092AC8;
    L_C092AC8:;
    t37 = (*(int *)((R4 + 0xD8))) != 0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (0xD8);
    if (t37) goto L_C092AD4;
    goto L_C092AD0;
    L_C092AD0:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_C092BF2;
    L_C092AD4:;
    t39 = *(short *)((R6 + 0xC));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = ((unsigned short)t39);
    if ((((unsigned short)t39 & 2) == 0)) goto L_C092AE8;
    goto L_C092ADC;
    L_C092ADC:;
    t43 = (unsigned int)(*(int *)((R7 + 0x28))) >= (unsigned int)0xA;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (t43) goto L_C092AE8;
    goto L_C092AE4;
    L_C092AE4:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_C092BF2;
    L_C092AE8:;
    t45 = ((*(int *)((R12 + 0x0))) & 0x100) == 0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (t45) goto L_C092AFA;
    goto L_C092AF0;
    L_C092AF0:;
    *(unsigned int *)((R12 + 0x0)) = ((*(int *)((R12 + 0x0))) | (((int)R13 >= 0) ? (0x200000 << (R13 & 31)) : ((-(int)R13 & 31) ? ((int)0x200000 >> (-(int)R13 & 31)) : ((int)0x200000 >> 31))));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_C092AFA;
    L_C092AFA:;
    t48 = ((*(int *)((R7 + 0x0))) & 0x200) == 0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R4 = (0xC246FD8);
    if (t48) goto L_C092B78;
    goto L_C092B04;
    L_C092B04:;
    t50 = *(short *)((R6 + 0x4));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (t50);
    if ((t50 == 0)) goto L_C092BF2;
    goto L_C092B0A;
    L_C092B0A:;
    t53 = *(int *)((R4 + R14));
    *(unsigned int *)((R4 + R14)) = (t53 + 0x1);
    *(unsigned int *)(((((R13 * R11) + R10) + ((((t53 + 0x1) << 1) + (t53 + 0x1)) << 2)) + 0x0)) = (unsigned short)(*(short *)((R6 + 0x4)));
    *(unsigned int *)(((((R13 * R11) + R10) + ((((t53 + 0x1) << 1) + (t53 + 0x1)) << 2)) + 0x4)) = (unsigned short)(*(short *)((R6 + 0x0)));
    *(unsigned int *)(((((R13 * R11) + R10) + ((((t53 + 0x1) << 1) + (t53 + 0x1)) << 2)) + 0x8)) = (unsigned short)(*(short *)((R6 + 0x8)));
    *(unsigned int *)((R8 + R14)) = (unsigned short)(*(short *)(((0x8 + R6) + 0x0)));
    t58 = *(short *)((R6 + 0x8));
    *(unsigned int *)((R9 + R14)) = 0x0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R4 = ((t53 + 0x1));
    R6 = ((R5 + (((unsigned short)t58 << 2) << 2)));
    goto L_C092BD4;
    L_C092BD4:;
    t61 = *(short *)((R6 + 0xC));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = ((unsigned short)t61);
    if ((((unsigned short)t61 & 32) == 0)) goto L_C092BF2;
    goto L_C092BDC;
    L_C092BDC:;
    t64 = *(short *)((R6 + 0x4));
    *(unsigned int *)(((((R13 * R11) + R10) + (((R4 << 1) + R4) << 2)) + 0xC)) = (unsigned short)t64;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = ((unsigned short)t64);
    goto L_C092BF2;
    L_C092B78:;
    t66 = *(int *)((R7 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (t66);
    if (((t66 & 2) == 0)) goto L_C092BF2;
    goto L_C092B7E;
    L_C092B7E:;
    t69 = *(short *)((R6 + 0x6));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (t69);
    if ((t69 == 0)) goto L_C092BF2;
    goto L_C092B84;
    L_C092B84:;
    t72 = *(int *)((R4 + R14));
    *(unsigned int *)((R4 + R14)) = (t72 + 0x1);
    *(unsigned int *)(((((R13 * R11) + R10) + ((((t72 + 0x1) << 1) + (t72 + 0x1)) << 2)) + 0x0)) = (unsigned short)(*(short *)((R6 + 0x6)));
    *(unsigned int *)(((((R13 * R11) + R10) + ((((t72 + 0x1) << 1) + (t72 + 0x1)) << 2)) + 0x4)) = (unsigned short)(*(short *)((R6 + 0x0)));
    *(unsigned int *)(((((R13 * R11) + R10) + ((((t72 + 0x1) << 1) + (t72 + 0x1)) << 2)) + 0x8)) = (unsigned short)(*(short *)((R6 + 0xA)));
    *(unsigned int *)((R8 + R14)) = (unsigned short)(*(short *)(((0xA + R6) + 0x0)));
    t77 = *(short *)((R6 + 0xA));
    *(unsigned int *)((R9 + R14)) = 0x0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R4 = ((t72 + 0x1));
    R6 = ((R5 + (((unsigned short)t77 << 2) << 2)));
    goto L_C092BD4;
}


