/* Straight-line functions with calls and guards (batch gen_bj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int ADXERR_CallErrFunc(Stk4);
int ADXF_Close(int);
int ADXF_Open(int, int);
int ADXSTM_GetFad(int, int);
int FUN_0c01e822(int, int, int, int);
int FUN_0c01ef2a(int, int, int, int, int);
int FUN_0c0208fc(int);
int FUN_0c082260(void);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0d4184(void);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(void);
int adxf_ChkPrmPt(int, int);
int adxf_LoadData(int, int, int, int, int, int, int, int, int, int, int);
int kdDevGetStorageInfo(int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdGetStatus(int);
int kdIsChanged(int);
int kdRecognizeChanged(int);
int kdSetGetMediaInfo(void);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
float nlLength(int, int);
int vmsfb_sleep(void);
float FUN_0c01f4fe(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c0d2b30(int a4, int a5);
int vmsio_get_media_info(int a4, int a5);
void FUN_0c0d1b00(int a4);
int ADXF_AddPartition(int a4, int a5, int a6, int a7);
int FUN_0c02286c(int a4, int a5, float f4, float f5);
void FUN_0c01f6fc(int a4, int a5, float f4, float f5, float f6);

float FUN_0c01f4fe(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int t6;
    float u9;
    float u10;
    int t29;
    int t39;
    int t44;
    int t45;
    int t52;
    float t55;
    int stk[171];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
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
    float F7;
    float F8;
    float F9;
    float F10;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    F7 = f7;
    F8 = f8;
    F9 = f9;
    R10 = (0x1);
    R8 = (R4);
    R9 = (R5);
    if ((!(F5 > 25.0f))) goto L_C01F578;
    *(float *)(((int)stk + 96)) = F4;
    *(float *)(((int)stk + 100)) = F5;
    *(float *)(((int)stk + 104)) = F6;
    *(float *)(((int)stk + 84)) = (F7 * 50.0f);
    *(float *)(((int)stk + 88)) = (F8 * 50.0f);
    *(float *)(((int)stk + 92)) = (F9 * 50.0f);
    *(int *)((int)stk + 4) = (R10);
    t6 = (FUN_0c01e822((((int)stk + 4) + 0x5C), (((int)stk + 4) + 0x50), R9, R8)) != 0;
    if (t6) goto L_C01F560;
    L_C01F6E2:;
    R0 = (0xFFFFFFFF);
    L_C01F6E4:;
    return F0;
    L_C01F560:;
    R0 = (0x2);
    goto L_C01F6E4;
    L_C01F578:;
    *(float *)(((int)stk + 60)) = (F7 * 100.0f);
    *(float *)(((int)stk + 64)) = (F8 * 100.0f);
    *(float *)(((int)stk + 68)) = (F9 * 100.0f);
    *(float *)(((int)stk + 72)) = F4;
    *(float *)(((int)stk + 76)) = F5;
    *(float *)(((int)stk + 80)) = F6;
    u9 = *(float *)0xC23FE68;
    u10 = *(float *)0xC23FE70;
    *(unsigned int *)(((int)stk + 24)) = (((int)((F4 - u9) * 0.049999997f) & 0x3F) - 2);
    R14 = ((((int)((F4 - u9) * 0.049999997f) & 0x3F) + 0x2));
    R4 = (((int)((F6 - u10) * 0.049999997f) & 0x1F));
    R5 = (0x3F);
    R6 = (0x1F);
    F1 = (((F4 - u9) * 0.049999997f));
    if (((int)(((int)((F4 - u9) * 0.049999997f) & 0x3F) - 2) >= 0)) goto L_C01F5D8;
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = R14;
    L_C01F5E0:;
    R5 = ((R4 + 0x2));
    R7 = ((R4 - 2));
    if (((int)(R4 - 2) >= 0)) goto L_C01F5F2;
    *(unsigned int *)(((int)stk + 28)) = R5;
    R7 = (0x0);
    L_C01F5FA:;
    *(unsigned int *)(((int)stk + 32)) = 0xFFFFFFFF;
    *(unsigned int *)0xC245FA4 = ((*(int *)0xC245FA4) + 0x1);
    *(unsigned int *)(((int)stk + 8)) = R7;
    *(unsigned int *)(((int)stk + 12)) = ((((R7 << 1) + R7) << 8) + 0xC23FF94);
    F15 = (9999.89941f);
    L_C01F6D0:;
    if (((int)(*(int *)(((int)stk + 8))) <= (int)(*(int *)(((int)stk + 28))))) goto L_C01F61E;
    if (((*(int *)(((int)stk + 32))) == 0)) goto L_C01F6E2;
    R0 = (0x1);
    goto L_C01F6E4;
    L_C01F61E:;
    t29 = *(int *)(((int)stk + 24));
    R11 = (t29);
    R12 = (((((t29 << 1) + t29) << 2) + (*(int *)(((int)stk + 12)))));
    L_C01F6BC:;
    if (((int)R11 <= (int)(*(int *)(((int)stk + 20))))) goto L_C01F630;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x300);
    goto L_C01F6D0;
    L_C01F630:;
    *(unsigned int *)(((int)stk + 16)) = R12;
    R14 = (R12);
    L_C01F6B0:;
    t39 = *(int *)((R14 + 0x0));
    R14 = (t39);
    if ((t39 != (*(int *)(((int)stk + 16))))) goto L_C01F650;
    R11 = ((R11 + 0x1));
    R12 = ((R12 + 0xC));
    goto L_C01F6BC;
    L_C01F650:;
    t44 = *(int *)((R14 + 0x8));
    t45 = *(int *)0xC245FA4;
    R4 = (t45);
    R6 = (t44);
    if (((*(int *)((t44 + 0x0))) == t45)) goto L_C01F6B0;
    *(unsigned int *)((R6 + 0x0)) = R4;
    if ((((*(int *)((R6 + 0x98))) & R10) == 0)) goto L_C01F6B0;
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x1C);
    t52 = FUN_0c01ef2a((((int)stk + 4) + 0x44), (((int)stk + 4) + 0x38), R6, (((int)stk + 4) + 0x2C), (((int)stk + 8) + 0x1C));
    R13 = (t52);
    if ((t52 == 0)) goto L_C01F6B0;
    t55 = nlLength((((int)stk + 8) + 0x40), (((int)stk + 8) + 0x28));
    F0 = (t55);
    F4 = (t55);
    if ((!(F15 > t55))) goto L_C01F6B0;
    *(unsigned int *)(((int)stk + 32)) = R13;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R8) = *(struct mv3 *)((((int)stk + 8) + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R9) = *(struct mv3 *)((((int)stk + 8) + 0x1C)); }
    F15 = (F4);
    goto L_C01F6B0;
    L_C01F5F2:;
    *(unsigned int *)(((int)stk + 28)) = R5;
    if (((int)R5 <= (int)R6)) goto L_C01F5FA;
    *(unsigned int *)(((int)stk + 28)) = R6;
    goto L_C01F5FA;
    L_C01F5D8:;
    *(unsigned int *)(((int)stk + 20)) = R14;
    if (((int)R14 <= (int)R5)) goto L_C01F5E0;
    *(unsigned int *)(((int)stk + 20)) = R5;
    goto L_C01F5E0;
}

int FUN_0c0d2b30(int a4, int a5)
{
    int t0;
    int t2;
    float u3;
    int t5;
    int t6;
    int t51;
    int t21;
    int t23;
    int t24;
    float u25;
    int t44;
    int t26;
    int t27;
    int t42;
    int t16;
    int t17;
    int stk[24];

    t0 = *(int *)0xC94342C;
    *(unsigned int *)(((int)stk + 12)) = ((t0 * 0x2C) + 0xC20BF54);
    *(unsigned int *)(((int)stk + 16)) = (*(int *)((((t0 * 0x2C) + 0xC20BF54) + 0x24)));
    t2 = FUN_0c0d4184();
    u3 = 360.0f;
    if (!(_builtin_fabsf((float)t2) > 360.0f)) {
        u3 = _builtin_fabsf((float)t2);
    }
    t5 = FUN_0c0e5dc0();
    t6 = FUN_0c0e5dc0();
    t51 = t6;
    if ((int)t6 < (int)0xF) {
    } else {
        *(unsigned int *)0xC23A1A8 = ((*(int *)0xC23A1A8) & 0xFFE7FFFF);
        if ((int)a5 > 0) {
            *(unsigned int *)0xC23A1A8 = ((*(int *)0xC23A1A8) | 0x100000);
            t16 = (*(int *)0xC246FF4);
            t17 = (*(int *)0xC246FF0);
        } else {
            *(unsigned int *)0xC23A1A8 = ((*(int *)0xC23A1A8) | 0x80000);
            t16 = (*(int *)0xC246FF0);
            t17 = (*(int *)0xC246FF4);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x28)) = *(struct mv3 *)((t17 + 0x30)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x1C)) = *(struct mv3 *)((t16 + 0x30)); }
        *(unsigned short *)0xC20C4C6 = t6;
        *(unsigned int *)(((int)stk + 8)) = (FUN_0c0e5dc0());
        t21 = (int)((unsigned int)((int)((unsigned int)t5 + (unsigned int)0x0)) + ((((int)0x0 > (int)t5)) ? 1u : 0u));
        t23 = *(int *)(((int)stk + 8));
        t24 = *(short *)((a4 + 0x6E));
        u25 = *(float *)0xC0D2DA4;
        t44 = 0xC0D2DA4;
        if ((int)t5 > 0) {
            t26 = ((t24 - ((t21 >> 1) * t23)) + 0x8000);
            t27 = 0x0;
            for (;;) {
                FUN_0c0da2e0();
                *(volatile int *)(((*(int *)(((int)stk + 12))) + 0x28));
                *(unsigned int *)0xC20C4B8 = (*(signed char *)(((*(int *)(((int)stk + 16))) + (FUN_0c0e5f1c()))));
                FUN_0c0a6800(t26, (((int)stk + 4) + 0x10), 0.0f, 0.0f, u25);
                nlAddVector((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x1C));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC20C4C8) = *(struct mv3 *)((((int)stk + 4) + 0x10)); }
                FUN_0c0a68ec(((int)stk + 4), ((*(float *)(((int)stk + 20))) - (*(float *)(((((int)stk + 4) + 0x28) + 0x0)))), ((*(float *)(((int)stk + 28))) - (*(float *)(((((int)stk + 4) + 0x28) + 0x8)))));
                *(unsigned int *)0xC20C4D4 = (*(int *)(((int)stk + 4)));
                t42 = FUN_0c0208fc(0xC20C4B8);
                t27 = (t27 + 0x1);
                t26 = (t26 + (*(int *)(((int)stk + 8))));
                if ((int)t27 >= (int)t5) {
                    break;
                }
            }
            t44 = t42;
        }
        t51 = t44;
    }
    return t51;
}

int vmsio_get_media_info(int a4, int a5)
{
    int t0;
    int t2;
    int t11;
    int t13;
    int t15;
    int t16;
    int t19;
    int t20;
    int t53;
    int t54;
    int t67;
    int t63;
    int stk[13];

    t0 = *(int *)(((a4 << 2) + 0xC2382DC));
    *(unsigned int *)(((int)stk + 4)) = (kdGetDevice(t0));
    t2 = kdGetDeviceInfo(t0);
    if ((*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))) == 0) {
        vmsfb_sleep();
        t67 = 0xFFFFFF01;
    } else {
        if (((*(int *)((t2 + 0x0))) & 2) == 0) {
            vmsfb_sleep();
            t63 = 0xFFFFFF01;
        } else {
            kdRecognizeChanged(t0);
            for (;;) {
                for (;;) {
                    kdGetDevice(t0);
                    t11 = kdSetGetMediaInfo();
                    if ((int)t11 < 0) {
                        vmsfb_sleep();
                        continue;
                    }
                    break;
                }
                for (;;) {
                    t13 = kdGetStatus(t0);
                    if (t13 == 0) {
                        vmsfb_sleep();
                        continue;
                    }
                    break;
                }
                t15 = kdGetDevice(t0);
                t16 = kdIsChanged(t0);
                if (t16 != 0) {
                    break;
                }
                t19 = *(signed char *)((t15 + 0x4));
                t20 = *(int *)((t15 + 0x8));
                if ((unsigned char)t19 != 8) {
                    if ((unsigned char)t19 != 0xFC) {
                        return 0xFFFFFF01;
                    }
                    continue;
                }
                *(unsigned int *)((a5 + 0x0)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((t20 + 0x8), 0x0));
                *(unsigned int *)((a5 + 0x4)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((t20 + 0x8), 0x2));
                *(unsigned int *)((a5 + 0x8)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((t20 + 0x8), 0x4));
                *(unsigned int *)((a5 + 0xC)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((t20 + 0x8), 0x6));
                *(unsigned int *)((a5 + 0x10)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((t20 + 0x8), 0x8));
                *(unsigned int *)((a5 + 0x14)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((t20 + 0x8), 0xA));
                *(unsigned int *)((a5 + 0x18)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((t20 + 0x8), 0xC));
                *(unsigned int *)((a5 + 0x1C)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((t20 + 0x8), 0x10));
                *(unsigned int *)((a5 + 0x20)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((t20 + 0x8), 0x12));
                *(unsigned int *)((a5 + 0x34)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((t20 + 0x8), 0x14));
                *(unsigned int *)((a5 + 0x38)) = 0x80;
                *(unsigned int *)((a5 + 0x24)) = (unsigned char)(*(signed char *)(((t20 + 0x8) + 0xE)));
                *(unsigned int *)((a5 + 0x28)) = (unsigned char)(*(signed char *)(((t20 + 0x8) + 0xF)));
                *(unsigned int *)((a5 + 0x2C)) = 0x1FF;
                t53 = kdGetDeviceInfo(t0);
                t54 = kdDevGetStorageInfo((((int)stk + 4) + 0x4), t53);
                if ((int)t54 >= 0) {
                    *(unsigned int *)((a5 + 0x3C)) = (unsigned short)(*(short *)(((int)stk + 14)));
                    *(unsigned int *)(((0x40 + a5) + 0x0)) = (unsigned short)(*(short *)(((int)stk + 12)));
                    *(volatile short *)(((int)stk + 14));
                    *(unsigned int *)(((0x44 + a5) + 0x0)) = (FUN_0c0e5dc0());
                    *(volatile short *)(((int)stk + 12));
                    *(unsigned int *)(((0x48 + a5) + 0x0)) = (FUN_0c0e5dc0());
                    return 0x0;
                }
                vmsfb_sleep();
                return 0xFFFFFF01;
            }
            vmsfb_sleep();
            t63 = 0xFFFFFF30;
        }
        t67 = t63;
    }
    return t67;
}

void FUN_0c0d1b00(int a4)
{
    int t9;
    int t2;
    int t3;
    int t4;
    int t37;
    int t38;
    int stk[22];

    t9 = 0x0;
    if ((*(int *)0xC943424) != 0xFFFF) {
        *(volatile int *)0xC943430;
        t2 = FUN_0c0e5dc0();
        t3 = *(int *)0xC943434;
        t4 = ((~(((~(t2 + t3)) + 0x1) & 0x7)) + 0x1);
        if ((int)(t2 + t3) >= 0) {
            t4 = ((t2 + t3) & 0x7);
        }
        t9 = ((*(int *)(((t4 << 2) + 0xC20BEDC))) + a4);
    }
    FUN_0c0a6800(t9, (((int)stk + 4) + 0x10), 0.0f, 0.0f, (-(*(float *)0xC943428)));
    nlAddVector3op((((int)stk + 4) + 0x28), 0xC943418, (((int)stk + 4) + 0x10));
    *(float *)(((int)stk + 48)) = ((*(float *)(((int)stk + 48))) + 35.0f);
    FUN_0c0a6800(t9, (((int)stk + 4) + 0x4), 0.0f, 0.0f, -10.0f);
    nlAddVector3op((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x4));
    *(float *)0xC20C3C8 = (*(float *)(((int)stk + 44)));
    *(float *)0xC20C3D4 = (*(float *)(((int)stk + 48)));
    *(float *)0xC20C3E0 = (*(float *)(((int)stk + 52)));
    *(float *)0xC20C3EC = (*(float *)(((int)stk + 32)));
    *(float *)0xC20C3F8 = (*(float *)(((int)stk + 36)));
    *(float *)0xC20C404 = (*(float *)(((int)stk + 40)));
    FUN_0c0a6800(t9, (((int)stk + 4) + 0x10), 0.0f, 0.0f, (*(float *)0xC943428));
    nlAddVector3op((((int)stk + 4) + 0x28), 0xC943418, (((int)stk + 4) + 0x10));
    *(float *)(((int)stk + 48)) = ((*(float *)(((int)stk + 48))) + 35.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x1C)) = *(struct mv3 *)(0xC943418); }
    *(float *)0xC20C410 = (*(float *)(((int)stk + 44)));
    *(float *)0xC20C41C = (*(float *)(((int)stk + 48)));
    *(float *)0xC20C428 = (*(float *)(((int)stk + 52)));
    *(float *)0xC20C434 = (*(float *)(((int)stk + 32)));
    *(float *)0xC20C440 = (*(float *)(((int)stk + 36)));
    *(float *)0xC20C44C = (*(float *)(((int)stk + 40)));
    *(unsigned int *)(((int)stk + 4)) = 0xC943440;
    *(unsigned int *)0xC247D04 = 0xA;
    *(unsigned int *)0xC247CA8 = 0xFFFFFFFF;
    *(unsigned int *)0xC247CA4 = (FUN_0c082260());
    t37 = *(int *)0xC247CA4;
    t38 = *(int *)(((int)stk + 4));
    { struct mv10 { int w[10]; }; *(struct mv10 *)(0xC943468) = *(struct mv10 *)(t37); }
    { struct mv10 { int w[10]; }; *(struct mv10 *)(t38) = *(struct mv10 *)(t37); }
    *(unsigned short *)0xC943468 = 0x2;
    *(unsigned short *)0xC94346A = 0xFFFFFE08;
    *(unsigned int *)0xC94346C = 0xC20C45C;
    *(unsigned short *)0xC94347C = 0xFFFFFC72;
    *(unsigned short *)0xC94347E = 0xFFFFE71D;
    *(float *)0xC943480 = 0.0f;
    *(float *)0xC943484 = 0.0f;
    *(float *)0xC943488 = 25.0f;
    *(float *)0xC94348C = 60.0f;
    { struct mv10 { int w[10]; }; *(struct mv10 *)((*(int *)0xC247CA4)) = *(struct mv10 *)(0xC943468); }
}

int ADXF_AddPartition(int a4, int a5, int a6, int a7)
{
    int t1;
    int t8;
    int t15;
    int t17;
    int t39;
    int t52;
    int t64;
    int t69;
    int stk[16];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    *(unsigned int *)(((int)stk + 4)) = R4;
    *(unsigned int *)(((int)stk + 16)) = R7;
    t1 = adxf_ChkPrmPt((*(int *)(((int)stk + 4))), R6);
    R11 = (t1);
    R13 = (R6);
    R14 = (R6);
    R8 = (R5);
    if (((int)t1 >= 0)) goto L_C2141E6;
    L_C21436A:;
    R0 = (R11);
    L_C21436C:;
    return R0;
    L_C2141E6:;
    t8 = ADXSTM_GetFad(R8, (((int)stk + 4) + 0x4));
    R0 = (t8);
    T_ = ((((int)t8 >= 0)));
    if (!(((int)t8 >= 0))) goto L_C21422A;
    R5 = (((int)stk + 4));
    t15 = ADXF_Open(R8, (R5 + 0x14));
    *(unsigned int *)(((int)stk + 12)) = t15;
    if ((t15 != 0)) goto L_C214234;
    goto L_C21422A;
    L_C21422A:;
    ADXERR_CallErrFunc(*(Stk4 *)((int)stk + 4));
    R0 = (0xFFFFFFFF);
    goto L_C21436C;
    L_C214234:;
    t17 = *(int *)(((int)stk + 4));
    *(unsigned int *)((R14 + 0x0)) = (*(int *)((((t17 << 2) + 0xC95E288) + 0x0)));
    *(unsigned int *)((((t17 << 2) + 0xC95E288) + 0x0)) = R13;
    *(unsigned int *)((R14 + 0x8)) = (*(int *)(((int)stk + 8)));
    *(unsigned char *)((R14 + 0x12)) = 0x1;
    *(unsigned int *)(((int)stk + 28)) = (R14 + 0x14);
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(unsigned int *)((R14 + 0xC)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0xC950064;
    R10 = (0x0);
    R11 = (0xFFFFFFFF);
    R12 = (0xC950060);
    R13 = (0x0);
    R9 = (0x0);
    L_C21432E:;
    R4 = (0x3);
    if (((int)R9 < (int)0x3)) goto L_C21426C;
    if ((R9 != 3)) goto L_C214342;
    ADXERR_CallErrFunc(*(Stk4 *)((int)stk + 4));
    L_C214342:;
    if ((R11 != -4)) goto L_C214350;
    ADXERR_CallErrFunc(*(Stk4 *)((int)stk + 4));
    L_C214350:;
    *(unsigned short *)((R14 + 0x10)) = (*(short *)(((int)stk + 20)));
    *(unsigned int *)((R14 + 0x4)) = (((((unsigned short)(*(short *)((R14 + 0x10))) << 2) << 1) + (*(int *)(((*(int *)((R14 + 0x0))) + 0x4)))) + 0x14);
    ADXF_Close((*(int *)(((int)stk + 12))));
    goto L_C21436A;
    L_C21426C:;
    t39 = (int)(adxf_LoadData((*(int *)(((int)stk + 12))), 0x1, R12, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24))) <= 0;
    if (t39) goto L_C21432C;
    R4 = (R13);
    if (((*(int *)((R14 + 0xC))) != 0)) goto L_C2142AA;
    R4 = (0x10000);
    if (((int)(*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) <= (int)0x10000)) goto L_C214294;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = R4;
    R11 = (0xFFFFFFFC);
    R4 = (0xFFFFFFFC);
    goto L_C214342;
    L_C214294:;
    t52 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
    R4 = (t52);
    if (((int)(*(int *)(((int)stk + 16))) >= (int)t52)) goto L_C2142A2;
    R3 = ((*(int *)(((int)stk + 16))));
    L_C2142A4:;
    *(unsigned int *)((R14 + 0xC)) = R3;
    R4 = (0x2);
    L_C2142AA:;
    R9 = (0x200);
    if (((int)R4 >= (int)0x200)) goto L_C21430C;
    L_C2142B2:;
    if (((*(int *)((R12 + (R4 << 2)))) != 0)) goto L_C2142C0;
    R4 = ((R4 + 0x2));
    L_C2142FC:;
    t64 = (int)(R10 + 0x1) < (int)(*(int *)((R14 + 0xC)));
    R10 = ((R10 + 0x1));
    if (t64) goto L_C214308;
    R11 = (R13);
    goto L_C214342;
    L_C214308:;
    if (((int)R4 < (int)R9)) goto L_C2142B2;
    L_C21430C:;
    R9 = (R13);
    goto L_C21432E;
    L_C2142C0:;
    t69 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 20)) = (t69 + 0x1);
    *(unsigned short *)(((((((t69 + 0x1) - 1) << 2) << 1) + (*(int *)(((int)stk + 28)))) + 0x0)) = R10;
    *(volatile int *)((R12 + (R4 << 2)));
    *(unsigned int *)((a5 + 0x4)) = (FUN_0c0e5dc0());
    *(volatile int *)((R12 + (a4 << 2)));
    *(unsigned short *)((a5 + 0x2)) = (FUN_0c0e5dc0());
    goto L_C2142FC;
    L_C2142A2:;
    R3 = (R4);
    goto L_C2142A4;
    L_C21432C:;
    R9 = ((R9 + 0x1));
    goto L_C21432E;
}

int FUN_0c02286c(int a4, int a5, float f4, float f5)
{
    int t8;
    float u30;
    int t23;
    float u25;
    float u33;
    float u36;
    int t38;
    float t40;
    float u42;
    int t1;
    int t2;
    int t3;
    float u15;
    int t17;
    int t18;
    int t19;

    if (((*(int *)((a4 + 0x50C))) != 0) && ((t1 = *(int *)((a4 + 0x508)), t1 == 0) && (t2 = *(int *)((a4 + 0x510)), t3 = *(int *)((((t2 << 2) + 0xC247030) + 0x0)), t3 != 0))) {
        u15 = (*(float *)(((*(int *)(((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0) + 0x0))) + 0x390)));
    } else {
        t8 = *(short *)(((*(int *)0xC23ECFC) + 0x2));
        u15 = (*(float *)((0xC205CBC + ((((t8 << 1) + t8) << 2) << 1))));
    }
    u30 = (f4 + 20.0f);
    if (((*(int *)((a4 + 0x50C))) != 0) && ((t17 = *(int *)((a4 + 0x508)), t17 == 0) && (t18 = *(int *)((a4 + 0x510)), t19 = *(int *)((0xC247030 + (t18 << 2))), t19 == 4))) {
        t23 = *(int *)((a4 + 0x510));
        u25 = (*(float *)(((((((t23 << 1) + t23) << 2) << 2) << 2) + 0xC23F26C)));
        u25 = u25 + 0.5f * (*(float *)((((*(int *)(((0x510 + a4) + 0x0))) << 2) + (0xC247084 + ((((*(int *)((a4 + 0xBC))) << 2) << 2) << 2)))));
        u30 = ((u25 - u15) + f4);
    }
    u33 = u30;
    if (u30 > 40.0f) {
        u33 = 40.0f;
    }
    if (!((*(float *)((a4 + 0x34))) > (u15 + u33))) {
        u36 = *(float *)(((0x34 + a4) + 0x0));
        *(volatile int *)((a4 + 0xBC));
        t38 = FUN_0c0e5dc0();
        t40 = FUN_0c0da410((a4 + (t38 * (*(int *)0xC23A258))));
        u42 = (t40 * f5);
        u42 = u42 + 0.25f * (((u15 + u33) - u36) / u33);
        *(float *)(((0x4B4 + a4) + 0x0)) = ((*(float *)(((0x4B4 + a4) + 0x0))) + u42);
    }
    if ((*(float *)((a4 + 0x34))) > (u15 + u33)) {
        *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) + 0.0f);
    }
    *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) - 0.0272199996f);
    *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x60))) * 0.949999988f);
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x64))) * 0.949999988f);
    *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x68))) * 0.949999988f);
    return nlAddVector((a4 + 0x48), (0x4B0 + a4));
}

void FUN_0c01f6fc(int a4, int a5, float f4, float f5, float f6)
{
    float u0;
    float u1;
    int t2;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t19;
    float u20;
    float u21;
    float u22;
    float u26;
    int t27;
    int t31;
    int t32;
    int t43;
    int t5;
    int t8;
    int t17;
    int t18;
    int stk[28];

    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = -100.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 64)) = f4;
    *(float *)(((int)stk + 68)) = f5;
    *(float *)(((int)stk + 72)) = f6;
    u0 = *(float *)0xC23FE68;
    u1 = *(float *)0xC23FE70;
    *(unsigned int *)(((int)stk + 20)) = (((int)((f4 - u0) * 0.049999997f) & 0x3F) - 2);
    if ((int)(((int)((f4 - u0) * 0.049999997f) & 0x3F) - 2) < 0) {
        *(unsigned int *)(((int)stk + 20)) = 0x0;
        t5 = (((int)((f4 - u0) * 0.049999997f) & 0x3F) + 0x2);
    } else {
        t2 = (((int)((f4 - u0) * 0.049999997f) & 0x3F) + 0x2);
        if ((int)(((int)((f4 - u0) * 0.049999997f) & 0x3F) + 0x2) > (int)0x3F) {
            t2 = 0x3F;
        }
        t5 = t2;
    }
    if ((int)(((int)((f6 - u1) * 0.049999997f) & 0x1F) - 2) < 0) {
        *(unsigned int *)(((int)stk + 16)) = (((int)((f6 - u1) * 0.049999997f) & 0x1F) + 0x2);
        t8 = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 16)) = (((int)((f6 - u1) * 0.049999997f) & 0x1F) + 0x2);
        if ((int)(((int)((f6 - u1) * 0.049999997f) & 0x1F) + 0x2) > (int)0x1F) {
            *(unsigned int *)(((int)stk + 16)) = 0x1F;
        }
        t8 = (((int)((f6 - u1) * 0.049999997f) & 0x1F) - 2);
    }
    *(unsigned int *)(((int)stk + 24)) = 0xFFFFFFFF;
    *(unsigned int *)0xC245FA4 = ((*(int *)0xC245FA4) + 0x1);
    *(unsigned int *)(((int)stk + 8)) = t8;
    t11 = 0xC23FF94;
    t12 = (((int)((f6 - u1) * 0.049999997f) & 0x1F) + 0x2);
    t13 = ((int)((f6 - u1) * 0.049999997f) & 0x1F);
    t14 = t8;
    t15 = 0x1F;
    t16 = (((t8 << 1) + t8) << 8);
    t19 = (((int)((f4 - u0) * 0.049999997f) & 0x3F) + 0x2);
    u20 = ((f4 - u0) * 0.049999997f);
    u21 = u1;
    u22 = (f4 - u0);
    u26 = 9999.89941f;
    for (;;) {
        t27 = *(int *)(((int)stk + 8));
        t16 = (t16 + t11);
        if ((int)t27 > (int)(*(int *)(((int)stk + 16)))) {
            break;
        }
        t17 = (*(int *)(((int)stk + 20)));
        t18 = t17;
        t18 = (t18 << 1);
        t18 = (t18 + t17);
        t18 = (t18 << 2);
        t18 = (t18 + t16);
        t31 = t27;
        t32 = t17;
        for (;;) {
            if ((int)t17 > (int)t5) {
                break;
            }
            *(unsigned int *)(((int)stk + 12)) = t18;
            t19 = t18;
            for (;;) {
                t11 = (*(int *)(((int)stk + 12)));
                t19 = (*(int *)((t19 + 0x0)));
                if (t19 == t11) {
                    break;
                }
                t11 = 0xC245FA4;
                t14 = (*(int *)((t19 + 0x8)));
                t12 = (*(int *)((t11 + 0x0)));
                t32 = (*(int *)((t14 + 0x0)));
                if (t32 != t12) {
                    *(unsigned int *)((t14 + 0x0)) = t12;
                    if (((*(int *)((t14 + 0x98))) & 1) != 0) {
                        t31 = ((int)stk + 8);
                        t31 = (t31 + 0x14);
                        t43 = t31;
                        *(int *)((int)stk + 4) = t43;
                        t13 = ((int)stk + 4);
                        t15 = ((int)stk + 4);
                        t12 = ((int)stk + 4);
                        t13 = (t13 + 0x30);
                        t15 = (t15 + 0x24);
                        t12 = (t12 + 0x3C);
                        t12 = (FUN_0c01ef2a(t12, t13, t14, t15, t43));
                        if (t12 != 0) {
                            u21 = (*(float *)(((int)stk + 44)));
                            u20 = (*(float *)(((int)stk + 68)));
                            u20 = (u20 - u21);
                            u20 = _builtin_fabsf(u20);
                            u22 = u20;
                            if (u26 > u22) {
                                t11 = ((int)stk + 8);
                                t32 = 0xC0E61D4;
                                t11 = (t11 + 0x20);
                                u26 = u22;
                                *(unsigned int *)(((int)stk + 24)) = t12;
                                t31 = a4;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(t31) = *(struct mv3 *)(t11); }
                                t11 = ((int)stk + 8);
                                t31 = a5;
                                t11 = (t11 + 0x14);
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(t31) = *(struct mv3 *)(t11); }
                            }
                        }
                    }
                }
            }
            t18 = (t18 + 0xC);
            t17 = (t17 + 0x1);
        }
        t11 = 0x300;
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    }
    *(volatile int *)(((int)stk + 24));
}
