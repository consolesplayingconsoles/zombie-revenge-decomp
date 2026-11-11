/* Straight-line functions with calls and guards (batch gen_ak): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010128(int, int);
int FUN_0c01cdc2(int);
float FUN_0c01f1b8(int, int);
int FUN_0c02120e(void);
int FUN_0c02286c(int, int, float, float);
int FUN_0c023300(int);
int FUN_0c02a19a(int);
int FUN_0c03217c(int, int, int);
int FUN_0c03227c(int);
int FUN_0c032394(int);
int FUN_0c032590(int, float, float);
int FUN_0c032aa6(int);
int FUN_0c03442c(int, int, int, int, int, int);
int FUN_0c034b1c(int, int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c049b80(int);
int FUN_0c049c5c(int, int, int, int, int, int);
int FUN_0c058f7c(void);
int FUN_0c058fa0(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0909fc(int);
int FUN_0c090f70(int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0c4784(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int);
int FUN_0c0cee9e(void);
int FUN_0c0cf386(void);
int FUN_0c0cf46c(int);
int FUN_0c0cf4c4(int, int, int, int, int, float, float, float, float, float);
int FUN_0c0d18d8(void);
int FUN_0c0d19b8(int, int);
int FUN_0c0d19d4(void);
int FUN_0c0d1b00(void);
int FUN_0c0d2b30(void);
int FUN_0c0d41c6(void);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int nlGetMatrix(int);
int FUN_0c0db800(int);
int FUN_0c0dbda0(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0dc5a0(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int FUN_0c0dccf0(void);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int FUN_0c0dce80(int, int, float);
int nlSubVector3op(int, int, int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int _modls(void);
int _quick_odd_mvn(void);
int FUN_0c0e6248(void);
extern float _builtin_sqrtf(float);
int strlen(int);
int FUN_0c0ad99c(int a4);
int FUN_0c07993a(int a4);
int FUN_0c0d27a0(int a4);
int FUN_0c02704c(int a4, int a5, int a6, int a7);
int FUN_0c09d360(int a4, int a5, int a6, int a7);
int FUN_0c025088(int a4, int a5, int a6, int a7);
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o21C_uint { char p[0x21C]; unsigned int v; };
struct o288_uint { char p[0x288]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o34C_int { char p[0x34C]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3D4_int { char p[0x3D4]; int v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o3E8_float { char p[0x3E8]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o4E_short { char p[0x4E]; short v; };
struct o4E_ushort { char p[0x4E]; unsigned short v; };
struct o50_int { char p[0x50]; int v; };
struct o52_short { char p[0x52]; short v; };
struct o52_ushort { char p[0x52]; unsigned short v; };
struct o54_short { char p[0x54]; short v; };
struct o54_ushort { char p[0x54]; unsigned short v; };
struct o58_ushort { char p[0x58]; unsigned short v; };
struct o5A_short { char p[0x5A]; short v; };
struct o5A_ushort { char p[0x5A]; unsigned short v; };
struct o5E_short { char p[0x5E]; short v; };
struct o5E_ushort { char p[0x5E]; unsigned short v; };
struct o60_short { char p[0x60]; short v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o6C_ushort { char p[0x6C]; unsigned short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_ushort { char p[0x70]; unsigned short v; };
struct oE8_ushort { char p[0xE8]; unsigned short v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o20_float { char p[0x20]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct oC_float { char p[0xC]; float v; };
struct o304_uint { char p[0x304]; unsigned int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o32C_uint { char p[0x32C]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o50_short { char p[0x50]; short v; };
struct o58_short { char p[0x58]; short v; };
struct o64_int { char p[0x64]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };




int FUN_0c0ad99c(int a4)
{
    int t0;
    int t1;
    int t2;
    int t7;
    int t8;
    int t9;
    float u11;
    int t12;
    float t13;
    float u14;
    int t60;
    int t61;
    int t62;
    int t86;
    int t87;
    int t88;
    int t90;
    int t91;
    int t92;
    float u100;
    int t116;
    int t117;
    int t118;
    int t123;
    float t121;
    float t141;
    int t161;
    int t127;
    int stk[14];

    t0 = *(int *)0xC246FFC;
    t1 = (a4 + 0x64);
    t2 = 0x4;
    for (;;) {
        t2 = (t2 - 1);
        *(unsigned int *)((t1 + 0x4)) = ((*(int *)((t1 + 0x4))) + 0x1);
        t1 = (t1 + 0x8);
        if (t2 == 0) {
            break;
        }
    }
    t7 = *(int *)((a4 + 0x30));
    t8 = *(int *)0xC24FA38;
    if (t7 != 0) {
        switch (t7) {
        case 1:
            (((struct o5A_ushort *)(a4))->v) = (((((struct o5A_short *)(a4))->v)) + 0x75);
            (((struct o4E_ushort *)(a4))->v) = ((((struct o5A_short *)(a4))->v));
            if ((*(int *)0xC24FA38) == 0x258) {
                *(unsigned int *)((a4 + 0x30)) = 0x2;
                FUN_0c0cc3f8(0x72EA9);
            }
            break;
        case 2:
            if (t8 == 0x460) {
                *(unsigned int *)((a4 + 0x30)) = 0x3;
            }
            break;
        case 3:
            t9 = (((struct o60_short *)(a4))->v);
            (((struct o60_ushort *)(a4))->v) = (t9 + 0x123);
            u11 = 8192.0f;
            u11 = u11 + 16383.0f * _builtin_fabsf((FUN_0c0da410((short)(t9 + 0x123))));
            (((struct o54_ushort *)(a4))->v) = (int)u11;
            (((struct o5A_ushort *)(a4))->v) = (int)u11;
            t12 = (((struct o5E_short *)(a4))->v);
            (((struct o5E_ushort *)(a4))->v) = (t12 + 0x88);
            t13 = FUN_0c0d9e90((short)(t12 + 0x88));
            u14 = -8192.0f;
            u14 = u14 + 10922.0f * _builtin_fabsf(t13);
            (((struct o52_ushort *)(a4))->v) = (int)u14;
            (((struct o58_ushort *)(a4))->v) = (int)u14;
            _builtin_fabsf(t13);
            break;
        }
    } else {
        if (t8 == 0x1CC) {
            *(unsigned int *)((a4 + 0x30)) = 0x1;
            (((struct o64_uint *)(a4))->v) = 0xB60;
            (((struct o4C_ushort *)(a4))->v) = 0xFFFFEAAB;
            t60 = 0x4;
            t61 = (a4 + 0x64);
            for (;;) {
                t62 = (0x4 + t61);
                t61 = (t61 + 0x8);
                t60 = (t60 - 0x1);
                *(unsigned int *)(((t62) + 0x0)) = (FUN_0c0da2e0());
                if (t60 == 0) {
                    break;
                }
            }
        }
    }
    FUN_0c0dc5a0();
    FUN_0c0dcca0(0xC10F474);
    t86 = (((struct o54_short *)(a4))->v);
    t87 = (((struct o54_short *)(a4))->v);
    t88 = (((struct o5A_short *)(a4))->v);
    (((struct o54_ushort *)(a4))->v) = (int)((float)t86 + ((float)(t88 - t87) * 0.049999997f));
    nlRotateAY((short)(int)((float)t86 + ((float)(t88 - t87) * 0.049999997f)));
    t90 = (((struct o52_short *)(a4))->v);
    t91 = (((struct o52_short *)(a4))->v);
    t92 = (((struct o58_short *)(a4))->v);
    (((struct o52_ushort *)(a4))->v) = (int)((float)t90 + ((float)(t92 - t91) * 0.049999997f));
    nlRotateAX((short)(int)((float)t90 + ((float)(t92 - t91) * 0.049999997f)));
    FUN_0c0db470(0xC10F480, (a4 + 0x40));
    if ((int)(*(int *)((a4 + 0x30))) <= (int)0x1) {
    } else {
        if (((*(int *)0xC23A258) & 31) == 0) {
            (((struct o34_float *)(a4))->v) = ((float)(FUN_0c0da2e0()) * 0.00213629566f);
            u100 = -16.0f;
            u100 = u100 + 0.000976592302f * (float)(FUN_0c0da2e0());
            (((struct o3C_float *)(a4))->v) = u100;
        }
        nlAddVector3op((((int)stk + 0) + 0x8), 0xC10F48C, (a4 + 0x34));
        nlSubVector3op((((int)stk + 0) + 0x8), (a4 + 0x40), (((int)stk + 0) + 0x8));
        FUN_0c0a7714(((int)stk + 0), (((int)stk + 0) + 0x4), (*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 16))));
        (((struct o4C_ushort *)(a4))->v) = (int)((float)((((struct o4C_short *)(a4))->v)) + ((float)((*(int *)(((int)stk + 0))) - ((((struct o4C_short *)(a4))->v))) * 0.049999997f));
        t116 = *(int *)(((int)stk + 4));
        t117 = (((struct o4E_short *)(a4))->v);
        t118 = (((struct o4E_short *)(a4))->v);
        (((struct o4E_ushort *)(a4))->v) = (int)((float)t118 + ((float)(t116 - t117) * 0.049999997f));
        t123 = (t116 - t117);
        if (((*(int *)(((a4 + 0x64) + 0x4))) & 64) != 0) {
            t121 = FUN_0c0da410((((*(int *)(((a4 + 0x64) + 0x4))) << 8) << 2));
            (((struct o64_uint *)(a4))->v) = (int)(_builtin_fabsf(t121) * 3640.0f);
            t123 = (int)(_builtin_fabsf(t121) * 3640.0f);
            t127 = (int)(_builtin_fabsf(t121) * 3640.0f);
        } else {
            t127 = (int)((float)t118 + ((float)(t116 - t117) * 0.049999997f));
        }
        if (((*(int *)((((a4 + 0x64) + 0x8) + 0x4))) & 8) != 0) {
            *(unsigned int *)((((a4 + 0x64) + 0x8) + 0x0)) = (int)((FUN_0c0da410(((((*(int *)((((a4 + 0x64) + 0x8) + 0x4))) << 8) << 2) << 2))) * 3640.0f);
        }
        if (((*(int *)(((((a4 + 0x64) + 0x8) + 0x8) + 0x4))) & 32) != 0) {
            t141 = FUN_0c0da410(((((*(int *)(((((a4 + 0x64) + 0x8) + 0x8) + 0x4))) << 8) << 2) << 2));
            *(unsigned int *)(((((a4 + 0x64) + 0x8) + 0x8) + 0x0)) = (int)(t141 * 3640.0f);
            *(unsigned int *)((((((a4 + 0x64) + 0x8) + 0x8) + 0x8) + 0x0)) = (int)(t141 * 3640.0f);
        }
    }
    nlPopMatrix(0x1);
    t161 = (((struct o3D4_int *)(t0))->v);
    (((struct o3E8_float *)(t0))->v) = 0.0f;
    (((struct o30_float *)(t0))->v) = ((((struct o40_float *)(a4))->v));
    (((struct o34_float *)(t0))->v) = ((((struct o44_float *)(a4))->v));
    (((struct o38_float *)(t0))->v) = ((((struct o48_float *)(a4))->v));
    (((struct o6C_ushort *)(t0))->v) = (((((struct o4C_short *)(a4))->v)) - (*(short *)(((t161 + 0x6) + 0x0))));
    (((struct o6E_ushort *)(t0))->v) = (((((struct o4E_short *)(a4))->v)) - (*(short *)(((t161 + 0x6) + 0x2))));
    (((struct o70_ushort *)(t0))->v) = (((((struct o50_short *)(a4))->v)) - (*(short *)(((t161 + 0x6) + 0x4))));
    nlPushMatrix(0x0);
    nlMultiMatrix(((((struct o3E4_int *)(t0))->v)));
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC1011F4);
    nlRotateAX(((((struct o64_int *)(a4))->v)));
    FUN_0c0c465c(0x77F);
    FUN_0c0db800(0x0);
    FUN_0c0dcca0(0xC101200);
    nlRotateAZ(((((struct o4_short *)0xC10120C)->v)));
    nlRotateAY(((*(int *)((((a4 + 0x64) + 0x8) + 0x0))) + ((((struct o2_short *)0xC10120C)->v))));
    nlRotateAX(((((struct o0_short *)0xC10120C)->v)));
    FUN_0c0c465c(0x789);
    nlPopMatrix(0x1);
    return (nlPopMatrix(0x1));
}

int FUN_0c07993a(int a4)
{
    int t1;
    int t4;
    int t6;
    int t7;
    int t10;
    float t57;
    int t58;
    int t59;
    int t77;
    int t80;
    int t81;
    int t82;
    int t83;
    float u87;
    float u89;
    float u96;
    int t107;
    int t140;
    int t145;
    int t5;
    int t20;
    int stk[25];
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);

    nlPushMatrix(0x0);
    R1008 = 0x34;
    t1 = *(int *)((a4 + 0x30));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                R1012 = (a4 + 0x38);
                R1024 = (0x518 + a4);
                R1004 = (0x858 + a4);
                R1020 = (0x990 + a4);
                R1016 = (0x788 + a4);
                t4 = 0xC079CE8;
                t6 = (0x2A8 + a4);
                t7 = 0xC10017C;
                for (;;) {
                    if ((*(int *)(((R1016) + 0x0))) != 0) {
                        t10 = R1016;
                        *(unsigned int *)((t10 + 0x0)) = ((*(int *)((t10 + 0x0))) - 1);
                        t20 = t5;
                    } else {
                        t4 = (nlAddVector(t6, (R1024)));
                        t4 = (FUN_0c0dce80(t6, t6, 0.979999959f));
                        t4 = (nlAddVector((R1012), t6));
                        t4 = (FUN_0c010128((R1004), (R1020)));
                    }
                    t5 = t20;
                    t4 = (FUN_0c0db800(0x0));
                    t4 = (FUN_0c0dcca0((R1012)));
                    t4 = (nlRotateAX((*(short *)(((R1004) + 0x0)))));
                    t4 = (*(short *)(((R1004) + 0x4)));
                    t4 = (nlRotateAZ(t4));
                    t4 = (*(short *)((t7 + 0xC)));
                    t4 = (FUN_0c0c465c(t4));
                    t6 = (t6 + 0xC);
                    t7 = (t7 + 0x10);
                    R1012 = ((R1012) + 0xC);
                    R1024 = ((R1024) + 0xC);
                    t5 = (R1004);
                    t5 = (t5 + 0x6);
                    R1004 = t5;
                    R1020 = ((R1020) + 0x6);
                    R1016 = ((R1016) + 0x4);
                    t5 = (R1008);
                    t5 = (t5 - 1);
                    R1008 = t5;
                    if (t5 == 0) {
                        break;
                    }
                }
            }
        } else {
            if ((int)(*(int *)((a4 + 0x34))) < (int)0x3FFF) {
                *(unsigned int *)((a4 + 0x34)) = (int)((float)(*(int *)((a4 + 0x34))) + 81.9149933f);
            }
            t57 = FUN_0c0da410((*(int *)((a4 + 0x34))));
            R1004 = (0xD38 + a4);
            t58 = (0xAC8 + a4);
            t59 = 0xC10017C;
            for (;;) {
                FUN_0c0dce80((((int)stk + 4) + 0x18), (R1004), t57);
                FUN_0c0dce80((((int)stk + 4) + 0x24), t58, t57);
                FUN_0c0db800(0x0);
                FUN_0c0dcca0(t59);
                nlRotateAX((int)(*(float *)(((int)stk + 28))));
                nlRotateAZ((int)(*(float *)(((int)stk + 36))));
                FUN_0c0dcca0((((int)stk + 4) + 0x24));
                FUN_0c0c465c((*(short *)((t59 + 0xC))));
                nlScale((t57 + 0.5f), (t57 + 0.5f), (t57 + 0.5f));
                FUN_0c0de000((t57 + 0.5f));
                FUN_0c0c4784((*(short *)((t59 + 0xE))), t57);
                t59 = (t59 + 0x10);
                t58 = (t58 + 0xC);
                R1004 = ((R1004) + 0xC);
                t77 = R1008;
                R1008 = (t77 - 1);
                if ((t77 - 1) == 0) {
                    break;
                }
            }
            if (((*(int *)0xC23ED88) & 128) != 0) {
                R1016 = 0xC10017C;
                R1020 = (0xAC8 + a4);
                R1004 = (a4 + 0x38);
                R1012 = (0x518 + a4);
                R1008 = (0x990 + a4);
                R1024 = 0x34;
                *(unsigned int *)((a4 + 0x30)) = 0x2;
                t80 = (0xD38 + a4);
                t81 = (0x858 + a4);
                t82 = (0x2A8 + a4);
                for (;;) {
                    t83 = FUN_0c0da2e0();
                    nlUnitMatrix();
                    FUN_0c0dcca0((R1016));
                    u87 = *(float *)((t80 + 0x0));
                    *(unsigned short *)((t81 + 0x0)) = (int)u87;
                    nlRotateAX((short)(int)u87);
                    u89 = *(float *)((t80 + 0x8));
                    *(unsigned short *)((t81 + 0x4)) = (int)u89;
                    nlRotateAZ((short)(int)u89);
                    FUN_0c0db470((R1020), (R1004));
                    *(float *)((t82 + 0x8)) = (-((float)(FUN_0c0da2e0()) * 3.05185063e-06f));
                    FUN_0c0db4d0(t82, t82);
                    u96 = 0.049999997f;
                    u96 = u96 + 0.099999994f * ((float)t83 * 3.05185094e-05f);
                    *(float *)(((R1012) + 0x4)) = (-(u96 * 0.277222186f));
                    t80 = (t80 + 0xC);
                    t82 = (t82 + 0xC);
                    *(unsigned short *)(((R1008) + 0x0)) = (int)(((((float)t83 * 3.05185094e-05f) + -0.5f)) * 288.0f);
                    *(unsigned short *)(((R1008) + 0x4)) = (int)(((((float)t83 * 3.05185094e-05f) + -0.5f)) * 16.0f);
                    R1020 = ((R1020) + 0xC);
                    R1004 = ((R1004) + 0xC);
                    R1012 = ((R1012) + 0xC);
                    R1008 = ((R1008) + 0x6);
                    t81 = (t81 + 0x6);
                    R1016 = ((R1016) + 0x10);
                    t107 = R1024;
                    R1024 = (t107 - 1);
                    if ((t107 - 1) != 0) continue;
                    break;
                }
            }
        }
    } else {
        t140 = 0xC10017C;
        for (;;) {
            FUN_0c0db800(0x0);
            FUN_0c0dcca0(t140);
            FUN_0c0c465c((*(short *)((t140 + 0xC))));
            t145 = R1008;
            t140 = (t140 + 0x10);
            R1008 = (t145 - 1);
            if ((t145 - 1) == 0) {
                break;
            }
        }
        if (((*(int *)0xC23ED88) & 64) == 0) {
        } else {
            *(unsigned int *)((a4 + 0x30)) = 0x1;
        }
    }
    return (nlPopMatrix(0x1));
}




