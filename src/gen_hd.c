/* Straight-line functions with calls and guards (batch gen_hd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c064640(int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c084800(float, float, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c08e970(int, int, float);
int FUN_0c095f40(int, int, int, int, int);
int FUN_0c095fa0(int, int);
int FUN_0c096094(int, int);
int FUN_0c09635c(int, int, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0c4684(int);
int FUN_0c0c47ae(int);
int FUN_0c0c8d06(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db6b0(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcc80(int);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int FUN_0c0de000(float);
int FUN_0c0df4c0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
int nlInvertMatrix(int);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotate(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c06f6f4(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0965c0(int a4, int a5, int a6, int a7);

int FUN_0c06f6f4(int a4, int a5, int a6, int a7, float f4)
{
    int stk[68];
    register int t9;
    register int t23;
    register int t41;
    int t26;
    register int t43;
    register int t44;
    register int t45;
    register int t59;
    register int t60;
    register float u62;
    register float u63;
    register int t65;
    register int t66;
    register int t67;
    register int t68;
    register int t69;
    register int t70;
    register float u71;
    register float u72;
    register int t77;
    register int t84;
    register int t85;
    register float u97;
    register float u98;
    register float u99;
    register float u100;
    register float u101;
    register float u102;
    register float u103;
    register float u104;
    register float u105;
    register int t111;
    register int t131;
    register int t132;
    register int t189;
    register int t190;
    register float u193;
    register float u219;
    register float u242;
    register float u224;
    register float u237;
    register float u228;
    int t244;
    register int t254;
    register float u282;
    register float u256;
    register float u271;
    register int t287;
    register int t288;
    register int t289;
    register float u290;
    register float u291;
    register float u292;
    register float u293;
    register int t297;
    register float u304;
    register int t305;
    register int t306;
    register float u311;
    register int t395;
    register int t380;
    register int t389;
    register int t14;
    register int t17;
    register int t370;
    register int t340;
    register int t36;
    register int t64;
    register float u109;
    register int t152;
    register int t187;
    register int t188;
    register float u191;
    register float u192;
    register float u253;
    register int t279;
    register float u285;
    register int t327;
    register float u328;
    register float u329;
    register int t322;
    register float u323;
    register float u324;
    register int t318;
    register float u319;
    register float u320;
    register int t348;
    register int t355;

    if ((*(int *)(((*(int *)0xC247C64) + 0x3C))) != 0) {
        if ((*(int *)((a4 + 0x3E0))) != 0) {
            *(unsigned int *)(((*(int *)((a4 + 0x3E0))) + 0x1EC)) = 0xFFFFFFFF;
        }
        t9 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    } else {
        t14 = a4;
    }
    if (((*(int *)0xC23ED9C) != 4) && (t17 = *(int *)((a4 + 0x3E0)), t17 != 0)) {
        *(unsigned int *)(((*(int *)((a4 + 0x3E0))) + 0x1EC)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0x3E0)) = 0x0;
    }
    t23 = *(short *)((a4 + 0x220));
    if (t23 != 0) {
        if (t23 != 1) {
            t41 = t14;
            if (t23 == 2) {
                t26 = *(int *)((a4 + 0x3DC));
                if (((0x1 & t26) != 0) && ((int)t26 <= (int)0x3C)) {
                    t36 = t26;
                } else {
                    nlPushMatrix(0x0);
                    nlMultiMatrix((0x2B8 + a4));
                    FUN_0c0c465c((*(short *)((a4 + 0x222))));
                    nlPopMatrix(0x1);
                }
                t41 = t36;
            }
            t340 = t41;
        } else {
            FUN_0c0dc5a0();
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x354 + a4)) = *(struct mv3 *)((0x318 + a4)); }
            t43 = (0x354 + a4);
            t44 = 0x0;
            t45 = a5;
            for (;;) {
                if ((int)t44 >= (int)(*(int *)((a4 + 0x224)))) {
                    break;
                }
                t45 = t44;
                t43 = 0x360;
                t45 = (t45 << 1);
                t45 = (t45 + t44);
                t45 = (t45 << 2);
                t43 = (t43 + a4);
                t43 = (t43 + t45);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t43) = *(struct mv3 *)(((0x324 + a4) + t45)); }
                t44 = (t44 + 0x1);
            }
            FUN_0c0dcca0((0x2F8 + a4));
            nlMultiMatrix((0x2B8 + a4));
            if ((*(float *)((a4 + 0x314))) > 0.0f) {
                FUN_0c0dcca0((0x244 + a4));
                nlRotate((0x308 + a4), ((int)((((*(float *)((a4 + 0x314))) * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
                FUN_0c0dcc80((0x244 + a4));
            }
            FUN_0c0db470((0x244 + a4), (0xCC + ((int)stk + 8)));
            t59 = 0x0;
            for (;;) {
                t60 = *(int *)((a4 + 0x224));
                if ((int)t59 >= (int)t60) {
                    break;
                }
                FUN_0c0db470(((((t59 << 2) + t59) << 2) + (0x254 + a4)), ((((t59 << 1) + t59) << 2) + (0x9C + ((int)stk + 8))));
                t59 = (t59 + 0x1);
            }
            *(float *)((a4 + 0x390)) = 0.0f;
            u62 = *(float *)((a4 + 0x228));
            u63 = *(float *)((a4 + 0x2B4));
            *(float *)((a4 + 0x394)) = (u63 * u62);
            *(float *)((a4 + 0x398)) = 0.0f;
            t65 = t60;
            t66 = 0x0;
            t67 = a5;
            t68 = a6;
            t69 = a7;
            t70 = 0x0;
            u71 = (u63 * u62);
            u72 = u62;
            for (;;) {
                if ((int)t66 >= (int)(*(int *)((a4 + 0x224)))) {
                    break;
                }
                t68 = t66;
                t68 = (t68 << 2);
                t65 = t66;
                t69 = t66;
                t68 = (t68 + t65);
                t65 = t66;
                t69 = (t69 << 1);
                t67 = 0x39C;
                t69 = (t69 + t65);
                t67 = (t67 + a4);
                t69 = (t69 << 2);
                t67 = (t67 + t69);
                *(float *)((t67 + 0x8)) = 0.0f;
                *(float *)((t67 + 0x4)) = 0.0f;
                t68 = (t68 << 2);
                *(float *)((t67 + 0x0)) = 0.0f;
                t68 = (t68 + (0x254 + a4));
                u72 = (*(float *)((t68 + 0xC)));
                t69 = (t69 + (0x9C + ((int)stk + 8)));
                u71 = (*(float *)((t69 + 0x4)));
                u71 = (u71 - u72);
                u72 = (*(float *)((a4 + 0x2A4)));
                if (!(u71 > u72)) {
                    t64 = t66;
                    t65 = ((int)stk + 8);
                    t67 = t70;
                    t77 = ((t66 << 1) + t64);
                    t64 = 0xC;
                    t64 = (t64 + t68);
                    t65 = (t65 + 0x38);
                    t67 = (t67 << 2);
                    t65 = (t65 + t67);
                    *(unsigned int *)((t65 + 0x0)) = t66;
                    t65 = ((int)stk + 8);
                    u72 = (*(float *)((t64 + 0x0)));
                    t64 = 0x4;
                    t64 = (t64 + ((t77 << 2) + (0x9C + ((int)stk + 8))));
                    u71 = (*(float *)((t64 + 0x0)));
                    t65 = (t65 + 0x28);
                    t64 = 0x3CC;
                    u71 = (u71 - u72);
                    u72 = (*(float *)(((0x2A4 + a4) + 0x0)));
                    t64 = (t64 + a4);
                    t64 = (t64 + t66);
                    u71 = (u71 - u72);
                    t67 = (t67 + t65);
                    *(float *)((t67 + 0x0)) = u71;
                    *(unsigned char *)((t64 + 0x0)) = 0x1;
                    t70 = (t70 + 0x1);
                } else {
                    t65 = 0x3CC;
                    t65 = (t65 + a4);
                    t65 = (t65 + t66);
                    *(unsigned char *)((t65 + 0x0)) = 0x0;
                }
                t66 = (t66 + 0x1);
            }
            *(unsigned int *)(((int)stk + 20)) = 0x0;
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            if ((int)t70 > 0) {
                for (;;) {
                    t84 = *(int *)((((*(int *)(((int)stk + 8))) + (((int)stk + 8) + 0x38)) + 0x0));
                    *(unsigned int *)(((int)stk + 12)) = (((t84 << 1) + t84) << 2);
                    t85 = *(int *)(((int)stk + 12));
                    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 8) + 0x6C) + t85);
                    nlSubVector3op(((((int)stk + 8) + 0x6C) + t85), (t85 + (0x9C + ((int)stk + 8))), ((0x324 + a4) + t85));
                    *(float *)(((int)stk + 104)) = (-(*(float *)(((*(int *)(((int)stk + 16))) + 0x0))));
                    *(float *)(((int)stk + 108)) = ((((-(*(float *)((a4 + 0x23C)))) + (-1.0f)) * (*(float *)((((*(int *)(((int)stk + 8))) + (((int)stk + 8) + 0x28)) + 0x0)))) - (*(float *)((a4 + 0x2B4))));
                    *(float *)(((int)stk + 112)) = (-(*(float *)(((*(int *)(((int)stk + 16))) + 0x8))));
                    FUN_0c0dce80(((((t84 << 1) + t84) << 2) + (0x39C + a4)), (((int)stk + 8) + 0x60), ((*(float *)((a4 + 0x228))) / (float)t70));
                    u97 = *(float *)((((((t84 << 1) + t84) << 2) + (0x39C + a4)) + 0x0));
                    u98 = *(float *)((((((t84 << 1) + t84) << 2) + (0x39C + a4)) + 0x8));
                    u99 = (u98 * u98);
                    u99 = u99 + u97 * u97;
                    u100 = *(float *)((a4 + 0x240));
                    u101 = *(float *)((((((t84 << 1) + t84) << 2) + (0x39C + a4)) + 0x4));
                    if (_builtin_sqrtf(u99) > (u101 * u100)) {
                        u102 = *(float *)((((((t84 << 1) + t84) << 2) + (0x39C + a4)) + 0x0));
                        u103 = ((u101 * u100) / _builtin_sqrtf(u99));
                        *(float *)((((((t84 << 1) + t84) << 2) + (0x39C + a4)) + 0x0)) = (u102 * u103);
                        u104 = *(float *)((((((t84 << 1) + t84) << 2) + (0x39C + a4)) + 0x8));
                        u105 = ((u101 * u100) / _builtin_sqrtf(u99));
                        *(float *)((((((t84 << 1) + t84) << 2) + (0x39C + a4)) + 0x8)) = (u104 * u105);
                        u109 = ((u101 * u100) / _builtin_sqrtf(u99));
                    }
                    t111 = *(int *)(((int)stk + 20));
                    *(unsigned int *)(((int)stk + 20)) = (t111 + 0x1);
                    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x4);
                    if ((int)(t111 + 0x1) >= (int)t70) {
                        break;
                    }
                }
                _builtin_sqrtf(u99);
            }
            *(float *)(((int)stk + 100)) = 0.0f;
            *(float *)(((int)stk + 96)) = 0.0f;
            *(float *)(((int)stk + 92)) = 0.0f;
            *(float *)(((int)stk + 88)) = 0.0f;
            *(float *)(((int)stk + 84)) = 0.0f;
            *(float *)(((int)stk + 80)) = 0.0f;
            FUN_0c0dce80((((int)stk + 8) + 0x60), (0x390 + a4), (1.0f / (*(float *)((a4 + 0x228)))));
            nlAddVector((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x60));
            t131 = t70;
            t132 = 0x0;
            for (;;) {
                if ((int)t132 >= (int)(*(int *)((a4 + 0x224)))) {
                    break;
                }
                t131 = t132;
                *(unsigned int *)(((int)stk + 8)) = ((((t132 << 2) + t132) << 2) + (0x254 + a4));
                t131 = (t131 << 1);
                t131 = (t131 + t132);
                t131 = (t131 << 2);
                t131 = (t131 + (0x39C + a4));
                nlSubVector3op((((int)stk + 8) + 0x10), (*(int *)(((int)stk + 8))), (0x244 + a4));
                FUN_0c0dce80((((int)stk + 8) + 0x60), t131, (1.0f / (*(float *)((a4 + 0x228)))));
                nlAddVector((((int)stk + 8) + 0x54), (((int)stk + 8) + 0x60));
                nlPushMatrix(0x0);
                nlInvertMatrix(0x0);
                FUN_0c0db4d0(t131, (((int)stk + 8) + 0x60));
                nlOuterProduct((((int)stk + 8) + 0x10), (((int)stk + 8) + 0x60), (((int)stk + 8) + 0x1C));
                FUN_0c0dce80((((int)stk + 8) + 0x60), (((int)stk + 8) + 0x1C), (1.0f / (*(float *)((((t132 << 2) + (0x22C + a4)) + 0x0)))));
                nlAddVector((((int)stk + 8) + 0x48), (((int)stk + 8) + 0x60));
                nlPopMatrix(0x1);
                t132 = (t132 + 0x1);
            }
            nlAddVector((0x2F8 + a4), (((int)stk + 8) + 0x54));
            nlAddVector((0x308 + a4), (((int)stk + 8) + 0x48));
            *(float *)((a4 + 0x304)) = (FUN_0c0dcea0((0x2F8 + a4)));
            *(float *)((a4 + 0x314)) = (FUN_0c0dcea0((0x308 + a4)));
            if (((*(int *)((a4 + 0x3CC))) != 0) && (t152 = *(int *)((a4 + 0x3D8)), t152 == 0)) {
                *(unsigned int *)((a4 + 0x3D8)) = ((*(int *)((a4 + 0x3D8))) + 0x1);
                FUN_0c0cc3f8((*(int *)(((((*(int *)0xC23A258) & 0x3) << 2) + 0xC200404))), 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                *(unsigned int *)0xC247D04 = ((*(int *)0xC247D04) | 0x10000);
                if ((*(int *)((a4 + 0x3E0))) != 0) {
                    *(unsigned int *)(((*(int *)((a4 + 0x3E0))) + 0x1EC)) = 0xFFFFFFFF;
                    *(unsigned int *)((a4 + 0x3E0)) = 0x0;
                }
                if ((int)(*(int *)((a4 + 0x3DC))) < 0) {
                    *(unsigned int *)((a4 + 0x3DC)) = ((*(int *)((a4 + 0x3DC))) * 0xFFFFFFFF);
                }
            }
            nlPopMatrix(0x1);
            FUN_0c0dc5a0();
            FUN_0c0dcca0((0x2F8 + a4));
            nlMultiMatrix((0x2B8 + a4));
            if ((*(float *)((a4 + 0x314))) > 0.0f) {
                FUN_0c0dcca0((0x244 + a4));
                nlRotate((0x308 + a4), ((int)((((*(float *)((a4 + 0x314))) * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
                FUN_0c0dcc80((0x244 + a4));
            }
            nlGetMatrix((0x2B8 + a4));
            t189 = t131;
            t190 = 0x0;
            u193 = 0.0f;
            for (;;) {
                if ((int)t190 >= (int)(*(int *)((a4 + 0x224)))) {
                    break;
                }
                *(unsigned int *)(((int)stk + 8)) = (((t190 << 1) + t190) << 2);
                t189 = t190;
                t189 = (t189 << 2);
                t189 = (t189 + t190);
                t189 = (t189 << 2);
                FUN_0c0db470(((0x254 + a4) + t189), ((((t190 << 1) + t190) << 2) + (0x324 + a4)));
                t187 = 0x254;
                t188 = 0x324;
                t187 = (t187 + a4);
                t187 = (t187 + t189);
                u192 = (*(float *)((t187 + 0xC)));
                t188 = (t188 + a4);
                t188 = (t188 + (*(int *)(((int)stk + 8))));
                u191 = (*(float *)((t188 + 0x4)));
                u191 = (u191 - u192);
                u192 = (*(float *)((a4 + 0x2A4)));
                u191 = (u191 - u192);
                if (u193 > u191) {
                    t188 = t190;
                    t188 = (t188 << 1);
                    t188 = (t188 + t190);
                    t187 = 0x324;
                    t188 = (t188 << 2);
                    u192 = (*(float *)((((0x254 + a4) + t189) + 0xC)));
                    t187 = (t187 + a4);
                    t188 = (t188 + t187);
                    u191 = (*(float *)((t188 + 0x4)));
                    u191 = (u191 - u192);
                    u192 = (*(float *)((a4 + 0x2A4)));
                    u193 = u191;
                    u193 = (u193 - u192);
                }
                t190 = (t190 + 0x1);
            }
            if (0.0f > u193) {
                nlUnitMatrix();
                FUN_0c0dcc70(0.0f, (-u193), 0.0f);
                nlMultiMatrix((0x2B8 + a4));
                nlGetMatrix((0x2B8 + a4));
                *(float *)((a4 + 0x2FC)) = ((*(float *)((a4 + 0x2FC))) + u193);
            }
            FUN_0c0db470((0x244 + a4), (0x318 + a4));
            u219 = *(float *)((a4 + 0x304));
            u242 = u219;
            if ((*(float *)((a4 + 0x2A8))) > u219) {
                u224 = *(float *)((a4 + 0x2AC));
                u237 = u224;
                if (u224 > (*(float *)((a4 + 0x314)))) {
                    u228 = *(float *)((a4 + 0x2B0));
                    if ((*(float *)((a4 + 0x2CC))) > u228) {
                        *(unsigned short *)((a4 + 0x220)) = ((*(short *)((a4 + 0x220))) + 0x1);
                    }
                    u237 = u228;
                }
                u242 = u237;
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((0x318 + a4)); }
            t244 = *(int *)((a4 + 0x3DC));
            if (((0x1 & t244) != 0) && ((int)t244 <= (int)0x3C)) {
                u253 = u242;
            } else {
                FUN_0c0c47ae((*(short *)((a4 + 0x222))));
            }
            t254 = *(int *)((a4 + 0x3E0));
            u282 = u193;
            if (t254 != 0) {
                nlPushMatrix(0x0);
                u256 = *(float *)((a4 + 0x34));
                FUN_0c0dc5a0();
                nlGetMatrix((0x8C + ((int)stk + 8)));
                nlPopMatrix(0x1);
                FUN_0c0db6b0((0x8C + ((int)stk + 8)));
                nlUnitMatrix();
                FUN_0c0dcc70((*(float *)((a4 + 0x2E8))), 10.0f, (*(float *)((a4 + 0x2F0))));
                nlScale(1.0f, 20.0f, 1.0f);
                nlMultiMatrix((0x8C + ((int)stk + 8)));
                nlScale(((-(u256 * 0.00333333318f)) + 1.5f), ((-(u256 * 0.00333333318f)) + 1.5f), ((-(u256 * 0.00333333318f)) + 1.5f));
                nlMultiMatrixRevOrder(((*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC))) + 0x2AC));
                u271 = ((-(u256 * 0.00333333318f)) + 1.5f);
                FUN_0c0de000((u271 * 20.0f));
                FUN_0c0df4c0(0x1);
                FUN_0c0c4684((*(short *)((a4 + 0x222))));
                nlPopMatrix(0x1);
                u282 = 20.0f;
            } else {
                t279 = t254;
                u285 = u253;
            }
            t287 = t279;
            t288 = 0xC0DB640;
            t289 = 0x0;
            u290 = u285;
            u291 = f4;
            u292 = u282;
            u293 = 1.0f;
            for (;;) {
                if ((int)t289 < (int)(*(int *)((a4 + 0x224)))) {
                    t288 = t289;
                    t287 = 0x360;
                    t288 = (t288 << 1);
                    t288 = (t288 + t289);
                    t287 = (t287 + a4);
                    t288 = (t288 << 2);
                    t287 = (t287 + t288);
                    u292 = (*(float *)((t287 + 0x4)));
                    t287 = ((0x324 + a4) + t288);
                    u293 = (*(float *)((((0x324 + a4) + t288) + 0x4)));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xC0 + ((int)stk + 8))) = *(struct mv3 *)(t287); }
                    t287 = 0xC0C8D06;
                    t297 = FUN_0c0c8d06((0xC0 + ((int)stk + 8)));
                    if ((int)t297 < 0) {
                    } else {
                        u291 = (*(float *)(((int)stk + 204)));
                        if (!(u292 > u291)) {
                            u324 = u291;
                        } else {
                            if (!(u293 > u291)) {
                                *(unsigned int *)(((int)stk + 8)) = ((0x324 + a4) + t288);
                                u290 = (*(float *)((a4 + 0x320)));
                                u291 = (*(float *)((((0x324 + a4) + t288) + 0x0)));
                                u304 = ((*(float *)((((0x324 + a4) + t288) + 0x8))) - u290);
                                u290 = (*(float *)((a4 + 0x318)));
                                u291 = (u291 - u290);
                                t305 = FUN_0c0d9dc0(u291, u304);
                                u290 = u293;
                                u293 = u292;
                                u293 = (u293 - u290);
                                t287 = 0xFFFF8000;
                                *(unsigned int *)(((int)stk + 8)) = (t305 + t287);
                                t288 = 0x3;
                                t306 = (t305 + t287);
                                for (;;) {
                                    if (t288 == 0) {
                                        break;
                                    }
                                    t306 = 0x228;
                                    u290 = (*(float *)((a4 + t306)));
                                    u290 = (u290 * u293);
                                    u290 = (u290 * u293);
                                    u290 = (u290 / 8000.0f);
                                    *(float *)(((int)stk + 4)) = u290;
                                    t306 = (FUN_0c0da2e0());
                                    t306 = 0x64;
                                    t306 = (FUN_0c0e5f1c());
                                    t306 = (t306 - 50);
                                    u311 = u290;
                                    u290 = (float)t306;
                                    u291 = (u311 * u290);
                                    u291 = (u291 / 100.0f);
                                    *(float *)(((int)stk + 4)) = u291;
                                    t306 = (FUN_0c0da2e0());
                                    if ((int)t306 >= 0) {
                                        t306 = (t306 & 0x3FFF);
                                    } else {
                                        t306 = (~t306);
                                        t306 = (t306 + 0x1);
                                        t306 = (t306 & 0x3FFF);
                                        t306 = (~t306);
                                        t306 = (t306 + 0x1);
                                    }
                                    t306 = (t306 + (*(int *)(((int)stk + 8))));
                                    t306 = (FUN_0c08e970((0xC4 + ((int)stk + 4)), (t306 - 8192), u291));
                                    t288 = (t288 - 1);
                                }
                                t318 = t287;
                                u319 = u290;
                            } else {
                                u320 = u291;
                            }
                            t322 = t318;
                            u323 = u319;
                            u324 = u320;
                        }
                        t327 = t322;
                        u328 = u323;
                        u329 = u324;
                    }
                    u290 = u328;
                    u291 = u329;
                    t289 = (t289 + 0x1);
                    t287 = t327;
                    continue;
                }
                break;
            }
            nlPopMatrix(0x1);
        }
        t370 = t340;
    } else {
        if (((*(int *)((a4 + 0x3D0))) == 0) && (t348 = *(int *)((a4 + 0x1EC)), t348 != -1)) {
            *(unsigned char *)(((int)stk + 208)) = 0x15;
            *(unsigned char *)(((int)stk + 209)) = 0x1;
            *(unsigned char *)(((int)stk + 210)) = 0x1;
            *(unsigned char *)(((int)stk + 211)) = 0x0;
            *(unsigned short *)(((int)stk + 214)) = 0x0;
            *(unsigned short *)(((int)stk + 216)) = 0x3E8;
            *(unsigned char *)(((int)stk + 212)) = 0x50;
            *(unsigned char *)(((int)stk + 213)) = 0x0;
            *(float *)(((int)stk + 220)) = (*(float *)((a4 + 0x250)));
            *(unsigned int *)(((0x3E0 + a4) + 0x0)) = (FUN_0c064640(a4, (0xC8 + ((int)stk + 8))));
        } else {
            t355 = t14;
        }
        if ((int)(*(int *)((a4 + 0x3D0))) < (int)(*(int *)((a4 + 0x3D4)))) {
        } else {
            *(unsigned short *)((a4 + 0x220)) = ((*(short *)((a4 + 0x220))) + 0x1);
        }
        t370 = t355;
    }
    *(unsigned int *)((a4 + 0x3D0)) = ((*(int *)((a4 + 0x3D0))) + 0x1);
    t395 = 0x3DC;
    if ((int)(*(int *)((a4 + 0x3DC))) > 0) {
        t380 = *(int *)((a4 + 0x3DC));
        *(unsigned int *)((a4 + 0x3DC)) = (t380 - 1);
        t389 = 0x3DC;
        if ((int)(t380 - 1) <= 0) {
            if ((*(int *)((a4 + 0x3E0))) != 0) {
                *(unsigned int *)(((*(int *)((a4 + 0x3E0))) + 0x1EC)) = 0xFFFFFFFF;
            }
            t389 = (((int (*)(int))(FUN_0c0e19f2))(t370));
        }
        t395 = t389;
    }
    return t395;
}

int FUN_0c0965c0(int a4, int a5, int a6, int a7)
{
    int stk[32];
    register int t1;
    register int t7;
    register int t8;
    int t10;
    register int t11;
    int t12;
    register int t14;
    register int t88;
    register int t84;
    register int t80;
    register int t25;
    register int t30;
    register float u32;
    register float u41;
    register float u44;
    register float u45;
    register int t55;
    register int t62;
    register int t64;
    register int t66;
    register int t67;
    register int t70;
    register float u95;
    register float u97;
    register float u98;
    register float u100;
    register float u101;
    register float u102;
    register float u103;
    register float u104;
    register float u107;
    register float u108;
    register float u122;
    register int t128;
    register int t168;
    register int t169;
    register int t172;
    register int t218;
    int t220;
    register int t221;
    register float u224;
    register int t240;
    register int t250;
    register float t254;
    register float u256;
    register float u257;
    register float u259;
    register float u260;
    register float u263;
    register float u265;
    register float u279;
    register int t296;
    register int t297;
    register int t306;
    register int t299;
    register int t301;
    register int t9;
    register int t13;
    register float u15;
    register float u16;
    register int t87;
    register int t90;
    register int t83;
    register int t86;
    register int t79;
    register int t82;
    register int t75;
    register int t76;
    register int t78;
    register int t147;
    register int t149;
    register float u150;
    register float u151;
    register int t141;
    register int t143;
    register float u144;
    register float u145;
    register float u123;
    register int t219;
    register float u222;
    register float u223;
    register int t226;
    register int t227;
    register float u286;
    register float u287;

    t1 = *(int *)((a4 + 0x30));
    *(unsigned int *)(((int)stk + 44)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    *(unsigned int *)(((int)stk + 12)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 52)) = 0x0;
    FUN_0c0685a4(a4, a5, a6, a7);
    if (((*(int *)((t1 + 0x2EC))) & 15) != 0) {
        *(unsigned int *)((a4 + 0x34)) = 0x1;
    }
    t7 = *(int *)((a4 + 0x38));
    if ((int)t7 <= (int)0x12) {
    } else {
        t8 = 0xC096738;
        t10 = t7;
        t11 = a4;
        t12 = 0x0;
        t14 = (a4 + 0x44);
        for (;;) {
            t88 = t10;
            if ((int)(*(int *)((t14 + 0x0))) > 0) {
                t87 = t9;
                t90 = t11;
            } else {
                t9 = (*(int *)((a4 + 0x34)));
                t84 = t10;
                if (t9 != 0) {
                    t83 = t9;
                    t86 = t11;
                } else {
                    t11 = (*(int *)((a4 + 0x38)));
                    t80 = t10;
                    if ((int)t11 <= (int)0x12) {
                        t79 = t9;
                        t82 = t11;
                    } else {
                        t9 = 0x1D;
                        if ((int)t11 >= (int)t9) {
                            t75 = t9;
                            t76 = t10;
                            t78 = t11;
                        } else {
                            *(unsigned int *)((t14 + 0x0)) = 0x14;
                            t8 = (FUN_0c0da2e0());
                            t8 = (unsigned char)t8;
                            t25 = t8;
                            t8 = 0xC09673C;
                            u15 = (*(float *)((t8 + 0x0)));
                            t8 = 0x4;
                            u16 = (float)t25;
                            u16 = (u16 / u15);
                            u16 = (u16 + 0.5f);
                            *(float *)((t14 + t8)) = u16;
                            t8 = (FUN_0c0da2e0());
                            *(unsigned int *)((t14 + 0x14)) = t8;
                            *(unsigned int *)((t14 + 0x8)) = ((*(int *)((t14 + 0x8))) + 0x1);
                            t8 = (FUN_0c0da2e0());
                            t8 = (unsigned char)t8;
                            t30 = t8;
                            t8 = 0xC096740;
                            u15 = (*(float *)((t8 + 0x0)));
                            t8 = 0xC096744;
                            u32 = *(float *)((t8 + 0x0));
                            t8 = 0x18;
                            u16 = (float)t30;
                            u16 = (u16 * u15);
                            u16 = (u16 / u32);
                            *(float *)((((int)stk + 8) + t8)) = u16;
                            t8 = (FUN_0c0da2e0());
                            t13 = t8;
                            *(int *)((int)stk + 4) = (t14 + 0x20);
                            t11 = t1;
                            t8 = (FUN_0c095f40(t11, (0x1 & t12), (t14 + 0x18), (t14 + 0x1C), (t14 + 0x20)));
                            t11 = t13;
                            t8 = 0x18;
                            u16 = (*(float *)((((int)stk + 8) + t8)));
                            t8 = 0x3C;
                            u16 = (u16 * (FUN_0c0d9e90(t11)));
                            *(float *)((((int)stk + 8) + t8)) = u16;
                            t11 = t13;
                            t8 = 0x18;
                            u16 = (*(float *)((((int)stk + 8) + t8)));
                            t8 = 0x40;
                            u16 = (u16 * (FUN_0c0da410(t11)));
                            *(float *)((((int)stk + 8) + t8)) = u16;
                            t8 = 0xC096750;
                            u16 = (*(float *)((t8 + 0x0)));
                            t8 = 0x18;
                            u15 = (*(float *)((((int)stk + 8) + t8)));
                            t8 = 0xC096754;
                            u41 = *(float *)((t8 + 0x0));
                            t8 = 0x44;
                            u15 = (u15 / u16);
                            *(float *)((((int)stk + 8) + t8)) = (u41 - u15);
                            t11 = 0x0;
                            t8 = (nlPushMatrix(t11));
                            t10 = 0xC0DCCC0;
                            t8 = (nlUnitMatrix());
                            t8 = 0x38;
                            u44 = *(float *)((t1 + t8));
                            t8 = 0x34;
                            u45 = *(float *)((t1 + t8));
                            t8 = 0x30;
                            t8 = (FUN_0c0dcc70((*(float *)((t1 + t8))), u45, u44));
                            t8 = 0x6E;
                            t11 = (*(short *)((t1 + t8)));
                            t8 = (nlRotateAY(t11));
                            t10 = 0xC0DCC70;
                            t8 = (FUN_0c0dcc70(0.0f, 4.0f, 0.0f));
                            t11 = ((int)stk + 8);
                            t11 = (t11 + 0x3C);
                            t8 = (FUN_0c0db470(t11, (t14 + 0x24)));
                            t10 = 0xC0DC4C0;
                            t11 = 0x1;
                            t8 = (nlPopMatrix(t11));
                            t8 = (*(int *)((t14 + 0x8)));
                            if ((int)t8 >= 0) {
                                t8 = (t8 & 0x3);
                            } else {
                                t8 = (~t8);
                                t8 = (t8 + 0x1);
                                t8 = (t8 & 0x3);
                                t8 = (~t8);
                                t8 = (t8 + 0x1);
                            }
                            t55 = t8;
                            t8 = (t8 << 2);
                            t8 = (t8 << 1);
                            t13 = t12;
                            t8 = (t8 + t55);
                            t13 = (t13 << 1);
                            t13 = (t13 + t12);
                            t8 = (t8 << 2);
                            t10 = 0x1C;
                            t13 = (t13 + t8);
                            t9 = 0x0;
                            *(unsigned int *)(((int)stk + 8)) = t9;
                            t13 = (t13 * t10);
                            t13 = (t13 + (0x9C4 + a4));
                            for (;;) {
                                t8 = 0x24;
                                *(unsigned int *)((t13 + 0x18)) = 0x28;
                                u16 = (*(float *)((t14 + t8)));
                                *(float *)((t13 + 0x0)) = u16;
                                t8 = 0x28;
                                u16 = (*(float *)((t14 + t8)));
                                t8 = 0x4;
                                *(float *)((t13 + t8)) = u16;
                                t8 = 0x2C;
                                u16 = (*(float *)((t14 + t8)));
                                t8 = 0x8;
                                *(float *)((t13 + t8)) = u16;
                                t8 = (FUN_0c0da2e0());
                                t8 = (t8 & 0x7FFF);
                                t62 = t8;
                                t8 = 0xC;
                                u16 = (float)t62;
                                u16 = (u16 * 0.5f);
                                u16 = (u16 / 32767.0f);
                                u16 = (u16 + -0.25f);
                                *(float *)((t13 + t8)) = u16;
                                t8 = (FUN_0c0da2e0());
                                t8 = (t8 & 0x7FFF);
                                t64 = t8;
                                t8 = 0x10;
                                u16 = (float)t64;
                                u16 = (u16 * 0.5f);
                                u16 = (u16 / 32767.0f);
                                u16 = (u16 + -0.25f);
                                *(float *)((t13 + t8)) = u16;
                                t8 = (FUN_0c0da2e0());
                                t8 = (t8 & 0x7FFF);
                                t10 = 0x3;
                                t66 = t8;
                                t8 = 0x14;
                                u16 = (float)t66;
                                u16 = (u16 * 0.5f);
                                u16 = (u16 / 32767.0f);
                                u16 = (u16 + -0.25f);
                                *(float *)((t13 + t8)) = u16;
                                t67 = *(int *)(((int)stk + 8));
                                *(unsigned int *)(((int)stk + 8)) = (t67 + 0x1);
                                t13 = (t13 + 0x1C);
                                if ((int)(t67 + 0x1) >= (int)t10) {
                                    break;
                                }
                            }
                            t13 = t12;
                            t13 = (t13 << 1);
                            t10 = 0x8A4;
                            t13 = (t13 + t12);
                            t13 = (t13 << 2);
                            t10 = (t10 + a4);
                            t13 = (t13 << 1);
                            t13 = (t13 + t10);
                            *(unsigned int *)((t13 + 0x0)) = 0x14;
                            t8 = (FUN_0c0da2e0());
                            t10 = 0x4000;
                            t8 = (t8 & t10);
                            t8 = (-t8);
                            t8 = (t8 + 0xE000);
                            *(unsigned int *)((t13 + 0x10)) = t8;
                            t8 = (FUN_0c0da2e0());
                            t8 = (unsigned char)t8;
                            t70 = t8;
                            t8 = 0xC096918;
                            u15 = (*(float *)((t8 + 0x0)));
                            t8 = 0x14;
                            u16 = (float)t70;
                            u16 = (u16 / u15);
                            u16 = (u16 + 0.5f);
                            *(float *)((t13 + t8)) = u16;
                            t8 = 0x24;
                            u16 = (*(float *)((t14 + t8)));
                            t8 = 0x4;
                            *(float *)((t13 + t8)) = u16;
                            t8 = 0x28;
                            u16 = (*(float *)((t14 + t8)));
                            t8 = 0x8;
                            *(float *)((t13 + t8)) = u16;
                            t8 = 0x2C;
                            u16 = (*(float *)((t14 + t8)));
                            t8 = 0xC;
                            *(float *)((t13 + t8)) = u16;
                        }
                        t79 = t75;
                        t80 = t76;
                        t82 = t78;
                    }
                    t83 = t79;
                    t84 = t80;
                    t86 = t82;
                }
                t87 = t83;
                t88 = t84;
                t90 = t86;
            }
            t9 = t87;
            t10 = t88;
            t11 = t90;
            if ((int)(*(int *)((t14 + 0x0))) <= 0) {
                t147 = t9;
                t149 = t11;
                u150 = u15;
                u151 = u16;
            } else {
                t8 = 0x4;
                u15 = 0.0f;
                u16 = (*(float *)((t14 + t8)));
                if (u16 == u15) {
                    t141 = t9;
                    t143 = t11;
                    u144 = u15;
                    u145 = u16;
                } else {
                    t8 = 0x24;
                    u16 = (*(float *)((t14 + t8)));
                    t8 = 0x18;
                    u95 = *(float *)((t14 + t8));
                    t8 = 0x28;
                    t11 = ((int)stk + 8);
                    u97 = (u95 - u16);
                    u16 = (*(float *)((t14 + t8)));
                    t8 = 0x1C;
                    u98 = *(float *)((t14 + t8));
                    t8 = 0x2C;
                    u100 = (u98 - u16);
                    u16 = (*(float *)((t14 + t8)));
                    t8 = 0x20;
                    u101 = *(float *)((t14 + t8));
                    t8 = 0x28;
                    u102 = (u101 - u16);
                    u16 = u100;
                    u16 = (u16 * u100);
                    u103 = u16;
                    u103 = u103 + u97 * u97;
                    u16 = u103;
                    u104 = u16;
                    u104 = u104 + u102 * u102;
                    u16 = u104;
                    u16 = _builtin_sqrtf(u16);
                    *(float *)((((int)stk + 8) + t8)) = u16;
                    t11 = (t11 + 0x1C);
                    t8 = (FUN_0c0a7714(t11, (((int)stk + 8) + 0x20), u97, u100, u102));
                    t10 = 0xC0DC510;
                    t11 = 0x0;
                    t8 = (nlPushMatrix(t11));
                    t8 = 0x20;
                    u107 = *(float *)((t14 + t8));
                    t8 = 0x1C;
                    u108 = *(float *)((t14 + t8));
                    t8 = 0x18;
                    t8 = (FUN_0c0dcc70((*(float *)((t14 + t8))), u108, u107));
                    t11 = (*(int *)(((int)stk + 40)));
                    t8 = (nlRotateAY(t11));
                    t11 = (*(int *)(((int)stk + 36)));
                    t8 = (nlRotateAX(t11));
                    t10 = 0xC0DC950;
                    t11 = (*(int *)((t14 + 0x14)));
                    t8 = (nlRotateAZ(t11));
                    t8 = 0xC096934;
                    u16 = (*(float *)((t8 + 0x0)));
                    t8 = 0x28;
                    t8 = (nlScale(4.0f, 4.0f, ((*(float *)((((int)stk + 8) + t8))) * u16)));
                    t10 = 0xC0DC890;
                    t11 = 0x3FFF;
                    t8 = (nlRotateAY(t11));
                    t8 = 0xC09693C;
                    u16 = (*(float *)((t8 + 0x0)));
                    t8 = 0x28;
                    u122 = *(float *)((((int)stk + 8) + t8));
                    if (!((u122 * u16) > 4.0f)) {
                        u123 = 4.0f;
                    } else {
                        u123 = (u122 * u16);
                    }
                    t8 = (FUN_0c0de000(u123));
                    t10 = (*(int *)((t14 + 0x0)));
                    t8 = 0xC0969F4;
                    u15 = (*(float *)((t8 + 0x0)));
                    t8 = 0x14;
                    t128 = t10;
                    t10 = 0xC0848BC;
                    u16 = (float)t128;
                    u16 = (u16 / u15);
                    *(float *)((((int)stk + 8) + t8)) = u16;
                    t8 = (FUN_0c0848bc(((*(float *)0xC200AE8) * u16), ((*(float *)0xC200AEC) * u16), ((*(float *)0xC200AF0) * u16)));
                    t11 = 0x2B0;
                    t8 = (FUN_0c0c465c(t11));
                    t10 = 0xC0DC4C0;
                    t11 = 0x1;
                    t8 = (nlPopMatrix(t11));
                    t10 = (*(int *)((t14 + 0x0)));
                    if ((int)t10 > (int)(*(int *)(((int)stk + 52)))) {
                        *(unsigned int *)(((int)stk + 52)) = (*(int *)((t14 + 0x0)));
                        *(unsigned int *)(((int)stk + 12)) = t12;
                    }
                }
                t147 = t141;
                t149 = t143;
                u150 = u144;
                u151 = u145;
            }
            u15 = u150;
            u16 = u151;
            t9 = t147;
            t11 = t149;
            t12 = (t12 + 0x1);
            t10 = 0xC;
            *(unsigned int *)((t14 + 0x0)) = ((*(int *)((t14 + 0x0))) - 1);
            t14 = (t14 + 0x30);
            if ((int)t12 < (int)t10) continue;
            break;
        }
    }
    if ((int)(*(int *)(((int)stk + 12))) >= 0) {
        t168 = *(int *)(((int)stk + 12));
        t169 = *(int *)((t1 + 0xBC));
        *(unsigned int *)(((int)stk + 8)) = (((((t168 << 1) + t168) << 2) << 2) + (a4 + 0x44));
        nlGetAverageVector(((*(int *)(((int)stk + 8))) + 0x18), ((((((t168 << 1) + t168) << 2) << 2) + (a4 + 0x44)) + 0x24), (((((((t169 << 1) + t169) << 2) << 2) << 2) + 0xC23F268) + 0x84), 0.199999988f, 0.799999952f);
    } else {
        t172 = *(int *)((t1 + 0xBC));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((((t172 << 1) + t172) << 2) << 2) << 2) + 0xC23F268) + 0x84)) = *(struct mv3 *)((t1 + 0x30)); }
    }
    nlPushMatrix(0x0);
    FUN_0c0dbda0((*(int *)((t1 + 0x3E4))));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0xD, 0.5f, (1.0f + 1.0f));
    FUN_0c0dbda0(((*(int *)((t1 + 0x3E4))) + 0x280));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0xB, 1.0f, 1.39999998f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x9, 1.5f, 1.39999998f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x7, (1.0f + 1.0f), 1.39999998f);
    FUN_0c0dbda0(((*(int *)((t1 + 0x3E4))) + 0x2C0));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x5, 1.0f, 1.0f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x3, 1.5f, 1.0f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x1, (1.0f + 1.0f), 1.0f);
    FUN_0c0dbda0(((*(int *)((t1 + 0x3E4))) + 0x340));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0xB, 1.0f, 1.39999998f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x9, 1.5f, 1.39999998f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x7, (1.0f + 1.0f), 1.39999998f);
    FUN_0c0dbda0(((*(int *)((t1 + 0x3E4))) + 0x380));
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x5, 1.0f, 1.0f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x3, 1.5f, 1.0f);
    FUN_0c09635c((*(int *)((a4 + 0x38))), 0x1, (1.0f + 1.0f), 1.0f);
    t218 = (nlPopMatrix(0x1));
    t220 = 0x0;
    t221 = (0x284 + a4);
    u224 = 1.39999998f;
    for (;;) {
        if (((*(int *)((t221 + 0x18))) == 0) && ((t226 = *(int *)((a4 + 0x38)), t219 = 0xE, (int)t226 < (int)t219) && (t227 = *(int *)((a4 + 0x34)), t218 = t227, t218 == 0))) {
            t218 = (FUN_0c0da2e0());
            t218 = (t218 << 1);
            *(unsigned int *)(((int)stk + 12)) = t218;
            t218 = (FUN_0c0da2e0());
            t219 = 0xC0D9E90;
            t218 = (t218 << 1);
            *(unsigned int *)(((int)stk + 8)) = t218;
            *(unsigned int *)((t221 + 0x18)) = 0xE;
            t219 = 0xC0DA410;
            t218 = 0xC;
            *(float *)((t221 + t218)) = ((FUN_0c0d9e90((*(int *)(((int)stk + 12))))) * 4.0f);
            t218 = 0x10;
            *(float *)((t221 + t218)) = ((FUN_0c0da410((*(int *)(((int)stk + 12))))) * 4.0f);
            t218 = 0xC;
            t219 = 0xC0D9E90;
            u223 = (*(float *)((t221 + t218)));
            t218 = 0x14;
            u223 = (u223 * (FUN_0c0da410((*(int *)(((int)stk + 8))))));
            *(float *)((t221 + t218)) = u223;
            t218 = 0xC;
            t219 = (((int)stk + 8) + 0x3C);
            u223 = (*(float *)((t221 + t218)));
            t219 = (t219 + 0x8);
            u223 = (u223 * (FUN_0c0d9e90((*(int *)(((int)stk + 8))))));
            *(float *)((t221 + t218)) = u223;
            t240 = t219;
            *(int *)((int)stk + 4) = t240;
            t218 = (FUN_0c095f40(t1, (0x1 & t220), (((int)stk + 8) + 0x3C), ((((int)stk + 8) + 0x3C) + 0x4), t240));
            t218 = 0x4;
            u223 = (*(float *)(((((int)stk + 8) + 0x3C) + 0x0)));
            *(float *)((t221 + 0x0)) = u223;
            u222 = (*(float *)(((((int)stk + 8) + 0x3C) + t218)));
            *(float *)((t221 + t218)) = u222;
            t218 = 0x8;
            u223 = (*(float *)(((((int)stk + 8) + 0x3C) + t218)));
            *(float *)((t221 + t218)) = u223;
        }
        t219 = (*(int *)((t221 + 0x18)));
        if (t219 != 0) {
            u223 = (*(float *)((t221 + 0x0)));
            u222 = 0.0f;
            if (u223 != u222) {
                t250 = *(int *)((t221 + 0x18));
                t218 = 0xC096CFC;
                t219 = 0xC0E5DC0;
                *(unsigned int *)(((int)stk + 8)) = t250;
                u222 = (*(float *)((t218 + 0x0)));
                t218 = 0x8;
                u223 = (float)t250;
                u224 = u223;
                u224 = (u224 / u222);
                u223 = 1.0f;
                u223 = (u223 - u224);
                u224 = (u224 * (1.0f + 1.0f));
                *(float *)((((int)stk + 8) + t218)) = u223;
                *(volatile int *)(((int)stk + 8));
                t218 = 0xE;
                t218 = (FUN_0c0e5dc0());
                t254 = FUN_0c0da410(t218);
                t219 = 0xC0DC510;
                t218 = 0x10;
                *(float *)((((int)stk + 8) + t218)) = t254;
                t218 = (nlPushMatrix(0x0));
                t218 = 0x8;
                t219 = 0xC0DCC70;
                u256 = *(float *)((t221 + t218));
                t218 = 0x10;
                u257 = *(float *)((((int)stk + 8) + t218));
                t218 = 0x14;
                u223 = (*(float *)((t221 + t218)));
                t218 = 0x4;
                u259 = *(float *)((t221 + t218));
                t218 = 0x10;
                u260 = u256;
                u260 = u260 + u257 * u223;
                u223 = (*(float *)((t221 + t218)));
                t218 = 0xC;
                u263 = u259;
                u263 = u263 + u257 * u223;
                u223 = (*(float *)((t221 + t218)));
                u265 = (*(float *)((t221 + 0x0)));
                u265 = u265 + u257 * u223;
                t218 = (FUN_0c0dcc70(u265, u263, u260));
                t219 = 0xC0DC890;
                t218 = 0x3CE;
                t218 = (nlRotateAY((*(short *)(((*(int *)(((int)stk + 44))) + t218)))));
                t219 = 0xC0DC6E0;
                t218 = 0x3CC;
                t218 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 44))) + t218)))));
                t218 = 0xC096D18;
                t219 = 0xC0DCB80;
                u223 = (*(float *)((t218 + 0x0)));
                t218 = 0xC;
                u224 = (u224 + u223);
                *(float *)((((int)stk + 8) + t218)) = u224;
                t218 = (nlScale(u224, u224, u224));
                t219 = 0xC0DE000;
                t218 = 0xC;
                t218 = (FUN_0c0de000((*(float *)((((int)stk + 8) + t218)))));
                t219 = 0xC200AFC;
                t218 = 0x8;
                u223 = (*(float *)((((int)stk + 8) + t218)));
                u279 = *(float *)((t219 + 0x0));
                t219 = 0xC200AF4;
                t218 = (FUN_0c0848bc(((*(float *)((t219 + 0x0))) * u223), ((*(float *)0xC200AF8) * u223), (u279 * u223)));
                t219 = 0xC0C465C;
                t218 = (FUN_0c0c465c(0x291));
                t218 = (nlPopMatrix(0x1));
            } else {
                u286 = u222;
                u287 = u223;
            }
            u222 = u286;
            u223 = u287;
            t219 = (*(int *)((t221 + 0x18)));
            t219 = (t219 - 1);
            *(unsigned int *)((t221 + 0x18)) = t219;
        }
        t220 = (t220 + 0x1);
        t221 = (t221 + 0x1C);
        if ((int)t220 < (int)0x38) continue;
        break;
    }
    FUN_0c096094((0x9C4 + a4), 0x90);
    FUN_0c084800(0.799999952f, 0.799999952f, 1.0f);
    FUN_0c095fa0((0x8A4 + a4), 0xC);
    t296 = FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
    t297 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x3C)) = (t297 - 1);
    t306 = t296;
    if ((int)(t297 - 1) < 0) {
        *(unsigned int *)((a4 + 0x3C)) = (*(int *)((a4 + 0x40)));
        t299 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t299 + 0x1);
        t301 = 0x40;
        if ((int)(t299 + 0x1) > (int)0x32) {
            t301 = (FUN_0c0e19f2());
        }
        t306 = t301;
    }
    return t306;
}
