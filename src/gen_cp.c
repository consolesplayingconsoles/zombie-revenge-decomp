/* Straight-line functions with calls and guards (batch gen_cp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int FUN_0c015436();
int FUN_0c0154c0(int, int, int);
int FUN_0c0156ea(int, int, int, int);
int FUN_0c0159a2(int, int);
int FUN_0c0222c0(int);
int FUN_0c0223fc(int);
int FUN_0c02248a(int);
int FUN_0c02253c(int);
int FUN_0c0236ce(int);
int FUN_0c02a220(int);
int FUN_0c02eeea(int);
int FUN_0c02f04a(int);
int FUN_0c0316d4(int, int);
int FUN_0c03442c(int, int, int, int, int, int);
int FUN_0c045ff2(int);
int FUN_0c04607e(int);
int FUN_0c046134(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c086c1e(int, int, int, float);
int FUN_0c0a7984(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0c7354(int, float, float);
int FUN_0c0cddfa(int, int, float, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0dcc70(float, float, float);
int nlUnitMatrix(void);
int FUN_0c0e19f2(void);
int FUN_0c0e2a4c(int);
int FUN_0c0e5f1c(void);
int _quick_evn_mvn(void);
int FUN_0c0e62d4(int);
int FUN_0c0e62e0(int, int, int);
int FUN_0c22fa8e(int);
extern float _builtin_sqrtf(float);
int buFindFirstFile(int, int);
int buFindNextFile(int, int);
int kmiAddSysConfigFlag(int);
int kmiAllocSysConfig(int);
int kmiChkActiveListType(int, int, int, int, int);
int kmiCopyFromFrameBuffer(int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiCopyToPVRMemory(int, int, int);
int kmiFBalloc(int, int);
int kmiGetDisplayData(int, int, int);
int kmiGetNativeRegOBPSize(int);
int kmiGetPackOBPParam(int, int, int, int, int, int);
int kmiGetSysConfigFlag(void);
int kmiSetTAEnvironment(int, int, int, int, int);
int kmiTAallocEx(int, int, int);
int kmtex_GetTextureLevel(int, int);
int FUN_0c015b5c(int a4);
int FUN_0c035b26(int);
float FUN_0c037c66(int a4);
int FUN_0c06867a(int a4, int a5, int a6, int a7);
int kmCreateFrameBufferSurface(int a4, int a5, int a6, int a7, int a8);
int FUN_0c21b92e(int a4, int a5, int a6);
int FUN_0c07b3b0(int a4, int a5, int a6, int a7);
int FUN_0c0a5dfa(void);
int kmCreateTABuffer(int a4, int a5);
int FUN_0c21bc80(int a4, int a5, int a6);
int FUN_0c0ce2f8(int a4, int a5);
int FUN_0c055aee(int a4, int a5);
void FUN_0c030ec8(int a4);
int FUN_0c048610(int a4, int a5, int a6, int a7);
int FUN_0c04ea16(int a4, int a5);
void FUN_0c048f1a(int a4);
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o294_int { char p[0x294]; int v; };
struct o294_short { char p[0x294]; short v; };
struct o298_int { char p[0x298]; int v; };
struct o2A0_int { char p[0x2A0]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3B0_uint { char p[0x3B0]; unsigned int v; };
struct o3B4_int { char p[0x3B4]; int v; };
struct o3B4_uint { char p[0x3B4]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4D4_uint { char p[0x4D4]; unsigned int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o4FC_uint { char p[0x4FC]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o500_int { char p[0x500]; int v; };
struct o50C_int { char p[0x50C]; int v; };
struct o50C_uint { char p[0x50C]; unsigned int v; };
struct o510_int { char p[0x510]; int v; };
struct o524_int { char p[0x524]; int v; };
struct o524_uint { char p[0x524]; unsigned int v; };
struct o528_int { char p[0x528]; int v; };
struct o54C_int { char p[0x54C]; int v; };
struct o58_float { char p[0x58]; float v; };
struct o60_short { char p[0x60]; short v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o62_short { char p[0x62]; short v; };
struct o64_short { char p[0x64]; short v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o78_int { char p[0x78]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };



int FUN_0c015b5c(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t12;
    int t10;
    int t13;
    int t24;
    int t25;
    int t26;
    int t54;
    int t17;
    int t22;
    int t23;
    int t30;
    int t31;
    int stk[38];

    t0 = buFindFirstFile(a4, (((int)stk + 4) + 0x64));
    if (t0 != 0) {
        t54 = 0xFFFFFFFF;
    } else {
        t1 = 0x0;
        for (;;) {
            t2 = t1;
            t1 = (t1 + 0x2);
            *(unsigned short *)((((((int)stk + 4) + 0x14) + t2) + 0x0)) = 0xFFFFFFFF;
            *(unsigned short *)(((((int)stk + 4) + 0x3C) + t2)) = 0xFFFFFFFF;
            if ((unsigned int)t1 >= (unsigned int)0x28) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 8)) = 0xC1EF4A2;
        *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x64) + 0x9);
        t3 = t2;
        t4 = t0;
        t5 = 0x0;
        for (;;) {
            if (t4 != 0) {
                t22 = 0xFFFFFFFF; t23 = 0x28; break;
            }
            t4 = (((int)stk + 4) + 0x64);
            t3 = (FUN_0c0e62e0((*(int *)(((int)stk + 8))), t4, 0x9));
            if (t3 == 0) {
                t3 = (FUN_0c0e62d4((*(int *)(((int)stk + 4)))));
                t12 = t3;
                if (((int)t3 > 0) && ((int)t3 <= (int)0x14)) {
                    t10 = t3;
                    t3 = (t3 - 1);
                    t3 = (t3 << 1);
                    *(unsigned short *)(((((int)stk + 4) + 0x3C) + t3)) = 0x0;
                    t12 = t10;
                }
                if (((int)t12 >= (int)0x15) && ((int)t12 <= (int)0x3E7)) {
                    t13 = t5;
                    t5 = (t5 + 0x1);
                    *(unsigned short *)((((t13 << 1) + (((int)stk + 4) + 0x14)) + 0x0)) = t12;
                    if ((int)t5 < (int)0x14) {
                        t4 = (((int)stk + 4) + 0x64);
                        t3 = (buFindNextFile(a4, t4));
                        t4 = t3;
                        continue;
                    }
                    t17 = ((t13 << 1) + (((int)stk + 4) + 0x14)); break;
                }
                t4 = (((int)stk + 4) + 0x64);
                t3 = (buFindNextFile(a4, t4));
                t4 = t3;
                continue;
            }
            t4 = (((int)stk + 4) + 0x64);
            t3 = (buFindNextFile(a4, t4));
            t4 = t3;
        }
        *(unsigned int *)0xC1EF82C = 0x1;
        *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x14);
        *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x14);
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x14);
        *(unsigned int *)(((int)stk + 16)) = 0xC1EF4A2;
        *(unsigned int *)(((int)stk + 20)) = (((int)stk + 4) + 0x3C);
        t24 = t3;
        t25 = t17;
        t26 = 0x0;
        for (;;) {
            if (((unsigned int)(*(int *)(((int)stk + 4))) >= (unsigned int)(*(int *)(((int)stk + 20)))) || ((int)t26 >= (int)0x14)) {
                break;
            }
            for (;;) {
                t24 = t26;
                t24 = (t24 << 1);
                if ((int)(*(short *)(((((int)stk + 4) + 0x3C) + t24))) >= 0) {
                    t26 = (t26 + 0x1);
                    if ((int)t26 >= (int)0x14) {
                        break;
                    }
                    continue;
                }
                break;
            }
            if (((int)t26 < (int)0x14) && (t30 = *(int *)(((int)stk + 4)), t31 = *(short *)((t30 + 0x0)), (int)t31 >= 0)) {
                t24 = (((int (*)(int, int, int, int))(FUN_0c015436))(a4, ((*(short *)(((*(int *)(((int)stk + 12))) + 0x0))) + 0x5), t22, t23));
                for (;;) {
                    t24 = (FUN_0c0154c0(a4, 0x6, 0x2));
                    t24 = ((((struct o10_int *)0xC23EB0C)->v));
                    if (t24 == 9) {
                        break;
                    }
                }
                (((struct o0_uint *)0xC23EB0C)->v) = ((((struct o8_int *)0xC23EB0C)->v));
                t24 = (((int (*)(int, int))(FUN_0c015436))(a4, ((*(short *)(((*(int *)(((int)stk + 8))) + 0x0))) + 0x5)));
                for (;;) {
                    t24 = (FUN_0c0159a2(a4, (*(int *)(((int)stk + 16)))));
                    t24 = ((((struct o10_int *)0xC23EB0C)->v));
                    if (t24 == 9) {
                        break;
                    }
                }
                t24 = (((int (*)(int, int))(FUN_0c015436))(a4, (t26 + 0x6)));
                for (;;) {
                    t24 = (FUN_0c0156ea(a4, ((((struct o0_int *)0xC23EB0C)->v)), 0xE0, 0x6));
                    t24 = ((((struct o10_int *)0xC23EB0C)->v));
                    if (t24 == 9) {
                        break;
                    }
                }
                t24 = t26;
                t24 = (t24 << 1);
                *(unsigned short *)(((((int)stk + 4) + 0x3C) + t24)) = 0x0;
                t24 = (FUN_0c0e2a4c(((((struct o0_int *)0xC23EB0C)->v))));
                *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x2);
                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x2);
                t25 = (*(int *)(((int)stk + 4)));
                t25 = (t25 + 0x2);
                *(unsigned int *)(((int)stk + 4)) = t25;
                continue;
            }
            break;
        }
        *(unsigned int *)0xC1EF82C = 0x0;
        t54 = (((((int)t26 >= (int)0x14)) ? 1 : 0) ^ 0x1);
    }
    return t54;
}



int FUN_0c06867a(int a4, int a5, int a6, int a7)
{
    int t0;
    int t9;
    float u29;
    float u32;
    int t33;
    int t52;
    int t68;
    int stk[9];

    t0 = (((struct o80_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                } else {
                    (((struct o60_ushort *)(a4))->v) = (((((struct o60_short *)(a4))->v)) - 0x100);
                    (((struct o64_ushort *)(a4))->v) = (((((struct o64_short *)(a4))->v)) + 0x100);
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
                    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                    t9 = (((struct oA0_int *)(a4))->v);
                    (((struct oA0_uint *)(a4))->v) = (t9 - 1);
                    if ((int)(t9 - 1) <= 0) {
                        FUN_0c0e19f2();
                    }
                }
            } else {
                u29 = ((((struct o30_float *)(a4))->v));
                u29 = u29 + 0.00999999978f * (float)(((FUN_0c0da2e0()) & 0x1F) - 15);
                (((struct o30_float *)(a4))->v) = u29;
                u32 = ((((struct o38_float *)(a4))->v));
                u32 = u32 + 0.00999999978f * (float)(((FUN_0c0da2e0()) & 0x1F) - 15);
                (((struct o38_float *)(a4))->v) = u32;
                t33 = (((struct oA0_int *)(a4))->v);
                (((struct oA0_uint *)(a4))->v) = (t33 - 1);
                if ((int)(t33 - 1) <= 0) {
                    (((struct oA0_uint *)(a4))->v) = 0x32;
                    (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
                    _quick_evn_mvn();
                    *(float *)(((int)stk + 20)) = 16.0f;
                    FUN_0c086c1e(((int)stk + 8), 0x4, 0x96, 1.0f);
                }
            }
        } else {
            t52 = (((struct oA0_int *)(a4))->v);
            (((struct oA0_uint *)(a4))->v) = (t52 - 1);
            if ((int)(t52 - 1) > 0) {
            } else {
                (((struct oA0_uint *)(a4))->v) = 0xA;
                (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
            }
        }
    } else {
        (((struct oA0_uint *)(a4))->v) = 0x5A;
        (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        t68 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t68 - 1);
        if ((int)(t68 - 1) > 0) {
        } else {
            (((struct oA0_uint *)(a4))->v) = 0xA;
            (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAZ(((((struct o64_short *)(a4))->v)));
    nlRotateAY(((((struct o62_short *)(a4))->v)));
    nlRotateAX(((((struct o60_short *)(a4))->v)));
    FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
    return (nlPopMatrix(0x1));
}


int FUN_0c21b92e(int a4, int a5, int a6)
{
    int t0;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t30;
    int t31;
    int t32;
    int t33;
    int t43;
    int t44;
    int t45;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t70;
    int stk[16];
    int R1004;
    int R1008;
    int R1012;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1008 = a5;
    t0 = kmtex_GetTextureLevel(a6, a6);
    R1004 = (((int)stk + 4) + 0xC);
    if ((int)a6 <= (int)0x4) {
        R1004 = (((int)stk + 4) + 0xC);
        kmiCopyFromFrameBuffer((((int)stk + 4) + 0xC), (*(int *)((a4 + 0x1C))), 0x10);
        t3 = R1008;
        if (a6 == 1) {
            *(unsigned char *)(((((int)stk + 4) + 0xC) + 0x1)) = (*(signed char *)((t3 + 0x0)));
        } else {
            if (a6 == 2) {
                t5 = ((((int)stk + 4) + 0xC) + 0x2);
                t6 = t3;
                for (;;) {
                    t7 = *(signed char *)((t6 + 0x0));
                    t6 = (t6 + 0x1);
                    *(unsigned char *)((t5 + 0x0)) = t7;
                    t5 = (t5 + 0x1);
                    if ((unsigned int)t5 >= (unsigned int)((((int)stk + 4) + 0xC) + 0x4)) {
                        break;
                    }
                }
            } else {
                t8 = ((((int)stk + 4) + 0xC) + 0x4);
                t9 = t3;
                for (;;) {
                    t10 = *(signed char *)((t9 + 0x0));
                    t9 = (t9 + 0x1);
                    *(unsigned char *)((t8 + 0x0)) = t10;
                    t8 = (t8 + 0x1);
                    if ((unsigned int)t8 >= (unsigned int)((((int)stk + 4) + 0xC) + 0xC)) {
                        break;
                    }
                }
            }
        }
        R1008 = (*(int *)((a4 + 0x1C)));
        FUN_0c22fa8e((((int)stk + 4) + 0xC));
        FUN_0c22fa8e(((((int)stk + 4) + 0xC) + 0x20));
        t70 = (R1008);
    } else {
        R1004 = (((int)stk + 4) + 0xC);
        kmiCopyFromFrameBuffer((R1004), ((*(int *)((a4 + 0x1C))) + ((*(int *)((0xC23770C + (t0 << 2)))) - 12)), 0x10);
        t30 = ((((int)stk + 4) + 0xC) + 0xC);
        t31 = (R1008);
        for (;;) {
            t32 = *(signed char *)((t31 + 0x0));
            t31 = (t31 + 0x1);
            *(unsigned char *)((t30 + 0x0)) = t32;
            t30 = (t30 + 0x1);
            if ((unsigned int)t30 >= (unsigned int)((((int)stk + 4) + 0xC) + 0x10)) {
                break;
            }
        }
        R1004 = (((int)stk + 4) + 0xC);
        t33 = *(int *)((a4 + 0x1C));
        R1012 = t33;
        R1012 = (t33 + ((*(int *)((0xC23770C + (t0 << 2)))) - 12));
        FUN_0c22fa8e((R1004));
        FUN_0c22fa8e(((R1004) + 0x20));
        kmiCopyToFrameBuffer((R1012), (R1004), 0x10);
        R1004 = 0xC237738;
        if ((unsigned int)((*(int *)(((t0 << 2) + 0xC237738))) - 16) > (unsigned int)0x0) {
            t43 = *(int *)((0xC23770C + (t0 << 2)));
            t44 = R1008;
            t45 = *(int *)((a4 + 0x1C));
            R1012 = (t44 + 0x4);
            kmiCopyToFrameBuffer((t45 + (t43 + 0x4)), (t44 + 0x4), ((*(int *)(((t0 << 2) + (R1004)))) - 16));
        }
        R1004 = (((int)stk + 4) + 0xC);
        kmiCopyFromFrameBuffer((R1004), ((*(int *)((a4 + 0x1C))) + ((*(int *)((0xC23770C + ((t0 + 0x1) << 2)))) - 12)), 0x10);
        t59 = (((int)stk + 4) + 0xC);
        t60 = (((*(int *)(((t0 << 2) + 0xC237738))) + (R1008)) - 12);
        for (;;) {
            t61 = *(signed char *)((t60 + 0x0));
            t60 = (t60 + 0x1);
            *(unsigned char *)((t59 + 0x0)) = t61;
            t59 = (t59 + 0x1);
            if ((unsigned int)t59 >= (unsigned int)((((int)stk + 4) + 0xC) + 0xC)) {
                break;
            }
        }
        t62 = *(int *)((a4 + 0x1C));
        t63 = *(int *)((0xC23770C + ((t0 + 0x1) << 2)));
        FUN_0c22fa8e((((int)stk + 4) + 0xC));
        FUN_0c22fa8e(((((int)stk + 4) + 0xC) + 0x20));
        t70 = (t62 + (t63 - 12));
    }
    kmiCopyToFrameBuffer(t70, (((int)stk + 4) + 0xC), 0x10);
    return 0x0;
}

int FUN_0c07b3b0(int a4, int a5, int a6, int a7)
{
    int t1;
    float u49;
    int stk[9];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F15;
    int T_;
    R4 = a4;
    L_C07B3B0:;
    FUN_0c0685a4(R4, a5, a6, a7);
    t1 = (((struct o80_int *)(R4))->v);
    R0 = (t1);
    R13 = (0xC2007A0);
    R14 = (R4);
    R3 = (0xC23ED88);
    R4 = ((*(int *)0xC23ED88));
    F4 = ((1.0f + 1.0f));
    T_ = (((t1 == 0)));
    if ((t1 == 0)) goto L_C07B424;
    goto L_C07B3D8;
    L_C07B3D8:;
    if ((R0 == 1)) goto L_C07B430;
    goto L_C07B3DC;
    L_C07B3DC:;
    if ((R0 == 2)) goto L_C07B47C;
    goto L_C07B3E0;
    L_C07B3E0:;
    if ((R0 == 3)) goto L_C07B48E;
    goto L_C07B3E4;
    L_C07B3E4:;
    goto L_C07B4E0;
    L_C07B4E0:;
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o38_float *)(R14))->v)), 0.0f, 0.0f);
    FUN_0c0c465c((unsigned short)(*(short *)((R13 + 0x0))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o34_float *)(R14))->v)), 0.0f, 0.0f);
    FUN_0c0c465c((unsigned short)(*(short *)(((R13 + 0x2) + 0x0))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(R14))->v)), 0.0f, 0.0f);
    FUN_0c0c465c((unsigned short)(*(short *)((((R13 + 0x2) + 0x2) + 0x0))));
    return (nlPopMatrix(0x1));
    L_C07B48E:;
    (((struct o30_float *)(R14))->v) = (((((struct o30_float *)(R14))->v)) - (((((struct o90_float *)(R14))->v)) * F4));
    (((struct o34_float *)(R14))->v) = (((((struct o34_float *)(R14))->v)) - ((((struct o90_float *)(R14))->v)));
    if ((!(((((struct o90_float *)(R14))->v)) > 0.0f))) goto L_C07B4CA;
    goto L_C07B4BA;
    L_C07B4BA:;
    if ((!(((((struct o34_float *)(R14))->v)) > ((((struct o58_float *)(R14))->v))))) goto L_C07B4D6;
    goto L_C07B4C6;
    L_C07B4C6:;
    goto L_C07B4E0;
    L_C07B4D6:;
    (((struct o80_uint *)(R14))->v) = 0x4;
    goto L_C07B4E0;
    L_C07B4CA:;
    if ((((((struct o58_float *)(R14))->v)) > ((((struct o34_float *)(R14))->v)))) goto L_C07B4E0;
    goto L_C07B4D6;
    L_C07B47C:;
    if (((R4 & ((((struct o78_int *)(R14))->v))) != 0)) goto L_C07B4E0;
    goto L_C07B484;
    L_C07B484:;
    (((struct o80_uint *)(R14))->v) = (((((struct o80_int *)(R14))->v)) + 0x1);
    goto L_C07B4E0;
    L_C07B430:;
    u49 = ((((struct o30_float *)(R14))->v));
    u49 = u49 + F4 * ((((struct o90_float *)(R14))->v));
    (((struct o30_float *)(R14))->v) = u49;
    (((struct o34_float *)(R14))->v) = (((((struct o34_float *)(R14))->v)) + ((((struct o90_float *)(R14))->v)));
    if ((!(((((struct o90_float *)(R14))->v)) > 0.0f))) goto L_C07B46C;
    goto L_C07B45C;
    L_C07B45C:;
    if ((!(((((struct o58_float *)(R14))->v)) > ((((struct o34_float *)(R14))->v))))) goto L_C07B4D6;
    goto L_C07B468;
    L_C07B468:;
    goto L_C07B4E0;
    L_C07B46C:;
    if ((((((struct o34_float *)(R14))->v)) > ((((struct o58_float *)(R14))->v)))) goto L_C07B4E0;
    goto L_C07B478;
    L_C07B478:;
    goto L_C07B4D6;
    L_C07B424:;
    R0 = (0x78);
    goto L_C07B426;
    L_C07B426:;
    if (((R4 & (*(int *)((R14 + R0)))) != 0)) goto L_C07B484;
    goto L_C07B42C;
    L_C07B42C:;
    goto L_C07B4E0;
}


int kmCreateTABuffer(int a4, int a5)
{
    int t0;
    int t1;
    int t27;
    int t33;
    int t37;
    int stk[16];
    int R1020;
    int R1024;
    int R1028;
    int R1032;

    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);

    (((struct o0_uint *)0xC952940)->v) = 0x2;
    (((struct o0_uint *)0xC9528EC)->v) = a4;
    (((struct o4_uint *)0xC952940)->v) = a5;
    t0 = (((struct o0_int *)0xC239C6C)->v);
    *(unsigned int *)(((int)stk + 16)) = t0;
    if (t0 != 0x80000000) {
        t1 = (((struct o0_int *)0xC239C6C)->v);
        (((struct o0_uint *)0xC239C6C)->v) = (t1 | 0x100);
        if ((t1 | 0x100) == 0xB00) {
            (((struct o0_uint *)0xC239C6C)->v) = 0x80000000;
            return kmiAllocSysConfig(((((struct o0_int *)0xC952940)->v)));
        }
        return ((int)stk + 8);
    } else {
        (((struct o4_uint *)0xC239C6C)->v) = 0x1;
        (((struct o8_uint *)0xC952658)->v) = ((((struct o0_int *)0xC952658)->v));
        *(unsigned int *)(((((((struct o0_int *)0xC952658)->v)) << 2) + 0xC952648)) = 0x2;
        *(unsigned int *)0xC952508 = 0x0;
        (((struct o18_uint *)0xC952658)->v) = 0x1;
        R1020 = ((*(int *)((a4 + 0x10))) & 0x1);
        R1024 = (0x2 & (*(int *)((a4 + 0x10))));
        R1028 = ((*(int *)((a4 + 0x10))) & 0x4);
        R1032 = ((*(int *)((a4 + 0x10))) & 0x8);
        kmiChkActiveListType((R1020), (R1024), (R1028), (R1032), 0x0);
        t27 = kmiGetPackOBPParam((R1020), (R1024), (R1028), (R1032), 0x0, 0x1);
        kmiGetNativeRegOBPSize(t27);
        (((struct o4_uint *)0xC952940)->v) = ((unsigned int)((((struct o4_int *)0xC952940)->v)) >> 1);
        kmiGetDisplayData(0xFF, ((((struct o18_int *)0xC9528EC)->v)), ((((struct o24_int *)0xC9528EC)->v)));
        t33 = (((struct oC_int *)0xC952940)->v);
        if ((unsigned int)((((struct o4_int *)0xC952940)->v)) > (unsigned int)((-t33) + 0x200000)) {
            (((struct o4_uint *)0xC952940)->v) = ((-t33) + 0x200000);
        }
        t37 = kmiTAallocEx(((((struct o4_int *)0xC952940)->v)), 0xC9529CC, 0xC9529D0);
        if (t37 == 0) {
            *(unsigned int *)0xC952754 = ((((struct o4_int *)0xC952940)->v));
            kmiSetTAEnvironment(((unsigned int)((((struct o0_int *)0xC952368)->v)) >> 7), ((unsigned int)((((struct o4_int *)0xC952368)->v)) >> 7), ((unsigned int)((((struct o8_int *)0xC952368)->v)) >> 7), ((unsigned int)((((struct oC_int *)0xC952368)->v)) >> 7), (t27 & (~((((struct o18_int *)0xC9528EC)->v)))));
            *(unsigned int *)0xC952508 = 0x1;
        }
        return t37;
    }
}

int FUN_0c21bc80(int a4, int a5, int a6)
{
    int t0;
    int t4;
    int t6;
    int t7;
    int t8;
    int t20;
    int t21;
    int t22;
    int t31;
    int t32;
    int t33;
    int t46;
    int t47;
    int t48;
    int t54;
    int stk[15];

    *(unsigned int *)(((int)stk + 8)) = a5;
    t0 = kmtex_GetTextureLevel(a6, a6);
    if (a6 != 1) {
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
        if ((int)a6 <= (int)0x4) {
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
            kmiCopyFromFrameBuffer((*(int *)(((int)stk + 4))), ((*(int *)((a4 + 0x1C))) + 0x800), 0x10);
            t4 = *(int *)(((int)stk + 8));
            if (a6 == 2) {
                *(unsigned char *)(((((int)stk + 4) + 0x8) + 0x1)) = (*(signed char *)((t4 + 0x0)));
            } else {
                t6 = ((((int)stk + 4) + 0x8) + 0x2);
                t7 = t4;
                for (;;) {
                    t8 = *(signed char *)((t7 + 0x0));
                    t7 = (t7 + 0x1);
                    *(unsigned char *)((t6 + 0x0)) = t8;
                    t6 = (t6 + 0x1);
                    if ((unsigned int)t6 >= (unsigned int)((((int)stk + 4) + 0x8) + 0x6)) {
                        break;
                    }
                }
            }
            t54 = ((*(int *)((a4 + 0x1C))) + 0x800);
        } else {
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
            kmiCopyFromFrameBuffer((*(int *)(((int)stk + 4))), ((*(int *)((a4 + 0x1C))) + ((*(int *)((0xC237688 + ((t0 - 1) << 2)))) + 0x7FA)), 0x10);
            t20 = ((((int)stk + 4) + 0x8) + 0x6);
            t21 = (*(int *)(((int)stk + 8)));
            for (;;) {
                t22 = *(signed char *)((t21 + 0x0));
                t21 = (t21 + 0x1);
                *(unsigned char *)((t20 + 0x0)) = t22;
                t20 = (t20 + 0x1);
                if ((unsigned int)t20 >= (unsigned int)((((int)stk + 4) + 0x8) + 0x10)) {
                    break;
                }
            }
            *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x1C)));
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + ((*(int *)((0xC237688 + ((t0 - 1) << 2)))) + 0x7FA));
            FUN_0c22fa8e((((int)stk + 4) + 0x8));
            FUN_0c22fa8e(((((int)stk + 4) + 0x8) + 0x20));
            kmiCopyToFrameBuffer((*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x8), 0x10);
            if ((unsigned int)((*(int *)(((t0 << 2) + 0xC23765C))) - 16) > (unsigned int)0x0) {
                t31 = *(int *)((0xC237688 + ((t0 - 1) << 2)));
                t32 = *(int *)((a4 + 0x1C));
                t33 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 4)) = (t33 + 0xA);
                kmiCopyToFrameBuffer((t32 + (t31 + 0x80A)), (t33 + 0xA), ((*(int *)(((t0 << 2) + 0xC23765C))) - 16));
            }
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
            kmiCopyFromFrameBuffer((*(int *)(((int)stk + 4))), ((*(int *)((a4 + 0x1C))) + ((*(int *)((0xC237688 + (t0 << 2)))) + 0x7FA)), 0x10);
            t46 = (((int)stk + 4) + 0x8);
            t47 = (((*(int *)(((t0 << 2) + 0xC23765C))) + (*(int *)(((int)stk + 8)))) - 6);
            for (;;) {
                t48 = *(signed char *)((t47 + 0x0));
                t47 = (t47 + 0x1);
                *(unsigned char *)((t46 + 0x0)) = t48;
                t46 = (t46 + 0x1);
                if ((unsigned int)t46 >= (unsigned int)((((int)stk + 4) + 0x8) + 0x6)) {
                    break;
                }
            }
            t54 = ((*(int *)((a4 + 0x1C))) + ((*(int *)((0xC237688 + (t0 << 2)))) + 0x7FA));
        }
        FUN_0c22fa8e((((int)stk + 4) + 0x8));
        FUN_0c22fa8e(((((int)stk + 4) + 0x8) + 0x20));
        kmiCopyToFrameBuffer(t54, (((int)stk + 4) + 0x8), 0x10);
    }
    return 0x0;
}

int FUN_0c0ce2f8(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t39;
    int t77;

    t0 = (((struct o2C_int *)0xC5229FC)->v);
    t1 = (((struct o0_int *)0xC5229BC)->v);
    t2 = t1;
    if ((int)t1 > (int)t0) {
        t2 = t0;
    }
    t4 = (((struct o0_int *)0xC5229FC)->v);
    t5 = (((struct o30_int *)0xC5229FC)->v);
    if (a5 == 0) {
        if ((*(int *)((a4 + 0x98))) != 0) {
            if (((((struct oC_int *)0xC5229BC)->v)) == 2) {
                FUN_0c0c7354(((((struct o0_int *)0xC1EFA04)->v)), 40.0f, 32.0f);
            }
            if (((((struct o0_int *)0xC5229FC)->v)) == 1) {
                return (FUN_0c0c7354(((((struct o10_int *)0xC1EFA04)->v)), 40.0f, 49.0f));
            }
            FUN_0c0c7354(((((struct o14_int *)0xC1EFA04)->v)), 40.0f, 49.0f);
            return FUN_0c0cddfa(t2, 0x0, 180.0f, 49.0f);
        }
        t39 = t4;
        if (t4 != 1) {
            t39 = t5;
            if (t5 != 1) {
                FUN_0c0c7354(((((struct o18_int *)0xC1EFA04)->v)), 40.0f, 49.0f);
                t39 = (FUN_0c0c7354((*(int *)(((((((struct o30_int *)0xC5229FC)->v)) << 2) + 0xC1EFA24))), 50.0f, 49.0f));
            }
        }
        return t39;
    }
    if ((*(int *)((a4 + 0x98))) != 0) {
        if (((((struct o1C_int *)0xC5229BC)->v)) == 2) {
            FUN_0c0c7354(((((struct o0_int *)0xC1EFA04)->v)), 400.0f, 32.0f);
        }
        if (((((struct o0_int *)0xC5229FC)->v)) == 1) {
            return (FUN_0c0c7354(((((struct o10_int *)0xC1EFA04)->v)), 400.0f, 49.0f));
        }
        FUN_0c0c7354(((((struct o14_int *)0xC1EFA04)->v)), 400.0f, 49.0f);
        return FUN_0c0cddfa(t2, 0x0, ((((struct o0_float *)0xC0CE520)->v)), 49.0f);
    }
    t77 = t4;
    if (t4 != 1) {
        t77 = t5;
        if (t5 != 1) {
            FUN_0c0c7354(((((struct o18_int *)0xC1EFA04)->v)), 400.0f, 49.0f);
            t77 = (FUN_0c0c7354((*(int *)(((((((struct o30_int *)0xC5229FC)->v)) << 2) + 0xC1EFA24))), ((((struct o8_float *)0xC0CE520)->v)), 49.0f));
        }
    }
    return t77;
}



int FUN_0c048610(int a4, int a5, int a6, int a7)
{
    int t9;
    int t38;
    int stk[10];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C048610:;
    R13 = (0xC0222C0);
    R14 = (R4);
    if ((((((struct o4F8_int *)(R4))->v)) != 2)) goto L_C048688;
    goto L_C048624;
    L_C048624:;
    R0 = (0x500);
    if ((((((struct o500_int *)(R14))->v)) == 0)) goto L_C048688;
    goto L_C04862C;
    L_C04862C:;
    if (((*(int *)((R14 + R0))) == 1)) goto L_C048688;
    goto L_C048632;
    L_C048632:;
    t9 = (((struct o500_int *)(R14))->v);
    R0 = (t9);
    if ((t9 == 2)) goto L_C048652;
    goto L_C04863A;
    L_C04863A:;
    if ((R0 == 4)) goto L_C048656;
    goto L_C04863E;
    L_C04863E:;
    if ((R0 == 3)) goto L_C048660;
    goto L_C048642;
    L_C048642:;
    if ((R0 == 5)) goto L_C04866A;
    goto L_C048646;
    L_C048646:;
    if ((R0 == 6)) goto L_C048674;
    goto L_C04864A;
    L_C04864A:;
    if ((R0 == 10)) goto L_C04867E;
    goto L_C04864E;
    L_C04864E:;
    goto L_C04878E;
    L_C04878E:;
    return R0;
    L_C04867E:;
    R0 = ((FUN_0c04607e(R14)));
    goto L_C04878E;
    L_C048674:;
    R0 = ((FUN_0c045ff2(R14)));
    goto L_C04878E;
    L_C04866A:;
    R0 = ((FUN_0c02253c(R14)));
    goto L_C04878E;
    L_C048660:;
    R0 = ((FUN_0c02248a(R14)));
    goto L_C04878E;
    L_C048656:;
    R0 = ((FUN_0c0223fc(R14)));
    goto L_C04878E;
    L_C048652:;
    goto L_C04876A;
    L_C04876A:;
    R0 = ((FUN_0c0222c0(R14)));
    goto L_C04878E;
    L_C048688:;
    R0 = (0x50C);
    if ((((((struct o50C_int *)(R14))->v)) != 0)) goto L_C048694;
    goto L_C048690;
    L_C048690:;
    goto L_C04878E;
    L_C048694:;
    R0 = (0x524);
    if ((((((struct o524_int *)(R14))->v)) != 0)) goto L_C0486A0;
    goto L_C04869C;
    L_C04869C:;
    goto L_C04878E;
    L_C0486A0:;
    FUN_0c03442c(R14, (*(int *)(((((((struct o510_int *)(R14))->v)) << 2) + 0xC246FF0))), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0xC), (((int)stk + 12) + 0xC));
    t38 = *(int *)(((int)stk + 12));
    R0 = (t38);
    if ((t38 == 0)) goto L_C048708;
    goto L_C0486CC;
    L_C0486CC:;
    if ((R0 == 1)) goto L_C04873C;
    goto L_C0486D0;
    L_C0486D0:;
    if ((R0 == 2)) goto L_C04876A;
    goto L_C0486D4;
    L_C0486D4:;
    if ((R0 == 3)) goto L_C04875E;
    goto L_C0486D8;
    L_C0486D8:;
    goto L_C04878E;
    L_C04875E:;
    if (((int)((((struct o54C_int *)(R14))->v)) >= (int)((((struct o528_int *)(R14))->v)))) goto L_C048772;
    goto L_C04876A;
    L_C048772:;
    if (((int)((((struct o54C_int *)(R14))->v)) <= (int)((((struct o528_int *)(R14))->v)))) goto L_C048788;
    goto L_C04877E;
    L_C04877E:;
    R0 = ((FUN_0c02248a(R14)));
    goto L_C04878E;
    L_C048788:;
    R0 = ((FUN_0c04607e(R14)));
    goto L_C04878E;
    L_C04873C:;
    if (((int)((((struct o54C_int *)(R14))->v)) < (int)((((struct o528_int *)(R14))->v)))) goto L_C04876A;
    goto L_C048748;
    L_C048748:;
    if (((int)((((struct o54C_int *)(R14))->v)) > (int)((((struct o528_int *)(R14))->v)))) goto L_C04877E;
    goto L_C048754;
    L_C048754:;
    R0 = ((FUN_0c045ff2(R14)));
    goto L_C04878E;
    L_C048708:;
    if (((int)((((struct o54C_int *)(R14))->v)) < (int)((((struct o528_int *)(R14))->v)))) goto L_C04876A;
    goto L_C048714;
    L_C048714:;
    if (((int)((((struct o54C_int *)(R14))->v)) > (int)((((struct o528_int *)(R14))->v)))) goto L_C04877E;
    goto L_C048720;
    L_C048720:;
    if ((((*(int *)0xC23A258) & 1) != 0)) goto L_C048732;
    goto L_C048728;
    L_C048728:;
    R0 = ((FUN_0c0223fc(R14)));
    goto L_C04878E;
    L_C048732:;
    R0 = ((FUN_0c02253c(R14)));
    goto L_C04878E;
}

int FUN_0c04ea16(int a4, int a5)
{
    int t0;
    int t2;
    int t14;
    int t3;
    int t15;
    float u24;
    int t26;
    int t16;
    int t43;
    int t66;
    float u12;
    int t53;

    t0 = (((struct oBC_int *)(a4))->v);
    if (((((struct o3B0_int *)(a4))->v)) == 0) {
        t2 = *(int *)((((t0 << 1) << 2) + 0xC249880));
        t14 = 0;
        if (_builtin_fabsf((float)((((int)t2 > (int)0x32)) ? 1 : 0)) == 0.0f) {
            t3 = *(int *)((((t0 << 1) << 2) + 0xC249884));
            if (_builtin_fabsf((float)((((int)t3 > (int)0x32)) ? 1 : 0)) != 0.0f) {
                (((struct o3AC_uint *)(a4))->v) = (((((struct o3AC_int *)(a4))->v)) - 2);
                (((struct o3B0_uint *)(a4))->v) = 0x1;
            }
            u12 = _builtin_fabsf((float)((((int)t3 > (int)0x32)) ? 1 : 0));
            t14 = ((_builtin_fabsf((float)((((int)t3 > (int)0x32)) ? 1 : 0)) == 0.0f));
        } else {
            (((struct o3AC_uint *)(a4))->v) = (((((struct o3AC_int *)(a4))->v)) - 2);
            (((struct o3B0_uint *)(a4))->v) = 0x1;
            u12 = _builtin_fabsf((float)((((int)t2 > (int)0x32)) ? 1 : 0));
            t14 = (0);
        }
    } else {
        t15 = *(int *)((((t0 << 1) << 2) + 0xC249880));
        u24 = _builtin_fabsf((float)(((((int)t15 >= (int)0x10)) ? 1 : 0) ^ 0x1));
        t26 = 0;
        if (_builtin_fabsf((float)(((((int)t15 >= (int)0x10)) ? 1 : 0) ^ 0x1)) != 0.0f) {
            t16 = *(int *)((((t0 << 1) << 2) + 0xC249884));
            if (_builtin_fabsf((float)(((((int)t16 >= (int)0x10)) ? 1 : 0) ^ 0x1)) != 0.0f) {
                (((struct o3AC_uint *)(a4))->v) = (((((struct o3AC_int *)(a4))->v)) - 2);
                (((struct o3B0_uint *)(a4))->v) = 0x0;
            }
            u24 = _builtin_fabsf((float)(((((int)t16 >= (int)0x10)) ? 1 : 0) ^ 0x1));
            t26 = ((_builtin_fabsf((float)(((((int)t16 >= (int)0x10)) ? 1 : 0) ^ 0x1)) == 0.0f));
        } else {
            t26 = (1);
        }
    }
    if (((*(int *)((a5 + 0x0))) & 0x606) != 0) {
        (((struct o3B4_uint *)(a4))->v) = (((((struct o3B4_int *)(a4))->v)) | ((*(int *)((a5 + 0x0))) & 0x202));
        (((struct o3AC_uint *)(a4))->v) = (((((struct o3AC_int *)(a4))->v)) - 4);
    }
    t43 = (((struct o3AC_int *)(a4))->v);
    (((struct o3AC_uint *)(a4))->v) = (t43 - 1);
    t66 = 0x3AC;
    if ((int)(t43 - 1) <= 0) {
        if (((((struct o294_int *)(a4))->v)) != 0x10000) {
            t53 = ((((0x7 & ((((unsigned int)(unsigned short)((((struct o294_short *)(a4))->v)) >> 13) - ((((struct o298_int *)(a4))->v))) + 0x8)) >> 1) << 1) + (((((struct o2A0_int *)(a4))->v)) & 0x1));
        } else {
            t53 = (((((struct o2A0_int *)(a4))->v)) & 0x1);
        }
        if ((((((struct o3B4_int *)(a4))->v)) & 0x202) != 0) {
            (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((t53 << 1) + (*(int *)((0xC1FE2C0 + (((((struct oC0_int *)(a4))->v)) << 2)))))));
            (((struct o210_uint *)(a4))->v) = 0x23;
        } else {
            (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((t53 << 1) + 0xC0F7FAC)));
            (((struct o210_uint *)(a4))->v) = 0x22;
        }
        (((struct o2CC_uint *)(a4))->v) = 0x1;
        (((struct o3AC_uint *)(a4))->v) = 0x0;
        (((struct o3B0_uint *)(a4))->v) = 0x0;
        (((struct o3B4_uint *)(a4))->v) = 0x0;
        (((struct o20C_uint *)(a4))->v) = 0x8000;
        (((struct o1B0_uint *)(a4))->v) = 0x0;
        t66 = 0x1B0;
    }
    return t66;
}

void FUN_0c048f1a(int a4)
{
    int t0;
    int t2;

    (((struct o4FC_uint *)(a4))->v) = 0x0;
    (((struct o50C_uint *)(a4))->v) = 0x0;
    (((struct o524_uint *)(a4))->v) = 0x0;
    t0 = FUN_0c0236ce(a4);
    if (t0 == 0) {
        (((struct o4F8_uint *)(a4))->v) = 0x0;
        return;
    }
    t2 = (((struct o4F8_int *)(a4))->v);
    if ((unsigned int)t2 < (unsigned int)0xE) {
        switch ((t2 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                ((int (*)(int))(0xC048DD4))(a4);
    return;
            }
            case 4:
            {
                return;
            }
            case 6:
            {
                ((int (*)(int))(0xC048DD4))(a4);
    return;
            }
            case 8:
            {
                return;
            }
            case 10:
            {
                (((struct o4D4_uint *)(a4))->v) = (FUN_0c046134(a4));
                FUN_0c02a220(a4);
    return;
            }
            case 12:
            {
                return;
            }
            case 14:
            {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
                return;
            }
            case 16:
            {
                return;
            }
            case 18:
            {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
                return;
            }
            case 20:
            {
                return;
            }
            case 22:
            {
                ((int (*)(int))(0xC048DD4))(a4);
    return;
            }
            case 24:
            {
                return;
            }
            default:
            {
                (((struct o4F8_uint *)(a4))->v) = 0x0;
                return;
            }
        }
    }
}
