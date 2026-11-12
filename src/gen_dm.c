/* Straight-line functions with calls and guards (batch gen_dm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c038732(int, int, int, int, int, int, int);
int FUN_0c039288(int, int, int);
int FUN_0c039354(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0cc6dc(void);
int FUN_0c0cc720(void);
int FUN_0c0d6c52(int);
int FUN_0c0da2e0(void);
int FUN_0c0db0a0(int, int);
int FUN_0c0e262a(int);
int FUN_0c0e40ec(int, int, int);
int _divls(void);
int _modls(int);
int FUN_0c22ee60(void);
int FUN_0c22ee8c(int);
int FUN_0c22eeb2(int, int, int);
int check_cache(int);
int check_caps(int);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueEntry(int, int, int);
int memset(int, int, int);
int nlPrintf(int, ...);
int set_fat(int, int, int);
int set_vmstime(int, int);
int vmsfs_mediainfo_retry(int, int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int write_dir_all(int);
int write_fat(int);
int write_sys(int);
int FUN_0c03a112(int a4);
int vmsfs_format(int a4, int a5, int a6, int a7, int a8);
int FUN_0c22f312(int a4, int a5, int a6, int a7, int a8, int a9);
void FUN_0c0d5d94(void);
int FUN_0c065bb2(int a4, int a5, int a6, int a7);
int FUN_0c22e3f4(int a4, int a5, int a6, int a7, int a8, int a9);
struct o4E_uchar { char p[0x4E]; unsigned char v; };
struct o4F_uchar { char p[0x4F]; unsigned char v; };
struct o32_short { char p[0x32]; short v; };
struct o580_int { char p[0x580]; int v; };
struct o580_uint { char p[0x580]; unsigned int v; };
struct o5CC_int { char p[0x5CC]; int v; };
struct o5D4_int { char p[0x5D4]; int v; };
struct o5D4_uint { char p[0x5D4]; unsigned int v; };
struct o5D8_int { char p[0x5D8]; int v; };
struct o5DC_int { char p[0x5DC]; int v; };
struct o5E8_int { char p[0x5E8]; int v; };
struct o5E8_uint { char p[0x5E8]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };


int FUN_0c03a112(int a4)
{
    int t1;
    int t2;
    int t143;
    int t5;
    int t133;
    int t8;
    int t9;
    int t10;
    int t19;
    int t22;
    int t23;
    int t24;
    int t26;
    int t44;
    int t59;
    int t73;
    int t75;
    int t76;
    int t90;
    int t92;
    int t93;
    int t107;
    int t36;
    int t37;
    int t51;
    int t52;
    int t66;
    int t67;
    int t83;
    int t84;
    int t100;
    int t101;
    int t114;
    int t115;
    int t129;
    int t130;
    int stk[23];

    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t1 = (((struct oC4_int *)(a4))->v);
    t2 = *(int *)(((((((struct oC0_int *)(a4))->v)) << 2) + 0xC195AFC));
    t143 = 0x5CC;
    if (((((struct o5CC_int *)(a4))->v)) == 0) {
    } else {
        t5 = (((struct oC8_int *)(a4))->v);
        t133 = t5;
        if ((t5 & 64) != 0) {
        } else {
            *(unsigned int *)(((int)stk + 32)) = (*(int *)(((0x5D0 + a4) + 0x8)));
            *(unsigned int *)(((int)stk + 28)) = (*(int *)(((0x5D0 + a4) + 0xC)));
            *(unsigned int *)(((int)stk + 24)) = (((int)stk + 16) + 0x14);
            t8 = (((int)stk + 16) + 0x14);
            for (;;) {
                if ((unsigned int)t8 >= (unsigned int)((((int)stk + 16) + 0x14) + 0x18)) {
                    break;
                }
                *(unsigned int *)((t8 + 0x0)) = 0x0;
                t8 = (t8 + 0x4);
            }
            *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 16) + 0x14) + 0x4);
            t9 = 0x0;
            for (;;) {
                (((struct o580_uint *)(a4))->v) = t9;
                for (;;) {
                    t10 = FUN_0c039354(a4);
                    if (t10 == 0) {
                        break;
                    }
                    *(unsigned int *)((((t9 << 2) + (((int)stk + 16) + 0x14)) + 0x0)) = 0x1;
                }
                if ((((((struct o5E8_int *)(a4))->v)) == 0) && (t9 == 1)) {
                    (((struct o5D4_uint *)(a4))->v) = (((((struct o5D4_int *)(a4))->v)) + 0x2);
                    *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x0)) = 0x1;
                    (((struct o5E8_uint *)(a4))->v) = 0x1;
                }
                if ((*(int *)(((((int)stk + 16) + 0x14) + (((((struct o580_int *)(a4))->v)) << 2)))) != 0) {
                    t19 = 0x0;
                    for (;;) {
                        t22 = *(int *)((((((((struct o580_int *)(a4))->v)) << 2) + (0x5D0 + a4)) + 0x0));
                        t23 = *(signed char *)((t19 + (((((((struct o580_int *)(a4))->v)) * 0x1E) + (0x96 + (t2 + (t1 * 0x28A)))) + ((t22 << 1) + (t22 << 2)))));
                        t24 = *(int *)(((0x5D0 + a4) + (t19 << 2)));
                        t26 = (t19 << 2);
                        t19 = (t19 + 0x1);
                        if ((int)t24 < (int)(unsigned char)t23) {
                            *(unsigned int *)((((0x5D0 + a4) + t26) + 0x0)) = (unsigned char)t23;
                            *(unsigned int *)(((((int)stk + 16) + 0x14) + t26)) = 0x1;
                        }
                        if ((int)t19 >= (int)0x6) {
                            break;
                        }
                    }
                    t36 = (unsigned char)t23;
                    t37 = (0x5D0 + a4);
                }
                t9 = (t9 + 0x1);
                if ((int)t9 >= (int)0x6) {
                    break;
                }
            }
            if ((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) != 0) {
                FUN_0c039288(a4, 0x1, 0x0);
                t44 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 16)) = (t44 + 0x1);
                FUN_0c038732(a4, 0x1, 0x1, 0x1, 0xA, (0x1EA + (t2 + (t1 * 0x28A))), ((t44 + 0x1) - 1));
            } else {
                t51 = t36;
                t52 = t37;
            }
            if ((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) != 0) {
                FUN_0c039288(a4, 0x0, 0x1);
                FUN_0c039288(a4, 0x9, 0x1);
                FUN_0c039288(a4, 0x2, 0x1);
                t59 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 16)) = (t59 + 0x1);
                FUN_0c038732(a4, 0x9, 0xA, 0xD, 0xA, (0x214 + (t2 + (t1 * 0x28A))), ((t59 + 0x1) - 1));
            } else {
                t66 = t51;
                t67 = t52;
            }
            if ((*(int *)(((((int)stk + 16) + 0x14) + 0x8))) != 0) {
                FUN_0c039288(a4, 0x3, 0x2);
                FUN_0c039288(a4, 0x4, 0x2);
                FUN_0c039288(a4, 0x5, 0x2);
                t73 = *(int *)(((int)stk + 32));
                t75 = *(short *)(((((((t73 << 2) + t73) << 1) + (0x226 + (t2 + (t1 * 0x28A)))) + (((((struct o5D8_int *)(a4))->v)) << 1)) + 0x0));
                t76 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 16)) = (t76 + 0x1);
                FUN_0c038732(a4, 0x3, 0x4, 0x5, 0xA, ((((t75 << 1) + t75) << 2) + (0x1F0 + (t2 + (t1 * 0x28A)))), ((t76 + 0x1) - 1));
            } else {
                t83 = t66;
                t84 = t67;
            }
            if ((*(int *)(((((int)stk + 16) + 0x14) + 0xC))) != 0) {
                FUN_0c039288(a4, 0x6, 0x3);
                FUN_0c039288(a4, 0x7, 0x3);
                FUN_0c039288(a4, 0x8, 0x3);
                t90 = *(int *)(((int)stk + 28));
                t92 = (((struct o32_short *)((((((t90 << 2) + t90) << 1) + (0x226 + (t2 + (t1 * 0x28A)))) + (((((struct o5DC_int *)(a4))->v)) << 1))))->v);
                t93 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 16)) = (t93 + 0x1);
                FUN_0c038732(a4, 0x6, 0x7, 0x8, 0xA, (((((t92 << 1) + t92) << 2) + (0x1F0 + (t2 + (t1 * 0x28A)))) + 0x6), ((t93 + 0x1) - 1));
            } else {
                t100 = t83;
                t101 = t84;
            }
            if ((*(int *)(((((int)stk + 16) + 0x14) + 0x10))) != 0) {
                FUN_0c039288(a4, 0xA, 0x4);
                FUN_0c039288(a4, 0xB, 0x4);
                FUN_0c039288(a4, 0xC, 0x4);
                t107 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 16)) = (t107 + 0x1);
                FUN_0c038732(a4, 0xB, 0xC, 0xC, 0xA, (0x21A + (t2 + (t1 * 0x28A))), ((t107 + 0x1) - 1));
            } else {
                t114 = t100;
                t115 = t101;
            }
            if ((*(int *)(((((int)stk + 16) + 0x14) + 0x14))) != 0) {
                FUN_0c039288(a4, 0xD, 0x5);
                FUN_0c039288(a4, 0xE, 0x5);
                FUN_0c039288(a4, 0xF, 0x5);
                FUN_0c038732(a4, 0xE, 0xF, 0xF, 0xA, ((0x21A + (t2 + (t1 * 0x28A))) + 0x6), ((*(int *)(((int)stk + 16)))));
            } else {
                t129 = t114;
                t130 = t115;
            }
            t133 = (FUN_0c0cc3f8(0x22CA9, t129, t130, 0x0));
        }
        t143 = t133;
    }
    return t143;
}

int vmsfs_format(int a4, int a5, int a6, int a7, int a8)
{
    int stk[14];
    register int t212;
    register int t1;
    register int t3;
    register int t11;
    register int t201;
    register int t190;
    register int t22;
    register int t26;
    register int t174;
    register int t27;
    register int t167;
    register int t28;
    register int t35;
    register int t38;
    register int t39;
    register int t46;
    register int t47;
    register int t48;
    register int t50;
    register int t59;
    register int t68;
    register int t73;
    register int t78;
    register int t84;
    register int t90;
    register int t96;
    register int t102;
    register int t108;
    register int t114;
    register int t120;
    register int t122;
    register int t123;
    register int t126;
    register int t127;
    register int t136;
    register int t145;
    register int t161;
    register int t163;
    register int t182;
    register int t36;
    register int t37;
    register int t45;

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    *(unsigned int *)(((int)stk + 4)) = (a4 * 0x148);
    t212 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC956768) + 0x2))) == 0) {
    } else {
        if (a8 != 0) {
            *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x30)) = 0x1;
            t1 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x4));
            *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x34)) = (*(int *)(((0xC239D10 + ((((t1 << 2) + t1) << 2) << 2)) + 0xC)));
        } else {
            *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x30)) = 0x1;
            t3 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x4));
            *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x34)) = ((int)((int)(*(int *)(((((((t3 << 2) + t3) << 2) << 2) + 0xC239D10) + 0xC))) / (int)0xA));
        }
        t11 = vmsio_ismount(a4);
        t201 = 0xFFFFFF01;
        if (t11 == 0) {
        } else {
            t190 = 0xFFFFFF01;
            if ((*(signed char *)((((*(int *)(((int)stk + 4))) + 0xC956768) + 0x8))) == 0) {
            } else {
                memset((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x0, 0x200);
                t22 = vmsfs_write_retry(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x8))), (*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))));
                if ((int)t22 < 0) {
                    t182 = 0xFFFFFF81;
                    if (t22 != 0xFFFFFF40) {
                        t182 = 0xFFFFFF01;
                    }
                } else {
                    t26 = vmsfs_mediainfo_retry(a4, (*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))));
                    t174 = 0xFFFFFF01;
                    if ((int)t26 < 0) {
                    } else {
                        t27 = check_caps(((a4 * 0x148) + 0xC956768));
                        t167 = 0xFFFFFF83;
                        if ((int)t27 >= 0) {
                            t28 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x1C));
                            *(unsigned int *)((t28 + 0x30)) = (*(int *)((t28 + 0x1C)));
                            memset((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x0, 0x200);
                            t39 = *(int *)(((int)stk + 8));
                            t35 = (memset(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))) + 0x10), 0x20, 0x20));
                            t38 = 0x0;
                            for (;;) {
                                if ((int)t38 >= (int)0x20) {
                                    break;
                                }
                                t35 = (*(int *)((((a4 * 0x148) + 0xC956768) + 0x20)));
                                t36 = t38;
                                t37 = (*(signed char *)((t39 + 0x0)));
                                t39 = (t39 + 0x1);
                                t36 = (t36 + 0x10);
                                t38 = (t38 + 0x1);
                                *(unsigned char *)((t36 + t35)) = t37;
                            }
                            set_vmstime((((int)stk + 0) + 0x10), (*(int *)(((int)stk + 0))));
                            t46 = ((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))) + 0x30);
                            t47 = 0x0;
                            t48 = (((int)stk + 0) + 0x10);
                            for (;;) {
                                if ((int)t47 >= (int)0x8) {
                                    break;
                                }
                                t45 = (*(signed char *)((t48 + 0x0)));
                                t48 = (t48 + 0x1);
                                t47 = (t47 + 0x1);
                                *(unsigned char *)((t46 + 0x0)) = t45;
                                t46 = (t46 + 0x1);
                            }
                            t50 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x1C));
                            *(unsigned int *)(((int)stk + 0)) = t50;
                            *(unsigned int *)(((int)stk + 4)) = (*(int *)((t50 + 0xC)));
                            *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((int)stk + 0))) + 0x14)));
                            t59 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x42, (*(int *)(((*(int *)(((int)stk + 0))) + 0x4))), t48, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            (((struct o4E_uchar *)((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20)))))->v) = (*(int *)(((int)stk + 12)));
                            (((struct o4F_uchar *)((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20)))))->v) = 0x0;
                            t68 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x40, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x0))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            t73 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x4A, (*(int *)(((int)stk + 8))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            t78 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x46, (*(int *)(((int)stk + 4))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            t84 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x4C, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x18))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            t90 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x48, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x10))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            t96 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x50, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x1C))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            t102 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x52, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x20))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            t108 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x54, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x34))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            t114 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x56, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x38))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            t120 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x44, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x0))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            t122 = (memset((((a4 << 8) << 1) + 0xC95B674), 0x0, 0x200));
                            t123 = 0x0;
                            for (;;) {
                                if ((int)t123 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x0)))) {
                                    t126 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x1C));
                                    t127 = *(int *)((t126 + 0x18));
                                    *(volatile int *)(((0x30 + t126) + 0x0));
                                    *(unsigned int *)(((int)stk + 0)) = t127;
                                    t122 = (memset((*(int *)((((a4 * 0x148) + 0xC956768) + 0x28))), 0x0, ((t127 << 8) << 1)));
                                    t122 = (write_dir_all(a4));
                                    t123 = 0xFFFA;
                                    t122 = (set_fat(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x8))), t123));
                                    t136 = 0x0;
                                    for (;;) {
                                        if ((int)t136 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x10)))) {
                                            break;
                                        }
                                        t122 = (set_fat(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0xC))) + t136), t123));
                                        t136 = (t136 + 0x1);
                                    }
                                    t122 = (set_fat(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x8))), t123));
                                    t145 = 0x0;
                                    for (;;) {
                                        if ((int)t145 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x10)))) {
                                            break;
                                        }
                                        t122 = (set_fat(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0xC))) + t145), t123));
                                        t145 = (t145 + 0x1);
                                    }
                                    t122 = (write_fat(a4));
                                    t122 = (memset((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x55, 0x10));
                                    t122 = (write_sys(a4));
                                    t122 = (memset((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x0, 0x10));
                                    t122 = 0x0;
                                    *(unsigned char *)((((a4 * 0x148) + 0xC956768) + 0xB)) = t122;
                                    *(unsigned char *)((((a4 * 0x148) + 0xC956768) + 0xC)) = t122;
                                    *(unsigned char *)((((a4 * 0x148) + 0xC956768) + 0xA)) = t122;
                                    t122 = (check_cache(a4));
                                    return t122;
                                }
                                t161 = 0x0;
                                if (a8 != 0) {
                                    t122 = (vmsfs_write_retry(a4, t123, (((a4 << 8) << 1) + 0xC95B674)));
                                    t161 = t122;
                                }
                                t122 = t161;
                                if (t122 != 0xFFFFFF01) {
                                    t163 = 0xFFFF;
                                    if (t122 != 0xFFFFFF40) {
                                        t163 = 0xFFFC;
                                    }
                                    t122 = (set_fat(a4, t123, t163));
                                    t123 = (t123 + 0x1);
                                    continue;
                                }
                                break;
                            }
                            t167 = 0xFFFFFF01;
                        }
                        t174 = t167;
                    }
                    t182 = t174;
                }
                t190 = t182;
            }
            t201 = t190;
        }
        t212 = t201;
    }
    return t212;
}




