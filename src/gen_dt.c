/* Straight-line functions with calls and guards (batch gen_dt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0108c6(void);
int FUN_0c0109b4(void);
int FUN_0c0112b0(int);
int FUN_0c012570(int);
extern int FUN_0c015436();
int FUN_0c0154c0(int, int, int, float, float);
int FUN_0c0156ea(int, int, int, int);
int FUN_0c0159a2(int, int);
int FUN_0c0198ac(void);
int FUN_0c01cdf2(int);
int FUN_0c01db0e(int, int, int, int);
int FUN_0c01fe82(int);
int FUN_0c0236ce(int);
extern int FUN_0c02a19a();
int FUN_0c02a220(int);
int FUN_0c02a35a(int);
int FUN_0c02a416(int);
int FUN_0c03442c(int, int, int, int, int, int);
int FUN_0c034e2c(int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c0350a4(int, int, int, int);
int FUN_0c03593a(int);
int FUN_0c035b26(int);
int FUN_0c035ce4(int);
int FUN_0c035e9c(int);
int FUN_0c03611c(int);
int FUN_0c038732(int, int, int, int, int, int, int);
int FUN_0c038d08(int, int, int, int);
int FUN_0c039288(int, int, int);
int FUN_0c039354(int);
int FUN_0c03e8dc(int);
int FUN_0c042fd0(int);
int FUN_0c0430c0(int, float);
int FUN_0c043338(int);
int FUN_0c046442(int);
int FUN_0c04685c(int, int, float, float);
int FUN_0c046cc0(int);
int FUN_0c07e1e8(void);
int FUN_0c084104(void);
int FUN_0c0855b0(void);
int FUN_0c0a5c18(void);
int FUN_0c0bbbf4(int);
int FUN_0c0bf928(void);
int FUN_0c0c0384(void);
int FUN_0c0c45d0(void);
int FUN_0c0c465c(int);
int FUN_0c0c4a3c(int);
int FUN_0c0c4d50(void);
int FUN_0c0c4e78(int);
int FUN_0c0c4f66(void);
int FUN_0c0c60d0(int, int, int);
int FUN_0c0cbc28(void);
int FUN_0c0cbde4(void);
int FUN_0c0cc384(void);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cdf68(void);
int FUN_0c0ce708(void);
int FUN_0c0cea9c(void);
int FUN_0c0d8940(void);
int FUN_0c0d9630(void);
float FUN_0c0da410(int);
int FUN_0c0daf60(int, int);
int FUN_0c0db0a0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dc0b0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dd2f0(int, float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e14a0(void);
extern int FUN_0c0e19f2();
int FUN_0c0e2400(int, int, int, int, int, int, int, int, int, int, int);
extern int FUN_0c0e2a4c();
int FUN_0c0e631c(int, int, int);
int FUN_0c0e6400(void);
int FUN_0c0e6620(int, int);
int FUN_0c210416(void);
int FUN_0c219808(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buGetDiskFree(int, int);
#pragma inline_asm(iaOcbi)
static void iaOcbi(void *p)
{
    .DATA.W H'0493
}
int kmSetPixelClipping(int, int, int, int);
int kmiFlipVertexBuffer(int);
int kmiReadRegister(int);
int kmiStartRenderTextureEntry(int, int, int, int, int, int, int, int, int, int);
int kmiWriteRegister(int, int);
int mpdrv_insertnop(int);
int mpdrv_v2p(int);
int nlInitMatrix(int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int syCfgInit(int);
int syHwInit(void);
int syHwInit2(void);
int syRtcInit(void);
int syRtcSetServerMode(int);
int mpdrv_setcmd(int a4, int a5, int a6, int a7, int a8, int a9);
int kmRenderTextureDirect(int a4);
int FUN_0c04356c(int a4);
int FUN_0c015d7e(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c01ff28(int a4, int a5, int a6, int a7);
int FUN_0c039c6a(int a4, int a5, int a6, int a7);
void FUN_0c22b402(int a4, int a5);
int FUN_0c0106a0(void);
int FUN_0c047948(int a4, int a5, int a6, int a7);
int FUN_0c0e3a08(int a4, int a5);
void FUN_0c02ddf8(int a4);
int FUN_0c0e2b0e(int a4);
int FUN_0c06742c(int a4, int a5, int a6, int a7);

int mpdrv_setcmd(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t115;
    int t3;
    int t4;
    int t19;
    int t22;
    int t24;
    int t25;
    int t26;
    int t30;
    int t31;
    int t41;
    int t37;
    int t38;
    int t39;
    int t40;
    int t52;
    int t47;
    int t48;
    int t49;
    int t50;
    int t68;
    int t69;
    int t70;
    int t81;
    int t82;
    int t83;
    int t84;
    int t99;
    int t102;
    int t103;
    int t104;
    int t105;
    int t6;
    int t7;
    int t8;
    int t9;
    int t60;
    int stk[17];

    *(unsigned char *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 32)) = a6;
    t0 = *(int *)0xC98E18C;
    t115 = 0xFFFFFFFF;
    if ((*(signed char *)((((t0 + 0x28) + (a4 * 0x2C)) + 0x6))) != 0) {
    } else {
        *(unsigned char *)((((t0 + 0x28) + (a4 * 0x2C)) + 0x6)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)(((int)stk + 16)) = ((a7 + a9) + 0x3);
        t3 = *(signed char *)((a4 + 0xC2382AC));
        *(unsigned char *)(((((int)stk + 8) + 0x10) + 0x0)) = t3;
        *(unsigned int *)(((int)stk + 20)) = (unsigned char)(0xC0 & t3);
        *(unsigned int *)(((int)stk + 8)) = (((int)(unsigned char)(0xC0 & t3) >> 6) & 0x3);
        t4 = *(int *)0xC98E18C;
        if (((int)(*(int *)((t4 + 0x10CC))) > 0) && ((t6 = *(int *)((t4 + 0xFD8)), (int)t6 > 0) && (t7 = *(int *)((t4 + 0xFCC)), t8 = *(int *)((t7 + 0x0)), t9 = *(int *)(((int)stk + 8)), t9 == (0x3 & (short)((unsigned int)t8 >> 16))))) {
            mpdrv_insertnop((*(int *)((t4 + 0x10CC))));
        }
        t19 = *(int *)0xC98E18C;
        *(unsigned int *)((t19 + 0xFCC)) = ((*(int *)((t19 + 0xFCC))) + ((*(int *)(((0xFD8 + t19) + 0x0))) << 2));
        t22 = *(int *)(((int)stk + 8));
        t24 = *(int *)(((*(int *)0xC98E18C) + 0xFCC));
        *(unsigned int *)(((int)stk + 28)) = (unsigned char)(a7 + a9);
        *(unsigned int *)((t24 + 0x0)) = ((t22 << 16) | (unsigned char)(a7 + a9));
        t25 = *(int *)0xC98E18C;
        t26 = *(int *)(((0x10B4 + t25) + 0x0));
        *(unsigned int *)(((t24 + 0x4) + 0x0)) = (mpdrv_v2p((*(int *)(((a4 << 2) + ((t25 + 0xFE8) + (((((t26 << 1) + t26) << 2) << 2) << 1)))))));
        t30 = *(int *)(((int)stk + 32));
        *(unsigned int *)(((int)stk + 8)) = (unsigned char)(*(signed char *)(((int)stk + 12)));
        t31 = *(signed char *)(((int)stk + 24));
        if ((*(int *)((0x10C4 + (*(int *)0xC98E18C)))) == 1) {
            *(unsigned int *)((((t24 + 0x4) + 0x4) + 0x0)) = (((((((*(int *)(((int)stk + 8))) << 16) << 8) & 0xFF000000) | (((unsigned char)t31 << 16) & 0xFF0000)) | (((*(int *)(((int)stk + 20))) << 8) & 0xFF00)) | (*(int *)(((int)stk + 28))));
            t41 = (((t24 + 0x4) + 0x4) + 0x4);
            if ((int)a7 > 0) {
                t37 = t30;
                t38 = 0x0;
                t39 = (((t24 + 0x4) + 0x4) + 0x4);
                for (;;) {
                    t40 = *(int *)((t37 + 0x0));
                    t37 = (t37 + 0x4);
                    t38 = (t38 + 0x1);
                    *(unsigned int *)((t39 + 0x0)) = t40;
                    t39 = (t39 + 0x4);
                    if ((int)t38 >= (int)a7) {
                        break;
                    }
                }
                t41 = t39;
            }
            t60 = t41;
        } else {
            *(unsigned int *)((((t24 + 0x4) + 0x4) + 0x0)) = ((((((*(int *)(((int)stk + 20))) << 16) & 0xFF0000) | (((unsigned char)t31 << 8) & 0xFF00)) | ((((a7 + a9) << 16) << 8) & 0xFF000000)) | (*(int *)(((int)stk + 8))));
            t52 = (((t24 + 0x4) + 0x4) + 0x4);
            if ((int)a7 > 0) {
                t47 = t30;
                t48 = 0x0;
                t49 = (((t24 + 0x4) + 0x4) + 0x4);
                for (;;) {
                    t50 = *(int *)((t47 + 0x0));
                    t47 = (t47 + 0x4);
                    t48 = (t48 + 0x1);
                    *(unsigned int *)((t49 + 0x0)) = ((((((t50 << 16) << 8) & 0xFF000000) | ((t50 << 8) & 0xFF0000)) | (((int)t50 >> 8) & 0xFF00)) | (unsigned char)(signed char)((unsigned int)((unsigned int)t50 >> 16) >> 8));
                    t49 = (t49 + 0x4);
                    if ((int)t48 >= (int)a7) {
                        break;
                    }
                }
                t52 = t49;
            }
            t60 = t52;
        }
        if ((*(int *)((0x10C4 + (*(int *)0xC98E18C)))) == 1) {
            if ((int)a9 > 0) {
                t68 = a8;
                t69 = 0x0;
                t70 = t60;
                for (;;) {
                    t69 = (t69 + 0x1);
                    *(unsigned int *)((t70 + 0x0)) = ((((((*(signed char *)((t68 + 0x1))) << 16) & 0xFF0000) | (((*(signed char *)((t68 + 0x2))) << 8) & 0xFF00)) | ((((*(signed char *)((t68 + 0x0))) << 16) << 8) & 0xFF000000)) | (unsigned char)(*(signed char *)((t68 + 0x3))));
                    t70 = (t70 + 0x4);
                    t68 = (t68 + 0x4);
                    if ((int)t69 >= (int)a9) {
                        break;
                    }
                }
            }
        } else {
            if ((int)a9 > 0) {
                t81 = 0x0;
                t82 = a8;
                t83 = t60;
                for (;;) {
                    t84 = *(int *)((t82 + 0x0));
                    t82 = (t82 + 0x4);
                    t81 = (t81 + 0x1);
                    *(unsigned int *)((t83 + 0x0)) = t84;
                    t83 = (t83 + 0x4);
                    if ((int)t81 >= (int)a9) {
                        break;
                    }
                }
            }
        }
        *(unsigned int *)(((*(int *)0xC98E18C) + 0xFD8)) = (*(int *)(((int)stk + 16)));
        t99 = *(int *)0xC98E18C;
        *(unsigned int *)((t99 + 0xFDC)) = ((*(int *)((t99 + 0xFDC))) + ((*(int *)(((int)stk + 16))) << 2));
        t102 = *(int *)0xC98E18C;
        t103 = *(int *)0xC98E18C;
        t104 = *(int *)((t102 + 0xFE0));
        *(unsigned int *)((t102 + 0xFE0)) = (t104 + 0x1);
        *(unsigned int *)((((t103 + 0x28) + (a4 * 0x2C)) + 0x18)) = ((t104 + 0x1) - 1);
        t105 = *(int *)0xC98E18C;
        *(unsigned int *)((t105 + 0xFE0)) = ((*(int *)((t105 + 0xFE0))) & 0x7FFFFFFF);
        if ((*(int *)(((*(int *)0xC98E18C) + 0xFE0))) == 0) {
            *(unsigned int *)(((*(int *)0xC98E18C) + 0xFE0)) = 0x1;
        }
        t115 = (*(int *)(((((*(int *)0xC98E18C) + 0x28) + (a4 * 0x2C)) + 0x18)));
    }
    return t115;
}

int kmRenderTextureDirect(int a4)
{
    int t0;
    int t5;
    int t841;
    int t845;
    int t9;
    int t17;
    int t24;
    int t26;
    int t27;
    int t35;
    int t39;
    int t101;
    int t105;
    int t161;
    int t169;
    int t173;
    int t235;
    int t239;
    int t297;
    int t299;
    int t300;
    int t308;
    int t312;
    int t374;
    int t378;
    int t434;
    int t442;
    int t446;
    int t508;
    int t512;
    int t570;
    int t572;
    int t573;
    int t581;
    int t585;
    int t647;
    int t651;
    int t707;
    int t715;
    int t719;
    int t781;
    int t785;
    int t1217;
    int t1127;
    int t1131;
    int t849;
    int t856;
    int t858;
    int t859;
    int t867;
    int t871;
    int t933;
    int t937;
    int t993;
    int t1001;
    int t1005;
    int t1067;
    int t1071;
    int t1134;
    int t1136;
    int t1153;
    int t1179;
    int t1181;
    int t1157;
    int t1226;
    int t1209;
    int t1140;
    int t1146;
    int t1201;
    int stk[12];

    t0 = FUN_0c219808(a4);
    if (t0 != 0) {
        kmiFlipVertexBuffer((*(int *)0xC239A9C));
        t1226 = t0;
    } else {
        *(unsigned int *)0xC952864 = ((unsigned int)((unsigned int)((unsigned int)(((*(int *)((a4 + 0xC))) << 2) << 2) >> 2) >> 2) >> 2);
        *(unsigned int *)0xC952868 = ((*(int *)((a4 + 0x1C))) | 0x1000000);
        t5 = *(int *)0xC952658;
        *(unsigned int *)0xC95266C = 0x0;
        t841 = 0xC952508;
        t845 = 0x0;
        if ((*(int *)0xC952508) != 0) {
            for (;;) {
                t9 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
                if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952524)) {
                    break;
                }
                if ((*(int *)0xC952508) == 0) {
                    if (0x0 != 0) {
                        return 0xC952524;
                    }
                    *(unsigned int *)0xC95266C = 0x0;
                    if ((*(int *)0xC952504) != 0) {
                        for (;;) {
                            t17 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
                            if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952520)) {
                                break;
                            }
                            if ((*(int *)0xC952504) == 0) {
                                if (0x0 != 0) {
                                    *(unsigned int *)0xC952504 = 0x0;
                                    return 0xC952520;
                                }
                                *(unsigned int *)0xC952674 = 0x1;
                                *(unsigned int *)(((int)stk + 16)) = (*(int *)0xC9525B0);
                                *(unsigned int *)(((int)stk + 4)) = (*(int *)0xC9525B4);
                                t24 = *(int *)((a4 + 0x10));
                                *(unsigned int *)(((int)stk + 12)) = t24;
                                t26 = *(int *)((a4 + 0xC));
                                if ((unsigned int)t24 > (unsigned int)(*(int *)0xC952348)) {
                                    t27 = *(int *)0xC952348;
                                    *(unsigned int *)(((int)stk + 8)) = t26;
                                    if ((unsigned int)t26 > (unsigned int)(*(int *)0xC952344)) {
                                        kmSetPixelClipping(0x0, 0x0, (*(int *)0xC952344), t27);
                                        *(unsigned int *)0xC95286C = (*(int *)0xC9525B0);
                                        *(unsigned int *)0xC952870 = (*(int *)0xC9525B4);
                                        *(unsigned int *)0xC9525B0 = (*(int *)(((int)stk + 16)));
                                        *(unsigned int *)0xC9525B4 = (*(int *)(((int)stk + 4)));
                                        t35 = kmiStartRenderTextureEntry(0xC952860, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
                                        *(unsigned int *)0xC95266C = 0x0;
                                        if ((*(int *)0xC952504) != 0) {
                                            for (;;) {
                                                t39 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
                                                if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952520)) {
                                                    break;
                                                }
                                                if ((*(int *)0xC952504) == 0) {
                                                    if (0x0 != 0) {
                                                        *(unsigned int *)0xC952674 = 0x0;
                                                        return 0xC952520;
                                                    }
                                                    kmiWriteRegister(0x8, 0x1);
                                                    kmiWriteRegister(0x8, 0x0);
                                                    kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                                    kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                                    kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                                    kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                                    kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                                    kmiWriteRegister(0x144, 0x80000000);
                                                    kmiReadRegister(0x144);
                                                    *(unsigned int *)0xC952668 = 0x0;
                                                    *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                                    *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                                    *(unsigned int *)0xC952508 = 0x1;
                                                    *(unsigned int *)0xC952678 = 0x1;
                                                    *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                                    return 0x0;
                                                }
                                            }
                                            if (0x1 != 0) {
                                                *(unsigned int *)0xC952674 = 0x0;
                                                return 0xC952520;
                                            }
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            *(unsigned int *)0xC952668 = 0x0;
                                            *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                            *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                            *(unsigned int *)0xC952508 = 0x1;
                                            *(unsigned int *)0xC952678 = 0x1;
                                            *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                            return 0x0;
                                        }
                                        if (0x0 != 0) {
                                            *(unsigned int *)0xC952674 = 0x0;
                                            return t35;
                                        }
                                        kmiWriteRegister(0x8, 0x1);
                                        kmiWriteRegister(0x8, 0x0);
                                        kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                        kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                        kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                        kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                        kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                        kmiWriteRegister(0x144, 0x80000000);
                                        kmiReadRegister(0x144);
                                        *(unsigned int *)0xC952668 = 0x0;
                                        *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                        *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                        *(unsigned int *)0xC952508 = 0x1;
                                        *(unsigned int *)0xC952678 = 0x1;
                                        *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                        return 0x0;
                                    }
                                    kmSetPixelClipping(0x0, 0x0, (*(int *)(((int)stk + 8))), t27);
                                    *(unsigned int *)0xC95286C = (*(int *)0xC9525B0);
                                    *(unsigned int *)0xC952870 = (*(int *)0xC9525B4);
                                    *(unsigned int *)0xC9525B0 = (*(int *)(((int)stk + 16)));
                                    *(unsigned int *)0xC9525B4 = (*(int *)(((int)stk + 4)));
                                    t101 = kmiStartRenderTextureEntry(0xC952860, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
                                    *(unsigned int *)0xC95266C = 0x0;
                                    if ((*(int *)0xC952504) != 0) {
                                        for (;;) {
                                            t105 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
                                            if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952520)) {
                                                break;
                                            }
                                            if ((*(int *)0xC952504) == 0) {
                                                if (0x0 != 0) {
                                                    *(unsigned int *)0xC952674 = 0x0;
                                                    return 0xC952520;
                                                }
                                                kmiWriteRegister(0x8, 0x1);
                                                kmiWriteRegister(0x8, 0x0);
                                                kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                                kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                                kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                                kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                                kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                                kmiWriteRegister(0x144, 0x80000000);
                                                kmiReadRegister(0x144);
                                                *(unsigned int *)0xC952668 = 0x0;
                                                *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                                *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                                *(unsigned int *)0xC952508 = 0x1;
                                                *(unsigned int *)0xC952678 = 0x1;
                                                *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                                return 0x0;
                                            }
                                        }
                                        if (0x1 != 0) {
                                            *(unsigned int *)0xC952674 = 0x0;
                                            return 0xC952520;
                                        }
                                        kmiWriteRegister(0x8, 0x1);
                                        kmiWriteRegister(0x8, 0x0);
                                        kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                        kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                        kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                        kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                        kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                        kmiWriteRegister(0x144, 0x80000000);
                                        kmiReadRegister(0x144);
                                        *(unsigned int *)0xC952668 = 0x0;
                                        *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                        *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                        *(unsigned int *)0xC952508 = 0x1;
                                        *(unsigned int *)0xC952678 = 0x1;
                                        *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                        return 0x0;
                                    }
                                    if (0x0 != 0) {
                                        *(unsigned int *)0xC952674 = 0x0;
                                        return t101;
                                    }
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                    kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                    kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                    kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                    kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC952668 = 0x0;
                                    *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                    *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                    *(unsigned int *)0xC952508 = 0x1;
                                    *(unsigned int *)0xC952678 = 0x1;
                                    *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                    return 0x0;
                                }
                                t161 = *(int *)(((int)stk + 12));
                                *(unsigned int *)(((int)stk + 8)) = t26;
                                if ((unsigned int)t26 > (unsigned int)(*(int *)0xC952344)) {
                                    kmSetPixelClipping(0x0, 0x0, (*(int *)0xC952344), t161);
                                    *(unsigned int *)0xC95286C = (*(int *)0xC9525B0);
                                    *(unsigned int *)0xC952870 = (*(int *)0xC9525B4);
                                    *(unsigned int *)0xC9525B0 = (*(int *)(((int)stk + 16)));
                                    *(unsigned int *)0xC9525B4 = (*(int *)(((int)stk + 4)));
                                    t169 = kmiStartRenderTextureEntry(0xC952860, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
                                    *(unsigned int *)0xC95266C = 0x0;
                                    if ((*(int *)0xC952504) != 0) {
                                        for (;;) {
                                            t173 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
                                            if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952520)) {
                                                break;
                                            }
                                            if ((*(int *)0xC952504) == 0) {
                                                if (0x0 != 0) {
                                                    *(unsigned int *)0xC952674 = 0x0;
                                                    return 0xC952520;
                                                }
                                                kmiWriteRegister(0x8, 0x1);
                                                kmiWriteRegister(0x8, 0x0);
                                                kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                                kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                                kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                                kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                                kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                                kmiWriteRegister(0x144, 0x80000000);
                                                kmiReadRegister(0x144);
                                                *(unsigned int *)0xC952668 = 0x0;
                                                *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                                *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                                *(unsigned int *)0xC952508 = 0x1;
                                                *(unsigned int *)0xC952678 = 0x1;
                                                *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                                return 0x0;
                                            }
                                        }
                                        if (0x1 != 0) {
                                            *(unsigned int *)0xC952674 = 0x0;
                                            return 0xC952520;
                                        }
                                        kmiWriteRegister(0x8, 0x1);
                                        kmiWriteRegister(0x8, 0x0);
                                        kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                        kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                        kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                        kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                        kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                        kmiWriteRegister(0x144, 0x80000000);
                                        kmiReadRegister(0x144);
                                        *(unsigned int *)0xC952668 = 0x0;
                                        *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                        *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                        *(unsigned int *)0xC952508 = 0x1;
                                        *(unsigned int *)0xC952678 = 0x1;
                                        *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                        return 0x0;
                                    }
                                    if (0x0 != 0) {
                                        *(unsigned int *)0xC952674 = 0x0;
                                        return t169;
                                    }
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                    kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                    kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                    kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                    kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC952668 = 0x0;
                                    *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                    *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                    *(unsigned int *)0xC952508 = 0x1;
                                    *(unsigned int *)0xC952678 = 0x1;
                                    *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                    return 0x0;
                                }
                                kmSetPixelClipping(0x0, 0x0, (*(int *)(((int)stk + 8))), t161);
                                *(unsigned int *)0xC95286C = (*(int *)0xC9525B0);
                                *(unsigned int *)0xC952870 = (*(int *)0xC9525B4);
                                *(unsigned int *)0xC9525B0 = (*(int *)(((int)stk + 16)));
                                *(unsigned int *)0xC9525B4 = (*(int *)(((int)stk + 4)));
                                t235 = kmiStartRenderTextureEntry(0xC952860, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
                                *(unsigned int *)0xC95266C = 0x0;
                                if ((*(int *)0xC952504) != 0) {
                                    for (;;) {
                                        t239 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
                                        if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952520)) {
                                            break;
                                        }
                                        if ((*(int *)0xC952504) == 0) {
                                            if (0x0 != 0) {
                                                *(unsigned int *)0xC952674 = 0x0;
                                                return 0xC952520;
                                            }
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            *(unsigned int *)0xC952668 = 0x0;
                                            *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                            *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                            *(unsigned int *)0xC952508 = 0x1;
                                            *(unsigned int *)0xC952678 = 0x1;
                                            *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                            return 0x0;
                                        }
                                    }
                                    if (0x1 != 0) {
                                        *(unsigned int *)0xC952674 = 0x0;
                                        return 0xC952520;
                                    }
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                    kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                    kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                    kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                    kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC952668 = 0x0;
                                    *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                    *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                    *(unsigned int *)0xC952508 = 0x1;
                                    *(unsigned int *)0xC952678 = 0x1;
                                    *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                    return 0x0;
                                }
                                if (0x0 != 0) {
                                    *(unsigned int *)0xC952674 = 0x0;
                                    return t235;
                                }
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC952668 = 0x0;
                                *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                *(unsigned int *)0xC952508 = 0x1;
                                *(unsigned int *)0xC952678 = 0x1;
                                *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                return 0x0;
                            }
                        }
                        if (0x1 != 0) {
                            *(unsigned int *)0xC952504 = 0x0;
                            return 0xC952520;
                        }
                        *(unsigned int *)0xC952674 = 0x1;
                        *(unsigned int *)(((int)stk + 16)) = (*(int *)0xC9525B0);
                        *(unsigned int *)(((int)stk + 4)) = (*(int *)0xC9525B4);
                        t297 = *(int *)((a4 + 0x10));
                        *(unsigned int *)(((int)stk + 12)) = t297;
                        t299 = *(int *)((a4 + 0xC));
                        if ((unsigned int)t297 > (unsigned int)(*(int *)0xC952348)) {
                            t300 = *(int *)0xC952348;
                            *(unsigned int *)(((int)stk + 8)) = t299;
                            if ((unsigned int)t299 > (unsigned int)(*(int *)0xC952344)) {
                                kmSetPixelClipping(0x0, 0x0, (*(int *)0xC952344), t300);
                                *(unsigned int *)0xC95286C = (*(int *)0xC9525B0);
                                *(unsigned int *)0xC952870 = (*(int *)0xC9525B4);
                                *(unsigned int *)0xC9525B0 = (*(int *)(((int)stk + 16)));
                                *(unsigned int *)0xC9525B4 = (*(int *)(((int)stk + 4)));
                                t308 = kmiStartRenderTextureEntry(0xC952860, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
                                *(unsigned int *)0xC95266C = 0x0;
                                if ((*(int *)0xC952504) != 0) {
                                    for (;;) {
                                        t312 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
                                        if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952520)) {
                                            break;
                                        }
                                        if ((*(int *)0xC952504) == 0) {
                                            if (0x0 != 0) {
                                                *(unsigned int *)0xC952674 = 0x0;
                                                return 0xC952520;
                                            }
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            *(unsigned int *)0xC952668 = 0x0;
                                            *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                            *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                            *(unsigned int *)0xC952508 = 0x1;
                                            *(unsigned int *)0xC952678 = 0x1;
                                            *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                            return 0x0;
                                        }
                                    }
                                    if (0x1 != 0) {
                                        *(unsigned int *)0xC952674 = 0x0;
                                        return 0xC952520;
                                    }
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                    kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                    kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                    kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                    kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC952668 = 0x0;
                                    *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                    *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                    *(unsigned int *)0xC952508 = 0x1;
                                    *(unsigned int *)0xC952678 = 0x1;
                                    *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                    return 0x0;
                                }
                                if (0x0 != 0) {
                                    *(unsigned int *)0xC952674 = 0x0;
                                    return t308;
                                }
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC952668 = 0x0;
                                *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                *(unsigned int *)0xC952508 = 0x1;
                                *(unsigned int *)0xC952678 = 0x1;
                                *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                return 0x0;
                            }
                            kmSetPixelClipping(0x0, 0x0, (*(int *)(((int)stk + 8))), t300);
                            *(unsigned int *)0xC95286C = (*(int *)0xC9525B0);
                            *(unsigned int *)0xC952870 = (*(int *)0xC9525B4);
                            *(unsigned int *)0xC9525B0 = (*(int *)(((int)stk + 16)));
                            *(unsigned int *)0xC9525B4 = (*(int *)(((int)stk + 4)));
                            t374 = kmiStartRenderTextureEntry(0xC952860, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
                            *(unsigned int *)0xC95266C = 0x0;
                            if ((*(int *)0xC952504) != 0) {
                                for (;;) {
                                    t378 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
                                    if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952520)) {
                                        break;
                                    }
                                    if ((*(int *)0xC952504) == 0) {
                                        if (0x0 != 0) {
                                            *(unsigned int *)0xC952674 = 0x0;
                                            return 0xC952520;
                                        }
                                        kmiWriteRegister(0x8, 0x1);
                                        kmiWriteRegister(0x8, 0x0);
                                        kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                        kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                        kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                        kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                        kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                        kmiWriteRegister(0x144, 0x80000000);
                                        kmiReadRegister(0x144);
                                        *(unsigned int *)0xC952668 = 0x0;
                                        *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                        *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                        *(unsigned int *)0xC952508 = 0x1;
                                        *(unsigned int *)0xC952678 = 0x1;
                                        *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                        return 0x0;
                                    }
                                }
                                if (0x1 != 0) {
                                    *(unsigned int *)0xC952674 = 0x0;
                                    return 0xC952520;
                                }
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC952668 = 0x0;
                                *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                *(unsigned int *)0xC952508 = 0x1;
                                *(unsigned int *)0xC952678 = 0x1;
                                *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                return 0x0;
                            }
                            if (0x0 != 0) {
                                *(unsigned int *)0xC952674 = 0x0;
                                return t374;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC952668 = 0x0;
                            *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                            *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                            *(unsigned int *)0xC952508 = 0x1;
                            *(unsigned int *)0xC952678 = 0x1;
                            *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                            return 0x0;
                        }
                        t434 = *(int *)(((int)stk + 12));
                        *(unsigned int *)(((int)stk + 8)) = t299;
                        if ((unsigned int)t299 > (unsigned int)(*(int *)0xC952344)) {
                            kmSetPixelClipping(0x0, 0x0, (*(int *)0xC952344), t434);
                            *(unsigned int *)0xC95286C = (*(int *)0xC9525B0);
                            *(unsigned int *)0xC952870 = (*(int *)0xC9525B4);
                            *(unsigned int *)0xC9525B0 = (*(int *)(((int)stk + 16)));
                            *(unsigned int *)0xC9525B4 = (*(int *)(((int)stk + 4)));
                            t442 = kmiStartRenderTextureEntry(0xC952860, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
                            *(unsigned int *)0xC95266C = 0x0;
                            if ((*(int *)0xC952504) != 0) {
                                for (;;) {
                                    t446 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
                                    if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952520)) {
                                        break;
                                    }
                                    if ((*(int *)0xC952504) == 0) {
                                        if (0x0 != 0) {
                                            *(unsigned int *)0xC952674 = 0x0;
                                            return 0xC952520;
                                        }
                                        kmiWriteRegister(0x8, 0x1);
                                        kmiWriteRegister(0x8, 0x0);
                                        kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                        kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                        kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                        kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                        kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                        kmiWriteRegister(0x144, 0x80000000);
                                        kmiReadRegister(0x144);
                                        *(unsigned int *)0xC952668 = 0x0;
                                        *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                        *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                        *(unsigned int *)0xC952508 = 0x1;
                                        *(unsigned int *)0xC952678 = 0x1;
                                        *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                        return 0x0;
                                    }
                                }
                                if (0x1 != 0) {
                                    *(unsigned int *)0xC952674 = 0x0;
                                    return 0xC952520;
                                }
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC952668 = 0x0;
                                *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                *(unsigned int *)0xC952508 = 0x1;
                                *(unsigned int *)0xC952678 = 0x1;
                                *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                return 0x0;
                            }
                            if (0x0 != 0) {
                                *(unsigned int *)0xC952674 = 0x0;
                                return t442;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC952668 = 0x0;
                            *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                            *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                            *(unsigned int *)0xC952508 = 0x1;
                            *(unsigned int *)0xC952678 = 0x1;
                            *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                            return 0x0;
                        }
                        kmSetPixelClipping(0x0, 0x0, (*(int *)(((int)stk + 8))), t434);
                        *(unsigned int *)0xC95286C = (*(int *)0xC9525B0);
                        *(unsigned int *)0xC952870 = (*(int *)0xC9525B4);
                        *(unsigned int *)0xC9525B0 = (*(int *)(((int)stk + 16)));
                        *(unsigned int *)0xC9525B4 = (*(int *)(((int)stk + 4)));
                        t508 = kmiStartRenderTextureEntry(0xC952860, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
                        *(unsigned int *)0xC95266C = 0x0;
                        if ((*(int *)0xC952504) != 0) {
                            for (;;) {
                                t512 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
                                if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952520)) {
                                    break;
                                }
                                if ((*(int *)0xC952504) == 0) {
                                    if (0x0 != 0) {
                                        *(unsigned int *)0xC952674 = 0x0;
                                        return 0xC952520;
                                    }
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                    kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                    kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                    kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                    kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC952668 = 0x0;
                                    *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                    *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                    *(unsigned int *)0xC952508 = 0x1;
                                    *(unsigned int *)0xC952678 = 0x1;
                                    *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                    return 0x0;
                                }
                            }
                            if (0x1 != 0) {
                                *(unsigned int *)0xC952674 = 0x0;
                                return 0xC952520;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC952668 = 0x0;
                            *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                            *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                            *(unsigned int *)0xC952508 = 0x1;
                            *(unsigned int *)0xC952678 = 0x1;
                            *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                            return 0x0;
                        }
                        if (0x0 != 0) {
                            *(unsigned int *)0xC952674 = 0x0;
                            return t508;
                        }
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                        kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                        kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                        kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                        kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                        kmiWriteRegister(0x144, 0x80000000);
                        kmiReadRegister(0x144);
                        *(unsigned int *)0xC952668 = 0x0;
                        *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                        *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                        *(unsigned int *)0xC952508 = 0x1;
                        *(unsigned int *)0xC952678 = 0x1;
                        *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                        return 0x0;
                    }
                    if (0x0 != 0) {
                        *(unsigned int *)0xC952504 = 0x0;
                        return 0xC952524;
                    }
                    *(unsigned int *)0xC952674 = 0x1;
                    *(unsigned int *)(((int)stk + 16)) = (*(int *)0xC9525B0);
                    *(unsigned int *)(((int)stk + 4)) = (*(int *)0xC9525B4);
                    t570 = *(int *)((a4 + 0x10));
                    *(unsigned int *)(((int)stk + 12)) = t570;
                    t572 = *(int *)((a4 + 0xC));
                    if ((unsigned int)t570 > (unsigned int)(*(int *)0xC952348)) {
                        t573 = *(int *)0xC952348;
                        *(unsigned int *)(((int)stk + 8)) = t572;
                        if ((unsigned int)t572 > (unsigned int)(*(int *)0xC952344)) {
                            kmSetPixelClipping(0x0, 0x0, (*(int *)0xC952344), t573);
                            *(unsigned int *)0xC95286C = (*(int *)0xC9525B0);
                            *(unsigned int *)0xC952870 = (*(int *)0xC9525B4);
                            *(unsigned int *)0xC9525B0 = (*(int *)(((int)stk + 16)));
                            *(unsigned int *)0xC9525B4 = (*(int *)(((int)stk + 4)));
                            t581 = kmiStartRenderTextureEntry(0xC952860, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
                            *(unsigned int *)0xC95266C = 0x0;
                            if ((*(int *)0xC952504) != 0) {
                                for (;;) {
                                    t585 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
                                    if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952520)) {
                                        break;
                                    }
                                    if ((*(int *)0xC952504) == 0) {
                                        if (0x0 != 0) {
                                            *(unsigned int *)0xC952674 = 0x0;
                                            return 0xC952520;
                                        }
                                        kmiWriteRegister(0x8, 0x1);
                                        kmiWriteRegister(0x8, 0x0);
                                        kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                        kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                        kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                        kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                        kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                        kmiWriteRegister(0x144, 0x80000000);
                                        kmiReadRegister(0x144);
                                        *(unsigned int *)0xC952668 = 0x0;
                                        *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                        *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                        *(unsigned int *)0xC952508 = 0x1;
                                        *(unsigned int *)0xC952678 = 0x1;
                                        *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                        return 0x0;
                                    }
                                }
                                if (0x1 != 0) {
                                    *(unsigned int *)0xC952674 = 0x0;
                                    return 0xC952520;
                                }
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC952668 = 0x0;
                                *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                *(unsigned int *)0xC952508 = 0x1;
                                *(unsigned int *)0xC952678 = 0x1;
                                *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                return 0x0;
                            }
                            if (0x0 != 0) {
                                *(unsigned int *)0xC952674 = 0x0;
                                return t581;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC952668 = 0x0;
                            *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                            *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                            *(unsigned int *)0xC952508 = 0x1;
                            *(unsigned int *)0xC952678 = 0x1;
                            *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                            return 0x0;
                        }
                        kmSetPixelClipping(0x0, 0x0, (*(int *)(((int)stk + 8))), t573);
                        *(unsigned int *)0xC95286C = (*(int *)0xC9525B0);
                        *(unsigned int *)0xC952870 = (*(int *)0xC9525B4);
                        *(unsigned int *)0xC9525B0 = (*(int *)(((int)stk + 16)));
                        *(unsigned int *)0xC9525B4 = (*(int *)(((int)stk + 4)));
                        t647 = kmiStartRenderTextureEntry(0xC952860, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
                        *(unsigned int *)0xC95266C = 0x0;
                        if ((*(int *)0xC952504) != 0) {
                            for (;;) {
                                t651 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
                                if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952520)) {
                                    break;
                                }
                                if ((*(int *)0xC952504) == 0) {
                                    if (0x0 != 0) {
                                        *(unsigned int *)0xC952674 = 0x0;
                                        return 0xC952520;
                                    }
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                    kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                    kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                    kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                    kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC952668 = 0x0;
                                    *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                    *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                    *(unsigned int *)0xC952508 = 0x1;
                                    *(unsigned int *)0xC952678 = 0x1;
                                    *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                    return 0x0;
                                }
                            }
                            if (0x1 != 0) {
                                *(unsigned int *)0xC952674 = 0x0;
                                return 0xC952520;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC952668 = 0x0;
                            *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                            *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                            *(unsigned int *)0xC952508 = 0x1;
                            *(unsigned int *)0xC952678 = 0x1;
                            *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                            return 0x0;
                        }
                        if (0x0 != 0) {
                            *(unsigned int *)0xC952674 = 0x0;
                            return t647;
                        }
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                        kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                        kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                        kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                        kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                        kmiWriteRegister(0x144, 0x80000000);
                        kmiReadRegister(0x144);
                        *(unsigned int *)0xC952668 = 0x0;
                        *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                        *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                        *(unsigned int *)0xC952508 = 0x1;
                        *(unsigned int *)0xC952678 = 0x1;
                        *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                        return 0x0;
                    }
                    t707 = *(int *)(((int)stk + 12));
                    *(unsigned int *)(((int)stk + 8)) = t572;
                    if ((unsigned int)t572 > (unsigned int)(*(int *)0xC952344)) {
                        kmSetPixelClipping(0x0, 0x0, (*(int *)0xC952344), t707);
                        *(unsigned int *)0xC95286C = (*(int *)0xC9525B0);
                        *(unsigned int *)0xC952870 = (*(int *)0xC9525B4);
                        *(unsigned int *)0xC9525B0 = (*(int *)(((int)stk + 16)));
                        *(unsigned int *)0xC9525B4 = (*(int *)(((int)stk + 4)));
                        t715 = kmiStartRenderTextureEntry(0xC952860, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
                        *(unsigned int *)0xC95266C = 0x0;
                        if ((*(int *)0xC952504) != 0) {
                            for (;;) {
                                t719 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
                                if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952520)) {
                                    break;
                                }
                                if ((*(int *)0xC952504) == 0) {
                                    if (0x0 != 0) {
                                        *(unsigned int *)0xC952674 = 0x0;
                                        return 0xC952520;
                                    }
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                    kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                    kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                    kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                    kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC952668 = 0x0;
                                    *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                    *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                    *(unsigned int *)0xC952508 = 0x1;
                                    *(unsigned int *)0xC952678 = 0x1;
                                    *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                    return 0x0;
                                }
                            }
                            if (0x1 != 0) {
                                *(unsigned int *)0xC952674 = 0x0;
                                return 0xC952520;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC952668 = 0x0;
                            *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                            *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                            *(unsigned int *)0xC952508 = 0x1;
                            *(unsigned int *)0xC952678 = 0x1;
                            *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                            return 0x0;
                        }
                        if (0x0 != 0) {
                            *(unsigned int *)0xC952674 = 0x0;
                            return t715;
                        }
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                        kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                        kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                        kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                        kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                        kmiWriteRegister(0x144, 0x80000000);
                        kmiReadRegister(0x144);
                        *(unsigned int *)0xC952668 = 0x0;
                        *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                        *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                        *(unsigned int *)0xC952508 = 0x1;
                        *(unsigned int *)0xC952678 = 0x1;
                        *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                        return 0x0;
                    }
                    kmSetPixelClipping(0x0, 0x0, (*(int *)(((int)stk + 8))), t707);
                    *(unsigned int *)0xC95286C = (*(int *)0xC9525B0);
                    *(unsigned int *)0xC952870 = (*(int *)0xC9525B4);
                    *(unsigned int *)0xC9525B0 = (*(int *)(((int)stk + 16)));
                    *(unsigned int *)0xC9525B4 = (*(int *)(((int)stk + 4)));
                    t781 = kmiStartRenderTextureEntry(0xC952860, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
                    *(unsigned int *)0xC95266C = 0x0;
                    if ((*(int *)0xC952504) != 0) {
                        for (;;) {
                            t785 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
                            if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952520)) {
                                break;
                            }
                            if ((*(int *)0xC952504) == 0) {
                                if (0x0 != 0) {
                                    *(unsigned int *)0xC952674 = 0x0;
                                    return 0xC952520;
                                }
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC952668 = 0x0;
                                *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                *(unsigned int *)0xC952508 = 0x1;
                                *(unsigned int *)0xC952678 = 0x1;
                                *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                return 0x0;
                            }
                        }
                        if (0x1 != 0) {
                            *(unsigned int *)0xC952674 = 0x0;
                            return 0xC952520;
                        }
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                        kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                        kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                        kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                        kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                        kmiWriteRegister(0x144, 0x80000000);
                        kmiReadRegister(0x144);
                        *(unsigned int *)0xC952668 = 0x0;
                        *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                        *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                        *(unsigned int *)0xC952508 = 0x1;
                        *(unsigned int *)0xC952678 = 0x1;
                        *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                        return 0x0;
                    }
                    if (0x0 != 0) {
                        *(unsigned int *)0xC952674 = 0x0;
                        return t781;
                    }
                    kmiWriteRegister(0x8, 0x1);
                    kmiWriteRegister(0x8, 0x0);
                    kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                    kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                    kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                    kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                    kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                    kmiWriteRegister(0x144, 0x80000000);
                    kmiReadRegister(0x144);
                    *(unsigned int *)0xC952668 = 0x0;
                    *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                    *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                    *(unsigned int *)0xC952508 = 0x1;
                    *(unsigned int *)0xC952678 = 0x1;
                    *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                    return 0x0;
                }
            }
            t841 = 0xC952524;
            t845 = 0x1;
        }
        t1217 = t841;
        if (t845 != 0) {
        } else {
            *(unsigned int *)0xC95266C = 0x0;
            t1127 = t841;
            t1131 = 0x0;
            if ((*(int *)0xC952504) != 0) {
                for (;;) {
                    t849 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
                    if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952520)) {
                        break;
                    }
                    if ((*(int *)0xC952504) == 0) {
                        if (0x0 != 0) {
                            *(unsigned int *)0xC952504 = 0x0;
                            return 0xC952520;
                        }
                        *(unsigned int *)0xC952674 = 0x1;
                        *(unsigned int *)(((int)stk + 16)) = (*(int *)0xC9525B0);
                        *(unsigned int *)(((int)stk + 4)) = (*(int *)0xC9525B4);
                        t856 = *(int *)((a4 + 0x10));
                        *(unsigned int *)(((int)stk + 12)) = t856;
                        t858 = *(int *)((a4 + 0xC));
                        if ((unsigned int)t856 > (unsigned int)(*(int *)0xC952348)) {
                            t859 = *(int *)0xC952348;
                            *(unsigned int *)(((int)stk + 8)) = t858;
                            if ((unsigned int)t858 > (unsigned int)(*(int *)0xC952344)) {
                                kmSetPixelClipping(0x0, 0x0, (*(int *)0xC952344), t859);
                                *(unsigned int *)0xC95286C = (*(int *)0xC9525B0);
                                *(unsigned int *)0xC952870 = (*(int *)0xC9525B4);
                                *(unsigned int *)0xC9525B0 = (*(int *)(((int)stk + 16)));
                                *(unsigned int *)0xC9525B4 = (*(int *)(((int)stk + 4)));
                                t867 = kmiStartRenderTextureEntry(0xC952860, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
                                *(unsigned int *)0xC95266C = 0x0;
                                if ((*(int *)0xC952504) != 0) {
                                    for (;;) {
                                        t871 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
                                        if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952520)) {
                                            break;
                                        }
                                        if ((*(int *)0xC952504) == 0) {
                                            if (0x0 != 0) {
                                                *(unsigned int *)0xC952674 = 0x0;
                                                return 0xC952520;
                                            }
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            *(unsigned int *)0xC952668 = 0x0;
                                            *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                            *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                            *(unsigned int *)0xC952508 = 0x1;
                                            *(unsigned int *)0xC952678 = 0x1;
                                            *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                            return 0x0;
                                        }
                                    }
                                    if (0x1 != 0) {
                                        *(unsigned int *)0xC952674 = 0x0;
                                        return 0xC952520;
                                    }
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                    kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                    kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                    kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                    kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC952668 = 0x0;
                                    *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                    *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                    *(unsigned int *)0xC952508 = 0x1;
                                    *(unsigned int *)0xC952678 = 0x1;
                                    *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                    return 0x0;
                                }
                                if (0x0 != 0) {
                                    *(unsigned int *)0xC952674 = 0x0;
                                    return t867;
                                }
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC952668 = 0x0;
                                *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                *(unsigned int *)0xC952508 = 0x1;
                                *(unsigned int *)0xC952678 = 0x1;
                                *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                return 0x0;
                            }
                            kmSetPixelClipping(0x0, 0x0, (*(int *)(((int)stk + 8))), t859);
                            *(unsigned int *)0xC95286C = (*(int *)0xC9525B0);
                            *(unsigned int *)0xC952870 = (*(int *)0xC9525B4);
                            *(unsigned int *)0xC9525B0 = (*(int *)(((int)stk + 16)));
                            *(unsigned int *)0xC9525B4 = (*(int *)(((int)stk + 4)));
                            t933 = kmiStartRenderTextureEntry(0xC952860, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
                            *(unsigned int *)0xC95266C = 0x0;
                            if ((*(int *)0xC952504) != 0) {
                                for (;;) {
                                    t937 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
                                    if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952520)) {
                                        break;
                                    }
                                    if ((*(int *)0xC952504) == 0) {
                                        if (0x0 != 0) {
                                            *(unsigned int *)0xC952674 = 0x0;
                                            return 0xC952520;
                                        }
                                        kmiWriteRegister(0x8, 0x1);
                                        kmiWriteRegister(0x8, 0x0);
                                        kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                        kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                        kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                        kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                        kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                        kmiWriteRegister(0x144, 0x80000000);
                                        kmiReadRegister(0x144);
                                        *(unsigned int *)0xC952668 = 0x0;
                                        *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                        *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                        *(unsigned int *)0xC952508 = 0x1;
                                        *(unsigned int *)0xC952678 = 0x1;
                                        *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                        return 0x0;
                                    }
                                }
                                if (0x1 != 0) {
                                    *(unsigned int *)0xC952674 = 0x0;
                                    return 0xC952520;
                                }
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC952668 = 0x0;
                                *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                *(unsigned int *)0xC952508 = 0x1;
                                *(unsigned int *)0xC952678 = 0x1;
                                *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                return 0x0;
                            }
                            if (0x0 != 0) {
                                *(unsigned int *)0xC952674 = 0x0;
                                return t933;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC952668 = 0x0;
                            *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                            *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                            *(unsigned int *)0xC952508 = 0x1;
                            *(unsigned int *)0xC952678 = 0x1;
                            *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                            return 0x0;
                        }
                        t993 = *(int *)(((int)stk + 12));
                        *(unsigned int *)(((int)stk + 8)) = t858;
                        if ((unsigned int)t858 > (unsigned int)(*(int *)0xC952344)) {
                            kmSetPixelClipping(0x0, 0x0, (*(int *)0xC952344), t993);
                            *(unsigned int *)0xC95286C = (*(int *)0xC9525B0);
                            *(unsigned int *)0xC952870 = (*(int *)0xC9525B4);
                            *(unsigned int *)0xC9525B0 = (*(int *)(((int)stk + 16)));
                            *(unsigned int *)0xC9525B4 = (*(int *)(((int)stk + 4)));
                            t1001 = kmiStartRenderTextureEntry(0xC952860, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
                            *(unsigned int *)0xC95266C = 0x0;
                            if ((*(int *)0xC952504) != 0) {
                                for (;;) {
                                    t1005 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
                                    if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952520)) {
                                        break;
                                    }
                                    if ((*(int *)0xC952504) == 0) {
                                        if (0x0 != 0) {
                                            *(unsigned int *)0xC952674 = 0x0;
                                            return 0xC952520;
                                        }
                                        kmiWriteRegister(0x8, 0x1);
                                        kmiWriteRegister(0x8, 0x0);
                                        kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                        kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                        kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                        kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                        kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                        kmiWriteRegister(0x144, 0x80000000);
                                        kmiReadRegister(0x144);
                                        *(unsigned int *)0xC952668 = 0x0;
                                        *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                        *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                        *(unsigned int *)0xC952508 = 0x1;
                                        *(unsigned int *)0xC952678 = 0x1;
                                        *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                        return 0x0;
                                    }
                                }
                                if (0x1 != 0) {
                                    *(unsigned int *)0xC952674 = 0x0;
                                    return 0xC952520;
                                }
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                *(unsigned int *)0xC952668 = 0x0;
                                *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                *(unsigned int *)0xC952508 = 0x1;
                                *(unsigned int *)0xC952678 = 0x1;
                                *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                return 0x0;
                            }
                            if (0x0 != 0) {
                                *(unsigned int *)0xC952674 = 0x0;
                                return t1001;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC952668 = 0x0;
                            *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                            *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                            *(unsigned int *)0xC952508 = 0x1;
                            *(unsigned int *)0xC952678 = 0x1;
                            *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                            return 0x0;
                        }
                        kmSetPixelClipping(0x0, 0x0, (*(int *)(((int)stk + 8))), t993);
                        *(unsigned int *)0xC95286C = (*(int *)0xC9525B0);
                        *(unsigned int *)0xC952870 = (*(int *)0xC9525B4);
                        *(unsigned int *)0xC9525B0 = (*(int *)(((int)stk + 16)));
                        *(unsigned int *)0xC9525B4 = (*(int *)(((int)stk + 4)));
                        t1067 = kmiStartRenderTextureEntry(0xC952860, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
                        *(unsigned int *)0xC95266C = 0x0;
                        if ((*(int *)0xC952504) != 0) {
                            for (;;) {
                                t1071 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
                                if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952520)) {
                                    break;
                                }
                                if ((*(int *)0xC952504) == 0) {
                                    if (0x0 != 0) {
                                        *(unsigned int *)0xC952674 = 0x0;
                                        return 0xC952520;
                                    }
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                                    kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                                    kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                                    kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                                    kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    *(unsigned int *)0xC952668 = 0x0;
                                    *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                                    *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                                    *(unsigned int *)0xC952508 = 0x1;
                                    *(unsigned int *)0xC952678 = 0x1;
                                    *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                                    return 0x0;
                                }
                            }
                            if (0x1 != 0) {
                                *(unsigned int *)0xC952674 = 0x0;
                                return 0xC952520;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC952668 = 0x0;
                            *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                            *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                            *(unsigned int *)0xC952508 = 0x1;
                            *(unsigned int *)0xC952678 = 0x1;
                            *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                            return 0x0;
                        }
                        if (0x0 != 0) {
                            *(unsigned int *)0xC952674 = 0x0;
                            return t1067;
                        }
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                        kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                        kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                        kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                        kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                        kmiWriteRegister(0x144, 0x80000000);
                        kmiReadRegister(0x144);
                        *(unsigned int *)0xC952668 = 0x0;
                        *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                        *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                        *(unsigned int *)0xC952508 = 0x1;
                        *(unsigned int *)0xC952678 = 0x1;
                        *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                        return 0x0;
                    }
                }
                t1127 = 0xC952520;
                t1131 = 0x1;
            }
            if (t1131 != 0) {
                *(unsigned int *)0xC952504 = 0x0;
                t1209 = t1127;
            } else {
                *(unsigned int *)0xC952674 = 0x1;
                *(unsigned int *)(((int)stk + 16)) = (*(int *)0xC9525B0);
                *(unsigned int *)(((int)stk + 4)) = (*(int *)0xC9525B4);
                t1134 = *(int *)((a4 + 0x10));
                *(unsigned int *)(((int)stk + 12)) = t1134;
                t1136 = *(int *)((a4 + 0xC));
                if ((unsigned int)t1134 > (unsigned int)(*(int *)0xC952348)) {
                    t1140 = (*(int *)0xC952348);
                } else {
                    t1140 = (*(int *)(((int)stk + 12)));
                }
                *(unsigned int *)(((int)stk + 8)) = t1136;
                if ((unsigned int)t1136 > (unsigned int)(*(int *)0xC952344)) {
                    t1146 = (*(int *)0xC952344);
                } else {
                    t1146 = (*(int *)(((int)stk + 8)));
                }
                kmSetPixelClipping(0x0, 0x0, t1146, t1140);
                *(unsigned int *)0xC95286C = (*(int *)0xC9525B0);
                *(unsigned int *)0xC952870 = (*(int *)0xC9525B4);
                *(unsigned int *)0xC9525B0 = (*(int *)(((int)stk + 16)));
                *(unsigned int *)0xC9525B4 = (*(int *)(((int)stk + 4)));
                t1153 = kmiStartRenderTextureEntry(0xC952860, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
                *(unsigned int *)0xC95266C = 0x0;
                t1179 = t1153;
                t1181 = 0x0;
                if ((*(int *)0xC952504) != 0) {
                    for (;;) {
                        t1157 = ((int (*)(int))((*(int *)0xC952564)))((*(int *)0xC952568));
                        if ((unsigned int)(*(int *)0xC95266C) > (unsigned int)(*(int *)0xC952520)) {
                            break;
                        }
                        if ((*(int *)0xC952504) == 0) {
                            if (0x0 != 0) {
                                *(unsigned int *)0xC952674 = 0x0;
                                return 0xC952520;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            *(unsigned int *)0xC952668 = 0x0;
                            *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                            *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                            *(unsigned int *)0xC952508 = 0x1;
                            *(unsigned int *)0xC952678 = 0x1;
                            *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                            return 0x0;
                        }
                    }
                    t1179 = 0xC952520;
                    t1181 = 0x1;
                }
                if (t1181 != 0) {
                    *(unsigned int *)0xC952674 = 0x0;
                    t1201 = t1179;
                } else {
                    kmiWriteRegister(0x8, 0x1);
                    kmiWriteRegister(0x8, 0x0);
                    kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952774))));
                    kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952778))));
                    kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952780))));
                    kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC952784))));
                    kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC95277C))));
                    kmiWriteRegister(0x144, 0x80000000);
                    kmiReadRegister(0x144);
                    *(unsigned int *)0xC952668 = 0x0;
                    *(unsigned int *)0xC952664 = (*(int *)0xC952764);
                    *(unsigned int *)0xC952660 = (*(int *)0xC952658);
                    *(unsigned int *)0xC952508 = 0x1;
                    *(unsigned int *)0xC952678 = 0x1;
                    *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x2;
                    t1201 = 0x0;
                }
                t1209 = t1201;
            }
            t1217 = t1209;
        }
        t1226 = t1217;
    }
    return t1226;
}

int FUN_0c04356c(int a4)
{
    int t0;
    int t2;
    int t5;
    int t10;
    int t12;
    int t13;
    int t16;

    t0 = *(int *)((a4 + 0x4C8));
    if (t0 == 0) {
        return t0;
    }
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 == 3) {
                return t0;
            }
            if (t0 != 4) {
                if (t0 == 5) {
                    if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                        return ((int (*)(int))(0xC04345A))(a4);
                    }
                    return 0x2EC;
                }
                if (t0 == 6) {
                    t2 = FUN_0c0430c0(a4, 20.0f);
                    if (t2 != 0) {
                        if (t2 != 1) {
                            if ((t2 != 2) && (t2 != 3)) {
                                return t2;
                            }
                            return ((int (*)(int))(0xC043498))(a4);
                        }
                        return t2;
                    }
                    return ((int (*)(int))(0xC043498))(a4);
                }
                if (t0 == 7) {
                    if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                        return FUN_0c043338(a4);
                    }
                    return 0x2EC;
                }
                if (t0 == 8) {
                    return t0;
                }
                if (t0 == 9) {
                    return t0;
                }
                if (t0 == 10) {
                    if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                        return ((int (*)(int))(0xC043356))(a4);
                    }
                    return 0x2EC;
                }
                return t0;
            }
            t5 = FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
            if (t5 == 0) {
                FUN_0c043338(a4);
            }
            if ((0xC & (*(int *)((a4 + 0x2EC)))) != 0) {
                t10 = *(int *)((a4 + 0x3AC));
                *(unsigned int *)((a4 + 0x3AC)) = (t10 + 0x1);
                if ((int)(t10 + 0x1) <= (int)(*(int *)((a4 + 0x3B0)))) {
                    return 0x3B0;
                }
                return FUN_0c043338(a4);
            }
            return 0x2EC;
        }
        t12 = FUN_0c0430c0(a4, 15.0f);
        if ((t12 != 0) && (t12 != 1)) {
            if (t12 != 2) {
                if (t12 != 3) {
                    return t12;
                }
                return FUN_0c0350a4(a4, 0x200, 0x1, 0x0);
            }
            return ((int (*)(int))(0xC0433D2))(a4);
        }
        return FUN_0c043338(a4);
    }
    t13 = *(int *)((a4 + 0x3AC));
    *(unsigned int *)((a4 + 0x3AC)) = (t13 + 0x1);
    if ((int)(t13 + 0x1) <= (int)(*(int *)((a4 + 0x3B0)))) {
        return 0x3B0;
    }
    FUN_0c042fd0(a4);
    t16 = FUN_0c0430c0(a4, 15.0f);
    if (t16 != 0) {
        if (t16 != 1) {
            if (t16 != 2) {
                if (t16 != 3) {
                    return t16;
                }
                return ((int (*)(int))(0xC043356))(a4);
            }
            return ((int (*)(int))(0xC0433D2))(a4);
        }
        return ((int (*)(int))(0xC04343C))(a4);
    }
    return FUN_0c043338(a4);
}

int FUN_0c015d7e(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t7;
    int t19;
    int t13;
    int t10;
    int t11;
    int t12;
    int t24;
    int t29;
    int t30;
    int t31;
    int t35;
    int t37;
    int t41;
    int t45;
    int t43;
    int t50;
    int t52;
    int t55;
    int t58;
    int t77;
    int t109;
    int t80;
    int t81;
    int t82;
    int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    int t118;
    int t68;
    int t62;
    int t100;
    int t92;
    int stk[10];

    t0 = *(int *)0xC23EB30;
    t1 = *(int *)0xC23EB2C;
    t2 = *(int *)0xC23EB20;
    *(unsigned int *)(((int)stk + 4)) = 0xC1EF454;
    t3 = *(int *)0xC23EB34;
    t4 = *(int *)0xC23EB0C;
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                if (t3 == 3) {
                    FUN_0c0156ea(t2, (((t1 * 0xD) + (*(int *)(((int)stk + 4)))) + 0x1A), 0xC, (t1 + 0x2));
                    t7 = *(int *)0xC23EB1C;
                    t19 = t7;
                    if (t7 == 9) {
                        t13 = t7;
                        if ((int)(*(int *)0xC23EB24) >= 0) {
                            t10 = *(int *)0xC23EB2C;
                            t11 = *(int *)0xC23EB0C;
                            t12 = *(signed char *)((t11 + 0x28));
                            *(unsigned char *)(((0x28 + t11) + 0x0)) = (t12 | (((int)t10 >= 0) ? (0x1 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)0x1 >> (-(int)t10 & 31)) : ((int)0x1 >> 31))));
                            t13 = (t12 | (((int)t10 >= 0) ? (0x1 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)0x1 >> (-(int)t10 & 31)) : ((int)0x1 >> 31))));
                        }
                        *(unsigned int *)0xC23EB34 = ((*(int *)0xC23EB34) + 0x1);
                        t19 = t13;
                    }
                    return t19;
                }
                if (t3 == 4) {
                    *(unsigned int *)0xC23EB30 = (t0 >> 1);
                    t24 = *(int *)0xC23EB2C;
                    *(unsigned int *)0xC23EB2C = (t24 + 0x1);
                    if ((int)(t24 + 0x1) < (int)0x4) {
                        *(unsigned int *)0xC23EB34 = 0x2;
                    } else {
                        *(unsigned int *)0xC23EB34 = ((*(int *)0xC23EB34) + 0x1);
                    }
                    return (t24 + 0x1);
                }
                if (t3 == 5) {
                    t29 = *(signed char *)(((t4 + 0x7D) + 0x0));
                    *(unsigned int *)(((int)stk + 4)) = t29;
                    t30 = FUN_0c012570(t29);
                    t31 = *(int *)0xC23EB0C;
                    FUN_0c0112b0((signed char)t30);
                    FUN_0c0e631c(((*(int *)0xC23EB0C) + 0xD800), t31, 0xE0);
                    t35 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0e2a4c))(t31, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                    t37 = ((int (*)(int, int))(FUN_0c015436))((*(int *)0xC23EB20), 0x0);
                    *(unsigned int *)0xC23EB34 = ((*(int *)0xC23EB34) + 0x1);
                    return t37;
                }
                if (t3 == 6) {
                    FUN_0c0159a2(t2, (*(int *)(((int)stk + 4))));
                    t41 = *(int *)0xC23EB1C;
                    t45 = t41;
                    if (t41 == 9) {
                        t43 = ((int (*)(int, int))(FUN_0c015436))((*(int *)0xC23EB20), 0x0);
                        *(unsigned int *)0xC23EB34 = ((*(int *)0xC23EB34) + 0x1);
                        t45 = t43;
                    }
                    return t45;
                }
                if (t3 == 7) {
                    FUN_0c0156ea(t2, t4, 0xDC00, 0x0);
                    t50 = *(int *)0xC23EB1C;
                    if (t50 == 9) {
                        *(volatile int *)0xC23EB24;
                        *(unsigned int *)0xC23EB34 = 0x9;
                        t52 = *(int *)0xC23EB08;
                        return ((int (*)(int))(FUN_0c0e2a4c))(t52);
                    }
                    return t50;
                }
                
                return t3;
            }
            if ((t0 & 0x1) != 0) {
                t55 = ((int (*)(int, int, int, int))(FUN_0c015436))(t2, (t1 + 0x2), t0, a7);
                if ((*(int *)0xC23EB24) == 0xFFFFFF05) {
                    t58 = buGetDiskFree((*(int *)0xC23EB20), 0x0);
                    if ((int)t58 < (int)0x2) {
                        *(unsigned int *)0xC23EB34 = 0x4;
                    } else {
                        *(unsigned int *)0xC23EB34 = ((*(int *)0xC23EB34) + 0x1);
                    }
                    t62 = t58;
                } else {
                    *(unsigned int *)0xC23EB34 = 0x4;
                    t62 = t55;
                }
                t68 = t62;
            } else {
                *(unsigned int *)0xC23EB34 = 0x4;
                t68 = t3;
            }
            return t68;
        }
        FUN_0c0154c0(t2, 0x0, 0x1, f4, f5);
        t77 = *(int *)0xC23EB1C;
        t109 = t77;
        if (t77 != 9) {
        } else {
            if ((int)(*(int *)0xC23EB24) >= 0) {
                t80 = *(int *)0xC23EB14;
                *(unsigned int *)0xC23EB0C = t80;
                t81 = *(signed char *)((t80 + 0x7C));
                t82 = *(signed char *)((t80 + 0x28));
                if ((t81 & (t82 ^ t81)) == 0) {
                    t84 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(FUN_0c0e2a4c))((*(int *)0xC23EB0C), (t82 ^ t81), 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                    *(unsigned int *)0xC23EB34 = 0x9;
                    t92 = t84;
                } else {
                    *(unsigned int *)0xC23EB30 = (t81 & (t82 ^ t81));
                    *(unsigned int *)0xC23EB2C = 0x0;
                    t85 = 0x28;
                    t86 = 0xC23EB14;
                    t87 = t80;
                    t88 = 0x0;
                    for (;;) {
                        if ((int)t88 >= (int)0x4) {
                            break;
                        }
                        t86 = 0x1;
                        t86 = (((int)t88 >= 0) ? (t86 << (t88 & 31)) : ((-(int)t88 & 31) ? ((int)t86 >> (-(int)t88 & 31)) : ((int)t86 >> 31)));
                        if ((t86 & (t81 & (t82 ^ t81))) != 0) {
                            t85 = t88;
                            t87 = (*(signed char *)((0xC0F40CC + t85)));
                            t87 = (t87 + 0xC1EF2D4);
                            *(unsigned char *)((t87 + 0x0)) = 0x1;
                        }
                        t88 = (t88 + 0x1);
                    }
                    *(unsigned int *)0xC23EB34 = ((*(int *)0xC23EB34) + 0x1);
                    t92 = t85;
                }
                t100 = t92;
            } else {
                *(unsigned int *)0xC23EB34 = 0x9;
                t100 = t77;
            }
            t109 = t100;
        }
        return t109;
    }
    t118 = ((int (*)(int, int, int, int))(FUN_0c015436))(t2, 0x0, t0, a7);
    if ((int)(*(int *)0xC23EB24) >= 0) {
        *(unsigned int *)0xC23EB34 = ((*(int *)0xC23EB34) + 0x1);
    } else {
        *(unsigned int *)0xC23EB34 = 0x9;
    }
    return t118;
}

int FUN_0c01ff28(int a4, int a5, int a6, int a7)
{
    int t8;
    int t9;
    int t122;
    int t49;
    int t64;
    int t58;
    int t92;
    int t2;
    int t169;
    int t159;
    int t114;
    int t97;
    int t85;
    int t78;
    int t71;
    int t130;
    int t131;
    int t132;

    if (((*(int *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0x8))) == 7) && (t2 = *(int *)((a4 + 0x49C)), t2 != 7)) {
        *(unsigned int *)((a4 + 0x4A0)) = (*(int *)((a4 + 0x49C)));
    }
    *(unsigned int *)((a4 + 0x49C)) = (*(int *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0x8)));
    t8 = *(int *)((a4 + 0x49C));
    t9 = *(int *)0xC247CFC;
    if (t8 != 0) {
        if (t8 != 1) {
            t122 = 0x0;
            if (t8 == 2) {
            } else {
                if (t8 != 3) {
                    if (t8 != 4) {
                        if (t8 == 5) {
                            if ((int)(*(int *)((a4 + 0x304))) > 0) {
                                FUN_0c03e8dc(a4);
                            }
                            t85 = 0x0;
                        } else {
                            if (t8 == 6) {
                                FUN_0c038d08(a4, t9, 0xB, a7);
                                FUN_0c01fe82(a4);
                                t78 = 0x0;
                            } else {
                                if (t8 == 8) {
                                    *(unsigned int *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0x8)) = (*(int *)((a4 + 0x4A0)));
                                    *(float *)((a4 + 0x390)) = (*(float *)((a4 + 0xB4)));
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
                                    FUN_0c01db0e(a4, (*(int *)((a4 + 0xA4))), 0xB, a7);
                                    t49 = *(int *)((a4 + 0x48C));
                                    if ((t49 != 52) && (t49 != 54)) {
                                    } else {
                                        FUN_0c046442(a4);
                                    }
                                    FUN_0c0bbbf4(a4);
                                    FUN_0c01cdf2(a4);
                                    t71 = 0x1;
                                } else {
                                    t64 = 0x0;
                                    if (t8 == 7) {
                                        *(float *)((a4 + 0x390)) = (*(float *)((a4 + 0xB4)));
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
                                        FUN_0c01db0e(a4, (*(int *)((a4 + 0xA4))), 0xB, a7);
                                        t58 = *(int *)((a4 + 0x48C));
                                        if ((t58 != 52) && (t58 != 54)) {
                                        } else {
                                            FUN_0c046442(a4);
                                        }
                                        FUN_0c0bbbf4(a4);
                                        FUN_0c01cdf2(a4);
                                        t64 = 0x1;
                                    }
                                    t71 = t64;
                                }
                                t78 = t71;
                            }
                            t85 = t78;
                        }
                        t97 = t85;
                    } else {
                        *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
                        t92 = FUN_0c035e9c(a4);
                        if (t92 != 0) {
                            *(unsigned int *)((a4 + 0x4C8)) = 0x0;
                            *(unsigned int *)((a4 + 0x4D0)) = 0x1;
                            *(unsigned int *)((a4 + 0x304)) = 0x0;
                            *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x5;
                            FUN_0c03611c(a4);
                        }
                        t97 = 0x0;
                    }
                    t114 = t97;
                } else {
                    if ((*(int *)0xC23ED9C) == 25) {
                    } else {
                        if ((int)t9 < (int)0xB) {
                            *(unsigned int *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0x8)) = 0x1;
                        }
                    }
                    t114 = 0x0;
                }
                t122 = t114;
            }
            t159 = t122;
        } else {
            if (((int)t9 >= (int)0xB) && ((t130 = *(int *)((a4 + 0x48C)), t130 != 45) && ((t131 = *(int *)((a4 + 0x48C)), t131 != 52) && (t132 = *(int *)((a4 + 0x48C)), t132 != 54)))) {
                *(unsigned int *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0x8)) = 0x3;
            } else {
                if ((*(int *)0xC246308) == 0) {
                } else {
                    if ((unsigned short)(*(short *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0x4))) != 2) {
                    } else {
                        *(unsigned short *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0x4)) = 0x3;
                        *(unsigned int *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0x8)) = 0x2;
                    }
                }
            }
            t159 = 0x0;
        }
        t169 = t159;
    } else {
        *(unsigned int *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F4) + 0x8)) = 0x1;
        t169 = 0x0;
    }
    return t169;
}

int FUN_0c039c6a(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t117;
    int t5;
    int t104;
    int t6;
    int t17;
    int t30;
    int t19;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t44;
    int t61;
    int t69;
    int t57;
    int t59;
    int t80;
    int t75;
    int t77;
    int t96;
    int t36;
    int t37;
    int t38;
    int t49;
    int t50;
    int t51;
    int t66;
    int t67;
    int t68;
    int t85;
    int t86;
    int t87;
    int t91;
    int t92;
    int t93;
    int t94;
    int stk[20];

    t1 = *(int *)((a4 + 0xC4));
    t2 = *(int *)((((*(int *)((a4 + 0xC0))) << 2) + 0xC195AFC));
    t117 = 0x5CC;
    if ((*(int *)((a4 + 0x5CC))) == 0) {
    } else {
        t5 = *(int *)((a4 + 0xC8));
        t104 = t5;
        if ((t5 & 64) != 0) {
        } else {
            *(unsigned int *)(((int)stk + 20)) = (((int)stk + 16) + 0xC);
            t6 = (((int)stk + 16) + 0xC);
            for (;;) {
                if ((unsigned int)t6 >= (unsigned int)((((int)stk + 16) + 0xC) + 0x18)) {
                    break;
                }
                *(unsigned int *)((t6 + 0x0)) = 0x0;
                t6 = (t6 + 0x4);
            }
            *(unsigned int *)(((int)stk + 16)) = (*(int *)(((0x5D0 + a4) + 0x8)));
            *(unsigned int *)(((int)stk + 24)) = (*(int *)(((0x5D0 + a4) + 0xC)));
            *(unsigned int *)((a4 + 0x580)) = 0x1;
            *(unsigned int *)(((((*(int *)((a4 + 0x580))) << 2) + (((int)stk + 16) + 0xC)) + 0x0)) = (FUN_0c039354(a4));
            if ((int)(*(int *)((a4 + 0x57C))) >= (int)0x2) {
                FUN_0c039354(a4);
            }
            t17 = *(int *)((a4 + 0x580));
            t30 = (t17 << 2);
            if ((*(int *)(((((int)stk + 16) + 0xC) + (t17 << 2)))) != 0) {
                t19 = 0x0;
                for (;;) {
                    t22 = *(int *)(((((*(int *)(((0x580 + a4) + 0x0))) << 2) + (0x5D0 + a4)) + 0x0));
                    t23 = *(signed char *)((t19 + ((((*(int *)((a4 + 0x580))) * 0x1E) + (0x96 + (t2 + (t1 * 0x28A)))) + ((t22 << 1) + (t22 << 2)))));
                    t24 = *(int *)(((0x5D0 + a4) + (t19 << 2)));
                    t25 = (t19 << 2);
                    t26 = (t19 << 2);
                    t19 = (t19 + 0x1);
                    t27 = t25;
                    if ((int)t24 < (int)(unsigned char)t23) {
                        *(unsigned int *)((((0x5D0 + a4) + t26) + 0x0)) = (unsigned char)t23;
                        *(unsigned int *)(((((int)stk + 16) + 0xC) + t26)) = 0x1;
                        t27 = t26;
                    }
                    if ((int)t19 >= (int)0x6) {
                        break;
                    }
                }
                t30 = t27;
                t36 = (unsigned char)t23;
                t37 = (0x5D0 + a4);
                t38 = 0x6;
            }
            t44 = t30;
            if ((*(int *)(((((int)stk + 16) + 0xC) + 0x4))) != 0) {
                FUN_0c039288(a4, 0x0, 0x1);
                FUN_0c039288(a4, 0x9, 0x1);
                t44 = (FUN_0c039288(a4, 0x2, 0x1));
            } else {
                t49 = t36;
                t50 = t37;
                t51 = t38;
            }
            t61 = t44;
            t69 = 0x0;
            if ((*(int *)(((((int)stk + 16) + 0xC) + 0x8))) != 0) {
                FUN_0c039288(a4, 0x3, 0x2);
                FUN_0c039288(a4, 0x4, 0x2);
                FUN_0c039288(a4, 0x5, 0x2);
                t57 = *(int *)(((int)stk + 16));
                t59 = *(short *)(((((((t57 << 2) + t57) << 1) + (0x226 + (t2 + (t1 * 0x28A)))) + ((*(int *)((a4 + 0x5D8))) << 1)) + 0x0));
                t61 = (FUN_0c038732(a4, 0x3, 0x4, 0x5, 0xA, ((((t59 << 1) + t59) << 2) + (0x1F0 + (t2 + (t1 * 0x28A)))), 0x0));
                t69 = 0x1;
            } else {
                t66 = t49;
                t67 = t50;
                t68 = t51;
            }
            t80 = t61;
            if ((*(int *)(((((int)stk + 16) + 0xC) + 0xC))) != 0) {
                FUN_0c039288(a4, 0x6, 0x3);
                FUN_0c039288(a4, 0x7, 0x3);
                FUN_0c039288(a4, 0x8, 0x3);
                t75 = *(int *)(((int)stk + 24));
                t77 = *(short *)((((((((t75 << 2) + t75) << 1) + (0x226 + (t2 + (t1 * 0x28A)))) + ((*(int *)((a4 + 0x5DC))) << 1)) + 0x32) + 0x0));
                t80 = (FUN_0c038732(a4, 0x6, 0x7, 0x8, 0xA, (((((t77 << 1) + t77) << 2) + (0x1F0 + (t2 + (t1 * 0x28A)))) + 0x6), (t69)));
            } else {
                t85 = t66;
                t86 = t67;
                t87 = t68;
            }
            t96 = t80;
            if (((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) == 0) && ((t91 = *(int *)(((int)stk + 36)), t91 == 0) && ((t92 = *(int *)(((int)stk + 40)), t92 == 0) && ((t93 = *(int *)(((int)stk + 44)), t93 == 0) && (t94 = *(int *)(((int)stk + 48)), t94 == 0))))) {
            } else {
                t96 = (FUN_0c0cc3f8(0x12CA9, t85, t86, t87, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28)));
            }
            t104 = t96;
        }
        t117 = t104;
    }
    return t117;
}

void FUN_0c22b402(int a4, int a5)
{
    int t1;
    int t2;
    int stk[6];

    if (a5 == 0) {
        return;
    }
    if ((unsigned int)a5 >= (unsigned int)0x30000) {
        *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        ((int (*)(int, int))(0xAC22B494))(a4, a5);
    return;
    }
    t1 = (0x1FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbi((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
}

int FUN_0c0106a0(void)
{
    int t0;
    int stk[4];

    _builtin_set_imask(0xE);
    *(unsigned int *)0xC0D8E34 = 0xC010624;
    t0 = ((int (*)(void))(0xAC210C5A))();
    syHwInit();
    FUN_0c0108c6();
    FUN_0c0c4a3c(0x0);
    _builtin_set_imask(0xE);
    FUN_0c0d9630();
    syHwInit2();
    FUN_0c0e6400();
    syRtcInit();
    syRtcSetServerMode(0x1);
    FUN_0c0cdf68();
    FUN_0c0ce708();
    FUN_0c0a5c18();
    _builtin_set_imask(0x0);
    FUN_0c0daf60(0x10, 0x10);
    FUN_0c0db0a0(0xC, 0xC);
    nlPrintf(0xC0F407C);
    FUN_0c0db0a0(0xC, 0xE);
    nlPrintf(0xC0F408C);
    FUN_0c0d8940();
    FUN_0c0d8940();
    _builtin_set_imask(0xE);
    *(unsigned int *)0xC52315C = 0x0;
    FUN_0c0e14a0();
    FUN_0c0e2400(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
    FUN_0c0cbc28();
    *(unsigned int *)0xC23A19C = 0x0;
    FUN_0c0c0384();
    FUN_0c0c4a3c(0x1);
    nlInitMatrix(0xC23A268, 0x20);
    FUN_0c0dc0b0(0x3);
    nlUnitMatrix();
    FUN_0c0dd2f0(0x2000, 1.33333325f, 9.99999975e-05f, 300.0f);
    FUN_0c0dc0b0(0x1);
    FUN_0c0198ac();
    FUN_0c0e2400(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
    FUN_0c0c45d0();
    FUN_0c0e6620(0x1, 0xC0CED7C);
    FUN_0c0e6620(0x0, 0xC0CEDC8);
    _builtin_set_imask(0x0);
    FUN_0c210416();
    FUN_0c0cc384();
    FUN_0c0cea9c();
    FUN_0c0855b0();
    FUN_0c0cbde4();
    FUN_0c0daf60(0x8, 0x8);
    syCfgInit(0xC23AAB0);
    FUN_0c0109b4();
    FUN_0c084104();
    FUN_0c07e1e8();
    FUN_0c0c4d50();
    FUN_0c0c4f66();
    FUN_0c0c4e78((*(int *)0xC23A1A4));
    return FUN_0c0bf928();
}

int FUN_0c047948(int a4, int a5, int a6, int a7)
{
    int t0;
    int t9;
    int t15;
    int t32;
    int t37;
    int t89;
    int t98;
    int t96;
    int stk[21];

    t0 = *(int *)((a4 + 0x3A0));
    if (t0 != 0) {
        if (t0 == 1) {
            FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
            if ((int)(*(int *)((a4 + 0x2B4))) >= (int)0x9) {
                *(unsigned int *)((a4 + 0x3AC)) = 0x3C;
                *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
            }
        } else {
            if (t0 == 2) {
                if ((int)(*(int *)((a4 + 0x2B4))) >= (int)0xA) {
                    *(unsigned int *)((a4 + 0x2B4)) = 0xA;
                }
                t9 = *(int *)((a4 + 0x3AC));
                *(unsigned int *)((a4 + 0x3AC)) = (t9 - 1);
                if ((int)(t9 - 1) < 0) {
                    *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                }
            } else {
                if (t0 == 3) {
                    if (((*(int *)((a4 + 0x2EC))) & 12) != 0) {
                        *(unsigned int *)((a4 + 0x534)) = 0x0;
                        t15 = ((int (*)(int, int, int, int))(FUN_0c02a19a))(a4, a5, a6, a7);
                    }
                }
            }
        }
        t98 = (FUN_0c04685c(a4, 0xA, 0.0f, 0.00999999978f));
    } else {
        t32 = FUN_0c046cc0(a4);
        if (t32 == 0) {
            t96 = (((int (*)(int))(FUN_0c02a19a))(a4));
        } else {
            FUN_0c03442c(a4, (*(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0))), (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0x10), (((int)stk + 12) + 0x10));
            *(float *)(((((int)stk + 12) + 0x2C) + 0x0)) = 0.0f;
            *(float *)(((((int)stk + 12) + 0x2C) + 0x4)) = 0.0f;
            *(float *)(((((int)stk + 12) + 0x2C) + 0x8)) = 0.0f;
            t37 = *(int *)(((int)stk + 12));
            if (t37 != 0) {
                if (t37 != 1) {
                    if (t37 != 2) {
                        if (t37 != 3) {
                        } else {
                            if ((int)(*(int *)((a4 + 0x54C))) < (int)0x3) {
                                *(float *)(((((int)stk + 12) + 0x2C) + 0x0)) = -0.0399999991f;
                                *(float *)(((((int)stk + 12) + 0x2C) + 0x4)) = 0.0f;
                                *(float *)(((((int)stk + 12) + 0x2C) + 0x8)) = 0.0f;
                            }
                        }
                    } else {
                        if ((int)(*(int *)((a4 + 0x54C))) < (int)0x3) {
                            *(float *)(((((int)stk + 12) + 0x2C) + 0x0)) = 0.0f;
                            *(float *)(((((int)stk + 12) + 0x2C) + 0x4)) = 0.0f;
                            *(float *)(((((int)stk + 12) + 0x2C) + 0x8)) = 0.0399999991f;
                        }
                    }
                } else {
                    if ((int)(*(int *)((a4 + 0x54C))) < (int)0x3) {
                        *(float *)(((((int)stk + 12) + 0x2C) + 0x0)) = 0.0399999991f;
                        *(float *)(((((int)stk + 12) + 0x2C) + 0x4)) = 0.0f;
                        *(float *)(((((int)stk + 12) + 0x2C) + 0x8)) = 0.0f;
                    }
                }
            } else {
                if ((*(int *)((a4 + 0x54C))) == 3) {
                    *(unsigned int *)((a4 + 0x2C4)) = 0x59B;
                    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                    *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                }
                *(float *)(((((int)stk + 12) + 0x2C) + 0x0)) = 0.0f;
                *(float *)(((((int)stk + 12) + 0x2C) + 0x4)) = 0.0f;
                *(float *)(((((int)stk + 12) + 0x2C) + 0x8)) = -0.0399999991f;
            }
            FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
            nlPushMatrix(0x0);
            nlUnitMatrix();
            nlRotateAY((*(short *)((a4 + 0x6E))));
            *(float *)(((int)stk + 44)) = (*(float *)(((((int)stk + 12) + 0x2C) + 0x0)));
            *(float *)(((int)stk + 48)) = (*(float *)(((((int)stk + 12) + 0x2C) + 0x4)));
            *(float *)(((int)stk + 52)) = (*(float *)(((((int)stk + 12) + 0x2C) + 0x8)));
            FUN_0c0db470((((int)stk + 12) + 0x20), (((int)stk + 12) + 0x14));
            *(float *)(((0x4B0 + a4) + 0x0)) = (*(float *)(((int)stk + 32)));
            *(float *)(((((int)stk + 12) + 0x4) + 0x0)) = (*(float *)(((int)stk + 36)));
            *(float *)(((0x4B8 + a4) + 0x0)) = (*(float *)(((int)stk + 40)));
            nlPopMatrix(0x1);
            t89 = *(int *)((a4 + 0x3AC));
            *(unsigned int *)((a4 + 0x3AC)) = (t89 - 1);
            if ((int)(t89 - 1) < 0) {
                *(unsigned int *)((a4 + 0x2C4)) = 0x59B;
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
            }
            t96 = (FUN_0c04685c(a4, 0xA, 0.0f, 0.00999999978f));
        }
        t98 = t96;
    }
    return t98;
}

int FUN_0c0e3a08(int a4, int a5)
{
    int stk[9];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    L_C0E3A08:;
    *(unsigned int *)(((int)stk + 16)) = R4;
    *(unsigned int *)(((int)stk + 12)) = R5;
    *(unsigned int *)0xC94C844 = (*(int *)(((*(int *)(((int)stk + 16))) + 0xC4)));
    if (((unsigned int)(*(int *)0xC94C844) >= (unsigned int)0x564)) goto L_C0E3A2E;
    goto L_C0E3A28;
    L_C0E3A28:;
    R0 = (0xFFFFFFFF);
    goto L_C0E3C14;
    L_C0E3C14:;
    return R0;
    L_C0E3A2E:;
    if (((*(int *)(((int)stk + 12))) != 0)) goto L_C0E3A3E;
    goto L_C0E3A34;
    L_C0E3A34:;
    *(unsigned int *)0xC94C81C = 0x200000;
    goto L_C0E3A56;
    L_C0E3A56:;
    *(unsigned int *)0xA0702800 = (*(int *)(((int)stk + 12)));
    *(unsigned int *)0xA0702C00 = (0x1 | (0xFFFE & (*(int *)0xA0702C00)));
    R11 = (0xA0800000);
    R12 = ((*(int *)(((int)stk + 16))));
    R13 = ((*(int *)((((*(int *)(((int)stk + 16))) + 0x54) + 0x0))));
    R14 = (0x0);
    goto L_C0E3A84;
    L_C0E3A84:;
    if (((unsigned int)R14 < (unsigned int)((unsigned int)R13 >> 2))) goto L_C0E3A7A;
    goto L_C0E3A8C;
    L_C0E3A8C:;
    *(unsigned int *)0xA0800050 = (*(int *)(((int)stk + 12)));
    R11 = (0xA0800060);
    R14 = (0x0);
    goto L_C0E3AD6;
    L_C0E3AD6:;
    if (((unsigned int)R14 < (unsigned int)0x8)) goto L_C0E3AC8;
    goto L_C0E3ADC;
    L_C0E3ADC:;
    *(unsigned int *)0xA0702C00 = ((*(int *)0xA0702C00) & 0xFFFE);
    R14 = (0x0);
    goto L_C0E3B28;
    L_C0E3B28:;
    if (((unsigned int)R14 < (unsigned int)0x8)) goto L_C0E3AEC;
    goto L_C0E3B2E;
    L_C0E3B2E:;
    R14 = (0x0);
    goto L_C0E3B8A;
    L_C0E3B8A:;
    if (((unsigned int)R14 < (unsigned int)0x8)) goto L_C0E3B34;
    goto L_C0E3B90;
    L_C0E3B90:;
    *(unsigned int *)0xC94C814 = ((*(int *)((((*(int *)(((int)stk + 16))) + 0x84) + 0x0))) + 0xA0800000);
    *(unsigned int *)0xC94C818 = ((*(int *)((((*(int *)(((int)stk + 16))) + 0x80) + 0x0))) + 0xA0800010);
    *(unsigned int *)0xC94C810 = 0xA0800400;
    *(unsigned int *)0xC94C820 = 0x0;
    *(unsigned int *)0xC94C828 = 0x0;
    goto L_C0E3BC6;
    L_C0E3BC6:;
    if (((*(int *)0xA080005C) == 0)) goto L_C0E3BC6;
    goto L_C0E3BCE;
    L_C0E3BCE:;
    R0 = (0x0);
    goto L_C0E3C14;
    L_C0E3B34:;
    *(unsigned char *)(((unsigned char)((((R14 << 1) + R14) << 2) << 1) + 0xC94C848)) = 0xFFFFFFFF;
    *(unsigned char *)((((unsigned char)((((R14 << 1) + R14) << 2) << 1) + 0xC94C848) + 0x1)) = 0x0;
    *(unsigned int *)(((0xC94C850 + (unsigned char)((((R14 << 1) + R14) << 2) << 1)) + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)(((0xC94C84C + (unsigned char)((((R14 << 1) + R14) << 2) << 1)) + 0x0)) = 0xFFFFFFFF;
    R14 = ((R14 + 0x1));
    goto L_C0E3B8A;
    L_C0E3AEC:;
    *(unsigned int *)(((signed char)(((R14 << 1) + R14) << 2) + 0xC94C908)) = 0xFFFFFFFF;
    *(unsigned int *)((((signed char)(((R14 << 1) + R14) << 2) + 0xC94C908) + 0x4)) = 0x0;
    *(unsigned int *)((((signed char)(((R14 << 1) + R14) << 2) + 0xC94C908) + 0x8)) = 0x0;
    R14 = ((R14 + 0x1));
    goto L_C0E3B28;
    L_C0E3AC8:;
    *(unsigned int *)((R11 + 0x0)) = 0xFFFFFFFF;
    if (((*(int *)((R11 + 0x0))) != -1)) goto L_C0E3AC8;
    goto L_C0E3AD2;
    L_C0E3AD2:;
    R11 = ((R11 + 0x4));
    R14 = ((R14 + 0x1));
    goto L_C0E3AD6;
    L_C0E3A7A:;
    *(unsigned int *)((R11 + 0x0)) = (*(int *)((R12 + 0x0)));
    R11 = ((R11 + 0x4));
    R12 = ((R12 + 0x4));
    R14 = ((R14 + 0x1));
    goto L_C0E3A84;
    L_C0E3A3E:;
    if (((*(int *)(((int)stk + 12))) != 0x200)) goto L_C0E3A50;
    goto L_C0E3A46;
    L_C0E3A46:;
    *(unsigned int *)0xC94C81C = 0x800000;
    goto L_C0E3A56;
    L_C0E3A50:;
    R0 = (0xFFFFFFFE);
    goto L_C0E3C14;
}

void FUN_0c02ddf8(int a4)
{
    int t0;
    int t5;
    int t8;
    int t16;
    int t17;
    int t18;
    int t19;
    int t23;
    int t27;
    int t28;
    int t29;
    int t35;
    int t45;
    int t65;
    int t66;

    *(unsigned int *)((a4 + 0x4FC)) = 0x0;
    t0 = FUN_0c0236ce(a4);
    if (t0 == 0) {
        t5 = *(int *)((a4 + 0x4F8));
        if ((t5 != 6) && (t5 != 7)) {
            t8 = *(int *)((a4 + 0x4F8));
            if (t8 == 8) {
                *(unsigned int *)((a4 + 0x4F8)) = 0xA;
            } else {
                if (t8 != 9) {
                    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                } else {
                    *(unsigned int *)((a4 + 0x4F8)) = 0xA;
                }
            }
        } else {
            *(unsigned int *)((a4 + 0x4F8)) = 0x8;
        }
        return;
    }
    t16 = *(int *)((a4 + 0x4F8));
    if ((unsigned int)t16 >= (unsigned int)0xE) {
        return;
    }
    switch ((t16 << 1)) {
        case 0:
        {
            return;
        }
        case 2:
        {
            t17 = FUN_0c02a416(a4);
            if (t17 != 0) {
                *(unsigned int *)((a4 + 0x538)) = 0x0;
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            } else {
                t18 = FUN_0c03593a(a4);
                if (t18 != 0) {
                    t19 = FUN_0c02a35a(a4);
                    if (t19 != 0) {
                        if (t19 != 1) {
                            if (t19 != 2) {
                                *(unsigned int *)((a4 + 0x538)) = 0x2;
                                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                            } else {
                                *(unsigned int *)((a4 + 0x538)) = 0x2;
                                *(unsigned int *)((a4 + 0x4F8)) = 0x6;
                            }
                        } else {
                            *(unsigned int *)((a4 + 0x524)) = 0x0;
                            t23 = FUN_0c0236ce(a4);
                            if (t23 != 0) {
                                *(unsigned int *)((a4 + 0x538)) = 0x2;
                                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                            } else {
                                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                            }
                        }
                    } else {
                        t27 = FUN_0c035b26(a4);
                        if (t27 != 0) {
                            t28 = FUN_0c035ce4(a4);
                            if (t28 != 0) {
                                *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                            } else {
                                t29 = *(int *)((a4 + 0x538));
                                if (t29 != 8) {
                                    if (t29 == 4) {
                                        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                    } else {
                                        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                    }
                                } else {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                }
                            }
                        } else {
                            t35 = *(int *)((a4 + 0x538));
                            if (t35 != 8) {
                                if (t35 == 4) {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                                } else {
                                    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                                }
                            } else {
                                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                            }
                        }
                    }
                } else {
                    *(unsigned int *)((a4 + 0x538)) = 0x1;
                    if ((*(int *)((a4 + 0x54C))) == 0) {
                        t45 = FUN_0c034e2c(a4);
                        if (t45 != 0) {
                            if ((*(int *)((a4 + 0x4F0))) != 5) {
                                *(unsigned int *)((a4 + 0x4F8)) = 0xC;
                            } else {
                                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                            }
                        } else {
                            *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                        }
                    } else {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x2;
                    }
                }
            }
            return;
        }
        case 4:
        {
            return;
        }
        case 6:
        {
            FUN_0c02a416(a4);
            *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            return;
        }
        case 8:
        {
            return;
        }
        case 10:
        {
            FUN_0c02a220(a4);
    return;
        }
        case 12:
        {
            return;
        }
        case 14:
        {
            *(unsigned int *)((a4 + 0x4F8)) = 0x8;
            return;
        }
        case 16:
        {
            return;
        }
        case 18:
        {
            *(unsigned int *)((a4 + 0x4F8)) = 0xA;
            return;
        }
        case 20:
        {
            return;
        }
        case 22:
        {
            t65 = FUN_0c02a416(a4);
            if ((t65 == 0) && (t66 = *(int *)((a4 + 0x504)), t66 != 0)) {
                *(unsigned int *)((a4 + 0x4F8)) = 0x2;
            } else {
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            }
            return;
        }
        case 24:
        {
            return;
        }
        default:
        {
            FUN_0c02a416(a4);
            *(unsigned int *)((a4 + 0x4F8)) = 0xA;
            return;
        }
    }
}

int FUN_0c0e2b0e(int a4)
{
    int t16;
    int t33;
    int t27;
    int t28;
    int t29;
    int t37;
    int t42;
    int t43;
    int t44;
    int t45;
    int t56;
    int t57;
    int t69;
    int t63;
    int t64;
    int t65;
    int t99;
    int t3;
    int t4;
    int t91;
    int t83;
    int t50;
    int t76;

    *(unsigned int *)0xC94C7F0 = ((*(int *)0xC94C7F0) + (*(int *)(((a4 - 12) + 0x0))));
    if (((int)(*(int *)((((a4 - 12) - 4) + 0x0))) >= 0) && (t3 = *(int *)(((a4 - 12) + 0x0)), t4 = *(int *)(((a4 - 12) + (t3 << 2))), (int)t4 >= 0)) {
        *(unsigned int *)0xC94C7EC = ((*(int *)0xC94C7EC) + 0x1);
        t16 = *(int *)(((a4 - 12) + 0x0));
        *(unsigned int *)(((a4 - 12) + 0x0)) = (-t16);
        *(unsigned int *)(((a4 - 12) + (((-(-t16)) - 1) << 2))) = (-t16);
        *(unsigned int *)((((a4 - 12) + 0x4) + 0x0)) = (*(int *)0xC523160);
        *(unsigned int *)((((a4 - 12) + 0x8) + 0x0)) = 0x0;
        *(unsigned int *)((0xC52315C + (((*(int *)0xC523160) + 0x2) << 2))) = ((((a4 - 12) - 0xC52315C) >> 1) >> 1);
        *(unsigned int *)0xC523160 = ((((a4 - 12) - 0xC52315C) >> 1) >> 1);
        t91 = (a4 - 12);
    } else {
        if ((int)(*(int *)((((a4 - 12) - 4) + 0x0))) < 0) {
            if ((int)(*(int *)(((a4 - 12) + ((*(int *)(((a4 - 12) + 0x0))) << 2)))) >= 0) {
                t33 = (a4 - 12);
                if ((int)(*(int *)((((a4 - 12) - 4) + 0x0))) < 0) {
                    t27 = *(int *)((((a4 - 12) - 4) + 0x0));
                    t28 = *(int *)(((a4 - 12) + 0x0));
                    t29 = *(int *)((((t27 << 2) + (a4 - 12)) + 0x0));
                    *(unsigned int *)((((t27 << 2) + (a4 - 12)) + 0x0)) = (t29 - t28);
                    *(unsigned int *)((((t27 << 2) + (a4 - 12)) + (((-(t29 - t28)) - 1) << 2))) = (t29 - t28);
                    t33 = ((t27 << 2) + (a4 - 12));
                }
                t50 = t33;
            } else {
                *(unsigned int *)0xC94C7EC = ((*(int *)0xC94C7EC) - 1);
                t37 = *(int *)(((a4 - 12) + 0x0));
                *(unsigned int *)((0xC52315C + (((*(int *)(((((t37 << 2) + (a4 - 12)) + 0x4) + 0x0))) + 0x2) << 2))) = (*(int *)(((((t37 << 2) + (a4 - 12)) + 0x8) + 0x0)));
                *(unsigned int *)((0xC52315C + (((*(int *)(((((t37 << 2) + (a4 - 12)) + 0x8) + 0x0))) + 0x1) << 2))) = (*(int *)(((((t37 << 2) + (a4 - 12)) + 0x4) + 0x0)));
                t42 = *(int *)((((a4 - 12) - 4) + 0x0));
                t43 = *(int *)(((a4 - 12) + 0x0));
                t44 = *(int *)(((a4 - 12) + (t43 << 2)));
                t45 = *(int *)((((t42 << 2) + (a4 - 12)) + 0x0));
                *(unsigned int *)((((t42 << 2) + (a4 - 12)) + 0x0)) = (t45 + (t44 - t43));
                *(unsigned int *)((((t42 << 2) + (a4 - 12)) + (((-(t45 + (t44 - t43))) - 1) << 2))) = (t45 + (t44 - t43));
                t50 = ((t42 << 2) + (a4 - 12));
            }
            t83 = t50;
        } else {
            if ((int)(*(int *)(((a4 - 12) + ((*(int *)(((a4 - 12) + 0x0))) << 2)))) < 0) {
                t56 = *(int *)(((a4 - 12) + 0x0));
                t57 = *(int *)((((t56 << 2) + (a4 - 12)) + 0x0));
                *(unsigned int *)(((a4 - 12) + 0x0)) = (t57 - t56);
                *(unsigned int *)(((a4 - 12) + (((-(t57 - t56)) - 1) << 2))) = (t57 - t56);
                *(unsigned int *)((0xC52315C + (((*(int *)(((((t56 << 2) + (a4 - 12)) + 0x4) + 0x0))) + 0x2) << 2))) = ((((a4 - 12) - 0xC52315C) >> 1) >> 1);
                *(unsigned int *)((0xC52315C + (((*(int *)(((((t56 << 2) + (a4 - 12)) + 0x8) + 0x0))) + 0x1) << 2))) = ((((a4 - 12) - 0xC52315C) >> 1) >> 1);
                *(unsigned int *)((((a4 - 12) + 0x4) + 0x0)) = (*(int *)(((((t56 << 2) + (a4 - 12)) + 0x4) + 0x0)));
                *(unsigned int *)((((a4 - 12) + 0x8) + 0x0)) = (*(int *)(((((t56 << 2) + (a4 - 12)) + 0x8) + 0x0)));
                t76 = (a4 - 12);
            } else {
                t69 = (a4 - 12);
                if ((int)(*(int *)((((a4 - 12) - 4) + 0x0))) < 0) {
                    t63 = *(int *)((((a4 - 12) - 4) + 0x0));
                    t64 = *(int *)(((a4 - 12) + 0x0));
                    t65 = *(int *)((((t63 << 2) + (a4 - 12)) + 0x0));
                    *(unsigned int *)((((t63 << 2) + (a4 - 12)) + 0x0)) = (t65 - t64);
                    *(unsigned int *)((((t63 << 2) + (a4 - 12)) + (((-(t65 - t64)) - 1) << 2))) = (t65 - t64);
                    t69 = ((t63 << 2) + (a4 - 12));
                }
                t76 = t69;
            }
            t83 = t76;
        }
        t91 = t83;
    }
    *(unsigned int *)((0xC52315C + (((*(int *)(((t91 + 0x4) + 0x0))) + 0x2) << 2))) = (*(int *)(((t91 + 0x8) + 0x0)));
    *(unsigned int *)((0xC52315C + (((*(int *)(((t91 + 0x8) + 0x0))) + 0x1) << 2))) = (*(int *)(((t91 + 0x4) + 0x0)));
    *(unsigned int *)(((t91 + 0x4) + 0x0)) = 0x0;
    *(unsigned int *)(((t91 + 0x8) + 0x0)) = (*(int *)0xC523164);
    t99 = *(int *)0xC523164;
    *(unsigned int *)((0xC52315C + ((t99 + 0x1) << 2))) = (((t91 - 0xC52315C) >> 1) >> 1);
    *(unsigned int *)0xC523164 = (((t91 - 0xC52315C) >> 1) >> 1);
    return ((t99 + 0x1) << 2);
}

int FUN_0c06742c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t8;
    float u12;
    int t13;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t85;
    int t87;
    float u88;
    float u89;
    int t78;
    int t80;
    float u81;
    float u82;
    int t71;
    int t73;
    float u74;
    float u75;
    float u116;
    float u122;
    int t3;
    int t4;
    int t5;
    int t6;
    float u49;
    float u50;
    int t64;
    int t66;
    float u67;
    float u68;
    int stk[11];

    t0 = *(int *)0xC23ED5C;
    if ((t0 & 0x10000) != 0) {
        t1 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    } else {
        t3 = 0xC23ED5C;
        t4 = t0;
        t5 = 0x10000;
        t6 = a4;
    }
    t8 = *(int *)((a4 + 0x80));
    if (t8 != 0) {
        if (t8 != 1) {
        } else {
            if ((*(float *)((a4 + 0x34))) > 30.0f) {
                u12 = *(float *)((a4 + 0x34));
                *(float *)((a4 + 0x34)) = (u12 + 0.199999988f);
                if ((u12 + 0.199999988f) > 35.0f) {
                    t13 = ((int (*)(int))(FUN_0c0e19f2))(t6);
                }
            } else {
                *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + 0.699999988f);
            }
            *(float *)((a4 + 0x74)) = ((*(float *)((a4 + 0x74))) + 0.0599999987f);
        }
    } else {
        t43 = t3;
        t44 = t4;
        t45 = t5;
        t46 = 0x0;
        t47 = 0x0;
        t48 = 0x0;
        for (;;) {
            t85 = t43;
            t87 = t46;
            u88 = u49;
            u89 = u50;
            if ((*(int *)((t48 + 0xC247030))) == 4) {
                t46 = 0xC246FF0;
                t46 = (t46 + t47);
                t46 = (*(int *)((t46 + 0x0)));
                u50 = (*(float *)((a4 + 0x30)));
                u49 = (*(float *)((t46 + 0x30)));
                u49 = (u49 - u50);
                u49 = _builtin_fabsf(u49);
                t78 = t43;
                t80 = t46;
                u81 = u49;
                u82 = u50;
                if (4.0f > u49) {
                    u49 = (*(float *)((t46 + 0x38)));
                    u50 = (*(float *)((a4 + 0x38)));
                    u49 = (u49 - u50);
                    u49 = _builtin_fabsf(u49);
                    t71 = t43;
                    t73 = t46;
                    u74 = u49;
                    u75 = u50;
                    if (4.0f > u49) {
                        u49 = (*(float *)((t46 + 0x34)));
                        u50 = (*(float *)((a4 + 0x34)));
                        u49 = (u49 - u50);
                        u49 = _builtin_fabsf(u49);
                        if (4.0f > u49) {
                            t46 = 0x229A9;
                            FUN_0c0cc3f8(t46, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                            t46 = 0xAE;
                            FUN_0c0cc3f8(t46, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                            *(unsigned int *)0xC2475B0 = ((*(int *)0xC2475B0) | 0x4);
                            t44 = (*(int *)((a4 + 0x80)));
                            t44 = (t44 + 0x1);
                            *(unsigned int *)((a4 + 0x80)) = t44;
                        } else {
                            t64 = t43;
                            t66 = t46;
                            u67 = u49;
                            u68 = u50;
                        }
                        t71 = t64;
                        t73 = t66;
                        u74 = u67;
                        u75 = u68;
                    }
                    t78 = t71;
                    t80 = t73;
                    u81 = u74;
                    u82 = u75;
                }
                t85 = t78;
                t87 = t80;
                u88 = u81;
                u89 = u82;
            }
            u49 = u88;
            u50 = u89;
            t43 = t85;
            t45 = 0x8;
            t46 = t87;
            t48 = (t48 + 0x4);
            t47 = (t47 + 0x4);
            if ((unsigned int)t48 >= (unsigned int)t45) {
                break;
            }
        }
        FUN_0c0c60d0((a4 + 0x30), 0xC0FA268, 0x6);
    }
    *(unsigned int *)((a4 + 0x98)) = ((*(int *)((a4 + 0x98))) + 0x300);
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    u116 = (float)(*(short *)((a4 + 0x62)));
    u116 = u116 + 2048.0f * (FUN_0c0da410((*(int *)((a4 + 0x98)))));
    nlRotateAY((int)u116);
    nlRotateAZ((*(short *)((a4 + 0x64))));
    nlRotateAX((*(short *)((a4 + 0x60))));
    u122 = *(float *)((a4 + 0x74));
    nlScale(u122, u122, u122);
    FUN_0c0de000((*(float *)((a4 + 0x74))));
    FUN_0c0c465c(((*(int *)(((0x78 + a4) + 0x0))) + ((*(int *)0xC23A258) & 0x1)));
    return nlPopMatrix(0x1);
}
