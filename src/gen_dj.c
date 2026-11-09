/* Straight-line functions with calls and guards (batch gen_dj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e6248(int);
int FUN_0c0125f4(int a4, int a5, int a6, int a7, int a8);

int FUN_0c0125f4(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;

    t3 = *(short *)(((((unsigned short)a7 << 2) << 2) + 0xC2497C8));
    t4 = *(int *)((a4 + 0x0));
    t5 = *(int *)0xC23EAD4;
    t6 = *(int *)0xC943400;
    t7 = *(int *)((a5 + 0x0));
    if (t7 != 1) {
        if (t7 != 2) {
            if (t7 != 3) {
                if (t7 != 4) {
                    if (t7 == 5) {
                        if ((0xC0C0 & (unsigned short)t3) != 0) {
                            if ((int)(*(int *)((a6 + 0x0))) < (int)0x2) {
                                t8 = *(int *)((a6 + 0x0));
                                if (t8 == 0) {
                                    if ((t5 & 0x4) == 0) {
                                    } else {
                                        *(unsigned int *)((a6 + 0x0)) = 0x1;
                                    }
                                } else {
                                    if ((t5 & 0x8) == 0) {
                                    } else {
                                        *(unsigned int *)((a6 + 0x0)) = 0x0;
                                    }
                                }
                                t9 = t8;
                            } else {
                                t8 = *(int *)((a6 + 0x0));
                                if (t8 == 2) {
                                    if ((t5 & 0x1) == 0) {
                                    } else {
                                        *(unsigned int *)((a6 + 0x0)) = 0x3;
                                    }
                                } else {
                                    if ((t5 & 0x2) == 0) {
                                    } else {
                                        *(unsigned int *)((a6 + 0x0)) = 0x2;
                                    }
                                }
                                t9 = t8;
                            }
                            t8 = t9;
                            t9 = t4;
                        } else {
                            if ((0xC & (unsigned short)t3) != 0) {
                                t10 = *(int *)((a6 + 0x0));
                                t11 = t7;
                                t12 = (0xC & (unsigned short)t3);
                                t13 = (unsigned short)t3;
                                t14 = t10;
                                t15 = 0x0;
                                t16 = (((t10 << 2) + t10) << 2);
                                t10 = t4;
                                for (;;) {
                                    if ((int)t15 >= (int)0x14) {
                                        break;
                                    }
                                    t14 = 0x16;
                                    t12 = 0xC23EB10;
                                    t13 = (*(int *)((t12 + 0x0)));
                                    t14 = (t16 * t14);
                                    t14 = (t14 + t13);
                                    t11 = (*(short *)((t14 + 0xE)));
                                    t15 = (t15 + 0x1);
                                    if ((int)t11 >= 0) {
                                        t13 = 0x6;
                                        t10 = 0x7;
                                        *(unsigned int *)((a5 + 0x0)) = t13;
                                    }
                                    t16 = (t16 + 0x1);
                                }
                                t12 = t11;
                                t11 = t10;
                            } else {
                                t10 = t4;
                                if (((unsigned short)t3 & 0x2) == 0) {
                                } else {
                                    *(unsigned int *)((a5 + 0x0)) = 0x4;
                                    t10 = 0x5;
                                }
                                t12 = t7;
                                t11 = t10;
                            }
                            t8 = t12;
                            t9 = t11;
                        }
                        t10 = t8;
                        t8 = t9;
                        t9 = a4;
                    } else {
                        if (t7 == 6) {
                            if (((unsigned short)t3 & 0x3030) != 0) {
                                if (((unsigned short)t3 & 0x2020) != 0) {
                                    t11 = t7;
                                    t12 = (t4 + 0x1);
                                    if ((int)t4 < (int)0xA) {
                                    } else {
                                        t13 = t7;
                                        if ((int)(*(int *)((a8 + 0x0))) >= (int)0x10) {
                                        } else {
                                            t14 = *(int *)((a8 + 0x0));
                                            *(unsigned int *)((a8 + 0x0)) = (t14 + 0x1);
                                            t13 = (t14 + 0x1);
                                        }
                                        t11 = t13;
                                        t12 = t4;
                                    }
                                    t13 = t11;
                                    t11 = t12;
                                } else {
                                    t12 = t7;
                                    t14 = (t4 - 1);
                                    if ((int)t4 > (int)0x7) {
                                    } else {
                                        t15 = t7;
                                        if ((int)(*(int *)((a8 + 0x0))) <= 0) {
                                        } else {
                                            t16 = *(int *)((a8 + 0x0));
                                            *(unsigned int *)((a8 + 0x0)) = (t16 - 1);
                                            t15 = (t16 - 1);
                                        }
                                        t12 = t15;
                                        t14 = t4;
                                    }
                                    t13 = t12;
                                    t11 = t14;
                                }
                                t12 = t13;
                                t13 = t11;
                                t11 = a4;
                            } else {
                                if ((0xC & (unsigned short)t3) != 0) {
                                    t14 = *(int *)((a6 + 0x0));
                                    t15 = *(short *)((((((((*(int *)((a8 + 0x0))) + t4) + (((t14 << 2) + t14) << 2)) - 7) * 0x16) + (*(int *)0xC23EB10)) + 0xE));
                                    t14 = t15;
                                    if ((int)t15 >= 0) {
                                        { struct mvb22 { char c[22]; }; *(struct mvb22 *)(((((unsigned int)(a7 & 0xFFFF0000) >> 16) * 0x16) + 0xC20C5A8)) = *(struct mvb22 *)(((((((*(int *)((a8 + 0x0))) + t4) + ((((*(int *)((a6 + 0x0))) << 2) + (*(int *)((a6 + 0x0)))) << 2)) - 7) * 0x16) + (*(int *)0xC23EB10))); }
                                        if ((0x4 & (unsigned short)t3) != 0) {
                                            *(unsigned int *)((t0 + 0x0)) = 0x9;
                                        } else {
                                            *(unsigned int *)((t1 + 0x0)) = t2;
                                        }
                                        t14 = (0x4 & (unsigned short)t3);
                                    } else {
                                        t0 = a4;
                                    }
                                    t1 = t14;
                                    t2 = t4;
                                    t14 = t0;
                                } else {
                                    t0 = t4;
                                    if (((unsigned short)t3 & 0x2) != 0) {
                                        *(unsigned int *)((a5 + 0x0)) = 0x5;
                                        t0 = 0x6;
                                    }
                                    t1 = t7;
                                    t2 = t0;
                                    t14 = a4;
                                }
                                t12 = t1;
                                t13 = t2;
                                t11 = t14;
                            }
                            t0 = t12;
                            t1 = t13;
                            t2 = t11;
                        } else {
                            if (t7 == 7) {
                                if (t6 == 1) {
                                    *(unsigned int *)0xC1EF568 = ((unsigned int)(0xFFFF0000 & a7) >> 16);
                                } else {
                                    if (((unsigned int)(0xFFFF0000 & a7) >> 16) == 0) {
                                        *(unsigned int *)0xC1EF568 = 0x1;
                                    }
                                }
                                *(unsigned int *)((0xC23ECC8 + (((unsigned int)(0xFFFF0000 & a7) >> 16) << 2))) = 0x1;
                                *(unsigned int *)(((((unsigned int)(0xFFFF0000 & a7) >> 16) << 2) + 0xC23ECD0)) = 0x0;
                                *(unsigned int *)((a5 + 0x0)) = 0x1;
                                t11 = 0xC23ECD0;
                            } else {
                                if (t7 == 8) {
                                    if (t6 == 1) {
                                        *(unsigned int *)0xC1EF568 = (((((unsigned int)(0xFFFF0000 & a7) >> 16) == 0)) ? 1 : 0);
                                    } else {
                                        if (((unsigned int)(0xFFFF0000 & a7) >> 16) == 0) {
                                            *(unsigned int *)0xC1EF568 = 0x0;
                                        }
                                    }
                                    *(unsigned int *)((0xC23ECC8 + (((unsigned int)(0xFFFF0000 & a7) >> 16) << 2))) = 0x1;
                                    *(unsigned int *)(((((unsigned int)(0xFFFF0000 & a7) >> 16) << 2) + 0xC23ECD0)) = 0x1;
                                    *(unsigned int *)((a5 + 0x0)) = 0x1;
                                    t12 = 0xC23ECD0;
                                } else {
                                    if (t7 == 9) {
                                        if (t6 == 1) {
                                            *(unsigned int *)0xC1EF568 = ((unsigned int)(0xFFFF0000 & a7) >> 16);
                                        } else {
                                            if (((unsigned int)(0xFFFF0000 & a7) >> 16) == 0) {
                                                *(unsigned int *)0xC1EF568 = 0x1;
                                            }
                                        }
                                        *(unsigned int *)((0xC23ECC8 + (((unsigned int)(0xFFFF0000 & a7) >> 16) << 2))) = 0x1;
                                        *(unsigned int *)(((((unsigned int)(0xFFFF0000 & a7) >> 16) << 2) + 0xC23ECD0)) = 0x0;
                                        *(unsigned int *)((a5 + 0x0)) = 0x2;
                                        t13 = 0xC23ECD0;
                                    } else {
                                        t14 = t7;
                                        if (t7 == 10) {
                                            if (t6 == 1) {
                                                *(unsigned int *)0xC1EF568 = (((((unsigned int)(0xFFFF0000 & a7) >> 16) == 0)) ? 1 : 0);
                                            } else {
                                                if (((unsigned int)(0xFFFF0000 & a7) >> 16) == 0) {
                                                    *(unsigned int *)0xC1EF568 = 0x0;
                                                }
                                            }
                                            *(unsigned int *)((0xC23ECC8 + (((unsigned int)(0xFFFF0000 & a7) >> 16) << 2))) = 0x1;
                                            *(unsigned int *)(((((unsigned int)(0xFFFF0000 & a7) >> 16) << 2) + 0xC23ECD0)) = 0x1;
                                            *(unsigned int *)((a5 + 0x0)) = 0x2;
                                            t14 = 0xC23ECD0;
                                        }
                                        t13 = t14;
                                    }
                                    t12 = t13;
                                }
                                t11 = t12;
                            }
                            t0 = t11;
                            t1 = t4;
                            t2 = a4;
                        }
                        t10 = t0;
                        t8 = t1;
                        t9 = t2;
                    }
                    t0 = t10;
                    t1 = t8;
                    t2 = t9;
                } else {
                    if ((0xC0C0 & (unsigned short)t3) != 0) {
                        if ((int)(*(int *)((a6 + 0x0))) < (int)0x2) {
                            if ((t5 & 0x3) == 0) {
                            } else {
                                *(unsigned int *)((a6 + 0x0)) = 0x2;
                            }
                            t6 = 0x3;
                        } else {
                            if ((t5 & 0xC) == 0) {
                            } else {
                                *(unsigned int *)((a6 + 0x0)) = 0x0;
                            }
                            t6 = t7;
                        }
                        t8 = t6;
                        t6 = t4;
                    } else {
                        if ((0xC & (unsigned short)t3) != 0) {
                            *(unsigned int *)((a5 + 0x0)) = 0x5;
                            if ((int)(*(int *)((a6 + 0x0))) < (int)0x2) {
                                t9 = *(int *)0xC23EAD4;
                                if ((t9 & 8) != 0) {
                                } else {
                                    *(unsigned int *)((a6 + 0x0)) = 0x1;
                                }
                                t10 = t9;
                            } else {
                                if ((0x2 & (*(int *)0xC23EAD4)) != 0) {
                                } else {
                                    *(unsigned int *)((a6 + 0x0)) = 0x3;
                                }
                                t10 = (0xC & (unsigned short)t3);
                            }
                            t9 = t10;
                            t10 = 0x6;
                        } else {
                            t11 = t4;
                            if (((unsigned short)t3 & 0x2) == 0) {
                            } else {
                                *(unsigned int *)((a5 + 0x0)) = 0x3;
                                t11 = 0x0;
                            }
                            t9 = ((unsigned short)t3 & 0x2);
                            t10 = t11;
                        }
                        t8 = t9;
                        t6 = t10;
                    }
                    t0 = t8;
                    t1 = t6;
                    t2 = a4;
                }
                t6 = t0;
                t0 = t1;
                t1 = t2;
            } else {
                if ((0xC0C0 & (unsigned short)t3) != 0) {
                    if (((unsigned short)t3 & 0x8080) != 0) {
                        t2 = 0x0;
                        if ((int)t4 < (int)0x4) {
                            t2 = (t4 + 0x1);
                        }
                        t8 = t2;
                        if (t2 != 4) {
                        } else {
                            t9 = 0x0;
                            if ((*(int *)0xC23EAD4) != 0) {
                                t9 = t2;
                            }
                            t8 = t9;
                        }
                        t9 = t2;
                        t2 = t8;
                    } else {
                        t8 = (t4 - 1);
                        if ((int)t4 > 0) {
                        } else {
                            t10 = 0x4;
                            if (t5 == 0) {
                                t10 = 0x3;
                            }
                            t8 = t10;
                        }
                        t9 = t7;
                        t2 = t8;
                    }
                    t5 = t9;
                    t8 = t2;
                } else {
                    t2 = t7;
                    t9 = t4;
                    if ((0xC & (unsigned short)t3) == 0) {
                    } else {
                        if ((int)t4 < (int)0x4) {
                            if ((0x4 & (unsigned short)t3) != 0) {
                                *(unsigned int *)((a5 + 0x0)) = 0x7;
                                t10 = (0x4 & (unsigned short)t3);
                            } else {
                                *(unsigned int *)((a5 + 0x0)) = 0x8;
                                t10 = 0x8;
                            }
                            t11 = t10;
                            t10 = t4;
                        } else {
                            *(unsigned int *)((a5 + 0x0)) = 0x4;
                            t12 = *(int *)0xC23EAD4;
                            if ((t12 & 12) == 0) {
                                *(unsigned int *)((a6 + 0x0)) = 0x2;
                            } else {
                                *(unsigned int *)((a6 + 0x0)) = 0x0;
                            }
                            t11 = t12;
                            t10 = 0x5;
                        }
                        t2 = t11;
                        t9 = t10;
                    }
                    t5 = t2;
                    t8 = t9;
                }
                t6 = t5;
                t0 = t8;
                t1 = a4;
            }
            t2 = t6;
            t5 = t0;
            t0 = t1;
        } else {
            t1 = ((unsigned short)t3 & 0x2);
            if (((unsigned short)t3 & 0x2) == 0) {
            } else {
                *(unsigned int *)((a5 + 0x0)) = 0x5;
                *(unsigned int *)((0xC23ECC8 + (((unsigned int)(0xFFFF0000 & a7) >> 16) << 2))) = 0x0;
                t1 = (((unsigned int)(0xFFFF0000 & a7) >> 16) << 2);
            }
            t2 = t1;
            t5 = t4;
            t0 = a4;
        }
        t1 = t2;
        t2 = t5;
        t5 = t0;
    } else {
        t0 = t7;
        if (((unsigned short)t3 & 0x2) == 0) {
        } else {
            *(unsigned int *)((a5 + 0x0)) = 0x3;
            *(unsigned int *)((0xC23ECC8 + (((unsigned int)(0xFFFF0000 & a7) >> 16) << 2))) = 0x0;
            t0 = (((unsigned int)(0xFFFF0000 & a7) >> 16) << 2);
        }
        t1 = t0;
        t2 = t4;
        t5 = a4;
    }
    *(unsigned int *)((t5 + 0x0)) = t2;
    return t1;
}
