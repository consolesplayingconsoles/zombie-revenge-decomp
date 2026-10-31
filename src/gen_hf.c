/* Straight-line functions with calls and guards (batch gen_hf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010128(int, int);
int FUN_0c010146(int, int);
int FUN_0c022838(int);
int FUN_0c0277c4(int, float);
int FUN_0c03f4bc(int);
int FUN_0c04080e(int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c05473c(int, int, int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c077780(int);
int FUN_0c07787c(int);
int FUN_0c081404(int, int, int, float);
int FUN_0c0844dc(int, int, int, float);
int FUN_0c084570(int, int, int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c08e46e(int);
int FUN_0c0a447c(int, int);
int FUN_0c0a44c6(int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d8c40(int, int, int);
int FUN_0c0d9dc0(int, int, int, float, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db840(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5dc0(void);
int nlAddVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
float nlLength(int, int);
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
int FUN_0c08d068(int a4, int a5, int a6, int a7);
float FUN_0c081870(int a4, int a5, int a6, float f4, float f5);
float FUN_0c0408a0(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c077200(int a4, int a5, int a6, int a7);

int FUN_0c08d068(int a4, int a5, int a6, int a7)
{
    int stk[32];
    register int t1;
    register int t12;
    register int t56;
    register int t14;
    register int t15;
    register int t16;
    register int t18;
    register int t20;
    register int t22;
    register float u24;
    register float u25;
    register int t26;
    register float u28;
    register int t100;
    register float u103;
    register float u68;
    register float u62;
    register int t105;
    register int t106;
    register int t107;
    int t108;
    register float u109;
    register float u110;
    register float u111;
    register float u112;
    register float u113;
    register float u115;
    register float u116;
    register float u118;
    register int t121;
    register int t123;
    register int t124;
    register int t125;
    register float u127;
    register int t130;
    register int t137;
    register int t138;
    register int t132;
    register int t133;
    register int t144;
    register int t147;
    register float u148;
    register float u150;
    register int t154;
    register int t158;
    register int t167;
    register float u172;
    register float u173;
    register float u175;
    register int t301;
    register int t218;
    register float u224;
    register int t196;
    register int t197;
    register float u199;
    register float u200;
    register int t205;
    register float u207;
    register int t225;
    register int t226;
    register int t228;
    register int t229;
    register int t230;
    register float u231;
    register float u232;
    register float u233;
    register int t235;
    register int t246;
    register int t249;
    register float u252;
    register int t265;
    register int t290;
    register int t9;
    register float u57;
    register int t46;
    register float u47;
    register int t36;
    register float u37;
    register float u101;
    register float u102;
    register int t90;
    register float u91;
    register float u92;
    register float u93;
    register float u191;
    register float u192;
    register float u198;
    register int t248;
    register int t271;
    register int t274;
    register float u275;
    register float u276;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    *(unsigned int *)((a4 + 0x10C)) = ((*(int *)((a4 + 0x10C))) + 0x1);
    if ((int)(*(int *)((a4 + 0x10C))) >= (int)0xB4) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    } else {
        t9 = a4;
    }
    t12 = *(int *)((a4 + 0x10C));
    t56 = t9;
    if ((*(int *)((a4 + 0x3C))) == 0) {
    } else {
        if ((unsigned int)(int)((float)t12 * 0.332999974f) < (unsigned int)0x18) {
            t14 = *(signed char *)((((((int)((float)t12 * 0.332999974f) << 1) + ((int)((float)t12 * 0.332999974f) << 2)) + 0xC10AB40) + 0x5));
            t15 = *(signed char *)((((((int)((float)t12 * 0.332999974f) << 1) + ((int)((float)t12 * 0.332999974f) << 2)) + 0xC10AB40) + 0x0));
            t16 = *(signed char *)((((((int)((float)t12 * 0.332999974f) << 1) + ((int)((float)t12 * 0.332999974f) << 2)) + 0xC10AB40) + 0x1));
            t18 = (unsigned char)t16;
            if ((int)(unsigned char)t16 >= (int)(*(int *)0xC248DE4)) {
                t18 = (*(int *)0xC248DE4);
            }
            t20 = *(signed char *)((((((int)((float)t12 * 0.332999974f) << 1) + ((int)((float)t12 * 0.332999974f) << 2)) + 0xC10AB40) + 0x2));
            t22 = *(signed char *)((((((int)((float)t12 * 0.332999974f) << 1) + ((int)((float)t12 * 0.332999974f) << 2)) + 0xC10AB40) + 0x3));
            u24 = (float)(unsigned char)t20;
            u24 = u24 + ((float)(0xFF - (unsigned char)t14) / 255.0f) * (float)((*(int *)0xC248DD4) - (unsigned char)t20);
            u25 = (float)(unsigned char)t22;
            u25 = u25 + ((float)(0xFF - (unsigned char)t14) / 255.0f) * (float)((*(int *)0xC248DD8) - (unsigned char)t22);
            t26 = *(signed char *)((((((int)((float)t12 * 0.332999974f) << 1) + ((int)((float)t12 * 0.332999974f) << 2)) + 0xC10AB40) + 0x4));
            *(unsigned int *)(((int)stk + 8)) = (unsigned char)t26;
            u28 = (float)(unsigned char)t26;
            u28 = u28 + ((float)(0xFF - (unsigned char)t14) / 255.0f) * (float)((*(int *)0xC248DDC) - (unsigned char)t26);
            *(int *)((int)stk + 4) = (int)u28;
            FUN_0c084570((unsigned char)t15, t18, (int)u24, (int)u25, (int)u28);
            FUN_0c0d8c40(((((int)u24 << 16) | ((int)u25 << 8)) | (int)u28), ((((int)u24 << 16) | ((int)u25 << 8)) | (int)u28), ((((int)u24 << 16) | ((int)u25 << 8)) | (int)u28));
        } else {
            if ((int)((float)t12 * 0.332999974f) == 24) {
                FUN_0c08e46e(0xB4);
            } else {
                t36 = (int)((float)t12 * 0.332999974f);
                u37 = 0.332999974f;
            }
            t46 = t36;
            u47 = u37;
        }
        t56 = t46;
        u57 = u47;
    }
    t100 = t56;
    u103 = u57;
    if (((*(int *)((a4 + 0x40))) != 0) && ((int)t12 >= (int)0x8)) {
        if ((int)(t12 - 8) < (int)0x3E) {
            u68 = ((float)(t12 - 8) / 4.0f);
            if ((int)(t12 - 8) < (int)0x4) {
            } else {
                u62 = 1.0f;
                if ((int)(t12 - 8) > (int)0x20) {
                    u62 = (1.0f - ((float)((t12 - 8) - 32) * 0.0333333313f));
                }
                u68 = u62;
            }
            nlPushMatrix(0x0);
            FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
            nlRotateAY((*(short *)((t1 + 0x3CE))));
            nlRotateAX((*(short *)((t1 + 0x3CC))));
            nlScale(50.0f, 50.0f, 50.0f);
            FUN_0c0de000(50.0f);
            FUN_0c0848bc((u68 * 0.399999976f), (u68 * 0.399999976f), (u68 * 0.399999976f));
            FUN_0c0c465c(0x294);
            nlPopMatrix(0x1);
            u91 = 50.0f;
            u92 = (u68 * 0.399999976f);
        } else {
            t90 = (t12 - 8);
            u93 = u57;
        }
        t100 = t90;
        u101 = u91;
        u102 = u92;
        u103 = u93;
    }
    *(float *)(((int)stk + 44)) = ((float)(t12 - 30) * 0.0333333313f);
    *(unsigned int *)(((int)stk + 12)) = 0x6;
    t105 = 0x24;
    t106 = (t12 - 30);
    t107 = 0xD;
    t108 = 0x47AE927;
    u109 = u103;
    u110 = ((float)(t12 - 30) * 0.0333333313f);
    u111 = 0.0333333313f;
    u112 = u101;
    u113 = u102;
    for (;;) {
        if ((*(int *)(((int)stk + 12))) != 0) {
            t105 = 0xC08D42C;
            u115 = *(float *)((t105 + 0x0));
            t105 = 0xC08D430;
            u116 = *(float *)((t105 + 0x0));
            t105 = 0x10C;
            u112 = u115;
            u110 = (float)(*(int *)((a4 + t105)));
            u118 = u112;
            u118 = u118 + u116 * u110;
            u112 = u118;
            t105 = t108;
            t105 = (t105 & 0x1);
            t121 = t105;
            t105 = ((int)(((unsigned int)t121 >> 1) | ((unsigned int)t121 << 31)));
            u113 = 1.0f;
            t123 = (((t108 >> 1) | t105) ^ t107);
            t124 = ((((t108 >> 1) | t105) ^ t107) | t107);
            t125 = (0xFFF & (((t108 >> 1) | t105) ^ t107));
            t105 = 0xC08D434;
            u110 = (float)t125;
            u127 = u113;
            u127 = u127 + (*(float *)((t105 + 0x0))) * u110;
            u113 = u127;
            t105 = t123;
            t105 = (t105 & 0x1);
            t130 = t105;
            t105 = ((int)(((unsigned int)t130 >> 1) | ((unsigned int)t130 << 31)));
            t106 = 0x4;
            t106 = (t106 & (((t123 >> 1) | t105) ^ (t124 * 0x22AC8EE1)));
            t106 = (t106 + 0x4);
            *(unsigned int *)(((int)stk + 16)) = t106;
            t137 = (((t123 >> 1) | t105) ^ (t124 * 0x22AC8EE1));
            t138 = (((((t123 >> 1) | t105) ^ (t124 * 0x22AC8EE1)) | (t124 * 0x22AC8EE1)) * 0x22AC8EE1);
            if ((int)t12 > (int)0x1E) {
                t132 = (((t123 >> 1) | t105) ^ (t124 * 0x22AC8EE1));
                t133 = (((((t123 >> 1) | t105) ^ (t124 * 0x22AC8EE1)) | (t124 * 0x22AC8EE1)) * 0x22AC8EE1);
                t105 = 0x24;
                u110 = (*(float *)((((int)stk + 8) + t105)));
                u113 = (u113 - u110);
                t137 = t132;
                t138 = t133;
            }
            t106 = t137;
            if (u113 > 1.0f) {
                u113 = 1.0f;
            }
            t106 = (t106 >> 1);
            t105 = t137;
            t105 = (t105 & 0x1);
            t144 = t105;
            t105 = ((int)(((unsigned int)t144 >> 1) | ((unsigned int)t144 << 31)));
            t106 = (t106 | t105);
            t108 = (t106 ^ t138);
            t108 = (t108 >> 1);
            t107 = (unsigned short)(t106 ^ t138);
            t105 = (t106 ^ t138);
            t105 = (t105 & 0x1);
            t147 = t105;
            t105 = ((int)(((unsigned int)t147 >> 1) | ((unsigned int)t147 << 31)));
            t108 = (t108 | t105);
            t108 = (t108 ^ ((t138 | (t106 ^ t138)) * 0x22AC8EE1));
            t105 = 0xC08D438;
            u110 = (float)(0xFFF & t108);
            u109 = (float)t12;
            *(unsigned int *)(((int)stk + 8)) = ((((t138 | (t106 ^ t138)) * 0x22AC8EE1) | t108) * 0x22AC8EE1);
            u148 = *(float *)((t105 + 0x0));
            t105 = 0xC08D43C;
            u111 = u148;
            u150 = u111;
            u150 = u150 + (*(float *)((t105 + 0x0))) * u110;
            u111 = u150;
            u111 = (u111 * u109);
            t105 = 0x20;
            *(float *)((((int)stk + 8) + t105)) = ((FUN_0c0d9e90(t107)) * u111);
            u110 = u111;
            u111 = (FUN_0c0da410(t107));
            u111 = (u111 * u110);
            t105 = t108;
            t105 = (t105 & 0x1);
            t154 = (t108 >> 1);
            t108 = (*(int *)(((int)stk + 8)));
            t158 = t105;
            t105 = ((int)(((unsigned int)t158 >> 1) | ((unsigned int)t158 << 31)));
            t107 = (*(int *)(((int)stk + 8)));
            t108 = (t108 ^ (t154 | t105));
            t107 = (t107 | t108);
            t107 = (t107 * 0x22AC8EE1);
            t105 = 0x20;
            u110 = (*(float *)((((int)stk + 8) + t105)));
            t105 = 0x2C;
            *(float *)((((int)stk + 8) + t105)) = ((FUN_0c0d9e90(t108)) * u110);
            t105 = 0x20;
            u110 = (*(float *)((((int)stk + 8) + t105)));
            t105 = 0x28;
            *(float *)((((int)stk + 8) + t105)) = ((FUN_0c0da410(t108)) * u110);
            t105 = t108;
            t105 = (t105 & 0x1);
            u109 = 0.0f;
            t167 = t105;
            t105 = ((int)(((unsigned int)t167 >> 1) | ((unsigned int)t167 << 31)));
            t108 = ((t108 >> 1) | t105);
            t108 = (t108 ^ t107);
            t107 = (t107 | t108);
            t107 = (t107 * 0x22AC8EE1);
            *(unsigned int *)(((int)stk + 8)) = t108;
            if (u113 > u109) {
                t106 = 0xC0DC510;
                t105 = (nlPushMatrix(0x0));
                t105 = 0x28;
                u110 = (*(float *)((((int)stk + 8) + t105)));
                t105 = 0x38;
                u172 = *(float *)((a4 + t105));
                t105 = 0x34;
                u173 = *(float *)((a4 + t105));
                t105 = 0x2C;
                u175 = (u172 + u110);
                u110 = (*(float *)((((int)stk + 8) + t105)));
                t105 = 0x30;
                t105 = (FUN_0c0dcc70(((*(float *)((a4 + t105))) + u110), (u173 + u111), u175));
                t105 = 0x3CE;
                t105 = (nlRotateAY((*(short *)((t1 + t105)))));
                t105 = 0x3CC;
                t105 = (nlRotateAX((*(short *)((t1 + t105)))));
                t105 = (nlRotateAZ((*(int *)(((int)stk + 8)))));
                t106 = 0xC0DCB80;
                t105 = (nlScale(u112, u112, u112));
                t105 = (FUN_0c0de000(u112));
                t106 = 0xC0848BC;
                t105 = (FUN_0c0848bc(u113, u113, u113));
                t106 = 0xC0C475C;
                t105 = (FUN_0c0c475c(((*(int *)(((int)stk + 16))) + 0x236), 1.0f));
                t105 = (nlPopMatrix(0x1));
            } else {
                u191 = u109;
                u192 = u110;
            }
            u109 = u191;
            u110 = u192;
            t106 = (*(int *)(((int)stk + 12)));
            t106 = (t106 - 1);
            *(unsigned int *)(((int)stk + 12)) = t106;
            continue;
        }
        break;
    }
    t301 = t100;
    if ((int)t12 >= (int)0x5) {
        *(unsigned int *)(((int)stk + 16)) = (t12 - 5);
        t218 = (t12 - 5);
        u224 = u113;
        if ((t12 - 5) == 0) {
            *(unsigned int *)(((int)stk + 12)) = 0x0;
            t196 = 0xC08D57C;
            t197 = (a4 + 0x44);
            u199 = u112;
            u200 = u113;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 12))) >= (int)0x5) {
                    break;
                }
                t196 = 0xC;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t197) = *(struct mv3 *)((a4 + 0x30)); }
                t196 = (FUN_0c0da2e0());
                t196 = (unsigned short)t196;
                *(unsigned int *)((t197 + 0x18)) = t196;
                t196 = (FUN_0c0da2e0());
                t196 = (t196 & 0x3);
                *(unsigned int *)((t197 + 0x1C)) = t196;
                *(unsigned int *)((t197 + 0x20)) = t12;
                t196 = (FUN_0c0da2e0());
                t196 = (unsigned char)t196;
                u198 = 0.000784313655f;
                t205 = t196;
                t196 = 0xC08D588;
                u199 = (*(float *)((t196 + 0x0)));
                u207 = u199;
                u207 = u207 + u198 * (float)t205;
                u199 = u207;
                t196 = (FUN_0c0da2e0());
                t196 = (t196 & 0x2FFF);
                *(unsigned int *)(((int)stk + 8)) = t196;
                u198 = (FUN_0c0d9e90(t196));
                u200 = u198;
                u200 = (u200 * u199);
                u198 = (FUN_0c0da410((*(int *)(((int)stk + 8)))));
                u198 = (u198 * u199);
                t196 = 0x10;
                *(float *)((t197 + t196)) = u198;
                t196 = (FUN_0c0da2e0());
                t196 = (unsigned char)t196;
                t196 = (t196 << 8);
                *(unsigned int *)(((int)stk + 8)) = t196;
                u198 = (FUN_0c0d9e90(t196));
                u198 = (u198 * u200);
                t196 = 0xC;
                *(float *)((t197 + t196)) = u198;
                u198 = (FUN_0c0da410((*(int *)(((int)stk + 8)))));
                u198 = (u198 * u200);
                t196 = 0x14;
                *(float *)((t197 + t196)) = u198;
                t197 = (t197 + 0x28);
                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
            }
            t218 = 0x0;
            u224 = u200;
        }
        *(unsigned int *)(((int)stk + 28)) = 0x0;
        t225 = *(int *)(((int)stk + 16));
        t226 = ((~(((~t225) + 0x1) & 0x1)) + 0x1);
        if ((int)t225 >= 0) {
            t226 = (t225 & 0x1);
        }
        *(unsigned int *)(((int)stk + 36)) = (t226 + 0x1);
        t228 = t218;
        t229 = t100;
        t230 = (a4 + 0x44);
        u231 = u109;
        u232 = u110;
        u233 = u224;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 28))) < (int)0x5) {
                t235 = *(int *)((t230 + 0x20));
                t228 = 0x10;
                u233 = 1.0f;
                t228 = (t228 + t230);
                u233 = (u233 + u233);
                t229 = t12;
                *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 36)));
                t229 = (t229 - t235);
                u231 = (*(float *)((t230 + 0x0)));
                u232 = (*(float *)((t230 + 0xC)));
                u231 = (u231 + u232);
                *(float *)((t230 + 0x0)) = u231;
                u231 = (*(float *)((t230 + 0x4)));
                u232 = (*(float *)((t228 + 0x0)));
                t228 = 0x14;
                t228 = (t228 + t230);
                u231 = (u231 + u232);
                *(float *)((t230 + 0x4)) = u231;
                u231 = (*(float *)((t230 + 0x8)));
                u232 = (*(float *)((t228 + 0x0)));
                u231 = (u231 + u232);
                *(float *)((t230 + 0x8)) = u231;
                u232 = (*(float *)((t230 + 0x10)));
                u232 = (u232 - 0.00799999945f);
                *(float *)((t230 + 0x10)) = u232;
                *(unsigned int *)((t230 + 0x18)) = ((*(int *)((t230 + 0x18))) + 0x3513);
                t228 = (((int)stk + 8) + 0x3C);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t228) = *(struct mv3 *)(t230); }
                t228 = (((int)stk + 8) + 0x30);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t228) = *(struct mv3 *)((t230 + 0xC)); }
                *(unsigned int *)(((int)stk + 16)) = (*(int *)((t230 + 0x18)));
                *(unsigned int *)(((int)stk + 20)) = t229;
                t246 = t229;
                if ((int)t229 > (int)0x1E) {
                    t246 = 0x1E;
                }
                *(unsigned int *)(((int)stk + 24)) = t246;
                *(unsigned int *)(((int)stk + 12)) = 0x0;
                if ((int)t246 > 0) {
                    for (;;) {
                        t249 = *(int *)(((int)stk + 8));
                        *(unsigned int *)(((int)stk + 8)) = (t249 - 1);
                        t228 = (*(int *)(((int)stk + 20)));
                        if (((int)t228 < (int)0x46) && ((int)(t249 - 1) <= 0)) {
                            t229 = 0x0;
                            t248 = (nlPushMatrix(t229));
                            t248 = 0x8;
                            u252 = *(float *)(((((int)stk + 8) + 0x3C) + t248));
                            t248 = 0x4;
                            t248 = (FUN_0c0dcc70((*(float *)(((((int)stk + 8) + 0x3C) + 0x0))), (*(float *)(((((int)stk + 8) + 0x3C) + t248))), u252));
                            t248 = 0x3CE;
                            t229 = (*(short *)((t1 + t248)));
                            t248 = (nlRotateAY(t229));
                            t248 = 0x3CC;
                            t229 = (*(short *)((t1 + t248)));
                            t248 = (nlRotateAX(t229));
                            t229 = (*(int *)(((int)stk + 16)));
                            t229 = (unsigned short)t229;
                            t248 = (nlRotateAZ(t229));
                            t248 = (nlScale(u233, u233, u233));
                            t248 = (FUN_0c0de000(u233));
                            t228 = (*(int *)(((int)stk + 12)));
                            t265 = t228;
                            t228 = (t228 << 2);
                            t228 = (t228 + t265);
                            t228 = (t228 << 2);
                            t248 = 0x1E;
                            t248 = (FUN_0c0e5dc0());
                            *(unsigned int *)(((int)stk + 32)) = t248;
                            t248 = (FUN_0c0848bc(1.0f, 1.0f, 1.0f));
                            t229 = (*(int *)(((int)stk + 32)));
                            t229 = (t229 + 0x259);
                            t248 = (FUN_0c0c475c(t229, 1.0f));
                            t229 = 0x1;
                            t248 = (nlPopMatrix(t229));
                        } else {
                            t271 = t228;
                            t274 = t229;
                            u275 = u231;
                            u276 = u232;
                        }
                        u231 = u275;
                        u232 = u276;
                        t228 = t271;
                        t229 = t274;
                        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) - 0x3513);
                        t228 = (*(int *)(((int)stk + 20)));
                        t228 = (t228 - 1);
                        *(unsigned int *)(((int)stk + 20)) = t228;
                        t248 = (*(int *)(((int)stk + 12)));
                        t248 = 0x4;
                        u232 = (*(float *)(((((int)stk + 8) + 0x30) + t248)));
                        t228 = t248;
                        t228 = (t228 + (((int)stk + 8) + 0x30));
                        u232 = (u232 + 0.00799999945f);
                        *(float *)(((((int)stk + 8) + 0x30) + t248)) = u232;
                        u231 = (*(float *)(((((int)stk + 8) + 0x3C) + 0x0)));
                        u232 = (*(float *)(((((int)stk + 8) + 0x30) + 0x0)));
                        u231 = (u231 - u232);
                        *(float *)(((((int)stk + 8) + 0x3C) + 0x0)) = u231;
                        u231 = (*(float *)(((((int)stk + 8) + 0x3C) + t248)));
                        u232 = (*(float *)((t228 + 0x0)));
                        u231 = (u231 - u232);
                        *(float *)(((((int)stk + 8) + 0x3C) + t248)) = u231;
                        t248 = 0x8;
                        t228 = 0x8;
                        t228 = (t228 + (((int)stk + 8) + 0x30));
                        u231 = (*(float *)(((((int)stk + 8) + 0x3C) + t248)));
                        u232 = (*(float *)((t228 + 0x0)));
                        u231 = (u231 - u232);
                        *(float *)(((((int)stk + 8) + 0x3C) + t248)) = u231;
                        u233 = (u233 + 0.199999988f);
                        if ((int)(*(int *)(((int)stk + 8))) <= 0) {
                            t228 = 0x2;
                            *(unsigned int *)(((int)stk + 8)) = t228;
                        }
                        t290 = *(int *)(((int)stk + 12));
                        *(unsigned int *)(((int)stk + 12)) = (t290 + 0x1);
                        if ((int)(t290 + 0x1) >= (int)(*(int *)(((int)stk + 24)))) {
                            break;
                        }
                    }
                }
                t230 = (t230 + 0x28);
                *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x1);
                continue;
            }
            break;
        }
        t301 = t229;
    }
    return (FUN_0c0849da(t301, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12)));
}

float FUN_0c081870(int a4, int a5, int a6, float f4, float f5)
{
    int stk[21];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R9;
    register float F0;
    register float F2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_3 = a4;
    v0_4 = a6;
    w0_3 = f5;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)0xC247D1C = 0x0;
    *(float *)0xC247D50 = 0.0f;
    *(float *)0xC247D54 = 0.0f;
    *(float *)0xC247D58 = 0.0f;
    v0_0 = (0xC0DCD10);
    v0_1 = (0x0);
    v0_5 = (0xC246FF0);
    v0_2 = (v0_3);
    v0_0 = (0xC247D1C);
    w0_1 = (0.049999997f);
    w0_2 = (1.0f);
    w0_0 = ((1.0f + 1.0f));
    w0_4 = (0.0f);
    if ((((*(short *)(((*(int *)0xC247CA4) + 0x2))) & 128) == 0)) goto L_C0818C0;
    nlAddVector((v0_0 + 0x34), (0x338 + v0_2));
    nlAddVector((v0_0 + 0x34), (0x344 + v0_2));
    FUN_0c0dce80((v0_0 + 0x34), (v0_0 + 0x34), (*(float *)0xC081E70));
    L_C081D6C:;
    v0_3 = *(int *)((v0_0 + 0x0));
    v0_6 = (v0_3);
    w0_3 = ((*(float *)((v0_2 + 0x3B0))));
    if ((v0_3 == 0)) goto L_C081DE2;
    if ((v0_6 == 1)) goto L_C081D86;
    if ((v0_6 == 2)) goto L_C081D9E;
    if (!((v0_6 == 3))) goto L_C081DE2;
    w0_1 = nlLength((v0_0 + 0x34), (v0_0 + 0x8));
    R5 = (v0_0);
    w0_4 = ((w0_1 * w0_0));
    if ((!((w0_1 * w0_0) > w0_3))) goto L_C081DCE;
    w0_3 = (w0_4);
    goto L_C081DCE;
    L_C081DE2:;
    *(float *)((v0_0 + 0x40)) = w0_3;
    *(unsigned int *)((v0_0 + 0x4)) = v0_1;
    *(unsigned int *)((v0_0 + 0x1C)) = (*(int *)(((int)stk + 4)));
    return F0;
    L_C081DCE:;
    w0_1 = nlLength((v0_0 + 0x34), (R5 + 0x20));
    F0 = (w0_1);
    w0_4 = ((w0_1 * w0_0));
    if ((!((w0_1 * w0_0) > w0_3))) goto L_C081DE2;
    L_C081DE0:;
    w0_3 = (w0_4);
    goto L_C081DE2;
    L_C081D9E:;
    w0_1 = nlLength((v0_0 + 0x34), (v0_0 + 0x20));
    F0 = (w0_1);
    w0_4 = ((w0_1 * w0_0));
    if ((!((w0_1 * w0_0) > w0_3))) goto L_C081DE2;
    goto L_C081DE0;
    L_C081D86:;
    w0_1 = nlLength((v0_0 + 0x34), (v0_0 + 0x8));
    F0 = (w0_1);
    w0_4 = ((w0_1 * w0_0));
    if (((w0_1 * w0_0) > w0_3)) goto L_C081DE0;
    goto L_C081DE2;
    L_C0818C0:;
    nlAddVector((v0_0 + 0x34), (0x338 + v0_2));
    w0_3 = (w0_2);
    if (!(((*(int *)(((v0_5 + 0x40) + ((*(int *)((v0_2 + 0x3B4))) << 2)))) == 4))) goto L_C081AF8;
    v0_6 = FUN_0c081404((*(int *)((v0_2 + 0x3B4))), R5, v0_4, w0_4);
    R9 = (v0_6);
    if ((v0_6 != -1)) goto L_C081926;
    v0_6 = *(int *)(((((*(int *)((v0_2 + 0x3B4))) << 2) + (0x494 + v0_5)) + 0x0));
    R9 = (v0_6);
    if ((v0_6 != -1)) goto L_C081906;
    goto L_C081AF8;
    L_C081AF8:;
    nlAddVector((v0_0 + 0x34), (0x344 + v0_2));
    w0_3 = ((w0_3 + w0_2));
    if (!(((*(int *)(((v0_5 + 0x40) + ((*(int *)((v0_2 + 0x3B8))) << 2)))) == 4))) goto L_C081D0C;
    v0_6 = FUN_0c081404((*(int *)((v0_2 + 0x3B8))), R5, v0_4, w0_4);
    v0_7 = (v0_6);
    if ((v0_6 != -1)) goto L_C081B5E;
    v0_6 = *(int *)(((((*(int *)((v0_2 + 0x3B8))) << 2) + (0x494 + v0_5)) + 0x0));
    v0_7 = (v0_6);
    if ((v0_6 != -1)) goto L_C081B3E;
    goto L_C081D0C;
    L_C081D0C:;
    FUN_0c0dce80((v0_0 + 0x34), (v0_0 + 0x34), (w0_2 / w0_3));
    goto L_C081D6C;
    L_C081B3E:;
    if ((!((*(float *)(((v0_7 << 2) + (((((*(int *)((v0_2 + 0x3B8))) << 2) << 2) << 2) + (0x94 + v0_5))))) > 60.0f))) goto L_C081B5E;
    v0_7 = (0xFFFFFFFF);
    L_C081B5E:;
    if ((v0_7 != -1)) goto L_C081B6A;
    goto L_C081D0C;
    L_C081B6A:;
    *(unsigned int *)(((int)stk + 8)) = (v0_7 << 2);
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((v0_7 << 2) + v0_5) + 0x0)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)(((((((v0_7 << 1) + v0_7) << 2) << 2) << 2) + 0xC23F268)); }
    if ((((*(int *)0xC23A1A8) & 0x100) == 0)) goto L_C081BD6;
    if (((int)(*(int *)(((*(int *)(((int)stk + 4))) + 0xC0))) > (int)0x5)) goto L_C081BD6;
    v0_8 = *(int *)0xC247CFC;
    v0_6 = (v0_8);
    if ((v0_8 == 8)) goto L_C081BD6;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)(0xC943418); }
    nlGetAverageVector((0x3A4 + v0_2), (((int)stk + 4) + 0x14), (((int)stk + 4) + 0x14), 0.399999976f, 0.599999964f);
    L_C081BD6:;
    *(unsigned int *)((v0_0 + 0x0)) = ((*(int *)((v0_0 + 0x0))) + 0x2);
    *(unsigned int *)((v0_0 + 0x30)) = (short)(FUN_0c0d9dc0(v0_3, R5, v0_4, ((*(float *)(((int)stk + 24))) - (*(float *)((v0_2 + 0x344)))), ((*(float *)(((int)stk + 32))) - (*(float *)((v0_2 + 0x34C))))));
    *(float *)((v0_0 + 0x2C)) = (*(float *)(((((((*(int *)((v0_2 + 0x3B8))) << 2) << 2) << 2) + (0x94 + v0_5)) + (*(int *)(((int)stk + 8))))));
    if ((((*(int *)0xC23A1A8) & 0x100) == 0)) goto L_C081C82;
    if (((int)(*(int *)(((*(int *)(((int)stk + 4))) + 0xC0))) > (int)0x5)) goto L_C081C82;
    if (((*(int *)0xC247CFC) == 8)) goto L_C081C82;
    *(float *)((v0_0 + 0x2C)) = (nlLength((0x3A4 + v0_2), (((int)stk + 4) + 0x14)));
    L_C081C82:;
    if ((((*(int *)0xC23A1A8) & 0x100) != 0)) goto L_C081CA4;
    w0_5 = *(float *)(((*(int *)(((int)stk + 4))) + 0x270));
    v0_6 = (0x18);
    w0_4 = ((w0_5 + 15.0f));
    if (((w0_5 + 15.0f) > (*(float *)(((int)stk + 28))))) goto L_C081CB8;
    L_C081CBC:;
    if (((*(int *)((v0_0 + 0x1C))) != 0)) goto L_C081CD4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x20)) = *(struct mv3 *)((((int)stk + 4) + 0x14)); }
    L_C081CFC:;
    if ((R9 == v0_7)) goto L_C081D0C;
    nlAddVector((v0_0 + 0x34), (v0_0 + 0x20));
    w0_3 = ((w0_3 + w0_2));
    goto L_C081D0C;
    L_C081CD4:;
    nlSubVector3op((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14), (v0_0 + 0x20));
    FUN_0c0dce80((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x8), w0_1);
    nlAddVector((v0_0 + 0x20), (((int)stk + 4) + 0x8));
    goto L_C081CFC;
    L_C081CB8:;
    *(float *)(((int)stk + 28)) = w0_4;
    v0_6 = (0x18);
    goto L_C081CBC;
    L_C081CA4:;
    w0_5 = *(float *)(((*(int *)(((int)stk + 4))) + 0x270));
    v0_6 = (0x18);
    w0_4 = ((w0_5 + 12.0f));
    if ((!((w0_5 + 12.0f) > (*(float *)(((int)stk + 28)))))) goto L_C081CBC;
    goto L_C081CB8;
    L_C081906:;
    if ((!((*(float *)(((R9 << 2) + (((((*(int *)((v0_2 + 0x3B4))) << 2) << 2) << 2) + (0x94 + v0_5))))) > 60.0f))) goto L_C081926;
    R9 = (0xFFFFFFFF);
    L_C081926:;
    if ((R9 != -1)) goto L_C081932;
    goto L_C081AF8;
    L_C081932:;
    *(unsigned int *)(((int)stk + 8)) = (R9 << 2);
    v0_1 = *(int *)((((R9 << 2) + v0_5) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)(((((((R9 << 1) + R9) << 2) << 2) << 2) + 0xC23F268)); }
    v0_1 = (v0_1);
    if ((((*(int *)0xC23A1A8) & 0x100) == 0)) goto L_C08199A;
    if (((int)(*(int *)((v0_1 + 0xC0))) > (int)0x5)) goto L_C08199A;
    v0_7 = *(int *)0xC247CFC;
    v0_6 = (v0_7);
    if ((v0_7 == 8)) goto L_C08199A;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)(0xC943418); }
    nlGetAverageVector((0x3A4 + v0_2), (((int)stk + 4) + 0x14), (((int)stk + 4) + 0x14), 0.399999976f, 0.599999964f);
    L_C08199A:;
    *(unsigned int *)((v0_0 + 0x0)) = 0x1;
    v0_6 = (0x30);
    w0_4 = ((*(float *)((v0_2 + 0x338))));
    w0_3 = (((*(float *)((v0_1 + 0x38))) - (*(float *)((v0_2 + 0x340)))));
    *(unsigned int *)((v0_0 + 0x18)) = (short)(FUN_0c0d9dc0(v0_3, R5, v0_4, ((*(float *)((v0_1 + v0_6))) - w0_4), w0_3));
    *(float *)((v0_0 + 0x14)) = (*(float *)(((((((*(int *)((v0_2 + 0x3B4))) << 2) << 2) << 2) + (0x94 + v0_5)) + (*(int *)(((int)stk + 8))))));
    if ((((*(int *)0xC23A1A8) & 0x100) == 0)) goto L_C081A4C;
    if (((int)(*(int *)((v0_1 + 0xC0))) > (int)0x5)) goto L_C081A4C;
    if (((*(int *)0xC247CFC) == 8)) goto L_C081A4C;
    *(float *)((v0_0 + 0x14)) = (nlLength((0x3A4 + v0_2), (((int)stk + 4) + 0x14)));
    L_C081A4C:;
    if ((((*(int *)0xC23A1A8) & 0x100) != 0)) goto L_C081A6C;
    w0_3 = *(float *)((v0_1 + 0x270));
    v0_6 = (0x18);
    w0_4 = ((w0_3 + 15.0f));
    if (((w0_3 + 15.0f) > (*(float *)(((int)stk + 28))))) goto L_C081A7E;
    L_C081A82:;
    if (((*(int *)((v0_0 + 0x4))) != 0)) goto L_C081AC4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x8)) = *(struct mv3 *)((((int)stk + 4) + 0x14)); }
    L_C081AEC:;
    nlAddVector((v0_0 + 0x34), (v0_0 + 0x8));
    w0_3 = (w0_0);
    goto L_C081AF8;
    L_C081AC4:;
    nlSubVector3op((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14), (v0_0 + 0x8));
    FUN_0c0dce80((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x8), w0_1);
    nlAddVector((v0_0 + 0x8), (((int)stk + 4) + 0x8));
    goto L_C081AEC;
    L_C081A7E:;
    *(float *)(((int)stk + 28)) = w0_4;
    v0_6 = (0x18);
    goto L_C081A82;
    L_C081A6C:;
    w0_3 = *(float *)((v0_1 + 0x270));
    v0_6 = (0x18);
    w0_4 = ((w0_3 + 12.0f));
    if ((!((w0_3 + 12.0f) > (*(float *)(((int)stk + 28)))))) goto L_C081A82;
    goto L_C081A7E;
}

float FUN_0c0408a0(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int stk[24];

    register int R2;
    register int R3;
    register int R5;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_6 = a4;
    v0_2 = a6;
    v0_3 = a7;
    w0_0 = f5;
    w0_1 = f6;
    v0_0 = (v0_6);
    v0_6 = (0x10000001);
    if ((((*(int *)0xC23A1A8) & 0x10000001) != 0x10000001)) goto L_C0408CC;
    L_C040DDE:;
    return F0;
    L_C0408CC:;
    v0_6 = *(int *)((v0_0 + 0x4EC));
    v0_5 = (v0_6);
    v0_4 = (0x1000);
    v0_1 = (0xC0DC4C0);
    v0_7 = (0xC0DC510);
    v0_1 = (0x80);
    v0_7 = (0xC0DC6E0);
    v0_7 = (0xC0DB470);
    w0_3 = (0.0749999955f);
    w0_0 = (-45.0f);
    w0_2 = (10.0f);
    w0_1 = (0.0f);
    if ((v0_6 == 0)) goto L_C040906;
    if ((v0_5 == 1)) goto L_C040968;
    if ((v0_5 != 2)) goto L_C0408FA;
    v0_2 = (FUN_0c0277c4(v0_0, w0_3)) == 0;
    v0_6 = (v0_0);
    if (v0_2) goto L_C040C38;
    *(unsigned int *)((v0_0 + 0x3AC)) = 0x3;
    *(unsigned int *)((v0_0 + 0x4EC)) = ((*(int *)((v0_0 + 0x4EC))) + 0x1);
    L_C040C38:;
    FUN_0c022838(v0_6);
    FUN_0c04080e(v0_0);
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70((*(float *)((v0_0 + 0x24C))), (*(float *)((v0_0 + 0x250))), (*(float *)((v0_0 + 0x254))));
    nlRotateAY((*(int *)((v0_0 + 0x52C))));
    nlRotateAX(v0_4);
    *(float *)(((int)stk + 36)) = w0_1;
    *(float *)(((int)stk + 40)) = w0_2;
    *(float *)(((int)stk + 44)) = w0_0;
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    *(float *)(((0x518 + v0_0) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((0x51C + v0_0) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((0x520 + v0_0) + 0x0)) = (*(float *)(((int)stk + 32)));
    nlPopMatrix(0x1);
    v0_5 = (0x518);
    v0_6 = (((int)stk + 4));
    R5 = ((((int)stk + 4) + 0x4));
    w0_0 = (((*(float *)((v0_0 + 0x250))) - (*(float *)((v0_0 + 0x51C)))));
    w0_1 = (((*(float *)((v0_0 + 0x254))) - (*(float *)((v0_0 + 0x520)))));
    L_C040DBA:;
    FUN_0c0a7714(v0_6, R5, ((*(float *)((v0_0 + 0x24C))) - (*(float *)((v0_0 + v0_5)))), w0_0, w0_1);
    FUN_0c0546fe(v0_0, (*(int *)(((int)stk + 8))), v0_1, 0x1);
    v0_5 = ((FUN_0c05473c(v0_0, (*(int *)(((int)stk + 4))), v0_1, 0x1)));
    goto L_C040DDE;
    L_C0408FA:;
    if ((v0_5 != 3)) goto L_C040902;
    *(float *)((v0_0 + 0x4B4)) = ((*(float *)((v0_0 + 0x4B4))) - 0.0272199996f);
    *(float *)((v0_0 + 0x48)) = ((*(float *)((v0_0 + 0x60))) * 0.949999988f);
    *(float *)((v0_0 + 0x4C)) = (*(float *)((v0_0 + 0x64)));
    *(float *)((v0_0 + 0x50)) = ((*(float *)((v0_0 + 0x68))) * 0.949999988f);
    nlAddVector((v0_0 + 0x48), (0x4B0 + v0_0));
    v0_2 = (FUN_0c04080e(v0_0)) == 0;
    if (v0_2) goto L_C040D9E;
    v0_2 = *(int *)((v0_0 + 0x3AC));
    *(unsigned int *)((v0_0 + 0x3AC)) = (v0_2 - 1);
    if (((int)(v0_2 - 1) <= 0)) goto L_C040D6C;
    w0_0 = *(float *)((v0_0 + 0x64));
    *(float *)((v0_0 + 0x4C)) = (-(w0_0 * 0.25f));
    *(float *)((v0_0 + 0x64)) = (-(w0_0 * 0.25f));
    *(unsigned int *)0xC247D04 = ((*(int *)0xC247D04) | 0x40000);
    L_C040D9E:;
    v0_5 = (0x30);
    v0_6 = (((int)stk + 4));
    R5 = ((((int)stk + 4) + 0x4));
    w0_0 = (((*(float *)((v0_0 + 0x250))) - (*(float *)((v0_0 + 0x34)))));
    w0_1 = (((*(float *)((v0_0 + 0x254))) - (*(float *)((v0_0 + 0x38)))));
    goto L_C040DBA;
    L_C040D6C:;
    *(unsigned int *)0xC23EDB0 = 0x0;
    *(unsigned int *)0xC23EDB4 = 0x0;
    v0_1 = (0xC23A1A8);
    if ((((*(int *)0xC23A1A8) & 1) != 0)) goto L_C040D92;
    *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x10000);
    v0_5 = ((FUN_0c03f4bc(v0_0)));
    goto L_C040DDE;
    L_C040D92:;
    v0_0 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((v0_1 + 0x0)) = (v0_0 | 0x10000000);
    v0_5 = ((v0_0 | 0x10000000));
    goto L_C040DDE;
    L_C040902:;
    goto L_C040DDE;
    L_C040968:;
    FUN_0c0277c4(v0_0, w0_3);
    FUN_0c022838(v0_0);
    FUN_0c04080e(v0_0);
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70((*(float *)((v0_0 + 0x24C))), (*(float *)((v0_0 + 0x250))), (*(float *)((v0_0 + 0x254))));
    nlRotateAY((*(int *)((v0_0 + 0x52C))));
    nlRotateAX(v0_4);
    *(float *)(((int)stk + 36)) = w0_1;
    *(float *)(((int)stk + 40)) = w0_1;
    *(float *)(((int)stk + 44)) = w0_0;
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    *(float *)(((0x518 + v0_0) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((0x51C + v0_0) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((0x520 + v0_0) + 0x0)) = (*(float *)(((int)stk + 32)));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(int *)((v0_0 + 0x52C))));
    nlRotateAX(v0_4);
    w0_3 = FUN_0c0da410(((*(int *)0xC23A258) * 0x199));
    *(float *)(((int)stk + 24)) = (w0_3 * 25.0f);
    w0_3 = FUN_0c0d9e90(((*(int *)0xC23A258) * 0x111));
    *(float *)(((int)stk + 28)) = (w0_3 * w0_2);
    w0_3 = FUN_0c0da410(((*(int *)0xC23A258) * 0x111));
    *(float *)(((int)stk + 32)) = (w0_3 * w0_2);
    FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)(((((int)stk + 4) + 0x28) + 0x0)) = (*(float *)(((int)stk + 20)));
    nlPopMatrix(0x1);
    nlAddVector((0x518 + v0_0), (((int)stk + 4) + 0x20));
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((v0_0 + 0x24C))) - (*(float *)((v0_0 + 0x518)))), ((*(float *)((v0_0 + 0x250))) - (*(float *)((v0_0 + 0x51C)))), ((*(float *)((v0_0 + 0x254))) - (*(float *)((v0_0 + 0x520)))));
    FUN_0c0546fe(v0_0, (*(int *)(((int)stk + 8))), v0_1, 0x1);
    FUN_0c05473c(v0_0, (*(int *)(((int)stk + 4))), v0_1, 0x1);
    v0_1 = *(int *)((v0_0 + 0x3AC));
    *(unsigned int *)((v0_0 + 0x3AC)) = (v0_1 - 1);
    v0_5 = (0x3AC);
    if (((int)(v0_1 - 1) >= 0)) goto L_C040B68;
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70((*(float *)((v0_0 + 0x24C))), (*(float *)((v0_0 + 0x250))), (*(float *)((v0_0 + 0x254))));
    nlRotateAY((*(int *)((v0_0 + 0x52C))));
    nlRotateAX(v0_4);
    *(float *)(((int)stk + 36)) = w0_1;
    *(float *)(((int)stk + 40)) = 30.0f;
    *(float *)(((int)stk + 44)) = w0_0;
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    *(float *)(((0x518 + v0_0) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((0x51C + v0_0) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((0x520 + v0_0) + 0x0)) = (*(float *)(((int)stk + 32)));
    nlPopMatrix(0x1);
    *(unsigned int *)((v0_0 + 0x4EC)) = ((*(int *)((v0_0 + 0x4EC))) + 0x1);
    v0_5 = (0x4EC);
    L_C040B68:;
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 4) + 0x24)) = *(struct mv2 *)(0xC0F573C); }
    v0_4 = *(int *)((v0_0 + 0x3AC));
    v0_5 = (v0_4);
    v0_7 = ((((int)stk + 4) + 0x24));
    v0_1 = (0xC0CC3F8);
    if ((v0_4 == 115)) goto L_C040B9A;
    if ((v0_5 == 100)) goto L_C040BA8;
    if ((v0_5 == 80)) goto L_C040BAE;
    if ((v0_5 == 60)) goto L_C040BBC;
    if ((v0_5 == 40)) goto L_C040BCA;
    if ((v0_5 == 20)) goto L_C040BD0;
    goto L_C040DDE;
    L_C040BD0:;
    *(unsigned short *)((v0_7 + 0x4)) = 0x3C;
    FUN_0c0a44c6(v0_0, v0_7);
    v0_6 = (0x92EA9);
    L_C040BDE:;
    v0_5 = ((FUN_0c0cc3f8(v0_6, R5, v0_2, v0_3, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28))));
    goto L_C040DDE;
    L_C040BCA:;
    v0_6 = (0x52EA9);
    goto L_C040BDE;
    L_C040BBC:;
    FUN_0c0a447c(v0_0, v0_7);
    v0_6 = (0x52EA9);
    goto L_C040BDE;
    L_C040BAE:;
    FUN_0c0a44c6(v0_0, v0_7);
    v0_6 = (0x62EA9);
    goto L_C040BDE;
    L_C040BA8:;
    v0_6 = (0x82EA9);
    goto L_C040BDE;
    L_C040B9A:;
    FUN_0c0a447c(v0_0, v0_7);
    v0_6 = (0x72EA9);
    goto L_C040BDE;
    L_C040906:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x518 + v0_0)) = *(struct mv3 *)((0x24C + v0_0)); }
    *(float *)((v0_0 + 0x4B0)) = w0_1;
    *(float *)((v0_0 + 0x4B4)) = w0_1;
    *(float *)((v0_0 + 0x4B8)) = w0_1;
    *(unsigned int *)((v0_0 + 0x3AC)) = 0x78;
    *(unsigned int *)((v0_0 + 0x4EC)) = ((*(int *)((v0_0 + 0x4EC))) + 0x1);
    v0_5 = (0x4EC);
    goto L_C040DDE;
}

int FUN_0c077200(int a4, int a5, int a6, int a7)
{
    int stk[27];
    register int t8;
    register float t10;
    register int t12;
    register float t14;
    register int t20;
    register int t34;
    register int t39;
    register int t58;
    register float t76;
    register int t77;
    register int t78;
    register int t79;
    register int t85;
    register int t87;
    register int t93;
    register int t94;
    register float u95;
    register int t163;

    if (((*(int *)0xC23A1A8) & 0x100) != 0) {
    } else {
        FUN_0c0685a4(a4, a5, a6, a7);
        *(unsigned short *)((a4 + 0x9C)) = ((*(short *)((a4 + 0x9C))) + 0x400);
        *(unsigned short *)((a4 + 0x9E)) = ((*(short *)((a4 + 0x9E))) + 0x200);
        FUN_0c0dc5a0();
        FUN_0c0dcca0(0xC0FFCC8);
        nlRotateAY((*(short *)((a4 + 0xA2))));
        t8 = *(short *)((a4 + 0xA0));
        t10 = FUN_0c0d9e90((*(short *)((a4 + 0x9C))));
        nlRotateAX((int)((float)t8 * t10));
        t12 = *(short *)((a4 + 0xA4));
        t14 = FUN_0c0d9e90((*(short *)((a4 + 0x9E))));
        nlRotateAZ((int)((float)t12 * t14));
        FUN_0c0dcca0(0xC0FFCD4);
        nlGetMatrix((a4 + 0x5C));
        FUN_0c0c47ae(0x11D7);
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        nlPushMatrix(0x0);
        t20 = 0x19;
        for (;;) {
            FUN_0c0db840((((int)stk + 4) + 0x2C));
            nlSubVector3op((((int)stk + 4) + 0x20), 0xC0FFCBC, (((int)stk + 4) + 0x2C));
            nlScaleUnitVector((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20), 2.02988982f);
            FUN_0c0a78fc((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8), (*(float *)(((int)stk + 36))), (*(float *)(((int)stk + 40))), (*(float *)(((int)stk + 44))));
            FUN_0c0dcca0((((int)stk + 4) + 0x20));
            nlPushMatrix(0x0);
            nlRotateAX((*(int *)(((int)stk + 8))));
            nlRotateAZ((*(int *)(((int)stk + 12))));
            t34 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t34 + 0x3FFF);
            nlRotateAY((t34 + 0x3FFF));
            FUN_0c0c47ae(0x119A);
            nlPopMatrix(0x1);
            t20 = (t20 - 0x1);
            if (t20 == 0) {
                break;
            }
        }
        nlPopMatrix(0x1);
        *(unsigned int *)(((int)stk + 32)) = 0xC0FFCA4;
        *(unsigned int *)(((int)stk + 28)) = 0xC0FFC38;
        *(unsigned int *)(((int)stk + 4)) = 0xC0FFC44;
        t39 = 0x0;
        for (;;) {
            nlPushMatrix(0x0);
            FUN_0c0dcca0((*(int *)(((int)stk + 32))));
            FUN_0c0c47ae((0x34E + ((*(int *)0xC23A258) & 0x3F)));
            nlPopMatrix(0x1);
            if ((*(short *)((a4 + 0xB2))) != 0) {
                FUN_0c0db470((*(int *)(((int)stk + 28))), ((0xB4 + a4) + t39));
                FUN_0c0db470((*(int *)(((int)stk + 4))), (((0xB4 + a4) + t39) + 0x2D0));
                FUN_0c07787c(((0xB4 + a4) + t39));
            }
            nlRotateAY(0x2AAA);
            t39 = (t39 + 0x2F4);
            if ((unsigned int)t39 >= (unsigned int)0x11B8) {
                break;
            }
        }
        FUN_0c0dcca0(0xC0FFCE0);
        nlRotateAY(0xFFFFEAAB);
        t58 = *(int *)((a4 + 0x30));
        if (t58 != 0) {
            if (t58 == 1) {
                *(float *)((a4 + 0x54)) = ((*(float *)((a4 + 0x54))) - 0.0831666514f);
                FUN_0c0dce80((a4 + 0x50), (a4 + 0x50), 0.929999948f);
                nlAddVector((a4 + 0x44), (a4 + 0x50));
                FUN_0c010128((0xA6 + a4), (0xAC + a4));
                *(unsigned short *)((a4 + 0xAC)) = (int)((float)(*(short *)((a4 + 0xAC))) * 0.899999976f);
                *(unsigned short *)((a4 + 0xAE)) = (int)((float)(*(short *)((a4 + 0xAE))) * 0.899999976f);
                *(unsigned short *)((a4 + 0xB0)) = (int)((float)(*(short *)((a4 + 0xB0))) * 0.899999976f);
                FUN_0c0dc5a0();
                FUN_0c0dcca0((a4 + 0x44));
                nlRotateAY((*(short *)((a4 + 0xA8))));
                nlRotateAX((*(short *)((a4 + 0xA6))));
                nlRotateAZ((*(short *)((a4 + 0xAA))));
                if ((*(float *)((a4 + 0x48))) > 15.0f) {
                    FUN_0c077780(a4);
                } else {
                    t76 = FUN_0c0dcea0((a4 + 0x50));
                    *(unsigned int *)((a4 + 0x30)) = 0x2;
                    t77 = 0x6;
                    for (;;) {
                        *(unsigned int *)(((int)stk + 4)) = 0x14;
                        t78 = ((t77 * 0x2F4) + (0x126C + a4));
                        for (;;) {
                            t79 = FUN_0c0e1830(0xC077DA4, 0x64);
                            FUN_0c0e19d0(t79);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t79 + 0x30)) = *(struct mv3 *)(t78); }
                            *(unsigned short *)((t79 + 0x54)) = (*(int *)((t78 + 0x18)));
                            *(unsigned short *)((t79 + 0x58)) = (*(int *)((t78 + 0x1C)));
                            *(unsigned short *)((t79 + 0x5A)) = 0x1199;
                            *(float *)((t79 + 0x5C)) = 1.0f;
                            *(float *)((t79 + 0x40)) = -0.027722219f;
                            *(unsigned int *)((t79 + 0x60)) = 0xD2;
                            nlSubVector3op((t79 + 0x48), (t78 + 0xC), t78);
                            nlScaleUnitVector((t79 + 0x48), (t79 + 0x48), t76);
                            t85 = *(int *)(((int)stk + 4));
                            t78 = (t78 + 0x24);
                            *(unsigned int *)(((int)stk + 4)) = (t85 - 1);
                            if ((t85 - 1) == 0) {
                                break;
                            }
                        }
                        t77 = (t77 - 0x1);
                        if (t77 == 0) {
                            break;
                        }
                    }
                    t87 = FUN_0c0e1830(0xC077960, 0x18C);
                    FUN_0c0e19d0(t87);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t87 + 0x30)) = *(struct mv3 *)((a4 + 0x44)); }
                    *(float *)((t87 + 0x54)) = (float)(*(short *)((a4 + 0xA6)));
                    *(float *)((t87 + 0x58)) = (float)(*(short *)((a4 + 0xA8)));
                    *(float *)((t87 + 0x5C)) = (float)(*(short *)((a4 + 0xAA)));
                    *(float *)((t87 + 0x60)) = ((*(float *)((t87 + 0x54))) * 0.099999994f);
                    t93 = 0x6;
                    t94 = (t87 + 0x6C);
                    u95 = 0.0f;
                    for (;;) {
                        u95 = (u95 + 10922.0f);
                        t93 = (t93 - 1);
                        *(float *)((t94 + 0x4)) = u95;
                        t94 = (t94 + 0xC);
                        if (t93 == 0) {
                            break;
                        }
                    }
                    FUN_0c0cc3f8(0xD28A9, t94, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                }
                nlPopMatrix(0x1);
            } else {
                if (t58 == 2) {
                    *(unsigned short *)((a4 + 0xA0)) = (int)((float)(*(short *)((a4 + 0xA0))) * 0.98999995f);
                    *(unsigned short *)((a4 + 0xA4)) = (int)((float)(*(short *)((a4 + 0xA4))) * 0.98999995f);
                }
            }
        } else {
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
            FUN_0c0a79fa((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x14));
            if (((*(int *)0xC23ED88) & 0x1) != 0) {
                *(unsigned int *)((a4 + 0x30)) = 0x1;
                FUN_0c0db840((a4 + 0x50));
                nlSubVector((a4 + 0x50), (a4 + 0x44));
                FUN_0c0dce80((a4 + 0x50), (a4 + 0x50), 0.199999988f);
                *(unsigned short *)((a4 + 0xAC)) = (*(int *)(((int)stk + 16)));
                *(unsigned short *)((a4 + 0xAE)) = (*(int *)(((int)stk + 20)));
                *(unsigned short *)((a4 + 0xB0)) = (*(int *)(((int)stk + 24)));
                FUN_0c010146((0xAC + a4), (0xA6 + a4));
            }
            FUN_0c0db840((a4 + 0x44));
            *(unsigned short *)((a4 + 0xA6)) = (*(int *)(((int)stk + 16)));
            *(unsigned short *)((a4 + 0xA8)) = (*(int *)(((int)stk + 20)));
            *(unsigned short *)((a4 + 0xAA)) = (*(int *)(((int)stk + 24)));
            FUN_0c077780(a4);
            FUN_0c0844dc(((*(short *)((a4 + 0x9C))) + 0x3FFF), (*(short *)((a4 + 0x9E))), 0x0, 1.0f);
            FUN_0c0844dc(((*(short *)((a4 + 0x9C))) + 0x3FFF), (*(short *)((a4 + 0x9E))), 0x1, 1.0f);
        }
        t163 = (nlPopMatrix(0x1));
    }
    return t163;
}
