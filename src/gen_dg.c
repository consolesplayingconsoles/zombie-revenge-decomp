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
int _divls(void);
int _modls(void);
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
struct o10A8_int { char p[0x10A8]; int v; };
struct o10A8_uint { char p[0x10A8]; unsigned int v; };
struct o10AC_uint { char p[0x10AC]; unsigned int v; };
struct o10B4_int { char p[0x10B4]; int v; };
struct o10C0_int { char p[0x10C0]; int v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10CC_int { char p[0x10CC]; int v; };
struct o10D0_int { char p[0x10D0]; int v; };
struct o10F4_int { char p[0x10F4]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o394_uint { char p[0x394]; unsigned int v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o68_float { char p[0x68]; float v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oFC0_uint { char p[0xFC0]; unsigned int v; };
struct oFC4_int { char p[0xFC4]; int v; };
struct oFC4_uint { char p[0xFC4]; unsigned int v; };
struct oFC8_int { char p[0xFC8]; int v; };
struct oFC8_uint { char p[0xFC8]; unsigned int v; };
struct oFCC_int { char p[0xFCC]; int v; };
struct oFCC_uint { char p[0xFCC]; unsigned int v; };
struct oFD8_int { char p[0xFD8]; int v; };
struct oFD8_uint { char p[0xFD8]; unsigned int v; };
struct oFDC_int { char p[0xFDC]; int v; };
struct oFDC_uint { char p[0xFDC]; unsigned int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o30_int { char p[0x30]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



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
    if ((((t2 & 0x1) + 0x1) & ((((struct o10_int *)0xC9524AC)->v))) != 0) {
        kmiCreateRegionArray(((((struct o0_int *)0xC952758)->v)), ((((struct o4_int *)0xC952758)->v)), 0x0, 0x1, (t2 & 0x1), ((~(*(int *)0xC952364)) & 0x1));
        (((struct o10_uint *)0xC9524AC)->v) = (((~((t2 & 0x1) + 0x1)) & ((((struct o10_int *)0xC9524AC)->v))) & 0x3);
    }
    *(unsigned int *)0xC952504 = 0x1;
    *(unsigned int *)(((t2 << 2) + 0xC952648)) = 0x4;
    if ((((((struct o0_int *)0xC952300)->v)) & 16) != 0) {
        (((struct o0_uint *)0xA05F8008)->v) = 0x2;
        (((struct o0_uint *)0xA05F8008)->v) = 0x0;
    }
    (((struct o24_uint *)0xA05F8008)->v) = (*(int *)((((((t2 & 0x1) << 2) << 2) << 1) + 0xC95276C)));
    (((struct o18_uint *)0xA05F8008)->v) = (*(int *)((((((t2 & 0x1) << 2) << 2) << 1) + 0xC952780)));
    if (((((struct o30_int *)0xC952300)->v)) != 1) {
        if (((((((struct o1C_int *)0xC952300)->v)) & 0x1) != 1) && ((t26 = (((struct o1C_int *)0xC952300)->v), (t26 & 0x2C) == 32) && (0x1 != 0))) {
            t32 = (*(int *)(((((((struct o18_int *)0xC952844)->v)) << 2) + 0xC952630)));
        } else {
            t32 = (*(int *)((((t2 & 0x1) << 2) + 0xC952630)));
        }
        (((struct o18_uint *)0xA05F8048)->v) = t32;
    }
    (((struct o4_uint *)0xA05F8088)->v) = ((((struct o4_int *)0xC9524AC)->v));
    (((struct o0_uint *)0xA05F8088)->v) = (((((struct o0_int *)0xC9524AC)->v)) & 0xFFFFFFF0);
    (((struct o20_uint *)0xA05F8048)->v) = ((((struct o0_int *)0xC9525B0)->v));
    (((struct o24_uint *)0xA05F8048)->v) = ((((struct o4_int *)0xC9525B0)->v));
    (((struct o4_uint *)0xA05F8048)->v) = ((((struct o10_int *)0xC9525B0)->v));
    (((struct o0_uint *)0xA05F8048)->v) = ((((struct o18_int *)0xC9525B0)->v));
    *(unsigned int *)0xC952804 = 0x0;
    if ((((((struct o1C_int *)0xC952300)->v)) & 0xFFFFFFED) == 32) {
        if (((((struct o18_int *)0xC952844)->v)) == 0) {
            t49 = (*(int *)0xC9525FC);
            t50 = 0x20000;
        } else {
            t49 = (*(int *)0xC9525FC);
            t50 = 0x60000;
        }
        *(unsigned int *)0xA05F80F4 = (t49 | t50);
    }
    (((struct o0_uint *)0xC952844)->v) = (*(int *)0xFFD8000C);
    *(unsigned int *)0xC95265C = t2;
    (((struct o14_uint *)0xC952844)->v) = 0x1;
    (((struct oC_uint *)0xA05F8008)->v) = 0xFFFFFFFF;
    return 0xC95265C;
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
    int R1008;
    int R1012;
    int R1016;

    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);

