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

int FUN_0c099a68(int a4, int a5, int a6, int a7)
{
    int stk[24];
    register int t4;
    register int t9;
    register int t10;
    register int t134;
    register int t14;
    register int t17;
    register int t22;
    register float u23;
    register float u25;
    register float u27;
    register int t30;
    register int t36;
    register int t41;
    register float u42;
    register float u45;
    register float u48;
    register float u49;
    register int t59;
    register int t61;
    register int t65;
    register int t71;
    register float u73;
    register int t76;
    register float u77;
    register float u78;
    register int t88;
    register int t92;
    register int t140;
    int t141;
    register int t142;
    register int t143;
    register int t289;
    register float u292;
    register float u293;
    register int t157;
    register int t159;
    register float u160;
    register float u162;
    register int t164;
    register int t165;
    register float u171;
    register float u174;
    register int t175;
    register float u182;
    register float u184;
    register float u185;
    register float u187;
    register float u198;
    register float u208;
    register float u209;
    register int t215;
    register float u221;
    register float u222;
    register float u223;
    register float u225;
    register float u251;
    register float u254;
    register float u255;
    register int t257;
    register float u264;
    register float u265;
    register float u276;
    register float u323;
    register float u324;
    register float u327;
    register float u329;
    register float u347;
    register float t350;
    register float t352;
    register int t363;
    register int t369;
    register int t371;
    register float u373;
    register float u375;
    register int t376;
    register float u378;
    register int t379;
    register float u382;
    register int t383;
    register float u386;
    register int t387;
    register float u390;
    register int t406;
    register int t408;
    int t6;
    register int t7;
    register int t8;
    register int t135;
    register int t137;
    int t60;
    register int t62;
    register float u63;
    register float u64;
    register int t95;
    register float u98;
    register int t109;
    register float u112;
    register float u113;
    register float u144;
    register float u145;
    register int t283;
    register float u286;
    register float u287;
    register int t239;
    register float u242;
    register float u243;
    register int t167;
    register int t233;
    register float u236;
    register float u237;
    register float u217;

    *(unsigned int *)(((int)stk + 8)) = (*(int *)((a4 + 0x30)));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    FUN_0c0685a4(a4, a5, a6, a7);
    t4 = *(int *)((a4 + 0x34));
    t9 = 0x2EC;
    if (((*(int *)(((t4 << 2) + 0xC247030))) != 0) && (t6 = *(int *)(((int)stk + 8)), t7 = *(int *)((0x2EC + t6)), (t7 & 15) == 0)) {
        t8 = t7;
    } else {
        *(unsigned int *)((a4 + 0x38)) = 0x1;
        t8 = 0xC247030;
        t9 = (t4 << 2);
    }
    t10 = *(int *)((a4 + 0x38));
    t134 = t8;
    if (t10 != 0) {
        t135 = t9;
        t137 = t10;
    } else {
        nlPushMatrix(0x0);
        t14 = FUN_0c0dbda0(((*(int *)(((*(int *)(((int)stk + 8))) + 0x3E4))) + 0x40));
        if ((int)(*(int *)((a4 + 0x3C))) < (int)0x1E) {
            t17 = *(int *)((a4 + 0x48));
            *(unsigned int *)((a4 + 0x48)) = (t17 + 0x1);
            if ((int)(t17 + 0x1) >= (int)0xB4) {
                *(unsigned int *)((a4 + 0x48)) = 0x0;
            }
            *(unsigned int *)((((t17 * 0x3C) + (0x9C + a4)) + 0x0)) = 0xA;
            *(unsigned int *)((((t17 * 0x3C) + (0x9C + a4)) + 0x4)) = 0x0;
            *(unsigned int *)((((t17 * 0x3C) + (0x9C + a4)) + 0x8)) = 0x392;
            *(float *)((((t17 * 0x3C) + (0x9C + a4)) + 0x18)) = 1.0f;
            *(unsigned int *)((((t17 * 0x3C) + (0x9C + a4)) + 0xC)) = (FUN_0c0da2e0());
            t22 = *(int *)(((int)stk + 8));
            u23 = 1.0f;
            u23 = u23 + 3.05175781e-05f * (float)((FUN_0c0da2e0()) & 0x7FFF);
            u25 = (u23 * (*(float *)((t22 + 0x278))));
            *(float *)((((t17 * 0x3C) + (0x9C + a4)) + 0x1C)) = (u25 * 8.0f);
            u27 = 0.5f;
            u27 = u27 + 1.52587891e-05f * (float)((FUN_0c0da2e0()) & 0x7FFF);
            *(float *)((((t17 * 0x3C) + (0x9C + a4)) + 0x20)) = u27;
            nlPushMatrix(0x0);
            FUN_0c0db470(0xC10C040, (((t17 * 0x3C) + (0x9C + a4)) + 0x24));
            t30 = FUN_0c0da2e0();
            nlRotateAY((t30 << 1));
            FUN_0c0dcbe0(0xC10C04C);
            FUN_0c0db470(0xC10C058, (((t17 * 0x3C) + (0x9C + a4)) + 0x30));
            nlPopMatrix(0x1);
        } else {
            if ((int)(*(int *)((a4 + 0x3C))) > (int)0x1E) {
                t36 = *(int *)((a4 + 0x48));
                *(unsigned int *)((a4 + 0x48)) = (t36 + 0x1);
                if ((int)(t36 + 0x1) >= (int)0xB4) {
                    *(unsigned int *)((a4 + 0x48)) = 0x0;
                }
                *(unsigned int *)((((t36 * 0x3C) + (0x9C + a4)) + 0x0)) = 0x5A;
                *(unsigned int *)((((t36 * 0x3C) + (0x9C + a4)) + 0x4)) = 0x1;
                *(unsigned int *)((((t36 * 0x3C) + (0x9C + a4)) + 0x8)) = 0xFB;
                *(float *)((((t36 * 0x3C) + (0x9C + a4)) + 0x18)) = 1.0f;
                *(unsigned int *)((((t36 * 0x3C) + (0x9C + a4)) + 0xC)) = (FUN_0c0da2e0());
                t41 = *(int *)(((int)stk + 8));
                u42 = (1.0f + 1.0f);
                u42 = u42 + 3.05175781e-05f * (float)((FUN_0c0da2e0()) & 0x7FFF);
                *(float *)((((t36 * 0x3C) + (0x9C + a4)) + 0x1C)) = (u42 * (*(float *)((t41 + 0x278))));
                u45 = 0.75f;
                u45 = u45 + 7.62939453e-06f * (float)((FUN_0c0da2e0()) & 0x7FFF);
                *(float *)((((t36 * 0x3C) + (0x9C + a4)) + 0x20)) = u45;
                nlPushMatrix(0x0);
                u48 = ((float)((*(int *)((a4 + 0x3C))) - 30) / 30.0f);
                u48 = -u48;
                u49 = 0.199999988f;
                u49 = u49 + 0.899999976f * (u48 + 1.0f);
                *(float *)0xC200BA0 = u49;
                if (0.199999988f > (*(float *)0xC200BA0)) {
                    *(float *)0xC200BA0 = 0.199999988f;
                }
                FUN_0c0db470(0xC10C064, (((t36 * 0x3C) + (0x9C + a4)) + 0x24));
                nlRotateAY((((*(int *)0xC23A258) & 0x1) * 0x5555));
                FUN_0c0dcbe0(0xC10C070);
                FUN_0c0db470(0xC200B9C, (((t36 * 0x3C) + (0x9C + a4)) + 0x30));
                nlPopMatrix(0x1);
            } else {
                t59 = t14;
                t61 = 0x18;
                for (;;) {
                    *(unsigned int *)(((int)stk + 12)) = t61;
                    if (t61 != 0) {
                        t59 = 0x48;
                        t60 = 0x9C;
                        t65 = *(int *)((a4 + t59));
                        t61 = 0x3C;
                        t60 = (t60 + a4);
                        *(unsigned int *)((a4 + t59)) = (t65 + 0x1);
                        t62 = (t65 * t61);
                        t62 = (t62 + t60);
                        t60 = 0xB4;
                        t59 = (t65 + 0x1);
                        if ((int)t59 >= (int)t60) {
                            t59 = 0x48;
                            *(unsigned int *)((a4 + t59)) = 0x0;
                        }
                        t61 = 0x5A;
                        t59 = 0x18;
                        *(unsigned int *)((t62 + 0x0)) = t61;
                        *(unsigned int *)((t62 + 0x4)) = 0x1;
                        *(unsigned int *)((t62 + 0x8)) = 0xFB;
                        *(float *)((t62 + t59)) = 1.0f;
                        t59 = (FUN_0c0da2e0());
                        *(unsigned int *)((t62 + 0xC)) = t59;
                        t59 = (FUN_0c0da2e0());
                        t59 = (t59 & 0x7FFF);
                        u63 = 1.0f;
                        t71 = t59;
                        t59 = 0x278;
                        u64 = (float)t71;
                        t61 = (*(int *)(((int)stk + 8)));
                        u73 = u63;
                        u73 = u73 + 3.05175781e-05f * u64;
                        u63 = u73;
                        u64 = (*(float *)((t61 + t59)));
                        t59 = 0x1C;
                        u63 = (u63 * u64);
                        *(float *)((t62 + t59)) = u63;
                        t59 = (FUN_0c0da2e0());
                        t59 = (t59 & 0x7FFF);
                        u63 = 0.5f;
                        t76 = t59;
                        t59 = 0xC099DA0;
                        u77 = *(float *)((t59 + 0x0));
                        t59 = 0x20;
                        u64 = (float)t76;
                        u78 = u63;
                        u78 = u78 + u77 * u64;
                        u63 = u78;
                        *(float *)((t62 + t59)) = u63;
                        t59 = (nlPushMatrix(0x0));
                        t61 = 0xC0DB470;
                        t59 = (FUN_0c0db470(0xC10C07C, (t62 + 0x24)));
                        t59 = 0x4C;
                        if ((*(int *)((a4 + t59))) == 0) {
                            t59 = 0xC099DAC;
                            t61 = 0xC200BAC;
                            u64 = (*(float *)((t59 + 0x0)));
                            t59 = 0xC099DB4;
                            t60 = 0x6AA;
                            *(float *)((t61 + 0x0)) = u64;
                            u64 = (*(float *)((t59 + 0x0)));
                            *(float *)0xC200BB0 = u64;
                            *(unsigned int *)((t62 + 0x8)) = t60;
                            t60 = 0x278;
                            t59 = (*(int *)(((int)stk + 8)));
                            u64 = (*(float *)((t60 + t59)));
                            t59 = 0x1C;
                            t60 = 0x2;
                            *(float *)((t62 + t59)) = u64;
                            t59 = 0x20;
                            *(float *)((t62 + t59)) = 1.0f;
                            *(unsigned int *)((t62 + 0xC)) = 0x0;
                            *(unsigned int *)((t62 + 0x4)) = t60;
                            t60 = 0x238;
                            t59 = (*(int *)(((int)stk + 8)));
                            t60 = (t60 + t59);
                            *(unsigned short *)((t60 + 0x0)) = 0x1;
                            t95 = t60;
                        } else {
                            t59 = (FUN_0c0da2e0());
                            t59 = (unsigned char)t59;
                            t61 = 0xC200BAC;
                            t88 = t59;
                            t59 = 0xC099EEC;
                            u63 = (*(float *)((t59 + 0x0)));
                            t59 = 0xC099EF0;
                            u64 = (float)t88;
                            u64 = (u64 / u63);
                            u64 = (u64 + (*(float *)((t59 + 0x0))));
                            *(float *)((t61 + 0x0)) = u64;
                            t59 = (FUN_0c0da2e0());
                            t59 = (unsigned char)t59;
                            t61 = 0xC200BB0;
                            t92 = t59;
                            t59 = 0xC099EEC;
                            u63 = (*(float *)((t59 + 0x0)));
                            t59 = 0xC099EF0;
                            u64 = (float)t92;
                            u64 = (u64 / u63);
                            u64 = (u64 + (*(float *)((t59 + 0x0))));
                            *(float *)((t61 + 0x0)) = u64;
                            u98 = u63;
                        }
                        u63 = u98;
                        t60 = t95;
                        t59 = (FUN_0c0da2e0());
                        t59 = (nlRotateAY((t59 << 1)));
                        t61 = 0xC0DCBE0;
                        t59 = (FUN_0c0dcbe0(0xC10C088));
                        t59 = (FUN_0c0db470(0xC200BA8, (t62 + 0x30)));
                        t61 = 0xC0DC4C0;
                        t59 = (nlPopMatrix(0x1));
                        t59 = 0x4C;
                        if ((*(int *)((a4 + t59))) == 0) {
                            t60 = a4;
                            t61 = 0xC0E61D4;
                            *(unsigned int *)((a4 + t59)) = 0x1;
                            t60 = (t60 + 0x60);
                            t59 = 0x3C;
                            { struct mv15 { int w[15]; }; *(struct mv15 *)(t60) = *(struct mv15 *)(t62); }
                            t60 = 0x40400000;
                            t59 = 0x90;
                            u63 = (*(float *)((a4 + t59)));
                            u64 = (*(float *)&(t60));
                            u63 = (u63 / u64);
                            *(float *)((a4 + t59)) = u63;
                            t59 = (t59 + 0x8);
                            u63 = (*(float *)((a4 + t59)));
                            u63 = (u63 / u64);
                            *(float *)((a4 + t59)) = u63;
                            *(unsigned int *)((t62 + 0x0)) = 0x0;
                            t109 = t60;
                            u112 = u63;
                            u113 = u64;
                        }
                        u63 = u112;
                        u64 = u113;
                        t60 = t109;
                        t61 = (*(int *)(((int)stk + 12)));
                        t61 = (t61 - 1);
                        continue;
                    }
                    break;
                }
            }
        }
        t134 = (nlPopMatrix(0x1));
    }
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t140 = t134;
    t141 = t135;
    t142 = t137;
    t143 = (0x9C + a4);
    for (;;) {
        t289 = t141;
        u292 = u144;
        u293 = u145;
        if ((int)(*(int *)((t143 + 0x0))) <= 0) {
        } else {
            t141 = (*(int *)((t143 + 0x0)));
            t141 = (t141 - 1);
            *(unsigned int *)((t143 + 0x0)) = t141;
            t140 = (*(int *)((t143 + 0x4)));
            if (t140 != 0) {
                if (t140 == 1) {
                    t141 = 0x30;
                    t141 = (t141 + t143);
                    t140 = 0x24;
                    u145 = (*(float *)((t141 + 0x0)));
                    u144 = (*(float *)((t143 + t140)));
                    t141 = 0x34;
                    t141 = (t141 + t143);
                    u144 = (u144 + u145);
                    *(float *)((t143 + t140)) = u144;
                    t140 = 0x28;
                    u144 = (*(float *)((t143 + t140)));
                    u145 = (*(float *)((t141 + 0x0)));
                    t141 = 0x38;
                    t141 = (t141 + t143);
                    u144 = (u144 + u145);
                    *(float *)((t143 + t140)) = u144;
                    t140 = 0x2C;
                    u144 = (*(float *)((t143 + t140)));
                    u145 = (*(float *)((t141 + 0x0)));
                    u144 = (u144 + u145);
                    *(float *)((t143 + t140)) = u144;
                    t140 = 0x50;
                    u145 = (*(float *)((a4 + t140)));
                    t140 = 0x28;
                    u144 = (*(float *)((t143 + t140)));
                    if (u145 > u144) {
                        t140 = (t140 + t143);
                        t157 = t140;
                        *(int *)((int)stk + 4) = t157;
                        t140 = (FUN_0c0da2e0());
                        t140 = (t140 & 0x7FFF);
                        t159 = t140;
                        t140 = 0xC09A044;
                        u160 = *(float *)((t140 + 0x0));
                        t140 = 0x50;
                        u144 = (*(float *)((a4 + t140)));
                        u145 = (float)t159;
                        t142 = 0x28;
                        u162 = u144;
                        u162 = u162 + u160 * u145;
                        u144 = u162;
                        u145 = (*(float *)((t157 + 0x0)));
                        u144 = (u144 + 0.199999988f);
                        u145 = (u145 + u144);
                        *(float *)((t157 + 0x0)) = u145;
                        *(unsigned int *)((t143 + 0x4)) = 0x3;
                        t164 = *(int *)((t143 + 0x0));
                        t165 = t142;
                        if ((int)t164 < (int)t142) {
                            t165 = t164;
                        }
                        *(unsigned int *)((t143 + 0x0)) = t165;
                    } else {
                        t167 = t141;
                    }
                    t140 = 0xC09A048;
                    t141 = t167;
                    t141 = 0x58;
                    u171 = *(float *)((t140 + 0x0));
                    t141 = (t141 + a4);
                    t140 = 0x1C;
                    u145 = (*(float *)((t141 + 0x0)));
                    u144 = (*(float *)((t143 + t140)));
                    u174 = u144;
                    u174 = u174 + u171 * u145;
                    u144 = u174;
                    *(float *)((t143 + t140)) = u144;
                    t175 = *(int *)((t143 + 0x0));
                    if ((int)t175 < (int)0x14) {
                        t140 = 0xC09A04C;
                        u144 = (*(float *)((t140 + 0x0)));
                        u145 = (float)t175;
                        u145 = (u145 * u144);
                    } else {
                        u145 = 1.0f;
                    }
                    t140 = 0x14;
                    *(float *)((((int)stk + 8) + t140)) = u145;
                    t140 = 0x20;
                    u144 = (*(float *)((t143 + t140)));
                    t140 = (FUN_0c084800(t175, u145, (u145 * u144), u145));
                    t140 = (nlPushMatrix(0x0));
                    t140 = 0x38;
                    u145 = (*(float *)((t143 + t140)));
                    t140 = 0x2C;
                    u182 = *(float *)((t143 + t140));
                    t140 = 0x34;
                    u184 = (u182 - u145);
                    u145 = (*(float *)((t143 + t140)));
                    t140 = 0x28;
                    u185 = *(float *)((t143 + t140));
                    t140 = 0x30;
                    u187 = (u185 - u145);
                    u145 = (*(float *)((t143 + t140)));
                    t140 = 0x24;
                    t140 = (FUN_0c0dcc70(((*(float *)((t143 + t140))) - u145), u187, u184));
                    t140 = 0x3CE;
                    t140 = (nlRotateAY((*(short *)(((*(int *)(((int)stk + 20))) + t140)))));
                    t140 = 0x3CC;
                    t140 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 20))) + t140)))));
                    t142 = 0xC0DC950;
                    t140 = (nlRotateAZ((*(int *)((t143 + 0xC)))));
                    t140 = 0x1C;
                    u198 = *(float *)((t143 + t140));
                    t140 = 0x1C;
                    *(float *)((((int)stk + 8) + t140)) = u198;
                    t140 = (nlScale(u198, u198, u198));
                    t140 = 0x1C;
                    t140 = (FUN_0c0de000((*(float *)((t143 + t140)))));
                    t142 = 0xC0C465C;
                    t140 = (FUN_0c0c465c((*(int *)((t143 + 0x8)))));
                    t140 = (nlPopMatrix(0x1));
                    t141 = 0xBD4CCCCC;
                    t140 = 0x34;
                    u144 = (*(float *)((t143 + t140)));
                    u145 = (*(float *)&(t141));
                    u144 = (u144 + u145);
                    *(float *)((t143 + t140)) = u144;
                    t239 = t141;
                    u242 = u144;
                    u243 = u145;
                } else {
                    if (t140 == 3) {
                        t140 = (nlPushMatrix(0x0));
                        t140 = 0x2C;
                        u208 = *(float *)((t143 + t140));
                        t140 = 0x28;
                        u209 = *(float *)((t143 + t140));
                        t140 = 0x24;
                        t140 = (FUN_0c0dcc70((*(float *)((t143 + t140))), u209, u208));
                        t142 = 0xC0DC6E0;
                        t140 = (nlRotateAX(0x3FFF));
                        t140 = (nlRotateAZ((*(int *)((t143 + 0xC)))));
                        t215 = *(int *)((t143 + 0x0));
                        if ((int)t215 < (int)0x28) {
                            t140 = 0xC09A140;
                            u144 = (*(float *)((t140 + 0x0)));
                            u145 = (float)t215;
                            u145 = (u145 * u144);
                            u217 = u144;
                        } else {
                            u145 = 1.0f;
                        }
                        u144 = u217;
                        t140 = 0x24;
                        *(float *)((((int)stk + 8) + t140)) = u145;
                        t140 = 0x20;
                        t140 = (FUN_0c084800(t215, 1.0f, (*(float *)((t143 + t140))), 1.0f));
                        t140 = 0xC09A288;
                        u145 = 1.0f;
                        u221 = *(float *)((t140 + 0x0));
                        t140 = 0x24;
                        u222 = *(float *)((((int)stk + 8) + t140));
                        t140 = 0x58;
                        u145 = (u145 - u222);
                        u223 = *(float *)((a4 + t140));
                        t140 = 0x1C;
                        u144 = (*(float *)((t143 + t140)));
                        t140 = 0x8;
                        u145 = (u145 * u223);
                        u225 = u144;
                        u225 = u225 + u221 * u145;
                        u144 = u225;
                        *(float *)((((int)stk + 8) + t140)) = u144;
                        t140 = (nlScale(u144, u144, u144));
                        t140 = 0x8;
                        t140 = (FUN_0c0de000((*(float *)((((int)stk + 8) + t140)))));
                        t140 = 0x24;
                        t140 = (FUN_0c0c475c((*(int *)((t143 + 0x8))), (*(float *)((((int)stk + 8) + t140)))));
                        t142 = 0xC0DC4C0;
                        t140 = (nlPopMatrix(0x1));
                    } else {
                        t233 = t141;
                        u236 = u144;
                        u237 = u145;
                    }
                    t239 = t233;
                    u242 = u236;
                    u243 = u237;
                }
                t283 = t239;
                u286 = u242;
                u287 = u243;
            } else {
                t141 = 0x30;
                t141 = (t141 + t143);
                t140 = 0x24;
                u145 = (*(float *)((t141 + 0x0)));
                u144 = (*(float *)((t143 + t140)));
                t141 = 0x34;
                t141 = (t141 + t143);
                u144 = (u144 + u145);
                *(float *)((t143 + t140)) = u144;
                t140 = 0x28;
                u144 = (*(float *)((t143 + t140)));
                u145 = (*(float *)((t141 + 0x0)));
                t141 = 0x38;
                t141 = (t141 + t143);
                u144 = (u144 + u145);
                *(float *)((t143 + t140)) = u144;
                t140 = 0x2C;
                u144 = (*(float *)((t143 + t140)));
                u145 = (*(float *)((t141 + 0x0)));
                t141 = 0x58;
                t141 = (t141 + a4);
                u144 = (u144 + u145);
                *(float *)((t143 + t140)) = u144;
                t140 = 0xC099F1C;
                u251 = *(float *)((t140 + 0x0));
                t140 = 0x1C;
                u144 = (*(float *)((t143 + t140)));
                u145 = (*(float *)((t141 + 0x0)));
                u254 = u144;
                u254 = u254 + u251 * u145;
                u144 = u254;
                *(float *)((t143 + t140)) = u144;
                t140 = 0xC099F20;
                u255 = *(float *)((t140 + 0x0));
                t140 = 0x34;
                u145 = (*(float *)((t143 + t140)));
                u145 = (u145 + u255);
                *(float *)((t143 + t140)) = u145;
                t257 = *(int *)((t143 + 0x0));
                if ((int)t257 < (int)0x14) {
                    t140 = 0xC099F24;
                    u145 = (float)t257;
                    u144 = u145;
                    u144 = (u144 * (*(float *)((t140 + 0x0))));
                } else {
                    u144 = 1.0f;
                }
                t140 = 0x10;
                *(float *)((((int)stk + 8) + t140)) = u144;
                t140 = 0x20;
                u145 = (*(float *)((t143 + t140)));
                t140 = (FUN_0c084800(t257, u144, u144, (u144 * u145)));
                t140 = (nlPushMatrix(0x0));
                t140 = 0x2C;
                u264 = *(float *)((t143 + t140));
                t140 = 0x28;
                u265 = *(float *)((t143 + t140));
                t140 = 0x24;
                t140 = (FUN_0c0dcc70((*(float *)((t143 + t140))), u265, u264));
                t140 = 0x3CE;
                t140 = (nlRotateAY((*(short *)(((*(int *)(((int)stk + 20))) + t140)))));
                t140 = 0x3CC;
                t140 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 20))) + t140)))));
                t142 = 0xC0DC950;
                t140 = (nlRotateAZ((*(int *)((t143 + 0xC)))));
                t140 = 0x1C;
                u276 = *(float *)((t143 + t140));
                t140 = 0x18;
                *(float *)((((int)stk + 8) + t140)) = u276;
                t140 = (nlScale(u276, u276, u276));
                t140 = 0x1C;
                t140 = (FUN_0c0de000((*(float *)((t143 + t140)))));
                t142 = 0xC0C465C;
                t140 = (FUN_0c0c465c((*(int *)((t143 + 0x8)))));
                t142 = 0xC0DC4C0;
                t140 = (nlPopMatrix(0x1));
            }
            t289 = t283;
            u292 = u286;
            u293 = u287;
        }
        u144 = u292;
        u145 = u293;
        t141 = t289;
        t142 = (*(int *)(((int)stk + 8)));
        t142 = (t142 + 0x1);
        *(unsigned int *)(((int)stk + 8)) = t142;
        t143 = (t143 + 0x3C);
        if ((int)t142 < (int)0xB4) continue;
        break;
    }
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
    if ((*(int *)((a4 + 0x60))) == 0) {
    } else {
        if ((*(int *)((a4 + 0x38))) != 0) {
        } else {
            *(float *)(((a4 + 0x60) + 0x24)) = ((*(float *)(((a4 + 0x60) + 0x24))) + (*(float *)(((0x30 + (a4 + 0x60)) + 0x0))));
            *(float *)(((a4 + 0x60) + 0x28)) = ((*(float *)(((a4 + 0x60) + 0x28))) + (*(float *)(((0x34 + (a4 + 0x60)) + 0x0))));
            *(float *)(((a4 + 0x60) + 0x2C)) = ((*(float *)(((a4 + 0x60) + 0x2C))) + (*(float *)(((0x38 + (a4 + 0x60)) + 0x0))));
            *(float *)(((a4 + 0x60) + 0x34)) = ((*(float *)(((a4 + 0x60) + 0x34))) + -0.049999997f);
            if ((*(float *)((a4 + 0x50))) > (*(float *)(((a4 + 0x60) + 0x28)))) {
                *(float *)(((a4 + 0x60) + 0x28)) = ((*(float *)((a4 + 0x50))) + 0.000999999931f);
                *(float *)(((a4 + 0x60) + 0x34)) = ((-(*(float *)(((a4 + 0x60) + 0x34)))) / (1.0f + 1.0f));
                *(float *)(((a4 + 0x60) + 0x30)) = ((*(float *)(((a4 + 0x60) + 0x30))) / (1.0f + 1.0f));
                *(float *)(((a4 + 0x60) + 0x38)) = ((*(float *)(((a4 + 0x60) + 0x38))) / (1.0f + 1.0f));
                if (0.049999997f > (*(float *)(((a4 + 0x60) + 0x34)))) {
                    *(float *)(((a4 + 0x60) + 0x30)) = 0.0f;
                    *(float *)(((a4 + 0x60) + 0x34)) = 0.0f;
                    *(float *)(((a4 + 0x60) + 0x38)) = 0.0f;
                }
            }
            u323 = *(float *)(((a4 + 0x60) + 0x30));
            u324 = (-u323);
            if (u323 > 0.0f) {
                u324 = u323;
            }
            if (!(u324 > 0.00999999978f)) {
                u327 = *(float *)(((a4 + 0x60) + 0x38));
                u329 = (-u327);
                if (u327 > 0.0f) {
                    u329 = (*(float *)(((a4 + 0x60) + 0x38)));
                }
                if (u329 > 0.00999999978f) {
                    *(unsigned int *)(((a4 + 0x60) + 0xC)) = ((*(int *)(((a4 + 0x60) + 0xC))) + 0x578);
                }
            } else {
                *(unsigned int *)(((a4 + 0x60) + 0xC)) = ((*(int *)(((a4 + 0x60) + 0xC))) + 0x578);
            }
            nlPushMatrix(0x0);
            FUN_0c0dcc70((*(float *)(((a4 + 0x60) + 0x24))), (*(float *)(((a4 + 0x60) + 0x28))), (*(float *)(((a4 + 0x60) + 0x2C))));
            u347 = *(float *)(((a4 + 0x60) + 0x1C));
            *(float *)(((int)stk + 40)) = u347;
            nlScale(u347, u347, u347);
            t350 = FUN_0c0da410((*(int *)(((a4 + 0x60) + 0xC))));
            *(float *)(((int)stk + 4)) = (t350 * 2.5f);
            t352 = FUN_0c0d9e90((*(int *)(((a4 + 0x60) + 0xC))));
            FUN_0c0dcc70(0.0f, (t352 * 2.5f), (t350 * 2.5f));
            nlRotateAX((*(int *)(((a4 + 0x60) + 0xC))));
            FUN_0c0dcc70(0.0f, -2.5f, 0.0f);
            FUN_0c0de000((*(float *)(((a4 + 0x60) + 0x1C))));
            FUN_0c0c465c((*(int *)(((a4 + 0x60) + 0x8))));
            nlPopMatrix(0x1);
            *(unsigned int *)(((int)stk + 8)) = (((*(int *)((a4 + 0x48))) * 0x3C) + (0x9C + a4));
            t363 = *(int *)((a4 + 0x48));
            *(unsigned int *)((a4 + 0x48)) = (t363 + 0x1);
            if ((int)(t363 + 0x1) >= (int)0xB4) {
                *(unsigned int *)((a4 + 0x48)) = 0x0;
            }
            *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = 0x5A;
            *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x4)) = 0x1;
            *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x8)) = 0xFB;
            *(float *)(((*(int *)(((int)stk + 8))) + 0x18)) = 1.0f;
            t369 = *(int *)(((int)stk + 8));
            *(int *)((int)stk + 4) = (0xC + t369);
            *(unsigned int *)(((0xC + t369) + 0x0)) = (FUN_0c0da2e0());
            t371 = *(int *)(((int)stk + 8));
            *(int *)((int)stk + 4) = (0x1C + t371);
            u373 = 1.0f;
            u373 = u373 + 3.05175781e-05f * (float)((FUN_0c0da2e0()) & 0x7FFF);
            u375 = (u373 * (*(float *)((a4 + 0x58))));
            *(float *)(((0x1C + t371) + 0x0)) = (u375 * 0.5f);
            t376 = *(int *)(((int)stk + 8));
            *(int *)((int)stk + 4) = (0x20 + t376);
            u378 = 0.5f;
            u378 = u378 + 1.52587891e-05f * (float)((FUN_0c0da2e0()) & 0x7FFF);
            *(float *)(((0x20 + t376) + 0x0)) = u378;
            t379 = *(int *)(((int)stk + 8));
            *(int *)((int)stk + 4) = (0x30 + t379);
            u382 = (*(float *)(((a4 + 0x60) + 0x30)));
            u382 = u382 + 0.00392156839f * (float)(unsigned char)(FUN_0c0da2e0());
            *(float *)(((0x30 + t379) + 0x0)) = (u382 + -0.5f);
            t383 = *(int *)(((int)stk + 8));
            *(int *)((int)stk + 4) = (0x38 + t383);
            u386 = (*(float *)(((a4 + 0x60) + 0x38)));
            u386 = u386 + 0.00392156839f * (float)(unsigned char)(FUN_0c0da2e0());
            *(float *)(((0x38 + t383) + 0x0)) = (u386 + -0.5f);
            t387 = *(int *)(((int)stk + 8));
            *(int *)((int)stk + 4) = (0x34 + t387);
            u390 = (*(float *)(((a4 + 0x60) + 0x34)));
            u390 = u390 + 0.000784313597f * (float)(unsigned char)(FUN_0c0da2e0());
            *(float *)(((0x34 + t387) + 0x0)) = (u390 + -0.099999994f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 8))) + 0x24)) = *(struct mv3 *)(((a4 + 0x60) + 0x24)); }
        }
    }
    t406 = *(int *)((a4 + 0x40));
    *(unsigned int *)((a4 + 0x40)) = (t406 - 1);
    if ((int)(t406 - 1) < 0) {
        *(unsigned int *)((a4 + 0x40)) = (*(int *)((a4 + 0x44)));
        t408 = *(int *)((a4 + 0x3C));
        *(unsigned int *)((a4 + 0x3C)) = (t408 + 0x1);
        if ((int)(t408 + 0x1) > (int)0xC8) {
            return FUN_0c0e19f2();
        }
        return 0x40;
    }
    return 0x40;
}

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
