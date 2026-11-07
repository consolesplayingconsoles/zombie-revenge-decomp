/* Straight-line functions with calls and guards (batch gen_kj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c084800(int, float, float, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcbe0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
extern int FUN_0c0e19f2();
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c099a68(int a4, int a5, int a6, int a7);
int FUN_0c0a21c8(int a4, int a5, int a6, int a7);
int FUN_0c0a6d2e(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c0a6ac4(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);


int FUN_0c0a21c8(int a4, int a5, int a6, int a7)
{
    int stk[24];
    register int t1;
    int t4;
    register int t8;
    register int t26;
    register int t31;
    register int t41;
    register int t42;
    register int t47;
    register int t49;
    register int t52;
    register int t54;
    register int t175;
    register int t91;
    register int t93;
    register int t94;
    register int t102;
    register float u106;
    register float u108;
    register float u112;
    register float u114;
    register float u118;
    register float u120;
    register float u130;
    register float u133;
    register int t136;
    register float u144;
    register float u149;
    register float u151;
    register float u152;
    int t158;
    register float u161;
    register int t172;
    register int t19;
    register int t13;
    register int t183;
    register int t92;
    register float u95;
    register float u96;
    register float u97;
    register float u98;
    register float u115;
    int t170;

    t1 = *(int *)((a4 + 0x30));
    *(unsigned int *)(((int)stk + 16)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    FUN_0c0685a4(a4, a5, a6, a7);
    t4 = *(int *)((t1 + 0x2BC));
    if ((t4 != 0x51A) && (t4 != 0x51B)) {
        if ((*(int *)((t1 + 0x2BC))) == 0x51C) {
            *(unsigned int *)((a4 + 0x4C)) = 0x2;
            t13 = t4;
        } else {
            t8 = ((int (*)(int))(FUN_0c0e19f2))(t4);
        }
        t19 = t13;
    } else {
        *(unsigned int *)((a4 + 0x4C)) = 0x1;
        t19 = t4;
    }
    if ((*(int *)((((*(int *)((t1 + 0xBC))) << 2) + 0xC247030))) == 0) {
        t183 = (((int (*)(int))(FUN_0c0e19f2))(t19));
    } else {
        nlPushMatrix(0x0);
        FUN_0c0dbda0(((*(int *)((t1 + 0x3E4))) + 0x200));
        t26 = FUN_0c0da2e0();
        nlRotateAY((t26 << 1));
        FUN_0c0db470(0xC10CEC4, (((int)stk + 4) + 0x14));
        FUN_0c0dbda0(((*(int *)((t1 + 0x3E4))) + 0x140));
        t31 = FUN_0c0da2e0();
        nlRotateAY((t31 << 1));
        FUN_0c0db470(0xC10CEC4, (((int)stk + 4) + 0x20));
        if ((*(int *)((a4 + 0x4C))) != 1) {
        } else {
            *(unsigned int *)(((int)stk + 12)) = 0x0;
            if (1.0f > (*(float *)((a4 + 0x50)))) {
                *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + 0.0122999996f);
            }
            t41 = *(int *)((a4 + 0x58));
            *(unsigned int *)((a4 + 0x58)) = (t41 - 1);
            if ((int)(t41 - 1) > 0) {
            } else {
                t42 = *(int *)((a4 + 0x5C));
                if ((*(int *)((((t42 * 0x1C) + (a4 + 0x60)) + 0x10))) == 0) {
                    *(unsigned int *)((((t42 * 0x1C) + (a4 + 0x60)) + 0x10)) = (*(int *)((a4 + 0x48)));
                    *(float *)((((t42 * 0x1C) + (a4 + 0x60)) + 0xC)) = 0.0f;
                    *(unsigned int *)((((t42 * 0x1C) + (a4 + 0x60)) + 0x14)) = ((*(int *)((a4 + 0x5C))) & 0x1);
                    nlUnitMatrix();
                    t47 = FUN_0c0da2e0();
                    nlRotateAZ((t47 << 1));
                    t49 = FUN_0c0da2e0();
                    nlRotateAY((t49 << 1));
                    FUN_0c0db470(0xC10CED0, ((t42 * 0x1C) + (a4 + 0x60)));
                    t52 = *(int *)((((t42 * 0x1C) + (a4 + 0x60)) + 0x14));
                    nlAddVector(((t42 * 0x1C) + (a4 + 0x60)), ((((t52 << 1) + t52) << 2) + (((int)stk + 4) + 0x14)));
                    t54 = *(int *)((a4 + 0x5C));
                    *(unsigned int *)((a4 + 0x5C)) = (t54 + 0x1);
                    if ((int)(t54 + 0x1) >= (int)0x10) {
                        *(unsigned int *)((a4 + 0x5C)) = 0x0;
                    }
                    *(unsigned int *)((a4 + 0x58)) = (int)(*(float *)((a4 + 0x54)));
                    *(float *)((a4 + 0x54)) = ((*(float *)((a4 + 0x54))) - 0.20099999f);
                    if (((*(int *)0xC23A258) & 0x1) != 0) {
                        *(float *)((t1 + 0x45C)) = 1.0f;
                        *(float *)((t1 + 0x460)) = 0.161692306f;
                        *(float *)((t1 + 0x464)) = 0.112257712f;
                        *(unsigned int *)(((int)stk + 12)) = 0x1;
                    }
                }
            }
            if ((*(int *)(((int)stk + 12))) == 0) {
                *(float *)((t1 + 0x45C)) = 1.0f;
                *(float *)((t1 + 0x460)) = 1.0f;
                *(float *)((t1 + 0x464)) = 1.0f;
            }
        }
        nlPopMatrix(0x1);
        t175 = 0x4C;
        if ((int)(*(int *)((a4 + 0x4C))) > 0) {
            *(unsigned int *)(((int)stk + 20)) = 0x0;
            nlPushMatrix(0x0);
            *(unsigned int *)(((int)stk + 12)) = 0x0;
            t91 = 0xC0A2470;
            t93 = 0xC0DA2E0;
            t94 = (a4 + 0x60);
            for (;;) {
                if ((int)(*(int *)(((int)stk + 12))) < (int)0x10) {
                    if ((*(int *)((t94 + 0x10))) == 0) {
                    } else {
                        t91 = 0xC;
                        t93 = (*(int *)((t94 + 0x14)));
                        t102 = t93;
                        t93 = (t93 << 1);
                        t93 = (t93 + t102);
                        t93 = (t93 << 2);
                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                        u96 = (*(float *)((t94 + t91)));
                        t93 = (t93 + (((int)stk + 4) + 0x14));
                        u96 = (u96 * 16384.0f);
                        u98 = 1.0f;
                        t91 = 0xC0A2478;
                        u97 = (FUN_0c0da410((int)u96));
                        u98 = (u98 - u97);
                        u96 = (*(float *)((t91 + 0x0)));
                        t91 = 0xC0A247C;
                        u106 = *(float *)((t91 + 0x0));
                        t91 = 0x278;
                        u95 = u98;
                        u95 = (u95 * u96);
                        u108 = (u106 - u95);
                        u95 = (*(float *)((t1 + t91)));
                        t91 = 0x50;
                        *(float *)(((int)stk + 4)) = (u108 * u95);
                        u95 = (*(float *)((a4 + t91)));
                        if (((*(int *)0xC23A258) & 0x1) != 0) {
                            u112 = (u97 * u95);
                            u95 = 1.0f;
                            u115 = u112;
                        } else {
                            t91 = 0xC0A25BC;
                            u114 = (u97 * u95);
                            u95 = (*(float *)((t91 + 0x0)));
                            u115 = u114;
                        }
                        t91 = 0xC0A25C0;
                        u96 = (*(float *)((t91 + 0x0)));
                        t91 = 0x4;
                        u118 = (u115 * u95);
                        *(float *)((((int)stk + 4) + t91)) = (u118 * u96);
                        t91 = (nlUnitMatrix());
                        t91 = 0x8;
                        u120 = *(float *)((t93 + t91));
                        t91 = 0x4;
                        t91 = (FUN_0c0dcc70((*(float *)((t93 + 0x0))), (*(float *)((t93 + t91))), u120));
                        t91 = 0x50;
                        u95 = u97;
                        u96 = (*(float *)((a4 + t91)));
                        u95 = (u95 * u96);
                        u96 = u95;
                        u96 = (u96 * 16384.0f);
                        t91 = (nlRotateAY((int)u96));
                        t91 = 0x8;
                        u95 = (*(float *)((t94 + t91)));
                        u96 = (*(float *)((t93 + t91)));
                        t91 = 0x4;
                        u95 = (u95 - u96);
                        u96 = (*(float *)((t93 + t91)));
                        u130 = (u95 * u98);
                        u95 = (*(float *)((t94 + t91)));
                        u95 = (u95 - u96);
                        u96 = (*(float *)((t93 + 0x0)));
                        u133 = (u95 * u98);
                        u95 = (*(float *)((t94 + 0x0)));
                        u95 = (u95 - u96);
                        t91 = (FUN_0c0dcc70((u95 * u98), u133, u130));
                        t91 = 0x3CE;
                        t136 = *(short *)(((*(int *)(((int)stk + 16))) + t91));
                        t91 = 0x50;
                        u96 = (*(float *)((a4 + t91)));
                        u97 = (u97 * u96);
                        u97 = (u97 * 16384.0f);
                        t91 = (nlRotateAY((t136 - (int)u97)));
                        t91 = 0x3CC;
                        t91 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 16))) + t91)))));
                        t91 = (nlRotateAZ((*(int *)((t94 + 0x18)))));
                        u144 = *(float *)(((int)stk + 4));
                        t91 = (nlScale(u144, u144, u144));
                        t91 = (FUN_0c0de000((*(float *)(((int)stk + 4)))));
                        t91 = 0xC0A25DC;
                        u96 = (*(float *)((t91 + 0x0)));
                        t91 = 0x4;
                        u149 = *(float *)((((int)stk + 4) + t91));
                        t91 = 0xC0A25E0;
                        u95 = (*(float *)((t91 + 0x0)));
                        t91 = 0x4;
                        u151 = *(float *)((((int)stk + 4) + t91));
                        t91 = 0xC0A25E4;
                        u152 = *(float *)((t91 + 0x0));
                        t91 = 0x4;
                        t91 = (FUN_0c0848bc(((*(float *)((((int)stk + 4) + t91))) * u152), (u151 * u95), (u149 * u96)));
                        t91 = (FUN_0c0c47ae((*(int *)((t94 + 0x10)))));
                        t92 = 0x3D00346D;
                        t91 = 0xC;
                        u95 = (*(float *)((t94 + t91)));
                        t158 = t92;
                        t92 = 0x50;
                        t92 = (t92 + a4);
                        u96 = (*(float *)((t92 + 0x0)));
                        u161 = u95;
                        u161 = u161 + (*(float *)&(t158)) * u96;
                        u95 = u161;
                        u96 = u95;
                        *(float *)((t94 + t91)) = u95;
                        if (u96 > 1.0f) {
                            *(unsigned int *)((t94 + 0x10)) = 0x0;
                        }
                    }
                    t94 = (t94 + 0x1C);
                    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
                    continue;
                }
                break;
            }
            nlPopMatrix(0x1);
            FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
            t172 = 0x4C;
            if (((int)(*(int *)((a4 + 0x4C))) > (int)0x1) && (t170 = *(int *)(((int)stk + 20)), t170 == 0)) {
                *(float *)((t1 + 0x45C)) = 1.0f;
                *(float *)((t1 + 0x460)) = 1.0f;
                *(float *)((t1 + 0x464)) = 1.0f;
                t172 = (((int (*)(void))(FUN_0c0e19f2))());
            }
            t175 = t172;
        }
        t183 = t175;
    }
    return t183;
}


int FUN_0c0a6ac4(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int stk[27];
    register float u2;

    stk[18] = a8;
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = f10;
    *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = f11;
    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(float *)(((int)stk + 52)) = ((*(float *)(((int)stk + 52))) - f7);
    *(float *)(((int)stk + 48)) = ((*(float *)(((int)stk + 48))) - f8);
    u2 = (*(float *)&a8 - f9);
    *(float *)(((int)stk + 72)) = u2;
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), f4, f5, f6);
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAX((-(*(int *)(((int)stk + 4)))));
    nlRotateAY((-(*(int *)(((int)stk + 8)))));
    *(float *)(((int)stk + 36)) = (*(float *)(((int)stk + 52)));
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 48)));
    *(float *)(((int)stk + 44)) = u2;
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x44) + 0x0)) = (*(float *)(((int)stk + 32)));
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    u2 = *(float *)&a12;
    *(float *)(((int)stk + 72)) = u2;
    *(float *)(((int)stk + 36)) = (*(float *)(((int)stk + 52)));
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 48)));
    *(float *)(((int)stk + 44)) = u2;
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x44) + 0x0)) = (*(float *)(((int)stk + 32)));
    nlPopMatrix(0x1);
    *(float *)(((*(int *)(((int)stk + 12))) + 0x0)) = (f7 + (*(float *)(((int)stk + 52))));
    *(float *)(((*(int *)(((int)stk + 20))) + 0x0)) = (f8 + (*(float *)(((int)stk + 48))));
    *(float *)(((*(int *)(((int)stk + 16))) + 0x0)) = (f9 + u2);
    return 0x44;
}

int FUN_0c0a6d2e(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int stk[27];
    register float u2;

    stk[18] = a8;
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = f10;
    *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = f11;
    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(float *)(((int)stk + 52)) = ((*(float *)(((int)stk + 52))) - f7);
    *(float *)(((int)stk + 48)) = ((*(float *)(((int)stk + 48))) - f8);
    u2 = (*(float *)&a8 - f9);
    *(float *)(((int)stk + 72)) = u2;
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), f4, f5, f6);
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAX((-(*(int *)(((int)stk + 4)))));
    nlRotateAY((-(*(int *)(((int)stk + 8)))));
    *(float *)(((int)stk + 36)) = (*(float *)(((int)stk + 52)));
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 48)));
    *(float *)(((int)stk + 44)) = u2;
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x44) + 0x0)) = (*(float *)(((int)stk + 32)));
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    u2 = *(float *)&a12;
    *(float *)(((int)stk + 72)) = u2;
    *(float *)(((int)stk + 36)) = (*(float *)(((int)stk + 52)));
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 48)));
    *(float *)(((int)stk + 44)) = u2;
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0x44) + 0x0)) = (*(float *)(((int)stk + 32)));
    nlPopMatrix(0x1);
    *(float *)(((*(int *)(((int)stk + 12))) + 0x0)) = (f7 + (*(float *)(((int)stk + 52))));
    *(float *)(((*(int *)(((int)stk + 20))) + 0x0)) = (f8 + (*(float *)(((int)stk + 48))));
    *(float *)(((*(int *)(((int)stk + 16))) + 0x0)) = (f9 + u2);
    return 0x44;
}

