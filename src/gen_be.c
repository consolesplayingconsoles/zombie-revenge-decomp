/* Straight-line functions with calls and guards (batch gen_be): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02a416(int);
int FUN_0c032394(int);
int FUN_0c036994(int, int, int, int, int, int, int, float);
int FUN_0c036efc(int, int, int, int);
int FUN_0c084800(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0cc3f8(int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
int FUN_0c0dcd10(int, int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0dcef0(int, int, int);
int FUN_0c0dfd50(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5f1c(int);
int FUN_0c0e61d4(void);
int FUN_0c0a3cdc(int a4, int a5, int a6, int a7);
int FUN_0c036a4c(int a4, int a5, int a6, int a7);
int FUN_0c063df0(int a4, int a5, int a6);
int FUN_0c03261c(int a4, float f4, float f5);
int FUN_0c064640(int a4, int a5);
int FUN_0c0b2126(int a4, int a5, int a6, int a7);
void FUN_0c058e7c(int a4, int a5, int a6, int a7);

int FUN_0c0a3cdc(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t7;
    int t22;
    int t23;
    float u25;
    float u43;
    float u31;
    int stk[10];

    t0 = *(int *)((a4 + 0x44));
    t1 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x44)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        *(float *)((t1 + 0x45C)) = 1.0f;
        *(float *)((t1 + 0x460)) = 1.0f;
        *(float *)((t1 + 0x464)) = 1.0f;
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    t7 = *(int *)((a4 + 0x34));
    if (t7 != 0) {
        if (t7 != 1) {
            if (t7 != 2) {
            } else {
                if (((*(int *)0xC23A258) & 1) != 0) {
                    *(float *)((a4 + 0x3C)) = 0.0f;
                } else {
                    *(float *)((a4 + 0x3C)) = 1.0f;
                }
            }
        } else {
            if ((int)(*(int *)((a4 + 0x44))) < (int)0x3C) {
                u31 = ((*(float *)((a4 + 0x3C))) * 0.969999969f);
            } else {
                t22 = FUN_0c0da2e0();
                t23 = *(int *)(((0x40 + a4) + 0x0));
                *(unsigned int *)(((0x40 + a4) + 0x0)) = (t23 + ((t22 + 0x1234) & 0xFFF));
                u25 = 0.699999988f;
                u25 = u25 + 0.299999982f * (FUN_0c0d9e90((t23 + ((t22 + 0x1234) & 0xFFF))));
                u31 = (u25 * 0.799999952f);
            }
            *(float *)((a4 + 0x3C)) = u31;
        }
    } else {
        u43 = *(float *)((a4 + 0x3C));
        *(float *)((a4 + 0x3C)) = (u43 + 0.0399999954f);
        if (!(0.799999952f > (u43 + 0.0399999954f))) {
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
        }
    }
    FUN_0c0dce80(((int)stk + 4), (*(int *)((a4 + 0x38))), (*(float *)((a4 + 0x3C))));
    return (FUN_0c0dcef0((0x45C + t1), 0xC10D078, ((int)stk + 4)));
}

int FUN_0c036a4c(int a4, int a5, int a6, int a7)
{
    int t1;
    int t6;
    int t27;
    int t23;
    int t24;
    int t51;
    int t52;
    int t55;
    int stk[13];

    t1 = *(int *)((((*(int *)((a4 + 0x30))) << 2) + 0xC246FF0));
    if (t1 == 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    t6 = *(int *)((a4 + 0x3C));
    if (t6 != 0) {
        t27 = t6;
        if (t6 != 1) {
        } else {
            FUN_0c036994((*(int *)((a4 + 0x30))), (*(int *)((a4 + 0x48))), ((*(int *)((t1 + 0xA4))) & 0x8), (((int)stk + 4) + 0xC), (((int)stk + 8) + 0x14), (((int)stk + 12) + 0x8), (((int)stk + 16) + 0x8), (*(float *)0xC036BAC));
            *(unsigned int *)(((((*(int *)((a4 + 0x4C))) << 2) + (a4 + 0x50)) + 0x0)) = (*(int *)((a4 + 0x48)));
            *(volatile int *)((a4 + 0x4C));
            FUN_0c0e61d4();
            *(float *)(((((*(int *)((a4 + 0x4C))) << 2) + (0xD0 + a4)) + 0x0)) = (*(float *)(((int)stk + 20)));
            *(float *)(((((*(int *)((a4 + 0x4C))) << 2) + (0xF0 + a4)) + 0x0)) = (float)(*(int *)(((int)stk + 16)));
            *(unsigned int *)(((((*(int *)((a4 + 0x4C))) << 2) + (0x110 + a4)) + 0x0)) = (*(int *)(((int)stk + 24)));
            *(unsigned int *)((a4 + 0x48)) = ((*(int *)((a4 + 0x48))) - 0x2000);
            t23 = *(int *)((a4 + 0x4C));
            *(unsigned int *)((a4 + 0x4C)) = (t23 + 0x1);
            t24 = 0x4C;
            if ((int)(t23 + 0x1) >= (int)0x8) {
                *(unsigned int *)((a4 + 0x38)) = 0x1;
                *(unsigned int *)((a4 + 0x3C)) = 0x0;
                t24 = 0x1;
            }
            t27 = t24;
        }
        t55 = t27;
    } else {
        *(unsigned int *)((a4 + 0x48)) = 0x10000;
        *(unsigned int *)((a4 + 0x4C)) = 0x0;
        *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + 0x1);
        FUN_0c036994((*(int *)((a4 + 0x30))), (*(int *)((a4 + 0x48))), ((*(int *)((t1 + 0xA4))) & 0x8), (((int)stk + 4) + 0xC), (((int)stk + 8) + 0x14), (((int)stk + 12) + 0x8), (((int)stk + 16) + 0x8), (*(float *)0xC036BAC));
        *(unsigned int *)(((((*(int *)((a4 + 0x4C))) << 2) + (a4 + 0x50)) + 0x0)) = (*(int *)((a4 + 0x48)));
        *(volatile int *)((a4 + 0x4C));
        FUN_0c0e61d4();
        *(float *)(((((*(int *)((a4 + 0x4C))) << 2) + (0xD0 + a4)) + 0x0)) = (*(float *)(((int)stk + 20)));
        *(float *)(((((*(int *)((a4 + 0x4C))) << 2) + (0xF0 + a4)) + 0x0)) = (float)(*(int *)(((int)stk + 16)));
        *(unsigned int *)(((((*(int *)((a4 + 0x4C))) << 2) + (0x110 + a4)) + 0x0)) = (*(int *)(((int)stk + 24)));
        *(unsigned int *)((a4 + 0x48)) = ((*(int *)((a4 + 0x48))) - 0x2000);
        t51 = *(int *)((a4 + 0x4C));
        *(unsigned int *)((a4 + 0x4C)) = (t51 + 0x1);
        t52 = 0x4C;
        if ((int)(t51 + 0x1) >= (int)0x8) {
            *(unsigned int *)((a4 + 0x38)) = 0x1;
            *(unsigned int *)((a4 + 0x3C)) = 0x0;
            t52 = 0x1;
        }
        t55 = t52;
    }
    return t55;
}

int FUN_0c063df0(int a4, int a5, int a6)
{
    int t1;
    int t10;
    int t12;
    int t14;

    t1 = FUN_0c0e19aa(0xC063D38, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a6 + 0x2)));
    if ((int)(*(short *)((a4 + 0xE8))) < (int)0x4) {
        t10 = 0x0;
        if ((*(signed char *)((a6 + 0x4))) != 0) {
            t10 = (*(int *)((a4 + 0x1EC)));
        }
        t14 = t10;
    } else {
        t12 = *(int *)((a4 + 0xBC));
        t14 = (((int)t12 >= 0) ? (0x1 << (t12 & 31)) : ((-(int)t12 & 31) ? ((int)0x1 >> (-(int)t12 & 31)) : ((int)0x1 >> 31)));
    }
    *(unsigned int *)((t1 + 0x1EC)) = t14;
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a6 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a6 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a6 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a6 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a6 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a6 + 0x0)));
    *(unsigned int *)((t1 + 0x22C)) = 0x0;
    *(float *)((t1 + 0x30)) = (*(float *)((a5 + 0x0)));
    *(float *)((t1 + 0x34)) = (*(float *)((a5 + 0x4)));
    *(float *)((t1 + 0x38)) = (*(float *)((a5 + 0x8)));
    FUN_0c0e61d4();
    *(unsigned int *)((t1 + 0x230)) = a5;
    return 0x230;
}

int FUN_0c03261c(int a4, float f4, float f5)
{
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int stk[19];

    *(float *)(((int)stk + 12)) = f4;
    *(float *)(((int)stk + 8)) = f5;
    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c0cc3f8((*(int *)((((*(int *)((a4 + 0x1F8))) << 2) + 0xC1FFB70))));
        return 0x0;
    }
    t4 = FUN_0c032394(a4);
    if ((int)t4 >= 0) {
        t5 = FUN_0c02a416(a4);
        if ((t5 == 0) && ((t6 = *(int *)((a4 + 0x49C)), t6 != 3) && (t7 = *(int *)((a4 + 0x510)), t8 = *(int *)((0xC247030 + (t7 << 2))), t8 == 4))) {
            *(volatile int *)((a4 + 0x510));
            FUN_0c0e61d4();
            *(float *)(((int)stk + 60)) = (*(float *)(((int)stk + 12)));
            *(float *)(((int)stk + 64)) = (1.0f + 1.0f);
            FUN_0c0e61d4();
            *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 8)));
            *(float *)(((int)stk + 44)) = 1.0f;
            FUN_0c036efc((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), ((int)stk + 4));
            FUN_0c0dcd10((0x4B0 + a4), (((int)stk + 4) + 0xC));
            *(float *)((a4 + 0x550)) = (*(float *)(((int)stk + 4)));
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c064640(int a4, int a5)
{
    int t1;
    int t5;
    int t10;

    t1 = FUN_0c0e19aa(0xC064740, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    t5 = 0x10;
    if ((int)(*(int *)((a4 + 0xBC))) < (int)0xC) {
        t5 = (*(int *)((a4 + 0xBC)));
    }
    *(unsigned int *)((t1 + 0xBC)) = t5;
    t10 = 0x0;
    if ((*(signed char *)((a5 + 0x4))) != 0) {
        t10 = (*(int *)((a4 + 0x1EC)));
    }
    *(unsigned int *)((t1 + 0x1EC)) = t10;
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = ((unsigned short)(*(short *)((a5 + 0x8))) << 1);
    FUN_0c0e61d4();
    return t1;
}

int FUN_0c0b2126(int a4, int a5, int a6, int a7)
{
    int t0;
    int t13;
    int t31;
    int t33;
    int t62;
    int t94;
    int t96;

    t0 = *(int *)((a4 + 0x68));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        if ((0x2 & (*(int *)0xC23ED88)) != 0) {
                            *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFFFFFD);
                            FUN_0c0e19f2(0xC23ED88, 0x2, a6, a7);
                        }
                        FUN_0c084800(0.0f, 0.0f, 0.0f);
                        FUN_0c0dfd50((a4 + 0x30));
                        return FUN_0c0849da();
                    }
                    *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) - 1.0f);
                    t13 = *(int *)((a4 + 0x94));
                    *(unsigned int *)((a4 + 0x94)) = (t13 - 1);
                    if ((int)(t13 - 1) <= 0) {
                        *(unsigned int *)((a4 + 0x68)) = ((*(int *)((a4 + 0x68))) + 0x1);
                    }
                    if ((0x2 & (*(int *)0xC23ED88)) != 0) {
                        *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFFFFFD);
                        FUN_0c0e19f2(0xC23ED88, 0x2, a6, a7);
                    }
                    FUN_0c084800(0.0f, 0.0f, 0.0f);
                    FUN_0c0dfd50((a4 + 0x30));
                    return FUN_0c0849da();
                }
                t31 = *(int *)((a4 + 0x90));
                *(unsigned int *)((a4 + 0x90)) = (t31 - 1);
                t33 = 0x90;
                if ((int)(t31 - 1) <= 0) {
                    *(unsigned int *)((a4 + 0x68)) = ((*(int *)((a4 + 0x68))) + 0x1);
                    t33 = 0x68;
                }
                return t33;
            }
            if (((*(int *)0xC23ED88) & 0x2) == 0) {
                if (((*(int *)0xC23ED5C) & 0x2) != 0) {
                    *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFFFFFD);
                    FUN_0c0e19f2(0xC23ED88, 0x2, a6, a7);
                }
            } else {
                *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFFFFFD);
                FUN_0c0e19f2(0xC23ED88, 0x2, a6, a7);
            }
            FUN_0c084800(0.0f, 0.0f, 0.0f);
            FUN_0c0dfd50((a4 + 0x30));
            return FUN_0c0849da();
        }
        *(float *)((a4 + 0x40)) = ((*(float *)((a4 + 0x40))) + 1.0f);
        t62 = *(int *)((a4 + 0x94));
        *(unsigned int *)((a4 + 0x94)) = (t62 - 1);
        if ((int)(t62 - 1) <= 0) {
            *(unsigned int *)((a4 + 0x68)) = ((*(int *)((a4 + 0x68))) + 0x1);
        }
        if (((*(int *)0xC23ED88) & 0x2) == 0) {
            if (((*(int *)0xC23ED5C) & 0x2) != 0) {
                *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFFFFFD);
                FUN_0c0e19f2(0xC23ED88, 0x2, a6, a7);
            }
        } else {
            *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) & 0xFFFFFFFD);
            FUN_0c0e19f2(0xC23ED88, 0x2, a6, a7);
        }
        FUN_0c084800(0.0f, 0.0f, 0.0f);
        FUN_0c0dfd50((a4 + 0x30));
        return FUN_0c0849da();
    }
    t94 = *(int *)((a4 + 0x90));
    *(unsigned int *)((a4 + 0x90)) = (t94 - 1);
    t96 = 0x90;
    if ((int)(t94 - 1) <= 0) {
        *(unsigned int *)((a4 + 0x68)) = ((*(int *)((a4 + 0x68))) + 0x1);
        t96 = 0x68;
    }
    return t96;
}

void FUN_0c058e7c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t22;
    int t50;

    t0 = *(int *)0xC20499C;
    if ((a4 != 22) && ((a4 != 23) && (a4 != 24))) {
        if ((a4 != 25) && ((a4 != 26) && (a4 != 27))) {
            if (a4 != 28) {
            } else {
                FUN_0c0e5f1c(a4);
            }
        } else {
            if ((*(int *)0xC1FF88C) != 0) {
            } else {
                if (t0 == 0) {
                    FUN_0c0e5f1c(a4);
                } else {
                    t22 = FUN_0c0e5f1c(a4);
                    if ((int)(t22 + 0xB) < (int)0xC) {
                        *(volatile int *)0xC23EDC0;
                        
                    }
                }
            }
        }
    } else {
        t50 = FUN_0c0e5f1c(a4);
        if (t50 != 0) {
        } else {
            if (a6 != 0) {
                *(volatile int *)0xC23EDC0;
            }
        }
    }
}
