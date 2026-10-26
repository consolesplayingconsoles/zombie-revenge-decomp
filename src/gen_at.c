/* Straight-line functions with calls and guards (batch gen_at): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_GetStat(int);
int ADXT_StartAfs(int, int, int);
int FUN_0c0cc054(int, int);
int FUN_0c0e40ec(int, int, int);
int FUN_0c0e4428(int);
void FUN_0c0cc3f8(int a4, int a5, int a6, int a7);

void FUN_0c0cc3f8(int a4, int a5, int a6, int a7)
{
    int t2;
    int t13;
    int t10;
    int t7;
    int t24;
    int t20;
    int t18;
    int t28;
    int t34;
    int t41;
    int t47;
    int t48;
    int t49;
    int t160;
    int t157;
    int t154;
    int t171;
    int t167;
    int t165;
    int t175;
    int t181;
    int t188;
    int t194;
    int t195;
    int t196;

    if (a4 == 0) {
        return;
    }
    t2 = *(int *)0xC23A180;
    if (t2 == 3) {
        return;
    }
    if (t2 == 1) {
        if ((*(int *)0xC522924) == 0) {
            return;
        }
        if ((int)a4 < 0) {
            _builtin_trapa(129);
            return;
        }
        if ((int)a4 >= (int)0x12F) {
            *(unsigned int *)0xC5229AC = a4;
            if ((0xF & a4) == 0) {
                FUN_0c0e40ec(0x8, a4, 0x0);
    return;
            }
            FUN_0c0e4428(a4);
            t13 = 0x1B;
            if (a4 != 0x920A9) {
                t10 = 0x1C;
                if (a4 != 0x328A9) {
                    t7 = 0x1E;
                    if (a4 != 0x128A9) {
                        t7 = 0x0;
                    }
                    t10 = t7;
                }
                t13 = t10;
            }
            if (t13 == 0) {
                return;
            }
            FUN_0c0cc054(0x0, t13);
            FUN_0c0cc054(0x1, t13);
    return;
        }
        if ((int)a4 > (int)0x12E) {
            _builtin_trapa(130);
        } else {
            if ((int)a4 < (int)0x16) {
                ADXT_StartAfs((*(int *)0xC5158E4), 0x1, a4);
            } else {
                t24 = 0x1;
                if ((int)a4 < (int)0x53) {
                } else {
                    t20 = 0x2;
                    if ((int)a4 < (int)0x79) {
                    } else {
                        t18 = 0x8;
                        if ((int)a4 < (int)0xA8) {
                            t18 = 0x4;
                        }
                        t20 = t18;
                    }
                    t24 = t20;
                }
                t28 = ADXT_GetStat((*(int *)0xC5158E8));
                if ((t28 == 5) || (t28 == 0)) {
                    *(unsigned int *)0xC522928 = ((*(int *)0xC522928) & (~(*(int *)0xC52292C)));
                    *(unsigned int *)0xC52292C = 0x0;
                }
                t34 = ADXT_GetStat((*(int *)0xC5158EC));
                if ((t34 == 5) || (t34 == 0)) {
                    *(unsigned int *)0xC522928 = ((*(int *)0xC522928) & (~(*(int *)0xC522930)));
                    *(unsigned int *)0xC522930 = 0x0;
                }
                t41 = ADXT_GetStat((*(int *)0xC5158F0));
                if ((t41 == 5) || (t41 == 0)) {
                    *(unsigned int *)0xC522928 = ((*(int *)0xC522928) & (~(*(int *)0xC522934)));
                    *(unsigned int *)0xC522934 = 0x0;
                }
                t47 = *(int *)0xC52292C;
                t48 = *(int *)0xC522930;
                t49 = *(int *)0xC522934;
                if ((((*(int *)0xC522928) & t24) & 7) != 0) {
                    if (t47 == t24) {
                        *(unsigned int *)0xC5229B0 = a4;
                        ADXT_StartAfs((*(int *)0xC5158E8), 0x1, a4);
                        *(unsigned int *)0xC52292C = t24;
                    } else {
                        if (t48 == t24) {
                            *(unsigned int *)0xC5229B4 = a4;
                            ADXT_StartAfs((*(int *)0xC5158EC), 0x1, a4);
                            *(unsigned int *)0xC522930 = t24;
                        } else {
                            if (t49 == t24) {
                                *(unsigned int *)0xC5229B8 = a4;
                                ADXT_StartAfs((*(int *)0xC5158F0), 0x1, a4);
                                *(unsigned int *)0xC522934 = t24;
                            }
                        }
                    }
                    *(unsigned int *)0xC522928 = ((*(int *)0xC522928) | t24);
                } else {
                    if (((t47 & t48) & t49) == 0) {
                        if (t47 == 0x0) {
                            *(unsigned int *)0xC5229B0 = a4;
                            ADXT_StartAfs((*(int *)0xC5158E8), 0x1, a4);
                            *(unsigned int *)0xC52292C = t24;
                        } else {
                            if (t48 == 0x0) {
                                *(unsigned int *)0xC5229B4 = a4;
                                ADXT_StartAfs((*(int *)0xC5158EC), 0x1, a4);
                                *(unsigned int *)0xC522930 = t24;
                            } else {
                                if (t49 == 0x0) {
                                    *(unsigned int *)0xC5229B8 = a4;
                                    ADXT_StartAfs((*(int *)0xC5158F0), 0x1, a4);
                                    *(unsigned int *)0xC522934 = t24;
                                }
                            }
                        }
                        *(unsigned int *)0xC522928 = ((*(int *)0xC522928) | t24);
                    }
                }
            }
        }
        return;
    }
    if ((int)a4 < 0) {
        _builtin_trapa(129);
        return;
    }
    if ((int)a4 >= (int)0x12F) {
        *(unsigned int *)0xC5229AC = a4;
        if ((0xF & a4) == 0) {
            FUN_0c0e40ec(0x8, a4, 0x0);
    return;
        }
        FUN_0c0e4428(a4);
        t160 = 0x1B;
        if (a4 != 0x920A9) {
            t157 = 0x1C;
            if (a4 != 0x328A9) {
                t154 = 0x1E;
                if (a4 != 0x128A9) {
                    t154 = 0x0;
                }
                t157 = t154;
            }
            t160 = t157;
        }
        if (t160 == 0) {
            return;
        }
        FUN_0c0cc054(0x0, t160);
        FUN_0c0cc054(0x1, t160);
    return;
    }
    if ((int)a4 > (int)0x12E) {
        _builtin_trapa(130);
    } else {
        if ((int)a4 < (int)0x16) {
            ADXT_StartAfs((*(int *)0xC5158E4), 0x1, a4);
        } else {
            t171 = 0x1;
            if ((int)a4 < (int)0x53) {
            } else {
                t167 = 0x2;
                if ((int)a4 < (int)0x79) {
                } else {
                    t165 = 0x8;
                    if ((int)a4 < (int)0xA8) {
                        t165 = 0x4;
                    }
                    t167 = t165;
                }
                t171 = t167;
            }
            t175 = ADXT_GetStat((*(int *)0xC5158E8));
            if ((t175 == 5) || (t175 == 0)) {
                *(unsigned int *)0xC522928 = ((*(int *)0xC522928) & (~(*(int *)0xC52292C)));
                *(unsigned int *)0xC52292C = 0x0;
            }
            t181 = ADXT_GetStat((*(int *)0xC5158EC));
            if ((t181 == 5) || (t181 == 0)) {
                *(unsigned int *)0xC522928 = ((*(int *)0xC522928) & (~(*(int *)0xC522930)));
                *(unsigned int *)0xC522930 = 0x0;
            }
            t188 = ADXT_GetStat((*(int *)0xC5158F0));
            if ((t188 == 5) || (t188 == 0)) {
                *(unsigned int *)0xC522928 = ((*(int *)0xC522928) & (~(*(int *)0xC522934)));
                *(unsigned int *)0xC522934 = 0x0;
            }
            t194 = *(int *)0xC52292C;
            t195 = *(int *)0xC522930;
            t196 = *(int *)0xC522934;
            if ((((*(int *)0xC522928) & t171) & 7) != 0) {
                if (t194 == t171) {
                    *(unsigned int *)0xC5229B0 = a4;
                    ADXT_StartAfs((*(int *)0xC5158E8), 0x1, a4);
                    *(unsigned int *)0xC52292C = t171;
                } else {
                    if (t195 == t171) {
                        *(unsigned int *)0xC5229B4 = a4;
                        ADXT_StartAfs((*(int *)0xC5158EC), 0x1, a4);
                        *(unsigned int *)0xC522930 = t171;
                    } else {
                        if (t196 == t171) {
                            *(unsigned int *)0xC5229B8 = a4;
                            ADXT_StartAfs((*(int *)0xC5158F0), 0x1, a4);
                            *(unsigned int *)0xC522934 = t171;
                        }
                    }
                }
                *(unsigned int *)0xC522928 = ((*(int *)0xC522928) | t171);
            } else {
                if (((t194 & t195) & t196) == 0) {
                    if (t194 == 0x0) {
                        *(unsigned int *)0xC5229B0 = a4;
                        ADXT_StartAfs((*(int *)0xC5158E8), 0x1, a4);
                        *(unsigned int *)0xC52292C = t171;
                    } else {
                        if (t195 == 0x0) {
                            *(unsigned int *)0xC5229B4 = a4;
                            ADXT_StartAfs((*(int *)0xC5158EC), 0x1, a4);
                            *(unsigned int *)0xC522930 = t171;
                        } else {
                            if (t196 == 0x0) {
                                *(unsigned int *)0xC5229B8 = a4;
                                ADXT_StartAfs((*(int *)0xC5158F0), 0x1, a4);
                                *(unsigned int *)0xC522934 = t171;
                            }
                        }
                    }
                    *(unsigned int *)0xC522928 = ((*(int *)0xC522928) | t171);
                }
            }
        }
    }
}
