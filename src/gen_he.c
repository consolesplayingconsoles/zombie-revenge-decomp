/* Straight-line functions with calls and guards (batch gen_he): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c01f8a0(int, int, int);
int FUN_0c05a98a(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c090bf0(int);
int FUN_0c09bfee(int);
int FUN_0c09dd7a(void);
int FUN_0c0a6bf8(int, int, int, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c4654(void);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0cacde(int, float, float);
int FUN_0c0cae8e(int);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db800(int, int, int, int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcbb0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dccf0(void);
int FUN_0c0dce80(int, int, float);
int FUN_0c0dd050(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int FUN_0c0e5fe4(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlGetMatrix(int);
float nlLength(int, int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c09e290(int a4, int a5, int a6, int a7);
int FUN_0c09c974(int a4, int a5, int a6, int a7);
int FUN_0c064876(int a4, int a5, int a6, int a7);
int FUN_0c08085c(int a4);

int FUN_0c09e290(int a4, int a5, int a6, int a7)
{
    int stk[24];
    register int t1;
    register int t2;
    register int t4;
    register int t46;
    register int t198;
    register float u125;
    register int t127;
    register int t128;
    register int t129;
    register int t134;
    register int t137;
    register int t140;
    register float u151;
    register float u146;
    register float u161;
    register float t164;
    register float u165;
    register float u167;
    register float u175;
    register float u176;
    register float u181;
    register float u183;
    register float u186;
    register float u190;
    register int t290;
    register float u294;
    register int t206;
    register int t207;
    register int t208;
    register int t209;
    register float u257;
    register float u265;
    register float u267;
    register float u269;
    register float u270;
    register float u278;
    register int t298;
    register int t299;
    register float u305;
    register int t307;
    register int t308;
    register int t315;
    register int t317;
    register int t319;
    register int t334;
    register float u339;
    register int t411;
    register int t414;
    register int t415;
    register int t416;
    register float u417;
    register float u418;
    register int t353;
    register int t355;
    register int t356;
    register int t359;
    register int t366;
    register int t369;
    register int t371;
    register int t375;
    register int t377;
    register int t378;
    register float u379;
    register float u380;
    register float u381;
    register float u382;
    register float u395;
    register int t420;
    register int t421;
    register int t422;
    register int t423;
    register int t424;
    register int t425;
    register float u426;
    register float u427;
    register float u428;
    register float u444;
    register float u445;
    register int t462;
    register int t464;
    register int t465;
    register float u466;
    register int t471;
    register float u474;
    register int t482;
    register int t485;
    register int t115;
    register int t118;
    register int t119;
    register int t120;
    register int t89;
    register int t92;
    register int t93;
    register int t94;
    register int t67;
    register int t70;
    register int t71;
    register int t72;
    register int t59;
    register int t62;
    register int t63;
    register int t64;
    register int t36;
    register int t37;
    register int t38;
    register int t30;
    register int t31;
    register int t32;
    register int t51;
    register int t54;
    register int t55;
    register int t56;
    register int t81;
    register int t78;
    register int t110;
    register int t111;
    register int t112;
    register int t103;
    register int t104;
    register int t105;
    register int t197;
    register int t201;
    register int t202;
    register int t203;
    register float u204;
    register float u130;
    register float u295;
    register float u296;
    register int t343;
    register int t346;
    register int t347;
    register int t348;
    register float u350;
    register float u351;
    register int t300;
    register int t301;
    register float u303;
    register float u304;
    register int t402;
    register int t405;
    register int t406;
    register int t407;
    register float u408;
    register float u409;
    int t357;
    register int t451;
    register int t454;
    register int t455;
    register int t456;
    register float u457;
    register float u458;
    register int t463;

    t1 = *(int *)((a4 + 0x30));
    t2 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 28)) = 0x0;
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    *(unsigned int *)(((int)stk + 36)) = 0x0;
    *(unsigned int *)(((int)stk + 40)) = 0x0;
    FUN_0c0685a4(a4, a5, a6, a7);
    t4 = *(int *)((a4 + 0x44));
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 != 2) {
                if (t4 != 3) {
                    if (t4 != 4) {
                        t36 = 0x5AF;
                        t37 = 0x5B0;
                        t38 = 0x5B1;
                    } else {
                        if ((*(int *)((t1 + 0x2BC))) != 0x5B1) {
                            FUN_0c0cc3f8(0x524A9, 0x5B0, 0x5B1, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                            *(unsigned int *)((a4 + 0x44)) = 0x5;
                            FUN_0c09bfee(t1);
                        } else {
                            t30 = 0x5AF;
                            t31 = 0x5B0;
                            t32 = 0x5B1;
                        }
                        *(unsigned int *)(((int)stk + 28)) = 0x1;
                        *(unsigned int *)(((int)stk + 36)) = 0x1;
                        *(unsigned int *)(((int)stk + 40)) = 0x1;
                        t36 = t30;
                        t37 = t31;
                        t38 = t32;
                    }
                    t62 = t36;
                    t63 = t37;
                    t64 = t38;
                } else {
                    if ((*(int *)((t1 + 0x2BC))) == 0x5B1) {
                        FUN_0c0cc3f8(0x334A9, 0x5B0, 0x5B1, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                        FUN_0c0cc3f8(0x32BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                        FUN_0c0cc3f8(0x42BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                        FUN_0c0cc3f8(0x424A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                        *(unsigned int *)((a4 + 0x44)) = 0x4;
                    } else {
                        t46 = *(int *)((t1 + 0x2BC));
                        if (t46 != 0x5B0) {
                            *(unsigned int *)((a4 + 0x44)) = 0x2;
                        }
                        t51 = t46;
                        t54 = 0x5AF;
                        t55 = 0x5B0;
                        t56 = 0x5B1;
                    }
                    *(unsigned int *)(((int)stk + 28)) = 0x1;
                    *(unsigned int *)(((int)stk + 8)) = 0x1;
                    t59 = t51;
                    t62 = t54;
                    t63 = t55;
                    t64 = t56;
                }
                t67 = t59;
                t70 = t62;
                t71 = t63;
                t72 = t64;
            } else {
                *(unsigned int *)(((int)stk + 8)) = 0x1;
                t70 = 0x5AF;
                t71 = 0x5B0;
                t72 = 0x5B1;
            }
            t89 = t67;
            t92 = t70;
            t93 = t71;
            t94 = t72;
        } else {
            if ((*(int *)((t1 + 0x2BC))) == 0x5B0) {
                *(unsigned int *)((a4 + 0x44)) = 0x3;
                t81 = 0x3;
            } else {
                if ((*(int *)((t1 + 0x2BC))) != 0x5AF) {
                    *(unsigned int *)((a4 + 0x44)) = 0x2;
                    t78 = 0x2;
                }
                t81 = t78;
            }
            *(unsigned int *)(((int)stk + 28)) = 0x1;
            *(unsigned int *)(((int)stk + 8)) = 0x1;
            if ((int)(*(int *)((a4 + 0x4C))) < (int)0x1A4) {
                *(unsigned int *)((a4 + 0x4C)) = ((*(int *)((a4 + 0x4C))) + 0x1);
            }
            t89 = t81;
            t92 = 0x5AF;
            t93 = 0x5B0;
            t94 = 0x5B1;
        }
        t115 = t89;
        t118 = t92;
        t119 = t93;
        t120 = t94;
    } else {
        if ((*(int *)((t1 + 0x2BC))) == 0x5AF) {
            *(unsigned int *)((a4 + 0x44)) = 0x1;
            t110 = 0x5AF;
            t111 = 0x5B0;
            t112 = 0x5B1;
        } else {
            if ((*(int *)((t1 + 0x2BC))) != 0x5AE) {
                FUN_0c09dd7a();
            } else {
                t103 = 0x5AF;
                t104 = 0x5B0;
                t105 = 0x5B1;
            }
            t110 = t103;
            t111 = t104;
            t112 = t105;
        }
        t118 = t110;
        t119 = t111;
        t120 = t112;
    }
    t198 = 0xC0CC3F8;
    if ((*(int *)(((int)stk + 8))) == 0) {
        t197 = t115;
        t201 = t118;
        t202 = t119;
        t203 = t120;
    } else {
        nlPushMatrix(0x0);
        *(float *)(((int)stk + 32)) = ((float)(*(int *)((a4 + 0x4C))) * 0.00238095224f);
        *(unsigned int *)(((int)stk + 8)) = 0x47AE927;
        *(unsigned int *)(((int)stk + 16)) = 0xD;
        u125 = *(float *)((a4 + 0x48));
        *(float *)((a4 + 0x48)) = (u125 + 0.00399999972f);
        if ((u125 + 0.00399999972f) > 1.0f) {
            *(float *)((a4 + 0x48)) = 1.0f;
        }
        *(unsigned int *)(((int)stk + 12)) = 0x0;
        t127 = 0x48;
        t128 = 0xD;
        t129 = 0xC0CC3F8;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 12))) < (int)0xDC8C0) {
                t127 = (*(int *)(((int)stk + 8)));
                t129 = (*(int *)(((int)stk + 8)));
                t127 = (t127 & 0x1);
                t134 = *(int *)(((int)stk + 16));
                t129 = (t129 >> 1);
                t128 = 0x22AC8EE1;
                t137 = t127;
                t127 = ((int)(((unsigned int)t137 >> 1) | ((unsigned int)t137 << 31)));
                t129 = (t129 | t127);
                t129 = (t129 ^ t134);
                t127 = t129;
                t127 = (t127 & 0x1);
                t140 = t127;
                t127 = ((int)(((unsigned int)t140 >> 1) | ((unsigned int)t140 << 31)));
                *(unsigned int *)(((int)stk + 8)) = (((t129 >> 1) | t127) ^ ((t129 | t134) * t128));
                *(unsigned int *)(((int)stk + 16)) = (((((t129 >> 1) | t127) ^ ((t129 | t134) * t128)) | ((t129 | t134) * t128)) * t128);
                t127 = (*(int *)(((int)stk + 8)));
                t128 = (*(int *)0xC23A258);
                u151 = (float)(((t128 * 0xFFFFFFC3) + t127) & 0xFFF);
                if ((int)(((t128 * 0xFFFFFFC3) + t127) & 0xFFF) < 0) {
                    u146 = (float)(((t128 * 0xFFFFFFC3) + t127) & 0xFFF);
                    t127 = 0xC09E548;
                    u151 = (u146 + (*(float *)((t127 + 0x0))));
                }
                u130 = u151;
                u130 = (u130 * 0.00024420023f);
                t127 = (nlUnitMatrix());
                t127 = (FUN_0c0dcca0((t1 + 0x30)));
                t127 = 0x6E;
                t127 = (nlRotateAY((*(short *)((t1 + t127)))));
                t127 = (FUN_0c0dcca0(0xC10C5E8));
                t127 = 0x10;
                *(float *)((((int)stk + 8) + t127)) = (1.0f - u130);
                t127 = 0xC09E554;
                u161 = (float)t129;
                u161 = u161 + (*(float *)((t127 + 0x0))) * ((1.0f - u130) * (1.0f - u130));
                t127 = (nlRotateAZ((int)u161));
                t127 = 0xC09E55C;
                t164 = FUN_0c0da410((int)(u130 * (*(float *)((t127 + 0x0)))));
                t127 = 0x18;
                u165 = *(float *)((((int)stk + 8) + t127));
                t127 = 0xC09E564;
                u167 = (t164 * u165);
                t127 = (FUN_0c0dcc70((u167 * (*(float *)((t127 + 0x0)))), 0.0f, 0.0f));
                t128 = 0xC0DCCF0;
                t127 = (FUN_0c0dccf0());
                t127 = 0x3CE;
                t127 = (nlRotateAY((*(short *)((t2 + t127)))));
                t127 = 0x3CC;
                t127 = (nlRotateAX((*(short *)((t2 + t127)))));
                t127 = 0xC09E574;
                u175 = *(float *)((t127 + 0x0));
                t127 = 0xC;
                u130 = (u130 * (1.0f + 1.0f));
                *(float *)((((int)stk + 8) + t127)) = (u175 - u130);
                t127 = 0x48;
                u176 = *(float *)((a4 + t127));
                t127 = 0x10;
                u130 = (*(float *)((((int)stk + 8) + t127)));
                u130 = (u130 * u176);
                if (u130 > 1.0f) {
                    u130 = 1.0f;
                }
                t128 = 0xC23A258;
                u181 = 1.0f;
                if (((*(int *)((t128 + 0x0))) & 0x1) != 0) {
                    t127 = 0xC09E578;
                    u181 = (*(float *)((t127 + 0x0)));
                }
                u183 = u130;
                u130 = u181;
                u130 = (u130 * u183);
                t127 = (nlRotateAZ((*(int *)(((int)stk + 12)))));
                t127 = 0xC;
                u186 = *(float *)((((int)stk + 8) + t127));
                t127 = (nlScale(u186, u186, 1.0f));
                t127 = 0xC;
                t127 = (FUN_0c0de000((*(float *)((((int)stk + 8) + t127)))));
                t127 = 0xC09E608;
                u190 = *(float *)((t127 + 0x0));
                t127 = 0xC09E60C;
                t127 = (FUN_0c0848bc((u130 * (1.0f + 1.0f)), (u130 * (*(float *)((t127 + 0x0)))), (u130 * u190)));
                t128 = 0xC0C47AE;
                t127 = (FUN_0c0c47ae(0x291));
                t128 = (*(int *)(((int)stk + 12)));
                t128 = (t128 + 0x3723);
                *(unsigned int *)(((int)stk + 12)) = t128;
                continue;
            }
            break;
        }
        nlPopMatrix(0x1);
        t198 = t129;
        u204 = u130;
    }
    t290 = t197;
    u294 = u204;
    if ((*(int *)(((int)stk + 28))) != 0) {
        t206 = *(int *)((a4 + 0x4C));
        t207 = 0xC09E620;
        t208 = 0x0;
        t209 = t198;
        for (;;) {
            *(unsigned int *)(((int)stk + 12)) = t208;
            if ((int)t208 < (int)0x2) {
                t208 = 0xC0DC510;
                t207 = (nlPushMatrix(0x0));
                t207 = (nlUnitMatrix());
                t207 = (FUN_0c0dcca0((t1 + 0x30)));
                t207 = 0x6E;
                t207 = (nlRotateAY((*(short *)((t1 + t207)))));
                t207 = (FUN_0c0dcca0(0xC10C5C4));
                t208 = 0xC0DCCF0;
                t207 = (FUN_0c0dccf0());
                t207 = 0x3CE;
                t207 = (nlRotateAY((*(short *)((t2 + t207)))));
                t208 = 0xC0DC6E0;
                t207 = 0x3CC;
                t207 = (nlRotateAX((*(short *)((t2 + t207)))));
                t209 = (*(int *)(((int)stk + 12)));
                t207 = 0xC2010C0;
                t209 = (t209 << 2);
                t208 = (*(int *)((t209 + t207)));
                *(unsigned int *)(((int)stk + 8)) = t208;
                t207 = (FUN_0c0c4654());
                t208 = 0xC0CBAFC;
                t207 = (FUN_0c0cbafc((*(int *)(((int)stk + 8))), 0x2, 0xFC007000, 0xC002000));
                t207 = (FUN_0c0cbafc((*(int *)(((int)stk + 8))), 0xA, 0xFFFFFFFF, 0xFFFFFFFF));
                t208 = a4;
                t207 = 0xC201098;
                t208 = (t208 + 0x50);
                t208 = (t208 + t209);
                *(float *)((t208 + 0x0)) = ((*(float *)((t208 + 0x0))) + (*(float *)((t209 + t207))));
                t208 = a4;
                t208 = (t208 + 0x50);
                t208 = (t208 + t209);
                if (!(1.0f > (*(float *)((t208 + 0x0))))) {
                    *(float *)((((a4 + 0x50) + t209) + 0x0)) = ((*(float *)((((a4 + 0x50) + t209) + 0x0))) - 1.0f);
                }
                t208 = a4;
                t208 = (t208 + 0x50);
                t208 = (t208 + t209);
                if (!((*(float *)((t208 + 0x0))) > 0.0f)) {
                    *(float *)((((a4 + 0x50) + t209) + 0x0)) = ((*(float *)((((a4 + 0x50) + t209) + 0x0))) + 1.0f);
                }
                t208 = a4;
                t207 = 0xC2010A0;
                t208 = (t208 + 0x58);
                t208 = (t208 + t209);
                *(float *)((t208 + 0x0)) = ((*(float *)((t208 + 0x0))) + (*(float *)((t209 + t207))));
                t208 = a4;
                t208 = (t208 + 0x58);
                t208 = (t208 + t209);
                if (!(1.0f > (*(float *)((t208 + 0x0))))) {
                    *(float *)((((a4 + 0x58) + t209) + 0x0)) = ((*(float *)((((a4 + 0x58) + t209) + 0x0))) - 1.0f);
                }
                t208 = a4;
                t208 = (t208 + 0x58);
                t208 = (t208 + t209);
                if (!((*(float *)((t208 + 0x0))) > 0.0f)) {
                    *(float *)((((a4 + 0x58) + t209) + 0x0)) = ((*(float *)((((a4 + 0x58) + t209) + 0x0))) + 1.0f);
                }
                t208 = 0xC2010B0;
                t208 = (t208 + t209);
                *(unsigned int *)(((int)stk + 28)) = t208;
                *(volatile float *)((t208 + 0x0));
                *(unsigned int *)(((int)stk + 16)) = (0xC2010A8 + t209);
                *(volatile float *)(((0xC2010A8 + t209) + 0x0));
                t207 = (FUN_0c0cae8e((*(int *)(((int)stk + 8)))));
                t208 = a4;
                t208 = (t208 + 0x58);
                t208 = (t208 + t209);
                u257 = *(float *)((t208 + 0x0));
                t208 = 0xC0CACDE;
                t207 = (FUN_0c0cacde((*(int *)(((int)stk + 8))), (*(float *)((((a4 + 0x50) + t209) + 0x0))), u257));
                t207 = 0xC09E7A8;
                t208 = 0xC0DCC70;
                t207 = (FUN_0c0dcc70(0.0f, 0.0f, ((float)(*(int *)(((int)stk + 12))) * (*(float *)((t207 + 0x0))))));
                t208 = 0xC2010B8;
                u265 = ((float)t206 * 0.00238095224f);
                u267 = ((float)t206 * 0.00238095224f);
                t207 = (nlScale(((*(float *)((t208 + 0x0))) * u267), ((*(float *)0xC2010BC) * u265), 1.0f));
                t207 = 0xC2010E0;
                u269 = *(float *)((t209 + t207));
                t207 = 0xC2010D4;
                u270 = *(float *)((t209 + t207));
                t208 = 0xC0848BC;
                t207 = 0xC2010C8;
                t207 = (FUN_0c0848bc((*(float *)((t209 + t207))), u270, u269));
                t208 = 0xC0DE000;
                t207 = 0xC09E844;
                t207 = (FUN_0c0de000((*(float *)((t207 + 0x0)))));
                t208 = 0xC0C47AE;
                t207 = (FUN_0c0c47ae((*(int *)(((int)stk + 8)))));
                t208 = a4;
                t208 = (t208 + 0x50);
                t208 = (t208 + t209);
                u278 = *(float *)((t208 + 0x0));
                t208 = 0xC0CACDE;
                t207 = (FUN_0c0cacde((*(int *)(((int)stk + 8))), (-u278), (-(*(float *)((((a4 + 0x58) + t209) + 0x0))))));
                t208 = (*(int *)(((int)stk + 16)));
                *(volatile float *)(((*(int *)(((int)stk + 28))) + 0x0));
                *(volatile float *)((t208 + 0x0));
                t208 = 0xC0CAE8E;
                t207 = (FUN_0c0cae8e((*(int *)(((int)stk + 8)))));
                t207 = (nlPopMatrix(0x1));
                t208 = (*(int *)(((int)stk + 12)));
                t208 = (t208 + 0x1);
                continue;
            }
            break;
        }
        t290 = t208;
        u294 = ((float)t206 * 0.00238095224f);
        u295 = 0.00238095224f;
        u296 = (float)t206;
    }
    if ((*(int *)(((int)stk + 40))) == 0) {
        t343 = t290;
        t346 = t201;
        t347 = t202;
        t348 = t203;
        u350 = u295;
        u351 = u296;
    } else {
        t298 = nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 16)) = 0x7;
        t299 = t298;
        u305 = u294;
        for (;;) {
            if ((*(int *)(((int)stk + 16))) == 0) {
                break;
            }
            t299 = 0x1664;
            t301 = 0x2C;
            t300 = 0x1668;
            t307 = *(int *)((a4 + t299));
            t300 = (t300 + a4);
            *(unsigned int *)((a4 + t299)) = (t307 + 0x1);
            t299 = 0x1664;
            t308 = ((t307 * t301) + t300);
            t300 = 0x200;
            *(unsigned int *)(((int)stk + 12)) = t308;
            if ((unsigned int)(*(int *)((a4 + t299))) >= (unsigned int)t300) {
                t301 = 0x0;
                *(unsigned int *)((a4 + t299)) = t301;
            }
            t299 = (FUN_0c0da2e0());
            t299 = (t299 & 0xFFF);
            u304 = (float)t299;
            u305 = u304;
            u305 = (u305 * 0.00024420023f);
            t299 = (FUN_0c0da2e0());
            t299 = (t299 & 0xF);
            t301 = t299;
            t299 = (t299 << 1);
            t299 = (t299 + t301);
            t299 = (t299 << 2);
            t299 = (t299 << 1);
            t299 = (t299 + 0xC10C5F4);
            *(unsigned int *)(((int)stk + 8)) = t299;
            t315 = *(int *)((t299 + 0x0));
            t299 = 0x3E4;
            t301 = (*(int *)((t1 + t299)));
            t317 = ((((t315 << 2) << 2) << 2) + t301);
            t301 = 0xC0DBDA0;
            t299 = (FUN_0c0dbda0(t317));
            t319 = *(int *)(((int)stk + 8));
            t299 = 0x4;
            u303 = u305;
            u304 = (*(float *)((t319 + t299)));
            t299 = 0x8;
            t301 = t319;
            u303 = (u303 * u304);
            u304 = (*(float *)((t301 + t299)));
            t301 = 0xC0DCC70;
            t299 = (FUN_0c0dcc70(0.0f, (u303 * u304), 0.0f));
            t299 = (FUN_0c0dccf0());
            t299 = 0x3CE;
            t299 = (nlRotateAY((*(short *)((t2 + t299)))));
            t301 = 0xC0DC6E0;
            t299 = 0x3CC;
            t299 = (nlRotateAX((*(short *)((t2 + t299)))));
            t299 = (FUN_0c0dcca0(0xC10C5DC));
            t301 = 0xC0DB840;
            t299 = (FUN_0c0db840(((*(int *)(((int)stk + 12))) + 0x8)));
            t301 = 0xC;
            t299 = 0xC09E9A8;
            *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x0)) = t301;
            u304 = (*(float *)((t299 + 0x0)));
            t299 = 0x28;
            *(float *)(((*(int *)(((int)stk + 12))) + t299)) = u304;
            t299 = 0xC;
            t334 = *(int *)(((int)stk + 8));
            t301 = (*(int *)(((int)stk + 12)));
            t300 = t334;
            u304 = (*(float *)((t300 + t299)));
            t299 = 0x10;
            u303 = (*(float *)((t334 + t299)));
            t299 = 0x24;
            u339 = u304;
            u339 = u339 + (u305) * u303;
            u304 = u339;
            *(float *)((t301 + t299)) = u304;
            t301 = (*(int *)(((int)stk + 16)));
            t301 = (t301 - 1);
            *(unsigned int *)(((int)stk + 16)) = t301;
        }
        nlPopMatrix(0x1);
    }
    t411 = t343;
    t414 = t346;
    t415 = t347;
    t416 = t348;
    u417 = u350;
    u418 = u351;
    if ((*(int *)(((int)stk + 36))) == 0) {
    } else {
        t353 = *(int *)((a4 + 0x3C));
        *(unsigned int *)((a4 + 0x3C)) = (t353 - 1);
        if ((int)(t353 - 1) > 0) {
            t402 = t343;
            t405 = t346;
            t406 = t347;
            t407 = t348;
            u408 = u350;
            u409 = u351;
        } else {
            *(unsigned int *)((a4 + 0x3C)) = (int)((-((float)((FUN_0c0da2e0()) & 0xFFF) * 0.00024420023f)) + (-1.0f));
            t355 = nlPushMatrix(0x0);
            *(unsigned int *)(((int)stk + 12)) = 0x3;
            t356 = t355;
            for (;;) {
                if ((*(int *)(((int)stk + 12))) == 0) {
                    break;
                }
                t356 = 0x60;
                t359 = *(int *)((a4 + t356));
                t357 = 0x58;
                *(unsigned int *)((a4 + t356)) = (t359 + 0x1);
                t356 = 0x60;
                *(unsigned int *)(((int)stk + 8)) = ((t359 * t357) + (a4 + 0x64));
                if ((unsigned int)(*(int *)((a4 + t356))) >= (unsigned int)0x40) {
                    *(unsigned int *)((a4 + t356)) = 0x0;
                }
                t357 = (*(int *)(((int)stk + 8)));
                *(int *)((int)stk + 4) = (0x4 + t357);
                t356 = (FUN_0c0da2e0());
                t357 = (0x4 + t357);
                t356 = (t356 & 0xF);
                t356 = (t356 + 0x2A7);
                *(unsigned int *)((t357 + 0x0)) = t356;
                t366 = *(int *)(((int)stk + 8));
                *(int *)((int)stk + 4) = (0x10 + t366);
                t356 = (FUN_0c0da2e0());
                t357 = (0x10 + t366);
                t356 = (t356 << 1);
                *(unsigned int *)((t357 + 0x0)) = t356;
                t357 = 0x5;
                *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = t357;
                t369 = *(int *)(((int)stk + 8));
                *(int *)((int)stk + 4) = (0xC + t369);
                t356 = (FUN_0c0da2e0());
                t357 = 0xFFF;
                t356 = (t356 & t357);
                t371 = t356;
                t356 = (0xC + t369);
                *(float *)((t356 + 0x0)) = ((float)t371 * 0.00024420023f);
                t356 = (FUN_0c0da2e0());
                t356 = 0x7;
                t356 = (FUN_0c0e5fe4());
                t375 = t356;
                t356 = (t356 << 1);
                t356 = (t356 + t375);
                t356 = (t356 << 2);
                t357 = (*(int *)(((int)stk + 8)));
                t356 = (t356 << 1);
                *(unsigned int *)((t357 + 0x8)) = (0xC200FF0 + t356);
                t377 = (0xC200FF0 + t356);
                t356 = 0xC;
                t378 = *(int *)(((int)stk + 8));
                u379 = *(float *)((t377 + t356));
                t357 = t378;
                u380 = *(float *)((t357 + t356));
                t356 = 0x10;
                u381 = *(float *)((t377 + t356));
                t356 = 0x14;
                u382 = u379;
                u382 = u382 + u380 * u381;
                *(float *)((t378 + t356)) = u382;
                t356 = (nlUnitMatrix());
                t356 = (FUN_0c0dcca0((t1 + 0x30)));
                t356 = 0x6E;
                t356 = (nlRotateAY((*(short *)((t1 + t356)))));
                t356 = (FUN_0c0dcca0(0xC10C5C4));
                t356 = (FUN_0c0dcca0(0xC10C5D0));
                t356 = (nlRotateAZ((*(int *)(((*(int *)(((int)stk + 8))) + 0x10)))));
                t356 = 0xC09EADC;
                t356 = (FUN_0c0dcc70((*(float *)((t356 + 0x0))), 0.0f, 0.0f));
                t357 = 0xC0DC950;
                t356 = (nlRotateAZ(0x8000));
                t356 = 0xC09EAE8;
                u395 = *(float *)((t356 + 0x0));
                t356 = (nlScale(0.769999862f, u395, u395));
                t356 = (nlGetMatrix(((*(int *)(((int)stk + 8))) + 0x18)));
                t357 = (*(int *)(((int)stk + 12)));
                t357 = (t357 - 1);
                *(unsigned int *)(((int)stk + 12)) = t357;
            }
            nlPopMatrix(0x1);
        }
        t411 = t402;
        t414 = t405;
        t415 = t406;
        t416 = t407;
        u417 = u408;
        u418 = u409;
    }
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t420 = 0xC09EAF8;
    t421 = t411;
    t422 = t414;
    t423 = t415;
    t424 = t416;
    t425 = (0x1668 + a4);
    u426 = u417;
    u427 = u418;
    u428 = 0.0f;
    for (;;) {
        if ((unsigned int)(*(int *)(((int)stk + 8))) >= (unsigned int)0x200) {
            break;
        }
        if ((*(int *)((t425 + 0x0))) != 0) {
            t420 = 0x28;
            *(unsigned int *)(((int)stk + 44)) = 0x1;
            *(unsigned int *)((t425 + 0x0)) = ((*(int *)((t425 + 0x0))) - 1);
            u427 = (*(float *)((t425 + t420)));
            u427 = (u427 + 0.135299996f);
            *(float *)((t425 + t420)) = u427;
            t422 = 0x0;
            t420 = (nlPushMatrix(t422));
            t420 = 0x24;
            t422 = t425;
            u427 = (*(float *)((t425 + t420)));
            t420 = 0x28;
            u426 = (*(float *)((t425 + t420)));
            t420 = 0x278;
            u426 = (u426 * u427);
            u427 = (*(float *)((t1 + t420)));
            u428 = u426;
            u428 = (u428 * u427);
            t422 = (t422 + 0x8);
            t420 = (FUN_0c0dcca0(t422));
            t420 = 0x3CE;
            t422 = (*(short *)((t2 + t420)));
            t420 = (nlRotateAY(t422));
            t420 = 0x3CC;
            t422 = (*(short *)((t2 + t420)));
            t420 = (nlRotateAX(t422));
            t420 = (nlScale(u428, u428, 1.0f));
            t420 = 0xC09EC34;
            u444 = *(float *)((t420 + 0x0));
            t420 = 0xC09EC38;
            u445 = *(float *)((t420 + 0x0));
            t420 = 0xC09EC3C;
            t420 = (FUN_0c0848bc((*(float *)((t420 + 0x0))), u445, u444));
            t420 = (FUN_0c0de000(u428));
            t422 = 0x291;
            t420 = (FUN_0c0c465c(t422));
            t422 = 0x1;
            t420 = (nlPopMatrix(t422));
        } else {
            t451 = t421;
            t454 = t422;
            t455 = t423;
            t456 = t424;
            u457 = u426;
            u458 = u427;
        }
        u426 = u457;
        u427 = u458;
        t421 = t451;
        t422 = t454;
        t423 = t455;
        t424 = t456;
        t425 = (t425 + 0x2C);
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    }
    nlPushMatrix(0x0);
    t462 = 0xC09EC50;
    t464 = 0x0;
    t465 = (a4 + 0x64);
    u466 = u428;
    for (;;) {
        if ((int)t464 >= (int)0x40) {
            break;
        }
        if ((int)(*(int *)((t465 + 0x0))) > 0) {
            t462 = 0xC09EC54;
            *(unsigned int *)(((int)stk + 44)) = 0x1;
            t463 = (*(int *)((t465 + 0x0)));
            t471 = t463;
            t463 = 0xC0DBDA0;
            u466 = (float)t471;
            u466 = (u466 * (*(float *)((t462 + 0x0))));
            t462 = (FUN_0c0dbda0((t465 + 0x18)));
            t462 = (FUN_0c0de000(0.769999862f));
            t462 = 0xC09EC5C;
            u474 = *(float *)((t462 + 0x0));
            t462 = 0xC09EC60;
            t463 = 0xC0848BC;
            t462 = (FUN_0c0848bc((u466 * (*(float *)((t462 + 0x0)))), (u466 * u474), (u466 * 6.86999989f)));
            t462 = (FUN_0c0c47ae((*(int *)((t465 + 0x4)))));
            t463 = (*(int *)((t465 + 0x0)));
            t463 = (t463 - 1);
            *(unsigned int *)((t465 + 0x0)) = t463;
        }
        t465 = (t465 + 0x58);
        t464 = (t464 + 0x1);
    }
    t482 = nlPopMatrix(0x1);
    if ((*(int *)(((int)stk + 44))) == 0) {
        t485 = *(int *)((a4 + 0x44));
        if (t485 == 5) {
            *(float *)((t1 + 0x45C)) = 1.0f;
            *(float *)((t1 + 0x460)) = 1.0f;
            *(float *)((t1 + 0x464)) = 1.0f;
            return FUN_0c09dd7a();
        }
        return t485;
    }
    return t482;
}

int FUN_0c09c974(int a4, int a5, int a6, int a7)
{
    int stk[36];
    register int t4;
    register int t6;
    register float u7;
    register float u8;
    register float u21;
    register int t31;
    register int t48;
    register int t55;
    register int t60;
    register int t74;
    register int t81;
    register float u121;
    register float u122;
    register float u123;
    register float u124;
    register float u125;
    register float u126;
    register float u138;
    register int t140;
    register int t144;
    register int t153;
    register int t154;
    register int t158;
    register int t167;
    register int t188;
    register int t189;
    register float u208;
    register float u212;
    register float u213;
    register float u235;
    register float u239;
    register float u240;
    register float u259;
    register float u263;
    register float u264;
    register float u265;
    register float u266;
    register float u267;
    register int t272;
    register int t282;
    register int t291;
    register int t286;
    register int t288;

    *(unsigned int *)(((int)stk + 12)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    *(unsigned int *)(((int)stk + 80)) = 0x1;
    FUN_0c0685a4(a4, a5, a6, a7);
    nlPushMatrix(0x0);
    t4 = *(int *)((a4 + 0x30));
    if (t4 != 0) {
        if (t4 == 1) {
            nlPushMatrix(0x0);
            t6 = *(int *)((a4 + 0x68));
            *(float *)(((int)stk + 76)) = (1.0f - ((float)t6 * 0.0666666627f));
            u7 = 1.0f;
            u7 = u7 + 70.0f * ((float)t6 * 0.0666666627f);
            *(float *)(((int)stk + 52)) = u7;
            u8 = *(float *)((a4 + 0x6C));
            *(float *)((a4 + 0x6C)) = (u8 + 0.0f);
            if ((u8 + 0.0f) > 1.0f) {
                *(float *)((a4 + 0x6C)) = ((*(float *)((a4 + 0x6C))) - 1.0f);
            }
            FUN_0c0dcca0((a4 + 0x34));
            nlRotateAY(((*(short *)(((*(int *)(((int)stk + 12))) + 0x3CE))) + 0x8000));
            nlRotateAX(0xC000);
            nlScale(0.099999994f, 0.199999988f, (*(float *)(((int)stk + 52))));
            FUN_0c0de000(((*(float *)(((int)stk + 52))) * (1.0f + 1.0f)));
            u21 = *(float *)(((int)stk + 76));
            *(float *)(((int)stk + 48)) = (u21 * 1.0f);
            FUN_0c0848bc((u21 * 1.0f), (u21 * 1.0f), (u21 * 1.0f));
            FUN_0c0cae8e(0x3EF);
            FUN_0c0cacde(0x3EF, 0.0f, (*(float *)((a4 + 0x6C))));
            FUN_0c0c465c(0x3EF);
            FUN_0c0cacde(0x3EF, 0.0f, (-(*(float *)((a4 + 0x6C)))));
            FUN_0c0cae8e(0x3EF);
            if ((int)(*(int *)((a4 + 0x68))) < (int)0x17) {
                *(unsigned int *)(((int)stk + 20)) = 0x2;
                for (;;) {
                    t31 = *(int *)((a4 + 0x70));
                    *(unsigned int *)((a4 + 0x70)) = (t31 + 0x1);
                    *(unsigned int *)(((int)stk + 4)) = (((((((t31 + 0x1) - 1) << 2) + ((t31 + 0x1) - 1)) << 2) << 1) + (a4 + 0x74));
                    if ((unsigned int)(*(int *)((a4 + 0x70))) >= (unsigned int)0x190) {
                        *(unsigned int *)((a4 + 0x70)) = 0x0;
                    }
                    nlPushMatrix(0x0);
                    *(unsigned int *)(((int)stk + 8)) = ((FUN_0c0da2e0()) << 1);
                    nlUnitMatrix();
                    nlRotateAY((*(int *)(((int)stk + 8))));
                    FUN_0c0dcca0(0xC10C4D4);
                    FUN_0c0db840((*(int *)(((int)stk + 4))));
                    nlAddVector((*(int *)(((int)stk + 4))), (a4 + 0x34));
                    nlUnitMatrix();
                    FUN_0c0dcbb0(0xC10C4E0);
                    nlRotateAY((*(int *)(((int)stk + 8))));
                    t48 = FUN_0c0da2e0();
                    nlRotateAZ((0x3FFF & (t48 << 1)));
                    FUN_0c0db470(0xC10C4C8, ((*(int *)(((int)stk + 4))) + 0xC));
                    nlPopMatrix(0x1);
                    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x24)) = 0x3F1;
                    *(float *)(((*(int *)(((int)stk + 4))) + 0x20)) = 7.44999981f;
                    t55 = *(int *)(((int)stk + 20));
                    *(unsigned int *)(((int)stk + 20)) = (t55 - 1);
                    if ((t55 - 1) == 0) {
                        break;
                    }
                }
            }
            t60 = *(int *)((a4 + 0x68));
            *(unsigned int *)((a4 + 0x68)) = (t60 + 0x1);
            if ((int)(t60 + 0x1) >= (int)0xF) {
                *(unsigned int *)((a4 + 0x30)) = 0x2;
            }
            nlPopMatrix(0x1);
        }
    } else {
        nlAddVector((a4 + 0x34), (a4 + 0x40));
        if (0.0f > (*(float *)((a4 + 0x38)))) {
            *(unsigned int *)((a4 + 0x30)) = 0x1;
            *(float *)((a4 + 0x38)) = 0.0f;
        } else {
            FUN_0c0dcca0((a4 + 0x34));
            FUN_0c0848bc(3.69999981f, 2.79999995f, 2.3499999f);
            nlPushMatrix(0x0);
            nlRotateAX((((*(int *)0xC23A258) << 2) << 2));
            t74 = *(int *)0xC23A258;
            nlRotateAY((((t74 << 2) + t74) << 2));
            nlScale(0.25f, 0.25f, 0.25f);
            FUN_0c0de000(0.25f);
            FUN_0c0c465c(0x1D8);
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            t81 = *(int *)0xC23A258;
            nlRotateAX((((t81 << 2) << 2) + t81));
            nlRotateAY(((*(int *)0xC23A258) * 0x15));
            nlScale(0.25f, 0.25f, 0.25f);
            FUN_0c0de000(0.25f);
            FUN_0c0c465c(0x1D8);
            nlPopMatrix(0x1);
            FUN_0c0848bc(1.0f, 0.879999995f, 0.149999991f);
            nlPushMatrix(0x0);
            FUN_0c0a7714((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x28), (*(float *)((a4 + 0x40))), (*(float *)((a4 + 0x44))), (*(float *)((a4 + 0x48))));
            nlRotateAY((*(int *)(((int)stk + 44))));
            nlRotateAX(((*(int *)(((int)stk + 40))) + 0x4000));
            FUN_0c0dcca0(0xC10C4A4);
            nlScale(10.0f, 10.0f, 10.0f);
            FUN_0c0de000(10.0f);
            FUN_0c0c465c(((0xF & ((unsigned int)(*(int *)0xC23A258) >> 1)) + 0x281));
            nlRotateAY(0x4000);
            FUN_0c0c465c(((0xF & ((unsigned int)(*(int *)0xC23A258) >> 1)) + 0x281));
            nlPopMatrix(0x1);
            FUN_0c0848bc(1.0f, 1.0f, 1.0f);
            nlPushMatrix(0x0);
            nlRotateAY((*(short *)(((*(int *)(((int)stk + 12))) + 0x3CE))));
            nlRotateAX((*(short *)(((*(int *)(((int)stk + 12))) + 0x3CC))));
            nlScale(5.0f, 5.0f, 1.0f);
            FUN_0c0de000(5.0f);
            FUN_0c0c465c(0x293);
            nlPopMatrix(0x1);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x50)) = *(struct mv3 *)((a4 + 0x4C)); }
            nlSubVector((((int)stk + 4) + 0x50), (a4 + 0x34));
            u121 = *(float *)(((int)stk + 84));
            u122 = *(float *)(((int)stk + 88));
            u123 = *(float *)(((int)stk + 92));
            u124 = (u122 * u122);
            u124 = u124 + u121 * u121;
            u125 = u124;
            u125 = u125 + u123 * u123;
            u126 = _builtin_sqrtf(u125);
            if (_builtin_sqrtf(u125) > 40.0f) {
                u126 = 40.0f;
            }
            FUN_0c0a7714((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x20), (*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 88))), (*(float *)(((int)stk + 92))));
            nlUnitMatrix();
            FUN_0c0dcca0((a4 + 0x4C));
            nlRotateAY((*(int *)(((int)stk + 36))));
            nlRotateAX((*(int *)(((int)stk + 32))));
            u138 = u126;
            for (;;) {
                FUN_0c0dcc70(0.0f, 0.0f, (-1.0f));
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                if (0x0 != 0) {
                    for (;;) {
                        t140 = *(int *)((a4 + 0x70));
                        *(unsigned int *)((a4 + 0x70)) = (t140 + 0x1);
                        *(unsigned int *)(((int)stk + 4)) = (((((((t140 + 0x1) - 1) << 2) + ((t140 + 0x1) - 1)) << 2) << 1) + (a4 + 0x74));
                        if ((unsigned int)(*(int *)((a4 + 0x70))) >= (unsigned int)0x190) {
                            *(unsigned int *)((a4 + 0x70)) = 0x0;
                        }
                        nlPushMatrix(0x0);
                        t144 = FUN_0c0da2e0();
                        nlRotateAZ((t144 << 1));
                        FUN_0c0dcca0(0xC10C4B0);
                        FUN_0c0db840((*(int *)(((int)stk + 4))));
                        nlPopMatrix(0x1);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 4))) + 0xC)) = *(struct mv3 *)(0xC249714); }
                        *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x24)) = 0x10;
                        *(float *)(((*(int *)(((int)stk + 4))) + 0x20)) = 4.04999971f;
                        t153 = *(int *)(((int)stk + 8));
                        *(unsigned int *)(((int)stk + 8)) = (t153 + 0x1);
                        if ((int)(t153 + 0x1) >= 0) {
                            break;
                        }
                    }
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    if (0x0 != 0) {
                        for (;;) {
                            t154 = *(int *)((a4 + 0x70));
                            *(unsigned int *)((a4 + 0x70)) = (t154 + 0x1);
                            *(unsigned int *)(((int)stk + 4)) = (((((((t154 + 0x1) - 1) << 2) + ((t154 + 0x1) - 1)) << 2) << 1) + (a4 + 0x74));
                            if ((unsigned int)(*(int *)((a4 + 0x70))) >= (unsigned int)0x190) {
                                *(unsigned int *)((a4 + 0x70)) = 0x0;
                            }
                            nlPushMatrix(0x0);
                            t158 = FUN_0c0da2e0();
                            nlRotateAZ((t158 << 1));
                            FUN_0c0dcca0(0xC10C4BC);
                            FUN_0c0db840((*(int *)(((int)stk + 4))));
                            nlPopMatrix(0x1);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 4))) + 0xC)) = *(struct mv3 *)(0xC249714); }
                            *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x24)) = 0xFFFFFFF6;
                            *(float *)(((*(int *)(((int)stk + 4))) + 0x20)) = 0.419999987f;
                            t167 = *(int *)(((int)stk + 8));
                            *(unsigned int *)(((int)stk + 8)) = (t167 + 0x1);
                            if ((int)(t167 + 0x1) >= 0) {
                                break;
                            }
                        }
                    }
                }
                u138 = (u138 - 1.0f);
                if (u138 > 0.0f) continue;
                break;
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)((a4 + 0x34)); }
        }
    }
    nlPopMatrix(0x1);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t188 = 0xC09D070;
    t189 = (a4 + 0x74);
    for (;;) {
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 4))) * 0x3237);
        if ((int)(*(int *)((t189 + 0x24))) <= 0) {
            if ((int)(*(int *)((t189 + 0x24))) < 0) {
                t188 = 0x20;
                *(float *)((t189 + t188)) = ((*(float *)((t189 + t188))) + 0.0699999928f);
                t188 = 0x4C;
                *(unsigned int *)((((int)stk + 4) + t188)) = 0x0;
                t188 = 0x40;
                *(float *)((((int)stk + 4) + t188)) = (-((float)(*(int *)((t189 + 0x24))) * 0.099999994f));
                t188 = (nlAddVector(t189, (t189 + 0xC)));
                t188 = 0x10;
                *(float *)((t189 + t188)) = ((*(float *)((t189 + t188))) + 0.0299999993f);
                t188 = (nlPushMatrix(0x0));
                t188 = (FUN_0c0dcca0(t189));
                t188 = 0x3CE;
                t188 = (nlRotateAY((*(short *)(((*(int *)(((int)stk + 12))) + t188)))));
                t188 = 0x3CC;
                t188 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 12))) + t188)))));
                t188 = (nlRotateAZ((*(int *)(((int)stk + 8)))));
                t188 = 0x20;
                u208 = *(float *)((t189 + t188));
                t188 = 0x3C;
                *(float *)((((int)stk + 4) + t188)) = u208;
                t188 = (nlScale(u208, u208, 1.0f));
                t188 = 0x20;
                t188 = (FUN_0c0de000((*(float *)((t189 + t188)))));
                t188 = 0xC09D264;
                u212 = *(float *)((t188 + 0x0));
                t188 = 0x40;
                u213 = *(float *)((((int)stk + 4) + t188));
                t188 = 0x14;
                *(float *)((((int)stk + 4) + t188)) = (u213 * u212);
                t188 = (FUN_0c0848bc((u213 * u212), (u213 * u212), (u213 * u212)));
                t188 = (FUN_0c0c465c(0x410));
                t188 = (nlPopMatrix(0x1));
                *(unsigned int *)((t189 + 0x24)) = ((*(int *)((t189 + 0x24))) + 0x1);
            }
        } else {
            if ((int)(*(int *)((t189 + 0x24))) <= (int)0x3E8) {
                t188 = 0x20;
                *(float *)((t189 + t188)) = ((*(float *)((t189 + t188))) + -0.148999989f);
                t188 = 0x4C;
                *(unsigned int *)((((int)stk + 4) + t188)) = 0x0;
                t188 = 0x44;
                *(float *)((((int)stk + 4) + t188)) = ((float)(*(int *)((t189 + 0x24))) * 0.0625f);
                t188 = (nlAddVector(t189, (t189 + 0xC)));
                t188 = 0x10;
                *(float *)((t189 + t188)) = ((*(float *)((t189 + t188))) + 0.0f);
                t188 = (nlPushMatrix(0x0));
                t188 = (FUN_0c0dcca0(t189));
                t188 = 0x3CE;
                t188 = (nlRotateAY((*(short *)(((*(int *)(((int)stk + 12))) + t188)))));
                t188 = 0x3CC;
                t188 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 12))) + t188)))));
                t188 = 0x20;
                u235 = *(float *)((t189 + t188));
                t188 = 0x34;
                *(float *)((((int)stk + 4) + t188)) = u235;
                t188 = (nlScale(u235, u235, 1.0f));
                t188 = 0x20;
                t188 = (FUN_0c0de000((*(float *)((t189 + t188)))));
                t188 = 0xC09D14C;
                u239 = *(float *)((t188 + 0x0));
                t188 = 0x44;
                u240 = *(float *)((((int)stk + 4) + t188));
                t188 = 0x18;
                *(float *)((((int)stk + 4) + t188)) = (u240 * u239);
                t188 = (FUN_0c0848bc((u240 * u239), (u240 * u239), (u240 * u239)));
                t188 = (FUN_0c0c465c(0x293));
                t188 = (nlPopMatrix(0x1));
                *(unsigned int *)((t189 + 0x24)) = ((*(int *)((t189 + 0x24))) - 1);
            } else {
                t188 = 0x20;
                *(float *)((t189 + t188)) = ((*(float *)((t189 + t188))) + -0.0f);
                t188 = 0x4C;
                *(unsigned int *)((((int)stk + 4) + t188)) = 0x0;
                t188 = 0xC;
                *(float *)((((int)stk + 4) + t188)) = ((float)((*(int *)((t189 + 0x24))) - 1000) * 0.0625f);
                t188 = (nlAddVector(t189, (t189 + 0xC)));
                t188 = 0x10;
                *(float *)((t189 + t188)) = ((*(float *)((t189 + t188))) + 0.0399999991f);
                t188 = (nlPushMatrix(0x0));
                t188 = (FUN_0c0dcca0(t189));
                t188 = 0x3CE;
                t188 = (nlRotateAY((*(short *)(((*(int *)(((int)stk + 12))) + t188)))));
                t188 = 0x3CC;
                t188 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 12))) + t188)))));
                t188 = (nlRotateAZ((*(int *)(((int)stk + 8)))));
                t188 = 0x20;
                u259 = *(float *)((t189 + t188));
                t188 = 0x38;
                *(float *)((((int)stk + 4) + t188)) = u259;
                t188 = (nlScale(u259, (u259 * 1.0f), 1.0f));
                t188 = 0x20;
                t188 = (FUN_0c0de000(((*(float *)((t189 + t188))) * 1.0f)));
                t188 = 0xC09D090;
                u263 = *(float *)((t188 + 0x0));
                t188 = 0xC;
                u264 = *(float *)((((int)stk + 4) + t188));
                t188 = 0xC09D094;
                u265 = *(float *)((t188 + 0x0));
                t188 = 0xC;
                u266 = *(float *)((((int)stk + 4) + t188));
                t188 = 0xC09D098;
                u267 = *(float *)((t188 + 0x0));
                t188 = 0xC;
                t188 = (FUN_0c0848bc(((*(float *)((((int)stk + 4) + t188))) * u267), (u266 * u265), (u264 * u263)));
                t188 = (FUN_0c0c465c(0x297));
                t188 = (nlPopMatrix(0x1));
                t272 = *(int *)((t189 + 0x24));
                *(unsigned int *)((t189 + 0x24)) = (t272 - 1);
                if ((int)(t272 - 1) > (int)0x3E8) {
                } else {
                    *(unsigned int *)((t189 + 0x24)) = 0x0;
                }
            }
        }
        t282 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t282 + 0x1);
        t189 = (t189 + 0x28);
        if ((unsigned int)(t282 + 0x1) < (unsigned int)0x190) continue;
        break;
    }
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    t291 = 0x4C;
    if ((*(int *)(((int)stk + 80))) != 0) {
        t286 = *(int *)((a4 + 0x30));
        t288 = t286;
        if (t286 == 2) {
            t288 = (FUN_0c0e19f2());
        }
        t291 = t288;
    }
    return t291;
}

int FUN_0c064876(int a4, int a5, int a6, int a7)
{
    int stk[29];
    register int t1;
    register int t38;
    register int t34;
    register int t76;
    register int t80;
    int t81;
    register int t84;
    register int t92;
    register float u94;
    register int t96;
    register float u98;
    register float u118;
    register float u119;
    register float u120;
    register float u121;
    register float u122;
    register int t132;
    register int t139;
    register int t166;
    register float u184;
    register int t189;
    register int t197;
    register int t198;
    register float u199;
    register float u216;
    register float u220;
    register float u241;
    register float u245;
    register int t259;
    register int t261;
    register int t263;
    register float u196;
    register int t23;
    register int t42;
    register int t71;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    FUN_0c0685a4(a4, a5, a6, a7);
    if ((int)(*(int *)((a4 + 0x2CC))) >= (int)0x2) {
    } else {
        nlPushMatrix(0x0);
        nlUnitMatrix();
        nlRotateAY((*(short *)((a4 + 0x6E))));
        nlRotateAX((*(short *)((a4 + 0x6C))));
        FUN_0c0db470(0xC0F9FAC, (((int)stk + 8) + 0x30));
        nlAddVector((a4 + 0x30), (((int)stk + 8) + 0x30));
        if ((*(int *)((a4 + 0x2CC))) == 0) {
            if ((*(float *)((a4 + 0x34))) > 150.0f) {
                if (((*(int *)0xC247030) == 4) && (t23 = *(int *)0xC247034, t23 == 4)) {
                    t42 = (0x1 & (FUN_0c0da2e0()));
                } else {
                    t38 = 0x0;
                    if ((*(int *)0xC247030) == 4) {
                    } else {
                        t34 = 0x1;
                        if ((*(int *)0xC247034) == 4) {
                        } else {
                            *(unsigned int *)((a4 + 0x2CC)) = 0x2;
                            t34 = 0xFFFFFFFF;
                        }
                        t38 = t34;
                    }
                    t42 = t38;
                }
                if ((int)t42 >= 0) {
                    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((t42 << 2) + 0xC246FF0)));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x24)) = *(struct mv3 *)((a4 + 0x30)); }
                    nlSubVector((((int)stk + 8) + 0x24), ((*(int *)(((int)stk + 8))) + 0x30));
                    FUN_0c0a7714((((int)stk + 8) + 0x10), (((int)stk + 8) + 0x14), (*(float *)(((int)stk + 44))), (*(float *)(((int)stk + 48))), (*(float *)(((int)stk + 52))));
                    *(unsigned short *)((a4 + 0x6E)) = (*(int *)(((int)stk + 28)));
                    *(unsigned short *)((a4 + 0x6C)) = ((*(int *)(((int)stk + 24))) - 16384);
                    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                }
            }
        } else {
            t76 = 0x0;
            if (((*(int *)((a4 + 0xD8))) != 0) && (t71 = *(int *)((a4 + 0xD8)), t71 == 1)) {
                FUN_0c05a98a(a4);
                FUN_0c090bf0(a4);
                t76 = 0x1;
            }
            if (!(0.5f > (*(float *)((a4 + 0x34)))) && (t76 == 0)) {
                FUN_0c01cdc2(a4);
            } else {
                *(float *)((a4 + 0x34)) = 0.5f;
                t80 = (nlPushMatrix(0x0));
                t81 = 0x20;
                for (;;) {
                    *(unsigned int *)(((int)stk + 12)) = t81;
                    if (t81 == 0) {
                        break;
                    }
                    t80 = 0x2D0;
                    t81 = (*(int *)((a4 + t80)));
                    t81 = (t81 + 0x1);
                    *(unsigned int *)((a4 + t80)) = t81;
                    t81 = (t81 - 1);
                    t84 = t81;
                    t81 = (t81 << 2);
                    t81 = (t81 + t84);
                    t80 = 0x2D0;
                    t81 = (t81 << 2);
                    t81 = (t81 << 1);
                    t81 = (t81 + (0x2D4 + a4));
                    *(unsigned int *)(((int)stk + 8)) = t81;
                    if ((unsigned int)(*(int *)((a4 + t80))) >= (unsigned int)0x80) {
                        t81 = 0x0;
                        *(unsigned int *)((a4 + t80)) = t81;
                    }
                    t81 = 0xC0E61D4;
                    t80 = 0xC;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 8)))) = *(struct mv3 *)((a4 + 0x30)); }
                    t80 = (nlUnitMatrix());
                    t81 = 0xC0DA2E0;
                    t80 = (FUN_0c0da2e0());
                    t80 = (nlRotateAY((t80 << 1)));
                    t80 = (FUN_0c0da2e0());
                    t81 = 0xFFF;
                    t80 = (t80 & t81);
                    t92 = t80;
                    t80 = 0xC064AA0;
                    u94 = 0.0f;
                    u94 = u94 + (*(float *)((t80 + 0x0))) * (float)t92;
                    *(float *)(((int)stk + 4)) = u94;
                    t80 = (FUN_0c0da2e0());
                    t80 = (t80 & 0xFFF);
                    t81 = 0xC0DCC70;
                    t96 = t80;
                    t80 = 0xC064AA4;
                    u98 = 0.5f;
                    u98 = u98 + (*(float *)((t80 + 0x0))) * (float)t96;
                    t80 = (FUN_0c0dcc70(u98, u94, 0.0f));
                    t81 = 0xC0DB840;
                    t80 = (FUN_0c0db840(((*(int *)(((int)stk + 8))) + 0xC)));
                    t80 = 0x20;
                    *(float *)(((*(int *)(((int)stk + 8))) + t80)) = 0.199999988f;
                    t81 = (*(int *)(((int)stk + 8)));
                    *(unsigned int *)((t81 + 0x24)) = 0xFFFFFFE0;
                    t81 = (*(int *)(((int)stk + 12)));
                    t81 = (t81 - 1);
                }
                nlPopMatrix(0x1);
                FUN_0c0cc3f8(0x1331A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                *(unsigned int *)((a4 + 0x2CC)) = 0x2;
            }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
        nlSubVector((((int)stk + 8) + 0x30), (a4 + 0x3C));
        u118 = *(float *)(((int)stk + 56));
        u119 = *(float *)(((int)stk + 60));
        u120 = *(float *)(((int)stk + 64));
        u121 = (u119 * u119);
        u121 = u121 + u118 * u118;
        u122 = u121;
        u122 = u122 + u120 * u120;
        *(float *)(((int)stk + 16)) = _builtin_sqrtf(u122);
        if (_builtin_sqrtf(u122) > 40.0f) {
            *(float *)(((int)stk + 16)) = 40.0f;
        }
        nlUnitMatrix();
        FUN_0c0dcca0((a4 + 0x3C));
        nlRotateAY((*(short *)((a4 + 0x6E))));
        nlRotateAX((*(short *)((a4 + 0x6C))));
        for (;;) {
            if (!((*(float *)(((int)stk + 16))) > 0.5f)) {
                break;
            }
            t132 = *(int *)((a4 + 0x2D0));
            *(unsigned int *)((a4 + 0x2D0)) = (t132 + 0x1);
            *(unsigned int *)(((int)stk + 8)) = (((((((t132 + 0x1) - 1) << 2) + ((t132 + 0x1) - 1)) << 2) << 1) + (0x2D4 + a4));
            if ((unsigned int)(*(int *)((a4 + 0x2D0))) >= (unsigned int)0x80) {
                *(unsigned int *)((a4 + 0x2D0)) = 0x0;
            }
            FUN_0c0db840((*(int *)(((int)stk + 8))));
            nlPushMatrix(0x0);
            t139 = FUN_0c0da2e0();
            nlRotateAZ((t139 << 1));
            FUN_0c0db4d0(0xC0F9F94, ((*(int *)(((int)stk + 8))) + 0xC));
            nlPopMatrix(0x1);
            *(float *)(((*(int *)(((int)stk + 8))) + 0x20)) = 0.199999988f;
            *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x24)) = 0x10;
            FUN_0c0dcc70(0.0f, 0.5f, 0.0f);
            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - 0.5f);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x1;
        FUN_0c0dcca0((a4 + 0x30));
        nlPushMatrix(0x0);
        nlRotateAY((*(short *)((t1 + 0x3CE))));
        nlRotateAX((*(short *)((t1 + 0x3CC))));
        FUN_0c0848bc(1.0f, 0.819999993f, 1.0f);
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        for (;;) {
            nlPushMatrix(0x0);
            nlRotateAZ((((*(int *)0xC23A258) * 0x12C0) + (*(int *)(((int)stk + 8)))));
            FUN_0c0dcc70(-0.309999973f, 0.0f, 0.0f);
            nlScale(3.0f, 3.0f, 3.0f);
            FUN_0c0de000(3.0f);
            FUN_0c0c465c(0x291);
            nlPopMatrix(0x1);
            t166 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 8)) = (t166 + 0x2000);
            if ((int)(t166 + 0x2000) >= (int)0x6000) {
                break;
            }
        }
        nlPopMatrix(0x1);
        nlRotateAY((*(short *)((a4 + 0x6E))));
        nlRotateAX((*(short *)((a4 + 0x6C))));
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        for (;;) {
            FUN_0c0dcc70(0.0f, -0.799999952f, 0.0f);
            nlPushMatrix(0x0);
            *(float *)(((int)stk + 32)) = (-((float)(*(int *)(((int)stk + 8))) * 0.289999992f));
            nlRotateAY(((*(short *)((t1 + 0x3CE))) - (*(short *)((a4 + 0x6E)))));
            nlRotateAX(((*(short *)((t1 + 0x3CC))) - (*(short *)((a4 + 0x6C)))));
            nlRotateAZ(((((((*(int *)(((int)stk + 8))) << 8) << 2) << 2) << 1) + ((*(int *)0xC23A258) * 0x12C0)));
            u184 = *(float *)(((int)stk + 32));
            nlScale((u184 + 3.0f), (u184 + 3.0f), (u184 + 3.0f));
            FUN_0c0de000((u184 + 3.0f));
            FUN_0c0c465c(0x291);
            nlPopMatrix(0x1);
            t189 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 8)) = (t189 + 0x1);
            if ((int)(t189 + 0x1) >= (int)0x7) {
                break;
            }
        }
        nlPopMatrix(0x1);
        u196 = 0.0f;
    }
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t197 = 0xC064E74;
    t198 = (a4 + 0x2D4);
    u199 = u196;
    for (;;) {
        *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 8))) * 0x3723);
        if ((int)(*(int *)((t198 + 0x24))) > 0) {
            *(unsigned int *)(((int)stk + 12)) = 0x1;
            t197 = 0x20;
            *(float *)((t198 + t197)) = ((*(float *)((t198 + t197))) + 0.0129999993f);
            t197 = 0xC064E7C;
            u199 = (float)(*(int *)((t198 + 0x24)));
            u199 = (u199 * (*(float *)((t197 + 0x0))));
            t197 = (nlAddVector(t198, (t198 + 0xC)));
            t197 = 0x10;
            *(float *)((t198 + t197)) = ((*(float *)((t198 + t197))) * 1.0f);
            t197 = (nlPushMatrix(0x0));
            t197 = (FUN_0c0dcca0(t198));
            t197 = 0x3CE;
            t197 = (nlRotateAY((*(short *)((t1 + t197)))));
            t197 = 0x3CC;
            t197 = (nlRotateAX((*(short *)((t1 + t197)))));
            t197 = (nlRotateAZ((*(int *)(((int)stk + 20)))));
            t197 = 0x20;
            u216 = *(float *)((t198 + t197));
            t197 = 0x1C;
            *(float *)((((int)stk + 8) + t197)) = u216;
            t197 = (nlScale(u216, u216, 1.0f));
            t197 = 0x20;
            t197 = (FUN_0c0de000((*(float *)((t198 + t197)))));
            t197 = 0xC064E88;
            u220 = *(float *)((t197 + 0x0));
            t197 = 0xC064E8C;
            t197 = (FUN_0c0848bc((u199 * (*(float *)((t197 + 0x0)))), (u199 * 0.399999976f), (u199 * u220)));
            t197 = (FUN_0c0c465c(0x2F1));
            t197 = (nlPopMatrix(0x1));
            *(unsigned int *)((t198 + 0x24)) = ((*(int *)((t198 + 0x24))) - 1);
        } else {
            if ((int)(*(int *)((t198 + 0x24))) < 0) {
                t197 = 0x20;
                *(unsigned int *)(((int)stk + 12)) = 0x1;
                *(float *)((t198 + t197)) = ((*(float *)((t198 + t197))) + 0.0129999993f);
                t197 = 0xC064F80;
                u199 = ((float)(*(int *)((t198 + 0x24))) * (*(float *)((t197 + 0x0))));
                u199 = (-u199);
                t197 = (nlAddVector(t198, (t198 + 0xC)));
                t197 = 0xC;
                *(float *)((t198 + t197)) = ((*(float *)((t198 + t197))) * 0.942999959f);
                t197 = 0x14;
                *(float *)((t198 + t197)) = ((*(float *)((t198 + t197))) * 0.942999959f);
                t197 = (nlPushMatrix(0x0));
                t197 = (FUN_0c0dcca0(t198));
                t197 = 0x3CE;
                t197 = (nlRotateAY((*(short *)((t1 + t197)))));
                t197 = 0x3CC;
                t197 = (nlRotateAX((*(short *)((t1 + t197)))));
                t197 = (nlRotateAZ((*(int *)(((int)stk + 20)))));
                t197 = 0x20;
                u241 = *(float *)((t198 + t197));
                t197 = 0x20;
                *(float *)((((int)stk + 8) + t197)) = u241;
                t197 = (nlScale(u241, u241, 1.0f));
                t197 = 0x20;
                t197 = (FUN_0c0de000((*(float *)((t198 + t197)))));
                t197 = 0xC064F94;
                u245 = *(float *)((t197 + 0x0));
                t197 = 0xC064F98;
                t197 = (FUN_0c0848bc((u199 * (*(float *)((t197 + 0x0)))), (u199 * 0.399999976f), (u199 * u245)));
                t197 = (FUN_0c0c465c(0x2F1));
                t197 = (nlPopMatrix(0x1));
                *(unsigned int *)((t198 + 0x24)) = ((*(int *)((t198 + 0x24))) + 0x1);
            }
        }
        t259 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t259 + 0x1);
        t198 = (t198 + 0x28);
        if ((unsigned int)(t259 + 0x1) < (unsigned int)0x80) continue;
        break;
    }
    t261 = *(int *)(((int)stk + 12));
    t263 = (FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12)));
    if (t261 == 0) {
        t263 = (FUN_0c0e19f2());
    }
    return t263;
}

int FUN_0c08085c(int a4)
{
    int stk[33];
    register int t2;
    register float t76;
    register float u86;
    register float u87;
    register float u88;
    register float u89;
    register float t126;
    register float t138;
    register int t150;
    register float u84;
    register float u130;

    nlPushMatrix(0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x38)) = *(struct mv3 *)((0x284 + a4)); }
    nlSubVector3op((((int)stk + 4) + 0x50), (0x260 + a4), (0x284 + a4));
    t2 = *(int *)0xC247CA4;
    nlScaleUnitVector((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x50), ((*(float *)((t2 + 0x18))) + (*(float *)((t2 + 0x24)))));
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x200) != 0) {
        nlUnitMatrix();
        nlSubVector3op((a4 + 0x6C), (0x284 + a4), (((int)stk + 4) + 0x50));
        nlAddVector3op((a4 + 0x60), (0x284 + a4), (((int)stk + 4) + 0x50));
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if ((*(int *)((a4 + 0xD8))) != 0) {
            FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x284 + a4), (*(float *)(((*(int *)0xC247CA4) + 0x18))));
        }
    }
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x400) != 0) {
        nlUnitMatrix();
        nlRotateAY(0xFFFFC001);
        FUN_0c0db470((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x44));
        nlSubVector3op((a4 + 0x6C), (0x284 + a4), (((int)stk + 4) + 0x44));
        nlAddVector3op((a4 + 0x60), (0x284 + a4), (((int)stk + 4) + 0x44));
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if ((*(int *)((a4 + 0xD8))) != 0) {
            FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x284 + a4), (*(float *)(((*(int *)0xC247CA4) + 0x18))));
        }
    }
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x800) != 0) {
        nlUnitMatrix();
        nlRotateAY(0x3FFF);
        FUN_0c0db470((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x44));
        nlSubVector3op((a4 + 0x6C), (0x284 + a4), (((int)stk + 4) + 0x44));
        nlAddVector3op((a4 + 0x60), (0x284 + a4), (((int)stk + 4) + 0x44));
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if ((*(int *)((a4 + 0xD8))) != 0) {
            FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x284 + a4), (*(float *)(((*(int *)0xC247CA4) + 0x18))));
        }
    }
    nlSubVector3op((((int)stk + 4) + 0x44), (0x284 + a4), (((int)stk + 4) + 0x38));
    nlAddVector((0x260 + a4), (((int)stk + 4) + 0x44));
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x1000) == 0) {
    } else {
        *(unsigned int *)((a4 + 0x250)) = ((*(int *)((a4 + 0x250))) & 0xFFFFFFFD);
        if ((*(int *)((a4 + 0x3F8))) != 0) {
            *(unsigned int *)((a4 + 0x3F8)) = ((*(int *)((a4 + 0x3F8))) - 1);
        } else {
            *(unsigned int *)((a4 + 0x250)) = ((*(int *)((a4 + 0x250))) & 0xFFFFFFFB);
        }
        nlSubVector3op((a4 + 0x6C), (0x284 + a4), (((int)stk + 4) + 0x50));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((0x260 + a4)); }
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if ((*(int *)((a4 + 0xD8))) == 0) {
        } else {
            t76 = nlLength((0xBC + a4), (0x278 + a4));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x2C)) = *(struct mv3 *)((0xC8 + a4)); }
            if ((*(short *)(((*(int *)0xC23ECFC) + 0x0))) == 3) {
                u84 = (*(float *)(((*(int *)0xC247CA4) + 0x20)));
            } else {
                u84 = (*(float *)((a4 + 0x29C)));
            }
            if (!(t76 > u84)) {
                u86 = *(float *)((a4 + 0x278));
                u87 = *(float *)((a4 + 0xBC));
                u88 = *(float *)((a4 + 0x280));
                u89 = *(float *)((a4 + 0xC4));
                *(unsigned int *)((a4 + 0x250)) = ((*(int *)((a4 + 0x250))) | 0x2);
                *(float *)((a4 + 0x29C)) = u84;
                *(float *)((a4 + 0x260)) = (*(float *)((a4 + 0xBC)));
                *(float *)((a4 + 0x264)) = ((*(float *)((a4 + 0x27C))) + _builtin_sqrtf((((u84 * u84) - ((u87 - u86) * (u87 - u86))) - ((u89 - u88) * (u89 - u88)))));
                *(float *)((a4 + 0x268)) = (*(float *)((a4 + 0xC4)));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x6C)) = *(struct mv3 *)((0x284 + a4)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((0x260 + a4)); }
                FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
                if ((*(int *)((a4 + 0xD8))) != 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x260 + a4)) = *(struct mv3 *)((0xBC + a4)); }
                }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x260 + a4)) = *(struct mv3 *)((0xBC + a4)); }
            }
            if (!((*(float *)(((int)stk + 52))) > -0.099999994f)) {
            } else {
                if (((*(int *)((a4 + 0x250))) & 4) != 0) {
                } else {
                    *(unsigned int *)((a4 + 0x250)) = ((*(int *)((a4 + 0x250))) | 0x4);
                    if ((*(int *)((a4 + 0x3F8))) != 0) {
                    } else {
                        *(unsigned int *)(((int)stk + 8)) = 0x0;
                        nlSubVector3op((((int)stk + 4) + 0x14), (0x254 + a4), (0x278 + a4));
                        FUN_0c0dd050((((int)stk + 4) + 0x14));
                        if ((*(int *)0xC247CFC) != 4) {
                        } else {
                            *(float *)0xC2009A8 = (*(float *)((a4 + 0x29C)));
                            FUN_0c0dce80((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14), ((*(float *)((a4 + 0x29C))) * 0.5f));
                            nlAddVector3op((a4 + 0x6C), (0x278 + a4), (((int)stk + 4) + 0x8));
                            nlUnitMatrix();
                            FUN_0c0dcca0((a4 + 0x6C));
                            nlPushMatrix(0x0);
                            nlRotateAY(((*(short *)((a4 + 0x3CE))) + 0x3FFF));
                            FUN_0c0db470(0xC2009A0, (a4 + 0x60));
                            FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
                            if ((*(int *)((a4 + 0xD8))) != 0) {
                                t126 = nlLength((a4 + 0x6C), (0xBC + a4));
                                *(unsigned int *)(((int)stk + 8)) = 0x1;
                                u130 = t126;
                            }
                            FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
                            nlRotateAY(((*(short *)((a4 + 0x3CE))) + 0xBFFF));
                            FUN_0c0db470(0xC2009A0, (a4 + 0x60));
                            FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
                            if ((*(int *)((a4 + 0xD8))) != 0) {
                                t138 = nlLength((a4 + 0x6C), (0xBC + a4));
                                if (t138 > u130) {
                                    *(unsigned int *)(((int)stk + 8)) = 0x2;
                                }
                            }
                            nlPopMatrix(0x1);
                        }
                        *(unsigned int *)(((int)stk + 4)) = 0x38E3;
                        t150 = *(int *)(((int)stk + 8));
                        if (t150 != 1) {
                            if (t150 != 2) {
                                nlOuterProduct((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20));
                                if (0.0f > (*(float *)(((int)stk + 40)))) {
                                    *(unsigned int *)((a4 + 0x3E8)) = 0xFFFFC71D;
                                } else {
                                    *(unsigned int *)((a4 + 0x3E8)) = (*(int *)(((int)stk + 4)));
                                }
                            } else {
                                *(unsigned int *)((a4 + 0x3E8)) = 0xFFFFC71D;
                            }
                        } else {
                            *(unsigned int *)((a4 + 0x3E8)) = (*(int *)(((int)stk + 4)));
                        }
                    }
                    *(unsigned int *)((a4 + 0x3E0)) = ((*(int *)((a4 + 0x3D8))) + (*(int *)((a4 + 0x3E8))));
                    *(unsigned int *)((a4 + 0x3F8)) = 0x78;
                }
            }
        }
    }
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x2000) != 0) {
        nlUnitMatrix();
        nlRotateAY(0xFFFFC001);
        FUN_0c0db470((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x44));
        nlSubVector3op((a4 + 0x6C), (0x260 + a4), (((int)stk + 4) + 0x44));
        nlAddVector3op((a4 + 0x60), (0x260 + a4), (((int)stk + 4) + 0x44));
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if ((*(int *)((a4 + 0xD8))) != 0) {
            FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x260 + a4), (*(float *)(((*(int *)0xC247CA4) + 0x1C))));
        }
    }
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x4000) != 0) {
        nlUnitMatrix();
        nlRotateAY(0x3FFF);
        FUN_0c0db470((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x44));
        nlSubVector3op((a4 + 0x6C), (0x260 + a4), (((int)stk + 4) + 0x44));
        nlAddVector3op((a4 + 0x60), (0x260 + a4), (((int)stk + 4) + 0x44));
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if ((*(int *)((a4 + 0xD8))) != 0) {
            FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x260 + a4), (*(float *)(((*(int *)0xC247CA4) + 0x1C))));
        }
    }
    if (((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 0x8000) != 0) {
        nlSubVector3op((a4 + 0x6C), (0x260 + a4), 0xC1027BC);
        nlAddVector3op((a4 + 0x60), (0x260 + a4), 0xC1027BC);
        FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
        if ((*(int *)((a4 + 0xD8))) != 0) {
            FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x260 + a4), (*(float *)(((*(int *)0xC247CA4) + 0x1C))));
        }
    }
    return (nlPopMatrix(0x1));
}
