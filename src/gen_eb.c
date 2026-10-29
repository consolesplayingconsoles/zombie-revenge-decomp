/* Straight-line functions with calls and guards (batch gen_eb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ADXCRS_Lock(int, int);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(Stk4);
int ADXSTM_OpenRange(int, int, int);
int ADXSTM_Start(int);
int FUN_0c0236ce(int);
int FUN_0c02374e(int, int, int, int);
extern int FUN_0c02a19a();
int FUN_0c02a220(int);
int FUN_0c02eaee(int, float, float, float, float, float, float, float);
int FUN_0c02eeea(int);
int FUN_0c02f6f4(int, int, int, int, float, float, float);
int FUN_0c02fc26(int, float);
int FUN_0c030988(int, int, int, int, int, int, int, int);
int FUN_0c034314(int, int, int);
int FUN_0c03442c(int, int, int, int, int, int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c0353e4(int);
int FUN_0c035402(void);
int FUN_0c0355f8(int);
int FUN_0c04685c(int, int, float, float);
int FUN_0c046cc0(int);
int FUN_0c053cf0(int, int);
int FUN_0c053d60(int, int);
int FUN_0c0556ce(int, int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0845e8(int);
int FUN_0c0845f0(int);
int FUN_0c0845f8(int, int);
int FUN_0c084610(int, int);
int FUN_0c08467c(int, int);
int FUN_0c0846de(int, float, float, float, float);
int FUN_0c08476e(float, float, float);
int FUN_0c084ab8(int);
int FUN_0c084e08(int, int);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a7c66(int, int, int);
int FUN_0c0a8362(void);
int FUN_0c0bf940(int, int, int, int, int, int);
int FUN_0c0bfa90(void);
int FUN_0c0c0340(int, float);
int FUN_0c0c43dc(int, int);
int FUN_0c0c44d6(int, int, int);
int FUN_0c0c45d0(void);
int FUN_0c0c475c(int, float);
int FUN_0c0cacde(int, float, float);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d0648(void);
int FUN_0c0da2e0(void);
int FUN_0c0db0a0(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de9c0(Stk3);
int FUN_0c0e14c4(int);
extern int FUN_0c0e15d4();
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e2400(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c229058(int, int, int);
int FUN_0c22fa7e(int, int, int);
int FUN_0c232624(int, int, int);
int FUN_0c233dbc(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int fmMngBit2Num(int, int);
int fmcalccrc(int, int);
int gdFsClose(int);
int gdFsCreateHnG(int, int, int, int);
int kmSetPixelClipping(int, int, int, int);
int kmiDMAtoTARequest(int, int, int, int, int);
int kmiPurgeMemory(int, int);
int kmiWaitForFinishDMA(int);
int make_header(int, int);
int mpdrv_clear_deviceinfo(int);
int mpdrv_make_deviceinfo(int, int, int);
int nlMakeProjConvMat(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int FUN_0c08bd50(int a4, int a5);
int FUN_0c037954(int a4);
int FUN_0c030ad6(int a4);
int mpdrv_make_exdevicedata(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0470da(int a4, int a5, int a6, int a7);
int FUN_0c024776(int a4);
float FUN_0c0c8b94(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int gdFsReinitG(void);
int FUN_0c0ad61a(int a4, int a5, int a6, int a7);
int FUN_0c0a83f2(void);
int FUN_0c0b145c(int a4, float f4, float f5);
int FUN_0c229172(int a4);
void FUN_0c01632c(int a4, int a5, int a6, int a7);
float FUN_0c0277c4(int a4, float f4);
int FUN_0c031d18(int a4);
float FUN_0c036e18(int a4, int a5, int a6, float f4);
float FUN_0c046170(int a4, float f4);
int FUN_0c05816a(int a4, int a5);
int FUN_0c068424(void);
int FUN_0c0af9e8(int a4, int a5, int a6, int a7);
int FUN_0c0ddd20(float f4, float f5, float f6, float f7);
int kmiCopyToFrameBuffer(int a4, int a5, int a6);
int adxf_read_sj32(int a4, int a5, int a6);
int FUN_0c02ec56(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c031bf8(int a4);
int FUN_0c0e282a(int a4, int a5);
int FUN_0c0306bc(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c05a9ce(int a4, int a5);

int FUN_0c08bd50(int a4, int a5)
{
    int t0;
    int t1;
    int t10;
    int t12;
    float u15;
    int t19;
    int t22;
    int stk[17];

    t0 = *(int *)((a5 + 0xBC));
    t1 = *(int *)((a5 + 0x1C8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + (((t1 << 1) + t1) << 2))); }
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((a4 + 0x30))) - (*(float *)(((((int)stk + 4) + 0x8) + 0x0)))), ((*(float *)((a4 + 0x34))) - (*(float *)(((((int)stk + 4) + 0x8) + 0x4)))), ((*(float *)((a4 + 0x38))) - (*(float *)(((((int)stk + 4) + 0x8) + 0x8)))));
    nlPushMatrix(0x0);
    t10 = 0x28;
    for (;;) {
        t12 = FUN_0c0e19aa(0xC08BED4, 0x58, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t12);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t12 + 0x30)) = *(struct mv3 *)((((int)stk + 4) + 0x8)); }
        u15 = 0.599999964f;
        u15 = u15 + 6.10370189e-05f * (float)(FUN_0c0da2e0());
        *(float *)((t12 + 0x48)) = u15;
        *(unsigned int *)((t12 + 0x50)) = 0x291;
        *(unsigned int *)(((0x54 + t12) + 0x0)) = (((FUN_0c0da2e0()) & 0x7) + 0xA);
        *(float *)((t12 + 0x44)) = ((float)(((FUN_0c0da2e0()) & 0x1F) + 0x10) * 0.0399999991f);
        nlUnitMatrix();
        t19 = FUN_0c0da2e0();
        nlRotateAY((((t19 << 1) + (*(int *)(((int)stk + 8)))) - 32768));
        t22 = FUN_0c0da2e0();
        nlRotateAX((((t22 << 1) + (*(int *)(((int)stk + 4)))) - 32768));
        FUN_0c0db470((t12 + 0x3C), (t12 + 0x3C));
        t10 = (t10 - 0x1);
        if (t10 == 0) {
            break;
        }
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c037954(int a4)
{
    int stk[12];

    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
    nlRotateAY((*(int *)((a4 + 0x3E8))));
    nlRotateAZ((*(short *)((a4 + 0x70))));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    nlPushMatrix(0x0);
    nlMultiMatrix((0x2B0 + a4));
    FUN_0c0db840(((int)stk + 4));
    *(float *)(((0x370 + a4) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)(((0x374 + a4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)(((0x378 + a4) + 0x0)) = (*(float *)(((int)stk + 12)));
    FUN_0c0a7c66((0x394 + a4), ((0x394 + a4) + 0x4), ((0x394 + a4) + 0x8));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((0x2B0 + a4) + 0x40));
    FUN_0c0db840(((int)stk + 4));
    *(float *)(((0x37C + a4) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)(((0x380 + a4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)(((0x384 + a4) + 0x0)) = (*(float *)(((int)stk + 12)));
    FUN_0c0a7c66(((0x394 + a4) + 0xC), (((0x394 + a4) + 0xC) + 0x4), (((0x394 + a4) + 0xC) + 0x8));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((0x2B0 + a4) + 0x80));
    FUN_0c0db840(((int)stk + 4));
    *(float *)(((0x388 + a4) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)(((0x38C + a4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)(((0x390 + a4) + 0x0)) = (*(float *)(((int)stk + 12)));
    FUN_0c0a7c66(((0x394 + a4) + 0x18), (((0x394 + a4) + 0x18) + 0x4), (((0x394 + a4) + 0x18) + 0x8));
    nlPopMatrix(0x1);
    return (nlPopMatrix(0x1));
}

int FUN_0c030ad6(int a4)
{
    int t4;
    int t7;
    int t14;
    int t19;
    int t22;
    int t26;
    int t38;
    int t40;
    int t44;
    int t41;
    int stk[4];

    *(unsigned int *)((a4 + 0x4FC)) = 0x0;
    if (((*(int *)((a4 + 0x3B8))) & 1) != 0) {
        t4 = *(int *)((a4 + 0x4F8));
        if ((t4 != 6) && (t4 != 7)) {
            t7 = *(int *)((a4 + 0x4F8));
            if (t7 != 8) {
                if (t7 == 9) {
                    *(unsigned int *)((a4 + 0x4F8)) = 0xA;
                } else {
                    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                }
            } else {
                *(unsigned int *)((a4 + 0x4F8)) = 0xA;
            }
        } else {
            *(unsigned int *)((a4 + 0x4F8)) = 0x8;
        }
        t44 = 0x4F8;
    } else {
        t14 = FUN_0c02eeea(a4);
        if (t14 == 0) {
            t19 = *(int *)((a4 + 0x4F8));
            if ((t19 != 6) && (t19 != 7)) {
                t22 = *(int *)((a4 + 0x4F8));
                if ((t22 != 8) && (t22 != 9)) {
                    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                } else {
                    *(unsigned int *)((a4 + 0x4F8)) = 0xA;
                }
            } else {
                *(unsigned int *)((a4 + 0x4F8)) = 0x8;
            }
            t41 = 0x4F8;
        } else {
            t26 = *(int *)((a4 + 0x4F8));
            if ((unsigned int)t26 < (unsigned int)0xE) {
                switch ((t26 << 1)) {
                    case 0:
                    {
                    }
                        break;
                    case 2:
                    {
                        *(unsigned int *)((a4 + 0x554)) = 0x1;
                        FUN_0c030988(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
                    }
                        break;
                    case 4:
                    {
                    }
                        break;
                    case 6:
                    {
                        FUN_0c030988(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
                    }
                        break;
                    case 8:
                    {
                    }
                        break;
                    case 10:
                    {
                        FUN_0c02a220(a4);
                    }
                        break;
                    case 12:
                    {
                    }
                        break;
                    case 14:
                    {
                        *(unsigned int *)((a4 + 0x4F8)) = 0x8;
                    }
                        break;
                    case 16:
                    {
                    }
                        break;
                    case 18:
                    {
                        *(unsigned int *)((a4 + 0x4F8)) = 0xA;
                    }
                        break;
                    case 20:
                    {
                    }
                        break;
                    case 22:
                    {
                        FUN_0c030988(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
                    }
                        break;
                    case 24:
                    {
                    }
                        break;
                    default:
                    {
                        FUN_0c030988(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
                    }
                        break;
                }
            }
            t38 = *(int *)((a4 + 0x4F0));
            t40 = ((int (*)(int))((*(int *)(((((t38 << 2) + t38) << 2) + 0xC1F8E3C)))))(a4);
            *(unsigned int *)((a4 + 0x4FC)) = 0x0;
            t41 = 0x4FC;
        }
        t44 = t41;
    }
    return t44;
}

int mpdrv_make_exdevicedata(int a4, int a5, int a6, int a7, int a8)
{
    int t2;
    int t16;
    int t68;
    int t62;
    int t63;
    int t64;
    int stk[8];

    *(unsigned char *)(((int)stk + 4)) = a4;
    make_header(a7, a8);
    *(unsigned char *)((a7 + 0x2)) = 0x0;
    *(unsigned char *)((a7 + 0x3)) = 0x0;
    t2 = *(signed char *)(((int)stk + 4));
    if (((unsigned char)(*(signed char *)((a5 + 0x2))) & (unsigned char)t2) != 0) {
        *(unsigned char *)((a7 + 0x4)) = 0x1;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
        *(unsigned int *)((a7 + 0x24)) = ((*(int *)((a7 + 0x24))) + 0x1);
    }
    if (((unsigned char)(*(signed char *)((a5 + 0x3))) & (unsigned char)t2) != 0) {
        *(unsigned char *)((a7 + 0x4)) = 0x4;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
        *(unsigned char *)((a7 + 0x3)) = 0x1;
        *(unsigned int *)((a7 + 0x24)) = 0x0;
    }
    if (((unsigned char)(*(signed char *)((a5 + 0x0))) & (unsigned char)t2) != 0) {
        t16 = *(signed char *)((a7 + 0x7));
        if (t16 == 0) {
            if ((*(signed char *)((a7 + 0x0))) == 0) {
            } else {
                *(unsigned char *)((a7 + 0x4)) = 0x0;
            }
        } else {
            if ((unsigned char)t16 == 1) {
                if ((unsigned char)(*(signed char *)((a7 + 0x8))) == 5) {
                    *(unsigned char *)((a7 + 0x2)) = 0x1;
                    *(unsigned char *)((a7 + 0x0)) = 0x1;
                    *(unsigned char *)((a7 + 0x4)) = 0x0;
                } else {
                    *(unsigned int *)((a7 + 0x24)) = ((*(int *)((a7 + 0x24))) + 0x1);
                    if ((unsigned int)(*(int *)((a7 + 0x24))) <= (unsigned int)(*(int *)(((*(int *)0xC98E18C) + 0x10D8)))) {
                        *(unsigned char *)((a7 + 0x4)) = 0x1;
                    } else {
                        *(unsigned char *)((a7 + 0x0)) = 0x0;
                        *(unsigned char *)((a7 + 0x4)) = 0xFF;
                        *(unsigned int *)((a7 + 0x24)) = 0x0;
                    }
                }
            } else {
                if ((unsigned char)(*(signed char *)((a7 + 0x7))) == 4) {
                    *(unsigned char *)((a7 + 0x3)) = 0x1;
                    *(unsigned char *)((a7 + 0x0)) = 0x0;
                    *(unsigned char *)((a7 + 0x4)) = 0xFF;
                    *(unsigned int *)((a7 + 0x24)) = 0x0;
                } else {
                    if ((*(signed char *)((a7 + 0x7))) != 0) {
                        *(unsigned char *)((a7 + 0x4)) = 0x0;
                    }
                }
            }
        }
    } else {
        *(unsigned char *)((a7 + 0x4)) = 0xFF;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
    }
    if (((*(signed char *)((a7 + 0x0))) != 0) && ((t62 = *(signed char *)((a7 + 0x7)), t62 != 0) && (t63 = *(int *)0xC98E18C, t64 = *(int *)((0x10C4 + t63)), t64 == 1))) {
        t68 = *(int *)((a8 + 0x0));
        if ((t68 != -1) && (t68 != 0xFFFFFF00)) {
            FUN_0c233dbc(a8, ((unsigned char)(*(int *)((a8 + 0x0))) + 0x1));
        }
    }
    if ((*(signed char *)((a7 + 0x2))) != 0) {
        *(unsigned char *)((a6 + 0x10)) = 0x0;
        mpdrv_make_deviceinfo(a6, a7, a8);
    }
    if ((*(signed char *)((a7 + 0x3))) != 0) {
        *(unsigned char *)((a6 + 0x10)) = 0x0;
        mpdrv_clear_deviceinfo(a6);
    }
    return 0x0;
}

int FUN_0c0470da(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t5;
    int t29;
    int t30;
    int t45;
    int t26;
    int t24;
    int t42;
    int stk[12];

    t0 = *(int *)((a4 + 0x3A4));
    if (t0 != 0) {
        if (t0 != 1) {
            t2 = t0;
            if (t0 != 2) {
            } else {
                t2 = (FUN_0c02374e(a4, 0x1, a6, a7));
            }
            t26 = t2;
        } else {
            t5 = FUN_0c046cc0(a4);
            if (t5 == 0) {
                t24 = (FUN_0c02a19a(a4));
            } else {
                nlPushMatrix(0x0);
                nlUnitMatrix();
                nlRotateAY((*(short *)((a4 + 0x6E))));
                *(float *)(((int)stk + 20)) = 0.0f;
                *(float *)(((int)stk + 24)) = 0.0f;
                *(float *)(((int)stk + 28)) = (*(float *)0xC0472A0);
                FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
                *(float *)(((0x4B0 + a4) + 0x0)) = (*(float *)(((int)stk + 8)));
                *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((int)stk + 12)));
                *(float *)(((0x4B8 + a4) + 0x0)) = (*(float *)(((int)stk + 16)));
                nlPopMatrix(0x1);
                FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
                if ((int)(*(int *)((a4 + 0x54C))) <= (int)0x1) {
                    *(unsigned int *)((a4 + 0x3A4)) = ((*(int *)((a4 + 0x3A4))) + 0x1);
                }
                t24 = (FUN_0c04685c(a4, 0xA, 0.0f, 0.00999999978f));
            }
            t26 = t24;
        }
        t45 = t26;
    } else {
        t29 = FUN_0c046cc0(a4);
        if (t29 != 0) {
            t30 = *(int *)((a4 + 0x4F0));
            *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)(((*(int *)(((((t30 << 2) + t30) << 2) + 0xC1F8E44))) + 0x6)));
            if ((*(int *)((a4 + 0x2C4))) != (*(int *)((a4 + 0x2BC)))) {
                *(unsigned int *)((a4 + 0x2D4)) = 0x4;
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            }
            FUN_0c04685c(a4, 0xA, 0.0f, 0.00999999978f);
            *(unsigned int *)((a4 + 0x3A4)) = ((*(int *)((a4 + 0x3A4))) + 0x1);
            t42 = 0x3A4;
        } else {
            t42 = (FUN_0c02a19a(a4));
        }
        t45 = t42;
    }
    return t45;
}

int FUN_0c024776(int a4)
{
    int t4;
    int t16;
    int t20;
    int stk[11];

    *(unsigned int *)(((int)stk + 12)) = 0x0;
    if ((*(int *)((a4 + 0x5BC))) != 0) {
        *(unsigned int *)((a4 + 0x2C4)) = (*(int *)((a4 + 0x5BC)));
    } else {
        if ((*(int *)((a4 + 0x50C))) == 0) {
            t4 = FUN_0c0236ce(a4);
            if (t4 != 0) {
                FUN_0c03442c(a4, (*(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0))), (((int)stk + 4) + 0x8), (((int)stk + 4) + 0xC), (((int)stk + 8) + 0xC), (((int)stk + 12) + 0xC));
            }
        }
        if ((*(int *)(((int)stk + 12))) == 0) {
            t16 = *(int *)((a4 + 0x4F0));
            *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)((((((*(int *)((a4 + 0x2A0))) & 0x1) << 2) + ((*(int *)(((0xC1F8E3C + (((t16 << 2) + t16) << 2)) + 0x10))) + 0x122)) + 0x2)));
        } else {
            t20 = *(int *)((a4 + 0x4F0));
            *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)((((((*(int *)((a4 + 0x2A0))) & 0x1) << 2) + ((*(int *)(((0xC1F8E3C + (((t20 << 2) + t20) << 2)) + 0x10))) + 0x122)) + 0x0)));
        }
    }
    *(volatile int *)((a4 + 0x210));
    *(unsigned int *)((a4 + 0x20C)) = 0x20;
    *(unsigned int *)((a4 + 0x210)) = 0x0;
    *(unsigned int *)((a4 + 0x1B0)) = 0x0;
    *(unsigned int *)((a4 + 0x5BC)) = 0x0;
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x3AC)) = 0x0;
    *(unsigned int *)((a4 + 0x4C4)) = 0x5;
    *(unsigned int *)((a4 + 0x4C8)) = 0x8;
    *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
    return 0x4F8;
}


int gdFsReinitG(void)
{
    int t0;
    int t2;
    int t3;
    int t7;
    int t11;
    int t17;
    int t18;
    int t19;
    int t23;
    int t24;

    t0 = *(int *)0xC2393C4;
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    t2 = 0x0;
    t3 = (0x1080 + t0);
    for (;;) {
        if ((int)t2 >= (int)((*(int *)(((*(int *)0xC2393C4) + 0x0))) + 0x1)) {
            break;
        }
        gdFsClose(t3);
        t2 = (t2 + 0x1);
        t3 = (t3 + 0x54);
    }
    t7 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t11 = ((int (*)(int))((*(int *)(((*(int *)(((*(int *)0xC2393C4) + 0xC))) + 0x0)))))(t0);
    *(unsigned short *)(((*(int *)0xC2393C4) + 0x38)) = 0x0;
    *(unsigned int *)(((*(int *)0xC2393C4) + 0x20)) = 0x0;
    *(unsigned int *)(((*(int *)0xC2393C4) + 0x1C)) = 0x0;
    *(unsigned short *)(((*(int *)0xC2393C4) + 0x3A)) = 0x0;
    t17 = 0x3A;
    t18 = ((*(int *)0xC2393C4) + 0x1080);
    t19 = 0x0;
    for (;;) {
        if ((int)t19 >= (int)((*(int *)(((*(int *)0xC2393C4) + 0x0))) + 0x1)) {
            break;
        }
        t17 = 0x4C;
        *(unsigned short *)((t18 + t17)) = 0x0;
        t19 = (t19 + 0x1);
        *(unsigned int *)((t18 + 0x0)) = (*(int *)0xC2393C4);
        t18 = (t18 + 0x54);
    }
    t23 = *(int *)0xC2393C4;
    *(unsigned int *)((t23 + 0x14)) = (0x1080 + t23);
    t24 = *(int *)0xC2393C4;
    *(unsigned int *)((t24 + 0x18)) = ((0x1080 + t24) + 0x54);
    gdFsCreateHnG((*(int *)(((*(int *)0xC2393C4) + 0x14))), 0x0, 0x0, 0x0);
    _builtin_set_imask(((unsigned int)(((t7 & 0xF) << 2) << 2) >> 4));
    return ((int (*)(void))(0xC20F2C4))();
}

int FUN_0c0ad61a(int a4, int a5, int a6, int a7)
{
    float u1;
    float u5;
    float u13;
    int t14;

    FUN_0c0685a4(a4, a5, a6, a7);
    u1 = *(float *)0xC0AD744;
    *(float *)((a4 + 0x244)) = ((*(float *)((a4 + 0x244))) + u1);
    u5 = 0.0f;
    if (!(1.0f > (*(float *)((a4 + 0x244))))) {
        *(float *)((a4 + 0x244)) = ((*(float *)((a4 + 0x244))) - 1.0f);
        u5 = (-1.0f);
    }
    *(float *)((a4 + 0x23C)) = ((*(float *)((a4 + 0x23C))) + 0.00129999989f);
    if (!(1.0f > (*(float *)((a4 + 0x23C))))) {
        *(float *)((a4 + 0x23C)) = ((*(float *)((a4 + 0x23C))) - 1.0f);
    }
    u13 = *(float *)0xC0AD75C;
    t14 = 0xC10F398;
    for (;;) {
        if ((*(short *)((t14 + 0x2))) == 0) {
            break;
        }
        FUN_0c0cacde((unsigned short)(*(short *)((t14 + 0x2))), 0.0f, (*(float *)((a4 + 0x23C))));
        nlPushMatrix(0x0);
        FUN_0c0dcca0((t14 + 0x4));
        if ((*(short *)((t14 + 0x10))) != 0) {
            nlRotateAY((unsigned short)(*(short *)((t14 + 0x10))));
        }
        FUN_0c0c475c((unsigned short)(*(short *)((t14 + 0x2))), u13);
        nlPopMatrix(0x1);
        FUN_0c0cacde((unsigned short)(*(short *)((t14 + 0x2))), 0.0f, (-(*(float *)((a4 + 0x23C)))));
        t14 = (t14 + 0x14);
    }
    FUN_0c0cacde(0x788, 0.0f, (u5 + u1));
    FUN_0c0cacde(0xFE7, 0.0f, (u5 + u1));
    return (FUN_0c0cacde(0xFE9, 0.0f, (u5 + u1)));
}

int FUN_0c0a83f2(void)
{
    int stk[4];

    if (((*(short *)(((*(int *)0xC23ECFC) + 0x6))) & 8) != 0) {
        FUN_0c0bfa90();
    }
    if (((*(short *)(((*(int *)0xC23ECFC) + 0x4))) & 0x100) != 0) {
        FUN_0c0e2400(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        FUN_0c0c45d0();
    } else {
        FUN_0c0c43dc((*(int *)0xC23ED58), 0x0);
        if ((*(int *)0xC23EDE0) == 5) {
            FUN_0c0c44d6((*(int *)0xC23ED58), (*(int *)0xC23EDC0), (*(int *)0xC23EDD0));
        }
        if ((*(int *)0xC23EDE4) == 5) {
            FUN_0c0c44d6((*(int *)0xC23ED58), (*(int *)0xC23EDC4), (*(int *)0xC23EDD4));
        }
    }
    if (((*(short *)(((*(int *)0xC23ECFC) + 0x6))) & 8) != 0) {
        FUN_0c0bf940(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    }
    return FUN_0c0a8362();
}

int FUN_0c0b145c(int a4, float f4, float f5)
{
    int t0;
    int t3;
    int t5;
    int t6;
    int t7;
    float u8;
    float u9;
    float u10;
    int t11;
    int t24;
    int t4;
    int t12;
    int t15;
    int t16;
    int t19;
    float u20;
    float u21;
    float u22;
    int stk[20];

    t0 = *(int *)(((a4 << 2) + 0xC2024E0));
    if (t0 != 0) {
        *(float *)(((int)stk + 8)) = (float)(unsigned short)(*(short *)(((0xC111120 + (a4 << 2)) + 0x0)));
        *(float *)(((int)stk + 12)) = (float)(unsigned short)(*(short *)(((0xC111120 + (a4 << 2)) + 0x2)));
        *(float *)(((int)stk + 16)) = 0.00109999999f;
        *(float *)(((int)stk + 20)) = 0.599999964f;
        *(float *)(((int)stk + 24)) = 0.599999964f;
        *(float *)(((int)stk + 28)) = 0.0f;
        *(float *)(((int)stk + 32)) = 0.0f;
        *(float *)(((int)stk + 36)) = 1.0f;
        *(float *)(((int)stk + 40)) = 1.0f;
        *(unsigned int *)(((int)stk + 44)) = 0x0;
        *(unsigned int *)(((int)stk + 56)) = 0x1000;
        *(float *)(((int)stk + 48)) = f4;
        *(unsigned int *)(((int)stk + 52)) = 0xFFFFFFFF;
        t3 = 0xC0B14FC;
        t5 = 0x1000;
        t6 = (a4 << 2);
        t7 = t0;
        u8 = 0.00109999999f;
        u9 = f4;
        u10 = 1.0f;
        for (;;) {
            t11 = *(signed char *)((t7 + 0x0));
            t7 = (t7 + 0x1);
            if ((signed char)t11 == 0) {
                break;
            }
            t4 = (signed char)t11;
            t3 = t4;
            if ((t3 != 32) && ((t4 != 0) && (t12 = (t3 == 32), t3 = t4, t3 != 32))) {
                t3 = (signed char)t11;
                t3 = (t3 << 1);
                *(unsigned int *)(((int)stk + 4)) = (*(short *)((0xC1121DC + t3)));
                t3 = (FUN_0c0c0340(((int)stk + 4), u9));
            } else {
                t15 = t4;
                t16 = t5;
                t19 = t6;
                u20 = u8;
                u21 = u9;
                u22 = u10;
            }
            u8 = u20;
            u9 = u21;
            u10 = u22;
            t3 = 0x4;
            t4 = t15;
            t5 = t16;
            t6 = t19;
            u8 = (*(float *)((((int)stk + 4) + t3)));
            t3 = 0x4;
            u8 = (u8 + 11.0f);
            *(float *)((((int)stk + 4) + t3)) = u8;
        }
        t24 = t3;
    } else {
        t24 = 0xC2024E0;
    }
    return t24;
}

int FUN_0c229172(int a4)
{
    int t0;
    int t1;
    int t2;
    int t41;
    int t3;
    int t5;
    int t35;
    int t7;
    int t29;
    int t24;
    int t10;
    int t11;
    int t12;
    int t15;
    int t17;
    int t18;

    t0 = *(int *)((a4 + 0xC));
    t1 = *(int *)((a4 + 0x4));
    t2 = FUN_0c232624(t1, t0, 0x40);
    t41 = 0xFFFFFFFF;
    if (t2 != -1) {
        t3 = *(int *)((a4 + 0x14));
        t5 = FUN_0c232624((t1 + ((((t3 + 0x1) << 2) << 2) << 2)), (((((t3 + 0x1) << 2) << 2) << 2) + t0), ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2));
        t35 = 0xFFFFFFFF;
        if (t5 != -1) {
            t7 = fmMngBit2Num((((((t3 + 0x1) << 2) << 2) << 2) + t0), (*(int *)((a4 + 0x18))));
            *(unsigned int *)((a4 + 0x10)) = t7;
            t29 = 0xFFFFFFFA;
            if ((*(short *)((a4 + 0x2))) == 0) {
                t24 = 0x0;
                if ((int)t7 > 0) {
                    t10 = (t1 + 0x40);
                    t11 = t7;
                    for (;;) {
                        t12 = FUN_0c232624(t10, (a4 + 0x34), 0x40);
                        if (t12 == -1) {
                            break;
                        }
                        if ((unsigned short)(*(short *)(((a4 + 0x34) + 0x0))) != 0xFFFF) {
                            t15 = fmcalccrc(0x3E, (a4 + 0x34));
                            if (((unsigned short)(*(short *)(((a4 + 0x34) + 0x3E))) == (unsigned short)t15) && (t17 = *(short *)(((a4 + 0x34) + 0x0)), t18 = *(int *)((a4 + 0x14)), (int)(unsigned short)t17 < (int)t18)) {
                                FUN_0c229058((a4 + 0x34), ((((((unsigned short)(*(short *)(((a4 + 0x34) + 0x0))) + 0x1) << 2) << 2) << 2) + t0), 0x40);
                            }
                            t11 = (t11 - 1);
                            t10 = (t10 + 0x40);
                            if ((int)t11 <= 0) {
                                return 0x0;
                            }
                            continue;
                        }
                        return 0x0;
                    }
                    t24 = 0xFFFFFFFF;
                }
                t29 = t24;
            }
            t35 = t29;
        }
        t41 = t35;
    }
    return t41;
}

void FUN_0c01632c(int a4, int a5, int a6, int a7)
{
    int t2;
    int stk[3];

    if ((*(int *)0xC23EAFC) != 0) {
        t2 = *(int *)0xC2498F4;
        if ((0xC & t2) != 0) {
            FUN_0c0cc3f8(0x828A9, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        } else {
            if ((0xF0F0 & t2) != 0) {
                FUN_0c0cc3f8(0x29A9, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            } else {
                if ((t2 & 0x2) != 0) {
                    FUN_0c0cc3f8(0x28A9, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                }
            }
        }
    }
    *(unsigned int *)0xC23EAFC = 0x1;
}


int FUN_0c031d18(int a4)
{
    int t8;
    int t31;
    int t1;

    if ((((*(int *)((a4 + 0x534))) & 2) != 0) && (t1 = *(int *)((a4 + 0xCC)), (int)t1 >= 0)) {
        *(unsigned int *)(((*(int *)((((*(int *)((a4 + 0xCC))) << 2) + 0xC246FF0))) + 0xD0)) = 0xFFFFFFFF;
    }
    t8 = *(int *)((a4 + 0x2F4));
    if ((t8 & 0xFFF0) != 0) {
        if ((t8 & 0xFFF0) != 0x100) {
            if ((t8 & 0xFFF0) != 0x200) {
                FUN_0c0355f8(a4);
                *(unsigned int *)((a4 + 0x4C4)) = 0x0;
                *(unsigned int *)((a4 + 0x4CC)) = 0x0;
            } else {
                *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x8000);
                FUN_0c0353e4(a4);
                FUN_0c035402();
                *(unsigned int *)((a4 + 0x4C4)) = 0x4;
                *(unsigned int *)((a4 + 0x4CC)) = 0x1;
            }
        } else {
            *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x8000);
            *(unsigned int *)((a4 + 0x4C4)) = 0x0;
            *(unsigned int *)((a4 + 0x4CC)) = 0x0;
        }
    } else {
        FUN_0c0353e4(a4);
        FUN_0c035402();
        if ((int)(*(int *)((a4 + 0x2A0))) <= (int)0x1) {
            *(unsigned int *)((a4 + 0x2D4)) = 0x3;
        }
        *(unsigned int *)((a4 + 0x4C4)) = 0x0;
        *(unsigned int *)((a4 + 0x4CC)) = 0x0;
    }
    *(unsigned int *)((a4 + 0x534)) = 0x0;
    *(unsigned int *)((a4 + 0x1EC)) = 0xFFC;
    *(unsigned int *)((a4 + 0x1B0)) = 0x0;
    *(unsigned int *)((a4 + 0x55C)) = 0x0;
    *(unsigned int *)((a4 + 0xD8)) = 0x0;
    *(unsigned int *)((a4 + 0x1BC)) = 0x0;
    *(unsigned int *)((a4 + 0x20C)) = 0x1;
    t31 = 0x304;
    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        *(unsigned int *)((a4 + 0x4D0)) = 0x1;
        t31 = 0x4D0;
    }
    return t31;
}

float FUN_0c036e18(int a4, int a5, int a6, float f4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u8;
    float u9;
    int stk[19];

    u0 = *(float *)0xC037064;
    u1 = *(float *)((a4 + 0x4));
    u2 = *(float *)((a5 + 0x4));
    u3 = *(float *)((a5 + 0x0));
    u4 = *(float *)((a4 + 0x0));
    u5 = *(float *)((a5 + 0x8));
    u6 = *(float *)((a4 + 0x8));
    u8 = ((u1 - u2) * (u1 - u2));
    u8 = u8 + (u4 - u3) * (u4 - u3);
    u9 = u8;
    u9 = u9 + (u6 - u5) * (u6 - u5);
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((a4 + 0x0))) - (*(float *)((a5 + 0x0)))), ((*(float *)((a4 + 0x4))) - (*(float *)((a5 + 0x4)))), ((*(float *)((a4 + 0x8))) - u5));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = ((u0 * _builtin_sqrtf(u9)) / f4);
    FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)((((((int)stk + 4) + 0x20) + 0x4) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)((((((int)stk + 4) + 0x20) + 0x8) + 0x0)) = (*(float *)(((int)stk + 20)));
    nlPopMatrix(0x1);
    *(float *)((a6 + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x20) + 0x0))) / f4);
    *(float *)((a6 + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x20) + 0x4))) / f4);
    *(float *)((a6 + 0x8)) = ((*(float *)(((((int)stk + 4) + 0x20) + 0x8))) / f4);
    return _builtin_sqrtf(u9);
}


int FUN_0c05816a(int a4, int a5)
{
    int t0;
    int t28;
    int t1;
    int t9;
    int t21;

    t0 = FUN_0c0556ce(a5, 0x1, 0x0);
    t28 = 0xFFFFFFFF;
    if ((int)t0 < 0) {
    } else {
        t1 = *(int *)(((t0 << 2) + 0xC2475D4));
        *(unsigned int *)((a4 + 0x348)) = a5;
        *(unsigned int *)((a4 + 0x350)) = t0;
        *(unsigned int *)((a4 + 0x340)) = a5;
        if ((*(int *)((a4 + 0x330))) == 1) {
            *(unsigned int *)((a4 + 0x330)) = 0x3;
        } else {
            *(unsigned int *)((a4 + 0x330)) = 0x2;
        }
        *(unsigned int *)((a4 + 0x39C)) = ((*(int *)((a4 + 0x39C))) | (*(int *)(((0x22C + t1) + 0x0))));
        t9 = *(int *)(((0x344 + a4) + 0x0));
        *(unsigned int *)((a4 + 0x338)) = ((*(int *)((a4 + 0x338))) | (((int)t9 >= 0) ? (0x1 << (t9 & 31)) : ((-(int)t9 & 31) ? ((int)0x1 >> (-(int)t9 & 31)) : ((int)0x1 >> 31))));
        *(unsigned int *)((t1 + 0x23C)) = (*(int *)((a4 + 0xBC)));
        if (((*(int *)0xC23A1A8) & 0x100) == 0) {
            *(unsigned int *)(((0x21C + t1) + 0x0)) = (*(int *)(((a5 << 2) + 0xC1FF60C)));
        } else {
            *(unsigned int *)((t1 + 0x21C)) = (*(int *)((((a5 << 2) << 2) + 0xC20C0B8)));
        }
        if ((*(int *)(((a5 << 2) + 0xC1FF6D8))) != 0) {
            t21 = ((int (*)(int))((*(int *)(((a5 << 2) + 0xC1FF6D8)))))(a4);
        }
        t28 = t0;
    }
    return t28;
}

int FUN_0c068424(void)
{
    int t8;
    int t27;
    int t28;
    int stk[11];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0FA2B8); }
    FUN_0c0de9c0(*(Stk3 *)(((int)stk + 4)));
    FUN_0c0845e8(0x1);
    FUN_0c0845f0(0x1);
    FUN_0c08476e((*(float *)0xC068554), (*(float *)0xC068550), (*(float *)0xC06854C));
    t8 = FUN_0c0e19aa(0xC068508, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t8);
    *(unsigned int *)((t8 + 0x78)) = 0x0;
    *(float *)((t8 + 0x48)) = (*(float *)0xC06856C);
    *(float *)((t8 + 0x4C)) = (*(float *)0xC068570);
    *(float *)((t8 + 0x50)) = (*(float *)0xC068574);
    *(unsigned short *)((t8 + 0x60)) = 0xFFFF9100;
    *(unsigned short *)((t8 + 0x62)) = 0xFFFF9A00;
    FUN_0c084610(0x0, 0x2);
    FUN_0c0845f8(0x0, 0x1);
    FUN_0c0846de(0x0, 0.0f, (*(float *)((t8 + 0x48))), (*(float *)((t8 + 0x4C))), (*(float *)((t8 + 0x50))));
    FUN_0c0dc5a0();
    nlRotateAY((*(short *)((t8 + 0x62))));
    nlRotateAX((*(short *)((t8 + 0x60))));
    FUN_0c0db4d0(((int)stk + 4), (((int)stk + 4) + 0xC));
    nlPopMatrix(0x1);
    FUN_0c08467c(0x0, (((int)stk + 4) + 0xC));
    t27 = 0x1;
    for (;;) {
        t28 = FUN_0c0845f8(t27, 0x0);
        t27 = (t27 + 0x1);
        if ((int)t27 >= (int)0x10) {
            break;
        }
    }
    return t28;
}

int FUN_0c0af9e8(int a4, int a5, int a6, int a7)
{
    int t0;
    int t8;
    int t9;
    int t10;
    int t15;
    int t13;
    int t14;
    int t29;
    int t30;
    int t35;
    int t33;
    int t34;
    int t21;
    int t40;

    t0 = *(int *)0xC23A1A8;
    if ((0x1 & t0) != 0) {
        if ((t0 & 0x4) != 0) {
            FUN_0c0d0648();
        }
        if ((int)(*(int *)0xC24FA38) >= (int)0x23A) {
            t8 = *(int *)0xC23A1A8;
            *(unsigned int *)0xC23A1A8 = (t8 | 0x10);
            return (t8 | 0x10);
        }
        t9 = *(int *)((a4 + 0x30));
        t10 = *(int *)0xC24FA38;
        if (t9 != 0) {
            if (t9 != 1) {
                t21 = t9;
            } else {
                t15 = t9;
                if (t10 == 0xFB4) {
                    *(unsigned int *)((a4 + 0x30)) = 0x2;
                    t13 = ((int (*)(int))(FUN_0c0e15d4))((*(int *)0xC23ECE4));
                    t14 = FUN_0c0e14c4(0x0);
                    *(unsigned int *)0xC23ECE4 = t14;
                    t15 = t14;
                }
                t21 = t15;
            }
            return t21;
        }
        if (t10 == 0xF78) {
            *(unsigned int *)((a4 + 0x30)) = 0x1;
            FUN_0c084ab8((*(int *)0xC23ED50));
            return FUN_0c084e08(0x1E, 0x0);
        }
        return t9;
    }
    t29 = *(int *)((a4 + 0x30));
    t30 = *(int *)0xC24FA38;
    if (t29 != 0) {
        if (t29 != 1) {
            t40 = t29;
        } else {
            t35 = t29;
            if (t30 == 0xFB4) {
                *(unsigned int *)((a4 + 0x30)) = 0x2;
                t33 = ((int (*)(int, int, int, int))(FUN_0c0e15d4))((*(int *)0xC23ECE4), a5, a6, a7);
                t34 = FUN_0c0e14c4(0x0);
                *(unsigned int *)0xC23ECE4 = t34;
                t35 = t34;
            }
            t40 = t35;
        }
        return t40;
    }
    if (t30 == 0xF78) {
        *(unsigned int *)((a4 + 0x30)) = 0x1;
        FUN_0c084ab8((*(int *)0xC23ED50));
        return FUN_0c084e08(0x1E, 0x0);
    }
    return t29;
}

int FUN_0c0ddd20(float f4, float f5, float f6, float f7)
{
    float u7;
    float u8;
    float u9;

    *(float *)0xC948578 = f4;
    *(float *)0xC94857C = f5;
    *(float *)0xC948570 = f6;
    *(float *)0xC948574 = f7;
    *(float *)0xC20CE40 = f5;
    *(float *)0xC20CE38 = f7;
    if ((*(short *)0xC948282) != 0) {
        *(float *)0xC20CE3C = (f4 * (1.0f + 1.0f));
        *(float *)0xC20CE34 = (f6 * (1.0f + 1.0f));
    } else {
        *(float *)0xC20CE3C = f4;
        *(float *)0xC20CE34 = f6;
    }
    *(float *)0xC948568 = ((*(float *)0xC20CE34) * (*(float *)0xC20CE20));
    u7 = *(float *)0xC20CE38;
    u8 = *(float *)0xC20CE24;
    *(float *)0xC94856C = (u7 * u8);
    u9 = *(float *)0xC948568;
    if (u9 > (u7 * u8)) {
        *(float *)0xC20CE28 = u9;
    } else {
        *(float *)0xC20CE28 = (u7 * u8);
    }
    nlMakeProjConvMat(0xC9484E8);
    if ((*(int *)0xC943EA4) == 4) {
        return kmSetPixelClipping((int)f4, (int)f5, (int)(f4 + f6), (int)(f5 + f7));
    }
    return kmSetPixelClipping((int)f4, (int)f5, (int)((f4 + f6) + (-1.0f)), (int)((f5 + f7) + (-1.0f)));
}

int kmiCopyToFrameBuffer(int a4, int a5, int a6)
{
    int t2;
    int stk[11];

    if (((a4 & 0x1F) == 0) && (((a5 & 0x1F) == 0) && ((_builtin_get_imask()) == 0))) {
        kmiPurgeMemory(a5, a6);
        if ((0xFFFFFFE0 & a6) != 0) {
            for (;;) {
                t2 = kmiDMAtoTARequest((0x11000000 + a4), a5, (0xFFFFFFE0 & a6), 0x18, ((int)stk + 8));
                if (t2 != 0x100) {
                    break;
                }
            }
            *(unsigned int *)0xC952728 = (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)));
        } else {
            *(unsigned int *)0xC952728 = 0x0;
        }
        if ((a6 & 0x1F) != 0) {
            FUN_0c22fa7e((0xA4000000 + (a4 + (0xFFFFFFE0 & a6))), (a5 + (0xFFFFFFE0 & a6)), (a6 & 0x1F));
        }
        if ((*(int *)0xC95272C) == 1) {
            kmiWaitForFinishDMA((*(int *)0xC952728));
        }
    } else {
        FUN_0c22fa7e((0xA4000000 + a4), a5, a6);
    }
    return 0x1;
}

int adxf_read_sj32(int a4, int a5, int a6)
{
    int t38;
    int t19;
    int t20;
    int t21;
    int t26;
    int t31;
    int t59;
    int t52;
    int t45;
    int t35;
    int stk[6];

    *(unsigned int *)(((int)stk + 4)) = a6;
    if (a4 == 0) {
        ADXERR_CallErrFunc(*(Stk4 *)((int)stk + 4));
        t59 = 0xFFFFFFFD;
    } else {
        if ((int)a5 < 0) {
            ADXERR_CallErrFunc(*(Stk4 *)((int)stk + 4));
            t52 = 0xFFFFFFFD;
        } else {
            if ((*(int *)(((int)stk + 4))) == 0) {
                ADXERR_CallErrFunc(*(Stk4 *)((int)stk + 4));
                t45 = 0xFFFFFFFD;
            } else {
                t38 = 0x0;
                if ((*(signed char *)((a4 + 0x1))) == 2) {
                } else {
                    if ((*(int *)((a4 + 0x4))) != 0) {
                        ADXERR_CallErrFunc(*(Stk4 *)((int)stk + 4));
                        t35 = 0xFFFFFFFF;
                    } else {
                        ADXCRS_Lock(a4, a5);
                        *(unsigned int *)((a4 + 0x1C)) = ((*(int *)((a4 + 0xC))) + (*(int *)((a4 + 0x18))));
                        t19 = *(int *)((a4 + 0x10));
                        t20 = *(int *)((a4 + 0x18));
                        t21 = (t19 - t20);
                        if ((int)a5 < (int)(t19 - t20)) {
                            t21 = a5;
                        }
                        *(unsigned int *)((a4 + 0x20)) = t21;
                        *(unsigned int *)((a4 + 0x24)) = 0x0;
                        t26 = ADXSTM_OpenRange((*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x20))), (*(int *)(((int)stk + 4))));
                        t31 = 0xFFFFFFFF;
                        if (t26 == 0) {
                        } else {
                            *(unsigned int *)((a4 + 0x4)) = t26;
                            *(unsigned char *)((a4 + 0x1)) = 0x2;
                            ADXSTM_Start((*(int *)((a4 + 0x4))));
                            t31 = (*(int *)((a4 + 0x20)));
                        }
                        ADXCRS_Unlock();
                        t35 = t31;
                    }
                    t38 = t35;
                }
                t45 = t38;
            }
            t52 = t45;
        }
        t59 = t52;
    }
    return t59;
}

int FUN_0c02ec56(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int t1;
    int t2;
    int t3;
    int t30;
    int t24;
    int t19;

    if ((*(int *)((a4 + 0x330))) != 0) {
        *(unsigned int *)((a4 + 0x4F0)) = 0x19;
        *(unsigned int *)((a4 + 0x5CC)) = 0x0;
        *(unsigned int *)((a4 + 0x44C)) = 0x1;
        *(unsigned int *)((a4 + 0x508)) = 0x0;
        *(unsigned int *)((a4 + 0x4F4)) = 0x13;
        t30 = 0x4F4;
    } else {
        *(unsigned int *)((a4 + 0x5CC)) = 0x0;
        *(unsigned int *)((a4 + 0x44C)) = 0x0;
        t1 = FUN_0c02eaee(a4, f4, f5, f6, f7, f8, f9, f10);
        if ((int)t1 > 0) {
            t2 = *(int *)(((t1 << 2) + 0xC2475D4));
            *(unsigned int *)((a4 + 0x558)) = t1;
            *(unsigned int *)((a4 + 0x508)) = 0x1;
            *(unsigned int *)((a4 + 0x514)) = 0x1;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x518 + a4)) = *(struct mv3 *)((t2 + 0x30)); }
            *(unsigned int *)((a4 + 0x4F0)) = 0x18;
            *(unsigned int *)((a4 + 0x4F4)) = 0x17;
            t24 = 0x4F4;
        } else {
            *(unsigned int *)((a4 + 0x4F0)) = 0x18;
            *(unsigned int *)((a4 + 0x558)) = 0x0;
            *(unsigned int *)((a4 + 0x508)) = 0x0;
            t3 = *(int *)((a4 + 0x4D4));
            *(unsigned int *)((a4 + 0x4D4)) = (t3 - 1);
            if ((int)(t3 - 1) <= 0) {
                if ((int)(*(int *)((a4 + 0x54C))) < (int)(*(int *)((a4 + 0x528)))) {
                    if ((*(int *)((a4 + 0x4F4))) != 17) {
                        *(unsigned int *)((a4 + 0x4FC)) = 0x1;
                    }
                    t19 = 0x11;
                } else {
                    if ((*(int *)((a4 + 0x4F4))) != 18) {
                        *(unsigned int *)((a4 + 0x4FC)) = 0x1;
                    }
                    t19 = 0x12;
                }
                *(unsigned int *)((a4 + 0x4F4)) = t19;
                *(unsigned int *)((a4 + 0x4D4)) = 0x14;
            }
            t24 = 0x4D4;
        }
        t30 = t24;
    }
    return t30;
}

int FUN_0c031bf8(int a4)
{
    int t1;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u15;
    int t30;
    int stk[11];

    t1 = *(int *)((((*(int *)((a4 + 0xCC))) << 2) + 0xC246FF0));
    FUN_0c053cf0(t1, 0x1);
    FUN_0c053d60(a4, 0x1);
    FUN_0c0a68ec(((int)stk + 4), ((*(float *)((a4 + 0x30))) - (*(float *)((t1 + 0x30)))), ((*(float *)((a4 + 0x38))) - (*(float *)((t1 + 0x38)))));
    u9 = *(float *)((a4 + 0x30));
    u10 = *(float *)((t1 + 0x30));
    u11 = *(float *)((a4 + 0x38));
    u12 = *(float *)((t1 + 0x38));
    u13 = *(float *)((a4 + 0x550));
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x8);
    u15 = ((u11 - u12) * (u11 - u12));
    u15 = u15 + (u9 - u10) * (u9 - u10);
    FUN_0c0a6800((*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x8), 0.0f, 0.0f, ((_builtin_sqrtf(u15) - u13) * (*(float *)0xC031D10)));
    *(float *)((t1 + 0x48)) = ((*(float *)((t1 + 0x48))) + (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
    *(float *)((t1 + 0x50)) = ((*(float *)((t1 + 0x50))) + (*(float *)(((((int)stk + 4) + 0x10) + 0x0))));
    if (1.0f > (_builtin_sqrtf(u15) - u13)) {
        *(unsigned int *)((a4 + 0x210)) = 0x3E;
        *(float *)((t1 + 0x48)) = ((*(float *)((t1 + 0x48))) + (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
        *(float *)((t1 + 0x50)) = ((*(float *)((t1 + 0x50))) + (*(float *)(((((int)stk + 4) + 0x10) + 0x0))));
        FUN_0c053cf0(t1, 0x0);
        t30 = (FUN_0c053d60(a4, 0x0));
    } else {
        *(unsigned int *)((a4 + 0x2B4)) = 0x0;
        *(unsigned int *)((t1 + 0x2B4)) = 0x0;
        t30 = 0x2B4;
    }
    return t30;
}

int FUN_0c0e282a(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t17;
    int t27;

    t0 = 0xC52315C;
    t1 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        t4 = (t4 + 0x1);
        t0 = ((*(int *)((t0 + 0x8))) << 2);
        t0 = (t0 + 0xC52315C);
        t6 = *(int *)((t0 + 0x0));
        t2 = (t2 - t6);
        if ((int)t3 > (int)t6) {
            t3 = (*(int *)((t0 + 0x0)));
            t1 = t4;
        }
        if ((*(int *)((t0 + 0x8))) == 0) {
            break;
        }
    }
    FUN_0c0db0a0(a4, a5);
    nlPrintf(0xC1EA9D4, ((*(int *)0xC94C7A0)));
    nlPrintf(0xC1EA9E8, ((*(int *)0xC94C79C)));
    t17 = *(int *)0xC94C7F0;
    if (t2 == t17) {
        nlPrintf(0xC1EA9FC, (t17 << 2));
    } else {
        nlPrintf(0xC1EAA10, (t2 << 2), (t17 << 2));
    }
    nlPrintf(0xC1EAA20, (-(t3 << 2)));
    nlPrintf(0xC1EAA34, (-((*(int *)((0xC52315C + ((*(int *)0xC523164) << 2)))) << 2)));
    t27 = *(int *)0xC94C7EC;
    if (t4 == t27) {
        nlPrintf(0xC1EAA48, (t27));
    } else {
        nlPrintf(0xC1EAA10, (t4), (t27));
    }
    return (nlPrintf(0xC1EAA5C, (t1)));
}

int FUN_0c0306bc(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int t0;
    int t24;
    int t7;
    int t21;
    int t9;
    int t27;
    int t58;
    int t28;
    int t29;
    int t41;
    int t37;
    int t39;
    int t69;
    int t71;
    int t73;
    int t63;
    int t53;
    int t47;
    int stk[4];

    t0 = *(int *)((a4 + 0x4E8));
    if (t0 != 2) {
        if (t0 != 1) {
            t24 = t0;
            if (t0 != 0) {
            } else {
                t7 = *(int *)((a4 + 0x2EC));
                t21 = t7;
                if ((t7 & 12) != 0) {
                    t9 = *(int *)((a4 + 0x500));
                    if (t9 != 7) {
                        if (t9 != 11) {
                        } else {
                            *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0xC000);
                        }
                    } else {
                        *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x4000);
                    }
                    t21 = (((int (*)(int, int, int, int))(FUN_0c02a19a))(a4, a5, a6, a7));
                }
                t24 = t21;
            }
            t63 = t24;
        } else {
            t27 = FUN_0c02f6f4(a4, a5, a6, a7, f4, f5, f6);
            t58 = t27;
            if (t27 == 0) {
                t28 = FUN_0c034fbc(a4, 0x400, 0x1, 0x0);
                if (t28 != 0) {
                    t29 = *(int *)((a4 + 0x3AC));
                    *(unsigned int *)((a4 + 0x3AC)) = (t29 + 0x1);
                    if ((int)(t29 + 0x1) <= (int)(*(int *)((a4 + 0x3B0)))) {
                        t41 = 0x54C;
                        if ((int)(*(int *)((a4 + 0x54C))) >= (int)(*(int *)((a4 + 0x528)))) {
                            t37 = FUN_0c034314(a4, (*(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0))), ((int)stk + 4));
                            t39 = t37;
                            if (t37 != 0) {
                                t39 = (((int (*)(int))(FUN_0c02a19a))(a4));
                            }
                            t41 = t39;
                        }
                        t47 = t41;
                    } else {
                        t47 = (((int (*)(int))(FUN_0c02a19a))(a4));
                    }
                    t53 = t47;
                } else {
                    t53 = (((int (*)(int))(FUN_0c02a19a))(a4));
                }
                t58 = t53;
            }
            t63 = t58;
        }
        t73 = t63;
    } else {
        t69 = FUN_0c02fc26(a4, f4);
        t71 = t69;
        if (t69 == 0) {
            *(unsigned int *)((a4 + 0x508)) = 0x0;
            t71 = (((int (*)(int))(FUN_0c02a19a))(a4));
        }
        t73 = t71;
    }
    return t73;
}

int FUN_0c05a9ce(int a4, int a5)
{
    int t1;
    int t8;
    int t17;
    int t18;
    int t19;
    int t22;
    int t20;

    t1 = FUN_0c0e19aa(0xC05AC0C, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    t8 = 0x0;
    if ((*(signed char *)((a5 + 0x4))) != 0) {
        t8 = (*(int *)((a4 + 0x1EC)));
    }
    *(unsigned int *)((t1 + 0x1EC)) = t8;
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = ((unsigned short)(*(short *)((a5 + 0x8))) << 1);
    *(unsigned int *)((t1 + 0x23C)) = 0x1;
    t17 = *(int *)((a4 + 0xBC));
    t18 = *(int *)((a4 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((((((((t17 << 1) + t17) << 2) << 2) << 2) + 0xC23F268) + (((t18 << 1) + t18) << 2))); }
    t19 = *(int *)((a4 + 0xBC));
    t22 = t19;
    if ((int)t19 < (int)0x2) {
        t20 = *(int *)((a4 + 0xBC));
        *(unsigned int *)(((((t20 << 2) << 2) << 1) + 0xC24754C)) = ((*(int *)(((((t20 << 2) << 2) << 1) + 0xC24754C))) + 0x1);
        t22 = 0xC24754C;
    }
    return t22;
}
