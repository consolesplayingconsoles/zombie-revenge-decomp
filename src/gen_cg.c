/* Straight-line functions with calls and guards (batch gen_cg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o2BC_int { char p[0x2BC]; int v; };
struct o2C4_int { char p[0x2C4]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o330_int { char p[0x330]; int v; };
struct o340_int { char p[0x340]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o3B4_uint { char p[0x3B4]; unsigned int v; };
struct o3B8_uint { char p[0x3B8]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o4C4_uint { char p[0x4C4]; unsigned int v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4E0_uint { char p[0x4E0]; unsigned int v; };
struct o4E4_uint { char p[0x4E4]; unsigned int v; };
struct o4E8_uint { char p[0x4E8]; unsigned int v; };
struct o4EC_uint { char p[0x4EC]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F4_int { char p[0x4F4]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o500_uint { char p[0x500]; unsigned int v; };
struct o524_int { char p[0x524]; int v; };
struct o528_int { char p[0x528]; int v; };
struct o54C_int { char p[0x54C]; int v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o98_int { char p[0x98]; int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c022838(int);
int FUN_0c02286c(int, int, float, float);
int FUN_0c037106(int);
int FUN_0c0371b0(int);
int FUN_0c04685c(int, int, float, float);
int FUN_0c053aa4(int);
int FUN_0c084800(float, float, float);
int FUN_0c0849da(void);
int FUN_0c096d6c(void);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int, int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int nlAddVector3op(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0c932c(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5, float f6, float f7);
int FUN_0c0255b0(int a4);
int FUN_0c026a6c(int a4);
int FUN_0c023ad8(int a4);
int FUN_0c026828(int a4);
int FUN_0c046b90(int a4);
int FUN_0c02f614(int a4, int a5);
int FUN_0c027b1c(int a4);
int FUN_0c029878(int a4);
int FUN_0c02391c(int a4);
int FUN_0c0239dc(int a4);
int FUN_0c0d1a12(int a4);
int FUN_0c0c7574(int a4);
int FUN_0c096ea0(int a4);
int FUN_0c0223fc(int a4);
int FUN_0c02248a(int a4);
int FUN_0c0222c0(int a4);
int FUN_0c02234c(int a4);
int FUN_0c02253c(int a4);
int FUN_0c0262fc(int a4);
int FUN_0c028dca(int a4);
int FUN_0c045ff2(int a4);
int FUN_0c04607e(int a4);
int FUN_0c0c74e8(int a4);
int FUN_0c02e3be(int a4);
int FUN_0c09746e(int a4);
int FUN_0c0a14be(int a4);
int FUN_0c010f58(int a4);

int FUN_0c0c932c(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5, float f6, float f7)
{
    int stk[34];
    register int t1;
    register int t6;
    register int t8;
    register int t13;
    register int t17;
    register int t20;
    register int t23;
    register int t28;
    register int t29;
    register int t30;
    register int t31;
    register float u36;
    register float u37;
    register float u38;
    register float u39;
    register float u40;
    register float u41;
    register int t51;
    register float u52;
    register float u61;
    register int t62;
    register float u63;
    register float u70;
    register int t71;
    register float u72;
    register float u79;
    register int t95;
    register int t102;
    register int t106;
    register int t108;
    register int t113;
    register int t116;
    register int t121;
    register int t126;
    register int t124;
    register int t137;
    register int t141;
    register int t146;
    register int t151;
    register float u156;
    register float u158;
    register int t167;
    register int t165;
    register int t169;
    register int t170;
    register float u235;
    register float u236;
    register float u237;
    register float u238;
    register float u176;
    register int t182;
    register int t184;
    register float u187;
    register float u190;
    register float u193;
    register float u196;
    register float u201;
    register float u203;
    register float u205;
    register float u207;
    int t27;
    register int t32;
    register int t33;
    register int t34;
    register float u35;
    register float u42;
    register float u43;
    register int t243;
    register int t244;
    register int t245;
    register int t246;
    register float u247;
    register float u248;
    register float u249;
    int t82;
    register int t83;
    register int t84;
    int t92;
    register int t93;
    register int t94;
    int t173;
    register int t232;
    register float u226;
    register float u227;
    register float u228;
    register float u229;

    *(unsigned int *)(((int)stk + 32)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    *(float *)(((int)stk + 4)) = f4;
    *(float *)(((int)stk + 28)) = f5;
    *(unsigned int *)(((int)stk + 84)) = a6;
    *(unsigned int *)(((int)stk + 88)) = a7;
    *(float *)(((int)stk + 80)) = f6;
    *(float *)(((int)stk + 76)) = f7;
    t31 = *(int *)(((int)stk + 32));
    t1 = *(int *)((t31 + 0x0));
    *(unsigned int *)(((int)stk + 96)) = (int)((float)(((int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u))) >> 1) * 0.25f);
    t6 = *(int *)((t31 + 0x4));
    t8 = (int)((unsigned int)((int)((unsigned int)t6 + (unsigned int)0x0)) + ((((int)0x0 > (int)t6)) ? 1u : 0u));
    *(unsigned int *)(((int)stk + 132)) = (int)((float)(t8 >> 1) * 0.25f);
    *(unsigned int *)(((int)stk + 12)) = 0x47AE927;
    *(unsigned int *)(((int)stk + 60)) = 0xD;
    t30 = *(int *)(((*(int *)(((int)stk + 24))) + 0x0));
    t13 = t30;
    if ((int)t1 > (int)t30) {
        t13 = t1;
    }
    *(unsigned int *)(((int)stk + 40)) = t13;
    t29 = *(int *)(((*(int *)(((int)stk + 24))) + 0x4));
    t17 = t29;
    if ((int)t6 > (int)t29) {
        t17 = t6;
    }
    *(unsigned int *)(((int)stk + 128)) = t17;
    t20 = (int)((int)(*(int *)(((int)stk + 40))) / (int)0x3);
    t23 = (int)((int)((*(int *)(((int)stk + 40))) << 1) / (int)0x3);
    *(unsigned int *)(((int)stk + 64)) = (*(int *)((t31 + 0x8)));
    *(unsigned int *)(((int)stk + 92)) = (*(int *)(((*(int *)(((int)stk + 24))) + 0x8)));
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 36)) = 0xC20A1E0;
    *(unsigned int *)(((int)stk + 68)) = (-a9);
    *(unsigned int *)(((int)stk + 72)) = (-a8);
    t28 = 0x3;
    u36 = 0.25f;
    u37 = ((float)(t8 >> 1) * 0.25f);
    u38 = f4;
    u39 = f5;
    u40 = f6;
    u41 = f7;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 8))) < (int)(*(int *)(((int)stk + 128)))) {
            u36 = 0.25f;
            u37 = (float)(*(int *)(((int)stk + 8)));
            u35 = (float)(*(int *)(((int)stk + 132)));
            u37 = (u37 * u36);
            u37 = (u37 - u35);
            *(float *)(((int)stk + 100)) = u37;
            t33 = 0x0;
            if ((int)(*(int *)(((int)stk + 40))) <= 0) {
                t243 = t28;
                t244 = t29;
                t245 = t30;
                t246 = t31;
                u247 = u39;
                u248 = u40;
                u249 = u41;
            } else {
                for (;;) {
                    t28 = 0x3F;
                    t34 = 0x0;
                    *(unsigned int *)(((int)stk + 16)) = t34;
                    t28 = (t28 & (((*(int *)0xC23A258) << 1) + t33));
                    t51 = *(int *)(((int)stk + 36));
                    if ((int)t28 <= (int)t20) {
                        u37 = (float)t28;
                        u36 = (float)t20;
                        u37 = (u37 / u36);
                    } else {
                        if ((int)t28 <= (int)t23) {
                            u37 = (float)(t28 - t20);
                            u36 = (float)t20;
                            u37 = (u37 / u36);
                            u52 = u37;
                            u37 = 1.0f;
                            u37 = (u37 - u52);
                        } else {
                            u37 = 0.0f;
                        }
                    }
                    u36 = 0.199999988f;
                    u61 = u36;
                    u61 = u61 + 0.799999952f * u37;
                    u36 = u61;
                    *(float *)((t51 + 0x0)) = u36;
                    t62 = *(int *)(((int)stk + 36));
                    if (((int)t28 >= (int)t20) && ((int)t28 <= (int)t23)) {
                        u37 = (float)(t28 - t20);
                        u36 = (float)t20;
                        u37 = (u37 / u36);
                    } else {
                        if ((int)t28 >= (int)t23) {
                            t27 = t28;
                            t27 = (t27 - t23);
                            u37 = (float)t27;
                            u36 = (float)t20;
                            u37 = (u37 / u36);
                            u63 = u37;
                            u37 = 1.0f;
                            u37 = (u37 - u63);
                        } else {
                            u37 = 0.0f;
                        }
                    }
                    u36 = 0.199999988f;
                    u70 = u36;
                    u70 = u70 + 0.799999952f * u37;
                    u36 = u70;
                    (((struct o4_float *)(t62))->v) = u36;
                    t71 = *(int *)(((int)stk + 36));
                    if ((int)t28 >= (int)t23) {
                        t27 = t28;
                        t27 = (t27 - t23);
                        u37 = (float)t27;
                        u36 = (float)t20;
                        u37 = (u37 / u36);
                    } else {
                        if ((int)t28 <= (int)t20) {
                            u37 = (float)t28;
                            u36 = (float)t20;
                            u37 = (u37 / u36);
                            u72 = u37;
                            u37 = 1.0f;
                            u37 = (u37 - u72);
                        } else {
                            u37 = 0.0f;
                        }
                    }
                    u36 = 0.199999988f;
                    u79 = u36;
                    u79 = u79 + 0.799999952f * u37;
                    u36 = u79;
                    (((struct o8_float *)(t71))->v) = u36;
                    if (((int)t33 < (int)(*(int *)(((*(int *)(((int)stk + 32))) + 0x0)))) && (t82 = *(int *)(((int)stk + 32)), t27 = t82, t83 = *(int *)(((int)stk + 8)), t84 = *(int *)((t27 + 0x4)), (int)t83 < (int)t84)) {
                        t34 = (*(int *)(((int)stk + 64)));
                        t34 = (t34 + 0x1);
                        *(unsigned int *)(((int)stk + 64)) = t34;
                        t34 = (t34 - 1);
                        t34 = (*(signed char *)((t34 + 0x0)));
                        t34 = (unsigned char)t34;
                    }
                    if (((int)t33 < (int)(*(int *)(((*(int *)(((int)stk + 24))) + 0x0)))) && (t92 = *(int *)(((int)stk + 24)), t27 = t92, t93 = *(int *)(((int)stk + 8)), t94 = *(int *)((t27 + 0x4)), (int)t93 < (int)t94)) {
                        t95 = *(int *)(((int)stk + 92));
                        *(unsigned int *)(((int)stk + 92)) = (t95 + 0x1);
                        *(unsigned int *)(((int)stk + 16)) = (unsigned char)(*(signed char *)((((t95 + 0x1) - 1) + 0x0)));
                    }
                    t28 = (*(int *)(((int)stk + 12)));
                    t102 = *(int *)(((int)stk + 60));
                    t28 = (t28 >> 1);
                    t106 = ((*(int *)(((int)stk + 12))) & 0x1);
                    t28 = (t28 | ((int)(((unsigned int)t106 >> 1) | ((unsigned int)t106 << 31))));
                    t28 = (t28 ^ t102);
                    t29 = t28;
                    t29 = (t29 | t102);
                    t27 = t28;
                    t29 = (t29 * 0x22AC8EE1);
                    t108 = (int)((int)t27 % (int)0x400);
                    t27 = (((t108 << 2) << 2) - t108);
                    u37 = (float)(((int)((int)t27 / (int)0x400)) + 0x5);
                    u43 = u37;
                    t113 = (t28 & 0x1);
                    t28 = ((t28 >> 1) | ((int)(((unsigned int)t113 >> 1) | ((unsigned int)t113 << 31))));
                    t28 = (t28 ^ t29);
                    t29 = (t29 | t28);
                    t27 = t28;
                    t29 = (t29 * 0x22AC8EE1);
                    t116 = (int)((int)t27 % (int)0x400);
                    t27 = (((t116 << 2) << 2) - t116);
                    t32 = t28;
                    t32 = (t32 >> 1);
                    u37 = (float)(((int)((int)t27 / (int)0x400)) + 0x5);
                    t121 = (t28 & 0x1);
                    t32 = (t32 | ((int)(((unsigned int)t121 >> 1) | ((unsigned int)t121 << 31))));
                    t32 = (t32 ^ t29);
                    t28 = t32;
                    t28 = (t28 | t29);
                    t28 = (t28 * 0x22AC8EE1);
                    t126 = (t32 & 0x1);
                    t124 = (int)(((unsigned int)t126 >> 1) | ((unsigned int)t126 << 31));
                    *(unsigned int *)(((int)stk + 0)) = (((t32 >> 1) | t124) ^ t28);
                    *(unsigned int *)(((int)stk + 20)) = (((((t32 >> 1) | t124) ^ t28) | t28) * 0x22AC8EE1);
                    t27 = (*(int *)(((int)stk + 0)));
                    t27 = (t27 & 0x7FFF);
                    t27 = (t27 << 2);
                    t27 = (t27 << 2);
                    t27 = (t27 << 2);
                    u42 = u37;
                    if ((int)t27 < 0) {
                        t27 = (t27 + 0x7FFF);
                    }
                    t27 = ((int)t27 >> 15);
                    t27 = (t27 + 0x100);
                    t27 = (t27 * (*(int *)(((int)stk + 88))));
                    t32 = (t32 + t27);
                    t27 = 0xC0DA410;
                    t28 = t32;
                    u37 = u43;
                    u43 = (FUN_0c0da410(t28));
                    u43 = (u43 * u37);
                    t28 = t32;
                    *(float *)(((int)stk + 52)) = ((FUN_0c0d9e90(t28)) * u42);
                    t32 = (*(int *)(((int)stk + 0)));
                    t137 = *(int *)(((int)stk + 20));
                    t32 = (t32 >> 1);
                    t141 = ((*(int *)(((int)stk + 0))) & 0x1);
                    t32 = (t32 | ((int)(((unsigned int)t141 >> 1) | ((unsigned int)t141 << 31))));
                    t32 = (t32 ^ t137);
                    *(unsigned int *)(((int)stk + 0)) = ((t137 | t32) * 0x22AC8EE1);
                    t28 = t32;
                    u37 = u43;
                    u37 = (u37 * (FUN_0c0da410(t28)));
                    *(float *)(((int)stk + 48)) = u37;
                    t28 = t32;
                    u43 = (u43 * (FUN_0c0d9e90(t28)));
                    t146 = (t32 >> 1);
                    t151 = (t32 & 0x1);
                    t32 = (*(int *)(((int)stk + 0)));
                    t32 = (t32 ^ (t146 | ((int)(((unsigned int)t151 >> 1) | ((unsigned int)t151 << 31)))));
                    *(unsigned int *)(((int)stk + 0)) = (((*(int *)(((int)stk + 0))) | t32) * 0x22AC8EE1);
                    t28 = t32;
                    *(float *)(((int)stk + 56)) = (FUN_0c0d9e90(t28));
                    t28 = t32;
                    u38 = (FUN_0c0da410(t28));
                    u37 = (*(float *)(((int)stk + 52)));
                    u156 = *(float *)(((int)stk + 56));
                    u37 = (u37 * u38);
                    u36 = (*(float *)(((int)stk + 52)));
                    u158 = u37;
                    u158 = u158 + u156 * u43;
                    u37 = u158;
                    u43 = (u43 * u38);
                    u35 = (float)t33;
                    u42 = u37;
                    u37 = u156;
                    u36 = (u36 * u37);
                    u36 = (u36 - u43);
                    *(float *)(((int)stk + 44)) = u36;
                    u35 = (u35 * 0.25f);
                    u37 = (float)(*(int *)(((int)stk + 96)));
                    u35 = (u35 - u37);
                    u35 = (u35 - u42);
                    *(float *)(((int)stk + 104)) = u35;
                    u37 = (*(float *)(((int)stk + 48)));
                    u36 = (*(float *)(((int)stk + 100)));
                    u36 = (u36 - u37);
                    *(float *)(((int)stk + 108)) = u36;
                    u35 = (*(float *)(((int)stk + 44)));
                    *(float *)(((int)stk + 112)) = (0.0f - u35);
                    t27 = (*(int *)(((int)stk + 0)));
                    t167 = (t32 & 0x1);
                    t165 = (int)(((unsigned int)t167 >> 1) | ((unsigned int)t167 << 31));
                    *(unsigned int *)(((int)stk + 12)) = (((t32 >> 1) | t165) ^ t27);
                    t169 = (((((t32 >> 1) | t165) ^ t27) | t27) * 0x22AC8EE1);
                    t27 = 0x3F;
                    t170 = t34;
                    t34 = (t34 & t27);
                    *(unsigned int *)(((int)stk + 60)) = t169;
                    *(unsigned int *)(((int)stk + 0)) = ((int)t170 >> 6);
                    *(unsigned int *)(((int)stk + 20)) = ((int)(*(int *)(((int)stk + 16))) >> 6);
                    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) & t27);
                    u235 = u35;
                    u236 = u36;
                    u237 = u37;
                    u238 = u38;
                    if ((t34 == 0) && (t173 = *(int *)(((int)stk + 16)), t173 == 0)) {
                        t232 = t27;
                    } else {
                        u37 = (float)((*(int *)(((int)stk + 16))) - t34);
                        u36 = (float)t34;
                        u176 = u36;
                        u176 = u176 + (*(float *)(((int)stk + 4))) * u37;
                        u36 = u176;
                        u37 = 14.0f;
                        u43 = u36;
                        u43 = (u43 / u37);
                        u36 = 0.0f;
                        if (u43 != u36) {
                            t34 = (*(int *)(((int)stk + 20)));
                            t32 = (*(int *)(((int)stk + 0)));
                            t182 = t34;
                            t34 = (t34 << 1);
                            t34 = (t34 + t182);
                            t184 = t32;
                            t32 = (t32 << 1);
                            t32 = (t32 + t184);
                            t32 = (t32 << 2);
                            t27 = 0xC20A1BC;
                            t32 = (t32 + t27);
                            u36 = ((((struct o8_float *)(t32))->v));
                            t34 = (t34 << 2);
                            *(float *)(((int)stk + 116)) = u36;
                            t34 = (t34 + 0xC20A1BC);
                            u40 = u36;
                            u35 = ((((struct o8_float *)(t34))->v));
                            u187 = *(float *)(((int)stk + 4));
                            u35 = (u35 - u36);
                            u36 = ((((struct o4_float *)(t32))->v));
                            *(float *)(((int)stk + 124)) = u36;
                            u37 = ((((struct o4_float *)(t34))->v));
                            u190 = u40;
                            u190 = u190 + u187 * u35;
                            u40 = u190;
                            u37 = (u37 - u36);
                            u39 = u36;
                            u36 = (*(float *)((t32 + 0x0)));
                            u193 = u39;
                            u193 = u193 + (*(float *)(((int)stk + 4))) * u37;
                            u39 = u193;
                            *(float *)(((int)stk + 120)) = u36;
                            u37 = (*(float *)((t34 + 0x0)));
                            u37 = (u37 - u36);
                            u38 = u36;
                            u196 = u38;
                            u196 = u196 + (*(float *)(((int)stk + 4))) * u37;
                            u38 = u196;
                            FUN_0c084800(u38, u39, u40);
                            t28 = 0x0;
                            nlPushMatrix(t28);
                            u40 = (*(float *)(((int)stk + 44)));
                            u37 = (*(float *)(((int)stk + 112)));
                            u201 = *(float *)(((int)stk + 28));
                            u39 = (*(float *)(((int)stk + 48)));
                            u203 = u40;
                            u203 = u203 + u201 * u37;
                            u40 = u203;
                            u37 = (*(float *)(((int)stk + 108)));
                            u38 = u42;
                            u205 = u39;
                            u205 = u205 + u201 * u37;
                            u39 = u205;
                            u37 = (*(float *)(((int)stk + 104)));
                            u207 = u38;
                            u207 = u207 + u201 * u37;
                            u38 = u207;
                            FUN_0c0dcc70(u38, u39, u40);
                            t28 = (*(int *)(((int)stk + 68)));
                            nlRotateAY(t28);
                            t28 = (*(int *)(((int)stk + 72)));
                            nlRotateAX(t28);
                            t28 = (*(int *)(((int)stk + 12)));
                            nlRotateAZ(t28);
                            u39 = u43;
                            u40 = u43;
                            u38 = u43;
                            nlScale(u38, u39, u40);
                            u38 = (*(float *)(((int)stk + 76)));
                            u38 = (u38 * u43);
                            FUN_0c0de000(u38);
                            u38 = (*(float *)(((int)stk + 80)));
                            t28 = (*(int *)(((int)stk + 84)));
                            FUN_0c0c475c(t28, u38);
                            t28 = 0x1;
                            nlPopMatrix(t28);
                        } else {
                            t232 = t27;
                            u226 = u35;
                            u227 = u36;
                            u228 = u37;
                            u229 = u38;
                        }
                        u235 = u226;
                        u236 = u227;
                        u237 = u228;
                        u238 = u229;
                    }
                    u35 = u235;
                    u36 = u236;
                    u37 = u237;
                    u38 = u238;
                    t27 = t232;
                    t33 = (t33 + 0x1);
                    if ((int)t33 < (int)(*(int *)(((int)stk + 40)))) continue;
                    break;
                }
            }
            u39 = u247;
            u40 = u248;
            u41 = u249;
            t27 = (*(int *)(((int)stk + 8)));
            t28 = t243;
            t29 = t244;
            t30 = t245;
            t31 = t246;
            t27 = (t27 + 0x1);
            *(unsigned int *)(((int)stk + 8)) = t27;
            continue;
        }
        break;
    }
    return FUN_0c0849da();
}

int FUN_0c0255b0(int a4)
{
    int stk[4];
    register int t0;
    register int t7;
    register int t9;
    register int t10;
    register int t12;

    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x0)));
    if (((((struct o4C8_int *)(a4))->v)) != 0) {
        (((struct o2CC_uint *)(a4))->v) = 0x1;
    }
    (((struct o20C_uint *)(a4))->v) = 0x1;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t7 = (((struct o4F4_int *)(a4))->v);
    t9 = (((struct o4F8_int *)(a4))->v);
    t10 = *(int *)(((0xC1F79BC + (((t7 << 1) + t7) << 2)) + 0x0));
    t12 = (int)((unsigned int)((int)((unsigned int)t9 + (unsigned int)0x0)) + ((((int)0x0 > (int)t9)) ? 1u : 0u));
    (((struct o3B0_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t10 + (((t12 >> 1) << 2) << 1)) + 0x4))))) + (*(int *)(((t10 + (((t12 >> 1) << 2) << 1)) + 0x0))));
    (((struct o4C8_uint *)(a4))->v) = 0x0;
    (((struct o500_uint *)(a4))->v) = 0x1;
    (((struct o4E0_uint *)(a4))->v) = 0x0;
    (((struct o4E4_uint *)(a4))->v) = 0x0;
    (((struct o4E8_uint *)(a4))->v) = 0x0;
    (((struct o4EC_uint *)(a4))->v) = 0x0;
    if ((unsigned int)((int)((unsigned int)(*(int *)0xC23A258) % (unsigned int)0xA)) > (unsigned int)((((struct oBC_int *)(a4))->v))) {
        FUN_0c0cc3f8(0x431A9, 0x0, 0x0, 0x0);
    }
    FUN_0c0371b0(a4);
    FUN_0c02286c(a4, 0x28, ((((struct o4_float *)0xC0256EC)->v)), ((((struct o0_float *)0xC0256EC)->v)));
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return 0x4F8;
}

int FUN_0c026a6c(int a4)
{
    int stk[4];
    register int t0;
    register int t7;
    register int t9;
    register int t10;
    register int t12;

    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x0)));
    if (((((struct o4C8_int *)(a4))->v)) != 0) {
        (((struct o2CC_uint *)(a4))->v) = 0x1;
    }
    (((struct o20C_uint *)(a4))->v) = 0x1;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t7 = (((struct o4F4_int *)(a4))->v);
    t9 = (((struct o4F8_int *)(a4))->v);
    t10 = *(int *)(((0xC1F79BC + (((t7 << 1) + t7) << 2)) + 0x0));
    t12 = (int)((unsigned int)((int)((unsigned int)t9 + (unsigned int)0x0)) + ((((int)0x0 > (int)t9)) ? 1u : 0u));
    (((struct o3B0_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t10 + (((t12 >> 1) << 2) << 1)) + 0x4))))) + (*(int *)(((t10 + (((t12 >> 1) << 2) << 1)) + 0x0))));
    (((struct o4C8_uint *)(a4))->v) = 0x0;
    (((struct o500_uint *)(a4))->v) = 0x1;
    (((struct o4E0_uint *)(a4))->v) = 0x0;
    (((struct o4E4_uint *)(a4))->v) = 0x0;
    (((struct o4E8_uint *)(a4))->v) = 0x0;
    (((struct o4EC_uint *)(a4))->v) = 0x0;
    FUN_0c0371b0(a4);
    FUN_0c02286c(a4, 0x28, 0.0f, (*(float *)0xC026BA0));
    if ((unsigned int)((*(int *)0xC23A258) & 0x7) > (unsigned int)((((struct oBC_int *)(a4))->v))) {
        FUN_0c0cc3f8(0x431A9, 0x0, 0x0, 0x0);
    }
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return 0x4F8;
}

int FUN_0c023ad8(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if (((((struct o330_int *)(a4))->v)) == 0) {
        t0 = (((struct o4F0_int *)(a4))->v);
        (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x0)));
    } else {
        if (((((struct o340_int *)(a4))->v)) != 5) {
            (((struct o2C4_uint *)(a4))->v) = 0x8;
        } else {
            (((struct o2C4_uint *)(a4))->v) = 0x9;
        }
    }
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o20C_uint *)(a4))->v) = 0x1;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t0 = (((struct o4F4_int *)(a4))->v);
    t1 = (((struct o4F8_int *)(a4))->v);
    t2 = *(int *)(((0xC1F79BC + (((t0 << 1) + t0) << 2)) + 0x0));
    t0 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
    (((struct o3B0_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x4))))) + (*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x0))));
    (((struct o3B4_uint *)(a4))->v) = 0x0;
    (((struct o3B8_uint *)(a4))->v) = 0x0;
    FUN_0c037106(a4);
    (((struct o4C8_uint *)(a4))->v) = 0x0;
    (((struct o500_uint *)(a4))->v) = 0x1;
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return 0x4F8;
}

int FUN_0c026828(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o2C4_uint *)(a4))->v) = 0x376;
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o20C_uint *)(a4))->v) = 0x4;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t0 = (((struct o4F4_int *)(a4))->v);
    t1 = (((struct o4F8_int *)(a4))->v);
    t2 = *(int *)(((0xC1F79BC + (((t0 << 1) + t0) << 2)) + 0x0));
    t0 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
    (((struct o3B0_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x4))))) + (*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x0))));
    (((struct o4C8_uint *)(a4))->v) = 0x1;
    (((struct o4C4_uint *)(a4))->v) = 0x0;
    if (((((struct o524_int *)(a4))->v)) != 0) {
        if ((int)((((struct o54C_int *)(a4))->v)) < (int)((((struct o528_int *)(a4))->v))) {
            (((struct o500_uint *)(a4))->v) = 0x2;
        } else {
            if ((int)((((struct o54C_int *)(a4))->v)) > (int)((((struct o528_int *)(a4))->v))) {
                (((struct o500_uint *)(a4))->v) = 0x3;
            } else {
                if ((0x1 & (*(int *)0xC23A258)) == 0) {
                    (((struct o500_uint *)(a4))->v) = 0x4;
                } else {
                    (((struct o500_uint *)(a4))->v) = 0x5;
                }
            }
        }
    } else {
        (((struct o500_uint *)(a4))->v) = 0x1;
    }
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return 0x4F8;
}

int FUN_0c046b90(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x0)));
    if (((((struct o2BC_int *)(a4))->v)) != ((((struct o2C4_int *)(a4))->v))) {
        (((struct o2CC_uint *)(a4))->v) = 0x1;
    }
    (((struct o20C_uint *)(a4))->v) = 0x1;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t0 = (((struct o4F4_int *)(a4))->v);
    t1 = (((struct o4F8_int *)(a4))->v);
    t2 = *(int *)(((0xC1F79BC + (((t0 << 1) + t0) << 2)) + 0x0));
    t0 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
    (((struct o3B0_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x4))))) + (*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x0))));
    (((struct o4C8_uint *)(a4))->v) = 0x0;
    (((struct o500_uint *)(a4))->v) = 0x1;
    (((struct o4E0_uint *)(a4))->v) = 0x0;
    (((struct o4E4_uint *)(a4))->v) = 0x0;
    (((struct o4E8_uint *)(a4))->v) = 0x0;
    (((struct o4EC_uint *)(a4))->v) = 0x0;
    FUN_0c0371b0(a4);
    FUN_0c04685c(a4, 0xA, 0.0f, 0.00999999978f);
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return 0x4F8;
}

int FUN_0c02f614(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((int)(short)a5 > 0) {
        t0 = (((struct o4F0_int *)(a4))->v);
        (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((0xC1F8E3C + (((t0 << 2) + t0) << 2)) + 0x8))) + 0xE)));
        t0 = 0x7;
    } else {
        t1 = (((struct o4F0_int *)(a4))->v);
        (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((0xC1F8E3C + (((t1 << 2) + t1) << 2)) + 0x8))) + 0x16)));
        t0 = 0xB;
    }
    (((struct o500_uint *)(a4))->v) = t0;
    if (((((struct o2C4_int *)(a4))->v)) != ((((struct o2BC_int *)(a4))->v))) {
        (((struct o2D4_uint *)(a4))->v) = 0x4;
        (((struct o2CC_uint *)(a4))->v) = 0x1;
    }
    (((struct o20C_uint *)(a4))->v) = 0x4;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t0 = (((struct o4F4_int *)(a4))->v);
    t1 = (((struct o4F8_int *)(a4))->v);
    t2 = *(int *)(((0xC1F79BC + (((t0 << 1) + t0) << 2)) + 0x0));
    t0 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
    t1 = (int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x4))));
    t3 = *(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x0));
    (((struct o3B0_uint *)(a4))->v) = (t1 + t3);
    return (t1 + t3);
}

int FUN_0c027b1c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x0)));
    if (((((struct o4C8_int *)(a4))->v)) != 0) {
        (((struct o2CC_uint *)(a4))->v) = 0x1;
    }
    (((struct o20C_uint *)(a4))->v) = 0x1;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t0 = (((struct o4F4_int *)(a4))->v);
    t1 = (((struct o4F8_int *)(a4))->v);
    t2 = *(int *)(((0xC1F79BC + (((t0 << 1) + t0) << 2)) + 0x0));
    t0 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
    (((struct o3B0_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x4))))) + (*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x0))));
    (((struct o4C8_uint *)(a4))->v) = 0x0;
    (((struct o500_uint *)(a4))->v) = 0x1;
    (((struct o4E0_uint *)(a4))->v) = 0x0;
    (((struct o4E4_uint *)(a4))->v) = 0x0;
    (((struct o4E8_uint *)(a4))->v) = 0x0;
    (((struct o4EC_uint *)(a4))->v) = 0x0;
    FUN_0c0371b0(a4);
    FUN_0c022838(a4);
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return 0x4F8;
}

int FUN_0c029878(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x0)));
    if (((((struct o4C8_int *)(a4))->v)) != 0) {
        (((struct o2CC_uint *)(a4))->v) = 0x1;
    }
    (((struct o20C_uint *)(a4))->v) = 0x1;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t0 = (((struct o4F4_int *)(a4))->v);
    t1 = (((struct o4F8_int *)(a4))->v);
    t2 = *(int *)(((0xC1F79BC + (((t0 << 1) + t0) << 2)) + 0x0));
    t0 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
    (((struct o3B0_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x4))))) + (*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x0))));
    (((struct o4C8_uint *)(a4))->v) = 0x0;
    (((struct o500_uint *)(a4))->v) = 0x1;
    (((struct o4E0_uint *)(a4))->v) = 0x0;
    (((struct o4E4_uint *)(a4))->v) = 0x0;
    (((struct o4E8_uint *)(a4))->v) = 0x0;
    (((struct o4EC_uint *)(a4))->v) = 0x0;
    FUN_0c0371b0(a4);
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return 0x4F8;
}

int FUN_0c02391c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x0)));
    if (((((struct o4C8_int *)(a4))->v)) != 0) {
        (((struct o2CC_uint *)(a4))->v) = 0x1;
    }
    (((struct o20C_uint *)(a4))->v) = 0x1;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t0 = (((struct o4F4_int *)(a4))->v);
    t1 = (((struct o4F8_int *)(a4))->v);
    t2 = *(int *)(((0xC1F79BC + (((t0 << 1) + t0) << 2)) + 0x0));
    t0 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
    (((struct o3B0_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x4))))) + (*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x0))));
    (((struct o4C8_uint *)(a4))->v) = 0x0;
    (((struct o500_uint *)(a4))->v) = 0x1;
    (((struct o4E0_uint *)(a4))->v) = 0x0;
    (((struct o4E4_uint *)(a4))->v) = 0x0;
    (((struct o4E8_uint *)(a4))->v) = 0x0;
    (((struct o4EC_uint *)(a4))->v) = 0x0;
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return FUN_0c0371b0(a4);
}

int FUN_0c0239dc(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x0)));
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o20C_uint *)(a4))->v) = 0x1;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t0 = (((struct o4F4_int *)(a4))->v);
    t1 = (((struct o4F8_int *)(a4))->v);
    t2 = *(int *)(((0xC1F79BC + (((t0 << 1) + t0) << 2)) + 0x0));
    t0 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
    (((struct o3B0_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x4))))) + (*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x0))));
    (((struct o4C8_uint *)(a4))->v) = 0x0;
    (((struct o500_uint *)(a4))->v) = 0x1;
    (((struct o4E0_uint *)(a4))->v) = 0x0;
    (((struct o4E4_uint *)(a4))->v) = 0x0;
    (((struct o4E8_uint *)(a4))->v) = 0x0;
    (((struct o4EC_uint *)(a4))->v) = 0x0;
    FUN_0c0371b0(a4);
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return 0x4F8;
}

int FUN_0c0d1a12(int a4)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t11;
    register int t3;
    register int t4;
    register int t5;
    register int t13;

    t0 = (((struct o0_int *)0xC943424)->v);
    t1 = *(int *)(((a4 << 2) + 0xC246FF0));
    t11 = 0x0;
    if (t0 != 0xFFFF) {
        t3 = (int)((int)((((struct oC_int *)0xC943424)->v)) / (int)0x7);
        t4 = (((struct o10_int *)0xC943424)->v);
        t5 = ((~(((~(t3 + t4)) + 0x1) & 0x7)) + 0x1);
        if ((int)(t3 + t4) >= 0) {
            t5 = ((t3 + t4) & 0x7);
        }
        t11 = ((*(int *)(((t5 << 2) + 0xC20BEDC))) + t0);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC943418); }
    t13 = (0x4000 + t11);
    if (a4 != 0) {
        t13 = ((0x4000 + t11) + 0x8000);
    }
    FUN_0c0a6800(t13, ((int)stk + 0), 0.0f, 0.0f, -9.0f);
    nlAddVector3op((t1 + 0x30), (((int)stk + 0) + 0xC), ((int)stk + 0));
    (((struct o6E_ushort *)(t1))->v) = (t13 - 32768);
    return (FUN_0c053aa4(t1));
}

int FUN_0c0c7574(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = (int)((int)((((struct o98_int *)(a4))->v)) / (int)0x4);
    t1 = (((struct o98_int *)(a4))->v);
    t2 = ((~(((~t1) + 0x1) & 0x3)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x3);
    }
    t1 = t2;
    t3 = t2;
    for (;;) {
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)(*(int *)(((0xC31FCF8 + (((t0 << 2) + t0) << 2)) + 0x10)))) {
            break;
        }
        t2 = t3;
        t2 = (t2 - 1);
        t2 = (t2 << 2);
        t4 = (0xC31FCF8 + (((t0 << 2) + t0) << 2));
        t1 = t2;
        t5 = (*(int *)((((t3 << 2) + t4) + 0x0)));
        t2 = (t2 + t4);
        *(unsigned int *)((t4 + t1)) = t5;
        t1 = 0x98;
        t5 = (*(int *)((t2 + 0x0)));
        t4 = (*(int *)((a4 + t1)));
        t1 = 0x4;
        t1 = ((int)((int)t4 / (int)t1));
        t4 = 0x98;
        t1 = (t1 << 2);
        t1 = (t1 + t3);
        t4 = (t4 + t5);
        t1 = (t1 - 1);
        *(unsigned int *)((t4 + 0x0)) = t1;
    }
    t2 = *(int *)(((0xC31FCF8 + (((t0 << 2) + t0) << 2)) + 0x10));
    *(unsigned int *)(((0xC31FCF8 + (((t0 << 2) + t0) << 2)) + 0x10)) = (t2 - 1);
    *(unsigned int *)(((((t2 - 1) << 2) + (0xC31FCF8 + (((t0 << 2) + t0) << 2))) + 0x0)) = 0x0;
    return t1;
}

int FUN_0c096ea0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c0e19aa(0xC0965C0, 0x1984, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x30)) = a4;
    (((struct o40_uint *)(t0))->v) = ((int)0x2 << (int)((((struct o2E8_int *)(a4))->v)));
    FUN_0c096d6c();
    t1 = 0x0;
    for (;;) {
        *(unsigned int *)((((t0 + 0x44) + ((((t1 << 1) + t1) << 2) << 2)) + 0x0)) = (((((int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u))) >> 1) - 2) << 1);
        t2 = ((((t1 << 1) + t1) << 2) << 2);
        t3 = t1;
        t1 = (t1 + 0x1);
        *(unsigned int *)(((t2 + (t0 + 0x44)) + 0x0)) = (t3 << 1);
        if ((int)t1 >= (int)0xC) {
            break;
        }
    }
    t1 = 0x0;
    for (;;) {
        t2 = (int)((int)t1 / (int)0x4);
        t3 = ((t1 * 0x1C) + (0x284 + t0));
        t1 = (t1 + 0x1);
        *(unsigned int *)((t3 + 0x18)) = t2;
        if ((int)t1 >= (int)0x38) {
            break;
        }
    }
    return t2;
}

int FUN_0c0223fc(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x8)));
    if (((((struct o2C4_int *)(a4))->v)) != ((((struct o2BC_int *)(a4))->v))) {
        (((struct o2D4_uint *)(a4))->v) = 0x4;
        (((struct o2CC_uint *)(a4))->v) = 0x1;
    }
    (((struct o20C_uint *)(a4))->v) = 0x4;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t0 = (((struct o4F4_int *)(a4))->v);
    t1 = (((struct o4F8_int *)(a4))->v);
    t2 = *(int *)(((0xC1F79BC + (((t0 << 1) + t0) << 2)) + 0x0));
    t0 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
    (((struct o3B0_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x4))))) + (*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x0))));
    (((struct o500_uint *)(a4))->v) = 0x4;
    return 0x500;
}

int FUN_0c02248a(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x6)));
    if (((((struct o2C4_int *)(a4))->v)) != ((((struct o2BC_int *)(a4))->v))) {
        (((struct o2D4_uint *)(a4))->v) = 0x4;
        (((struct o2CC_uint *)(a4))->v) = 0x1;
    }
    (((struct o20C_uint *)(a4))->v) = 0x4;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t0 = (((struct o4F4_int *)(a4))->v);
    t1 = (((struct o4F8_int *)(a4))->v);
    t2 = *(int *)(((0xC1F79BC + (((t0 << 1) + t0) << 2)) + 0x0));
    t0 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
    (((struct o3B0_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x4))))) + (*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x0))));
    (((struct o500_uint *)(a4))->v) = 0x3;
    return 0x500;
}

int FUN_0c0222c0(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x2)));
    if (((((struct o2C4_int *)(a4))->v)) != ((((struct o2BC_int *)(a4))->v))) {
        (((struct o2D4_uint *)(a4))->v) = 0x4;
        (((struct o2CC_uint *)(a4))->v) = 0x1;
    }
    (((struct o20C_uint *)(a4))->v) = 0x4;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t0 = (((struct o4F4_int *)(a4))->v);
    t1 = (((struct o4F8_int *)(a4))->v);
    t2 = *(int *)(((0xC1F79BC + (((t0 << 1) + t0) << 2)) + 0x0));
    t0 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
    (((struct o3B0_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x4))))) + (*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x0))));
    (((struct o500_uint *)(a4))->v) = 0x2;
    return 0x500;
}

int FUN_0c02234c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x4)));
    if (((((struct o2C4_int *)(a4))->v)) != ((((struct o2BC_int *)(a4))->v))) {
        (((struct o2D4_uint *)(a4))->v) = 0x4;
        (((struct o2CC_uint *)(a4))->v) = 0x1;
    }
    (((struct o20C_uint *)(a4))->v) = 0x4;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t0 = (((struct o4F4_int *)(a4))->v);
    t1 = (((struct o4F8_int *)(a4))->v);
    t2 = *(int *)(((0xC1F79BC + (((t0 << 1) + t0) << 2)) + 0x0));
    t0 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
    (((struct o3B0_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x4))))) + (*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x0))));
    (((struct o500_uint *)(a4))->v) = 0x2;
    return 0x500;
}

int FUN_0c02253c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0xA)));
    if (((((struct o2C4_int *)(a4))->v)) != ((((struct o2BC_int *)(a4))->v))) {
        (((struct o2D4_uint *)(a4))->v) = 0x4;
        (((struct o2CC_uint *)(a4))->v) = 0x1;
    }
    (((struct o20C_uint *)(a4))->v) = 0x4;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t0 = (((struct o4F4_int *)(a4))->v);
    t1 = (((struct o4F8_int *)(a4))->v);
    t2 = *(int *)(((0xC1F79BC + (((t0 << 1) + t0) << 2)) + 0x0));
    t0 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
    (((struct o3B0_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x4))))) + (*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x0))));
    (((struct o500_uint *)(a4))->v) = 0x5;
    return 0x500;
}

int FUN_0c0262fc(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o2C4_uint *)(a4))->v) = 0x376;
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o20C_uint *)(a4))->v) = 0x1;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t0 = (((struct o4F4_int *)(a4))->v);
    t1 = (((struct o4F8_int *)(a4))->v);
    t2 = *(int *)(((0xC1F79BC + (((t0 << 1) + t0) << 2)) + 0x0));
    t0 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
    (((struct o3B0_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x4))))) + (*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x0))));
    (((struct o4C8_uint *)(a4))->v) = 0x0;
    (((struct o4C4_uint *)(a4))->v) = 0x0;
    (((struct o500_uint *)(a4))->v) = 0x1;
    (((struct o4E0_uint *)(a4))->v) = 0x0;
    (((struct o4E4_uint *)(a4))->v) = 0x0;
    (((struct o4E8_uint *)(a4))->v) = 0x0;
    (((struct o4EC_uint *)(a4))->v) = 0x0;
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return 0x4F8;
}

int FUN_0c028dca(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x2)));
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o4C8_uint *)(a4))->v) = 0x1;
    (((struct o20C_uint *)(a4))->v) = 0x4;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t0 = (((struct o4F4_int *)(a4))->v);
    t1 = (((struct o4F8_int *)(a4))->v);
    t2 = *(int *)(((0xC1F79BC + (((t0 << 1) + t0) << 2)) + 0x0));
    t0 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
    (((struct o3B0_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x4))))) + (*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x0))));
    (((struct o500_uint *)(a4))->v) = 0x2;
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return FUN_0c022838(a4);
}

int FUN_0c045ff2(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0xC)));
    if (((((struct o2C4_int *)(a4))->v)) != ((((struct o2BC_int *)(a4))->v))) {
        (((struct o2D4_uint *)(a4))->v) = 0x4;
        (((struct o2CC_uint *)(a4))->v) = 0x1;
    }
    (((struct o20C_uint *)(a4))->v) = 0x4;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t0 = (((struct o4F4_int *)(a4))->v);
    t1 = (((struct o4F8_int *)(a4))->v);
    t2 = *(int *)(((0xC1F79BC + (((t0 << 1) + t0) << 2)) + 0x0));
    t0 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
    (((struct o3B0_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x4))))) + (*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x0))));
    (((struct o500_uint *)(a4))->v) = 0x6;
    return 0x500;
}

int FUN_0c04607e(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x14)));
    if (((((struct o2C4_int *)(a4))->v)) != ((((struct o2BC_int *)(a4))->v))) {
        (((struct o2D4_uint *)(a4))->v) = 0x4;
        (((struct o2CC_uint *)(a4))->v) = 0x1;
    }
    (((struct o20C_uint *)(a4))->v) = 0x4;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t0 = (((struct o4F4_int *)(a4))->v);
    t1 = (((struct o4F8_int *)(a4))->v);
    t2 = *(int *)(((0xC1F79BC + (((t0 << 1) + t0) << 2)) + 0x0));
    t0 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
    (((struct o3B0_uint *)(a4))->v) = (((int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x4))))) + (*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x0))));
    (((struct o500_uint *)(a4))->v) = 0xA;
    return 0x500;
}

int FUN_0c0c74e8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = (int)((int)((((struct o98_int *)(a4))->v)) / (int)0x4);
    t1 = t0;
    t2 = (*(int *)(((0xC31FCF8 + (((t0 << 2) + t0) << 2)) + 0x10)));
    for (;;) {
        t3 = (((struct o98_int *)(a4))->v);
        t2 = (t2 - 1);
        t4 = ((~(((~t3) + 0x1) & 0x3)) + 0x1);
        if ((int)t3 >= 0) {
            t4 = (t3 & 0x3);
        }
        if ((int)t2 < (int)t4) {
            break;
        }
        t3 = t2;
        t3 = (t3 << 2);
        t4 = (0xC31FCF8 + (((t0 << 2) + t0) << 2));
        t1 = (*(int *)((((0xC31FCF8 + (((t0 << 2) + t0) << 2)) + t3) + 0x0)));
        t5 = ((0xC31FCF8 + (((t0 << 2) + t0) << 2)) + t3);
        t3 = (t3 + t4);
        t4 = 0xC0E5DC0;
        *(unsigned int *)((t5 + 0x4)) = t1;
        t1 = (*(int *)((t3 + 0x4)));
        t3 = ((((struct o98_int *)(a4))->v));
        t4 = (int)((int)t3 / (int)0x4);
        t3 = 0x98;
        t3 = (t3 + t1);
        *(unsigned int *)((t3 + 0x0)) = (((t4 << 2) + t2) + 0x1);
    }
    t1 = (((struct o98_int *)(a4))->v);
    t2 = ((~(((~t1) + 0x1) & 0x3)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x3);
    }
    *(unsigned int *)(((0xC31FCF8 + (((t0 << 2) + t0) << 2)) + (t2 << 2))) = a4;
    *(unsigned int *)(((0xC31FCF8 + (((t0 << 2) + t0) << 2)) + 0x10)) = ((*(int *)(((0xC31FCF8 + (((t0 << 2) + t0) << 2)) + 0x10))) + 0x1);
    return (t2 << 2);
}

int FUN_0c02e3be(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x2)));
    if (((((struct o2C4_int *)(a4))->v)) != ((((struct o2BC_int *)(a4))->v))) {
        (((struct o2D4_uint *)(a4))->v) = 0x4;
        (((struct o2CC_uint *)(a4))->v) = 0x1;
    }
    (((struct o20C_uint *)(a4))->v) = 0x4;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    t0 = (((struct o4F4_int *)(a4))->v);
    t1 = (((struct o4F8_int *)(a4))->v);
    t2 = *(int *)(((0xC1F79BC + (((t0 << 1) + t0) << 2)) + 0x0));
    t0 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
    t1 = (int)((int)(FUN_0c0da2e0()) % (int)(*(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x4))));
    t3 = *(int *)(((t2 + (((t0 >> 1) << 2) << 1)) + 0x0));
    (((struct o3B0_uint *)(a4))->v) = (t1 + t3);
    return (t1 + t3);
}

int FUN_0c09746e(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0e19aa(0xC096F50, 0x9EC, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x30)) = a4;
    (((struct o40_uint *)(t0))->v) = ((int)0x2 << (int)((((struct o2E8_int *)(a4))->v)));
    t1 = (0x9D4 + t0);
    t2 = 0x9;
    for (;;) {
        *(unsigned int *)((t1 + 0x0)) = t2;
        t1 = (t1 + 0x4);
        t2 = (t2 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)((0x9D4 + t0) + 0x18)) {
            break;
        }
    }
    t1 = (t0 + 0x44);
    t2 = 0x0;
    for (;;) {
        *(unsigned int *)((t1 + 0x10)) = ((int)((int)t2 / (int)0x4));
        t1 = (t1 + 0x1C);
        t2 = (t2 + 0x14);
        if ((unsigned int)t1 >= (unsigned int)((t0 + 0x44) + 0x70)) {
            break;
        }
    }
    return FUN_0c096d6c();
}

int FUN_0c0a14be(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0e19aa(0xC0A105C, 0x950, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x30)) = a4;
    (((struct o40_uint *)(t0))->v) = ((int)0x2 << (int)((((struct o2E8_int *)(a4))->v)));
    (((struct o44_uint *)(t0))->v) = 0x5;
    t1 = 0x0;
    t2 = (t0 + 0x50);
    t0 = 0x0;
    for (;;) {
        t0 = (t0 + 0x1);
        *(unsigned int *)((t2 + 0x0)) = ((int)((int)t1 / (int)0x8));
        t1 = (t1 + 0x14);
        t2 = (t2 + 0x50);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return FUN_0c096d6c();
}

int FUN_0c010f58(int a4)
{
    int stk[3];
    register int t10;
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC0F4130); }
    t10 = 0x0;
    if ((unsigned int)(0x0 + ((int)stk + 0)) < (unsigned int)(((int)stk + 0) + 0xC)) {
        t0 = a4;
        t1 = 0x0;
        t2 = (0x0 + ((int)stk + 0));
        for (;;) {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t1 = (t1 << 2);
            t1 = (t1 << 2);
            t1 = (t1 | ((int)((int)t0 / (int)t3)));
            t0 = ((int)((int)t0 % (int)t3));
            if ((unsigned int)t2 >= (unsigned int)(((int)stk + 0) + 0xC)) {
                break;
            }
        }
        t10 = t1;
    }
    return t10;
}
