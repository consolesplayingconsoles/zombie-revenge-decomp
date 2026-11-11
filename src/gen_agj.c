/* Straight-line functions with calls and guards (batch gen_agj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_short { char p[0x54]; short v; };
struct o56_short { char p[0x56]; short v; };
struct o58_short { char p[0x58]; short v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o84_int { char p[0x84]; int v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c01a320(int, int);
int FUN_0c01a5b8(int);
int FUN_0c01a632(int);
int FUN_0c0498ce(void);
int FUN_0c054ccc(int);
int FUN_0c054d8e(void);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c084104(void);
int FUN_0c084218(int);
int FUN_0c0844dc(int, int, float);
int FUN_0c08455e(float);
int FUN_0c084800(float, float, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c08498e(float, float, float);
int FUN_0c0849da(void);
int FUN_0c095fa0(int, int);
int FUN_0c096094(int, int);
int FUN_0c0975d0(int, int, int, int);
int FUN_0c098196(int, int, int);
int FUN_0c0981d0(int, int);
int FUN_0c098e1c(int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a9e94(int, int);
int FUN_0c0a9edc(int, int);
int FUN_0c0a9f0e(int);
int FUN_0c0b72d6(int);
int FUN_0c0ba130(int);
int FUN_0c0bfa90(void);
int FUN_0c0c4290(int);
int FUN_0c0c45d0(void);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int, int, int, int);
extern int FUN_0c0d8c40();
int FUN_0c0da2e0(void);
int FUN_0c0db0a0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc0b0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dd2f0(int, float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
extern float _builtin_sqrtf(float);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c0982fc(int a4, int a5, int a6, int a7);
int FUN_0c0a9f70(int a4);
int FUN_0c098f08(int a4, int a5, int a6, int a7);
int FUN_0c019f02(int a4, int a5, int a6, int a7);
int FUN_0c06546c(int a4, float f4);

int FUN_0c0982fc(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register int t6;
    register int t7;
    register int t10;
    register int t142;
    register int t11;
    register int t16;
    register int t55;
    register int t67;
    register float u100;
    register float u101;
    register float u102;
    register int t111;
    register int t112;
    register int t114;
    register int t119;
    register int t121;
    register int t123;
    register int t160;
    register int t161;
    register int t162;
    register int t163;
    register int t164;
    register int t165;
    register float u167;
    register float u168;
    register float u169;
    register float u176;
    register float u178;
    register float u179;
    register float u181;
    register float u183;
    register float u184;
    register float u185;
    register float u188;
    register float u189;
    register float u200;
    register int t205;
    register float u207;
    register int t224;
    register int t227;
    int t2;
    register int t3;
    register float u156;
    register float u157;
    register float u159;
    register float u144;
    register float u145;
    register float u147;
    register int t130;
    register int t131;
    register float u132;
    register float u133;
    register float u135;
    register float u113;
    register float u166;
    register int t213;
    register int t215;
    register float u216;
    register float u217;
    register int t238;

    t0 = *(int *)((a4 + 0x30));
    FUN_0c0685a4(a4, a5, a6, a7);
    if ((t0 != 0) && (t2 = (((struct oBC_int *)(t0))->v), t3 = *(int *)(((t2 << 2) + 0xC247030)), t3 == 0)) {
        FUN_0c0e19f2();
    }
    t6 = *(int *)((a4 + 0x3C));
    t7 = ((~(((~t6) + 0x1) & 0x1)) + 0x1);
    if ((int)t6 >= 0) {
        t7 = (t6 & 0x1);
    }
    if (t7 == 0) {
        t10 = (((struct o40_int *)(a4))->v);
        t142 = t10;
        if (t10 == 0) {
            t11 = *(int *)((a4 + 0x3C));
            t16 = (int)((int)(((int)((unsigned int)((int)((unsigned int)t11 + (unsigned int)0x0)) + ((((int)0x0 > (int)t11)) ? 1u : 0u))) >> 1) % (int)0x5);
            if (t11 == 0) {
                FUN_0c098196((a4 + 0x5C), (((int)stk + 16) + 0xC), ((((struct o44_int *)(a4))->v)));
                nlPushMatrix(0x0);
                if ((*(int *)((a4 + 0x38))) != 0) {
                    nlUnitMatrix();
                    FUN_0c0dcc70(((((struct o48_float *)(a4))->v)), ((((struct o4C_float *)(a4))->v)), ((((struct o50_float *)(a4))->v)));
                    if (((((struct o58_short *)(a4))->v)) != 0) {
                        nlRotateAZ(((((struct o56_short *)(a4))->v)));
                    }
                    if (((((struct o56_short *)(a4))->v)) != 0) {
                        nlRotateAY(((((struct o56_short *)(a4))->v)));
                    }
                    if (((((struct o54_short *)(a4))->v)) != 0) {
                        nlRotateAX(((((struct o54_short *)(a4))->v)));
                    }
                } else {
                    FUN_0c0dbda0((((((*(int *)((a4 + 0x34))) << 2) << 2) << 2) + ((((struct o3E4_int *)(t0))->v))));
                }
                FUN_0c0db470((((int)stk + 16) + 0xC), ((((((t16 << 1) + t16) << 2) << 2) + (0x218 + a4)) + 0x18));
                nlPopMatrix(0x1);
            } else {
                t55 = (int)((int)(t16 + 0x4) % (int)0x5);
                (((struct o18_float *)((((((t16 << 1) + t16) << 2) << 2) + (0x218 + a4))))->v) = ((((struct o24_float *)(((0x218 + a4) + ((((t55 << 1) + t55) << 2) << 2))))->v));
                (((struct o1C_float *)((((((t16 << 1) + t16) << 2) << 2) + (0x218 + a4))))->v) = ((((struct o28_float *)(((0x218 + a4) + ((((t55 << 1) + t55) << 2) << 2))))->v));
                (((struct o20_float *)((((((t16 << 1) + t16) << 2) << 2) + (0x218 + a4))))->v) = ((((struct o2C_float *)((((((t55 << 1) + t55) << 2) << 2) + (0x218 + a4))))->v));
            }
            t67 = FUN_0c0981d0((a4 + 0x5C), (((int)stk + 16) + 0xC));
            if (t67 == 0) {
                *(unsigned int *)(((((((t16 << 1) + t16) << 2) << 2) + (0x218 + a4)) + 0x0)) = 0x0;
                (((struct o40_uint *)(a4))->v) = 0x1;
                *(unsigned int *)((a4 + 0x3C)) = 0x3C;
                t130 = 0x1;
                t131 = 0x3C;
            } else {
                nlPushMatrix(0x0);
                if ((*(int *)((a4 + 0x38))) != 0) {
                    nlUnitMatrix();
                    FUN_0c0dcc70(((((struct o48_float *)(a4))->v)), ((((struct o4C_float *)(a4))->v)), ((((struct o50_float *)(a4))->v)));
                    if (((((struct o58_short *)(a4))->v)) != 0) {
                        nlRotateAZ(((((struct o56_short *)(a4))->v)));
                    }
                    if (((((struct o56_short *)(a4))->v)) != 0) {
                        nlRotateAY(((((struct o56_short *)(a4))->v)));
                    }
                    if (((((struct o54_short *)(a4))->v)) != 0) {
                        nlRotateAX(((((struct o54_short *)(a4))->v)));
                    }
                    FUN_0c0db470((((int)stk + 16) + 0xC), ((((((t16 << 1) + t16) << 2) << 2) + (0x218 + a4)) + 0x24));
                } else {
                    FUN_0c0dbda0((((((*(int *)((a4 + 0x34))) << 2) << 2) << 2) + ((((struct o3E4_int *)(t0))->v))));
                    FUN_0c0db470((((int)stk + 16) + 0xC), ((((((t16 << 1) + t16) << 2) << 2) + (0x218 + a4)) + 0x24));
                    FUN_0c0db0a0(0x14, 0x3);
                    u100 = *(float *)(((int)stk + 36));
                    *(float *)(((int)stk + 12)) = u100;
                    u101 = *(float *)(((int)stk + 32));
                    *(float *)(((int)stk + 8)) = u101;
                    u102 = *(float *)(((int)stk + 28));
                    *(float *)(((int)stk + 4)) = u102;
                    *(int *)((int)stk + 0) = 0xC10BF78;
                    nlPrintf(0xC10BF78, u102, u101, u100);
                }
                nlPopMatrix(0x1);
                *(unsigned int *)(((((((t16 << 1) + t16) << 2) << 2) + (0x218 + a4)) + 0x0)) = 0x14;
                (((struct o4_float *)((((((t16 << 1) + t16) << 2) << 2) + (0x218 + a4))))->v) = (((float)(unsigned char)(FUN_0c0da2e0()) / 512.0f) + 0.5f);
                *(unsigned int *)(((((((t16 << 1) + t16) << 2) << 2) + (0x218 + a4)) + 0x14)) = (FUN_0c0da2e0());
                *(unsigned int *)(((((((t16 << 1) + t16) << 2) << 2) + (0x218 + a4)) + 0x8)) = ((*(int *)(((((((t16 << 1) + t16) << 2) << 2) + (0x218 + a4)) + 0x8))) + 0x1);
                *(unsigned int *)(((int)stk + 24)) = 0x0;
                t111 = 0xC09866C;
                t112 = ((((t16 << 1) + t16) * 0x1C) + (a4 + 0x74));
                for (;;) {
                    t114 = *(int *)(((int)stk + 24));
                    if ((int)t114 >= (int)0x3) {
                        break;
                    }
                    t111 = 0x24;
                    *(unsigned int *)((t112 + 0x18)) = 0x28;
                    u113 = (*(float *)(((((((t16 << 1) + t16) << 2) << 2) + (0x218 + a4)) + t111)));
                    *(float *)((t112 + 0x0)) = u113;
                    t111 = 0x28;
                    u113 = (*(float *)(((((((t16 << 1) + t16) << 2) << 2) + (0x218 + a4)) + t111)));
                    t111 = 0x4;
                    *(float *)((t112 + t111)) = u113;
                    t111 = 0x2C;
                    u113 = (*(float *)(((((((t16 << 1) + t16) << 2) << 2) + (0x218 + a4)) + t111)));
                    t111 = 0x8;
                    *(float *)((t112 + t111)) = u113;
                    t111 = (FUN_0c0da2e0());
                    t111 = (t111 & 0x7FFF);
                    t119 = t111;
                    t111 = 0xC;
                    u113 = (float)t119;
                    u113 = (u113 * 0.5f);
                    u113 = (u113 / 32767.0f);
                    u113 = (u113 + -0.25f);
                    *(float *)((t112 + t111)) = u113;
                    t111 = (FUN_0c0da2e0());
                    t111 = (t111 & 0x7FFF);
                    t121 = t111;
                    t111 = 0x10;
                    u113 = (float)t121;
                    u113 = (u113 * 0.5f);
                    u113 = (u113 / 32767.0f);
                    u113 = (u113 + -0.25f);
                    *(float *)((t112 + t111)) = u113;
                    t111 = (FUN_0c0da2e0());
                    t111 = (t111 & 0x7FFF);
                    t123 = t111;
                    t111 = 0x14;
                    u113 = (float)t123;
                    u113 = (u113 * 0.5f);
                    u113 = (u113 / 32767.0f);
                    u113 = (u113 + -0.25f);
                    *(float *)((t112 + t111)) = u113;
                    t112 = (t112 + 0x1C);
                    *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
                }
                t161 = 0x0;
                t130 = t114;
                t131 = 0x3;
                u132 = -0.25f;
                u133 = 32767.0f;
                u135 = u113;
            }
            t142 = t130;
            t163 = t131;
            u144 = u132;
            u145 = u133;
            u147 = u135;
        }
        t162 = t142;
        u156 = u144;
        u157 = u145;
        u159 = u147;
    }
    t160 = 0xC098674;
    t164 = 0x0;
    t165 = (0x218 + a4);
    u167 = u159;
    u168 = u156;
    u169 = u157;
    for (;;) {
        if ((int)t164 >= (int)0x5) {
            break;
        }
        t162 = (*(int *)((t165 + 0x0)));
        if (t162 != 0) {
            t160 = 0x4;
            u166 = 0.0f;
            u167 = (*(float *)((t165 + t160)));
            if (u167 != u166) {
                t160 = 0x24;
                u167 = (*(float *)((t165 + t160)));
                t160 = 0x18;
                u176 = *(float *)((t165 + t160));
                t160 = 0x28;
                t163 = 0xC0A7714;
                u178 = (u176 - u167);
                u167 = (*(float *)((t165 + t160)));
                t160 = 0x1C;
                u179 = *(float *)((t165 + t160));
                t160 = 0x2C;
                u181 = (u179 - u167);
                u167 = (*(float *)((t165 + t160)));
                t160 = 0x20;
                u183 = ((*(float *)((t165 + t160))) - u167);
                u167 = u181;
                u167 = (u167 * u181);
                u184 = u167;
                u184 = u184 + u178 * u178;
                u167 = u184;
                u185 = u167;
                u185 = u185 + u183 * u183;
                u167 = u185;
                u167 = _builtin_sqrtf(u167);
                u168 = u167;
                t160 = (FUN_0c0a7714(((int)stk + 16), (((int)stk + 16) + 0x4), u178, u181, u183));
                t162 = 0xC0DC510;
                t160 = (nlPushMatrix(0x0));
                t160 = 0x20;
                t163 = 0xC0DCC70;
                u188 = *(float *)((t165 + t160));
                t160 = 0x1C;
                u189 = *(float *)((t165 + t160));
                t160 = 0x18;
                t160 = (FUN_0c0dcc70((*(float *)((t165 + t160))), u189, u188));
                t160 = (nlRotateAY((*(int *)(((int)stk + 20)))));
                t163 = 0xC0DC6E0;
                t160 = (nlRotateAX((*(int *)(((int)stk + 16)))));
                t162 = 0xC0DC950;
                t160 = (nlRotateAZ((*(int *)((t165 + 0x14)))));
                t160 = 0xC0987E4;
                u169 = u168;
                u167 = (*(float *)((t160 + 0x0)));
                t163 = 0xC0DCB80;
                u169 = (u169 * u167);
                t160 = (nlScale(4.0f, 4.0f, u169));
                u200 = 4.0f;
                if (u169 > 4.0f) {
                    u200 = u169;
                }
                t162 = 0xC0DE000;
                t160 = (FUN_0c0de000(u200));
                t160 = (nlRotateAY(0x3FFF));
                t163 = (*(int *)((t165 + 0x0)));
                t162 = 0xC200AEC;
                t205 = t163;
                t163 = 0xC200AF0;
                u167 = (float)t205;
                u207 = *(float *)((t163 + 0x0));
                t161 = 0xC200AE8;
                t163 = 0xC0848BC;
                u169 = u167;
                u169 = (u169 / 20.0f);
                t160 = (FUN_0c0848bc(((*(float *)((t161 + 0x0))) * u169), ((*(float *)((t162 + 0x0))) * u169), (u207 * u169)));
                t162 = 0xC0C465C;
                t160 = (FUN_0c0c465c(0x2B0));
                t163 = 0xC0DC4C0;
                t160 = (nlPopMatrix(0x1));
            } else {
                t213 = t161;
                t215 = t163;
                u216 = u166;
                u217 = u167;
            }
            u166 = u216;
            u167 = u217;
            t161 = t213;
            t162 = (*(int *)((t165 + 0x0)));
            t163 = t215;
            t162 = (t162 - 1);
            *(unsigned int *)((t165 + 0x0)) = t162;
        }
        t165 = (t165 + 0x30);
        t164 = (t164 + 0x1);
    }
    FUN_0c096094((a4 + 0x74), 0xF);
    FUN_0c0849da();
    if (((((struct o40_int *)(a4))->v)) != 0) {
        t224 = *(int *)((a4 + 0x3C));
        *(unsigned int *)((a4 + 0x3C)) = (t224 - 1);
        t238 = 0x40;
        if ((int)(t224 - 1) <= 0) {
            if ((*(int *)((a4 + 0x38))) != 0) {
                t227 = *(int *)((a4 + 0x38));
                *(unsigned int *)((t227 + 0x38)) = ((*(int *)((t227 + 0x38))) - 1);
            }
            t238 = (FUN_0c0e19f2());
        }
    } else {
        *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + 0x1);
        t238 = 0x40;
    }
    return t238;
}

int FUN_0c0a9f70(int a4)
{
    int stk[15];
    register float u72;
    register float u83;
    register float u84;
    register float u86;
    register float u108;
    register float u109;
    register float u113;
    register float u133;
    register float u134;
    register float u138;
    register float u164;
    register float u179;
    register float u185;
    register float u186;
    register int t190;
    register int t191;
    register float u192;
    register float u200;
    register float u231;
    register float u237;
    register int t257;
    register float u90;
    register float u117;
    register float u142;
    register float u238;
    int R1000;
    float R1004;
    float R1008;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(float *)((int)stk + 4);
    R1008 = *(float *)((int)stk + 8);

    nlPushMatrix(0x0);
    (((struct o0_ushort *)0xC2021AC)->v) = 0x2E38;
    if ((unsigned int)a4 < (unsigned int)0x3C0) {
        if ((int)a4 >= (int)0x5A) {
            (((struct o0_ushort *)0xC2021AC)->v) = 0xE38;
        } else {
            if ((int)a4 >= (int)0x3C) {
                (((struct o0_ushort *)0xC2021AC)->v) = (int)(7281.0f - ((((float)(a4 - 60) * 3640.0f) / 30.0f)));
            }
        }
    }
    if (((int)a4 > (int)0x3C) && ((unsigned int)a4 < (unsigned int)0x3C0)) {
        if (((int)((int)a4 % (int)0x3C)) == 0) {
            FUN_0c0a9f0e(0x3);
            FUN_0c0a9f0e(0x4);
            FUN_0c0a9f0e(0x5);
        }
    }
    if (a4 == 0x3C0) {
        FUN_0c0a9f0e(0x0);
        if (a4 == 0x3C0) {
            FUN_0c0a9f0e(0x1);
            if (a4 == 0x3C0) {
                FUN_0c0a9f0e(0x2);
            }
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0c465c(0x122E);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    R1000 = 0xC10D504;
    FUN_0c0dcc70(((((struct o0_float *)0xC10D50C)->v)), ((((struct o4_float *)0xC10D50C)->v)), ((((struct o8_float *)0xC10D50C)->v)));
    nlRotateAY((unsigned short)(*(short *)(((*(int *)(((R1000) + 0x14))) + 0x8))));
    u72 = (((struct o4_float *)0xC2021AC)->v);
    nlScale(u72, u72, u72);
    nlPushMatrix(0x0);
    FUN_0c0de000(((((struct o4_float *)0xC2021AC)->v)));
    FUN_0c0c465c(0x1231);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcc70(0.0f, 0.0199999996f, 0.0381999984f);
    R1004 = (1.0f - (((float)a4 + -960.0f) / 30.0f));
    R1008 = (((float)a4 + -60.0f) / 30.0f);
    if ((int)a4 > (int)0x3C) {
        if ((unsigned int)a4 > (unsigned int)0x3C0) {
            u83 = R1004;
            u84 = u83;
            if (0.0f > u83) {
                u84 = 0.0f;
            }
            u90 = u84;
        } else {
            u86 = 1.0f;
            if ((int)a4 < (int)0x5A) {
                u86 = (((float)a4 + -60.0f) / 30.0f);
            }
            u90 = u86;
        }
        nlRotateAX((int)(u90 * 20338.3301f));
    }
    FUN_0c0de000(((((struct o4_float *)0xC2021AC)->v)));
    FUN_0c0c465c(0x1236);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    if ((int)a4 > (int)0x3C) {
        if ((unsigned int)a4 > (unsigned int)0x3C0) {
            u108 = R1004;
            u109 = u108;
            if (0.0f > u108) {
                u109 = 0.0f;
            }
            u117 = u109;
        } else {
            u113 = 1.0f;
            if ((int)a4 < (int)0x5A) {
                u113 = (R1008);
            }
            u117 = u113;
        }
        FUN_0c0dcc70((u117 * 0.0199999996f), 0.0f, (-(u117 * 0.389999986f)));
        nlRotateAY((int)(-(u117 * 3276.7998f)));
    }
    FUN_0c0de000(((((struct o4_float *)0xC2021AC)->v)));
    FUN_0c0c465c(0x1233);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    if ((int)a4 > (int)0x3C) {
        if ((unsigned int)a4 > (unsigned int)0x3C0) {
            u133 = R1004;
            u134 = u133;
            if (0.0f > u133) {
                u134 = 0.0f;
            }
            u142 = u134;
        } else {
            u138 = 1.0f;
            if ((int)a4 < (int)0x5A) {
                u138 = (R1008);
            }
            u142 = u138;
        }
        FUN_0c0dcc70((u142 * 0.0199999996f), 0.0f, (-(u142 * 0.389999986f)));
        nlRotateAY((int)(u142 * 3276.7998f));
    }
    FUN_0c0de000(((((struct o4_float *)0xC2021AC)->v)));
    FUN_0c0c465c(0x1235);
    nlPopMatrix(0x1);
    if ((unsigned int)a4 >= (unsigned int)0x3C0) {
    } else {
        if (((*(int *)0xC23A258) & 2) != 0) {
            FUN_0c08498e(0.799999952f, 0.799999952f, 0.799999952f);
        }
        if ((int)a4 > (int)0x78) {
            nlPushMatrix(0x0);
            u164 = 1.0f;
            if ((int)a4 < (int)0x96) {
                u164 = (((float)a4 + -120.0f) / 30.0f);
            }
            FUN_0c0dcc70(0.0f, -0.0399999991f, 0.0f);
            FUN_0c0de000(((((struct o4_float *)0xC2021AC)->v)));
            FUN_0c0c475c(0x1230, u164);
            nlPopMatrix(0x1);
        }
        if ((int)a4 <= (int)0xA5) {
        } else {
            nlPushMatrix(0x0);
            u179 = 1.0f;
            if ((int)a4 < (int)0xC3) {
                u179 = (((float)a4 + -165.0f) / 30.0f);
            }
            FUN_0c0dcc70(0.0f, 0.0f, -0.00999999978f);
            nlScale(1.0f, u179, 1.0f);
            u185 = (((struct o4_float *)0xC2021AC)->v);
            u186 = 1.0f;
            if (u179 > 1.0f) {
                u186 = u179;
            }
            FUN_0c0de000((u186 * u185));
            t190 = (FUN_0c0c465c(0x1232));
            t191 = 0x0;
            u192 = u179;
            for (;;) {
                if ((unsigned int)t191 >= (unsigned int)0x8) {
                    break;
                }
                u192 = 1.0f;
                if (t191 == 0) {
                    if ((int)a4 > (int)0xD2) {
                        t190 = 0x1E;
                        t190 = ((int)((int)(a4 - 210) / (int)t190));
                        if ((t190 & 0x1) != 0) {
                        } else {
                            u192 = 0.0f;
                        }
                    }
                } else {
                    if ((int)a4 > (int)0xF0) {
                        if ((int)a4 > (int)(0xF0 + ((t191 - 1) * 0x5A))) {
                            t190 = 0xC0AA434;
                            u200 = *(float *)((t190 + 0x0));
                            if ((float)a4 > (((float)(0xF0 + ((t191 - 1) * 0x5A))) + u200)) {
                                u192 = 0.0f;
                            } else {
                                u192 = (u200 - ((float)(a4 - (0xF0 + ((t191 - 1) * 0x5A)))));
                                u192 = (u192 / u200);
                            }
                        }
                    }
                }
                t190 = (nlPushMatrix(0x0));
                t190 = 0x8;
                R1000 = (0xC10D2C0 + (((t191 << 1) + t191) << 2));
                u231 = *(float *)(((0xC10D2C0 + (((t191 << 1) + t191) << 2)) + t190));
                t190 = 0x4;
                t190 = (FUN_0c0dcc70((*(float *)(((0xC10D2C0 + (((t191 << 1) + t191) << 2)) + 0x0))), (*(float *)(((0xC10D2C0 + (((t191 << 1) + t191) << 2)) + t190))), u231));
                t190 = (nlRotateAX(0x4F73));
                t190 = (nlScale(u192, 1.0f, 1.0f));
                u237 = (((struct o4_float *)0xC2021AC)->v);
                if (u192 > 1.0f) {
                    u238 = u192;
                } else {
                    u238 = 1.0f;
                }
                t190 = (FUN_0c0de000((u238 * u237)));
                t190 = (FUN_0c0c465c(0x1234));
                t190 = (nlPopMatrix(0x1));
                t191 = (t191 + 0x1);
            }
            nlPopMatrix(0x1);
        }
    }
    nlPopMatrix(0x1);
    FUN_0c0849da();
    FUN_0c0a9e94(a4, 0xC10D808);
    FUN_0c0a9edc(a4, 0xC10D8F8);
    t257 = nlPopMatrix(0x1);
    if (a4 == 0x595) {
        *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    }
    return t257;
}

int FUN_0c098f08(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;
    register int t13;
    register int t18;
    register int t19;
    register float u24;
    register int t25;
    register int t27;
    register int t28;
    register float u29;
    register int t35;
    register int t37;
    register int t39;
    register int t45;
    register float u53;
    register float u57;
    register float u61;
    register int t65;
    register int t66;
    register int t71;
    register int t72;
    register int t78;
    register int t79;
    register int t84;
    register int t85;
    register int t91;
    register int t92;
    register int t97;
    register int t98;
    register int t103;
    register int t104;
    register int t110;
    register int t111;
    register int t116;
    register int t117;
    register int t138;
    register int t140;
    register int t166;
    register int t152;

    t0 = *(int *)((a4 + 0x30));
    FUN_0c0685a4(a4, a5, a6, a7);
    if ((*(int *)((((*(int *)((a4 + 0x34))) << 2) + 0xC247030))) == 0) {
        t166 = (FUN_0c0e19f2());
    } else {
        if ((((((struct o2EC_int *)(t0))->v)) & 15) != 0) {
            *(unsigned int *)((a4 + 0x38)) = 0x1;
        }
        if ((*(int *)((a4 + 0x38))) != 0) {
            t152 = (FUN_0c0e19f2());
        } else {
            if ((int)(*(int *)((a4 + 0x3C))) < (int)0xE) {
            } else {
                t13 = *(int *)((a4 + 0x3C));
                nlPushMatrix(0x0);
                FUN_0c0dbda0(((((struct o3E4_int *)(t0))->v)));
                t18 = (a4 + 0x48);
                t19 = 0x0;
                for (;;) {
                    if ((int)t19 >= (int)0x3) {
                        break;
                    }
                    FUN_0c098e1c((t13 - 14), t18, 0x0);
                    t18 = (t18 + 0xC);
                    t19 = (t19 + 0x1);
                }
                FUN_0c0db840((((int)stk + 0) + 0x4));
                (((struct o10_float *)(((int)stk + 0)))->v) = (*(float *)(((int)stk + 4)));
                (((struct o14_float *)(((int)stk + 0)))->v) = (*(float *)(((int)stk + 8)));
                u24 = *(float *)(((int)stk + 12));
                (((struct o18_float *)(((int)stk + 0)))->v) = u24;
                t25 = ((~(((~(t13 - 14)) + 0x1) & 0x1F)) + 0x1);
                if ((int)(t13 - 14) >= 0) {
                    t25 = ((t13 - 14) & 0x1F);
                }
                *(unsigned int *)(((int)stk + 0)) = 0x0;
                t27 = 0xC09900C;
                t28 = ((((t25 << 2) + t25) * 0x1C) + (0x660 + a4));
                u29 = u24;
                for (;;) {
                    if ((int)(*(int *)(((int)stk + 0))) >= (int)0x5) {
                        break;
                    }
                    t27 = 0x10;
                    *(unsigned int *)((t28 + 0x18)) = 0x28;
                    u29 = (*(float *)((((int)stk + 0) + t27)));
                    t27 = 0x14;
                    *(float *)((t28 + 0x0)) = u29;
                    u29 = (*(float *)((((int)stk + 0) + t27)));
                    t27 = 0x4;
                    *(float *)((t28 + t27)) = u29;
                    t27 = 0x18;
                    u29 = (*(float *)((((int)stk + 0) + t27)));
                    t27 = 0x8;
                    *(float *)((t28 + t27)) = u29;
                    t27 = (FUN_0c0da2e0());
                    t27 = (t27 & 0x7FFF);
                    t35 = t27;
                    t27 = 0xC;
                    u29 = (float)t35;
                    u29 = (u29 * 0.5f);
                    u29 = (u29 / 32767.0f);
                    u29 = (u29 + -0.25f);
                    *(float *)((t28 + t27)) = u29;
                    t27 = (FUN_0c0da2e0());
                    t27 = (t27 & 0x7FFF);
                    t37 = t27;
                    t27 = 0x10;
                    u29 = (float)t37;
                    u29 = (u29 * 0.5f);
                    u29 = (u29 / 32767.0f);
                    u29 = (u29 + -0.25f);
                    *(float *)((t28 + t27)) = u29;
                    t27 = (FUN_0c0da2e0());
                    t27 = (t27 & 0x7FFF);
                    t39 = t27;
                    t27 = 0x14;
                    u29 = (float)t39;
                    u29 = (u29 * 0.5f);
                    u29 = (u29 / 32767.0f);
                    u29 = (u29 + -0.25f);
                    *(float *)((t28 + t27)) = u29;
                    t28 = (t28 + 0x1C);
                    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
                }
                FUN_0c0db840((((int)stk + 0) + 0x4));
                (((struct o10_float *)(((int)stk + 0)))->v) = (*(float *)(((int)stk + 4)));
                (((struct o14_float *)(((int)stk + 0)))->v) = (*(float *)(((int)stk + 8)));
                (((struct o18_float *)(((int)stk + 0)))->v) = (*(float *)(((int)stk + 12)));
                t45 = (int)((int)(t13 - 14) % (int)0xA);
                *(unsigned int *)((((0x570 + a4) + ((((t45 << 1) + t45) << 2) << 1)) + 0x0)) = 0x14;
                *(unsigned int *)((((0x570 + a4) + ((((t45 << 1) + t45) << 2) << 1)) + 0x10)) = ((-((FUN_0c0da2e0()) & 0x4000)) + 0xE000);
                (((struct o14_float *)(((0x570 + a4) + ((((t45 << 1) + t45) << 2) << 1))))->v) = (((float)(unsigned char)(FUN_0c0da2e0()) / 255.0f) + 0.5f);
                u53 = (*(float *)(((int)stk + 16)));
                u53 = u53 + 4.0f * (((float)(unsigned char)(FUN_0c0da2e0()) / 255.0f));
                (((struct o4_float *)(((0x570 + a4) + ((((t45 << 1) + t45) << 2) << 1))))->v) = (u53 + -2.0f);
                u57 = (*(float *)(((int)stk + 20)));
                u57 = u57 + 4.0f * (((float)(unsigned char)(FUN_0c0da2e0()) / 255.0f));
                (((struct o8_float *)(((0x570 + a4) + ((((t45 << 1) + t45) << 2) << 1))))->v) = (u57 + -2.0f);
                u61 = (*(float *)(((int)stk + 24)));
                u61 = u61 + 4.0f * (((float)(unsigned char)(FUN_0c0da2e0()) / 255.0f));
                (((struct oC_float *)(((0x570 + a4) + ((((t45 << 1) + t45) << 2) << 1))))->v) = (u61 + -2.0f);
                FUN_0c0dbda0((((((struct o3E4_int *)(t0))->v)) + 0xC0));
                t65 = 0x0;
                t66 = (a4 + 0x6C);
                for (;;) {
                    if ((int)t65 >= (int)0x3) {
                        break;
                    }
                    FUN_0c098e1c((t13 - 14), t66, 0x1);
                    t66 = (t66 + 0xC);
                    t65 = (t65 + 0x1);
                }
                FUN_0c0dbda0((((((struct o3E4_int *)(t0))->v)) + 0x100));
                t71 = 0x0;
                t72 = ((a4 + 0x48) + 0x48);
                for (;;) {
                    if ((int)t71 >= (int)0x3) {
                        break;
                    }
                    FUN_0c098e1c((t13 - 14), t72, 0x2);
                    t72 = (t72 + 0xC);
                    t71 = (t71 + 0x1);
                }
                FUN_0c0975d0((t13 - 14), (0x1B0 + a4), 0x3, 0xA);
                FUN_0c0dbda0((((((struct o3E4_int *)(t0))->v)) + 0x180));
                t78 = 0x0;
                t79 = ((a4 + 0x48) + 0x6C);
                for (;;) {
                    if ((int)t78 >= (int)0x3) {
                        break;
                    }
                    FUN_0c098e1c((t13 - 14), t79, 0x3);
                    t79 = (t79 + 0xC);
                    t78 = (t78 + 0x1);
                }
                FUN_0c0dbda0((((((struct o3E4_int *)(t0))->v)) + 0x1C0));
                t84 = 0x0;
                t85 = ((a4 + 0x48) + 0x90);
                for (;;) {
                    if ((int)t84 >= (int)0x3) {
                        break;
                    }
                    FUN_0c098e1c((t13 - 14), t85, 0x4);
                    t85 = (t85 + 0xC);
                    t84 = (t84 + 0x1);
                }
                FUN_0c0975d0((t13 - 14), ((0x1B0 + a4) + 0xF0), 0x3, 0xA);
                FUN_0c0dbda0((((((struct o3E4_int *)(t0))->v)) + 0x240));
                t91 = ((a4 + 0x48) + 0x144);
                t92 = 0x0;
                for (;;) {
                    if ((int)t92 >= (int)0x3) {
                        break;
                    }
                    FUN_0c098e1c((t13 - 14), t91, 0x9);
                    t91 = (t91 + 0xC);
                    t92 = (t92 + 0x1);
                }
                FUN_0c0dbda0((((((struct o3E4_int *)(t0))->v)) + 0x280));
                t97 = 0x0;
                t98 = ((a4 + 0x48) + 0xB4);
                for (;;) {
                    if ((int)t97 >= (int)0x3) {
                        break;
                    }
                    FUN_0c098e1c((t13 - 14), t98, 0x5);
                    t98 = (t98 + 0xC);
                    t97 = (t97 + 0x1);
                }
                FUN_0c0dbda0((((((struct o3E4_int *)(t0))->v)) + 0x2C0));
                t103 = 0x0;
                t104 = ((a4 + 0x48) + 0xD8);
                for (;;) {
                    if ((int)t103 >= (int)0x3) {
                        break;
                    }
                    FUN_0c098e1c((t13 - 14), t104, 0x6);
                    t104 = (t104 + 0xC);
                    t103 = (t103 + 0x1);
                }
                FUN_0c0975d0((t13 - 14), ((0x1B0 + a4) + 0x1E0), 0x3, 0xA);
                FUN_0c0dbda0((((((struct o3E4_int *)(t0))->v)) + 0x340));
                t110 = 0x0;
                t111 = ((a4 + 0x48) + 0xFC);
                for (;;) {
                    if ((int)t110 >= (int)0x3) {
                        break;
                    }
                    FUN_0c098e1c((t13 - 14), t111, 0x7);
                    t111 = (t111 + 0xC);
                    t110 = (t110 + 0x1);
                }
                FUN_0c0dbda0((((((struct o3E4_int *)(t0))->v)) + 0x380));
                t116 = 0x0;
                t117 = ((a4 + 0x48) + 0x120);
                for (;;) {
                    if ((int)t116 >= (int)0x3) {
                        break;
                    }
                    FUN_0c098e1c((t13 - 14), t117, 0x8);
                    t117 = (t117 + 0xC);
                    t116 = (t116 + 0x1);
                }
                FUN_0c0975d0((t13 - 14), ((0x1B0 + a4) + 0x2D0), 0x3, 0xA);
                nlPopMatrix(0x1);
            }
            FUN_0c096094((0x660 + a4), 0xA0);
            FUN_0c084800(0.899999976f, 0.899999976f, 1.0f);
            FUN_0c095fa0((0x570 + a4), 0xA);
            FUN_0c0849da();
            t138 = (((struct o40_int *)(a4))->v);
            (((struct o40_uint *)(a4))->v) = (t138 - 1);
            t152 = 0x40;
            if ((int)(t138 - 1) < 0) {
                (((struct o40_uint *)(a4))->v) = ((((struct o44_int *)(a4))->v));
                t140 = *(int *)((a4 + 0x3C));
                *(unsigned int *)((a4 + 0x3C)) = (t140 + 0x1);
                t152 = 0x40;
                if ((int)(t140 + 0x1) > (int)0xC8) {
                    t152 = (FUN_0c0e19f2());
                }
            }
        }
        t166 = t152;
    }
    return t166;
}

int FUN_0c019f02(int a4, int a5, int a6, int a7)
{
    int stk[9];

    register int R1;
    register int R2;
    int R5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    int R1000;
    R1000 = *(int *)((int)stk + 0);
    v0_10 = a4;
    v0_3 = a7;
    R1000 = v0_10;
    v0_9 = *(int *)0xC23ED9C;
    v0_4 = (v0_9);
    v0_0 = (0xC23F25C);
    v0_7 = (0xFFFFFFFF);
    v0_1 = (0xC23EDE0);
    v0_2 = (0xC23F1AC);
    v0_5 = (0xFFFFFFFF);
    v0_10 = (0xFFFFFFFF);
    v0_8 = (0xC5229BC);
    v0_6 = (0x0);
    if ((v0_9 == 25)) goto L_C019F32;
    L_C01A2CC:;
    return v0_4;
    L_C019F32:;
    v0_9 = (((struct o40_int *)(v0_8))->v);
    v0_4 = (v0_9);
    if ((v0_9 == 1)) goto L_C019FD2;
    if ((((((struct o44_int *)(v0_8))->v)) != 0)) goto L_C019F80;
    v0_10 = (v0_8);
    if (((int)((((struct o80_int *)(v0_2))->v)) < (int)(*(int *)((v0_8 + 0x0))))) goto L_C019F5E;
    v0_9 = *(int *)((v0_10 + 0x8));
    v0_4 = (v0_9);
    if ((v0_9 == 1)) goto L_C019FD2;
    v0_4 = (0x88);
    if (((unsigned int)((((struct o88_int *)(v0_2))->v)) >= (unsigned int)(*(int *)((v0_10 + 0x4))))) goto L_C019FD2;
    L_C019F5E:;
    *(unsigned int *)((v0_0 + 0x0)) = 0x383;
    L_C019FC0:;
    *(unsigned int *)((v0_0 + 0x4)) = 0x383;
    (((struct oA0_uint *)(v0_2))->v) = 0x50;
    (((struct o9C_uint *)(v0_2))->v) = 0x50;
    v0_4 = (0x9C);
    L_C019FD2:;
    if (((*(int *)((v0_1 + 0x0))) == 0)) goto L_C01A090;
    v0_9 = *(int *)((v0_1 + 0x0));
    v0_4 = (v0_9);
    if ((v0_9 == 4)) goto L_C019FF6;
    if ((v0_4 == 5)) goto L_C01A022;
    if ((v0_4 == 6)) goto L_C01A038;
    if ((v0_4 == 7)) goto L_C01A038;
    if ((v0_4 == 1)) goto L_C01A074;
    if (!((v0_4 == 11))) goto L_C01A090;
    v0_4 = ((FUN_0c01a632(0x0)));
    goto L_C01A090;
    L_C01A090:;
    if (((*(int *)((v0_1 + 0x4))) == 0)) goto L_C01A154;
    v0_9 = *(int *)((v0_1 + 0x4));
    v0_4 = (v0_9);
    if ((v0_9 == 4)) goto L_C01A0B4;
    if ((v0_4 == 5)) goto L_C01A0E0;
    if ((v0_4 == 6)) goto L_C01A0FA;
    if ((v0_4 == 7)) goto L_C01A0FA;
    if ((v0_4 == 1)) goto L_C01A11A;
    if (!((v0_4 == 11))) goto L_C01A154;
    v0_4 = ((FUN_0c01a632(0x1)));
    goto L_C01A154;
    L_C01A154:;
    v0_10 = (0xC2497E0);
    R5 = (0x4);
    v0_9 = (0x5A);
    if (((int)v0_5 >= 0)) goto L_C01A1A0;
    v0_10 = ((v0_10 + 0x50));
    if (((int)v0_7 >= 0)) goto L_C01A168;
    goto L_C01A2CC;
    L_C01A168:;
    if (((R5 & (*(int *)((v0_10 + 0x0)))) == 0)) goto L_C01A192;
    if (((int)v0_7 >= (int)0x2D0)) goto L_C01A192;
    v0_5 = (((struct o0_int *)0xC23EDE0)->v);
    v0_4 = (v0_5);
    if (((int)v0_5 >= (int)0xA)) goto L_C01A186;
    if ((((((struct o0_int *)0xC23EDE0)->v)) != 0)) goto L_C01A192;
    L_C01A186:;
    v0_7 = ((v0_7 - ((int)((int)v0_7 % (int)v0_9))));
    L_C01A194:;
    if (((int)v0_7 >= 0)) goto L_C01A19A;
    v0_7 = (v0_6);
    L_C01A19A:;
    *(unsigned int *)((v0_0 + 0x4)) = v0_7;
    v0_5 = (v0_7);
    L_C01A228:;
    if ((v0_5 != 0)) goto L_C01A288;
    if (((*(int *)((v0_1 + 0x0))) == 10)) goto L_C01A238;
    if (!(((*(int *)((v0_1 + 0x4))) != 10))) goto L_C01A238;
    if (((*(int *)((v0_1 + 0x0))) == 0)) goto L_C01A25A;
    if (((*(int *)((v0_1 + 0x0))) == 0)) goto L_C01A256;
    FUN_0c0b72d6(0x0);
    goto L_C01A256;
    L_C01A238:;
    (((struct o70_uint *)(v0_2))->v) = 0x3;
    (((struct o74_uint *)(v0_2))->v) = v0_6;
    L_C01A288:;
    v0_0 = (((struct o9C_int *)(v0_2))->v);
    (((struct o9C_uint *)(v0_2))->v) = (v0_0 - 1);
    if (((int)(v0_0 - 1) > 0)) goto L_C01A2B6;
    (((struct o9C_uint *)(v0_2))->v) = ((((struct oA0_int *)(v0_2))->v));
    if (((int)((((struct oA0_int *)(v0_2))->v)) <= (int)0x14)) goto L_C01A2AE;
    (((struct oA0_uint *)(v0_2))->v) = (((((struct oA0_int *)(v0_2))->v)) - 3);
    L_C01A2AE:;
    FUN_0c0cc3f8(0x129A9, R5, v0_9, v0_3);
    L_C01A2B6:;
    return FUN_0c01a5b8(v0_5);
    L_C01A256:;
    *(unsigned int *)((v0_1 + 0x0)) = 0xB;
    L_C01A25A:;
    if (((*(int *)((v0_1 + 0x4))) == 0)) goto L_C01A270;
    if (((*(int *)((v0_1 + 0x4))) == 0)) goto L_C01A26C;
    FUN_0c0b72d6(0x1);
    L_C01A26C:;
    *(unsigned int *)((v0_1 + 0x4)) = 0xB;
    L_C01A270:;
    (((struct o18_uint *)0xC23ED44)->v) = (((((struct o18_int *)0xC23ED44)->v)) | 0x6);
    (((struct o0_uint *)0xC23ED44)->v) = 0x1;
    (((struct o4_uint *)0xC23ED44)->v) = 0xD;
    v0_4 = (0xC23ED48);
    goto L_C01A2CC;
    L_C01A192:;
    v0_7 = ((v0_7 - 1));
    goto L_C01A194;
    L_C01A1A0:;
    if (((int)v0_7 >= 0)) goto L_C01A1D8;
    if ((((*(int *)((v0_10 + 0x0))) & R5) == 0)) goto L_C01A1CE;
    if (((int)v0_5 >= (int)0x2D0)) goto L_C01A1CE;
    v0_7 = (((struct o4_int *)0xC23EDE0)->v);
    v0_4 = (v0_7);
    if (((int)v0_7 >= (int)0xA)) goto L_C01A1C2;
    if ((((((struct o4_int *)0xC23EDE0)->v)) != 0)) goto L_C01A1CE;
    L_C01A1C2:;
    v0_5 = ((v0_5 - ((int)((int)v0_5 % (int)v0_9))));
    L_C01A1D0:;
    if (((int)v0_5 >= 0)) goto L_C01A226;
    v0_5 = (v0_6);
    L_C01A226:;
    *(unsigned int *)((v0_0 + 0x0)) = v0_5;
    goto L_C01A228;
    L_C01A1CE:;
    v0_5 = ((v0_5 - 1));
    goto L_C01A1D0;
    L_C01A1D8:;
    v0_3 = (v0_10);
    if (((int)v0_5 > (int)v0_7)) goto L_C01A1E0;
    v0_5 = (v0_7);
    L_C01A1E0:;
    v0_10 = ((v0_10 + 0x50));
    if ((((*(int *)((v0_3 + 0x0))) & R5) != 0)) goto L_C01A1EE;
    if ((((*(int *)((v0_10 + 0x0))) & R5) == 0)) goto L_C01A21C;
    L_C01A1EE:;
    if (((int)(*(int *)0xC23F25C) >= (int)0x2D0)) goto L_C01A21C;
    v0_5 = ((v0_5 - ((int)((int)v0_5 % (int)v0_9))));
    L_C01A21E:;
    if (((int)v0_5 >= 0)) goto L_C01A224;
    v0_5 = (v0_6);
    L_C01A224:;
    *(unsigned int *)((v0_0 + 0x4)) = v0_5;
    goto L_C01A226;
    L_C01A21C:;
    v0_5 = ((v0_5 - 1));
    goto L_C01A21E;
    L_C01A11A:;
    v0_2 = FUN_0c0ba130(0x1);
    *(unsigned int *)((v0_1 + 0x4)) = 0x3;
    (((struct o14_uint *)0xC23EDE0)->v) = 0x1E0;
    *(unsigned int *)((v0_0 + 0x0)) = 0x383;
    v0_4 = (v0_2);
    goto L_C01A2CC;
    L_C01A0FA:;
    if (((unsigned int)(*(int *)((v0_8 + 0x0))) > (unsigned int)0x0)) goto L_C01A112;
    v0_4 = (0xC23EDE0);
    if (((int)((((struct o0_int *)0xC23EDE0)->v)) <= 0)) goto L_C01A116;
    if (((int)(*(int *)((v0_4 + 0x0))) >= (int)0x5)) goto L_C01A116;
    L_C01A112:;
    v0_7 = ((*(int *)((v0_0 + 0x4))));
    goto L_C01A154;
    L_C01A116:;
    v0_7 = (v0_6);
    goto L_C01A154;
    L_C01A0E0:;
    if (!(((*(int *)((v0_1 + 0x0))) != 6))) goto L_C01A0E6;
    (((struct o70_uint *)(v0_2))->v) = v0_6;
    goto L_C01A0F2;
    L_C01A0E6:;
    (((struct o70_uint *)(v0_2))->v) = 0x1;
    L_C01A0F2:;
    v0_0 = (0x2);
    L_C01A0F4:;
    (((struct o74_uint *)(v0_2))->v) = v0_0;
    v0_4 = (0x74);
    goto L_C01A2CC;
    L_C01A0B4:;
    FUN_0c01a320(0x1, 0x0);
    *(unsigned int *)((v0_1 + 0x4)) = 0x5;
    *(unsigned int *)(((R1000) + 0x34)) = (*(int *)((0xC2078A4 + ((*(short *)(((*(int *)0xC23ECFC) + 0x2))) << 2))));
    *(unsigned int *)(((R1000) + 0x38)) = (*(int *)((0xC2078A4 + ((*(short *)(((*(int *)0xC23ECFC) + 0x2))) << 2))));
    goto L_C01A0E6;
    L_C01A074:;
    v0_2 = FUN_0c0ba130(0x0);
    *(unsigned int *)((v0_1 + 0x0)) = 0x3;
    (((struct o10_uint *)0xC23EDE0)->v) = 0x1E0;
    *(unsigned int *)((v0_0 + 0x4)) = 0x383;
    v0_4 = (v0_2);
    goto L_C01A2CC;
    L_C01A038:;
    if (((unsigned int)(*(int *)((v0_8 + 0x0))) > (unsigned int)0x0)) goto L_C01A050;
    v0_4 = (0xC23EDE4);
    if (((int)((((struct o4_int *)0xC23EDE0)->v)) <= 0)) goto L_C01A070;
    if (((int)(*(int *)((v0_4 + 0x0))) >= (int)0x5)) goto L_C01A070;
    L_C01A050:;
    v0_5 = ((*(int *)((v0_0 + 0x0))));
    goto L_C01A090;
    L_C01A070:;
    v0_5 = (v0_6);
    goto L_C01A090;
    L_C01A022:;
    if (!(((*(int *)((v0_1 + 0x4))) != 6))) goto L_C01A028;
    (((struct o70_uint *)(v0_2))->v) = v0_6;
    goto L_C01A034;
    L_C01A028:;
    (((struct o70_uint *)(v0_2))->v) = 0x1;
    L_C01A034:;
    v0_0 = (0x1);
    goto L_C01A0F4;
    L_C019FF6:;
    FUN_0c01a320(0x0, 0x0);
    *(unsigned int *)((v0_1 + 0x0)) = 0x5;
    *(unsigned int *)(((R1000) + 0x34)) = (*(int *)((0xC2078A4 + ((*(short *)(((*(int *)0xC23ECFC) + 0x2))) << 2))));
    *(unsigned int *)(((R1000) + 0x38)) = (*(int *)((0xC2078A4 + ((*(short *)(((*(int *)0xC23ECFC) + 0x2))) << 2))));
    goto L_C01A028;
    L_C019F80:;
    v0_10 = (v0_8);
    v0_9 = ((*(int *)((v0_8 + 0x10))));
    if (((int)((((struct o80_int *)(v0_2))->v)) < (int)(*(int *)((v0_8 + 0x0))))) goto L_C019FA0;
    if (((*(int *)((v0_10 + 0x8))) == 1)) goto L_C019FA4;
    if (((unsigned int)((((struct o88_int *)(v0_2))->v)) >= (unsigned int)(*(int *)((v0_10 + 0x4))))) goto L_C019FA4;
    L_C019FA0:;
    *(unsigned int *)((v0_0 + 0x0)) = 0x383;
    L_C019FA4:;
    if (((int)((((struct o84_int *)(v0_2))->v)) < (int)v0_9)) goto L_C019FC0;
    v0_9 = (((struct o4_int *)0xC5229D0)->v);
    v0_4 = (v0_9);
    if ((v0_9 == 1)) goto L_C019FD2;
    v0_4 = (0x8C);
    if (((unsigned int)((((struct o8C_int *)(v0_2))->v)) >= (unsigned int)((((struct o0_int *)0xC5229D0)->v)))) goto L_C019FD2;
    goto L_C019FC0;
}

int FUN_0c06546c(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = (((struct o10_int *)0xC23A180)->v);
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 == 2) {
                t0 = (((struct o14_int *)0xC247BB4)->v);
                if (t0 != 0) {
                    if (t0 != 1) {
                        if (t0 != 2) {
                            if (t0 != 3) {
                                if (t0 != 4) {
                                    if (t0 != 5) {
                                        if (t0 != 6) {
                                            if (t0 != 7) {
                                                if (t0 != 8) {
                                                    if (t0 != 9) {
                                                        t1 = t0;
                                                        if (t0 != 10) {
                                                        } else {
                                                            (((struct o0_uint *)0xC23A180)->v) = 0x15;
                                                            (((struct o10_uint *)0xC23A180)->v) = 0x0;
                                                            t1 = 0x15;
                                                        }
                                                        t3 = t1;
                                                    } else {
                                                        (((struct o0_uint *)0xC23A180)->v) = 0x14;
                                                        (((struct o10_uint *)0xC23A180)->v) = 0x0;
                                                        t3 = t0;
                                                    }
                                                    t1 = t3;
                                                } else {
                                                    (((struct o0_uint *)0xC23A180)->v) = 0x13;
                                                    (((struct o10_uint *)0xC23A180)->v) = 0x0;
                                                    t1 = t0;
                                                }
                                                t3 = t1;
                                            } else {
                                                (((struct o0_uint *)0xC23A180)->v) = 0x12;
                                                (((struct o10_uint *)0xC23A180)->v) = 0x0;
                                                t3 = 0x12;
                                            }
                                            t1 = t3;
                                        } else {
                                            (((struct o0_uint *)0xC23A180)->v) = 0x11;
                                            (((struct o10_uint *)0xC23A180)->v) = 0x0;
                                            t1 = t0;
                                        }
                                        t3 = t1;
                                    } else {
                                        (((struct o0_uint *)0xC23A180)->v) = 0xC;
                                        (((struct o10_uint *)0xC23A180)->v) = 0x0;
                                        t3 = 0xC;
                                    }
                                    t1 = t3;
                                } else {
                                    (((struct o0_uint *)0xC23A180)->v) = 0xB;
                                    (((struct o10_uint *)0xC23A180)->v) = 0x0;
                                    t1 = t0;
                                }
                                t3 = t1;
                            } else {
                                (((struct o0_uint *)0xC23A180)->v) = 0xA;
                                (((struct o10_uint *)0xC23A180)->v) = 0x0;
                                t3 = 0xA;
                            }
                            t1 = t3;
                        } else {
                            (((struct o0_uint *)0xC23A180)->v) = 0x8;
                            (((struct o10_uint *)0xC23A180)->v) = 0x0;
                            t1 = t0;
                        }
                        t0 = t1;
                    } else {
                        t1 = ((int (*)(int, int, int, float))(FUN_0c0d8c40))(0x0, 0x201000, 0x200010, f4);
                        (((struct o0_uint *)0xC23A180)->v) = 0x4;
                        (((struct o10_uint *)0xC23A180)->v) = 0x0;
                        t0 = t1;
                    }
                    t1 = t0;
                } else {
                    t0 = ((int (*)(int, int, int, float))(FUN_0c0d8c40))(0x0, 0x0, 0x0, f4);
                    (((struct o0_uint *)0xC23A180)->v) = 0x1;
                    (((struct o10_uint *)0xC23A180)->v) = 0x0;
                    (((struct oC_uint *)0xC23A180)->v) = 0x0;
                    t1 = t0;
                }
            }
            return t1;
        }
        FUN_0c084218(a4);
        t0 = ((int (*)(int, int, int))(FUN_0c0d8c40))(0x0, 0x2020, 0x2020);
        t0 = 0x0;
        for (;;) {
            if ((*(int *)((0xC1FFDB0 + (t0 << 2)))) == 0) {
                break;
            }
            FUN_0c0db0a0(((((struct o0_int *)0xC247BB4)->v)), ((t0 << 1) + ((((struct o4_int *)0xC247BB4)->v))));
            nlPrintf(0xC0F9FD0, ((*(int *)((0xC1FFDB0 + (t0 << 2))))));
            t0 = (t0 + 0x1);
        }
        FUN_0c0db0a0(((((struct o8_int *)0xC247BB4)->v)), ((((((struct o14_int *)0xC247BB4)->v)) << 1) + ((((struct oC_int *)0xC247BB4)->v))));
        nlPrintf(0xC0F9FD4);
        if (((*(int *)0xC2497E0) & 32) != 0) {
            (((struct o1C_uint *)0xC247BB4)->v) = 0x0;
            t0 = (((struct o14_int *)0xC247BB4)->v);
            (((struct o14_uint *)0xC247BB4)->v) = (t0 + 0x1);
            if ((int)(t0 + 0x1) > (int)((((struct o10_int *)0xC247BB4)->v))) {
                (((struct o14_uint *)0xC247BB4)->v) = 0x0;
            }
        } else {
            if (((*(int *)0xC2497E0) & 16) != 0) {
                (((struct o1C_uint *)0xC247BB4)->v) = 0x0;
                t0 = (((struct o14_int *)0xC247BB4)->v);
                (((struct o14_uint *)0xC247BB4)->v) = (t0 - 1);
                if ((int)(t0 - 1) < 0) {
                    (((struct o14_uint *)0xC247BB4)->v) = ((((struct o10_int *)0xC247BB4)->v));
                }
            } else {
                if (((*(int *)0xC2497E0) & 0x606) != 0) {
                    FUN_0c0db0a0(((((struct o8_int *)0xC247BB4)->v)), ((((((struct o14_int *)0xC247BB4)->v)) << 1) + ((((struct oC_int *)0xC247BB4)->v))));
                    t0 = nlPrintf(0xC0F9FD4);
                    (((struct o10_uint *)0xC23A180)->v) = (((((struct o10_int *)0xC23A180)->v)) + 0x1);
                    return t0;
                }
            }
        }
        FUN_0c0db0a0(((((struct o8_int *)0xC247BB4)->v)), ((((((struct o14_int *)0xC247BB4)->v)) << 1) + ((((struct oC_int *)0xC247BB4)->v))));
        nlPrintf(0xC0F9FD8);
        nlPushMatrix(0x0);
        nlUnitMatrix();
        nlUnitMatrix();
        FUN_0c0dcc70(0.0f, 0.0f, ((((struct o0_float *)0xC0658B4)->v)));
        nlRotateAX(0x4000);
        nlRotateAY((-(((((struct o24_int *)0xC247BB4)->v)) * 0x444)));
        FUN_0c0c465c(0x9C);
        nlUnitMatrix();
        FUN_0c0dcc70(0.0f, 0.0f, ((((struct o14_float *)0xC0658B4)->v)));
        nlRotateAX(0x4000);
        nlRotateAY((-(((((struct o28_int *)0xC247BB4)->v)) * 0x444)));
        FUN_0c0c465c(0x9E);
        nlUnitMatrix();
        FUN_0c0dcc70(0.0f, 0.0f, ((((struct o18_float *)0xC0658B4)->v)));
        nlRotateAY((-(((((struct o28_int *)0xC247BB4)->v)) * 0x444)));
        FUN_0c0c465c(0xD0F);
        nlPopMatrix(0x1);
        t0 = (((struct o24_int *)0xC247BB4)->v);
        (((struct o24_uint *)0xC247BB4)->v) = (t0 + 0x1);
        t1 = (int)((int)((t0 + 0x1) - 1) % (int)0x3C);
        if (t1 == 0) {
            (((struct o28_uint *)0xC247BB4)->v) = (((((struct o28_int *)0xC247BB4)->v)) + 0x1);
        }
        return t1;
    }
    FUN_0c0498ce();
    FUN_0c054d8e();
    FUN_0c054ccc(0x0);
    FUN_0c0dc0b0(0x3);
    nlUnitMatrix();
    FUN_0c0dd2f0(0x2000, 1.33333325f, 9.99999975e-05f, 300.0f);
    FUN_0c0dc0b0(0x1);
    FUN_0c0844dc(0xDD00, 0x9C00, 0.699999988f);
    FUN_0c08455e(0.599999964f);
    *(unsigned int *)0xC23ED50 = 0x1;
    FUN_0c0bfa90();
    FUN_0c0c45d0();
    FUN_0c0c4290(0x0);
    (((struct o0_uint *)0xC247BB4)->v) = 0x8;
    (((struct o4_uint *)0xC247BB4)->v) = 0x10;
    (((struct o8_uint *)0xC247BB4)->v) = 0x5;
    (((struct oC_uint *)0xC247BB4)->v) = 0x10;
    (((struct o14_uint *)0xC247BB4)->v) = 0x0;
    (((struct o24_uint *)0xC247BB4)->v) = 0x0;
    (((struct o28_uint *)0xC247BB4)->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        if ((*(int *)((0xC1FFDB0 + (t0 << 2)))) == 0) {
            break;
        }
        FUN_0c0db0a0(((((struct o0_int *)0xC247BB4)->v)), ((t0 << 1) + ((((struct o4_int *)0xC247BB4)->v))));
        nlPrintf(0xC0F9FD0, ((*(int *)((0xC1FFDB0 + (t0 << 2))))));
        t0 = (t0 + 0x1);
    }
    (((struct o10_uint *)0xC247BB4)->v) = (t0 - 1);
    t0 = FUN_0c084104();
    (((struct o10_uint *)0xC23A180)->v) = (((((struct o10_int *)0xC23A180)->v)) + 0x1);
    return t0;
}
