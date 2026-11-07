/* Straight-line functions with calls and guards (batch gen_gr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c05d764(float);
int FUN_0c090bf0(int);
int FUN_0c0c0340(int);
int FUN_0c0c5d32(int, float);
int FUN_0c0db470(int, int);
int FUN_0c0dcca0(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c05db80(int a4, int a5, int a6);
int FUN_0c0c60d0(int a4, int a5, int a6);
struct o1E4_float { char p[0x1E4]; float v; };
struct o220_int { char p[0x220]; int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o23C_int { char p[0x23C]; int v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o248_int { char p[0x248]; int v; };
struct o248_uint { char p[0x248]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o62_ushort { char p[0x62]; unsigned short v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };


int FUN_0c05db80(int a4, int a5, int a6)
{
    int t10;
    int t14;
    int t34;
    int t8;

    if (((((struct oD8_int *)(a4))->v)) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        if (((((struct oD8_int *)(a4))->v)) == 1) {
            FUN_0c054c8a(a4);
            FUN_0c090bf0(a4);
        }
        (((struct oD8_uint *)(a4))->v) = 0x0;
    } else {
        t8 = a4;
    }
    t10 = (((struct o22C_int *)(a4))->v);
    (((struct o22C_uint *)(a4))->v) = (t10 - 1);
    if ((int)(t10 - 1) <= 0) {
        FUN_0c0e19f2();
    } else {
        if (((((struct o248_int *)(a4))->v)) != 0) {
            t14 = FUN_0c0e1830(0xC05DD5C, 0xB4);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t14 + 0x30)) = *(struct mv3 *)((0x25C + a4)); }
            (((struct o62_ushort *)(t14))->v) = ((((struct o6E_short *)(a4))->v));
            (((struct o60_ushort *)(t14))->v) = ((((struct o6C_short *)(a4))->v));
            (((struct o78_uint *)(t14))->v) = ((((struct o220_int *)(a4))->v));
            (((struct oA0_uint *)(t14))->v) = 0x14;
            (((struct o90_float *)(t14))->v) = 0.799999952f;
            (((struct o94_float *)(t14))->v) = 0.299999982f;
            (((struct o54_float *)(t14))->v) = 1.0f;
            (((struct o48_float *)(t14))->v) = 0.199999988f;
            (((struct o50_float *)(t14))->v) = (1.0f + 1.0f);
            (((struct o4C_float *)(t14))->v) = ((1.0f + 1.0f) / (float)((((struct oA0_int *)(t14))->v)));
            (((struct o80_uint *)(t14))->v) = 0x0;
            (((struct o248_uint *)(a4))->v) = 0x0;
        }
    }
    t34 = (((struct o23C_int *)(a4))->v);
    (((struct o23C_uint *)(a4))->v) = (t34 + 0x1);
    if (((t34 + 0x1) - 1) != 0) {
        if (((t34 + 0x1) - 1) != 1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
        } else {
            (((struct o1E4_float *)(a4))->v) = (((((struct o1E4_float *)(a4))->v)) * 5.0f);
        }
    } else {
        (((struct o23C_uint *)(a4))->v) = 0x1;
    }
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + (*(float *)(((0x48 + a4) + 0x0))));
    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + (*(float *)(((0x4C + a4) + 0x0))));
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + (*(float *)(((0x50 + a4) + 0x0))));
    FUN_0c01cdc2(a4);
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcca0((0x25C + a4));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    FUN_0c05d764(1.0f);
    return nlPopMatrix(0x1);
}

int FUN_0c0c60d0(int a4, int a5, int a6)
{
    float u1;
    int t58;
    int t50;
    float u8;
    float u10;
    float u12;
    float u13;
    int t14;
    int t15;
    int t16;
    float u17;
    float u18;
    float u19;
    float u20;
    int t21;
    int t22;
    int t25;
    int t26;
    float u28;
    float u29;
    float u30;
    float u31;
    int stk[11];
    int R1004;
    int R1008;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    R1004 = a5;
    R1008 = a6;
    FUN_0c0db470(a4, (((int)stk + 4) + 0x8));
    u1 = *(float *)(((int)stk + 20));
    t58 = 0xC0C6178;
    if (u1 > -100.0f) {
        t50 = 0xC0C617C;
        if (5.0f > u1) {
            if (((*(int *)0xC23A258) & 1) != 0) {
                u8 = ((*(float *)(((int)stk + 12))) / ((*(float *)0xC247D0C) * u1));
                *(float *)0xC31FCC0 = (((u8 * 320.0f) - ((float)((R1008) >> 1) * 7.19999933f)) + 320.0f);
                u10 = *(float *)(((int)stk + 20));
                u12 = (((*(float *)(((int)stk + 16))) + 5.0f) / ((*(float *)0xC247D10) * u10));
                *(float *)0xC31FCC4 = ((-(u12 * 240.0f)) + 240.0f);
                u13 = *(float *)(((int)stk + 20));
                *(float *)0xC31FCC8 = (-u13);
                t14 = 0xC;
                t15 = 0xC247D10;
                t16 = 0xC247D0C;
                u17 = u10;
                u18 = (-u13);
                u19 = 5.0f;
                u20 = 240.0f;
                for (;;) {
                    t21 = R1004;
                    R1004 = (t21 + 0x1);
                    t22 = *(signed char *)((((t21 + 0x1) - 1) + 0x0));
                    if (t22 == 0) {
                        break;
                    }
                    t14 = (signed char)t22;
                    if (t14 != 32) {
                        t14 = (signed char)t22;
                        t14 = (t14 << 1);
                        t16 = (*(short *)((0xC1E8760 + t14)));
                        *(unsigned int *)0xC31FCBC = t16;
                        t14 = (FUN_0c0c0340(0xC31FCBC));
                    } else {
                        t25 = t15;
                        t26 = t16;
                        u28 = u17;
                        u29 = u18;
                        u30 = u19;
                        u31 = u20;
                    }
                    u17 = u28;
                    u18 = u29;
                    u19 = u30;
                    u20 = u31;
                    t14 = 0x4;
                    t15 = t25;
                    t16 = t26;
                    u19 = (*(float *)((0xC31FCBC + t14)));
                    u19 = (u19 + 7.19999933f);
                    *(float *)((0xC31FCBC + t14)) = u19;
                }
            }
            t50 = (FUN_0c0c5d32((((int)stk + 4) + 0x8), (*(float *)0xC0C62B4)));
        }
        t58 = t50;
    }
    return t58;
}
