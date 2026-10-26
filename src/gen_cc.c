/* Straight-line functions with calls and guards (batch gen_cc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c02a416(int);
int FUN_0c03442c(int, int, int, int);
int FUN_0c034b1c(int, int);
int FUN_0c03bd28(int, int, int, int, int);
int FUN_0c0909fc(int);
int FUN_0c090f70(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int, int, int);
int FUN_0c0da2e0(void);
int FUN_0c0dc4c0(int);
int FUN_0c0dc510(int);
int FUN_0c0dc6e0(int);
int FUN_0c0dc890(int);
int FUN_0c0dc950(int);
int FUN_0c0dcca0(int);
int FUN_0c0dcd10(int, int);
float FUN_0c0dcda0(int, int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e61d4(void);
int FUN_0c0e6248(void);
int FUN_0c03374c(int a4);
int FUN_0c0ccd5a(int a4, int a5, int a6);
void FUN_0c08b580(int a4, int a5, int a6, float f4, float f5);
int FUN_0c03ce1e(int a4);
int FUN_0c077da4(int a4);
int FUN_0c03ceec(int a4);
int FUN_0c063994(int a4, int a5);

int FUN_0c03374c(int a4)
{
    int t0;
    int t5;
    int t9;
    int t11;
    int t32;
    int t26;
    int t22;
    int t25;
    int t44;
    int t40;
    int t43;
    int t56;
    int t14;
    int t10;
    int t50;
    int t23;
    int t41;
    int stk[11];

    t0 = *(int *)((a4 + 0x488));
    if ((*(int *)((t0 + 0xD8))) != 0) {
        *(unsigned int *)((a4 + 0x510)) = (*(int *)((t0 + 0x1C4)));
        *(unsigned int *)((a4 + 0xE4)) = (*(int *)((t0 + 0x1C4)));
        t5 = *(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0));
        FUN_0c03442c(a4, t5, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x8));
        if ((*(int *)((t0 + 0xD8))) != 2) {
            FUN_0c0909fc(t0);
            t9 = FUN_0c034b1c(a4, t5);
            t11 = 0x1;
            if ((t9 == 0) && (t10 = *(int *)(((int)stk + 12)), t10 == 0)) {
                t11 = 0x2;
            }
            t14 = t11;
        } else {
            FUN_0c090f70(t0);
            t14 = 0x1;
        }
        t56 = t14;
    } else {
        if (!((*(float *)((a4 + 0x34))) > ((*(float *)((a4 + 0x390))) + 12.0f))) {
            t32 = 0x1;
            if (!(-0.0272199996f > (*(float *)((a4 + 0x64))))) {
                t26 = 0x1;
                if ((*(float *)((a4 + 0x34))) > (*(float *)((a4 + 0x390)))) {
                    t22 = FUN_0c02a416(a4);
                    t25 = 0x1;
                    if ((t22 == 0) && (t23 = *(int *)((a4 + 0x49C)), t23 != 3)) {
                        FUN_0c01cdc2(t0);
                        t25 = 0x0;
                    }
                    t26 = t25;
                }
                t32 = t26;
            }
            t50 = t32;
        } else {
            t44 = 0x1;
            if ((*(float *)((a4 + 0x34))) > (*(float *)((a4 + 0x390)))) {
                t40 = FUN_0c02a416(a4);
                t43 = 0x1;
                if ((t40 == 0) && (t41 = *(int *)((a4 + 0x49C)), t41 != 3)) {
                    FUN_0c01cdc2(t0);
                    t43 = 0x0;
                }
                t44 = t43;
            }
            t50 = t44;
        }
        t56 = t50;
    }
    return t56;
}

int FUN_0c0ccd5a(int a4, int a5, int a6)
{
    int t4;
    int t6;
    float u16;
    int stk[14];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    if (a6 != 0) {
        *(unsigned int *)(((int)stk + 12)) = 0x1;
        *(unsigned int *)(((int)stk + 8)) = ((0xC23F268 + (((((a6 << 1) + a6) << 2) << 2) << 2)) + 0xC);
    }
    t4 = 0x14;
    for (;;) {
        t6 = FUN_0c0e19aa(0xC0CCE64, 0xC8, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t6);
        *(unsigned int *)((t6 + 0xB8)) = 0x0;
        *(unsigned int *)((t6 + 0xAC)) = (*(int *)0xC1E9E7C);
        *(unsigned int *)(((0xB4 + t6) + 0x0)) = (*(short *)0xC1E9E80);
        *(unsigned int *)(((0xB0 + t6) + 0x0)) = (*(short *)0xC1E9E82);
        *(unsigned int *)((t6 + 0x30)) = (*(int *)(((int)stk + 12)));
        *(volatile int *)(((int)stk + 8));
        FUN_0c0e61d4();
        FUN_0c0e61d4();
        t4 = (t4 - 0x1);
        u16 = 0.75f;
        u16 = u16 + 7.62962736e-06f * (float)(FUN_0c0da2e0());
        *(float *)((t6 + 0x98)) = u16;
        *(unsigned int *)((t6 + 0xA8)) = 0x1;
        *(unsigned int *)((t6 + 0xC4)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)((t6 + 0xC0)) = a6;
        if (t4 == 0) {
            break;
        }
    }
    return 0xC0;
}

void FUN_0c08b580(int a4, int a5, int a6, float f4, float f5)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    float u11;
    float u12;
    float u13;
    int t44;
    int t45;
    int t46;
    float u47;
    float u48;
    float u49;
    int t24;
    int t0;
    int t1;
    int t9;
    int t10;
    float u14;
    int t40;
    int t41;
    int t29;
    int t30;
    int t33;
    int t34;
    int t35;
    float u36;
    float u37;
    float u38;
    int t25;

    t2 = 0x0;
    t3 = a5;
    t4 = a6;
    t5 = 0x0;
    t6 = 0x0;
    t7 = 0x0;
    t8 = 0x1;
    u11 = (float)a6;
    u12 = f4;
    u13 = f5;
    for (;;) {
        t44 = t2;
        t45 = t3;
        t46 = t4;
        u47 = u11;
        u48 = u12;
        u49 = u13;
        if ((*(int *)((((((t7 << 2) + t7) << 2) + 0xC248CBC) + 0x0))) == 0) {
            t0 = 0xC247030;
            t1 = 0x3;
            if ((int)(*(int *)((t5 + t0))) >= (int)t1) {
                t0 = 0xC246FF0;
                t9 = (*(int *)((t6 + t0)));
                t3 = a4;
                t2 = t9;
                t2 = (t2 + 0x30);
                u14 = (FUN_0c0dcda0(t2, t3));
                if (f4 > u14) {
                    t2 = 0xC08B730;
                    t4 = (*(int *)0xC23ECF0);
                    t3 = 0x48;
                    t0 = (FUN_0c0e19aa(0xC08B730, t3, t4));
                    t10 = t0;
                    t2 = t0;
                    t0 = (FUN_0c0e19d0(t2));
                    t1 = ((((t7 << 2) + t7) << 2) + 0xC248CBC);
                    t1 = (t1 + 0x8);
                    t0 = 0xC;
                    t0 = (FUN_0c0e61d4());
                    u14 = (u14 / f4);
                    t0 = 0xBC;
                    *(unsigned int *)((((((t7 << 2) + t7) << 2) + 0xC248CBC) + 0x0)) = t10;
                    *(unsigned int *)((t10 + 0x30)) = t9;
                    t24 = *(int *)((t9 + t0));
                    t0 = 0x4;
                    *(unsigned int *)((t10 + 0x38)) = t24;
                    u14 = (u14 * f5);
                    *(float *)((((((t7 << 2) + t7) << 2) + 0xC248CBC) + t0)) = u14;
                    t0 = 0x40;
                    *(unsigned int *)((t10 + t0)) = a5;
                    t0 = 0x44;
                    *(float *)((t10 + t0)) = (f5 / (float)a6);
                    t0 = 0x38C;
                    *(unsigned int *)((t9 + t0)) = t8;
                    t25 = t0;
                }
                t29 = t25;
            } else {
                t29 = t0;
                t30 = t1;
                t33 = t2;
                t34 = t3;
                t35 = t4;
                u36 = u11;
                u37 = u12;
                u38 = u13;
            }
            t40 = t29;
            t41 = t30;
            t44 = t33;
            t45 = t34;
            t46 = t35;
            u47 = u36;
            u48 = u37;
            u49 = u38;
        } else {
            t40 = t0;
            t41 = t1;
        }
        u11 = u47;
        u12 = u48;
        u13 = u49;
        t0 = t40;
        t1 = t41;
        t2 = t44;
        t3 = t45;
        t4 = t46;
        t7 = (t7 + 0x1);
        t8 = (t8 + 0x1);
        t6 = (t6 + 0x4);
        t5 = (t5 + 0x4);
        if ((int)t7 >= (int)0xC) {
            break;
        }
    }
}

int FUN_0c03ce1e(int a4)
{
    int t7;
    int t8;
    int t18;
    int t3;
    int t4;
    int t14;
    int t15;
    int t9;

    if (((*(int *)((a4 + 0x20C))) & 64) != 0) {
        *(unsigned int *)((a4 + 0x560)) = 0x0;
        return 0x560;
    }
    FUN_0c03bd28(a4, 0x0, 0x3, 0x5, 0x0);
    if (((int)(*(int *)((a4 + 0x304))) > 0) && ((t3 = *(int *)((a4 + 0x57C)), t3 != 4) && (t4 = *(int *)((a4 + 0x560)), t4 == 0))) {
    } else {
        t7 = *(int *)((a4 + 0x4F8));
        if ((t7 == 12) || (t7 == 13)) {
            *(unsigned int *)0xC247D04 = 0xA;
        }
        t8 = *(int *)((a4 + 0x4F8));
        if (((t8 != 4) && (t8 != 5)) || (t9 = *(int *)((a4 + 0x544)), t9 != 3)) {
        } else {
            *(unsigned int *)0xC247D04 = 0xA;
        }
        t14 = 0xA;
        t15 = t8;
    }
    if ((int)(*(int *)((a4 + 0x304))) > 0) {
        t18 = *(int *)((a4 + 0x57C));
        if ((t18 != 0) && (t18 != 1)) {
            if ((t18 != 2) && (t18 != 3)) {
                
                return t18;
            }
            return FUN_0c0cc3f8(0xDB, t14, t15);
        }
        return FUN_0c0cc3f8(0xD9, t14, t15);
    }
    return 0x304;
}

int FUN_0c077da4(int a4)
{
    int t0;
    float u23;
    int t28;
    float u21;

    t0 = *(int *)((a4 + 0x60));
    if (((int)t0 < (int)0x5A) && ((0x1 & t0) != 0)) {
    } else {
        FUN_0c0dc510(0x0);
        FUN_0c0dcca0((a4 + 0x30));
        FUN_0c0dc890((*(short *)((a4 + 0x56))));
        FUN_0c0dc6e0((*(short *)((a4 + 0x54))));
        FUN_0c0dc950((*(short *)((a4 + 0x58))));
        FUN_0c0c475c((*(short *)((a4 + 0x5A))), (*(float *)((a4 + 0x5C))));
        FUN_0c0dc4c0(0x1);
    }
    FUN_0c0dcd10((a4 + 0x48), (a4 + 0x3C));
    FUN_0c0dce80((a4 + 0x48), (a4 + 0x48), 0.979999959f);
    FUN_0c0dcd10((a4 + 0x30), (a4 + 0x48));
    if (!((*(float *)((a4 + 0x34))) > 0.0f) && (u21 = *(float *)((a4 + 0x4C)), 0.0f > u21)) {
        *(float *)((a4 + 0x34)) = 0.0f;
        u23 = (*(float *)((a4 + 0x4C)));
        u23 *= -0.979999959f;
        *(float *)((a4 + 0x4C)) = u23;
    }
    t28 = *(int *)((a4 + 0x60));
    *(unsigned int *)((a4 + 0x60)) = (t28 - 1);
    if ((int)(t28 - 1) < (int)0x1E) {
        *(float *)((a4 + 0x5C)) = ((*(float *)((a4 + 0x5C))) - 0.0333333313f);
        if ((*(int *)((a4 + 0x60))) == 0) {
            return FUN_0c0e19f2();
        }
        return 0x60;
    }
    return 0x60;
}

int FUN_0c03ceec(int a4)
{
    int t7;
    int t8;
    int t18;
    int t3;
    int t4;
    int t14;
    int t15;
    int t9;

    if (((*(int *)((a4 + 0x20C))) & 64) != 0) {
        *(unsigned int *)((a4 + 0x560)) = 0x0;
        return 0x560;
    }
    FUN_0c03bd28(a4, 0x0, 0x3, 0x5, 0x0);
    if (((int)(*(int *)((a4 + 0x304))) > 0) && ((t3 = *(int *)((a4 + 0x57C)), t3 != 4) && (t4 = *(int *)((a4 + 0x560)), t4 == 0))) {
    } else {
        t7 = *(int *)((a4 + 0x4F8));
        if ((t7 == 12) || (t7 == 13)) {
            *(unsigned int *)0xC247D04 = 0xA;
        }
        t8 = *(int *)((a4 + 0x4F8));
        if (((t8 != 4) && (t8 != 5)) || (t9 = *(int *)((a4 + 0x544)), t9 != 3)) {
        } else {
            *(unsigned int *)0xC247D04 = 0xA;
        }
        t14 = 0xA;
        t15 = t8;
    }
    if ((int)(*(int *)((a4 + 0x304))) > 0) {
        t18 = *(int *)((a4 + 0x57C));
        if ((t18 != 0) && (t18 != 1)) {
            if ((t18 != 2) && (t18 != 3)) {
                
                return t18;
            }
            return FUN_0c0cc3f8(0xDF, t14, t15);
        }
        return FUN_0c0cc3f8(0xDD, t14, t15);
    }
    return 0x304;
}

int FUN_0c063994(int a4, int a5)
{
    int t1;
    int t10;
    int t12;
    int t14;

    t1 = FUN_0c0e19aa(0xC0638D0, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    if ((int)(*(short *)((a4 + 0xE8))) < (int)0x4) {
        t10 = 0x0;
        if ((*(signed char *)((a5 + 0x4))) != 0) {
            t10 = (*(int *)((a4 + 0x1EC)));
        }
        t14 = t10;
    } else {
        t12 = *(int *)((a4 + 0xBC));
        t14 = (((int)t12 >= 0) ? (0x1 << (t12 & 31)) : ((-(int)t12 & 31) ? ((int)0x1 >> (-(int)t12 & 31)) : ((int)0x1 >> 31)));
    }
    *(unsigned int *)((t1 + 0x1EC)) = t14;
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x8)));
    FUN_0c0e61d4();
    FUN_0c0e6248();
    return (FUN_0c0e61d4());
}
