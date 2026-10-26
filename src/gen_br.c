/* Straight-line functions with calls and guards (batch gen_br): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int ADXT_Stop(void);
int FUN_0c010f58(void);
int FUN_0c0115c0(void);
int FUN_0c0161aa(int);
int FUN_0c01632c(void);
int FUN_0c01a3d8(int, int);
int FUN_0c01d562(int, int);
int FUN_0c01d984(int);
int FUN_0c020750(int, int);
int FUN_0c020c80(int, int);
int FUN_0c020ea6(int, int);
int FUN_0c0212f8(int);
int FUN_0c021e06(int);
int FUN_0c02a19a(int, int, int, int);
int FUN_0c02a416(int);
int FUN_0c0316d4(int, int);
int FUN_0c0319cc(int, int);
int FUN_0c0319f0(int, int);
int FUN_0c031a0c(int, int);
int FUN_0c0353e4(int);
int FUN_0c03593a(int);
int FUN_0c035b26(int);
int FUN_0c035ce4(int);
int FUN_0c036b64(int);
int FUN_0c038ce0(int, int);
int FUN_0c03bd28(int, int, int, int, int);
int FUN_0c04994c(int);
int FUN_0c04997c(int, int);
int FUN_0c049b80(int);
int FUN_0c04a058(int);
int FUN_0c04e0a0(int);
int FUN_0c050248(int);
int FUN_0c05025c(int);
int FUN_0c0526b8(int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c055090(int);
int FUN_0c057de4(int);
int FUN_0c05a5f0(int, int, int, int, int, float);
int FUN_0c0619e0(int);
int FUN_0c062934(int, float, float);
int FUN_0c062a74(int);
int FUN_0c07e1e8(void);
int FUN_0c084104(void);
int FUN_0c084800(float, float, float);
int FUN_0c0852bc(int);
int FUN_0c0855ba(int);
int FUN_0c0855f4(int);
int FUN_0c085638(int);
int FUN_0c08696c(int);
int FUN_0c0a6780(int, int, float, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0b3440(int);
int FUN_0c0b70a0(int);
int FUN_0c0ba6e8(int);
int FUN_0c0bb0f4(int);
int FUN_0c0bb114(int);
int FUN_0c0bb134(int);
int FUN_0c0bf940(int, int, int, int, int, int);
int FUN_0c0bfa90(void);
int FUN_0c0c4464(int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0c8e40(int, int, int, int, float);
int FUN_0c0cbaf8(void);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0ce7e0(int);
int FUN_0c0cead0(int);
int FUN_0c0cec9a(int, int, int, int, int, int);
int FUN_0c0ced14(int, int, int, int, int, int, int);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int FUN_0c0db0a0(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db640(int);
int FUN_0c0db900(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc0b0(int);
int FUN_0c0dc4c0(int);
int FUN_0c0dc510(int);
int FUN_0c0dc6e0(int);
int FUN_0c0dc890(int);
int FUN_0c0dc950(int);
int FUN_0c0dcb80(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dccc0(void);
int FUN_0c0dce40(int, int, float);
int FUN_0c0dcef0(int, int, int);
int FUN_0c0dd2f0(int, float, float, float);
int FUN_0c0de000(float);
int FUN_0c0de160(void);
int FUN_0c0de2c0(int);
int FUN_0c0de310(float, float, float);
int FUN_0c0de3a0(float, float, float);
int FUN_0c0de3b0(float, float, float);
int FUN_0c0de3f0(float, float);
int FUN_0c0e14c4(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e262a(int);
int FUN_0c0e36c4(int, int);
int FUN_0c0e3792(int, int, int, int);
int FUN_0c0e5664(int, int, int, int);
int FUN_0c0e5dc0(void);
int FUN_0c0e61d4(void);
int FUN_0c0e6284(int);
int FUN_0c218da0(void);
int buGetFileInfo(int, int, int);
int buGetFileSize(int, int);
int buLoadFileEx(int, int, int, int, int);
int buStat(int);
int cmp_fname(int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdIsChanged(int);
int kgCmiNewId(void);
int kmiFBinit(void);
int kmiInitInterrupt(void);
int kmiInitializeDevice(void);
int kmiInitializeFog(void);
int kmiInitializeTA(void);
int kmiSetTAEnvironment(int, int, int, int, int);
int mwPlySetLpFlg(int);
int mwRnaErrCallFunc(int);
int set_file_info(int, int);
int FUN_0c0d6a64(int a4, int a5, int a6);
int FUN_0c0e216c(int a4);
int search_dir(int a4, int a5, int a6);
int FUN_0c015436(int a4, int a5, int a6, int a7);
int FUN_0c01d8de(int a4);
int FUN_0c01a320(int a4, int a5);
int FUN_0c021a7e(int a4);
int FUN_0c0321fa(int a4, int a5);
int FUN_0c050bde(int a4, int a5);
int FUN_0c07e5c8(int a4);
void FUN_0c084b88(int a4);
int FUN_0c0849da(void);
int FUN_0c08edf0(int a4);
int FUN_0c0b3838(void);
int FUN_0c0bfb5c(void);
int FUN_0c0b4edc(void);
int FUN_0c0d8660(int a4, int a5, int a6, int a7);
int kdVbOverHandler(void);
int FUN_0c23382c(int a4, int a5, int a6, int a7, int a8);
int FUN_0c010db0(void);
int FUN_0c038dc8(int a4, int a5, int a6, int a7);
int FUN_0c03a92c(int a4);
int FUN_0c03c4a4(int a4);
int FUN_0c03c336(int a4);
int FUN_0c03c420(int a4);
int FUN_0c049aaa(int a4);
int FUN_0c053d60(int a4, int a5);
int FUN_0c05a81e(int a4);
int FUN_0c0ceb2a(int a4, int a5, int a6);
void FUN_0c0d8800(int a4, int a5);
float FUN_0c0e2d00(Stk4 s, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int search_dir_by_startfat(int a4, int a5);
int FUN_0c014fae(int a4, float f4);
int FUN_0c021124(void);
int FUN_0c01fc20(int a4);
int FUN_0c021c8e(void);
int FUN_0c021e50(int a4, int a5);
int FUN_0c04e1cc(int a4);
int FUN_0c04ff94(int a4, int a5);
int FUN_0c050f98(int a4);
int FUN_0c07264c(int a4);
int FUN_0c062c0a(int a4);
int FUN_0c0844dc(int a4, int a5, int a6, float f4);
int FUN_0c08b810(int a4);
int FUN_0c0a2122(int a4, int a5);
int FUN_0c0b25e4(int a4, int a5);
int FUN_0c0b33a8(int a4, int a5);
int FUN_0c0c55da(void);
int FUN_0c0cc642(int a4);
void FUN_0c0c906c(int a4, int a5, int a6, int a7, float f4);
int kmChangeContextUserClipMode(int a4);
int kmiInitializeHardware(void);
int vmsio_ismount(int a4);
int FUN_0c02d6a8(int a4);
int FUN_0c035efc(int a4);
int FUN_0c02abd0(int a4);
int FUN_0c06ddc4(int a4);
int FUN_0c08e970(int a4, int a5, float f4);
int FUN_0c092d84(int a4, int a5);
int FUN_0c092dec(int a4, int a5);
int FUN_0c092cea(int a4, int a5);
int FUN_0c0ba130(int a4);
int FUN_0c0bfd9c(int a4);
int FUN_0c0c6ac6(int a4, int a5, int a6);
float FUN_0c0cd632(int a4, float f4);
int FUN_0c0e3d3a(int a4, int a5, int a6);
int FUN_0c011658(void);
int FUN_0c016200(int a4);
int FUN_0c0208fc(int a4);
int FUN_0c020e40(int a4);
int FUN_0c021074(int a4);

int FUN_0c0d6a64(int a4, int a5, int a6)
{
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;
    int t0;
    int t1;
    int t5;

    t2 = a4;
    t3 = a5;
    t4 = a6;
    t6 = 0xC9436B4;
    for (;;) {
        if ((unsigned int)t6 >= (unsigned int)0xC943A5C) {
            break;
        }
        t0 = 0x170;
        t4 = 0x1A0;
        t1 = 0x0;
        t0 = (t0 + t6);
        t4 = (t4 + t6);
        *(unsigned int *)((t0 + 0x0)) = t1;
        t3 = t1;
        t7 = 0x3A8;
        for (;;) {
            if ((unsigned int)t3 >= (unsigned int)0x34) {
                break;
            }
            t0 = (*(int *)((t6 + 0xC)));
            t0 = (t0 * 0x34);
            t0 = (t0 + 0xC20CB64);
            t2 = (*(int *)((t3 + t0)));
            if (t2 != 0) {
                for (;;) {
                    t7 = (*(signed char *)((t2 + 0x0)));
                    if ((int)t7 < 0) {
                        break;
                    }
                    t0 = (*(signed char *)((t2 + 0x6)));
                    t2 = (t2 + 0x8);
                    t5 = t0;
                    t5 = (t5 & 0xF);
                }
                *(unsigned int *)((t4 + 0x0)) = t5;
                t3 = (t3 + 0x4);
                t4 = (t4 + 0x4);
                continue;
            }
            break;
        }
        t1 = 0x1D4;
        t6 = (t6 + t1);
    }
    return t0;
}

int FUN_0c0e216c(int a4)
{
    int t0;
    int t4;
    int t7;

    t0 = FUN_0c0e5dc0();
    *(unsigned int *)0xC94C7E4 = ((*(int *)0xC94C7E4) + 0x1);
    if (t0 == 0) {
        *(unsigned int *)((((*(int *)0xC94C7E4) << 2) + 0xC94C7C4)) = 0x0;
        *(unsigned int *)((((*(int *)0xC94C7E4) << 2) + 0xC94C7A4)) = 0x0;
        *(unsigned int *)0xC94C6F0 = 0x0;
        t7 = 0x0;
    } else {
        t4 = FUN_0c0e262a(((t0 + 0x2) << 2));
        *(unsigned int *)((((*(int *)0xC94C7E4) << 2) + 0xC94C7C4)) = t0;
        *(unsigned int *)((((t0 << 2) + t4) + 0x0)) = 0x0;
        *(unsigned int *)((((t0 << 2) + t4) + 0x4)) = 0x0;
        *(unsigned int *)((((*(int *)0xC94C7E4) << 2) + 0xC94C7A4)) = t4;
        *(unsigned int *)0xC94C6F0 = t4;
        t7 = t4;
    }
    return t7;
}

int search_dir(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t6;
    int t8;

    t1 = 0x0;
    t2 = (*(int *)((((a4 * 0x148) + 0xC956768) + 0x28)));
    for (;;) {
        if ((int)t1 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x30)))) {
            return 0xFFFFFFFF;
        }
        t6 = *(signed char *)((t2 + 0x0));
        if (((unsigned char)t6 != 51) && ((unsigned char)t6 != 0xCC)) {
            
            t2 = (t2 + 0x20);
            t1 = (t1 + 0x1);
            continue;
        }
        t8 = cmp_fname(a5, (t2 + 0x4));
        if (t8 != 0) {
            break;
        }
        t2 = (t2 + 0x20);
        t1 = (t1 + 0x1);
    }
    set_file_info(t2, a6);
    return t1;
}

int FUN_0c015436(int a4, int a5, int a6, int a7)
{
    int t6;
    int t1;
    int t2;
    int t14;
    int t16;
    int t15;
    int stk[9];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)0xC23EB14 = 0x0;
    *(unsigned int *)0xC23EB1C = 0x0;
    t6 = a5;
    if ((int)a5 >= (int)0x6) {
        t1 = 0xC1EF4AD;
        t2 = (FUN_0c010f58());
        for (;;) {
            *(unsigned char *)((t1 + 0x0)) = ((0xF & t2) + 0x30);
            t1 = (t1 - 1);
            t2 = ((int)t2 >> 4);
            if ((unsigned int)t1 <= (unsigned int)0xC1EF4AA) {
                break;
            }
        }
        t6 = 0x6;
    }
    t14 = buGetFileInfo((*(int *)(((int)stk + 4))), ((t6 * 0xD) + 0xC1EF454), (((int)stk + 4) + 0x4));
    *(unsigned int *)0xC23EB24 = t14;
    t16 = t14;
    if (t14 == 0) {
        t15 = *(signed char *)(((int)stk + 15));
        *(unsigned int *)0xC23EB28 = (unsigned char)t15;
        t16 = (unsigned char)t15;
    }
    return t16;
}

int FUN_0c01d8de(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x84));
    if (t0 != 0) {
        FUN_0c0dc510(0x0);
        FUN_0c0dccc0();
        FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
        FUN_0c0dc950((*(short *)((a4 + 0x70))));
        FUN_0c0dc890((*(short *)((a4 + 0x6E))));
        FUN_0c0dc6e0((*(short *)((a4 + 0x6C))));
        FUN_0c0db640((t0 + 0x10));
        FUN_0c0db900(0x0);
        FUN_0c0db640((t0 + 0x50));
        return FUN_0c0dc4c0(0x1);
    }
    return 0x84;
}

int FUN_0c01a320(int a4, int a5)
{
    if (a5 == 0) {
        *(float *)(((a4 << 2) + 0xC24758C)) = 0.0f;
        *(unsigned int *)(((a4 << 2) + 0xC247584)) = 0x0;
        *(unsigned int *)(((a4 << 2) + 0xC247594)) = (*(int *)0xC2475B4);
        *(unsigned int *)(((a4 << 2) + 0xC24759C)) = (*(int *)0xC2475B4);
        FUN_0c04994c(a4);
        FUN_0c0b70a0(a4);
    }
    FUN_0c0c4464((*(int *)0xC23ED50), (*(int *)(((a4 << 2) + 0xC23EDC0))), (*(int *)(((a4 << 2) + 0xC23EDD0))));
    FUN_0c0cbaf8();
    FUN_0c04997c(a4, a5);
    FUN_0c0bfd9c(a4);
    return FUN_0c0526b8(a4);
}

int FUN_0c021a7e(int a4)
{
    int t1;

    t1 = ((int (*)(int))((*(int *)((a4 + 0x484)))))(a4);
    FUN_0c01d984(a4);
    *(unsigned int *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC246394) + 0xC)) = (*(int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0)));
    *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0) + 0x0)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0) + 0x0)) = 0x0;
    *(unsigned short *)((((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC246394) + 0x4)) = 0x1;
    return 0x1;
}

int FUN_0c0321fa(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t6;
    int t3;
    int t4;
    int t10;
    int t14;
    int t11;
    int t12;
    int t20;
    int t24;
    int t21;
    int t22;
    int t30;
    int t34;
    int t31;
    int t32;
    int t36;
    int t26;
    int t16;

    t0 = *(int *)((a4 + 0x540));
    t1 = *(short *)((((t0 + 0xC) + ((a5 << 2) << 1)) + 0x2));
    t2 = *(int *)((((t0 + 0xC) + ((a5 << 2) << 1)) + 0x4));
    if ((0x3 & t2) != 0) {
        if ((0x3 & t2) != 1) {
            if ((0x3 & t2) != 2) {
                t6 = 0x0;
                if ((0x3 & t2) != 3) {
                    t3 = FUN_0c0316d4(a4, t2);
                    t4 = 0x1;
                    if (t3 == 0) {
                        t4 = 0x0;
                    }
                    t6 = t4;
                }
                t16 = t6;
            } else {
                t10 = FUN_0c031a0c(a4, t1);
                t14 = 0x0;
                if (t10 != 0) {
                    t11 = FUN_0c0316d4(a4, t2);
                    t12 = 0x1;
                    if (t11 == 0) {
                        t12 = 0x0;
                    }
                    t14 = t12;
                }
                t16 = t14;
            }
            t26 = t16;
        } else {
            t20 = FUN_0c0319f0(a4, t1);
            t24 = 0x0;
            if (t20 == 0) {
            } else {
                t21 = FUN_0c0316d4(a4, t2);
                t22 = 0x1;
                if (t21 == 0) {
                    t22 = 0x0;
                }
                t24 = t22;
            }
            t26 = t24;
        }
        t36 = t26;
    } else {
        t30 = FUN_0c0319cc(a4, t1);
        t34 = 0x0;
        if (t30 != 0) {
            t31 = FUN_0c0316d4(a4, t2);
            t32 = 0x1;
            if (t31 == 0) {
                t32 = 0x0;
            }
            t34 = t32;
        }
        t36 = t34;
    }
    return t36;
}

int FUN_0c050bde(int a4, int a5)
{
    int t1;

    FUN_0c05025c(a4);
    t1 = FUN_0c050248(a4);
    *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)((((a5 << 1) + (0xC0F8648 + ((((unsigned int)(unsigned short)t1 >> 14) << 2) << 1))) + 0x0)));
    *(unsigned int *)((a4 + 0x3AC)) = ((unsigned int)(unsigned short)t1 >> 14);
    if ((int)(*(int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247594))) > 0) {
        *(unsigned int *)((a4 + 0x3B0)) = 0xA;
    } else {
        *(unsigned int *)((a4 + 0x3B0)) = 0x0;
    }
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x20C)) = 0x800;
    *(unsigned int *)((a4 + 0x210)) = 0xB;
    return 0x210;
}

int FUN_0c07e5c8(int a4)
{
    int t1;
    int t2;
    int t3;
    int t8;
    int t11;
    int t0;

    *(unsigned int *)0xC247D6C = 0xFFFFFFFF;
    t1 = 0x0;
    t2 = (0x3B4 + a4);
    for (;;) {
        t3 = *(int *)((((t1 << 2) + 0xC247030) + 0x0));
        if ((((int)t3 >= (int)0x3) && ((int)t3 <= (int)0x5)) || (t0 = t3, t0 == 7)) {
            *(unsigned int *)((t2 + 0x0)) = t1;
            t2 = (t2 + 0x4);
            *(unsigned int *)0xC247D6C = ((*(int *)0xC247D6C) + 0x1);
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x2) {
            break;
        }
    }
    t8 = ((int (*)(int, int, int, int))((*(int *)((((*(int *)0xC247D6C) << 2) + 0xC1027A8)))))(a4, t3, 0x3, 0x2);
    t11 = ((int (*)(int))((*(int *)((((*(int *)0xC247D6C) << 2) + 0xC1027B4)))))(a4);
    return (*(int *)0xC247D6C);
}

void FUN_0c084b88(int a4)
{
    int t1;
    float u2;
    float u3;
    float u5;
    float u6;
    int t8;
    float u9;
    float u10;
    float u12;
    float u13;
    int t15;

    if ((*(int *)((a4 + 0x30))) == 0) {
        t1 = *(int *)((a4 + 0x34));
        *(unsigned int *)((a4 + 0x34)) = (t1 - 1);
        if ((int)(t1 - 1) < 0) {
            *(unsigned int *)((a4 + 0x30)) = 0x1;
            u2 = *(float *)(((0x40 + a4) + 0x0));
            u3 = *(float *)((a4 + 0x3C));
            *(float *)((a4 + 0x3C)) = (u3 + u2);
            if ((u3 + u2) > 1.0f) {
                *(float *)((a4 + 0x3C)) = 1.0f;
            }
            u5 = *(float *)((a4 + 0x3C));
            *(float *)0xC247EF0 = u5;
            *(float *)0xC247EEC = u5;
            *(float *)0xC247EE8 = u5;
            u6 = *(float *)((a4 + 0x3C));
            FUN_0c084800(u6, u6, u6);
            t8 = *(int *)((a4 + 0x38));
            *(unsigned int *)((a4 + 0x38)) = (t8 - 1);
            if ((int)(t8 - 1) <= 0) {
                FUN_0c0e19f2();
    return;
            }
            return;
        }
        return;
    }
    u9 = *(float *)(((0x40 + a4) + 0x0));
    u10 = *(float *)((a4 + 0x3C));
    *(float *)((a4 + 0x3C)) = (u10 + u9);
    if ((u10 + u9) > 1.0f) {
        *(float *)((a4 + 0x3C)) = 1.0f;
    }
    u12 = *(float *)((a4 + 0x3C));
    *(float *)0xC247EF0 = u12;
    *(float *)0xC247EEC = u12;
    *(float *)0xC247EE8 = u12;
    u13 = *(float *)((a4 + 0x3C));
    FUN_0c084800(u13, u13, u13);
    t15 = *(int *)((a4 + 0x38));
    *(unsigned int *)((a4 + 0x38)) = (t15 - 1);
    if ((int)(t15 - 1) <= 0) {
        FUN_0c0e19f2();
    return;
    }
}

int FUN_0c0849da(void)
{
    if ((*(int *)0xC247F0C) != 0) {
        FUN_0c0de3f0((*(float *)0xC247F10), (*(float *)0xC247F14));
        FUN_0c0de3a0((*(float *)0xC247EF4), (*(float *)0xC247EF8), (*(float *)0xC247EFC));
        return FUN_0c0de3b0((*(float *)0xC247F00), (*(float *)0xC247F04), (*(float *)0xC247F08));
    }
    FUN_0c0de3f0((-1.0f), (-1.0f));
    return FUN_0c0de310((*(float *)0xC247EE8), (*(float *)0xC247EEC), (*(float *)0xC247EF0));
}

int FUN_0c08edf0(int a4)
{
    int t1;
    int t4;
    int t6;
    int t7;

    t1 = FUN_0c0e19aa(0xC08EABC, 0xAC8, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    FUN_0c0e61d4();
    t4 = 0x2A7;
    for (;;) {
        FUN_0c0cbafc(t4, 0x2, 0xFC006000, 0x84002000);
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x2B7) {
            break;
        }
    }
    t6 = 0x3E9;
    for (;;) {
        t7 = FUN_0c0cbafc(t6, 0x2, 0xFC006000, 0x84002000);
        t6 = (t6 + 0x1);
        if ((int)t6 >= (int)0x3EC) {
            break;
        }
    }
    return t7;
}

int FUN_0c0b3838(void)
{
    int t13;

    *(unsigned int *)0xC23ED5C = 0x0;
    FUN_0c0dc0b0(0x3);
    FUN_0c0dccc0();
    FUN_0c0dd2f0(0x2000, (*(float *)0xC0B3918), (*(float *)0xC0B3914), (*(float *)0xC0B3910));
    FUN_0c0dc0b0(0x1);
    FUN_0c0852bc((*(int *)0xC23ED50));
    *(unsigned int *)0xC23ECF0 = (FUN_0c0e14c4(0x0));
    *(unsigned int *)0xC23ECE4 = (FUN_0c0e14c4(0xC0B39B2));
    *(unsigned int *)0xC23ECEC = (FUN_0c0e14c4(0xC0B39B6));
    *(unsigned int *)0xC23ECF4 = (FUN_0c0e14c4(0xC0B3998));
    t13 = FUN_0c0e14c4(0xC0B39A8);
    *(unsigned int *)0xC23ECE0 = t13;
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    return t13;
}

int FUN_0c0bfb5c(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0BFC10, 0x80);
    FUN_0c0e19d0(t0);
    if ((int)(*(int *)0xC23ED50) < (int)0x63) {
        *(unsigned int *)((t0 + 0x3C)) = 0x2050;
        *(unsigned int *)((t0 + 0x40)) = 0x205A;
    } else {
        *(unsigned int *)((t0 + 0x48)) = 0x2065;
        *(float *)((t0 + 0x74)) = 1.0f;
        *(float *)((t0 + 0x5C)) = 1.29999995f;
        *(unsigned int *)((t0 + 0x7C)) = 0x300A;
        *(unsigned int *)((t0 + 0x0)) = 0xC0BFB14;
    }
    *(float *)((t0 + 0x4C)) = 335.0f;
    *(float *)((t0 + 0x54)) = 0.00139999995f;
    *(float *)((t0 + 0x6C)) = 1.0f;
    *(float *)((t0 + 0x68)) = 1.0f;
    *(unsigned int *)((t0 + 0x78)) = 0xFFFFFFFF;
    return 0x78;
}

int FUN_0c0b4edc(void)
{
    int t13;
    int stk[3];

    FUN_0c0bfa90();
    FUN_0c0bf940(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    FUN_0c084104();
    FUN_0c07e1e8();
    FUN_0c0dc0b0(0x3);
    FUN_0c0dccc0();
    FUN_0c0dd2f0(0x2E39, (*(float *)0xC0B4FE8), (*(float *)0xC0B4FE4), (*(float *)0xC0B4FE0));
    FUN_0c0dc0b0(0x1);
    *(unsigned int *)0xC23ECF0 = (FUN_0c0e14c4(0x0));
    *(unsigned int *)0xC23ECE4 = (FUN_0c0e14c4(0xC0B4F6E));
    t13 = FUN_0c0e14c4(0xC0B4F72);
    *(unsigned int *)0xC23ECE0 = t13;
    *(unsigned int *)0xC23ED5C = 0x0;
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    return t13;
}

int FUN_0c0d8660(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t13;

    t0 = *(int *)0xC990E98;
    if ((int)(*(short *)(((t0 + ((a4 << 2) << 1)) + 0x4))) > (int)0x1) {
        t2 = *(short *)(((t0 + ((a4 << 2) << 1)) + 0x4));
        *(unsigned short *)(((t0 + ((a4 << 2) << 1)) + 0x4)) = (t2 - 1);
        t13 = (t2 - 1);
    } else {
        t3 = *(signed char *)(((t0 + ((a4 << 2) << 1)) + 0x3));
        t4 = *(short *)(((t0 + ((a4 << 2) << 1)) + 0x0));
        *(unsigned short *)(((t0 + ((a4 << 2) << 1)) + 0x6)) = 0xFFFFFFFF;
        *(unsigned short *)(((t0 + ((a4 << 2) << 1)) + 0x0)) = 0xFFFFFFFF;
        *(unsigned char *)(((t0 + ((a4 << 2) << 1)) + 0x2)) = 0xFFFFFFFF;
        *(unsigned short *)(((t0 + ((a4 << 2) << 1)) + 0x4)) = 0x0;
        t5 = 0xC943DC0;
        t6 = 0xC990E98;
        t7 = ((((int)t4 >> 4) << 1) + 0xC943DC0);
        t8 = (((int)(0xF & t4) >= 0) ? (0x1 << ((0xF & t4) & 31)) : ((-(int)(0xF & t4) & 31) ? ((int)0x1 >> (-(int)(0xF & t4) & 31)) : ((int)0x1 >> 31)));
        t9 = (unsigned char)t3;
        for (;;) {
            t10 = ((int)t9 > 0);
            t9 = (t9 - 1);
            if (!t10) {
                break;
            }
            t5 = (*(short *)((t7 + 0x0)));
            t6 = (~t8);
            t8 = (t8 + t8);
            t5 = (t5 & t6);
            *(unsigned short *)((t7 + 0x0)) = t5;
            if (t8 == 0x10000) {
                t7 = (t7 + 0x2);
                t8 = 0x1;
            }
        }
        t13 = 0x0;
    }
    return t13;
}

int kdVbOverHandler(void)
{
    int t1;
    int t2;

    *(unsigned int *)0xC954044 = ((*(int *)0xC954044) + 0x1);
    t1 = *(int *)0xC9542B0;
    t2 = *(short *)((((t1 << 1) + 0xC954060) + 0x0));
    *(unsigned short *)((((t1 << 1) + 0xC954060) + 0x0)) = (t2 + 0x1);
    *(unsigned int *)0xA05F6900 = 0x2000;
    return (t2 + 0x1);
}

int FUN_0c23382c(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t6;
    int t23;
    int t11;
    int t20;
    int t17;
    int t14;
    int stk[6];

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = a8;
    if (a8 == 4) {
        t0 = 0x20;
    }
    t6 = FUN_0c0e5664((*(int *)(((((*(signed char *)(((int)stk + 8))) << 2) + ((*(int *)(((int)stk + 12))) + 0x20)) + 0x0))), (*(int *)(((int)stk + 4))), a6, t0);
    t23 = t6;
    if ((int)t6 < 0) {
        if (t6 == -1) {
            t20 = (mwRnaErrCallFunc(0xC2387A4));
        } else {
            if (t6 == -2) {
                t17 = (mwRnaErrCallFunc(0xC2387D4));
            } else {
                if (t6 == -3) {
                    t14 = (mwRnaErrCallFunc(0xC238814));
                } else {
                    t11 = t6;
                    if (t6 == -4) {
                        t11 = (mwRnaErrCallFunc(0xC238854));
                    }
                    t14 = t11;
                }
                t17 = t14;
            }
            t20 = t17;
        }
        t23 = t20;
    }
    return t23;
}

int FUN_0c010db0(void)
{
    int t13;
    int t16;
    int t18;

    FUN_0c0dc510(0x0);
    FUN_0c0c465c(0x13EC);
    FUN_0c0c465c(0x13F2);
    FUN_0c0c465c(0x13E9);
    if ((*(int *)0xC23EAF4) != 0) {
        FUN_0c0dcc70((*(float *)0xC010EC8), 0.0f, 0.0f);
    }
    FUN_0c0c465c(0x13EF);
    FUN_0c0dc4c0(0x1);
    t13 = *(int *)0xC2498F4;
    if ((0xC0C0 & t13) != 0) {
        *(unsigned int *)0xC23EAF4 = ((*(int *)0xC23EAF4) ^ 0x1);
        t18 = 0xFFFFFFFF;
    } else {
        t16 = 0xFFFFFFFF;
        if ((t13 & 0xC) != 0) {
            t16 = (*(int *)0xC23EAF4);
        }
        t18 = t16;
    }
    return t18;
}

int FUN_0c038dc8(int a4, int a5, int a6, int a7)
{
    if ((*(int *)((a4 + 0x2F0))) != 0) {
        if ((*(int *)((a4 + 0x500))) != 1) {
            *(unsigned int *)((a4 + 0x4C8)) = 0x1;
        } else {
            *(unsigned int *)((a4 + 0x4C8)) = 0x0;
        }
        *(unsigned int *)((a4 + 0x4D0)) = 0x0;
        *(unsigned int *)((a4 + 0x4C4)) = 0x0;
        *(unsigned int *)((a4 + 0x4CC)) = 0x0;
        *(unsigned int *)((a4 + 0x534)) = 0x0;
        *(unsigned int *)((a4 + 0x1EC)) = 0xFFC;
        *(unsigned int *)((a4 + 0x1B0)) = 0x0;
        return FUN_0c038ce0(a4, 0x0);
    }
    *(unsigned int *)((a4 + 0x4D0)) = 0x0;
    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
    *(unsigned int *)((a4 + 0x4C4)) = 0x0;
    *(unsigned int *)((a4 + 0x4CC)) = 0x0;
    *(unsigned int *)((a4 + 0x534)) = 0x0;
    *(unsigned int *)((a4 + 0x1EC)) = 0xFFC;
    *(unsigned int *)((a4 + 0x1B0)) = 0x0;
    *(unsigned int *)((a4 + 0x55C)) = 0x0;
    *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x4;
    return FUN_0c02a19a(a4, 0x0, 0xFFC, a7);
}

int FUN_0c03a92c(int a4)
{
    int t1;
    int t3;

    FUN_0c0353e4(a4);
    t1 = *(int *)((a4 + 0x4F0));
    t3 = *(int *)((a4 + 0x5A0));
    *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)(((((t3 << 1) + (t3 << 2)) + ((*(int *)(((((t1 << 2) + t1) << 2) + 0xC1F8E4C))) + 0xFC)) + 0x4)));
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x20C)) = 0x4000;
    *(unsigned int *)((a4 + 0x210)) = 0x9;
    *(unsigned int *)((a4 + 0x4C4)) = 0x4;
    *(unsigned int *)((a4 + 0x4C8)) = 0x6;
    *(unsigned int *)((a4 + 0x4CC)) = 0x1;
    *(float *)((a4 + 0x258)) = 0.0f;
    *(float *)((a4 + 0x25C)) = 0.0f;
    *(float *)((a4 + 0x260)) = 0.0f;
    return 0x260;
}

int FUN_0c03c4a4(int a4)
{
    int t6;
    int t10;
    int t12;
    int t21;
    int t19;
    int t16;
    int stk[5];

    FUN_0c03bd28(a4, 0x1, 0x4, 0x5, 0x0);
    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        t6 = 0x5C0;
        if ((*(int *)((a4 + 0x5C0))) == 0) {
            *(unsigned int *)((a4 + 0x5C0)) = 0x1;
            t6 = (FUN_0c0cc3f8(0x21BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
        }
        t21 = t6;
    } else {
        t10 = *(int *)((a4 + 0x57C));
        if ((t10 != 0) && (t10 != 1)) {
            if ((t10 != 2) && (t10 != 3)) {
                t12 = t10;
                if (t10 != 4) {
                } else {
                    t12 = (FUN_0c0cc3f8(0x21BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                }
                t16 = t12;
            } else {
                t16 = (FUN_0c0cc3f8(0x11BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
            }
            t19 = t16;
        } else {
            t19 = (FUN_0c0cc3f8(0x1BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
        }
        t21 = t19;
    }
    return t21;
}

int FUN_0c03c336(int a4)
{
    int t6;
    int t10;
    int t12;
    int t21;
    int t19;
    int t16;
    int stk[5];

    FUN_0c03bd28(a4, 0x1, 0x0, 0x5, 0x0);
    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        t6 = 0x5C0;
        if ((*(int *)((a4 + 0x5C0))) == 0) {
            *(unsigned int *)((a4 + 0x5C0)) = 0x1;
            t6 = (FUN_0c0cc3f8(0x21BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
        }
        t21 = t6;
    } else {
        t10 = *(int *)((a4 + 0x57C));
        if ((t10 != 0) && (t10 != 1)) {
            if ((t10 != 2) && (t10 != 3)) {
                t12 = t10;
                if (t10 != 4) {
                } else {
                    t12 = (FUN_0c0cc3f8(0x21BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                }
                t16 = t12;
            } else {
                t16 = (FUN_0c0cc3f8(0x11BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
            }
            t19 = t16;
        } else {
            t19 = (FUN_0c0cc3f8(0x1BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
        }
        t21 = t19;
    }
    return t21;
}

int FUN_0c03c420(int a4)
{
    int t6;
    int t10;
    int t12;
    int t21;
    int t19;
    int t16;
    int stk[5];

    FUN_0c03bd28(a4, 0x0, 0x0, 0x5, 0x0);
    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        t6 = 0x5C0;
        if ((*(int *)((a4 + 0x5C0))) == 0) {
            *(unsigned int *)((a4 + 0x5C0)) = 0x1;
            t6 = (FUN_0c0cc3f8(0x21BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
        }
        t21 = t6;
    } else {
        t10 = *(int *)((a4 + 0x57C));
        if ((t10 != 0) && (t10 != 1)) {
            if ((t10 != 2) && (t10 != 3)) {
                t12 = t10;
                if (t10 != 4) {
                } else {
                    t12 = (FUN_0c0cc3f8(0x21BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                }
                t16 = t12;
            } else {
                t16 = (FUN_0c0cc3f8(0x11BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
            }
            t19 = t16;
        } else {
            t19 = (FUN_0c0cc3f8(0x1BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
        }
        t21 = t19;
    }
    return t21;
}

int FUN_0c049aaa(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0xBC));
    if ((*(int *)((a4 + 0x84))) != 0) {
        FUN_0c01d984(a4);
    }
    FUN_0c08696c(a4);
    FUN_0c0855f4(a4);
    FUN_0c0bb134(a4);
    FUN_0c0bb114(a4);
    *(unsigned int *)(((0xC247030 + (t0 << 2)) + 0x0)) = 0x0;
    *(unsigned int *)0xC247070 = ((*(int *)0xC247070) - 1);
    *(unsigned int *)(((0xC247484 + (t0 << 2)) + 0x0)) = 0x0;
    *(unsigned int *)(((0xC2474C4 + (t0 << 2)) + 0x0)) = 0x0;
    *(unsigned int *)((((t0 << 2) + 0xC246FF0) + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    return 0x80;
}

int FUN_0c053d60(int a4, int a5)
{
    int t0;
    int t15;
    int t5;
    int t1;
    int t2;
    int stk[7];

    *(unsigned int *)(((int)stk + 12)) = a5;
    t0 = *(int *)((a4 + 0xCC));
    t15 = 0xCC;
    if (((int)t0 < (int)0xC) && (((int)t0 >= 0) && (t1 = *(int *)((a4 + 0xCC)), t2 = *(int *)((((t1 << 2) + 0xC247030) + 0x0)), t2 != 0))) {
        t5 = *(int *)(((((*(int *)((a4 + 0xCC))) << 2) + 0xC246FF0) + 0x0));
        FUN_0c0a7714((((int)stk + 4) + 0x4), ((int)stk + 4), ((*(float *)((a4 + 0x30))) - (*(float *)((t5 + 0x30)))), ((*(float *)((a4 + 0x34))) - (*(float *)((t5 + 0x34)))), ((*(float *)((a4 + 0x38))) - (*(float *)((t5 + 0x38)))));
        t15 = (FUN_0c0546fe(a4, (*(int *)(((int)stk + 4))), 0x800, (*(int *)(((int)stk + 12)))));
    }
    return t15;
}

int FUN_0c05a81e(int a4)
{
    int t0;
    int t1;
    int t17;
    int t8;
    int t13;

    t0 = *(int *)((a4 + 0x288));
    t1 = *(int *)((t0 + 0x0));
    t17 = 0x288;
    if ((int)t1 >= 0) {
        t8 = t1;
        if ((int)t1 < (int)0x4) {
            FUN_0c05a5f0(a4, (*(int *)((((0x224 + a4) + (t1 << 2)) + 0x0))), (*(int *)((((t1 << 2) + (0x234 + a4)) + 0x0))), 0xFFFFD000, 0x0, (*(float *)0xC05A934));
            *(unsigned int *)((a4 + 0x288)) = (t0 + 0x4);
            t8 = (*(int *)(((t0 + 0x4) + 0x0)));
        }
        t13 = 0x288;
        if ((int)t8 >= 0) {
            *(unsigned int *)((a4 + 0x21C)) = 0x0;
            *(unsigned int *)((a4 + 0x270)) = ((*(int *)((a4 + 0x270))) | 0x1);
            t13 = 0x270;
        }
        t17 = t13;
    }
    return t17;
}

int FUN_0c0ceb2a(int a4, int a5, int a6)
{
    int t0;
    int t10;
    int t1;
    int t2;
    int t4;
    int t7;
    int t6;

    for (;;) {
        t0 = buGetFileSize(a4, a5);
        if (t0 != -1) {
            break;
        }
    }
    t10 = 0x0;
    if ((int)t0 >= 0) {
        t1 = a6;
        t2 = t0;
        if (a6 != 0) {
            t1 = 0x6C;
            t2 = 0x1;
        }
        t4 = FUN_0c0e262a(((t2 << 8) << 1));
        t7 = 0x0;
        if (t4 != 0) {
            for (;;) {
                t6 = buLoadFileEx(a4, a5, t4, t1, (t2));
                if (t6 == 0) {
                    break;
                }
            }
            t7 = t4;
        }
        t10 = t7;
    }
    return t10;
}

void FUN_0c0d8800(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = ((int)a4 >> 4);
    t1 = (((int)(a4 & 0xF) >= 0) ? (0x1 << ((a4 & 0xF) & 31)) : ((-(int)(a4 & 0xF) & 31) ? ((int)0x1 >> (-(int)(a4 & 0xF) & 31)) : ((int)0x1 >> 31)));
    t2 = ((int)(a5 + 0xF) >> 4);
    t3 = ((((int)a4 >> 4) << 1) + 0xC943DC0);
    for (;;) {
        t4 = ((int)t2 > 0);
        t2 = (t2 - 1);
        if (!t4) {
            break;
        }
        t0 = (*(short *)((t3 + 0x0)));
        t0 = (t0 | t1);
        t1 = (t1 + t1);
        *(unsigned short *)((t3 + 0x0)) = t0;
        if ((int)t1 >= (int)0x10000) {
            t1 = 0x1;
            t3 = (t3 + 0x2);
        }
    }
}

float FUN_0c0e2d00(Stk4 s, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u6;
    float u7;

    u0 = ((f8 - f11) * (f5 - f8));
    u0 = u0 + (f4 - f7) * (f7 - f10);
    u1 = u0;
    u1 = u1 + (f6 - f9) * (f9 - *(float *)&s.w[0]);
    u2 = ((f5 - f8) * (f5 - f8));
    u2 = u2 + (f4 - f7) * (f4 - f7);
    u3 = u2;
    u3 = u3 + (f6 - f9) * (f6 - f9);
    *(float *)0xC94C7FC = (f7 - ((f4 - f7) * (u1 / u3)));
    u6 = ((((f8 - ((f5 - f8) * (u1 / u3))) - f11)) * (((f8 - ((f5 - f8) * (u1 / u3))) - f11)));
    u6 = u6 + ((f7 - ((f4 - f7) * (u1 / u3))) - f10) * ((f7 - ((f4 - f7) * (u1 / u3))) - f10);
    *(float *)0xC94C800 = (f8 - ((f5 - f8) * (u1 / u3)));
    *(float *)0xC94C804 = (f9 - ((f6 - f9) * (u1 / u3)));
    u7 = u6;
    u7 = u7 + ((f9 - ((f6 - f9) * (u1 / u3))) - *(float *)&s.w[0]) * ((f9 - ((f6 - f9) * (u1 / u3))) - *(float *)&s.w[0]);
    return u7;
}

int search_dir_by_startfat(int a4, int a5)
{
    int t2;
    int t3;
    int t1;

    t2 = 0x0;
    t3 = (*(int *)((((a4 * 0x148) + 0xC956768) + 0x28)));
    for (;;) {
        if ((int)t2 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x30)))) {
            t1 = 0x0;
            return t1;
        }
        if ((unsigned char)(*(signed char *)((t3 + 0x0))) != 0) {
            t1 = (((int (*)(int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))(t3, 0x2));
            t1 = (unsigned short)t1;
            if (t1 == a5) {
                break;
            }
            t3 = (t3 + 0x20);
            t2 = (t2 + 0x1);
            continue;
        }
        t3 = (t3 + 0x20);
        t2 = (t2 + 0x1);
    }
    return t3;
}

int FUN_0c014fae(int a4, float f4)
{
    int t1;
    int t2;

    FUN_0c0dc510(0x0);
    t1 = a4;
    t2 = a4;
    for (;;) {
        if ((unsigned char)(*(signed char *)((t2 + 0x0))) != 22) {
            FUN_0c0c465c((*(int *)((0xC0F4A9C + ((unsigned char)(*(signed char *)((t1 + 0x0))) << 2)))));
        }
        FUN_0c0dcc70(f4, 0.0f, 0.0f);
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x1);
        if ((unsigned int)t2 >= (unsigned int)(a4 + 0x6)) {
            break;
        }
    }
    return FUN_0c0dc4c0(0x1);
}

int FUN_0c021124(void)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t8;
    int t9;
    int t1;

    t0 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        if ((unsigned short)(*(short *)(((((t2 << 2) << 2) + 0xC2460F4) + 0x4))) == 4) {
            t1 = 0x80;
            t1 = (t1 + 0xC246074);
            t1 = (t1 + t0);
            *(unsigned short *)((t1 + 0x4)) = 0x5;
        }
        t8 = *(short *)(((0xC2460F4 + t4) + 0x4));
        t2 = (t2 + 0x1);
        t9 = (unsigned short)t8;
        if ((unsigned short)t8 == 3) {
            t1 = 0x80;
            t1 = (t1 + 0xC246074);
            t1 = (t1 + t3);
            *(unsigned short *)((t1 + 0x4)) = 0x5;
            t9 = 0x5;
        }
        t4 = (t4 + 0x10);
        t3 = (t3 + 0x10);
        t0 = (t0 + 0x10);
        if ((int)t2 >= (int)0x20) {
            break;
        }
    }
    *(unsigned int *)0xC246308 = 0x0;
    return t9;
}

int FUN_0c01fc20(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0xBC));
    *(unsigned int *)(((0xC247030 + (t0 << 2)) + 0x0)) = (*(int *)(((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC246100)));
    *(unsigned int *)0xC247074 = ((*(int *)0xC247074) + 0x1);
    *(unsigned int *)(((0xC246FF0 + (t0 << 2)) + 0x0)) = a4;
    *(unsigned int *)((((t0 << 2) + 0xC246FF0) + 0x0)) = a4;
    FUN_0c01d562(a4, 0xC1EFAE0);
    *(unsigned short *)(((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC2460F8)) = 0x2;
    FUN_0c055090(a4);
    if ((*(int *)((a4 + 0x530))) != 0) {
        FUN_0c036b64(a4);
    }
    return 0x0;
}

int FUN_0c021c8e(void)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t8;
    int t9;
    int t1;

    t0 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        if ((unsigned short)(*(short *)(((((t2 << 2) << 2) + 0xC246394) + 0x4))) == 4) {
            t1 = 0x80;
            t1 = (t1 + 0xC246314);
            t1 = (t1 + t0);
            *(unsigned short *)((t1 + 0x4)) = 0x5;
        }
        t8 = *(short *)(((0xC246394 + t4) + 0x4));
        t2 = (t2 + 0x1);
        t9 = (unsigned short)t8;
        if ((unsigned short)t8 == 3) {
            t1 = 0x80;
            t1 = (t1 + 0xC246314);
            t1 = (t1 + t3);
            *(unsigned short *)((t1 + 0x4)) = 0x5;
            t9 = 0x5;
        }
        t4 = (t4 + 0x10);
        t3 = (t3 + 0x10);
        t0 = (t0 + 0x10);
        if ((int)t2 >= (int)0x10) {
            break;
        }
    }
    *(unsigned int *)0xC246494 = 0x0;
    return t9;
}

int FUN_0c021e50(int a4, int a5)
{
    int t1;
    int t9;
    int t12;

    t1 = *(short *)(((((*(int *)((a4 + 0x498))) << 2) << 2) + 0xC246398));
    t9 = a5;
    if (((unsigned short)t1 != 0) && ((unsigned short)t1 != 1)) {
        *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x0;
        *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0) + 0x0)) = 0x0;
        *(unsigned int *)(((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0) + 0x0)) = 0x0;
        t9 = 0x0;
    }
    if ((*(int *)((a4 + 0x478))) != 0) {
        t12 = ((int (*)(int, int))((*(int *)((a4 + 0x478)))))(a4, t9);
    }
    mwPlySetLpFlg(a4);
    FUN_0c01d984(a4);
    FUN_0c021e06(a4);
    return FUN_0c0e19f2();
}

int FUN_0c04e1cc(int a4)
{
    int t4;
    int t11;

    FUN_0c04e0a0(a4);
    FUN_0c0546fe(a4, ((*(short *)((a4 + 0x6E))) + (*(int *)((a4 + 0x3B4)))), 0x80, 0x1);
    t4 = *(int *)((a4 + 0x2EC));
    t11 = t4;
    if ((t4 & 12) != 0) {
        *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)((((*(int *)(((0x3B0 + a4) + 0x0))) << 1) + (*(int *)((0xC1FE2E4 + (((*(int *)((a4 + 0x340))) << 2) << 1)))))));
        *(unsigned int *)((a4 + 0x210)) = 0x5;
        *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + (*(int *)(((0x3AC + a4) + 0x0))));
        *(unsigned int *)((a4 + 0x3B0)) = 0x0;
        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
        *(unsigned int *)((a4 + 0x3B4)) = 0x0;
        t11 = 0x3B4;
    }
    return t11;
}

int FUN_0c04ff94(int a4, int a5)
{
    int t0;
    int t13;
    int t14;

    t0 = *(int *)((a4 + 0x3B4));
    *(unsigned int *)((a4 + 0x3B4)) = (t0 - 1);
    if ((int)(t0 - 1) >= 0) {
        *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) + (*(float *)(((0x258 + a4) + 0x0))));
        *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + (*(float *)(((0x260 + a4) + 0x0))));
    }
    if (((*(int *)((a5 + 0x8))) & 0x602) == 0) {
        *(unsigned int *)((a4 + 0xA4)) = ((*(int *)((a4 + 0xA4))) | 0x2);
        *(unsigned int *)((a4 + 0x1B0)) = 0x0;
        return FUN_0c049b80(a4);
    }
    t13 = *(int *)((a4 + 0x2EC));
    t14 = t13;
    if ((t13 & 12) != 0) {
        *(unsigned int *)((a4 + 0x1B0)) = 0x0;
        *(unsigned int *)((a4 + 0x210)) = 0x9C;
        *(unsigned int *)((a4 + 0x2C4)) = 0x16C;
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
        t14 = 0x3AC;
    }
    return t14;
}

int FUN_0c050f98(int a4)
{
    *(unsigned int *)((((((*(int *)((a4 + 0xBC))) << 2) << 2) << 1) + 0xC247560)) = (*(int *)0xC23ED50);
    *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x7;
    FUN_0c0ce7e0((*(int *)((a4 + 0xBC))));
    if (((*(int *)0xC23ED5C) & 0x10034) != 0) {
        FUN_0c057de4(a4);
        FUN_0c01a3d8((*(int *)((a4 + 0xBC))), 0x1);
        FUN_0c049aaa(a4);
        return FUN_0c0e19f2();
    }
    *(unsigned int *)((a4 + 0x0)) = 0xC051198;
    *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC23F25C)) = 0x383;
    return 0xC23F25C;
}

int FUN_0c07264c(int a4)
{
    float u12;
    float u13;
    float u14;
    float u16;
    float u17;

    FUN_0c0dc510(0x0);
    FUN_0c0dcca0(a4);
    FUN_0c0dc6e0((*(short *)((a4 + 0x18))));
    FUN_0c0dc890((*(short *)((a4 + 0x1A))));
    FUN_0c0dc950((*(short *)((a4 + 0x1C))));
    FUN_0c0dcb80((*(float *)((a4 + 0xC))), (*(float *)((a4 + 0x10))), (*(float *)((a4 + 0x14))));
    u12 = *(float *)((a4 + 0xC));
    u13 = *(float *)((a4 + 0x10));
    u14 = u12;
    if (!(u12 > u13)) {
        u14 = u13;
    }
    u16 = *(float *)((a4 + 0x14));
    u17 = u14;
    if (u16 > u14) {
        u17 = u16;
    }
    FUN_0c0de000(u17);
    FUN_0c0c465c((*(short *)((a4 + 0x1E))));
    return FUN_0c0dc4c0(0x1);
}

int FUN_0c062c0a(int a4)
{
    float u0;
    int t1;
    int t7;
    int t12;

    u0 = *(float *)0xC062CEC;
    t1 = FUN_0c062a74(a4);
    if (t1 == 0) {
        FUN_0c0e19f2();
    }
    FUN_0c0e61d4();
    FUN_0c062934(a4, u0, 1.0f);
    t7 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t7 - 1);
    if ((int)(t7 - 1) < 0) {
        *(unsigned int *)((a4 + 0x22C)) = (*(int *)((a4 + 0x240)));
        *(unsigned int *)((a4 + 0x0)) = 0xC062B5E;
    }
    t12 = *(int *)((a4 + 0x22C));
    if ((t12 & 15) == 0) {
        return FUN_0c0619e0(a4);
    }
    return t12;
}

int FUN_0c0844dc(int a4, int a5, int a6, float f4)
{
    int t1;
    int stk[9];

    if (a6 != 0) {
        *(float *)0xC247F34 = f4;
        *(unsigned int *)0xC247F38 = a5;
        *(unsigned int *)0xC247F3C = a4;
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = a4;
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = a5;
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = 0x0;
        t1 = 0xC247F40;
    } else {
        *(float *)0xC247F1C = f4;
        *(unsigned int *)0xC247F20 = a5;
        *(unsigned int *)0xC247F24 = a4;
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = a4;
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = a5;
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = 0x0;
        t1 = 0xC247F28;
    }
    return (FUN_0c0a6780((*(int *)(((int)stk + 4))), t1, 0.0f, 0.0f, 1.0f));
}

int FUN_0c08b810(int a4)
{
    int t0;
    int stk[7];

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = *(int *)((a4 + 0x38C));
    FUN_0c0dcef0((((int)stk + 4) + 0x4), ((((((t0 << 2) + t0) << 2) + 0xC248CBC) - 20) + 0x8), (a4 + 0x30));
    FUN_0c0dce40((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x4), (*(float *)(((((((t0 << 2) + t0) << 2) + 0xC248CBC) - 20) + 0x4))));
    FUN_0c0dbda0(((*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC))) + 0x2AC));
    FUN_0c0db4d0((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x4));
    return (FUN_0c0de2c0((((int)stk + 4) + 0x4)));
}

int FUN_0c0a2122(int a4, int a5)
{
    int t1;
    int t3;

    t1 = FUN_0c0e19aa(0xC0A1E7E, 0x214, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x30)) = a4;
    t3 = *(int *)((a4 + 0x2E8));
    *(unsigned int *)((t1 + 0x40)) = (((int)t3 >= 0) ? (0x2 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)0x2 >> (-(int)t3 & 31)) : ((int)0x2 >> 31)));
    *(unsigned int *)(((0x44 + t1) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x6)));
    *(unsigned int *)((t1 + 0x38)) = (unsigned short)(*(short *)((a5 + 0x4)));
    *(unsigned int *)((t1 + 0x48)) = 0x392;
    if ((*(int *)((a4 + 0x3E4))) == 0) {
        FUN_0c0bb0f4(a4);
    }
    return FUN_0c0cbafc(0x392, 0x2, 0xFC000000, 0x84000000);
}

int FUN_0c0b25e4(int a4, int a5)
{
    *(float *)((a4 + 0x274)) = 1.0f;
    *(float *)((a4 + 0x278)) = 1.0f;
    *(float *)((a4 + 0x27C)) = 1.0f;
    *(float *)((a4 + 0x284)) = 1.0f;
    *(unsigned int *)(((0xBC + a4) + 0x0)) = (kgCmiNewId());
    FUN_0c0e61d4();
    *(unsigned short *)((a4 + 0x6E)) = (*(int *)((a5 + 0xC)));
    *(unsigned int *)((a4 + 0xC0)) = (*(int *)((a5 + 0x4)));
    FUN_0c0855ba(a4);
    FUN_0c0ba6e8(a4);
    FUN_0c085638(a4);
    *(unsigned int *)((a4 + 0x2C4)) = (*(int *)((a5 + 0x8)));
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x288)) = 0x0;
    return 0x288;
}

int FUN_0c0b33a8(int a4, int a5)
{
    int t0;
    int t2;

    if (a5 == 0) {
        t0 = FUN_0c04a058(a4);
        *(unsigned int *)0xC23EDB0 = 0x0;
        return t0;
    }
    *(unsigned int *)0xC23EDB0 = 0x1;
    t2 = 0x40000000;
    if (((unsigned short)(*(short *)((a5 + 0xA))) & 0x100) != 0) {
        t2 = 0x20000000;
    }
    *(unsigned int *)((a4 + 0x20C)) = t2;
    *(unsigned int *)((a4 + 0xA4)) = 0xA7D;
    *(unsigned int *)((a4 + 0x0)) = 0xC0B3440;
    *(unsigned int *)((a4 + 0x3D0)) = a5;
    *(unsigned int *)(((0x3AC + a4) + 0x0)) = ((*(short *)((a5 + 0x4))) - 1);
    *(unsigned short *)(((0x6E + a4) + 0x0)) = (*(short *)((a5 + 0x8)));
    *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (*(short *)((a5 + 0x2)));
    *(unsigned int *)((a4 + 0x2E8)) = (unsigned char)(*(short *)((a5 + 0xA)));
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    return FUN_0c0b3440(a4);
}

int FUN_0c0c55da(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0C5660, 0x9C);
    FUN_0c0e19d0(t0);
    *(float *)((t0 + 0x50)) = 1.0f;
    *(float *)((t0 + 0x54)) = 1.0f;
    *(float *)((t0 + 0x40)) = 1.0f;
    *(float *)((t0 + 0x44)) = 1.0f;
    *(float *)((t0 + 0x5C)) = 1.0f;
    *(unsigned int *)((t0 + 0x64)) = 0x200A;
    *(unsigned int *)((t0 + 0x60)) = 0xFFFFFFFF;
    *(float *)0xC31FCD4 = 0.0f;
    *(float *)0xC31FCD8 = 0.0f;
    *(float *)0xC31FCDC = 1.0f;
    *(float *)0xC31FCE0 = 1.0f;
    *(float *)0xC31FCCC = 0.399999976f;
    *(float *)0xC31FCD0 = 0.399999976f;
    *(float *)0xC31FCE8 = 1.0f;
    *(unsigned int *)0xC31FCE4 = 0x0;
    *(unsigned int *)0xC31FCF0 = 0x200A;
    *(unsigned int *)0xC31FCEC = 0xFFFFFFFF;
    return 0x2C;
}

int FUN_0c0cc642(int a4)
{
    int t4;
    int t9;
    int t15;
    int t13;
    int t27;
    int t21;

    if ((*(int *)0xC52292C) == a4) {
        *(volatile int *)0xC5158E8;
        t4 = ADXT_Stop();
        *(unsigned int *)0xC522928 = ((*(int *)0xC522928) & (~a4));
        *(unsigned int *)0xC52292C = 0x0;
        t27 = t4;
    } else {
        if ((*(int *)0xC522930) == a4) {
            *(volatile int *)0xC5158EC;
            t9 = ADXT_Stop();
            *(unsigned int *)0xC522928 = ((*(int *)0xC522928) & (~a4));
            *(unsigned int *)0xC522930 = 0x0;
            t21 = t9;
        } else {
            t15 = 0xC522934;
            if ((*(int *)0xC522934) == a4) {
                *(volatile int *)0xC5158F0;
                t13 = ADXT_Stop();
                *(unsigned int *)0xC522928 = ((*(int *)0xC522928) & (~a4));
                *(unsigned int *)0xC522934 = 0x0;
                t15 = t13;
            }
            t21 = t15;
        }
        t27 = t21;
    }
    return t27;
}

void FUN_0c0c906c(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int stk[9];

    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a7;
    t0 = *(int *)((a4 + 0x4));
    if (((int)a6 >= 0) && (((int)a6 < (int)t0) && ((a6 != (t0 - 1)) || (f4 == 0.0f)))) {
        FUN_0c0db0a0(0x1E, 0x1);
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((a6 << 2) + (*(int *)((a4 + 0x8))))));
        *(unsigned int *)(((int)stk + 4)) = (*(int *)((((a6 << 2) + (*(int *)((a4 + 0x8)))) + 0x4)));
        FUN_0c0c8e40((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x4), ((int)stk + 4), (*(int *)(((int)stk + 12))), f4);
        FUN_0c0dbda0(0xC31FD40);
    }
}

int kmChangeContextUserClipMode(int a4)
{
    int t0;

    t0 = *(int *)0xC952878;
    *(unsigned int *)0xC952878 = (((t0 & 0xFFFCFFFF) | (a4 << 16)) | 0x800000);
    *(unsigned int *)0xC239B2C = (((t0 & 0xFFFCFFFF) | (a4 << 16)) | 0x800000);
    return 0x0;
}

int kmiInitializeHardware(void)
{
    FUN_0c218da0();
    kmiInitializeDevice();
    kmiInitializeTA();
    kmiFBinit();
    kmiInitInterrupt();
    kmiInitializeFog();
    *(unsigned int *)0xC952754 = 0x100000;
    *(unsigned int *)0xC952758 = 0x0;
    *(unsigned int *)0xC95275C = 0x0;
    *(unsigned int *)0xC952760 = 0x0;
    return (kmiSetTAEnvironment(((unsigned int)(*(int *)0xC952368) >> 7), ((unsigned int)(*(int *)0xC95236C) >> 7), ((unsigned int)(*(int *)0xC952370) >> 7), ((unsigned int)(*(int *)0xC952374) >> 7), ((*(int *)0xC952364))));
}

int vmsio_ismount(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;

    t0 = *(int *)(((a4 << 2) + 0xC2382DC));
    t1 = kdGetDevice(t0);
    t2 = kdGetDeviceInfo(t0);
    if ((*(signed char *)((t1 + 0x0))) != 0) {
        t4 = kdIsChanged(t0);
        if ((t4 == 0) && (t5 = *(int *)((t2 + 0x0)), (t5 & 2) != 0)) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c02d6a8(int a4)
{
    int t0;
    int t9;
    int t11;

    t0 = *(int *)((a4 + 0x488));
    *(unsigned int *)((t0 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t0 + 0x1EC)) = (*(int *)((a4 + 0x1EC)));
    *(unsigned int *)((t0 + 0x200)) = 0x1;
    *(unsigned int *)((t0 + 0x1E8)) = 0x1;
    *(unsigned int *)((t0 + 0x1F4)) = 0x5;
    *(unsigned int *)((t0 + 0x204)) = 0x0;
    *(float *)((t0 + 0x1E4)) = (*(float *)0xC02D738);
    *(unsigned int *)((t0 + 0x1FC)) = 0x1;
    *(unsigned int *)((t0 + 0x1F8)) = 0x3;
    *(unsigned int *)((t0 + 0xD8)) = 0x0;
    if ((*(int *)0xC247030) != 4) {
        *(unsigned int *)((t0 + 0x1EC)) = ((*(int *)((t0 + 0x1EC))) | 0x1);
    }
    t9 = *(int *)0xC247034;
    t11 = t9;
    if (t9 != 4) {
        *(unsigned int *)((t0 + 0x1EC)) = ((*(int *)((t0 + 0x1EC))) | 0x2);
        t11 = 0x1EC;
    }
    return t11;
}

int FUN_0c035efc(int a4)
{
    int t24;
    int t1;
    int t2;
    int t3;

    if (((int)(*(int *)((a4 + 0x4DC))) <= 0) && ((t1 = *(int *)((a4 + 0x1BC)), t1 == 0) && ((t2 = *(int *)((a4 + 0x304)), (int)t2 > 0) && (t3 = *(int *)((a4 + 0x4D0)), t3 == 0)))) {
        t24 = *(int *)((a4 + 0x4F8));
        if (t24 != 1) {
            if (t24 != 9) {
                return 0x0;
            }
            if ((*(int *)((a4 + 0x48C))) == 51) {
                return 0x8;
            }
            if ((0x300 & (*(int *)((a4 + 0xC8)))) == 0) {
                return 0x4;
            }
            return 0x2;
        }
        if ((*(int *)((a4 + 0x48C))) != 51) {
            if ((0x300 & (*(int *)((a4 + 0xC8)))) == 0) {
                return 0x1;
            }
            return 0x2;
        }
        return 0x8;
    }
    return 0x0;
}

int FUN_0c02abd0(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;

    t0 = FUN_0c02a416(a4);
    if (t0 == 0) {
        t1 = FUN_0c03593a(a4);
        if (t1 != 0) {
            t2 = FUN_0c035b26(a4);
            if (t2 != 0) {
                t3 = FUN_0c035ce4(a4);
                if (t3 != 0) {
                    *(unsigned int *)((a4 + 0x4F8)) = 0x4;
                    return 0x4F8;
                }
                *(unsigned int *)((a4 + 0x538)) = 0xA;
                *(unsigned int *)((a4 + 0x554)) = 0x1;
                *(unsigned int *)((a4 + 0x4F8)) = 0x0;
                t4 = *(int *)((a4 + 0x4F0));
                t5 = *(int *)(((((t4 << 2) + t4) << 2) + 0xC1F8E3C));
                return ((int (*)(int))(t5))(a4);
            }
            *(unsigned int *)((a4 + 0x538)) = 0xA;
            *(unsigned int *)((a4 + 0x554)) = 0x1;
            *(unsigned int *)((a4 + 0x4F8)) = 0x0;
            t6 = *(int *)((a4 + 0x4F0));
            t7 = *(int *)(((((t6 << 2) + t6) << 2) + 0xC1F8E3C));
            return ((int (*)(int))(t7))(a4);
        }
        *(unsigned int *)((a4 + 0x538)) = 0x1;
        *(unsigned int *)((a4 + 0x554)) = 0x1;
        *(unsigned int *)((a4 + 0x4F8)) = 0x0;
        t8 = *(int *)((a4 + 0x4F0));
        t9 = *(int *)(((((t8 << 2) + t8) << 2) + 0xC1F8E3C));
        return ((int (*)(int))(t9))(a4);
    }
    *(unsigned int *)((a4 + 0x538)) = 0xA;
    *(unsigned int *)((a4 + 0x554)) = 0x1;
    *(unsigned int *)((a4 + 0x4F8)) = 0x0;
    t10 = *(int *)((a4 + 0x4F0));
    t11 = *(int *)(((((t10 << 2) + t10) << 2) + 0xC1F8E3C));
    return ((int (*)(int))(t11))(a4);
}

int FUN_0c06ddc4(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC06DC1A, 0x58, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x30)) = a4;
    *(float *)((t1 + 0x34)) = (*(float *)((a4 + 0x30)));
    *(float *)((t1 + 0x38)) = (*(float *)((a4 + 0x34)));
    *(float *)((t1 + 0x3C)) = (*(float *)((a4 + 0x38)));
    *(unsigned short *)((t1 + 0x4C)) = 0x0;
    *(unsigned short *)((t1 + 0x4E)) = (*(short *)((a4 + 0x62)));
    *(unsigned short *)((t1 + 0x50)) = 0x0;
    *(float *)((t1 + 0x40)) = 0.0f;
    *(float *)((t1 + 0x44)) = 22.8799953f;
    *(float *)((t1 + 0x48)) = 1.29999995f;
    *(unsigned short *)((t1 + 0x52)) = 0x99;
    return 0x52;
}

int FUN_0c08e970(int a4, int a5, float f4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC08E7D4, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    FUN_0c0e61d4();
    *(unsigned short *)((t1 + 0x8A)) = a5;
    *(float *)((t1 + 0x90)) = f4;
    *(unsigned short *)((t1 + 0x9A)) = 0x302;
    *(unsigned short *)((t1 + 0x9C)) = 0x1;
    *(unsigned short *)((t1 + 0xA0)) = 0xE;
    *(unsigned short *)((t1 + 0x98)) = (*(short *)((t1 + 0xA0)));
    *(unsigned short *)((t1 + 0x8E)) = 0x1E;
    *(float *)((t1 + 0x94)) = (float)(*(short *)((t1 + 0x8E)));
    return 0x94;
}

int FUN_0c092d84(int a4, int a5)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC0931EC, 0xB4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x80)) = (unsigned char)(*(signed char *)(((((a5 << 2) << 1) + 0xC10B8FC) + 0x0)));
    *(unsigned int *)(((0xA0 + t1) + 0x0)) = (unsigned char)(*(signed char *)(((((a5 << 2) << 1) + 0xC10B8FC) + 0x1)));
    *(unsigned int *)(((0xA4 + t1) + 0x0)) = (unsigned short)(*(short *)(((((a5 << 2) << 1) + 0xC10B8FC) + 0x2)));
    *(unsigned int *)((t1 + 0x8C)) = (*(int *)(((((a5 << 2) << 1) + 0xC10B8FC) + 0x4)));
    *(unsigned int *)((t1 + 0x78)) = (*(int *)((a4 + 0xC0)));
    *(unsigned int *)((t1 + 0x88)) = (*(int *)((a4 + 0xBC)));
    return 0x88;
}

int FUN_0c092dec(int a4, int a5)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC093262, 0xB4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x80)) = (unsigned char)(*(signed char *)(((((a5 << 2) << 1) + 0xC10B8FC) + 0x0)));
    *(unsigned int *)(((0xA0 + t1) + 0x0)) = (unsigned char)(*(signed char *)(((((a5 << 2) << 1) + 0xC10B8FC) + 0x1)));
    *(unsigned int *)(((0xA4 + t1) + 0x0)) = (unsigned short)(*(short *)(((((a5 << 2) << 1) + 0xC10B8FC) + 0x2)));
    *(unsigned int *)((t1 + 0x8C)) = (*(int *)(((((a5 << 2) << 1) + 0xC10B8FC) + 0x4)));
    *(unsigned int *)((t1 + 0x78)) = (*(int *)((a4 + 0xC0)));
    *(unsigned int *)((t1 + 0x88)) = (*(int *)((a4 + 0xBC)));
    return 0x88;
}

int FUN_0c092cea(int a4, int a5)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC09312A, 0xB4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x80)) = (unsigned char)(*(signed char *)(((((a5 << 2) << 1) + 0xC10B8FC) + 0x0)));
    *(unsigned int *)(((0xA0 + t1) + 0x0)) = (unsigned char)(*(signed char *)(((((a5 << 2) << 1) + 0xC10B8FC) + 0x1)));
    *(unsigned int *)(((0xA4 + t1) + 0x0)) = (unsigned short)(*(short *)(((((a5 << 2) << 1) + 0xC10B8FC) + 0x2)));
    *(unsigned int *)((t1 + 0x8C)) = (*(int *)(((((a5 << 2) << 1) + 0xC10B8FC) + 0x4)));
    *(unsigned int *)((t1 + 0x78)) = (*(int *)((a4 + 0xC0)));
    *(unsigned int *)((t1 + 0x88)) = (*(int *)((a4 + 0xBC)));
    return 0x88;
}

int FUN_0c0ba130(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC0BA57C, 0x50, (*(int *)0xC23ECF4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x3C)) = a4;
    *(unsigned int *)((t1 + 0x40)) = (unsigned short)(*(short *)((((*(int *)((0xC23EDC0 + (((a4 + 0x1) & 0x1) << 2)))) << 1) + 0xC204708)));
    *(float *)((t1 + 0x30)) = 4.99999987e-05f;
    *(float *)((t1 + 0x34)) = 4.99999987e-05f;
    *(float *)((t1 + 0x38)) = 4.99999987e-05f;
    *(unsigned int *)((t1 + 0x48)) = 0x5;
    if ((*(int *)((t1 + 0x40))) == 0) {
        *(unsigned int *)((t1 + 0x44)) = 0x1;
    }
    return FUN_0c0212f8(a4);
}

int FUN_0c0bfd9c(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC0BFE40, 0xB0, (*(int *)0xC23ECF4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x6C)) = a4;
    *(unsigned int *)((t1 + 0x88)) = (0xC1A4724 + (((a4 << 2) + a4) << 2));
    *(unsigned int *)((t1 + 0x8C)) = ((((a4 << 2) + a4) << 2) + 0xC1A474C);
    *(float *)((t1 + 0x40)) = 1.0f;
    *(float *)((t1 + 0x44)) = 1.0f;
    *(float *)((t1 + 0x54)) = 1.0f;
    *(float *)((t1 + 0x50)) = 1.0f;
    *(float *)((t1 + 0x3C)) = 0.00139999995f;
    *(float *)((t1 + 0x5C)) = 1.0f;
    *(unsigned int *)((t1 + 0x60)) = 0xFFFFFFFF;
    return 0x60;
}

int FUN_0c0c6ac6(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t11;

    if ((int)a4 > (int)0x1869F) {
        t11 = (FUN_0c0e6284(a4));
    } else {
        t1 = a4;
        t2 = a6;
        t3 = 0xC1E981A;
        t4 = 0x0;
        t5 = 0x5;
        for (;;) {
            t6 = *(short *)((t3 + 0x0));
            t3 = (t3 + 0x2);
            t7 = 0x0;
            for (;;) {
                t1 = (t1 - (unsigned short)t6);
                if ((int)t1 < 0) {
                    break;
                }
                t7 = (t7 + 0x1);
            }
            t1 = (t1 + (unsigned short)t6);
            if ((t7 != 0) || ((t4 != 0) || (t5 == 1))) {
                t4 = 0x1;
                *(unsigned char *)((t2 + 0x0)) = (t7 + 0x30);
                t2 = (t2 + 0x1);
            }
            t5 = (t5 - 0x1);
            if (t5 == 0) {
                break;
            }
        }
        t11 = (FUN_0c0e6284(t1));
    }
    return t11;
}

float FUN_0c0cd632(int a4, float f4)
{
    int t4;
    float u7;
    float u10;

    t4 = FUN_0c0d9dc0(((*(float *)((a4 + 0x2C))) - (*(float *)((a4 + 0x34)))), ((*(float *)((a4 + 0x30))) - (*(float *)((a4 + 0x38)))));
    u7 = (*(float *)(((a4 + 0x34) + 0x0)));
    u7 = u7 + f4 * (FUN_0c0d9e90((short)t4));
    *(float *)(((a4 + 0x34) + 0x0)) = u7;
    u10 = (*(float *)(((a4 + 0x38) + 0x0)));
    u10 = u10 + f4 * (FUN_0c0da410((short)t4));
    *(float *)(((a4 + 0x38) + 0x0)) = u10;
    *(unsigned short *)((a4 + 0x2A)) = (short)t4;
    return f4;
}

int FUN_0c0e3d3a(int a4, int a5, int a6)
{
    int t2;
    int t3;
    int stk[9];

    *(unsigned int *)(((int)stk + 28)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    t2 = FUN_0c0e36c4((*(int *)(((int)stk + 28))), (*(int *)(((int)stk + 24))));
    *(unsigned int *)(((int)stk + 8)) = t2;
    if (t2 != 0) {
        return t2;
    }
    t3 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 16)) = (*(int *)((t3 + 0x8)));
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((t3 + 0x4)));
    *(unsigned int *)0xC94C83C = (FUN_0c0e3792((*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))), ((int)stk + 4)));
    *(unsigned int *)0xC94C838 = (*(int *)(((int)stk + 28)));
    *(unsigned int *)0xC94C828 = 0x1;
    *(unsigned int *)0xC94C82C = (*(int *)(((int)stk + 20)));
    *(unsigned int *)0xC94C830 = (*(int *)(((int)stk + 16)));
    *(unsigned int *)0xC94C834 = (*(int *)(((int)stk + 4)));
    return 0x0;
}

int FUN_0c011658(void)
{
    int t13;

    FUN_0c0dc0b0(0x3);
    FUN_0c0dccc0();
    FUN_0c0dd2f0((*(int *)0xC1EF554), 1.33333325f, (*(float *)0xC1EF558), 300.0f);
    FUN_0c0dc0b0(0x2);
    FUN_0c0de160();
    FUN_0c0dc0b0(0x1);
    FUN_0c0dccc0();
    FUN_0c0dcb80(0.949999988f, 0.899999976f, 0.949999988f);
    FUN_0c0115c0();
    t13 = ((int (*)(void))((*(int *)((((*(int *)0xC23A190) << 2) + 0xC1EF510)))))();
    return FUN_0c01632c();
}

int FUN_0c016200(int a4)
{
    int t24;
    int t3;
    int t18;
    int t8;
    int t9;
    int t13;
    int stk[8];

    *(unsigned int *)0xC23EB20 = (*(int *)0xC23EB38);
    t24 = 0x0;
    if ((int)(*(int *)0xC23EB38) >= 0) {
        t3 = FUN_0c0cead0((*(int *)0xC23EB38));
        t18 = 0x0;
        if ((*(int *)((t3 + 0x50))) == 1) {
            FUN_0c0cec9a((*(int *)0xC23EB20), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
            *(unsigned int *)0xC23EB34 = 0x0;
            for (;;) {
                t8 = buStat((*(int *)0xC23EB20));
                if (t8 == 0) {
                    break;
                }
            }
            t9 = FUN_0c0161aa((t3 + 0x48));
            t13 = 0x1;
            if (t9 == (*(int *)0xC23EB3C)) {
            } else {
                FUN_0c0ced14((*(int *)0xC23EB20), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
                t13 = 0x0;
            }
            t18 = t13;
        }
        t24 = t18;
    }
    return t24;
}

int FUN_0c0208fc(int a4)
{
    int t14;
    int t1;
    int t8;

    t14 = 0xFFFFFFFF;
    if ((int)(*(int *)0xC247074) < (int)0x8) {
        t1 = 0x4;
        for (;;) {
            if ((*(int *)((((t1 << 2) + 0xC247030) + 0x0))) != 0) {
                t1 = (t1 + 0x1);
                if ((int)t1 >= (int)0xC) {
                    break;
                }
                continue;
            }
            break;
        }
        if ((int)t1 >= (int)0xC) {
            t8 = 0xFFFFFFFF;
        } else {
            FUN_0c020750(t1, a4);
            *(unsigned int *)((((t1 << 2) + 0xC247030) + 0x0)) = 0x2;
            *(unsigned int *)0xC247074 = ((*(int *)0xC247074) + 0x1);
            t8 = t1;
        }
        t14 = t8;
    }
    return t14;
}

int FUN_0c020e40(int a4)
{
    int t14;
    int t1;
    int t8;

    t14 = 0xFFFFFFFF;
    if ((int)(*(int *)0xC247074) < (int)0x8) {
        t1 = 0x4;
        for (;;) {
            if ((*(int *)((((t1 << 2) + 0xC247030) + 0x0))) != 0) {
                t1 = (t1 + 0x1);
                if ((int)t1 >= (int)0xC) {
                    break;
                }
                continue;
            }
            break;
        }
        if ((int)t1 >= (int)0xC) {
            t8 = 0xFFFFFFFF;
        } else {
            FUN_0c020c80(t1, a4);
            *(unsigned int *)((((t1 << 2) + 0xC247030) + 0x0)) = 0x2;
            *(unsigned int *)0xC247074 = ((*(int *)0xC247074) + 0x1);
            t8 = t1;
        }
        t14 = t8;
    }
    return t14;
}

int FUN_0c021074(int a4)
{
    int t14;
    int t1;
    int t8;

    t14 = 0xFFFFFFFF;
    if ((int)(*(int *)0xC247074) < (int)0x8) {
        t1 = 0x4;
        for (;;) {
            if ((*(int *)((((t1 << 2) + 0xC247030) + 0x0))) != 0) {
                t1 = (t1 + 0x1);
                if ((int)t1 >= (int)0xC) {
                    break;
                }
                continue;
            }
            break;
        }
        if ((int)t1 >= (int)0xC) {
            t8 = 0xFFFFFFFF;
        } else {
            FUN_0c020ea6(t1, a4);
            *(unsigned int *)((((t1 << 2) + 0xC247030) + 0x0)) = 0x2;
            *(unsigned int *)0xC247074 = ((*(int *)0xC247074) + 0x1);
            t8 = t1;
        }
        t14 = t8;
    }
    return t14;
}
