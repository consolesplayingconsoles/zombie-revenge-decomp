/* Straight-line functions with calls and guards (batch gen_agi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10C_int { char p[0x10C]; int v; };
struct o10C_uint { char p[0x10C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_int { char p[0x40]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c084570(int, int, int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c08e46e(int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0d8c40(int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c08d068(int a4, int a5, int a6, int a7);

int FUN_0c08d068(int a4, int a5, int a6, int a7)
{
    int stk[19];
    register int t1;
    register int t12;
    register int t15;
    register int t16;
    register int t17;
    register int t19;
    register int t21;
    register int t23;
    register float u27;
    register float u30;
    register int t31;
    register float u35;
    register int t108;
    register float u111;
    register float u76;
    register float u70;
    register int t113;
    register int t114;
    register int t115;
    int t116;
    register float u117;
    register float u118;
    register float u119;
    register float u120;
    register float u121;
    register float u123;
    register float u124;
    register float u127;
    register int t130;
    register int t132;
    register int t133;
    register int t134;
    register float u137;
    register int t140;
    register int t147;
    register int t148;
    register int t155;
    register int t159;
    register float u160;
    register float u162;
    register int t167;
    register int t171;
    register int t181;
    register float u186;
    register float u187;
    register float u189;
    register int t315;
    register int t232;
    register float u238;
    register int t210;
    register int t211;
    register float u213;
    register float u214;
    register int t219;
    register float u221;
    register int t239;
    register int t240;
    register int t242;
    register int t243;
    register int t244;
    register float u245;
    register float u246;
    register float u247;
    register int t249;
    register int t260;
    register int t263;
    register float u266;
    register int t279;
    register int t304;
    register float u64;
    register float u54;
    register float u44;
    register float u109;
    register float u110;
    register float u99;
    register float u100;
    register float u101;
    register float u205;
    register float u206;
    register float u212;
    register int t262;
    register int t285;
    register int t288;
    register float u289;
    register float u290;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    (((struct o10C_uint *)(a4))->v) = (((((struct o10C_int *)(a4))->v)) + 0x1);
    if ((int)((((struct o10C_int *)(a4))->v)) >= (int)0xB4) {
        FUN_0c0e19f2();
    } else {
        t108 = a4;
    }
    t12 = (((struct o10C_int *)(a4))->v);
    if ((*(int *)((a4 + 0x3C))) == 0) {
    } else {
        if ((unsigned int)(int)((float)t12 * 0.332999974f) < (unsigned int)0x18) {
            t15 = *(signed char *)((((((int)((float)t12 * 0.332999974f) << 1) + ((int)((float)t12 * 0.332999974f) << 2)) + 0xC10AB40) + 0x5));
            t16 = *(signed char *)((((((int)((float)t12 * 0.332999974f) << 1) + ((int)((float)t12 * 0.332999974f) << 2)) + 0xC10AB40) + 0x0));
            t17 = *(signed char *)((((((int)((float)t12 * 0.332999974f) << 1) + ((int)((float)t12 * 0.332999974f) << 2)) + 0xC10AB40) + 0x1));
            t19 = (unsigned char)t17;
            if ((int)(unsigned char)t17 >= (int)((((struct o10_int *)0xC248DD4)->v))) {
                t19 = ((((struct o10_int *)0xC248DD4)->v));
            }
            t21 = *(signed char *)((((((int)((float)t12 * 0.332999974f) << 1) + ((int)((float)t12 * 0.332999974f) << 2)) + 0xC10AB40) + 0x2));
            t23 = *(signed char *)((((((int)((float)t12 * 0.332999974f) << 1) + ((int)((float)t12 * 0.332999974f) << 2)) + 0xC10AB40) + 0x3));
            u27 = (float)(unsigned char)t21;
            u27 = u27 + (((float)(0xFF - (unsigned char)t15) / 255.0f)) * ((float)(((((struct o0_int *)0xC248DD4)->v)) - (unsigned char)t21));
            u30 = (float)(unsigned char)t23;
            u30 = u30 + (((float)(0xFF - (unsigned char)t15) / 255.0f)) * ((float)(((((struct o4_int *)0xC248DD4)->v)) - (unsigned char)t23));
            t31 = *(signed char *)((((((int)((float)t12 * 0.332999974f) << 1) + ((int)((float)t12 * 0.332999974f) << 2)) + 0xC10AB40) + 0x4));
            *(unsigned int *)(((int)stk + 4)) = (unsigned char)t31;
            u35 = (float)(unsigned char)t31;
            u35 = u35 + (((float)(0xFF - (unsigned char)t15) / 255.0f)) * ((float)(((((struct o8_int *)0xC248DD4)->v)) - (unsigned char)t31));
            *(int *)((int)stk + 0) = (int)u35;
            FUN_0c084570((unsigned char)t16, t19, (int)u27, (int)u30, (int)u35);
            FUN_0c0d8c40(((((int)u27 << 16) | ((int)u30 << 8)) | (int)u35), ((((int)u27 << 16) | ((int)u30 << 8)) | (int)u35), ((((int)u27 << 16) | ((int)u30 << 8)) | (int)u35));
        } else {
            if ((int)((float)t12 * 0.332999974f) == 24) {
                FUN_0c08e46e(0xB4);
            } else {
                t108 = (int)((float)t12 * 0.332999974f);
                u44 = 0.332999974f;
            }
            u54 = u44;
        }
        u64 = u54;
    }
    u111 = u64;
    if ((((((struct o40_int *)(a4))->v)) != 0) && ((int)t12 >= (int)0x8)) {
        if ((int)(t12 - 8) < (int)0x3E) {
            u76 = ((float)(t12 - 8) / 4.0f);
            if ((int)(t12 - 8) < (int)0x4) {
            } else {
                u70 = 1.0f;
                if ((int)(t12 - 8) > (int)0x20) {
                    u70 = (1.0f - (((float)((t12 - 8) - 32) * 0.0333333313f)));
                }
                u76 = u70;
            }
            nlPushMatrix(0x0);
            FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
            nlRotateAY(((((struct o3CE_short *)(t1))->v)));
            nlRotateAX(((((struct o3CC_short *)(t1))->v)));
            nlScale(50.0f, 50.0f, 50.0f);
            FUN_0c0de000(50.0f);
            FUN_0c0848bc((u76 * 0.399999976f), (u76 * 0.399999976f), (u76 * 0.399999976f));
            FUN_0c0c465c(0x294);
            nlPopMatrix(0x1);
            u99 = 50.0f;
            u100 = (u76 * 0.399999976f);
        } else {
            t108 = (t12 - 8);
            u101 = u64;
        }
        u109 = u99;
        u110 = u100;
        u111 = u101;
    }
    *(float *)(((int)stk + 40)) = ((float)(t12 - 30) * 0.0333333313f);
    *(unsigned int *)(((int)stk + 8)) = 0x6;
    t113 = 0x24;
    t114 = (t12 - 30);
    t115 = 0xD;
    t116 = 0x47AE927;
    u117 = u111;
    u118 = ((float)(t12 - 30) * 0.0333333313f);
    u119 = 0.0333333313f;
    u120 = u109;
    u121 = u110;
    for (;;) {
        if ((*(int *)(((int)stk + 8))) != 0) {
            t113 = 0xC08D42C;
            u123 = *(float *)((t113 + 0x0));
            t113 = 0xC08D430;
            u124 = *(float *)((t113 + 0x0));
            t113 = 0x10C;
            u120 = u123;
            u118 = (float)(*(int *)((a4 + t113)));
            u127 = u120;
            u127 = u127 + u124 * u118;
            u120 = u127;
            t113 = t116;
            t113 = (t113 & 0x1);
            t130 = t113;
            t113 = ((int)(((unsigned int)t130 >> 1) | ((unsigned int)t130 << 31)));
            u121 = 1.0f;
            t132 = (((t116 >> 1) | t113) ^ t115);
            t133 = ((((t116 >> 1) | t113) ^ t115) | t115);
            t134 = (0xFFF & (((t116 >> 1) | t113) ^ t115));
            t113 = 0xC08D434;
            u118 = (float)t134;
            u137 = u121;
            u137 = u137 + (*(float *)((t113 + 0x0))) * u118;
            u121 = u137;
            t113 = t132;
            t113 = (t113 & 0x1);
            t140 = t113;
            t113 = ((int)(((unsigned int)t140 >> 1) | ((unsigned int)t140 << 31)));
            t114 = 0x4;
            t114 = (t114 & (((t132 >> 1) | t113) ^ (t133 * 0x22AC8EE1)));
            t114 = (t114 + 0x4);
            *(unsigned int *)(((int)stk + 12)) = t114;
            t147 = (((t132 >> 1) | t113) ^ (t133 * 0x22AC8EE1));
            t148 = (((((t132 >> 1) | t113) ^ (t133 * 0x22AC8EE1)) | (t133 * 0x22AC8EE1)) * 0x22AC8EE1);
            if ((int)t12 > (int)0x1E) {
                t147 = (((t132 >> 1) | t113) ^ (t133 * 0x22AC8EE1));
                t148 = (((((t132 >> 1) | t113) ^ (t133 * 0x22AC8EE1)) | (t133 * 0x22AC8EE1)) * 0x22AC8EE1);
                t113 = 0x24;
                u118 = (*(float *)((((int)stk + 4) + t113)));
                u121 = (u121 - u118);
            }
            t114 = t147;
            if (u121 > 1.0f) {
                u121 = 1.0f;
            }
            t114 = (t114 >> 1);
            t113 = t147;
            t113 = (t113 & 0x1);
            t155 = t113;
            t113 = ((int)(((unsigned int)t155 >> 1) | ((unsigned int)t155 << 31)));
            t114 = (t114 | t113);
            t116 = (t114 ^ t148);
            t116 = (t116 >> 1);
            t115 = (unsigned short)(t114 ^ t148);
            t113 = (t114 ^ t148);
            t113 = (t113 & 0x1);
            t159 = t113;
            t113 = ((int)(((unsigned int)t159 >> 1) | ((unsigned int)t159 << 31)));
            t116 = (t116 | t113);
            t116 = (t116 ^ ((t148 | (t114 ^ t148)) * 0x22AC8EE1));
            t113 = 0xC08D438;
            u118 = (float)(0xFFF & t116);
            u117 = (float)t12;
            *(unsigned int *)(((int)stk + 4)) = ((((t148 | (t114 ^ t148)) * 0x22AC8EE1) | t116) * 0x22AC8EE1);
            u160 = *(float *)((t113 + 0x0));
            t113 = 0xC08D43C;
            u119 = u160;
            u162 = u119;
            u162 = u162 + (*(float *)((t113 + 0x0))) * u118;
            u119 = u162;
            u119 = (u119 * u117);
            t113 = 0x20;
            *(float *)((((int)stk + 4) + t113)) = ((FUN_0c0d9e90(t115)) * u119);
            u118 = u119;
            u119 = (FUN_0c0da410(t115));
            u119 = (u119 * u118);
            t113 = t116;
            t113 = (t113 & 0x1);
            t167 = (t116 >> 1);
            t116 = (*(int *)(((int)stk + 4)));
            t171 = t113;
            t113 = ((int)(((unsigned int)t171 >> 1) | ((unsigned int)t171 << 31)));
            t115 = (*(int *)(((int)stk + 4)));
            t116 = (t116 ^ (t167 | t113));
            t115 = (t115 | t116);
            t115 = (t115 * 0x22AC8EE1);
            t113 = 0x20;
            u118 = (*(float *)((((int)stk + 4) + t113)));
            t113 = 0x2C;
            *(float *)((((int)stk + 4) + t113)) = ((FUN_0c0d9e90(t116)) * u118);
            t113 = 0x20;
            u118 = (*(float *)((((int)stk + 4) + t113)));
            t113 = 0x28;
            *(float *)((((int)stk + 4) + t113)) = ((FUN_0c0da410(t116)) * u118);
            t113 = t116;
            t113 = (t113 & 0x1);
            u117 = 0.0f;
            t181 = t113;
            t113 = ((int)(((unsigned int)t181 >> 1) | ((unsigned int)t181 << 31)));
            t116 = ((t116 >> 1) | t113);
            t116 = (t116 ^ t115);
            t115 = (t115 | t116);
            t115 = (t115 * 0x22AC8EE1);
            *(unsigned int *)(((int)stk + 4)) = t116;
            if (u121 > u117) {
                t114 = 0xC0DC510;
                t113 = (nlPushMatrix(0x0));
                t113 = 0x28;
                u118 = (*(float *)((((int)stk + 4) + t113)));
                t113 = 0x38;
                u186 = *(float *)((a4 + t113));
                t113 = 0x34;
                u187 = *(float *)((a4 + t113));
                t113 = 0x2C;
                u189 = (u186 + u118);
                u118 = (*(float *)((((int)stk + 4) + t113)));
                t113 = 0x30;
                t113 = (FUN_0c0dcc70(((*(float *)((a4 + t113))) + u118), (u187 + u119), u189));
                t113 = 0x3CE;
                t113 = (nlRotateAY((*(short *)((t1 + t113)))));
                t113 = 0x3CC;
                t113 = (nlRotateAX((*(short *)((t1 + t113)))));
                t113 = (nlRotateAZ((*(int *)(((int)stk + 4)))));
                t114 = 0xC0DCB80;
                t113 = (nlScale(u120, u120, u120));
                t113 = (FUN_0c0de000(u120));
                t114 = 0xC0848BC;
                t113 = (FUN_0c0848bc(u121, u121, u121));
                t114 = 0xC0C475C;
                t113 = (FUN_0c0c475c(((*(int *)(((int)stk + 12))) + 0x236), 1.0f));
                t113 = (nlPopMatrix(0x1));
            } else {
                u205 = u117;
                u206 = u118;
            }
            u117 = u205;
            u118 = u206;
            t114 = (*(int *)(((int)stk + 8)));
            t114 = (t114 - 1);
            *(unsigned int *)(((int)stk + 8)) = t114;
            continue;
        }
        break;
    }
    t315 = t108;
    if ((int)t12 >= (int)0x5) {
        *(unsigned int *)(((int)stk + 12)) = (t12 - 5);
        t232 = (t12 - 5);
        u238 = u121;
        if ((t12 - 5) == 0) {
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            t210 = 0xC08D57C;
            t211 = (a4 + 0x44);
            u213 = u120;
            u214 = u121;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 8))) >= (int)0x5) {
                    break;
                }
                t210 = 0xC;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t211) = *(struct mv3 *)((a4 + 0x30)); }
                t210 = (FUN_0c0da2e0());
                t210 = (unsigned short)t210;
                *(unsigned int *)((t211 + 0x18)) = t210;
                t210 = (FUN_0c0da2e0());
                t210 = (t210 & 0x3);
                *(unsigned int *)((t211 + 0x1C)) = t210;
                *(unsigned int *)((t211 + 0x20)) = t12;
                t210 = (FUN_0c0da2e0());
                t210 = (unsigned char)t210;
                u212 = 0.000784313655f;
                t219 = t210;
                t210 = 0xC08D588;
                u213 = (*(float *)((t210 + 0x0)));
                u221 = u213;
                u221 = u221 + u212 * (float)t219;
                u213 = u221;
                t210 = (FUN_0c0da2e0());
                t210 = (t210 & 0x2FFF);
                *(unsigned int *)(((int)stk + 4)) = t210;
                u212 = (FUN_0c0d9e90(t210));
                u214 = u212;
                u214 = (u214 * u213);
                u212 = (FUN_0c0da410((*(int *)(((int)stk + 4)))));
                u212 = (u212 * u213);
                t210 = 0x10;
                *(float *)((t211 + t210)) = u212;
                t210 = (FUN_0c0da2e0());
                t210 = (unsigned char)t210;
                t210 = (t210 << 8);
                *(unsigned int *)(((int)stk + 4)) = t210;
                u212 = (FUN_0c0d9e90(t210));
                u212 = (u212 * u214);
                t210 = 0xC;
                *(float *)((t211 + t210)) = u212;
                u212 = (FUN_0c0da410((*(int *)(((int)stk + 4)))));
                u212 = (u212 * u214);
                t210 = 0x14;
                *(float *)((t211 + t210)) = u212;
                t211 = (t211 + 0x28);
                *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
            }
            t232 = 0x0;
            u238 = u214;
        }
        *(unsigned int *)(((int)stk + 24)) = 0x0;
        t239 = *(int *)(((int)stk + 12));
        t240 = ((~(((~t239) + 0x1) & 0x1)) + 0x1);
        if ((int)t239 >= 0) {
            t240 = (t239 & 0x1);
        }
        *(unsigned int *)(((int)stk + 32)) = (t240 + 0x1);
        t242 = t232;
        t243 = t108;
        t244 = (a4 + 0x44);
        u245 = u117;
        u246 = u118;
        u247 = u238;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 24))) < (int)0x5) {
                t249 = *(int *)((t244 + 0x20));
                t242 = 0x10;
                u247 = 1.0f;
                t242 = (t242 + t244);
                u247 = (u247 + u247);
                t243 = t12;
                *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 32)));
                t243 = (t243 - t249);
                u245 = (*(float *)((t244 + 0x0)));
                u246 = ((((struct oC_float *)(t244))->v));
                u245 = (u245 + u246);
                *(float *)((t244 + 0x0)) = u245;
                u245 = ((((struct o4_float *)(t244))->v));
                u246 = (*(float *)((t242 + 0x0)));
                t242 = 0x14;
                t242 = (t242 + t244);
                u245 = (u245 + u246);
                (((struct o4_float *)(t244))->v) = u245;
                u245 = ((((struct o8_float *)(t244))->v));
                u246 = (*(float *)((t242 + 0x0)));
                u245 = (u245 + u246);
                (((struct o8_float *)(t244))->v) = u245;
                u246 = ((((struct o10_float *)(t244))->v));
                u246 = (u246 - 0.00799999945f);
                (((struct o10_float *)(t244))->v) = u246;
                *(unsigned int *)((t244 + 0x18)) = ((*(int *)((t244 + 0x18))) + 0x3513);
                t242 = (((int)stk + 4) + 0x3C);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t242) = *(struct mv3 *)(t244); }
                t242 = (((int)stk + 4) + 0x30);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t242) = *(struct mv3 *)((t244 + 0xC)); }
                *(unsigned int *)(((int)stk + 12)) = (*(int *)((t244 + 0x18)));
                *(unsigned int *)(((int)stk + 16)) = t243;
                t260 = t243;
                if ((int)t243 > (int)0x1E) {
                    t260 = 0x1E;
                }
                *(unsigned int *)(((int)stk + 20)) = t260;
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                if ((int)t260 > 0) {
                    for (;;) {
                        t263 = *(int *)(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = (t263 - 1);
                        t242 = (*(int *)(((int)stk + 16)));
                        if (((int)t242 < (int)0x46) && ((int)(t263 - 1) <= 0)) {
                            t243 = 0x0;
                            t262 = (nlPushMatrix(t243));
                            t262 = 0x8;
                            u266 = *(float *)(((((int)stk + 4) + 0x3C) + t262));
                            t262 = 0x4;
                            t262 = (FUN_0c0dcc70(((((struct o3C_float *)(((int)stk + 4)))->v)), (*(float *)(((((int)stk + 4) + 0x3C) + t262))), u266));
                            t262 = 0x3CE;
                            t243 = (*(short *)((t1 + t262)));
                            t262 = (nlRotateAY(t243));
                            t262 = 0x3CC;
                            t243 = (*(short *)((t1 + t262)));
                            t262 = (nlRotateAX(t243));
                            t243 = (*(int *)(((int)stk + 12)));
                            t243 = (unsigned short)t243;
                            t262 = (nlRotateAZ(t243));
                            t262 = (nlScale(u247, u247, u247));
                            t262 = (FUN_0c0de000(u247));
                            t242 = (*(int *)(((int)stk + 8)));
                            t279 = t242;
                            t242 = (t242 << 2);
                            t242 = (t242 + t279);
                            t242 = (t242 << 2);
                            t262 = 0x1E;
                            t262 = ((int)((int)t242 / (int)t262));
                            *(unsigned int *)(((int)stk + 28)) = t262;
                            t262 = (FUN_0c0848bc(1.0f, 1.0f, 1.0f));
                            t243 = (*(int *)(((int)stk + 28)));
                            t243 = (t243 + 0x259);
                            t262 = (FUN_0c0c475c(t243, 1.0f));
                            t243 = 0x1;
                            t262 = (nlPopMatrix(t243));
                        } else {
                            t285 = t242;
                            t288 = t243;
                            u289 = u245;
                            u290 = u246;
                        }
                        u245 = u289;
                        u246 = u290;
                        t242 = t285;
                        t243 = t288;
                        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) - 0x3513);
                        t242 = (*(int *)(((int)stk + 16)));
                        t242 = (t242 - 1);
                        *(unsigned int *)(((int)stk + 16)) = t242;
                        t262 = (*(int *)(((int)stk + 8)));
                        t262 = 0x4;
                        u246 = (*(float *)(((((int)stk + 4) + 0x30) + t262)));
                        t242 = t262;
                        t242 = (t242 + (((int)stk + 4) + 0x30));
                        u246 = (u246 + 0.00799999945f);
                        *(float *)(((((int)stk + 4) + 0x30) + t262)) = u246;
                        u245 = ((((struct o3C_float *)(((int)stk + 4)))->v));
                        u246 = ((((struct o30_float *)(((int)stk + 4)))->v));
                        u245 = (u245 - u246);
                        (((struct o3C_float *)(((int)stk + 4)))->v) = u245;
                        u245 = (*(float *)(((((int)stk + 4) + 0x3C) + t262)));
                        u246 = (*(float *)((t242 + 0x0)));
                        u245 = (u245 - u246);
                        *(float *)(((((int)stk + 4) + 0x3C) + t262)) = u245;
                        t262 = 0x8;
                        t242 = 0x8;
                        t242 = (t242 + (((int)stk + 4) + 0x30));
                        u245 = (*(float *)(((((int)stk + 4) + 0x3C) + t262)));
                        u246 = (*(float *)((t242 + 0x0)));
                        u245 = (u245 - u246);
                        *(float *)(((((int)stk + 4) + 0x3C) + t262)) = u245;
                        u247 = (u247 + 0.199999988f);
                        if ((int)(*(int *)(((int)stk + 4))) <= 0) {
                            t242 = 0x2;
                            *(unsigned int *)(((int)stk + 4)) = t242;
                        }
                        t304 = *(int *)(((int)stk + 8));
                        *(unsigned int *)(((int)stk + 8)) = (t304 + 0x1);
                        if ((int)(t304 + 0x1) >= (int)(*(int *)(((int)stk + 20)))) {
                            break;
                        }
                    }
                }
                t244 = (t244 + 0x28);
                *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
                continue;
            }
            break;
        }
        t315 = t243;
    }
    return (FUN_0c0849da());
}
