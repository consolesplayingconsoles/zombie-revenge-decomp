/* Straight-line functions with calls and guards (batch gen_u): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c0401e0(int);
int FUN_0c041dd0(int);
int FUN_0c046968(int);
int FUN_0c07e24e(void);
int FUN_0c084bf6(int, int);
int FUN_0c0852bc(int);
int FUN_0c08d90a(int, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a81ac(int, int, int, int);
int FUN_0c0a9084(int);
int FUN_0c0bb0f4(int);
int FUN_0c0c62d0(int);
int FUN_0c0c99a0(int, int);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cead0(int);
int FUN_0c0da2e0(void);
int nlGetMatrix(int);
int nlPopMatrix(int);
int FUN_0c0dc5a0(void);
int nlQuickInvertMatrix(void);
int nlRotateAY(int);
int FUN_0c0dcca0(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int FUN_0c0de310(float, float, float);
int FUN_0c0df280(int, int);
int FUN_0c0e14c4(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e4428(int);
int FUN_0c0e5dc0(void);
int _quick_odd_mvn(void);
int FUN_0c0e6248(void);
int FUN_0c0ed8a8(int, int, int);
int FUN_0c21038e(void);
int FUN_0c211122(int, int);
int FUN_0c229000(int, int, int);
int ADXERR_CallErrFunc(int, ...);
int ADXSTMF_Create(int, int, int, int);
int FUN_0c232624(int, int, int);
int FUN_0c23382c(int, int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int check_valid(int);
int convert_support(int);
int fmMngRead(int, int);
int fmcalccrc(int, int, int, int);
int kdDevGetControllerInfo(int, int);
int kdGetDriverMode(int);
int kmSetUserClipping(int, int, int, int, int, int);
int kmiRegisterPhIntHandler(int);
int mpdrv_memset_l(int, int, int);
int mwRnaErrCallFunc(int);
int vmsfs_c_getstate(int);
int vmsfs_c_setfname(int, int, int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int wait_done(void);
int FUN_0c01112e(void);
int FUN_0c068d54(int a4);
int FUN_0c07a89a(int a4);
int FUN_0c075256(void);
int FUN_0c081e0c(int a4);
int FUN_0c0b264e(void);
int FUN_0c0b0bac(void);
int ADXSTM_OpenFileRange(int a4, int a5, int a6, int a7);
int FUN_0c032f8a(int a4);
int FUN_0c0212f8(int a4);
int FUN_0c0469a4(int a4);
int FUN_0c040266(int a4);
int FUN_0c06c254(void);
int FUN_0c07da2c(int a4);
int FUN_0c084ab8(int a4);
int FUN_0c0761b8(void);
int FUN_0c0a3c34(int a4, int a5);
int FUN_0c0ad26e(void);
int FUN_0c0bd65c(int a4);
int FUN_0c0c7e4e(int a4);
int FUN_0c0cbaa2(int a4);
int FUN_0c0e5288(int a4, int a5);
int FUN_0c0e5364(int a4, int a5);
int FUN_0c0d9000(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0e53c8(int a4, int a5);
int ntInfGetLoginPasswd(int a4, int a5);
int ntInfGetLoginId(int a4, int a5);
int FUN_0c0a925e(int a4);
int search_fat_free(int a4, int a5);
int search_fat_backward(int a4, int a5, int a6, int a7);
int search_fat(int a4, int a5);
int FUN_0c22baec(int a4, int a5, int a6, int a7, int a8);
int ADXB_EntryData(int a4, int a5, int a6);
int load_net_info(int a4);
int ntInfGetMailServer(int a4, int a5);
int ntInfGetPopServer(int a4, int a5);
int ntInfGetPopId(int a4, int a5);
int ntInfGetPopPasswd(int a4, int a5);
int ntInfGetMailAddress(int a4, int a5);
int ntInfGetProxyServer(int a4, int a5);
int kmiInitInterrupt(void);
void syChainInit(void);
int buRenameFile(int a4, int a5, int a6);
int _pd_peripheral_set_id(int a4, int a5);
int fmMngChkEmptyData(int a4, int a5, int a6, int a7);
int kbCfgIni(int a4, int a5, int a6);
int mpdrv_clear_deviceinfo(int a4);
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o220_float { char p[0x220]; float v; };
struct o224_float { char p[0x224]; float v; };
struct o228_float { char p[0x228]; float v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o3E_short { char p[0x3E]; short v; };
struct o3EC_float { char p[0x3EC]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o488_int { char p[0x488]; int v; };
struct o494_int { char p[0x494]; int v; };
struct o498_int { char p[0x498]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4E0_int { char p[0x4E0]; int v; };
struct o4E0_uint { char p[0x4E0]; unsigned int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o500_uint { char p[0x500]; unsigned int v; };
struct o52_ushort { char p[0x52]; unsigned short v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o544_uint { char p[0x544]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6C_ushort { char p[0x6C]; unsigned short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_ushort { char p[0x70]; unsigned short v; };
struct o74_int { char p[0x74]; int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o88_float { char p[0x88]; float v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8C_int { char p[0x8C]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_short { char p[0xA8]; short v; };
struct oC8_int { char p[0xC8]; int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



int FUN_0c01112e(void)
{
    int t0;
    int t2;

    t0 = 0x0;
    for (;;) {
        t2 = *(int *)(((FUN_0c0cead0(t0)) + 0x50));
        if (t2 == 1) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            return 0xFFFFFF01;
        }
    }
    return t0;
}




int FUN_0c081e0c(int a4)
{
    int stk[7];

    nlSubVector3op((((int)stk + 0) + 0x8), (0x254 + a4), (0x278 + a4));
    nlSubVector((((int)stk + 0) + 0x8), (0x290 + a4));
    FUN_0c0a7714(((int)stk + 0), (((int)stk + 0) + 0x4), (*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 16))));
    *(unsigned short *)((a4 + 0x3CC)) = (*(int *)(((int)stk + 0)));
    *(unsigned short *)((a4 + 0x3CE)) = (*(int *)(((int)stk + 4)));
    return (FUN_0c07e24e());
}

int FUN_0c0b264e(void)
{
    int t1;
    int t7;
    int t15;
    int t8;
    int t10;
    int t4;
    int t5;

    *(unsigned int *)0xC24FAAC = 0xC;
    t1 = *(int *)0xC23ECFC;
    if ((*(int *)0xC23A180) == 2) {
        t4 = 0xC203AE0;
        t5 = ((*(short *)((t1 + 0x2))) << 2);
    } else {
        t4 = 0xC203BC8;
        t5 = ((*(short *)((t1 + 0x2))) << 2);
    }
    t7 = *(int *)((t5 + t4));
    t15 = t4;
    if (t7 != 0) {
        t8 = t4;
        t10 = t7;
        for (;;) {
            if ((int)(*(int *)((t10 + 0x0))) <= 0) {
                break;
            }
            t8 = (*(int *)((t10 + 0x0)));
            t8 = (t8 << 2);
            t8 = (((int (*)(int))(((*(int *)((0xC203CBC + t8))))))(t10));
            t10 = (t10 + 0x1C);
        }
        t15 = t8;
    }
    return t15;
}

int FUN_0c0b0bac(void)
{
    int t7;

    FUN_0c0de310(0.0f, 0.0f, 0.0f);
    FUN_0c0852bc((*(int *)0xC23ED50));
    (((struct o10_uint *)0xC23ECE0)->v) = (FUN_0c0e14c4(0x0));
    (((struct o4_uint *)0xC23ECE0)->v) = (FUN_0c0e14c4(0x0));
    (((struct oC_uint *)0xC23ECE0)->v) = (FUN_0c0e14c4(0x0));
    (((struct o14_uint *)0xC23ECE0)->v) = (FUN_0c0e14c4(0xC0B0CB2));
    t7 = FUN_0c0e14c4(0xC0B0CF0);
    (((struct o0_uint *)0xC23ECE0)->v) = t7;
    *(unsigned int *)0xC23A190 = ((*(int *)0xC23A190) + 0x1);
    return t7;
}

int ADXSTM_OpenFileRange(int a4, int a5, int a6, int a7)
{
    int t0;
    int t4;

    t0 = FUN_0c21038e();
    if (t0 == 0) {
        ADXERR_CallErrFunc(0xC237D98);
        t4 = 0x0;
    } else {
        t4 = ADXSTMF_Create(t0, 0x0, (((a6 << 8) << 2) << 1), a7);
        FUN_0c0ed8a8((t4 + 0x40), a4, 0x20);
    }
    return t4;
}

int FUN_0c032f8a(int a4)
{
    float u0;
    float u1;
    float u7;
    float u2;

    u0 = (((struct o224_float *)(a4))->v);
    u1 = (((struct o3EC_float *)(a4))->v);
    if ((u0 > (-u1)) && ((u1 > u0) && (u2 = (((struct o34_float *)(a4))->v), !(-10.0f > u2)))) {
        (((struct o3EC_float *)(a4))->v) = 0.0f;
        (((struct o220_float *)(a4))->v) = 0.0f;
        (((struct o224_float *)(a4))->v) = 0.0f;
        (((struct o228_float *)(a4))->v) = 0.0f;
        return 0x1;
    }
    if (0.0f > ((((struct o224_float *)(a4))->v))) {
        u7 = ((((struct o224_float *)(a4))->v));
        u7 *= -0.25f;
        (((struct o224_float *)(a4))->v) = u7;
    }
    return 0x0;
}

int FUN_0c0212f8(int a4)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t16;
    int t10;

    t0 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        t5 = *(short *)(((0xC2460F4 + t2) + 0x4));
        t16 = t5;
        if (t5 != 0) {
            t0 = 0x80;
            t0 = (t0 + 0xC246074);
            t0 = (t0 + t3);
            t0 = (*(int *)((t0 + 0x0)));
            t10 = (((struct oC8_int *)(t0))->v);
            t16 = t10;
            if (t10 == 64) {
                if ((((((struct o494_int *)(t0))->v))) == a4) {
                    t0 = 0x80;
                    t0 = (t0 + 0xC246074);
                    t0 = (t0 + t4);
                    *(unsigned int *)((t0 + 0x8)) = 0x6;
                }
                t16 = 0x494;
            }
        }
        t2 = (t2 + 0x10);
        t4 = (t4 + 0x10);
        t3 = (t3 + 0x10);
        if ((unsigned int)t2 >= (unsigned int)0x200) {
            break;
        }
    }
    return t16;
}

int FUN_0c0469a4(int a4)
{
    int t0;
    int t3;

    t0 = (((struct o488_int *)(a4))->v);
    (((struct o4F8_uint *)(a4))->v) = (*(int *)(((*(int *)((t0 + 0x4))) + 0x0)));
    t3 = (((struct o4F8_int *)(a4))->v);
    if ((t3 != 2) && (t3 != 3)) {
        if ((t3 != 4) && (t3 != 5)) {
            if ((t3 != 8) && (t3 != 9)) {
                FUN_0c046968(a4);
                return 0x0;
            }
            return 0x1;
        }
        (((struct o544_uint *)(a4))->v) = (*(int *)(((*(int *)((t0 + 0x4))) + 0x4)));
        return 0x1;
    }
    (((struct o500_uint *)(a4))->v) = (*(int *)(((*(int *)((t0 + 0x4))) + 0x4)));
    return 0x1;
}

int FUN_0c040266(int a4)
{
    float t0;
    int t14;

    t0 = FUN_0c0401e0(a4);
    if (t0 > (((((struct o34_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)))) {
        (((struct o4E0_uint *)(a4))->v) = (((((struct o4E0_int *)(a4))->v)) + 0x1);
        (((struct o34_float *)(a4))->v) = t0;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        FUN_0c041dd0(a4);
        t14 = 0x1;
    } else {
        if ((((((struct o2EC_int *)(a4))->v)) & 12) != 0) {
            FUN_0c041dd0(a4);
        }
        t14 = 0x0;
    }
    return t14;
}

int FUN_0c06c254(void)
{
    int t8;
    int t2;
    int t3;
    float u5;
    int t6;
    int t7;

    t8 = 0xC23ED58;
    if ((int)(*(int *)0xC23ED50) >= (int)(*(int *)0xC23ED58)) {
        t2 = 0xA;
        t3 = 0xC0FB1C8;
        for (;;) {
            u5 = 0.5f;
            u5 = u5 + 6.10370189e-05f * (float)(FUN_0c0da2e0());
            t6 = t3;
            t3 = (t3 + 0xC);
            t7 = FUN_0c08d90a(t6, u5);
            t2 = (t2 - 0x1);
            if (t2 == 0) {
                break;
            }
        }
        t8 = t7;
    }
    return t8;
}

int FUN_0c07da2c(int a4)
{
    int t1;
    int t6;

    t1 = FUN_0c0e19aa(0xC07DA7E, 0x64, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    (((struct o48_float *)(t1))->v) = (-1.0f);
    (((struct o52_ushort *)(t1))->v) = (*(short *)((((*(int *)0xC23EDBC) << 1) + 0xC1105A0)));
    (((struct o5C_float *)(t1))->v) = (*(float *)0xC07DB50);
    t6 = FUN_0c0e5dc0();
    (((struct o58_uint *)(t1))->v) = t6;
    return t6;
}

int FUN_0c084ab8(int a4)
{
    int t1;

    t1 = 0xC1A4004;
    if ((*(int *)0xC23A180) != 1) {
        t1 = 0xC1A35FC;
    }
    (((struct o0_uint *)0xC248A7C)->v) = (unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x9)));
    (((struct o4_uint *)0xC248A7C)->v) = (unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0xA)));
    (((struct o8_uint *)0xC248A7C)->v) = (unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0xB)));
    (((struct oC_uint *)0xC248A7C)->v) = (((unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x7))) << 8) | (unsigned char)(*(signed char *)(((t1 + ((((a4 << 1) + a4) << 2) << 1)) + 0x8))));
    return 0xBB0;
}

int FUN_0c0761b8(void)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC0760C4, 0x7C, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    FUN_0c0dc5a0();
    FUN_0c0dcca0(0xC0FE638);
    nlRotateAY((*(short *)0xC0FE646));
    nlQuickInvertMatrix();
    nlGetMatrix((t1 + 0x34));
    *(unsigned short *)(((0x76 + t1) + 0x0)) = (*(short *)0xC0FE64A);
    return nlPopMatrix(0x1);
}

int FUN_0c0a3c34(int a4, int a5)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC0A3B5C, 0xB4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    (((struct o88_uint *)(t1))->v) = ((((struct o498_int *)(a4))->v));
    (((struct o8C_uint *)(t1))->v) = a5;
    (((struct o78_uint *)(t1))->v) = (*(short *)(((((((struct oA0_int *)(t1))->v)) << 1) + (*(int *)((((((struct o8C_int *)(t1))->v)) + (((((struct oA4_int *)(t1))->v)) << 2)))))));
    return 0x78;
}

int FUN_0c0ad26e(void)
{
    int t1;
    int t7;

    t1 = FUN_0c0e19aa(0xC0AD340, 0x94, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x4)) = 0xC0AD264;
    (((struct o88_float *)(t1))->v) = 2000.0f;
    (((struct o8C_float *)(t1))->v) = 6.0f;
    *(unsigned int *)((t1 + 0x30)) = (FUN_0c0e14c4(0x0));
    FUN_0c0df280((*(int *)0xC26E1D8), 0x1);
    t7 = FUN_0c0e19aa(0xC0AD11E, 0x58, (*(int *)((t1 + 0x30))));
    return FUN_0c0e19d0(t7);
}

int FUN_0c0bd65c(int a4)
{
    int t1;
    int t2;
    int t6;
    int t7;
    int t8;
    int t9;
    int t11;
    int t18;
    int t19;
    int t20;
    int t21;
    int t23;
    int t32;
    int t24;

    if ((*(int *)0xC246FF0) != 0) {
        t1 = *(int *)0xC246FF0;
        t2 = *(int *)(((0x404 + t1) + 0x0));
        if (t2 != (*(short *)0xC191978)) {
            if (t2 == (*(short *)0xC1919A0)) {
                t6 = (((((a4 << 2) + a4) << 2) << 1) + 0xC191978);
                t7 = (0x404 + t1);
                t8 = 0xC191950;
                t9 = 0x14;
                for (;;) {
                    t9 = (t9 - 0x1);
                    *(unsigned short *)((t8 + 0x0)) = (*(short *)((t6 + 0x0)));
                    t8 = (t8 + 0x2);
                    t11 = *(short *)((t6 + 0x0));
                    t6 = (t6 + 0x2);
                    *(unsigned int *)((t7 + 0x0)) = t11;
                    t7 = (t7 + 0x4);
                    if (t9 == 0) {
                        break;
                    }
                }
            }
            t24 = 0x28;
        } else {
            t18 = (((((a4 << 2) + a4) << 2) << 1) + 0xC191978);
            t19 = (0x404 + t1);
            t20 = 0xC191950;
            t21 = 0x14;
            for (;;) {
                t21 = (t21 - 0x1);
                *(unsigned short *)((t20 + 0x0)) = (*(short *)((t18 + 0x0)));
                t20 = (t20 + 0x2);
                t23 = *(short *)((t18 + 0x0));
                t18 = (t18 + 0x2);
                *(unsigned int *)((t19 + 0x0)) = t23;
                t19 = (t19 + 0x4);
                if (t21 == 0) {
                    break;
                }
            }
        }
        t32 = t24;
    }
    return t32;
}

int FUN_0c0c7e4e(int a4)
{
    int t19;
    int t24;

    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
    t19 = *(int *)((a4 + 0x30));
    if (t19 != 0) {
        t24 = t19;
        if (t19 != 1) {
        } else {
            t24 = t19;
            if ((int)(*(int *)((a4 + 0x34))) >= (int)0x1A4) {
                (((struct o0_uint *)0xC23ED44)->v) = 0x1;
                (((struct o4_uint *)0xC23ED44)->v) = 0xD;
                t24 = 0xC23ED48;
            }
        }
    } else {
        if ((int)(*(int *)((a4 + 0x34))) >= 0) {
            FUN_0c0c62d0(0xC1E9980);
            t19 = FUN_0c084bf6(0x78, 0xF0);
            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
        }
        t24 = t19;
    }
    return t24;
}

int FUN_0c0cbaa2(int a4)
{
    int t1;
    int t3;

    t1 = FUN_0c0e19aa(0xC0CB5B8, 0x177C, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x30)) = a4;
    t3 = *(int *)((a4 + 0x2E8));
    *(unsigned int *)((t1 + 0x40)) = (((int)t3 >= 0) ? (0x2 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)0x2 >> (-(int)t3 & 31)) : ((int)0x2 >> 31)));
    if ((*(int *)((a4 + 0x3E4))) == 0) {
        FUN_0c0bb0f4(a4);
    }
    FUN_0c0cbafc(0x3F2, 0x2, 0xFC000000, 0x84000000);
    return FUN_0c0c99a0(0x3F2, 0x3A3);
}

int FUN_0c0e5288(int a4, int a5)
{
    int t0;
    int t1;
    int stk[3];

    *(unsigned short *)(((((int)stk + 0) + 0x2) + 0x0)) = a4;
    *(unsigned short *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((int)stk + 2));
    t1 = *(signed char *)((0xC94C848 + (unsigned char)((((t0 << 1) + t0) << 2) << 1)));
    if (t1 != 1) {
        return t1;
    }
    return (FUN_0c0e4428((((((*(short *)(((int)stk + 0))) + 0x40) << 16) | ((((*(short *)(((int)stk + 2))) << 8) << 2) << 2)) | 0xCA1)));
}

int FUN_0c0e5364(int a4, int a5)
{
    int t0;
    int t1;
    int stk[3];

    *(unsigned short *)(((((int)stk + 0) + 0x2) + 0x0)) = a4;
    *(unsigned short *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((int)stk + 2));
    t1 = *(signed char *)((0xC94C848 + (unsigned char)((((t0 << 1) + t0) << 2) << 1)));
    if (t1 != 1) {
        return t1;
    }
    return (FUN_0c0e4428((((((*(short *)(((int)stk + 0))) + 0x40) << 16) | ((((*(short *)(((int)stk + 2))) << 8) << 2) << 2)) | 0x8A1)));
}

int FUN_0c0d9000(int a4, int a5, int a6, int a7, int a8)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t0;
    int t9;
    int t10;
    int t11;
    int t12;

    t1 = a4;
    t2 = a5;
    t3 = a6;
    t4 = a7;
    t5 = 0x0;
    t6 = a8;
    for (;;) {
        if ((t6 & 0x1) != 0) {
            t1 = 0xC944450;
            t3 = a4;
            t4 = a5;
            t2 = t5;
            t0 = (kmSetUserClipping(t1, t2, t3, t4, a6, a7));
        } else {
            t9 = t1;
            t10 = t2;
            t11 = t3;
            t12 = t4;
        }
        t5 = (t5 + 0x1);
        t1 = t9;
        t2 = t10;
        t3 = t11;
        t4 = t12;
        t6 = (t6 >> 1);
        if ((int)t5 >= (int)0x5) {
            break;
        }
    }
    return t0;
}

int FUN_0c0e53c8(int a4, int a5)
{
    int t0;
    int t1;
    int stk[3];

    *(unsigned short *)(((((int)stk + 0) + 0x2) + 0x0)) = a4;
    *(unsigned short *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((int)stk + 2));
    t1 = *(signed char *)((0xC94C848 + (unsigned char)((((t0 << 1) + t0) << 2) << 1)));
    if (t1 != 1) {
        return t1;
    }
    return (FUN_0c0e4428((((((*(short *)(((int)stk + 0))) + 0x40) << 16) | ((((*(short *)(((int)stk + 2))) << 8) << 2) << 2)) | 0x9A1)));
}

int ntInfGetLoginPasswd(int a4, int a5)
{
    int t0;
    int t3;
    int t9;
    int t11;

    t0 = check_valid(a4);
    if (t0 == 0) {
        t3 = *(int *)0xC20D134;
        t9 = a4;
        if (a4 == 0) {
            t9 = 0x1;
            if (((*(int *)((t3 + 0x0))) & 1) != 0) {
                t9 = 0x2;
            }
        }
        t11 = (0x188 + t3);
        if (t9 == 1) {
            t11 = (t3 + 0x24);
        }
        FUN_0c0ed8a8(a5, t11, 0x10);
    }
    return t0;
}

int ntInfGetLoginId(int a4, int a5)
{
    int t0;
    int t3;
    int t9;
    int t11;

    t0 = check_valid(a4);
    if (t0 == 0) {
        t3 = *(int *)0xC20D134;
        t9 = a4;
        if (a4 == 0) {
            t9 = 0x1;
            if (((*(int *)((t3 + 0x0))) & 1) != 0) {
                t9 = 0x2;
            }
        }
        t11 = (0x16C + t3);
        if (t9 == 1) {
            t11 = (t3 + 0x8);
        }
        FUN_0c0ed8a8(a5, t11, 0x1C);
    }
    return t0;
}

int FUN_0c0a925e(int a4)
{
    int t0;
    int t4;
    int t5;
    int stk[6];

    t0 = (((struct o78_int *)(a4))->v);
    FUN_0c0a81ac((*(int *)((t0 + 0x0))), ((((struct o74_int *)(a4))->v)), (a4 + 0x30), ((int)stk + 0));
    t4 = *(int *)((t0 + 0x8));
    t5 = (((struct o74_int *)(a4))->v);
    (((struct o74_uint *)(a4))->v) = (t5 + t4);
    if ((int)(t5 + t4) >= (int)(*(int *)((t0 + 0x4)))) {
        (((struct o74_uint *)(a4))->v) = 0x0;
    }
    (((struct o6C_ushort *)(a4))->v) = (*(int *)(((int)stk + 0)));
    (((struct o6E_ushort *)(a4))->v) = (*(int *)(((int)stk + 4)));
    (((struct o70_ushort *)(a4))->v) = (*(int *)(((int)stk + 8)));
    return (FUN_0c0a9084(a4));
}

int search_fat_free(int a4, int a5)
{
    int t1;
    int t2;
    int t6;
    int t7;

    t1 = *(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x30));
    if ((int)(t1 - 1) >= (int)a5) {
        t2 = (t1 - 1);
        for (;;) {
            t6 = ((int (*)(int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x24))), (t2 << 1));
            if ((unsigned short)t6 == 0xFFFC) {
                break;
            }
            t2 = (t2 - 1);
            if ((int)t2 < (int)a5) {
                return 0xFFFFFFFF;
            }
        }
        t7 = t2;
    } else {
        t7 = 0xFFFFFFFF;
    }
    return t7;
}

int search_fat_backward(int a4, int a5, int a6, int a7)
{
    int t0;
    int t4;
    int t6;
    int stk[6];

    *(unsigned short *)(((int)stk + 0)) = a5;
    if ((int)a7 >= (int)a6) {
        t0 = a7;
        for (;;) {
            t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x24))), (t0 << 1), a6, a7);
            if ((unsigned short)t4 == (unsigned short)(*(short *)(((int)stk + 0)))) {
                break;
            }
            t0 = (t0 - 1);
            if ((int)t0 < (int)a6) {
                return 0xFFFFFFFF;
            }
        }
        t6 = t0;
    } else {
        t6 = 0xFFFFFFFF;
    }
    return t6;
}

int search_fat(int a4, int a5)
{
    int t1;
    int t2;
    int t6;
    int t8;
    int stk[5];

    *(unsigned short *)(((int)stk + 0)) = a5;
    t1 = *(int *)(((*(int *)((((a4 * 0x148) + 0xC956768) + 0x1C))) + 0x30));
    if ((int)(t1 - 1) >= 0) {
        t2 = (t1 - 1);
        for (;;) {
            t6 = ((int (*)(int, int))((*(int *)(((*(int *)0xC956764) + 0xC)))))((*(int *)((((a4 * 0x148) + 0xC956768) + 0x24))), (t2 << 1));
            if ((unsigned short)t6 == (unsigned short)(*(short *)(((int)stk + 0)))) {
                break;
            }
            t2 = (t2 - 1);
            if ((int)t2 < 0) {
                return 0xFFFFFFFF;
            }
        }
        t8 = t2;
    } else {
        t8 = 0xFFFFFFFF;
    }
    return t8;
}

int FUN_0c22baec(int a4, int a5, int a6, int a7, int a8)
{
    int t1;

    if ((int)a8 <= 0) {
        return 0x0;
    }
    t1 = FUN_0c23382c((*(int *)((a4 + 0x40))), a5, a7, a6, a8);
    if (t1 != 0) {
        mwRnaErrCallFunc(0xC237F30);
    }
    *(unsigned int *)((a4 + 0x64)) = 0x1;
    return a8;
}

int ADXB_EntryData(int a4, int a5, int a6)
{
    int t8;

    if (((((struct oA8_short *)(a4))->v)) == 0) {
        (((struct o50_uint *)(a4))->v) = a5;
        *(volatile signed char *)((a4 + 0xF));
        t8 = (FUN_0c0e5dc0());
    } else {
        (((struct o50_uint *)(a4))->v) = a5;
        *(volatile signed char *)((a4 + 0xD));
        
        *(volatile signed char *)((a4 + 0xE));
        t8 = (FUN_0c0e5dc0());
    }
    (((struct o54_uint *)(a4))->v) = t8;
    (((struct o84_uint *)(a4))->v) = 0x0;
    (((struct oA0_uint *)(a4))->v) = 0x0;
    (((struct oA4_uint *)(a4))->v) = 0x0;
    return 0xA4;
}

int load_net_info(int a4)
{
    int t0;
    int t1;
    int t2;
    int t6;

    t0 = 0xC0;
    for (;;) {
        t1 = fmMngRead(t0, (((t0 - 192) * 0x3C) + a4));
        if (t1 == 0) {
            t2 = wait_done();
            if (t2 != 1) {
                t6 = t2; break;
            }
            t0 = (t0 + 0x1);
            if ((int)t0 > (int)0xCB) {
                return 0x0;
            }
            continue;
        }
        t6 = t1; break;
    }
    return t6;
}

int ntInfGetMailServer(int a4, int a5)
{
    int t0;
    int t3;
    int t9;
    int t11;

    t0 = check_valid(a4);
    if (t0 == 0) {
        t3 = *(int *)0xC20D134;
        t9 = a4;
        if (a4 == 0) {
            t9 = 0x1;
            if (((*(int *)((t3 + 0x0))) & 1) != 0) {
                t9 = 0x2;
            }
        }
        t11 = 0x248;
        if (t9 == 1) {
            t11 = 0xE4;
        }
        FUN_0c0ed8a8(a5, (t11 + t3), 0x20);
    }
    return t0;
}

int ntInfGetPopServer(int a4, int a5)
{
    int t0;
    int t3;
    int t9;
    int t11;

    t0 = check_valid(a4);
    if (t0 == 0) {
        t3 = *(int *)0xC20D134;
        t9 = a4;
        if (a4 == 0) {
            t9 = 0x1;
            if (((*(int *)((t3 + 0x0))) & 1) != 0) {
                t9 = 0x2;
            }
        }
        t11 = 0x268;
        if (t9 == 1) {
            t11 = 0x104;
        }
        FUN_0c0ed8a8(a5, (t11 + t3), 0x20);
    }
    return t0;
}

int ntInfGetPopId(int a4, int a5)
{
    int t0;
    int t3;
    int t9;
    int t11;

    t0 = check_valid(a4);
    if (t0 == 0) {
        t3 = *(int *)0xC20D134;
        t9 = a4;
        if (a4 == 0) {
            t9 = 0x1;
            if (((*(int *)((t3 + 0x0))) & 1) != 0) {
                t9 = 0x2;
            }
        }
        t11 = 0x288;
        if (t9 == 1) {
            t11 = 0x124;
        }
        FUN_0c0ed8a8(a5, (t11 + t3), 0x10);
    }
    return t0;
}

int ntInfGetPopPasswd(int a4, int a5)
{
    int t0;
    int t3;
    int t9;
    int t11;

    t0 = check_valid(a4);
    if (t0 == 0) {
        t3 = *(int *)0xC20D134;
        t9 = a4;
        if (a4 == 0) {
            t9 = 0x1;
            if (((*(int *)((t3 + 0x0))) & 1) != 0) {
                t9 = 0x2;
            }
        }
        t11 = 0x298;
        if (t9 == 1) {
            t11 = 0x134;
        }
        FUN_0c0ed8a8(a5, (t11 + t3), 0x10);
    }
    return t0;
}

int ntInfGetMailAddress(int a4, int a5)
{
    int t0;
    int t3;
    int t9;
    int t11;

    t0 = check_valid(a4);
    if (t0 == 0) {
        t3 = *(int *)0xC20D134;
        t9 = a4;
        if (a4 == 0) {
            t9 = 0x1;
            if (((*(int *)((t3 + 0x0))) & 1) != 0) {
                t9 = 0x2;
            }
        }
        t11 = 0x218;
        if (t9 == 1) {
            t11 = 0xB4;
        }
        FUN_0c0ed8a8(a5, (t11 + t3), 0x30);
    }
    return t0;
}

int ntInfGetProxyServer(int a4, int a5)
{
    int t0;
    int t3;
    int t9;
    int t11;

    t0 = check_valid(a4);
    if (t0 == 0) {
        t3 = *(int *)0xC20D134;
        t9 = a4;
        if (a4 == 0) {
            t9 = 0x1;
            if (((*(int *)((t3 + 0x0))) & 1) != 0) {
                t9 = 0x2;
            }
        }
        t11 = 0x2A8;
        if (t9 == 1) {
            t11 = 0x144;
        }
        FUN_0c0ed8a8(a5, (t11 + t3), 0x20);
    }
    return t0;
}

int kmiInitInterrupt(void)
{
    int t0;
    int t1;
    int t2;

    t0 = kmiRegisterPhIntHandler(0xC2186F0);
    *(unsigned int *)0xC9524E8 = 0x0;
    *(unsigned int *)0xC9525AC = 0x0;
    (((struct o0_uint *)0xC952674)->v) = 0x0;
    (((struct o4_uint *)0xC952674)->v) = 0x0;
    (((struct o4_uint *)0xC952800)->v) = 0x0;
    (((struct o8_uint *)0xC952800)->v) = 0x0;
    (((struct oC_uint *)0xC952800)->v) = 0x0;
    (((struct o10_uint *)0xC952800)->v) = 0x0;
    (((struct o14_uint *)0xC952800)->v) = 0x0;
    (((struct o18_uint *)0xC952800)->v) = 0x0;
    (((struct o1C_uint *)0xC952800)->v) = 0x0;
    (((struct o20_uint *)0xC952800)->v) = 0x0;
    (((struct o24_uint *)0xC952800)->v) = 0x0;
    *(unsigned int *)0xC952854 = 0x0;
    (((struct o0_uint *)0xC952800)->v) = 0x0;
    t1 = 0x0;
    for (;;) {
        t2 = (0xC952830 + t1);
        t1 = (t1 + 0x4);
        *(unsigned int *)((t2 + 0x0)) = 0x0;
        if ((unsigned int)t1 >= (unsigned int)0x14) {
            break;
        }
    }
    return t0;
}

void syChainInit(void)
{
    int t1;
    int t2;
    int stk[2];

    *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = 0xC9529E8;
    for (;;) {
        *(unsigned int *)((t1 + 0xC)) = 0x0;
        t1 = (t1 + 0x10);
        if ((unsigned int)t1 >= (unsigned int)0xC9539E8) {
            break;
        }
    }
    t2 = 0xC9539E8;
    for (;;) {
        *(unsigned int *)((t2 + 0x0)) = 0x0;
        t2 = (t2 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0xC953CE8) {
            break;
        }
    }
    _builtin_set_imask(((unsigned int)((((unsigned short)(*(short *)(((int)stk + 4))) & 0xF) << 2) << 2) >> 4));
}

int buRenameFile(int a4, int a5, int a6)
{
    int t0;
    int t4;

    t0 = vmsfs_c_getstate(a4);
    t4 = 0xFFFFFFFF;
    if (t0 != 0) {
    } else {
        vmsfs_c_setfunc(a4, 0x8);
        vmsfs_c_setparam(a4, a4, a5, a6, 0x0, 0x0, 0x0);
        vmsfs_c_setfname(a4, a5, a6);
        t4 = 0x0;
    }
    return t4;
}

int _pd_peripheral_set_id(int a4, int a5)
{
    int t2;
    int t15;
    int t23;
    int stk[4];

    if (((*(int *)((a5 + 0x0))) & 1) != 0) {
        t23 = kdDevGetControllerInfo(((int)stk + 0), a5);
        if ((int)t23 < 0) {
            *(unsigned int *)((a4 + 0x4)) = 0x0;
            *(unsigned int *)((a4 + 0x0)) = 0x0;
        } else {
            t2 = kdGetDriverMode(0x5);
            if (t2 == 1) {
                t23 = convert_support((*(int *)(((int)stk + 0))));
                *(unsigned int *)((a4 + 0x4)) = t23;
            } else {
                *(unsigned int *)((a4 + 0x4)) = (*(int *)(((int)stk + 0)));
                t23 = t2;
            }
            *(unsigned int *)((a4 + 0x0)) = (*(int *)((a4 + 0x4)));
            *(unsigned int *)((a4 + 0x24)) = (a5 + 0x14);
        }
    } else {
        t15 = kdGetDriverMode(0x5);
        if (t15 == 1) {
            t23 = convert_support((*(int *)(((int)stk + 0))));
            *(unsigned int *)((a4 + 0x4)) = t23;
        } else {
            *(unsigned int *)((a4 + 0x4)) = (*(int *)(((int)stk + 0)));
            t23 = t15;
        }
        *(unsigned int *)((a4 + 0x0)) = (*(int *)((a4 + 0x4)));
        *(unsigned int *)((a4 + 0x24)) = (a5 + 0x14);
    }
    return t23;
}

int fmMngChkEmptyData(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t7;
    int t5;
    int t6;

    t0 = 0x3C;
    t1 = (a5 + 0x2);
    for (;;) {
        t2 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        if ((unsigned char)t2 == 0xFF) {
            t0 = (t0 - 1);
            if ((int)t0 <= 0) {
                break;
            }
            continue;
        }
        return 0x0;
    }
    t3 = fmcalccrc(0x3E, a5, a6, a7);
    t7 = 0x0;
    if ((unsigned short)((((struct o3E_short *)(a5))->v)) == (unsigned short)t3) {
        t5 = 0x40;
        t6 = a5;
        for (;;) {
            if (t5 == 0) {
                break;
            }
            *(unsigned char *)((t6 + 0x0)) = 0xFF;
            t5 = (t5 - 1);
            t6 = (t6 + 0x1);
        }
        t7 = 0x1;
    }
    return t7;
}

int kbCfgIni(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t3;
    int stk[5];

    *(unsigned int *)(((int)stk + 4)) = (FUN_0c229000(a4, a5, a6));
    t1 = FUN_0c232624(0x1A05E, (((int)stk + 4) + 0x4), 0x2);
    if ((t1 == 0) && ((t2 = *(signed char *)(((((int)stk + 4) + 0x4) + 0x0)), (unsigned char)t2 != 0xFF) || (t3 = *(signed char *)(((((int)stk + 4) + 0x4) + 0x1)), (unsigned char)t3 != 0xFF))) {
        *(unsigned char *)0x8C000070 = (*(signed char *)(((((int)stk + 4) + 0x4) + 0x0)));
        *(unsigned char *)0x8C000071 = (*(signed char *)(((((int)stk + 4) + 0x4) + 0x1)));
        FUN_0c211122(0x8C000070, 0x2);
    }
    return (*(int *)(((int)stk + 4)));
}

int mpdrv_clear_deviceinfo(int a4)
{
    int t1;

    mpdrv_memset_l(a4, 0x0, 0x1E);
    (((struct o14_uchar *)(a4))->v) = 0x28;
    (((struct o15_uchar *)(a4))->v) = 0x6E;
    (((struct o16_uchar *)(a4))->v) = 0x6F;
    (((struct o17_uchar *)(a4))->v) = 0x6E;
    (((struct o18_uchar *)(a4))->v) = 0x65;
    (((struct o19_uchar *)(a4))->v) = 0x29;
    t1 = (a4 + 0x1A);
    for (;;) {
        *(unsigned char *)((t1 + 0x0)) = 0x20;
        t1 = (t1 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)(a4 + 0x33)) {
            break;
        }
    }
    (((struct o33_uchar *)(a4))->v) = 0x0;
    return 0x0;
}


