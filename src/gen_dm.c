/* Straight-line functions with calls and guards (batch gen_dm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c038732(int, int, int, int, int, int, int);
int FUN_0c039288(int, int, int);
int FUN_0c039354(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cc6dc(void);
int FUN_0c0cc720(void);
int FUN_0c0d6c52(int);
int FUN_0c0da2e0(void);
int FUN_0c0db0a0(int, int);
int FUN_0c0e262a(int);
int FUN_0c0e40ec(int, int, int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(int);
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
    t1 = *(int *)((a4 + 0xC4));
    t2 = *(int *)((((*(int *)((a4 + 0xC0))) << 2) + 0xC195AFC));
    t143 = 0x5CC;
    if ((*(int *)((a4 + 0x5CC))) == 0) {
    } else {
        t5 = *(int *)((a4 + 0xC8));
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
                *(unsigned int *)((a4 + 0x580)) = t9;
                for (;;) {
                    t10 = FUN_0c039354(a4);
                    if (t10 == 0) {
                        break;
                    }
                    *(unsigned int *)((((t9 << 2) + (((int)stk + 16) + 0x14)) + 0x0)) = 0x1;
                }
                if (((*(int *)((a4 + 0x5E8))) == 0) && (t9 == 1)) {
                    *(unsigned int *)((a4 + 0x5D4)) = ((*(int *)((a4 + 0x5D4))) + 0x2);
                    *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x0)) = 0x1;
                    *(unsigned int *)((a4 + 0x5E8)) = 0x1;
                }
                if ((*(int *)(((((int)stk + 16) + 0x14) + ((*(int *)((a4 + 0x580))) << 2)))) != 0) {
                    t19 = 0x0;
                    for (;;) {
                        t22 = *(int *)(((((*(int *)(((0x580 + a4) + 0x0))) << 2) + (0x5D0 + a4)) + 0x0));
                        t23 = *(signed char *)((t19 + ((((*(int *)((a4 + 0x580))) * 0x1E) + (0x96 + (t2 + (t1 * 0x28A)))) + ((t22 << 1) + (t22 << 2)))));
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
                t75 = *(short *)(((((((t73 << 2) + t73) << 1) + (0x226 + (t2 + (t1 * 0x28A)))) + ((*(int *)((a4 + 0x5D8))) << 1)) + 0x0));
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
                t92 = *(short *)((((((((t90 << 2) + t90) << 1) + (0x226 + (t2 + (t1 * 0x28A)))) + ((*(int *)((a4 + 0x5DC))) << 1)) + 0x32) + 0x0));
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
            t133 = (FUN_0c0cc3f8(0x22CA9, t129, t130, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28)));
        }
        t143 = t133;
    }
    return t143;
}

int vmsfs_format(int a4, int a5, int a6, int a7, int a8)
{
    int t213;
    int t1;
    int t3;
    int t14;
    int t202;
    int t191;
    int t24;
    int t25;
    int t28;
    int t175;
    int t29;
    int t168;
    int t30;
    int t36;
    int t37;
    int t40;
    int t41;
    int t48;
    int t49;
    int t50;
    int t52;
    int t61;
    int t70;
    int t75;
    int t80;
    int t86;
    int t92;
    int t98;
    int t104;
    int t110;
    int t116;
    int t122;
    int t124;
    int t125;
    int t128;
    int t129;
    int t137;
    int t146;
    int t162;
    int t164;
    int t183;
    int t38;
    int t39;
    int t47;
    int stk[15];

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    t213 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC956768) + 0x2))) == 0) {
    } else {
        if (a8 != 0) {
            *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x30)) = 0x1;
            t1 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x4));
            *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x34)) = (*(int *)(((0xC239D10 + ((((t1 << 2) + t1) << 2) << 2)) + 0xC)));
        } else {
            *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x30)) = 0x1;
            t3 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x4));
            *(volatile int *)(((((((t3 << 2) + t3) << 2) << 2) + 0xC239D10) + 0xC));
            *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x34)) = (FUN_0c0e5dc0());
        }
        t14 = vmsio_ismount(a4);
        t202 = 0xFFFFFF01;
        if (t14 == 0) {
        } else {
            t191 = 0xFFFFFF01;
            if ((*(signed char *)((((*(int *)(((int)stk + 8))) + 0xC956768) + 0x8))) == 0) {
            } else {
                memset((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x0, 0x200);
                t24 = vmsfs_write_retry(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x8))), (*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))));
                if ((int)t24 < 0) {
                    t25 = 0xFFFFFF81;
                    if (t24 != 0xFFFFFF40) {
                        t25 = 0xFFFFFF01;
                    }
                    t183 = t25;
                } else {
                    t28 = vmsfs_mediainfo_retry(a4, (*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))));
                    t175 = 0xFFFFFF01;
                    if ((int)t28 < 0) {
                    } else {
                        t29 = check_caps(((a4 * 0x148) + 0xC956768));
                        t168 = 0xFFFFFF83;
                        if ((int)t29 >= 0) {
                            t30 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x1C));
                            *(unsigned int *)((t30 + 0x30)) = (*(int *)((t30 + 0x1C)));
                            memset((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x0, 0x200);
                            t36 = *(int *)(((int)stk + 12));
                            t37 = (memset(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))) + 0x10), 0x20, 0x20));
                            t40 = 0x0;
                            t41 = t36;
                            for (;;) {
                                if ((int)t40 >= (int)0x20) {
                                    break;
                                }
                                t37 = (*(int *)((((a4 * 0x148) + 0xC956768) + 0x20)));
                                t38 = t40;
                                t39 = (*(signed char *)((t41 + 0x0)));
                                t41 = (t41 + 0x1);
                                t38 = (t38 + 0x10);
                                t40 = (t40 + 0x1);
                                *(unsigned char *)((t38 + t37)) = t39;
                            }
                            set_vmstime((((int)stk + 4) + 0x10), (*(int *)(((int)stk + 4))));
                            t48 = ((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))) + 0x30);
                            t49 = 0x0;
                            t50 = (((int)stk + 4) + 0x10);
                            for (;;) {
                                if ((int)t49 >= (int)0x8) {
                                    break;
                                }
                                t47 = (*(signed char *)((t50 + 0x0)));
                                t50 = (t50 + 0x1);
                                t49 = (t49 + 0x1);
                                *(unsigned char *)((t48 + 0x0)) = t47;
                                t48 = (t48 + 0x1);
                            }
                            t52 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x1C));
                            *(unsigned int *)(((int)stk + 4)) = t52;
                            *(unsigned int *)(((int)stk + 8)) = (*(int *)((t52 + 0xC)));
                            *(unsigned int *)(((int)stk + 12)) = (*(int *)(((*(int *)(((int)stk + 4))) + 0x14)));
                            t61 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x42, (*(int *)(((*(int *)(((int)stk + 4))) + 0x4))), t50);
                            *(unsigned char *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))) + 0x4E)) = (*(int *)(((int)stk + 16)));
                            *(unsigned char *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))) + 0x4F)) = 0x0;
                            t70 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x40, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x0))));
                            t75 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x4A, (*(int *)(((int)stk + 12))));
                            t80 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x46, (*(int *)(((int)stk + 8))));
                            t86 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x4C, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x18))));
                            t92 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x48, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x10))));
                            t98 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x50, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x1C))));
                            t104 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x52, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x20))));
                            t110 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x54, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x34))));
                            t116 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x56, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x38))));
                            t122 = ((int (*)(int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x44, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x0))));
                            t124 = (memset((((a4 << 8) << 1) + 0xC95B674), 0x0, 0x200));
                            t125 = 0x0;
                            for (;;) {
                                if ((int)t125 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x0)))) {
                                    t128 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x1C));
                                    t129 = *(int *)((t128 + 0x18));
                                    *(volatile int *)(((0x30 + t128) + 0x0));
                                    *(unsigned int *)(((int)stk + 4)) = t129;
                                    t124 = (memset((*(int *)((((a4 * 0x148) + 0xC956768) + 0x28))), 0x0, ((t129 << 8) << 1)));
                                    t124 = (write_dir_all(a4));
                                    t125 = 0xFFFA;
                                    t124 = (set_fat(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x8))), t125));
                                    t137 = 0x0;
                                    for (;;) {
                                        if ((int)t137 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x10)))) {
                                            break;
                                        }
                                        t124 = (set_fat(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0xC))) + t137), t125));
                                        t137 = (t137 + 0x1);
                                    }
                                    t124 = (set_fat(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x8))), t125));
                                    t146 = 0x0;
                                    for (;;) {
                                        if ((int)t146 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x10)))) {
                                            break;
                                        }
                                        t124 = (set_fat(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0xC))) + t146), t125));
                                        t146 = (t146 + 0x1);
                                    }
                                    t124 = (write_fat(a4));
                                    t124 = (memset((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x55, 0x10));
                                    t124 = (write_sys(a4));
                                    t124 = (memset((*(int *)((((a4 * 0x148) + 0xC956768) + 0x20))), 0x0, 0x10));
                                    t124 = 0x0;
                                    *(unsigned char *)((((a4 * 0x148) + 0xC956768) + 0xB)) = t124;
                                    *(unsigned char *)((((a4 * 0x148) + 0xC956768) + 0xC)) = t124;
                                    *(unsigned char *)((((a4 * 0x148) + 0xC956768) + 0xA)) = t124;
                                    t124 = (check_cache(a4));
                                    return t124;
                                }
                                t162 = 0x0;
                                if (a8 != 0) {
                                    t124 = (vmsfs_write_retry(a4, t125, (((a4 << 8) << 1) + 0xC95B674)));
                                    t162 = t124;
                                }
                                t124 = t162;
                                if (t124 != 0xFFFFFF01) {
                                    t164 = 0xFFFF;
                                    if (t124 != 0xFFFFFF40) {
                                        t164 = 0xFFFC;
                                    }
                                    t124 = (set_fat(a4, t125, t164));
                                    t125 = (t125 + 0x1);
                                    continue;
                                }
                                break;
                            }
                            t168 = 0xFFFFFF01;
                        }
                        t175 = t168;
                    }
                    t183 = t175;
                }
                t191 = t183;
            }
            t202 = t191;
        }
        t213 = t202;
    }
    return t213;
}

int FUN_0c22f312(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t2;
    int t5;
    int t6;
    int t15;
    int t8;
    int t9;
    int t10;
    int t11;
    int t177;
    int t49;
    int t71;
    int t79;
    int t99;
    int t105;
    int t142;
    int t106;
    int t109;
    int t7;
    int t12;
    int t13;
    int t168;
    int t159;
    int t150;
    int t134;
    int stk[13];

    *(unsigned short *)(((int)stk + 8)) = a4;
    t0 = ((~(((~a6) + 0x1) & 0x1F)) + 0x1);
    if ((int)a6 >= 0) {
        t0 = (a6 & 0x1F);
    }
    t2 = a6;
    if (t0 != 0) {
        t2 = (a6 + (0x20 - t0));
    }
    t5 = *(short *)(((int)stk + 8));
    t6 = *(int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x8));
    t15 = 0x0;
    if (t6 != 0) {
        t8 = t5;
        t9 = t6;
        t10 = 0x0;
        for (;;) {
            t11 = *(int *)((t9 + 0xC));
            if (((int)t11 <= (int)a5) && ((t12 = *(int *)((t9 + 0x10)), t8 = t12, t8 = (t8 + t11), (int)t8 > (int)a5) && (((int)t11 <= (int)(a5 + a6)) && (t13 = *(int *)((t9 + 0x10)), t7 = t13, t7 = (t7 + t11), (int)t7 >= (int)(a5 + a6))))) {
                t10 = t9;
                t9 = 0x0;
            } else {
                t9 = (*(int *)((t9 + 0x8)));
            }
            if (t9 == 0) {
                break;
            }
        }
        t15 = t10;
    }
    t177 = 0x3;
    if (t15 == 0) {
    } else {
        if ((*(int *)((t15 + 0x10))) == t2) {
            kmytex_FBDeQueueEntry((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x8), (((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0xC), t15);
            FUN_0c22eeb2(((((t5 << 2) + t5) << 2) + 0xC239EF8), (((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x4), t15);
            *(unsigned int *)((a7 + 0x8)) = (*(int *)((t15 + 0xC)));
            *(unsigned int *)((t15 + 0x14)) = a7;
            *(unsigned short *)((t15 + 0x0)) = 0x1;
            if ((*(short *)(((int)stk + 8))) == 0) {
                *(unsigned short *)((t15 + 0x0)) = ((*(short *)((t15 + 0x0))) | 0x800);
            } else {
                *(unsigned short *)((t15 + 0x0)) = ((*(short *)((t15 + 0x0))) | 0x1000);
            }
            if (a8 != 0) {
                *(unsigned short *)((t15 + 0x0)) = ((*(short *)((t15 + 0x0))) | 0x2);
            }
            if (a9 != 0) {
                *(unsigned short *)((t15 + 0x0)) = ((*(short *)((t15 + 0x0))) | 0x4);
            }
            *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10))) - (*(int *)((t15 + 0x10))));
            t168 = 0x0;
        } else {
            if ((*(int *)((t15 + 0xC))) == a5) {
                t49 = FUN_0c22ee60();
                t71 = 0x3;
                if (t49 == 0) {
                } else {
                    *(unsigned int *)((t49 + 0xC)) = (*(int *)((t15 + 0xC)));
                    *(unsigned int *)((t49 + 0x10)) = t2;
                    *(unsigned int *)((t15 + 0x10)) = ((*(int *)((t15 + 0x10))) - t2);
                    *(unsigned int *)((t15 + 0xC)) = ((*(int *)((t15 + 0xC))) + t2);
                    *(unsigned int *)(((int)stk + 4)) = ((((t5 << 2) + t5) << 2) + 0xC239EF8);
                    FUN_0c22eeb2((*(int *)(((int)stk + 4))), (((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x4), t49);
                    *(unsigned int *)((a7 + 0x8)) = (*(int *)((t49 + 0xC)));
                    *(unsigned int *)((t49 + 0x14)) = a7;
                    if ((*(short *)(((int)stk + 8))) == 0) {
                        *(unsigned short *)((t49 + 0x0)) = ((*(short *)((t49 + 0x0))) | 0x800);
                    } else {
                        *(unsigned short *)((t49 + 0x0)) = ((*(short *)((t49 + 0x0))) | 0x1000);
                    }
                    if (a8 != 0) {
                        *(unsigned short *)((t49 + 0x0)) = ((*(short *)((t49 + 0x0))) | 0x2);
                    }
                    if (a9 != 0) {
                        *(unsigned short *)((t49 + 0x0)) = ((*(short *)((t49 + 0x0))) | 0x4);
                    }
                    *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10))) - (*(int *)((t49 + 0x10))));
                    t71 = 0x0;
                }
                t159 = t71;
            } else {
                if (((*(int *)((t15 + 0xC))) + (*(int *)((t15 + 0x10)))) == (a5 + a6)) {
                    t79 = FUN_0c22ee60();
                    t99 = 0x3;
                    if (t79 != 0) {
                        *(unsigned int *)((t15 + 0x10)) = ((*(int *)((t15 + 0x10))) - t2);
                        *(unsigned int *)((t79 + 0xC)) = a5;
                        *(unsigned int *)((t79 + 0x10)) = t2;
                        *(unsigned int *)(((int)stk + 4)) = ((((t5 << 2) + t5) << 2) + 0xC239EF8);
                        FUN_0c22eeb2((*(int *)(((int)stk + 4))), (((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x4), t79);
                        *(unsigned int *)((a7 + 0x8)) = (*(int *)((t79 + 0xC)));
                        *(unsigned int *)((t79 + 0x14)) = a7;
                        if ((*(short *)(((int)stk + 8))) == 0) {
                            *(unsigned short *)((t79 + 0x0)) = ((*(short *)((t79 + 0x0))) | 0x800);
                        } else {
                            *(unsigned short *)((t79 + 0x0)) = ((*(short *)((t79 + 0x0))) | 0x1000);
                        }
                        if (a8 != 0) {
                            *(unsigned short *)((t79 + 0x0)) = ((*(short *)((t79 + 0x0))) | 0x2);
                        }
                        if (a9 != 0) {
                            *(unsigned short *)((t79 + 0x0)) = ((*(short *)((t79 + 0x0))) | 0x4);
                        }
                        *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10))) - (*(int *)((t79 + 0x10))));
                        t99 = 0x0;
                    }
                    t150 = t99;
                } else {
                    t105 = FUN_0c22ee60();
                    t142 = 0x3;
                    if (t105 != 0) {
                        t106 = FUN_0c22ee60();
                        *(unsigned int *)(((int)stk + 4)) = t106;
                        if (t106 == 0) {
                            FUN_0c22ee8c(t105);
                            t134 = 0x3;
                        } else {
                            *(unsigned int *)(((int)stk + 16)) = (*(int *)((t15 + 0x10)));
                            t109 = *(int *)((t15 + 0xC));
                            *(unsigned int *)(((int)stk + 12)) = (a5 - t109);
                            *(unsigned int *)((t15 + 0x10)) = (a5 - t109);
                            *(unsigned int *)((t105 + 0xC)) = a5;
                            *(unsigned int *)((t105 + 0x10)) = t2;
                            FUN_0c22eeb2(((((t5 << 2) + t5) << 2) + 0xC239EF8), (((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x4), t105);
                            *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0xC)) = (a5 + t2);
                            *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x10)) = (((*(int *)(((int)stk + 16))) - t2) - (*(int *)(((int)stk + 12))));
                            kmytex_FBEnQueueEntry((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0xC), (*(int *)(((int)stk + 4))), (*(int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0xC))));
                            *(unsigned int *)((a7 + 0x8)) = (*(int *)((t105 + 0xC)));
                            *(unsigned int *)((t105 + 0x14)) = a7;
                            if ((*(short *)(((int)stk + 8))) == 0) {
                                *(unsigned short *)((t105 + 0x0)) = ((*(short *)((t105 + 0x0))) | 0x800);
                            } else {
                                *(unsigned short *)((t105 + 0x0)) = ((*(short *)((t105 + 0x0))) | 0x1000);
                            }
                            if (a8 != 0) {
                                *(unsigned short *)((t105 + 0x0)) = ((*(short *)((t105 + 0x0))) | 0x2);
                            }
                            if (a9 != 0) {
                                *(unsigned short *)((t105 + 0x0)) = ((*(short *)((t105 + 0x0))) | 0x4);
                            }
                            *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10))) - (*(int *)((t105 + 0x10))));
                            t134 = 0x0;
                        }
                        t142 = t134;
                    }
                    t150 = t142;
                }
                t159 = t150;
            }
            t168 = t159;
        }
        t177 = t168;
    }
    return t177;
}

void FUN_0c0d5d94(void)
{
    int t6;
    int t18;
    int t19;
    int t23;
    int t24;
    int t25;
    int t49;
    int t57;
    int t74;
    float u97;
    float u101;
    float u112;
    float u116;
    int stk[14];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F3;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    L_C0D5D94:;
    *(unsigned int *)(((int)stk + 4)) = 0xC943554;
    R10 = (0xC943514);
    R12 = (0x0);
    R13 = (0x0);
    R8 = (0xC943514);
    R9 = (0xC943514);
    goto L_C0D6080;
    L_C0D6080:;
    if (((int)R12 >= (int)0x2)) goto L_C0D608A;
    goto L_C0D6086;
    L_C0D6086:;
    goto L_C0D5DC0;
    L_C0D5DC0:;
    t6 = *(int *)(((int)stk + 4));
    R14 = (((t6 + 0x160) + (R12 * 0x1D4)));
    if (((*(int *)((((t6 + 0x160) + (R12 * 0x1D4)) + 0x0))) != 0)) goto L_C0D5DD8;
    goto L_C0D5DD4;
    L_C0D5DD4:;
    goto L_C0D6078;
    L_C0D6078:;
    R10 = ((R10 + 0x20));
    R12 = ((R12 + 0x1));
    R8 = ((R8 + 0x20));
    R9 = ((R9 + 0x20));
    goto L_C0D6080;
    L_C0D5DD8:;
    R0 = ((R12 << 2));
    if (((*(int *)((0xC247594 + (R12 << 2)))) != 0)) goto L_C0D5DEA;
    goto L_C0D5DE6;
    L_C0D5DE6:;
    goto L_C0D6078;
    L_C0D5DEA:;
    *(unsigned int *)((R14 + 0x10)) = ((*(int *)((R14 + 0x10))) + 0x1);
    t18 = *(int *)((R14 + 0x30));
    *(unsigned int *)((R14 + 0x34)) = (((int)t18 >= 0) ? (0x1 << (t18 & 31)) : ((-(int)t18 & 31) ? ((int)0x1 >> (-(int)t18 & 31)) : ((int)0x1 >> 31)));
    t19 = *(int *)((R14 + 0x30));
    R11 = (0x1);
    R4 = (t19);
    if ((t19 != 0)) goto L_C0D5E04;
    goto L_C0D5E00;
    L_C0D5E00:;
    goto L_C0D5FC0;
    L_C0D5FC0:;
    t23 = *(int *)((R14 + 0x40));
    *(unsigned int *)((R14 + 0x44)) = (((int)t23 >= 0) ? (R11 << (t23 & 31)) : ((-(int)t23 & 31) ? ((int)R11 >> (-(int)t23 & 31)) : ((int)R11 >> 31)));
    t24 = *(int *)((R14 + 0x48));
    *(unsigned int *)((R14 + 0x4C)) = (((int)t24 >= 0) ? (R11 << (t24 & 31)) : ((-(int)t24 & 31) ? ((int)R11 >> (-(int)t24 & 31)) : ((int)R11 >> 31)));
    t25 = *(int *)((R14 + 0x40));
    R0 = (t25);
    R4 = (0x4);
    if ((t25 == 1)) goto L_C0D6078;
    goto L_C0D5FE0;
    L_C0D5FE0:;
    if ((R0 == 2)) goto L_C0D6004;
    goto L_C0D5FE4;
    L_C0D5FE4:;
    if ((R0 == 3)) goto L_C0D6078;
    goto L_C0D5FE8;
    L_C0D5FE8:;
    if ((R0 == 4)) goto L_C0D6078;
    goto L_C0D5FEC;
    L_C0D5FEC:;
    if ((R0 == 5)) goto L_C0D6078;
    goto L_C0D5FF0;
    L_C0D5FF0:;
    if ((R0 == 6)) goto L_C0D600E;
    goto L_C0D5FF4;
    L_C0D5FF4:;
    if ((R0 == 7)) goto L_C0D602A;
    goto L_C0D5FF8;
    L_C0D5FF8:;
    if ((R0 == 8)) goto L_C0D6038;
    goto L_C0D5FFC;
    L_C0D5FFC:;
    if ((R0 == 9)) goto L_C0D6064;
    goto L_C0D6000;
    L_C0D6000:;
    goto L_C0D6078;
    L_C0D6064:;
    if ((((*(int *)((R14 + 0x1C))) & 0x5) == 0)) goto L_C0D6078;
    goto L_C0D606C;
    L_C0D606C:;
    R4 = (0x200);
    goto L_C0D606E;
    L_C0D606E:;
    *(unsigned int *)((R14 + 0x5C)) = R4;
    *(unsigned int *)((R14 + 0x64)) = 0x3;
    R0 = (0x64);
    goto L_C0D6078;
    L_C0D6038:;
    *(unsigned int *)((R14 + 0x54)) = (*(int *)((R14 + 0x98)));
    *(unsigned int *)((R14 + 0x58)) = R4;
    R0 = (0x58);
    if ((((*(int *)((R14 + 0x24))) & 0x1000000) == 0)) goto L_C0D6078;
    goto L_C0D604C;
    L_C0D604C:;
    R4 = (0x400);
    goto L_C0D606E;
    L_C0D602A:;
    *(unsigned int *)((R14 + 0x54)) = (*(int *)((R14 + 0x98)));
    goto L_C0D6032;
    L_C0D6032:;
    *(unsigned int *)((R14 + 0x58)) = R4;
    R0 = (0x58);
    goto L_C0D6078;
    L_C0D600E:;
    t49 = *(int *)((R14 + 0x50));
    R0 = (0x50);
    if ((((((int)t49 >= 0) ? (0x10 << (t49 & 31)) : ((-(int)t49 & 31) ? ((int)0x10 >> (-(int)t49 & 31)) : ((int)0x10 >> 31))) & (*(int *)((R14 + 0x24)))) != 0)) goto L_C0D6078;
    goto L_C0D601E;
    L_C0D601E:;
    *(unsigned int *)(((0x54 + R14) + 0x0)) = (*(int *)((R14 + 0x98)));
    goto L_C0D6032;
    L_C0D6004:;
    *(unsigned int *)((R14 + 0x54)) = (*(int *)((R14 + 0x98)));
    goto L_C0D6032;
    L_C0D5E04:;
    R0 = (0x40);
    if (((*(int *)((R14 + 0x40))) != R4)) goto L_C0D5E10;
    goto L_C0D5E0C;
    L_C0D5E0C:;
    goto L_C0D5FC0;
    L_C0D5E10:;
    *(unsigned int *)((R14 + 0x10)) = R13;
    t57 = *(int *)((R14 + R0));
    R0 = (t57);
    if ((t57 == 1)) goto L_C0D5E50;
    goto L_C0D5E18;
    L_C0D5E18:;
    if ((R0 == 2)) goto L_C0D5E50;
    goto L_C0D5E1C;
    L_C0D5E1C:;
    if ((R0 == 3)) goto L_C0D5E50;
    goto L_C0D5E20;
    L_C0D5E20:;
    if ((R0 == 4)) goto L_C0D5E4C;
    goto L_C0D5E24;
    L_C0D5E24:;
    if ((R0 == 5)) goto L_C0D5E50;
    goto L_C0D5E28;
    L_C0D5E28:;
    if ((R0 == 6)) goto L_C0D5E50;
    goto L_C0D5E2C;
    L_C0D5E2C:;
    if ((R0 == 7)) goto L_C0D5E50;
    goto L_C0D5E30;
    L_C0D5E30:;
    if ((R0 == 9)) goto L_C0D5E50;
    goto L_C0D5E34;
    L_C0D5E34:;
    goto L_C0D5E50;
    L_C0D5E50:;
    if ((((*(int *)((R14 + 0x34))) & 0x6) == 0)) goto L_C0D5E68;
    goto L_C0D5E58;
    L_C0D5E58:;
    *(unsigned int *)((R14 + 0x74)) = R13;
    if (((*(int *)((R14 + 0x3C))) != 0)) goto L_C0D5E68;
    goto L_C0D5E62;
    L_C0D5E62:;
    *(unsigned int *)((R14 + 0x38)) = (*(int *)((R14 + 0x30)));
    *(unsigned int *)((R14 + 0x3C)) = R13;
    goto L_C0D5E68;
    L_C0D5E68:;
    if ((((*(int *)((R14 + 0x34))) & 0x246) == 0)) goto L_C0D5E78;
    goto L_C0D5E70;
    L_C0D5E70:;
    *(unsigned int *)((R14 + 0x64)) = R13;
    *(unsigned int *)((R14 + 0x58)) = R13;
    goto L_C0D5E78;
    L_C0D5E78:;
    t74 = *(int *)((R14 + 0x30));
    R0 = (t74);
    R4 = (0x7);
    F12 = (60.0f);
    F13 = (30.0f);
    F14 = (4.0f);
    F15 = (1.0f);
    if ((t74 == 1)) goto L_C0D5ECA;
    goto L_C0D5E8E;
    L_C0D5E8E:;
    if ((R0 == 2)) goto L_C0D5F5C;
    goto L_C0D5E92;
    L_C0D5E92:;
    if ((R0 != 3)) goto L_C0D5E9A;
    goto L_C0D5E96;
    L_C0D5E96:;
    goto L_C0D5FB6;
    L_C0D5FB6:;
    *(unsigned int *)((R14 + 0x40)) = (*(int *)((R14 + 0x30)));
    *(unsigned int *)((R14 + 0x48)) = R13;
    goto L_C0D5FC0;
    L_C0D5E9A:;
    if ((R0 != 4)) goto L_C0D5EA2;
    goto L_C0D5E9E;
    L_C0D5E9E:;
    goto L_C0D5FB6;
    L_C0D5EA2:;
    if ((R0 != 5)) goto L_C0D5EAA;
    goto L_C0D5EA6;
    L_C0D5EA6:;
    goto L_C0D5FB6;
    L_C0D5EAA:;
    if ((R0 != 6)) goto L_C0D5EB2;
    goto L_C0D5EAE;
    L_C0D5EAE:;
    goto L_C0D5FB6;
    L_C0D5EB2:;
    if ((R0 != 7)) goto L_C0D5EBA;
    goto L_C0D5EB6;
    L_C0D5EB6:;
    goto L_C0D5FB6;
    L_C0D5EBA:;
    if ((R0 != 8)) goto L_C0D5EC2;
    goto L_C0D5EBE;
    L_C0D5EBE:;
    goto L_C0D5FB6;
    L_C0D5EC2:;
    if ((R0 == 9)) goto L_C0D5FB6;
    goto L_C0D5EC6;
    L_C0D5EC6:;
    goto L_C0D5FB6;
    L_C0D5F5C:;
    if (((*(int *)((R14 + 0x68))) != 0)) goto L_C0D5FB6;
    goto L_C0D5F64;
    L_C0D5F64:;
    if (((R4 & (*(int *)((R14 + 0x2C)))) != 0)) goto L_C0D5F8C;
    goto L_C0D5F6A;
    L_C0D5F6A:;
    FUN_0c0da2e0();
    u97 = F14;
    u97 = u97 + F12 * ((-(*(float *)(((0x1C + R10) + 0x0)))) + F15);
    goto L_C0D5FAA;
    L_C0D5FAA:;
    *(unsigned int *)(((0x68 + R14) + 0x0)) = (FUN_0c0e5f1c(R4));
    goto L_C0D5FB6;
    L_C0D5F8C:;
    FUN_0c0da2e0();
    u101 = F14;
    u101 = u101 + F13 * ((-(*(float *)(((0x18 + R9) + 0x0)))) + F15);
    goto L_C0D5FAA;
    L_C0D5ECA:;
    if ((((*(int *)((R14 + 0x44))) & 0x20C) == 0)) goto L_C0D5EDA;
    goto L_C0D5ED4;
    L_C0D5ED4:;
    if ((((*(int *)((R14 + 0x1C))) & 64) == 0)) goto L_C0D5FB6;
    goto L_C0D5EDA;
    L_C0D5EDA:;
    if (((*(int *)((R14 + 0x68))) != 0)) goto L_C0D5FB6;
    goto L_C0D5EE2;
    L_C0D5EE2:;
    if (((R4 & (*(int *)((R14 + 0x2C)))) != 0)) goto L_C0D5F12;
    goto L_C0D5EE8;
    L_C0D5EE8:;
    FUN_0c0da2e0();
    u112 = F14;
    u112 = u112 + F12 * ((-(*(float *)(((0xC943530 + (((R12 << 2) << 2) << 1)) + 0x0)))) + F15);
    goto L_C0D5F30;
    L_C0D5F30:;
    *(unsigned int *)(((0x68 + R14) + 0x0)) = (FUN_0c0e5f1c(R4));
    goto L_C0D5FB6;
    L_C0D5F12:;
    FUN_0c0da2e0();
    u116 = F14;
    u116 = u116 + F13 * ((-(*(float *)(((0x18 + R8) + 0x0)))) + F15);
    goto L_C0D5F30;
    L_C0D5E4C:;
    FUN_0c0d6c52(R14);
    goto L_C0D5E50;
    L_C0D608A:;
}

int FUN_0c065bb2(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t7;
    int t18;
    int t23;
    int t27;
    int t28;
    int t29;
    int t36;
    int t42;
    int t54;
    int t132;
    int t133;
    int t134;
    int t142;
    int t143;
    int t144;
    int t145;
    int t146;
    int t155;
    int t156;
    int t157;
    int t209;
    int t215;
    int t216;
    int t217;
    int t221;
    int t232;
    int t237;
    int t241;
    int t242;
    int t243;
    int t250;
    int t256;
    int t268;
    int t346;
    int t347;
    int t348;
    int t356;
    int t357;
    int t358;
    int t359;
    int t360;
    int t369;
    int t370;
    int t371;
    int t30;
    int t31;
    int t35;
    int t135;
    int t136;
    int t140;
    int t244;
    int t245;
    int t249;
    int t349;
    int t350;
    int t354;
    int stk[14];

    t0 = *(int *)0xC23A190;
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            t1 = *(int *)0xC2497B8;
            t2 = *(int *)0xC247BE0;
            if ((0x40 & t1) != 0) {
                t3 = *(int *)((t2 + 0x14));
                *(unsigned int *)((t2 + 0x14)) = (t3 + 0x1);
                if ((int)(t3 + 0x1) > (int)0x7) {
                    *(unsigned int *)(((*(int *)0xC247BE0) + 0x14)) = 0x7;
                }
            } else {
                if ((t1 & 0x80) != 0) {
                    t7 = *(int *)((t2 + 0x14));
                    *(unsigned int *)((t2 + 0x14)) = (t7 - 1);
                    if ((int)(t7 - 1) < 0) {
                        *(unsigned int *)(((*(int *)0xC247BE0) + 0x14)) = 0x0;
                    }
                }
            }
            t18 = *(int *)0xC247BE0;
            if (((*(int *)0xC2497B0) & 48) != 0) {
                *(unsigned int *)((t18 + 0x1C)) = ((*(int *)((t18 + 0x1C))) + 0x1);
            } else {
                *(unsigned int *)((t18 + 0x1C)) = 0x0;
            }
            t23 = *(int *)0xC247BE0;
            if (((*(int *)0xC2497B0) & 0xC00000) != 0) {
                *(unsigned int *)((t23 + 0x24)) = ((*(int *)((t23 + 0x24))) + 0x1);
            } else {
                *(unsigned int *)((t23 + 0x24)) = 0x0;
            }
            t27 = *(int *)0xC2497B8;
            t28 = *(int *)0xC2497B0;
            t29 = *(int *)0xC247BE0;
            if (((t27 & 0x800000) == 0) && (((t28 & 0x800000) == 0) || (t30 = *(int *)0xC247BE0, t31 = *(int *)((t30 + 0x24)), (int)t31 <= (int)0x14))) {
                if (((t27 & 0x400000) != 0) || (((t28 & 0x400000) != 0) && (t35 = *(int *)((t29 + 0x24)), (int)t35 > (int)0x14))) {
                    t36 = *(int *)((t29 + 0x18));
                    *(unsigned int *)((t29 + 0x18)) = (t36 - 1);
                    if ((int)(t36 - 1) < 0) {
                        *(unsigned int *)(((*(int *)0xC247BE0) + 0x18)) = 0x0;
                    }
                }
            } else {
                t42 = *(int *)((t29 + 0x18));
                *(unsigned int *)((t29 + 0x18)) = (t42 + 0x1);
                if ((int)(t42 + 0x1) > (int)0x6A) {
                    *(unsigned int *)(((*(int *)0xC247BE0) + 0x18)) = 0x6A;
                }
            }
            t54 = *(int *)0xC2497B8;
            if (((*(int *)0xC2497B0) & 0x4000000) != 0) {
                if ((t54 & 0x40000) != 0) {
                    FUN_0c0db0a0(0x2D, 0xB);
                    nlPrintf(0xC0FA034);
                    FUN_0c0e40ec(0x3, 0x9A0, 0x18);
                    FUN_0c0e40ec(0x4, 0x9A0, 0x18);
                    FUN_0c0e40ec(0x5, 0x9A0, 0x18);
                }
                if (((*(int *)0xC2497B8) & 0x20000) != 0) {
                    FUN_0c0db0a0(0x2D, 0xB);
                    nlPrintf(0xC0FA044);
                    FUN_0c0e40ec(0x3, 0xAA0, 0x54);
                    FUN_0c0e40ec(0x4, 0xAA0, 0x54);
                    FUN_0c0e40ec(0x5, 0xAA0, 0x54);
                }
            } else {
                if ((t54 & 0x40000) != 0) {
                    FUN_0c0db0a0(0x2D, 0xB);
                    nlPrintf(0xC0FA054);
                }
                if (((*(int *)0xC2497B8) & 0x20000) != 0) {
                    FUN_0c0db0a0(0x2D, 0xB);
                    nlPrintf(0xC0FA060);
                }
                if (((*(int *)0xC2497B8) & 0x2000000) != 0) {
                    FUN_0c0db0a0(0x2D, 0xB);
                    nlPrintf(0xC0FA074);
                }
            }
            t132 = *(int *)0xC2497B8;
            t133 = *(int *)0xC2497B0;
            t134 = *(int *)0xC247BE0;
            if (((0x10 & t132) == 0) && (((0x10 & t133) == 0) || (t135 = *(int *)0xC247BE0, t136 = *(int *)((t135 + 0x1C)), (int)t136 <= (int)0x14))) {
                if (((t132 & 0x20) != 0) || (((t133 & 0x20) != 0) && (t140 = *(int *)((t134 + 0x1C)), (int)t140 > (int)0x14))) {
                    *(unsigned int *)((t134 + 0x1C)) = ((*(int *)((t134 + 0x1C))) + 0x1);
                    t142 = *(int *)0xC247BE0;
                    t143 = *(int *)((t142 + 0x14));
                    t144 = *(int *)((t142 + 0x10));
                    if (((((int)(-(t143 << 2)) >= 0) ? (t144 << ((-(t143 << 2)) & 31)) : ((-(int)(-(t143 << 2)) & 31) ? ((int)t144 >> (-(int)(-(t143 << 2)) & 31)) : ((int)t144 >> 31))) & 0xF) != 0) {
                        t145 = *(int *)0xC247BE0;
                        t146 = *(int *)((t145 + 0x14));
                        *(unsigned int *)((t145 + 0x10)) = ((*(int *)((t145 + 0x10))) - (((int)(t146 << 2) >= 0) ? (0x1 << ((t146 << 2) & 31)) : ((-(int)(t146 << 2) & 31) ? ((int)0x1 >> (-(int)(t146 << 2) & 31)) : ((int)0x1 >> 31))));
                    }
                }
            } else {
                t155 = *(int *)((t134 + 0x14));
                t156 = *(int *)((t134 + 0x10));
                if (((((int)(-(t155 << 2)) >= 0) ? (t156 << ((-(t155 << 2)) & 31)) : ((-(int)(-(t155 << 2)) & 31) ? ((int)t156 >> (-(int)(-(t155 << 2)) & 31)) : ((int)t156 >> 31))) & 0xF) != 15) {
                    t157 = *(int *)((t134 + 0x14));
                    *(unsigned int *)((t134 + 0x10)) = ((*(int *)((t134 + 0x10))) + (((int)(t157 << 2) >= 0) ? (0x1 << ((t157 << 2) & 31)) : ((-(int)(t157 << 2) & 31) ? ((int)0x1 >> (-(int)(t157 << 2) & 31)) : ((int)0x1 >> 31))));
                }
            }
            if (((*(int *)0xC2497B8) & 4) != 0) {
                FUN_0c0db0a0(0xA, 0xF);
                nlPrintf(0xC0FA08C);
                FUN_0c0cc3f8((*(int *)(((*(int *)0xC247BE0) + 0x10))), 0x0, 0x0, 0x0, *(int *)((int)stk + 24), *(int *)((int)stk + 24 + 4), *(int *)((int)stk + 24 + 8), *(int *)((int)stk + 24 + 12), *(int *)((int)stk + 24 + 16), *(int *)((int)stk + 24 + 20), *(int *)((int)stk + 24 + 24), *(int *)((int)stk + 24 + 28));
            }
            if (((*(int *)0xC2497B8) & 2) != 0) {
                FUN_0c0db0a0(0xA, 0xC);
                nlPrintf(0xC0FA094);
                FUN_0c0cc6dc();
                FUN_0c0cc720();
            }
        }
    } else {
        t209 = FUN_0c0e262a(0x9C);
        *(unsigned int *)0xC247BE0 = t209;
        *(unsigned int *)((t209 + 0x10)) = 0x0;
        *(unsigned int *)(((*(int *)0xC247BE0) + 0x14)) = 0x0;
        *(unsigned int *)(((*(int *)0xC247BE0) + 0x18)) = 0x0;
        *(unsigned int *)(((*(int *)0xC247BE0) + 0x1C)) = 0x0;
        *(unsigned int *)(((*(int *)0xC247BE0) + 0x20)) = 0x0;
        *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
        t215 = *(int *)0xC2497B8;
        t216 = *(int *)0xC247BE0;
        if ((0x40 & t215) != 0) {
            t217 = *(int *)((t216 + 0x14));
            *(unsigned int *)((t216 + 0x14)) = (t217 + 0x1);
            if ((int)(t217 + 0x1) > (int)0x7) {
                *(unsigned int *)(((*(int *)0xC247BE0) + 0x14)) = 0x7;
            }
        } else {
            if ((t215 & 0x80) != 0) {
                t221 = *(int *)((t216 + 0x14));
                *(unsigned int *)((t216 + 0x14)) = (t221 - 1);
                if ((int)(t221 - 1) < 0) {
                    *(unsigned int *)(((*(int *)0xC247BE0) + 0x14)) = 0x0;
                }
            }
        }
        t232 = *(int *)0xC247BE0;
        if (((*(int *)0xC2497B0) & 48) != 0) {
            *(unsigned int *)((t232 + 0x1C)) = ((*(int *)((t232 + 0x1C))) + 0x1);
        } else {
            *(unsigned int *)((t232 + 0x1C)) = 0x0;
        }
        t237 = *(int *)0xC247BE0;
        if (((*(int *)0xC2497B0) & 0xC00000) != 0) {
            *(unsigned int *)((t237 + 0x24)) = ((*(int *)((t237 + 0x24))) + 0x1);
        } else {
            *(unsigned int *)((t237 + 0x24)) = 0x0;
        }
        t241 = *(int *)0xC2497B8;
        t242 = *(int *)0xC2497B0;
        t243 = *(int *)0xC247BE0;
        if (((t241 & 0x800000) == 0) && (((t242 & 0x800000) == 0) || (t244 = *(int *)0xC247BE0, t245 = *(int *)((t244 + 0x24)), (int)t245 <= (int)0x14))) {
            if (((t241 & 0x400000) != 0) || (((t242 & 0x400000) != 0) && (t249 = *(int *)((t243 + 0x24)), (int)t249 > (int)0x14))) {
                t250 = *(int *)((t243 + 0x18));
                *(unsigned int *)((t243 + 0x18)) = (t250 - 1);
                if ((int)(t250 - 1) < 0) {
                    *(unsigned int *)(((*(int *)0xC247BE0) + 0x18)) = 0x0;
                }
            }
        } else {
            t256 = *(int *)((t243 + 0x18));
            *(unsigned int *)((t243 + 0x18)) = (t256 + 0x1);
            if ((int)(t256 + 0x1) > (int)0x6A) {
                *(unsigned int *)(((*(int *)0xC247BE0) + 0x18)) = 0x6A;
            }
        }
        t268 = *(int *)0xC2497B8;
        if (((*(int *)0xC2497B0) & 0x4000000) != 0) {
            if ((t268 & 0x40000) != 0) {
                FUN_0c0db0a0(0x2D, 0xB);
                nlPrintf(0xC0FA034);
                FUN_0c0e40ec(0x3, 0x9A0, 0x18);
                FUN_0c0e40ec(0x4, 0x9A0, 0x18);
                FUN_0c0e40ec(0x5, 0x9A0, 0x18);
            }
            if (((*(int *)0xC2497B8) & 0x20000) != 0) {
                FUN_0c0db0a0(0x2D, 0xB);
                nlPrintf(0xC0FA044);
                FUN_0c0e40ec(0x3, 0xAA0, 0x54);
                FUN_0c0e40ec(0x4, 0xAA0, 0x54);
                FUN_0c0e40ec(0x5, 0xAA0, 0x54);
            }
        } else {
            if ((t268 & 0x40000) != 0) {
                FUN_0c0db0a0(0x2D, 0xB);
                nlPrintf(0xC0FA054);
            }
            if (((*(int *)0xC2497B8) & 0x20000) != 0) {
                FUN_0c0db0a0(0x2D, 0xB);
                nlPrintf(0xC0FA060);
            }
            if (((*(int *)0xC2497B8) & 0x2000000) != 0) {
                FUN_0c0db0a0(0x2D, 0xB);
                nlPrintf(0xC0FA074);
            }
        }
        t346 = *(int *)0xC2497B8;
        t347 = *(int *)0xC2497B0;
        t348 = *(int *)0xC247BE0;
        if (((0x10 & t346) == 0) && (((0x10 & t347) == 0) || (t349 = *(int *)0xC247BE0, t350 = *(int *)((t349 + 0x1C)), (int)t350 <= (int)0x14))) {
            if (((t346 & 0x20) != 0) || (((t347 & 0x20) != 0) && (t354 = *(int *)((t348 + 0x1C)), (int)t354 > (int)0x14))) {
                *(unsigned int *)((t348 + 0x1C)) = ((*(int *)((t348 + 0x1C))) + 0x1);
                t356 = *(int *)0xC247BE0;
                t357 = *(int *)((t356 + 0x14));
                t358 = *(int *)((t356 + 0x10));
                if (((((int)(-(t357 << 2)) >= 0) ? (t358 << ((-(t357 << 2)) & 31)) : ((-(int)(-(t357 << 2)) & 31) ? ((int)t358 >> (-(int)(-(t357 << 2)) & 31)) : ((int)t358 >> 31))) & 0xF) != 0) {
                    t359 = *(int *)0xC247BE0;
                    t360 = *(int *)((t359 + 0x14));
                    *(unsigned int *)((t359 + 0x10)) = ((*(int *)((t359 + 0x10))) - (((int)(t360 << 2) >= 0) ? (0x1 << ((t360 << 2) & 31)) : ((-(int)(t360 << 2) & 31) ? ((int)0x1 >> (-(int)(t360 << 2) & 31)) : ((int)0x1 >> 31))));
                }
            }
        } else {
            t369 = *(int *)((t348 + 0x14));
            t370 = *(int *)((t348 + 0x10));
            if (((((int)(-(t369 << 2)) >= 0) ? (t370 << ((-(t369 << 2)) & 31)) : ((-(int)(-(t369 << 2)) & 31) ? ((int)t370 >> (-(int)(-(t369 << 2)) & 31)) : ((int)t370 >> 31))) & 0xF) != 15) {
                t371 = *(int *)((t348 + 0x14));
                *(unsigned int *)((t348 + 0x10)) = ((*(int *)((t348 + 0x10))) + (((int)(t371 << 2) >= 0) ? (0x1 << ((t371 << 2) & 31)) : ((-(int)(t371 << 2) & 31) ? ((int)0x1 >> (-(int)(t371 << 2) & 31)) : ((int)0x1 >> 31))));
            }
        }
        if (((*(int *)0xC2497B8) & 4) != 0) {
            FUN_0c0db0a0(0xA, 0xF);
            nlPrintf(0xC0FA08C);
            FUN_0c0cc3f8((*(int *)(((*(int *)0xC247BE0) + 0x10))), 0x0, 0x0, 0x0, *(int *)((int)stk + 24), *(int *)((int)stk + 24 + 4), *(int *)((int)stk + 24 + 8), *(int *)((int)stk + 24 + 12), *(int *)((int)stk + 24 + 16), *(int *)((int)stk + 24 + 20), *(int *)((int)stk + 24 + 24), *(int *)((int)stk + 24 + 28));
        }
        if (((*(int *)0xC2497B8) & 2) != 0) {
            FUN_0c0db0a0(0xA, 0xC);
            nlPrintf(0xC0FA094);
            FUN_0c0cc6dc();
            FUN_0c0cc720();
        }
    }
    FUN_0c0db0a0(0x2D, 0x9);
    nlPrintf(0xC0FA0A4, ((*(int *)((((*(int *)(((*(int *)0xC247BE0) + 0x18))) << 2) + 0xC1EF840)))));
    FUN_0c0db0a0(0xA, 0xB);
    nlPrintf(0xC0FA0B4, ((*(int *)(((*(int *)0xC247BE0) + 0x10)))));
    FUN_0c0db0a0(((-(*(int *)(((*(int *)0xC247BE0) + 0x14)))) + 0x1B), 0xC);
    return (nlPrintf(0xC0FA0C8));
}

int FUN_0c22e3f4(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t2;
    int t5;
    int t6;
    int t15;
    int t8;
    int t9;
    int t10;
    int t11;
    int t177;
    int t49;
    int t71;
    int t79;
    int t99;
    int t105;
    int t142;
    int t106;
    int t109;
    int t7;
    int t12;
    int t13;
    int t168;
    int t159;
    int t150;
    int t134;
    int stk[13];

    *(unsigned short *)(((int)stk + 8)) = a4;
    t0 = ((~(((~a6) + 0x1) & 0x1F)) + 0x1);
    if ((int)a6 >= 0) {
        t0 = (a6 & 0x1F);
    }
    t2 = a6;
    if (t0 != 0) {
        t2 = (a6 + (0x20 - t0));
    }
    t5 = *(short *)(((int)stk + 8));
    t6 = *(int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x8));
    t15 = 0x0;
    if (t6 != 0) {
        t8 = t5;
        t9 = t6;
        t10 = 0x0;
        for (;;) {
            t11 = *(int *)((t9 + 0xC));
            if (((int)t11 <= (int)a5) && ((t12 = *(int *)((t9 + 0x10)), t8 = t12, t8 = (t8 + t11), (int)t8 > (int)a5) && (((int)t11 <= (int)(a5 + a6)) && (t13 = *(int *)((t9 + 0x10)), t7 = t13, t7 = (t7 + t11), (int)t7 >= (int)(a5 + a6))))) {
                t10 = t9;
                t9 = 0x0;
            } else {
                t9 = (*(int *)((t9 + 0x8)));
            }
            if (t9 == 0) {
                break;
            }
        }
        t15 = t10;
    }
    t177 = 0x3;
    if (t15 == 0) {
    } else {
        if ((*(int *)((t15 + 0x10))) == t2) {
            kmytex_FBDeQueueEntry((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x8), (((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0xC), t15);
            FUN_0c22eeb2(((((t5 << 2) + t5) << 2) + 0xC239EF8), (((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x4), t15);
            *(unsigned int *)((a7 + 0x1C)) = (*(int *)((t15 + 0xC)));
            *(unsigned int *)((t15 + 0x14)) = a7;
            *(unsigned short *)((t15 + 0x0)) = 0x1;
            if ((*(short *)(((int)stk + 8))) == 0) {
                *(unsigned short *)((t15 + 0x0)) = ((*(short *)((t15 + 0x0))) | 0x80);
            } else {
                *(unsigned short *)((t15 + 0x0)) = ((*(short *)((t15 + 0x0))) | 0x100);
            }
            if (a8 != 0) {
                *(unsigned short *)((t15 + 0x0)) = ((*(short *)((t15 + 0x0))) | 0x2);
            }
            if (a9 != 0) {
                *(unsigned short *)((t15 + 0x0)) = ((*(short *)((t15 + 0x0))) | 0x4);
            }
            *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10))) - (*(int *)((t15 + 0x10))));
            t168 = 0x0;
        } else {
            if ((*(int *)((t15 + 0xC))) == a5) {
                t49 = FUN_0c22ee60();
                t71 = 0x3;
                if (t49 == 0) {
                } else {
                    *(unsigned int *)((t49 + 0xC)) = (*(int *)((t15 + 0xC)));
                    *(unsigned int *)((t49 + 0x10)) = t2;
                    *(unsigned int *)((t15 + 0x10)) = ((*(int *)((t15 + 0x10))) - t2);
                    *(unsigned int *)((t15 + 0xC)) = ((*(int *)((t15 + 0xC))) + t2);
                    *(unsigned int *)(((int)stk + 4)) = ((((t5 << 2) + t5) << 2) + 0xC239EF8);
                    FUN_0c22eeb2((*(int *)(((int)stk + 4))), (((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x4), t49);
                    *(unsigned int *)((a7 + 0x1C)) = (*(int *)((t49 + 0xC)));
                    *(unsigned int *)((t49 + 0x14)) = a7;
                    if ((*(short *)(((int)stk + 8))) == 0) {
                        *(unsigned short *)((t49 + 0x0)) = ((*(short *)((t49 + 0x0))) | 0x80);
                    } else {
                        *(unsigned short *)((t49 + 0x0)) = ((*(short *)((t49 + 0x0))) | 0x100);
                    }
                    if (a8 != 0) {
                        *(unsigned short *)((t49 + 0x0)) = ((*(short *)((t49 + 0x0))) | 0x2);
                    }
                    if (a9 != 0) {
                        *(unsigned short *)((t49 + 0x0)) = ((*(short *)((t49 + 0x0))) | 0x4);
                    }
                    *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10))) - (*(int *)((t49 + 0x10))));
                    t71 = 0x0;
                }
                t159 = t71;
            } else {
                if (((*(int *)((t15 + 0xC))) + (*(int *)((t15 + 0x10)))) == (a5 + a6)) {
                    t79 = FUN_0c22ee60();
                    t99 = 0x3;
                    if (t79 != 0) {
                        *(unsigned int *)((t15 + 0x10)) = ((*(int *)((t15 + 0x10))) - t2);
                        *(unsigned int *)((t79 + 0xC)) = a5;
                        *(unsigned int *)((t79 + 0x10)) = t2;
                        *(unsigned int *)(((int)stk + 4)) = ((((t5 << 2) + t5) << 2) + 0xC239EF8);
                        FUN_0c22eeb2((*(int *)(((int)stk + 4))), (((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x4), t79);
                        *(unsigned int *)((a7 + 0x1C)) = (*(int *)((t79 + 0xC)));
                        *(unsigned int *)((t79 + 0x14)) = a7;
                        if ((*(short *)(((int)stk + 8))) == 0) {
                            *(unsigned short *)((t79 + 0x0)) = ((*(short *)((t79 + 0x0))) | 0x80);
                        } else {
                            *(unsigned short *)((t79 + 0x0)) = ((*(short *)((t79 + 0x0))) | 0x100);
                        }
                        if (a8 != 0) {
                            *(unsigned short *)((t79 + 0x0)) = ((*(short *)((t79 + 0x0))) | 0x2);
                        }
                        if (a9 != 0) {
                            *(unsigned short *)((t79 + 0x0)) = ((*(short *)((t79 + 0x0))) | 0x4);
                        }
                        *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10))) - (*(int *)((t79 + 0x10))));
                        t99 = 0x0;
                    }
                    t150 = t99;
                } else {
                    t105 = FUN_0c22ee60();
                    t142 = 0x3;
                    if (t105 != 0) {
                        t106 = FUN_0c22ee60();
                        *(unsigned int *)(((int)stk + 4)) = t106;
                        if (t106 == 0) {
                            FUN_0c22ee8c(t105);
                            t134 = 0x3;
                        } else {
                            *(unsigned int *)(((int)stk + 16)) = (*(int *)((t15 + 0x10)));
                            t109 = *(int *)((t15 + 0xC));
                            *(unsigned int *)(((int)stk + 12)) = (a5 - t109);
                            *(unsigned int *)((t15 + 0x10)) = (a5 - t109);
                            *(unsigned int *)((t105 + 0xC)) = a5;
                            *(unsigned int *)((t105 + 0x10)) = t2;
                            FUN_0c22eeb2(((((t5 << 2) + t5) << 2) + 0xC239EF8), (((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x4), t105);
                            *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0xC)) = (a5 + t2);
                            *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x10)) = (((*(int *)(((int)stk + 16))) - t2) - (*(int *)(((int)stk + 12))));
                            kmytex_FBEnQueueEntry((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0xC), (*(int *)(((int)stk + 4))), (*(int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0xC))));
                            *(unsigned int *)((a7 + 0x1C)) = (*(int *)((t105 + 0xC)));
                            *(unsigned int *)((t105 + 0x14)) = a7;
                            if ((*(short *)(((int)stk + 8))) == 0) {
                                *(unsigned short *)((t105 + 0x0)) = ((*(short *)((t105 + 0x0))) | 0x80);
                            } else {
                                *(unsigned short *)((t105 + 0x0)) = ((*(short *)((t105 + 0x0))) | 0x100);
                            }
                            if (a8 != 0) {
                                *(unsigned short *)((t105 + 0x0)) = ((*(short *)((t105 + 0x0))) | 0x2);
                            }
                            if (a9 != 0) {
                                *(unsigned short *)((t105 + 0x0)) = ((*(short *)((t105 + 0x0))) | 0x4);
                            }
                            *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC239EF8) + 0x10))) - (*(int *)((t105 + 0x10))));
                            t134 = 0x0;
                        }
                        t142 = t134;
                    }
                    t150 = t142;
                }
                t159 = t150;
            }
            t168 = t159;
        }
        t177 = t168;
    }
    return t177;
}
