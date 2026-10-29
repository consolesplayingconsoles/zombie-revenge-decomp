/* Straight-line functions with calls and guards (batch gen_a): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c021fee(int, int);
int FUN_0c02a19a(int);
int FUN_0c02eaee(int, float, float, float, float, float, float, float);
int FUN_0c036806(int, int, int, int);
int FUN_0c082f04(int, int, float);
int FUN_0c083074(int, int, int, int, int);
int FUN_0c098c2e(int, int, float, float);
int FUN_0c098cfa(int, int, int, int, float, float);
int FUN_0c0a6610(int, int, int);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a7ed4(int, int, int, int);
int FUN_0c0c0340(int, float);
int FUN_0c0c4784(int, float);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0dc5a0(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcc80(int);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int nlAddVector(int, int);
int nlOuterProduct(int, int, int);
int nlScaleUnitVector(int, int, float);
int FUN_0c0dce80(int, int, float);
int nlSubVector3op(int, int, int);
int FUN_0c0dd050(int);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e262a(int);
int FUN_0c0e5f1c(int);
int _quick_odd_mvn(int, int);
int _slow_strcpy(void);
int FUN_0c0e631c(int, int, int);
int FUN_0c0f3ccc(int, int, int);
int FUN_0c0f3fe0(int, int);
int FUN_0c229058(int, int, int);
int fmMngNum2Bit(int, int, int);
int FUN_0c232638(int, int, int);
extern float _builtin_sqrtf(float);
int buCalcBackupFileSize(int, int, int);
int buIsFormat(int);
int buMakeBackupFileImage(int, int);
int check_isopen(void);
int direntry(int, int);
int fmcalccrc(int, int);
int get_vmstime(int, int);
int kmiReadRegister(int);
int memset(int, int, int);
int search_dir(int, int, int);
int thunk_FUN_0c0546fe(int, int, int, int);
int thunk_FUN_0c22907e(void);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int FUN_0c01536e(int a4, int a5, int a6, int a7);
int FUN_0c02ec56(int a4, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
float FUN_0c038ed4(int a4, float f4);
int FUN_0c0832f0(int a4);
int FUN_0c08d90a(int a4, float f4);
int FUN_0c08f638(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c0f3e20(int a4, int a5, int a6);
int fmMngAddData(int a4);
int ADX_DecodeInfoSpsd(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
int FUN_0c02a0a8(int a4);
int FUN_0c02ee08(int a4);
int FUN_0c034924(int a4, int a5);
int FUN_0c06ccb8(int a4);
int FUN_0c0b2126(int a4);
int FUN_0c0b4404(int a4);
int FUN_0c0c6798(int a4, int a5, int a6);
float FUN_0c0caf6a(int a4, int a5, int a6, float f4);
int FUN_0c0cd56c(int a4, float f4, float f5);
int FUN_0c0cf4c4(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7, float f8);
int FUN_0c0d36e0(int a4, float f4);
int vmsfs_findnext(int a4, int a5, int a6, int a7);
int vmsfs_fgettime(int a4, int a5, int a6);
int syG2DmaReset(int a4);
int FUN_0c053700(int a4);
int FUN_0c09363c(int a4, int a5);
int FUN_0c0a155c(int a4, int a5, int a6, int a7);
int FUN_0c0b1542(int a4, float f4);
int FUN_0c0dbbf0(int a4, int a5, int a6);
int kmGetCurrentScanline(int a4);
int FUN_0c217a50(void);
int FUN_0c0220dc(int a4, int a5, int a6, int a7);



float FUN_0c038ed4(int a4, float f4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u5;
    float u8;
    int t10;
    float t18;
    float u21;
    float u25;
    int stk[13];

    *(float *)(((int)stk + 4)) = f4;
    u0 = *(float *)0xC039010;
    u1 = *(float *)((a4 + 0x1D4));
    u2 = *(float *)0xC039014;
    u3 = (u1 * u0);
    if ((u1 * u0) > u2) {
        u3 = u2;
    }
    *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0x10) + 0x4)) = 0.0f;
    u5 = *(float *)0xC039018;
    u8 = ((float)(*(int *)((a4 + 0x1CC))) * (*(float *)0xC03901C));
    u8 = u8 + u5 * u3;
    *(float *)(((((int)stk + 4) + 0x10) + 0x8)) = u8;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = ((*(int *)((a4 + 0x1D8))) >> 1);
    t10 = *(int *)((a4 + 0x500));
    if ((t10 != 14) && (t10 != 15)) {
        *(unsigned int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0)) = (*(int *)((a4 + 0x1DC)));
    } else {
        *(unsigned int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0)) = (*(int *)((a4 + 0x52C)));
    }
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = 0x0;
    FUN_0c0a6610((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4), (0x258 + a4));
    t18 = FUN_0c0da410((*(int *)((a4 + 0x1D8))));
    u21 = t18;
    if (0.0f > t18) {
        u21 = (*(float *)0xC039028);
    }
    u25 = u5;
    u25 = u25 + u3 * u21;
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + (*(float *)(((0x3E8 + a4) + 0x0))));
    *(float *)((a4 + 0x26C)) = (u25 * (*(float *)(((int)stk + 4))));
    return u3;
}

int FUN_0c0832f0(int a4)
{
    int t1;
    int t26;
    int stk[12];

    t1 = *(int *)((((unsigned char)(*(signed char *)0xC247CB8) << 2) + 0xC246FF0));
    *(float *)0xC2009A8 = (*(float *)0xC247CC0);
    FUN_0c0dc5a0();
    FUN_0c0dcca0((0x22C + t1));
    nlRotateAY((*(short *)0xC247CCA));
    nlRotateAX((*(short *)0xC247CC8));
    FUN_0c0db470(0xC2009A0, ((int)stk + 16));
    nlPopMatrix(0x1);
    FUN_0c082f04(a4, 0x3, (*(float *)((t1 + 0x22C))));
    FUN_0c082f04(a4, 0x4, (*(float *)((t1 + 0x230))));
    FUN_0c082f04(a4, 0x5, (*(float *)((t1 + 0x234))));
    FUN_0c083074(a4, 0x3, (0x22C + t1), 0x3, 0x0);
    FUN_0c083074(a4, 0x4, (0x230 + t1), 0x3, 0x0);
    FUN_0c083074(a4, 0x5, (0x234 + t1), 0x3, 0x0);
    FUN_0c082f04(a4, 0x0, (*(float *)(((int)stk + 16))));
    FUN_0c082f04(a4, 0x1, (*(float *)(((int)stk + 20))));
    FUN_0c082f04(a4, 0x2, (*(float *)(((int)stk + 24))));
    t26 = *(short *)0xC247CBE;
    *(unsigned short *)0xC10290C = t26;
    return t26;
}

int FUN_0c08d90a(int a4, float f4)
{
    int t1;
    float u4;
    float u6;
    float u8;
    int t14;

    t1 = FUN_0c0e19aa(0xC08DA10, 0x7C, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(float *)((t1 + 0x64)) = f4;
    u4 = 0.00999999978f;
    u4 = u4 + 3.05185068e-07f * (float)(FUN_0c0da2e0());
    *(float *)((t1 + 0x40)) = u4;
    u6 = 0.00999999978f;
    u6 = u6 + 3.05185068e-07f * (float)(FUN_0c0da2e0());
    *(float *)((t1 + 0x44)) = u6;
    u8 = 0.00999999978f;
    u8 = u8 + 3.05185068e-07f * (float)(FUN_0c0da2e0());
    *(float *)((t1 + 0x48)) = u8;
    *(unsigned int *)((t1 + 0x74)) = (unsigned short)(*(short *)((0xC10ABD0 + (((FUN_0c0da2e0()) & 0x1) << 1))));
    *(unsigned int *)((t1 + 0x78)) = 0x3;
    *(unsigned int *)((t1 + 0x30)) = (*(int *)0xC248DC0);
    *(unsigned int *)0xC248DC0 = t1;
    FUN_0c0dc5a0();
    FUN_0c0dcca0(a4);
    t14 = FUN_0c0da2e0();
    nlRotateAY((t14 << 1));
    *(float *)((t1 + 0x3C)) = (((f4 * (float)(FUN_0c0da2e0()))) * 3.05185094e-05f);
    FUN_0c0db470((t1 + 0x34), (t1 + 0x34));
    return nlPopMatrix(0x1);
}

int FUN_0c08f638(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC08F844, 0x70, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x30)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t1 + 0x34)) = (*(int *)((a4 + 0x498)));
    *(unsigned int *)((t1 + 0x38)) = 0x0;
    *(float *)((t1 + 0x3C)) = (((f4 * f6) / (float)a6) / (float)a6);
    *(float *)((t1 + 0x44)) = (((f4 * f7) / (float)a6) / (float)a6);
    *(float *)((t1 + 0x40)) = ((((f8 / (float)a6) / (float)a6) / (float)a6) / (float)a6);
    *(float *)((t1 + 0x48)) = ((f5 * f6) / (float)a6);
    *(float *)((t1 + 0x4C)) = ((f5 * f7) / (float)a6);
    *(float *)((t1 + 0x50)) = (((f8 / (float)a7) / (float)a7) / (float)a7);
    *(unsigned int *)((t1 + 0x60)) = 0x0;
    *(unsigned int *)(((t1 + 0x64) + 0x0)) = a6;
    *(unsigned int *)((t1 + 0x68)) = a7;
    *(unsigned int *)((t1 + 0x6C)) = a5;
    return 0x6C;
}

int FUN_0c0f3e20(int a4, int a5, int a6)
{
    int t1;
    int t15;
    int t6;
    int t7;
    int t2;
    int t13;
    int stk[16];

    *(unsigned int *)(((int)stk + 8)) = a4;
    memset(a6, 0x0, 0x10);
    t1 = 0x7;
    for (;;) {
        t15 = (short)t1;
        if ((unsigned char)(*(signed char *)((a5 + (short)t1))) != 0) {
            memset((((int)stk + 4) + 0x8), 0x0, 0x10);
            t2 = 0x7;
            for (;;) {
                t6 = *(signed char *)(((short)t2 + (*(int *)(((int)stk + 8)))));
                t7 = *(signed char *)(((short)t1 + a5));
                *(unsigned short *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((((short)t1 + (short)t2) + (((int)stk + 4) + 0x8)) + 0x1)));
                *(unsigned short *)(((int)stk + 4)) = ((*(short *)(((int)stk + 4))) + ((unsigned short)(unsigned char)t6 * (unsigned short)(unsigned char)t7));
                FUN_0c0f3fe0((((short)t1 + (short)t2) + (((int)stk + 4) + 0x8)), ((int)stk + 4));
                t2 = (t2 - 1);
                if ((int)(short)t2 < 0) {
                    break;
                }
            }
            if ((short)t1 == 7) {
                t13 = (FUN_0c0e631c(((short)t1 + a6), ((short)t1 + (((int)stk + 4) + 0x8)), 0x9));
            } else {
                t13 = (FUN_0c0f3ccc(((short)t1 + a6), ((short)t1 + (((int)stk + 4) + 0x8)), 0x9));
            }
            t15 = t13;
        }
        t1 = (t1 - 1);
        if ((int)(short)t1 < 0) {
            break;
        }
    }
    return t15;
}


int ADX_DecodeInfoSpsd(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
{
    int t4;
    int t14;
    int t21;
    int stk[9];

    *(unsigned short *)((a6 + 0x0)) = (((unsigned char)(*(signed char *)((a4 + 0x7))) << 2) << 2);
    *(unsigned char *)((a10 + 0x0)) = ((*(signed char *)((a4 + 0x9))) + 0x1);
    *(unsigned int *)((a11 + 0x0)) = (unsigned short)(*(short *)((a4 + 0x2A)));
    *(unsigned char *)(((int)stk + 4)) = (*(signed char *)((a4 + 0x8)));
    t4 = *(signed char *)(((int)stk + 4));
    if ((unsigned char)t4 != 0) {
        if ((unsigned char)t4 != 1) {
            if (((unsigned char)t4 == 2) || ((unsigned char)t4 == 3)) {
                *(unsigned char *)((a8 + 0x0)) = 0x4;
                *(unsigned char *)((a9 + 0x0)) = (*(signed char *)((a10 + 0x0)));
                *(unsigned int *)((a13 + 0x0)) = 0x2;
                *(unsigned int *)((a12 + 0x0)) = ((*(int *)(((a4 + 0xC) + 0x0))) << 1);
                *(unsigned short *)((a14 + 0x0)) = 0x2;
            }
        } else {
            *(unsigned char *)((a8 + 0x0)) = 0x8;
            *(unsigned char *)((a9 + 0x0)) = (*(signed char *)((a10 + 0x0)));
            *(unsigned int *)((a13 + 0x0)) = 0x1;
            *(unsigned int *)((a12 + 0x0)) = (*(int *)(((a4 + 0xC) + 0x0)));
            *(unsigned short *)((a14 + 0x0)) = 0x1;
        }
    } else {
        *(unsigned char *)((a8 + 0x0)) = 0x10;
        *(unsigned char *)((a9 + 0x0)) = ((*(signed char *)((a10 + 0x0))) << 1);
        *(unsigned int *)((a13 + 0x0)) = 0x1;
        t14 = *(int *)(((a4 + 0xC) + 0x0));
        *(unsigned int *)((a12 + 0x0)) = (((int)((unsigned int)((int)((unsigned int)t14 + (unsigned int)0x0)) + ((((int)0x0 > (int)t14)) ? 1u : 0u))) >> 1);
        *(unsigned short *)((a14 + 0x0)) = 0x0;
    }
    *(unsigned char *)((a9 + 0x0)) = 0x2;
    *(unsigned int *)((a13 + 0x0)) = 0x1;
    t21 = *(int *)(((a4 + 0xC) + 0x0));
    *(unsigned int *)((a12 + 0x0)) = (((int)((unsigned int)((int)((unsigned int)t21 + (unsigned int)0x0)) + ((((int)0x0 > (int)t21)) ? 1u : 0u))) >> 1);
    *(unsigned char *)((a8 + 0x0)) = 0x10;
    *(unsigned char *)((a7 + 0x0)) = 0xFFFFFFFF;
    return 0x0;
}

int FUN_0c02a0a8(int a4)
{
    float u5;
    float u6;
    float u7;
    float u8;
    float u10;
    int t35;
    int t30;
    int stk[11];

    FUN_0c0a68ec(((int)stk + 4), ((*(float *)((a4 + 0x24C))) - (*(float *)((a4 + 0x30)))), ((*(float *)((a4 + 0x254))) - (*(float *)((a4 + 0x38)))));
    u5 = *(float *)((a4 + 0x30));
    u6 = *(float *)((a4 + 0x24C));
    u7 = *(float *)((a4 + 0x38));
    u8 = *(float *)((a4 + 0x254));
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0xC);
    u10 = ((u8 - u7) * (u8 - u7));
    u10 = u10 + (u6 - u5) * (u6 - u5);
    FUN_0c0a6800((*(int *)(((int)stk + 4))), (((int)stk + 4) + 0xC), 0.0f, 0.0f, (_builtin_sqrtf(u10) * 0.5f));
    *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) + (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x14);
    *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + (*(float *)(((((int)stk + 4) + 0x14) + 0x0))));
    t35 = (thunk_FUN_0c0546fe(a4, (*(int *)((a4 + 0x52C))), 0x80, 0x1));
    if (1.0f > _builtin_sqrtf(u10)) {
        t30 = 0x52C;
        if ((*(short *)((a4 + 0x6E))) == (*(int *)((a4 + 0x52C)))) {
            *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) + (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
            *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + (*(float *)(((*(int *)(((int)stk + 12))) + 0x0))));
            t30 = (FUN_0c02a19a(a4));
        }
        t35 = t30;
    }
    return t35;
}






int FUN_0c0c6798(int a4, int a5, int a6)
{
    int t0;
    float u2;

    t0 = FUN_0c0e1830(0xC0C6894, 0x74);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x30)) = 0x209E;
    u2 = 320.0f;
    u2 = u2 + 24.0f * ((float)a4 - (((float)a5 + (-1.0f)) / (1.0f + 1.0f)));
    *(float *)((t0 + 0x34)) = u2;
    *(float *)((t0 + 0x38)) = 140.0f;
    *(float *)((t0 + 0x3C)) = 0.00139999995f;
    *(float *)((t0 + 0x40)) = 0.699999988f;
    *(float *)((t0 + 0x44)) = 0.699999988f;
    *(float *)((t0 + 0x48)) = 0.0f;
    *(float *)((t0 + 0x4C)) = 0.0f;
    *(float *)((t0 + 0x50)) = 1.0f;
    *(float *)((t0 + 0x54)) = 1.0f;
    *(unsigned int *)((t0 + 0x58)) = 0x0;
    *(float *)((t0 + 0x5C)) = 0.399999976f;
    *(unsigned int *)((t0 + 0x60)) = 0xFFFFFFFF;
    *(unsigned int *)((t0 + 0x64)) = 0xA;
    *(unsigned short *)((t0 + 0x6A)) = (int)((float)(((a4 << 2) + a4) << 1) + 323.999969f);
    *(unsigned short *)((t0 + 0x6E)) = (a5 - a4);
    *(unsigned int *)((t0 + 0x70)) = a6;
    return 0x70;
}

float FUN_0c0caf6a(int a4, int a5, int a6, float f4)
{
    int t4;
    float t5;
    float u8;
    float u9;
    float u10;
    float u12;
    float u13;
    float u15;
    float u16;
    float u17;
    int t20;
    float u23;
    int t24;
    float u27;
    int stk[16];

    *(float *)(((int)stk + 4)) = f4;
    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    FUN_0c0db840((((int)stk + 4) + 0x1C));
    FUN_0c0db4d0(0xC20A518, (((int)stk + 4) + 0x10));
    t4 = FUN_0c0d9dc0((*(float *)(((int)stk + 28))), (*(float *)(((int)stk + 20))));
    t5 = FUN_0c0d9e90((-((short)t4 + 0x8000)));
    u8 = *(float *)(((int)stk + 20));
    u9 = ((*(float *)(((int)stk + 28))) * (FUN_0c0da410(((short)t4 + 0x8000))));
    u9 = u9 + t5 * u8;
    u10 = (-u9);
    if (u9 > 0.0f) {
        u10 = u9;
    }
    u12 = *(float *)(((int)stk + 24));
    u13 = u12;
    if (!(u12 > 0.0f)) {
        u13 = (-u12);
    }
    u15 = *(float *)(((int)stk + 4));
    u16 = *(float *)(((int)stk + 36));
    u17 = 0.0f;
    if (u13 != 0.0f) {
        u17 = (((u16 - u15) * u10) / u13);
    }
    t20 = *(int *)(((int)stk + 16));
    u23 = (*(float *)(((int)stk + 32)));
    u23 = u23 + u17 * (FUN_0c0d9e90(((short)t4 + 0x8000)));
    *(float *)((t20 + 0x0)) = u23;
    t24 = *(int *)(((int)stk + 8));
    u27 = (*(float *)(((int)stk + 40)));
    u27 = u27 + u17 * (FUN_0c0da410(((short)t4 + 0x8000)));
    *(float *)((t24 + 0x0)) = u27;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x0)) = (0x4000 - ((short)t4 + 0x8000));
    return u17;
}

int FUN_0c0cd56c(int a4, float f4, float f5)
{
    float u14;
    int stk[10];

    *(float *)(((int)stk + 12)) = f4;
    *(float *)(((int)stk + 16)) = f5;
    nlSubVector3op((((int)stk + 4) + 0x10), a4, (a4 + 0xC));
    nlScaleUnitVector((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x10), (*(float *)(((int)stk + 12))));
    nlAddVector((a4 + 0x18), (((int)stk + 4) + 0x10));
    FUN_0c0dce80((a4 + 0x18), (a4 + 0x18), (*(float *)0xC0CD6C4));
    nlAddVector((a4 + 0xC), (a4 + 0x18));
    *(float *)((a4 + 0x10)) = ((*(float *)((a4 + 0x10))) - (*(float *)(((((int)stk + 4) + 0xC) + 0x0))));
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)((a4 + 0x18))), (*(float *)((a4 + 0x1C))), (*(float *)((a4 + 0x20))));
    u14 = *(float *)0xC0CD6D0;
    *(unsigned short *)((a4 + 0x24)) = (int)((float)(*(short *)((a4 + 0x24))) + ((float)((*(int *)(((int)stk + 4))) - (*(short *)(((0x24 + a4) + 0x0)))) * u14));
    *(unsigned short *)((a4 + 0x26)) = (int)((float)(*(short *)((a4 + 0x26))) + ((float)((*(int *)(((int)stk + 8))) - (*(short *)(((0x26 + a4) + 0x0)))) * u14));
    return 0x26;
}

int FUN_0c0cf4c4(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7, float f8)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0CF58A, 0x98);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x38)) = 0xC1E9EEC;
    *(float *)((t0 + 0x3C)) = (f4 + 0.0f);
    *(float *)((t0 + 0x40)) = (f5 + 0.0f);
    *(unsigned int *)((t0 + 0x44)) = (int)(f6 * (*(float *)0xC0CF5D0));
    *(unsigned int *)((t0 + 0x48)) = (int)(f7 * (*(float *)0xC0CF5D4));
    *(unsigned int *)((t0 + 0x4C)) = a4;
    *(unsigned int *)((t0 + 0x50)) = a5;
    *(unsigned int *)((t0 + 0x54)) = a6;
    *(unsigned int *)((t0 + 0x58)) = a7;
    *(unsigned int *)((t0 + 0x5C)) = a8;
    *(float *)((t0 + 0x6C)) = (*(float *)0xC0CF5D8);
    *(unsigned int *)((t0 + 0x88)) = 0x0;
    *(float *)((t0 + 0x80)) = 1.0f;
    *(float *)((t0 + 0x84)) = 1.0f;
    *(float *)((t0 + 0x70)) = f6;
    *(float *)((t0 + 0x74)) = f7;
    *(float *)((t0 + 0x8C)) = f8;
    *(unsigned int *)((t0 + 0x94)) = 0x1000;
    *(unsigned int *)((t0 + 0x90)) = 0xFFFFFFFF;
    return 0x90;
}

int FUN_0c0d36e0(int a4, float f4)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t7;
    int t11;
    int t15;

    t0 = *(int *)0xC943404;
    *(float *)((a4 + 0x3C)) = ((*(float *)0xC2475BC) + 65.0f);
    t2 = 0xC0D37C8;
    t3 = 0x0;
    for (;;) {
        t4 = 0x0;
        for (;;) {
            if ((int)t4 >= (int)(*(int *)((a4 + 0x30)))) {
                break;
            }
            t7 = (((((t4 << 2) << 1) + t4) << 1) + 0x2C);
            if (t3 == 0) {
                t7 = (0xFFFFFFD4 - ((((t4 << 2) << 1) + t4) << 1));
            }
            t2 = 0x38;
            *(float *)((a4 + t2)) = ((float)t7 + 320.0f);
            t2 = t0;
            if ((int)(*(int *)((((t2 + 0x44) + (t3 << 2)) + 0x0))) > (int)t4) {
                t2 = 0x60;
                *(float *)((a4 + t2)) = 1.0f;
                t11 = 0x2050;
                if (((*(int *)0xC23A258) & 0x1) == 0) {
                    t11 = 0x205A;
                }
                t15 = t11;
            } else {
                t2 = 0x60;
                *(float *)((a4 + t2)) = 0.399999976f;
                t15 = 0x2050;
            }
            *(unsigned int *)((a4 + 0x34)) = t15;
            t2 = (FUN_0c0c0340((a4 + 0x34), f4));
            t4 = (t4 + 0x1);
        }
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x2) {
            break;
        }
    }
    return t2;
}

int vmsfs_findnext(int a4, int a5, int a6, int a7)
{
    int t57;
    int t1;
    int t3;
    int t37;
    int t5;
    int t27;
    int t8;
    int t9;
    int t10;
    int t12;
    int t13;
    int t14;
    int t16;
    int t17;
    int t22;
    int t18;
    int t19;
    int t20;
    int t47;
    int t4;

    t57 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC956768) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t47 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t37 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = *(signed char *)((((a4 * 0x148) + 0xC956768) + 0x8)), t4 != 0)) {
                t5 = buIsFormat(a4);
                t27 = 0xFFFFFF03;
                if ((int)t5 >= 0) {
                    t8 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x18));
                    t9 = (direntry(a4, (*(int *)((((a4 * 0x148) + 0xC956768) + 0x18)))));
                    t10 = t8;
                    for (;;) {
                        t12 = *(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x30));
                        if ((int)t10 >= (int)t12) {
                            if (0x0 == 0) {
                                return 0xFFFFFF05;
                            }
                            t10 = t9;
                            t9 = a5;
                            t10 = (t10 + 0x4);
                            t13 = t12;
                            t14 = (t9 + 0xC);
                            for (;;) {
                                if ((unsigned int)t9 >= (unsigned int)t14) {
                                    break;
                                }
                                t13 = (*(signed char *)((t10 + 0x0)));
                                t10 = (t10 + 0x1);
                                *(unsigned char *)((t9 + 0x0)) = t13;
                                t9 = (t9 + 0x1);
                            }
                            *(unsigned char *)((t14 + 0x0)) = 0x0;
                            return 0x0;
                        }
                        t16 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x18));
                        *(unsigned int *)((((a4 * 0x148) + 0xC956768) + 0x18)) = (t16 + 0x1);
                        t17 = *(signed char *)((t9 + 0x0));
                        if (((unsigned char)t17 != 51) && ((unsigned char)t17 != 0xCC)) {
                            t9 = (t9 + 0x20);
                            t10 = (t10 + 0x1);
                            continue;
                        }
                        break;
                    }
                    t22 = 0xFFFFFF05;
                    if (0x1 != 0) {
                        t18 = (t16 + 0x1);
                        t19 = a5;
                        t20 = (t9 + 0x4);
                        for (;;) {
                            if ((unsigned int)t19 >= (unsigned int)(a5 + 0xC)) {
                                break;
                            }
                            t18 = (*(signed char *)((t20 + 0x0)));
                            t20 = (t20 + 0x1);
                            *(unsigned char *)((t19 + 0x0)) = t18;
                            t19 = (t19 + 0x1);
                        }
                        *(unsigned char *)(((a5 + 0xC) + 0x0)) = 0x0;
                        t22 = 0x0;
                    }
                    t27 = t22;
                }
                t37 = t27;
            }
            t47 = t37;
        }
        t57 = t47;
    }
    return t57;
}

int vmsfs_fgettime(int a4, int a5, int a6)
{
    int t1;
    int t3;
    int t5;
    int t7;
    int t9;
    int t12;
    int t13;
    int t11;
    int stk[18];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    if ((*(signed char *)(((a4 * 0x148) + 0xC95676A))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if (t3 != 0) {
            if ((*(signed char *)(((a4 * 0x148) + 0xC956770))) == 0) {
                return 0xFFFFFF01;
            }
            t5 = buIsFormat(a4);
            if ((int)t5 < 0) {
                return 0xFFFFFF03;
            }
            *(volatile int *)(((int)stk + 4));
            t7 = check_isopen();
            if ((int)t7 < 0) {
                return 0xFFFFFF0B;
            }
            t9 = search_dir(a4, (*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x10));
            if ((int)t9 < 0) {
                return 0xFFFFFF05;
            }
            t12 = (((int)stk + 4) + 0x8);
            t13 = ((direntry(a4, t9)) + 0x10);
            for (;;) {
                if ((unsigned int)t12 >= (unsigned int)((((int)stk + 4) + 0x8) + 0x8)) {
                    break;
                }
                t11 = (*(signed char *)((t13 + 0x0)));
                t13 = (t13 + 0x1);
                *(unsigned char *)((t12 + 0x0)) = t11;
                t12 = (t12 + 0x1);
            }
            get_vmstime((*(int *)(((int)stk + 8))), (((int)stk + 4) + 0x8));
            return 0x0;
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

int syG2DmaReset(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)((((t0 * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x0)) = t0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x28)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x2C)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x30)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x4)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x8)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0xC)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x10)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x14)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x18)) = 0x3;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x1C)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC239F3C) + 0x4)) + 0x20)) = 0x0;
    *(unsigned int *)(((((((*(int *)((a4 + 0x0))) << 2) << 2) << 1) + (*(int *)(((*(int *)0xC239F3C) + 0x0)))) + 0x14)) = 0x0;
    return 0x0;
}

int FUN_0c053700(int a4)
{
    int t2;
    int t30;
    int t3;
    int t4;
    int t5;
    int t7;
    int t27;

    t2 = *(int *)((((*(short *)(((*(int *)0xC23ECFC) + 0x2))) << 2) + 0xC1A3290));
    t30 = 0xC1A3290;
    if (t2 != 0) {
        t3 = 0xC23ECFC;
        t4 = 0x0;
        t5 = t2;
        for (;;) {
            if (!((*(float *)((t5 + 0x4))) > -500.0f)) {
                break;
            }
            t7 = FUN_0c0e5f1c(a4);
            t3 = 0xAC;
            t3 = (t3 + a4);
            t3 = (*(int *)((t3 + 0x0)));
            if (t7 == t3) {
                nlPushMatrix(0x0);
                t3 = 0xC0DCC70;
                FUN_0c0dcc70((*(float *)((t5 + 0x0))), (*(float *)((t5 + 0x4))), (*(float *)((t5 + 0x8))));
                t3 = 0xC0DC890;
                nlRotateAY((*(short *)((t5 + 0xE))));
                nlRotateAX((*(short *)((t5 + 0xC))));
                nlRotateAZ((*(short *)((t5 + 0x10))));
                t3 = 0xC0DCB80;
                nlScale(1.79999995f, 0.199999988f, 1.79999995f);
                FUN_0c0de000(1.79999995f);
                t3 = 0xC0C4784;
                FUN_0c0c4784((*(int *)((a4 + 0x78))), (*(float *)((a4 + 0x90))));
                nlPopMatrix(0x1);
            } else {
                t27 = t3;
            }
            t5 = (t5 + 0x14);
            t3 = t27;
            t4 = (t4 + 0x1);
        }
        t30 = 0x4;
    }
    return t30;
}

int FUN_0c09363c(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t49;
    int t6;
    int t40;
    int t7;
    int t8;
    int t9;
    int t32;
    int t11;
    int t24;
    int t13;

    t0 = *(short *)((a5 + 0x6));
    t1 = *(int *)((a4 + 0xC4));
    t2 = *(int *)((((((unsigned short)t0 << 2) << 1) + 0xC10B954) + 0x4));
    t3 = *(signed char *)((((((unsigned short)t0 << 2) << 1) + 0xC10B954) + 0x1));
    t49 = (unsigned char)t3;
    if ((*(int *)(((0xC0 + a4) + 0x0))) == (unsigned char)t3) {
        t6 = *(short *)((((t1 << 1) + t2) + 0x0));
        t40 = t6;
        if (t6 != -1) {
            t7 = *(signed char *)((((((unsigned short)t0 << 2) << 1) + 0xC10B954) + 0x0));
            t8 = *(int *)((a4 + 0xBC));
            t9 = *(short *)((((((((t8 << 2) << 2) << 2) << 1) + 0xC248EF0) + (((unsigned char)t7 << 2) << 1)) + 0x4));
            t32 = t9;
            if (t9 == 0) {
                t11 = *(short *)((((((((t8 << 2) << 2) << 2) << 1) + 0xC248EF0) + (((unsigned char)t7 << 2) << 1)) + 0x6));
                t24 = t11;
                if (t11 == 0) {
                    t13 = FUN_0c0e19aa(0xC093738, 0xB4, (*(int *)0xC23ECF0));
                    FUN_0c0e19d0(t13);
                    *(unsigned int *)((t13 + 0x88)) = (*(int *)((a4 + 0xBC)));
                    *(unsigned int *)((t13 + 0x8C)) = a4;
                    *(unsigned int *)((t13 + 0x80)) = (unsigned char)(*(signed char *)((((((unsigned short)t0 << 2) << 1) + 0xC10B954) + 0x0)));
                    *(unsigned int *)((t13 + 0x78)) = (*(int *)((a4 + 0x2BC)));
                    *(unsigned short *)((((((((t8 << 2) << 2) << 2) << 1) + 0xC248EF0) + (((unsigned char)t7 << 2) << 1)) + 0x4)) = (*(int *)(((0x404 + a4) + ((*(int *)((t13 + 0x80))) << 2))));
                    *(unsigned short *)((((((((t8 << 2) << 2) << 2) << 1) + 0xC248EF0) + (((unsigned char)t7 << 2) << 1)) + 0x6)) = ((*(short *)((((((((t8 << 2) << 2) << 2) << 1) + 0xC248EF0) + (((unsigned char)t7 << 2) << 1)) + 0x6))) + 0x1);
                    *(unsigned int *)((((((((t8 << 2) << 2) << 2) << 1) + 0xC248EF0) + (((unsigned char)t7 << 2) << 1)) + 0x0)) = (*(int *)((t13 + 0x8)));
                    *(unsigned int *)(((((*(int *)((t13 + 0x80))) << 2) + (0x404 + a4)) + 0x0)) = (*(short *)((((t1 << 1) + t2) + 0x0)));
                    t24 = 0x80;
                }
                t32 = t24;
            }
            t40 = t32;
        }
        t49 = t40;
    }
    return t49;
}

int FUN_0c0a155c(int a4, int a5, int a6, int a7)
{
    float u4;
    int t5;
    float u6;
    float u9;
    int t15;
    int t16;

    if (((a4 - (*(int *)((a5 + 0x0)))) == 8) && ((int)a4 < (int)0x24)) {
        *(unsigned int *)((a5 + 0x0)) = a4;
        *(float *)((a5 + 0x4)) = ((((float)(unsigned char)(FUN_0c0da2e0()) * (*(float *)(((((a6 << 2) << 1) + 0xC10CE40) + 0x4)))) / 255.0f) + (*(float *)(((((a6 << 2) << 1) + 0xC10CE40) + 0x0))));
        u4 = *(float *)(((a6 << 2) + 0xC10CE18));
        t5 = FUN_0c0da2e0();
        u6 = 1.0f;
        if ((t5 & 1) != 0) {
            u6 = (-1.0f);
        }
        u9 = ((float)((unsigned char)(FUN_0c0da2e0()) - 127) / 1024.0f);
        u9 = u9 + u6 * u4;
        *(float *)((a5 + 0x8)) = u9;
    } else {
        t15 = a6;
        t16 = a7;
    }
    if (a7 != 0) {
        return FUN_0c098c2e(a4, (*(int *)((a5 + 0x0))), (*(float *)((a5 + 0x4))), (*(float *)((a5 + 0x8))));
    }
    return FUN_0c098cfa(a4, (*(int *)((a5 + 0x0))), t15, t16, (*(float *)((a5 + 0x4))), (*(float *)((a5 + 0x8))));
}

int FUN_0c0b1542(int a4, float f4)
{
    int t1;
    float u2;
    float u4;
    float u7;
    float u8;
    int t9;
    int t11;
    int t12;
    int t13;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    int t19;
    int t10;
    int t20;
    int t23;
    int t24;
    int t27;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    int stk[20];

    t1 = *(int *)(((a4 << 2) + 0xC202588));
    u2 = *(float *)0xC0B1644;
    *(float *)(((int)stk + 8)) = ((float)(unsigned short)(*(short *)(((0xC111120 + (a4 << 2)) + 0x0))) + u2);
    u4 = *(float *)0xC0B1648;
    *(float *)(((int)stk + 12)) = ((float)(unsigned short)(*(short *)(((0xC111120 + (a4 << 2)) + 0x2))) + u4);
    *(float *)(((int)stk + 16)) = (*(float *)0xC0B164C);
    *(float *)(((int)stk + 20)) = (*(float *)0xC0B1650);
    u7 = *(float *)0xC0B1654;
    *(float *)(((int)stk + 24)) = u7;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 1.0f;
    *(float *)(((int)stk + 40)) = 1.0f;
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    *(unsigned int *)(((int)stk + 56)) = 0x1000;
    *(float *)(((int)stk + 48)) = f4;
    *(unsigned int *)(((int)stk + 52)) = 0xFFFFFFFF;
    u8 = *(float *)0xC0B165C;
    t9 = 0xC0B165C;
    t11 = 0x1000;
    t12 = (a4 << 2);
    t13 = t1;
    u14 = u4;
    u15 = u2;
    u16 = u7;
    u17 = f4;
    u18 = 1.0f;
    for (;;) {
        t19 = *(signed char *)((t13 + 0x0));
        t13 = (t13 + 0x1);
        if ((signed char)t19 == 0) {
            break;
        }
        t10 = (signed char)t19;
        t9 = t10;
        if ((t9 != 32) && ((t10 != 0) && (t20 = (t9 == 32), t9 = t10, t9 != 32))) {
            t9 = (signed char)t19;
            t9 = (t9 << 1);
            *(unsigned int *)(((int)stk + 4)) = (*(short *)((0xC1121DC + t9)));
            t9 = (FUN_0c0c0340(((int)stk + 4), u17));
        } else {
            t23 = t10;
            t24 = t11;
            t27 = t12;
            u28 = u14;
            u29 = u15;
            u30 = u16;
            u31 = u17;
            u32 = u18;
        }
        u14 = u28;
        u15 = u29;
        u16 = u30;
        u17 = u31;
        u18 = u32;
        t9 = 0x4;
        t10 = t23;
        t11 = t24;
        t12 = t27;
        u16 = (*(float *)((((int)stk + 4) + t9)));
        t9 = 0x4;
        u16 = (u16 + u8);
        *(float *)((((int)stk + 4) + t9)) = u16;
    }
    return t9;
}

int FUN_0c0dbbf0(int a4, int a5, int a6)
{
    int stk[30];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a6;
    nlSubVector3op((((int)stk + 4) + 0x8), a5, (*(int *)(((int)stk + 4))));
    nlOuterProduct((*(int *)(((int)stk + 8))), (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x20));
    nlOuterProduct((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    FUN_0c0dd050((((int)stk + 4) + 0x20));
    FUN_0c0dd050((((int)stk + 4) + 0x14));
    FUN_0c0dd050((((int)stk + 4) + 0x8));
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 64)) = (*(float *)(((int)stk + 40)));
    *(float *)(((int)stk + 80)) = (*(float *)(((int)stk + 44)));
    *(float *)(((int)stk + 96)) = 0.0f;
    *(float *)(((int)stk + 52)) = (*(float *)(((int)stk + 24)));
    *(float *)(((int)stk + 68)) = (*(float *)(((int)stk + 28)));
    *(float *)(((int)stk + 84)) = (*(float *)(((int)stk + 32)));
    *(float *)(((int)stk + 100)) = 0.0f;
    *(float *)(((int)stk + 56)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 72)) = (*(float *)(((int)stk + 16)));
    *(float *)(((int)stk + 88)) = (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 104)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 76)) = 0.0f;
    *(float *)(((int)stk + 92)) = 0.0f;
    *(float *)(((int)stk + 108)) = 1.0f;
    nlMultiMatrix((((int)stk + 4) + 0x2C));
    return (FUN_0c0dcc80((*(int *)(((int)stk + 4)))));
}


int FUN_0c217a50(void)
{
    int t0;
    int t30;
    int t40;
    int t32;
    int t35;
    int t2;
    int t7;

    t0 = 0x0;
    for (;;) {
        if (((*(int *)(((t0 << 2) + 0xC952648))) != 5) && (t2 = *(int *)(((t0 << 2) + 0xC952648)), t2 != -3)) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x4) {
                return t2;
            }
            continue;
        }
        break;
    }
    *(unsigned int *)(((t0 << 2) + 0xC952648)) = 0x7;
    if ((((*(int *)0xC95231C) & 0x1) != 1) && ((t7 = *(int *)0xC95231C, (t7 & 0x2C) == 32) && (0x1 != 0))) {
        *(unsigned int *)0xA05F8050 = ((*(int *)0xC952630) + (*(int *)0xC952514));
        *(unsigned int *)0xA05F8054 = ((*(int *)0xC952634) + (*(int *)0xC952518));
    } else {
        if ((*(int *)0xC952330) != 1) {
            *(unsigned int *)0xA05F8050 = ((*(int *)((((t0 & 0x1) << 2) + 0xC952630))) + (*(int *)0xC952514));
            *(unsigned int *)0xA05F8054 = ((*(int *)((((t0 & 0x1) << 2) + 0xC952630))) + (*(int *)0xC952518));
        }
    }
    t30 = *(int *)(((t0 << 2) + 0xC952648));
    t40 = t30;
    if (t30 != -3) {
        t32 = *(int *)0xC9525A4;
        t35 = t32;
        if (t32 == 1) {
            *(unsigned int *)0xA05F80E8 = (*(int *)0xC952600);
            *(unsigned int *)0xA05F8044 = (*(int *)0xC9525C4);
            *(unsigned int *)0xC9525A4 = 0x0;
            t35 = 0xC9525C4;
        }
        t40 = t35;
    }
    return t40;
}


