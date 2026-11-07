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