    R1008 = a4;
    *(unsigned char *)(((int)stk + 24)) = a5;
    R1012 = a6;
    R1016 = ((a7 + a9) + 0x3);
    *(unsigned char *)(((int)stk + 20)) = (*(signed char *)(((R1008) + 0xC2382AC)));
    t2 = *(signed char *)(((((int)stk + 8) + 0xC) + 0x0));
    t3 = *(int *)0xC98E18C;
    if (((int)((((struct o10CC_int *)(t3))->v)) > 0) && ((t5 = (((struct oFD8_int *)(t3))->v), (int)t5 > 0) && (t6 = (((struct oFCC_int *)(t3))->v), t7 = *(int *)((t6 + 0x0)), (((int)(unsigned char)(t2 & 0xC0) >> 6) & 0x3) == ((short)((unsigned int)t7 >> 16) & 0x3)))) {
        mpdrv_insertnop(((((struct o10CC_int *)(t3))->v)));
    }
    t17 = *(int *)0xC98E18C;
    (((struct oFCC_uint *)(t17))->v) = (((((struct oFCC_int *)(t17))->v)) + (((((struct oFD8_int *)(t17))->v)) << 2));
    t21 = (((struct oFCC_int *)((*(int *)0xC98E18C)))->v);
    *(unsigned int *)(((int)stk + 28)) = (unsigned char)(a7 + a9);
    *(unsigned int *)((t21 + 0x0)) = (((((int)(unsigned char)(t2 & 0xC0) >> 6) & 0x3) << 16) | (unsigned char)(a7 + a9));
    t22 = *(int *)0xC98E18C;
    t23 = (((struct o10B4_int *)(t22))->v);
    *(unsigned int *)(((t21 + 0x4) + 0x0)) = (mpdrv_v2p((*(int *)((((R1008) << 2) + ((t22 + 0xFE8) + (((((t23 << 1) + t23) << 2) << 2) << 1)))))));
    t28 = R1012;
    R1012 = (unsigned char)(*(signed char *)(((int)stk + 24)));
    R1008 = (unsigned char)(*(signed char *)(((int)stk + 20)));
    if (((((struct o10C4_int *)((*(int *)0xC98E18C)))->v)) == 1) {
        *(unsigned int *)((((t21 + 0x4) + 0x4) + 0x0)) = (((((((R1012) << 16) << 8) & 0xFF000000) | (((R1008) << 16) & 0xFF0000)) | (((unsigned char)(t2 & 0xC0) << 8) & 0xFF00)) | (*(int *)(((int)stk + 28))));
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
        *(unsigned int *)((((t21 + 0x4) + 0x4) + 0x0)) = ((((((unsigned char)(t2 & 0xC0) << 16) & 0xFF0000) | (((R1008) << 8) & 0xFF00)) | ((((a7 + a9) << 16) << 8) & 0xFF000000)) | (R1012));
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
    if (((((struct o10C4_int *)((*(int *)0xC98E18C)))->v)) == 1) {
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
    (((struct oFD8_uint *)((*(int *)0xC98E18C)))->v) = (R1016);
    t97 = *(int *)0xC98E18C;
    (((struct oFDC_uint *)(t97))->v) = (((((struct oFDC_int *)(t97))->v)) + ((R1016) << 2));
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

    t0 = (((struct o4C8_int *)(a4))->v);
    if (t0 == 0) {
        return t0;
    }
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    if (t0 == 5) {
                        if ((0xC & ((((struct o2EC_int *)(a4))->v))) != 0) {
                            return ((int (*)(int))(0xC04345A))(a4);
                        }
                        return 0x2EC;
                    }
                    if (t0 == 6) {
                        t7 = (((struct o3AC_int *)(a4))->v);
                        (((struct o3AC_uint *)(a4))->v) = (t7 + 0x1);
                        if ((int)(t7 + 0x1) > (int)((((struct o3B0_int *)(a4))->v))) {
                            return ((int (*)(int))(0xC043498))(a4);
                        }
                        return 0x3B0;
                    }
                    if (t0 == 7) {
                        if ((0xC & ((((struct o2EC_int *)(a4))->v))) == 0) {
                            return 0x2EC;
                        }
                        return FUN_0c043338(a4);
                    }
                    if (t0 == 8) {
                        return t0;
                    }
                    if (t0 == 9) {
                        (((struct o3AC_uint *)(a4))->v) = (((((struct o3AC_int *)(a4))->v)) + 0x1);
                        if (((((struct o3AC_int *)(a4))->v)) == 6) {
                            *(unsigned int *)0xC246310 = ((*(int *)0xC246310) | 0x8);
                        }
                        if (((((struct o3AC_int *)(a4))->v)) == 68) {
                            *(unsigned int *)0xC246310 = (((*(int *)0xC246310) & 0xFFFFFFF7) | 0x10);
                        }
                        if ((0xC & ((((struct o2EC_int *)(a4))->v))) != 0) {
                            *(unsigned int *)0xC246310 = ((*(int *)0xC246310) & 0xFFFFFFEF);
                            return FUN_0c043338(a4);
                        }
                        return 0x2EC;
                    }
                    if (t0 == 10) {
                        FUN_0c0350a4(a4, 0x200, 0x1, 0x0);
                        if ((0xC & ((((struct o2EC_int *)(a4))->v))) != 0) {
                            return ((int (*)(int))(0xC043356))(a4);
                        }
                        return 0x2EC;
                    }
                    return t0;
                }
                if ((0xC & ((((struct o2EC_int *)(a4))->v))) != 0) {
                    t26 = (((struct o3AC_int *)(a4))->v);
                    (((struct o3AC_uint *)(a4))->v) = (t26 + 0x1);
                    if ((int)(t26 + 0x1) <= (int)((((struct o3B0_int *)(a4))->v))) {
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
    t40 = (((struct o3AC_int *)(a4))->v);
    (((struct o3AC_uint *)(a4))->v) = (t40 + 0x1);
    if ((int)(t40 + 0x1) <= (int)((((struct o3B0_int *)(a4))->v))) {
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
    t4 = (((struct oBC_int *)(R4))->v);
    R10 = (0xC246DF8);
    R11 = (0xF0);
    R12 = (0xC23A1A8);
    R13 = (t4);
    if (t3) goto L_C092A2A;
    goto L_C092A22;
    L_C092A22:;
    t9 = *(int *)((R12 + 0x0));
    R1 = (t9);
    goto L_C092A24;
    L_C092A24:;
    *(unsigned int *)((R12 + 0x0)) = (R1 & 0xFF9FFFFF);
    goto L_C092A2A;
    L_C092A2A:;
    t11 = *(int *)((0xC246FE0 + (R13 << 2)));
    R14 = ((R13 << 2));
    R2 = (0x3);
    R3 = (t11);
    R9 = (0xC246FE0);
    goto L_C092A38;
    L_C092A38:;
    t17 = (int)R3 <= (int)(unsigned char)(*(signed char *)(((R2 + R6) + 0x0)));
    if (t17) goto L_C092A6C;
    goto L_C092A42;
    L_C092A42:;
    (((struct o394_uint *)(R4))->v) = 0x1;
    R0 = (0x394);
    goto L_C092BF2;
    L_C092BF2:;
    return R0;
    L_C092A6C:;
    t21 = (int)(*(int *)((R9 + R14))) >= (int)(unsigned char)(*(signed char *)(((0x2 + R6) + 0x0)));
    R0 = (R14);
    if (t21) goto L_C092A82;
    goto L_C092A7E;
    L_C092A7E:;
    goto L_C092BF2;
    L_C092A82:;
    t24 = (*(signed char *)((R6 + 0x2))) == 0;
    R8 = (0xC246FE8);
    if (t24) goto L_C092AB0;
    goto L_C092A8A;
    L_C092A8A:;
    t26 = *(int *)((0xC246DF0 + R14));
    t29 = (*(int *)((R8 + R14))) == (*(int *)(((((((t26 - 1) << 1) + (t26 - 1)) << 2) + ((R13 * R11) + R10)) + 0x8)));
    R0 = (R14);
    if (t29) goto L_C092AB0;
    goto L_C092AAC;
    L_C092AAC:;
    goto L_C092BF2;
    L_C092AB0:;
    t31 = *(int *)((R7 + 0x0));
    R0 = ((((t31 == 0)) ? 1 : 0));
    if ((((((t31 == 0)) ? 1 : 0) & 0x202) == 0)) goto L_C092AC0;
    goto L_C092ABC;
    L_C092ABC:;
    goto L_C092BF2;
    L_C092AC0:;
    t35 = ((unsigned short)(*(short *)((R6 + 0xC))) & 1) == 0;
    if (t35) goto L_C092AD4;
    goto L_C092AC8;
    L_C092AC8:;
    t37 = ((((struct oD8_int *)(R4))->v)) != 0;
    R0 = (0xD8);
    if (t37) goto L_C092AD4;
    goto L_C092AD0;
    L_C092AD0:;
    goto L_C092BF2;
    L_C092AD4:;
    t39 = *(short *)((R6 + 0xC));
    R0 = ((unsigned short)t39);
    if ((((unsigned short)t39 & 2) == 0)) goto L_C092AE8;
    goto L_C092ADC;
    L_C092ADC:;
    t43 = (unsigned int)(*(int *)((R7 + 0x28))) >= (unsigned int)0xA;
    if (t43) goto L_C092AE8;
    goto L_C092AE4;
    L_C092AE4:;
    goto L_C092BF2;
    L_C092AE8:;
    t45 = ((*(int *)((R12 + 0x0))) & 0x100) == 0;
    if (t45) goto L_C092AFA;
    goto L_C092AF0;
    L_C092AF0:;
    *(unsigned int *)((R12 + 0x0)) = ((*(int *)((R12 + 0x0))) | (((int)R13 >= 0) ? (0x200000 << (R13 & 31)) : ((-(int)R13 & 31) ? ((int)0x200000 >> (-(int)R13 & 31)) : ((int)0x200000 >> 31))));
    goto L_C092AFA;
    L_C092AFA:;
    t48 = ((*(int *)((R7 + 0x0))) & 0x200) == 0;
    R4 = (0xC246FD8);
    if (t48) goto L_C092B78;
    goto L_C092B04;
    L_C092B04:;
    t50 = *(short *)((R6 + 0x4));
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
    R4 = ((t53 + 0x1));
    R6 = ((R5 + (((unsigned short)t58 << 2) << 2)));
    goto L_C092BD4;
    L_C092BD4:;
    t61 = *(short *)((R6 + 0xC));
    R0 = ((unsigned short)t61);
    if ((((unsigned short)t61 & 32) == 0)) goto L_C092BF2;
    goto L_C092BDC;
    L_C092BDC:;
    t64 = *(short *)((R6 + 0x4));
    *(unsigned int *)(((((R13 * R11) + R10) + (((R4 << 1) + R4) << 2)) + 0xC)) = (unsigned short)t64;
    R0 = ((unsigned short)t64);
    goto L_C092BF2;
    L_C092B78:;
    t66 = *(int *)((R7 + 0x0));
    R0 = (t66);
    if (((t66 & 2) == 0)) goto L_C092BF2;
    goto L_C092B7E;
    L_C092B7E:;
    t69 = *(short *)((R6 + 0x6));
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
    R4 = ((t72 + 0x1));
    R6 = ((R5 + (((unsigned short)t77 << 2) << 2)));
    goto L_C092BD4;
}


