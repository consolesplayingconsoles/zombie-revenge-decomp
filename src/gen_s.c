/* Straight-line functions with calls and guards (batch gen_s): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXSTM_Close(int);
int FUN_0c022e60(int, float);
int FUN_0c02a19a(int);
int FUN_0c034134(int, float);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c0350a4(int, int, int, int);
int FUN_0c04fdb0(int);
int FUN_0c055090(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0a9084(int);
int FUN_0c0bf908(int);
int FUN_0c0bfa90(void);
int FUN_0c0c473c(int);
int FUN_0c0c4898(int, float);
int FUN_0c0cbe74(int, int, int);
int FUN_0c0cc6dc(void);
int FUN_0c0cc752(int);
int FUN_0c0d80c0(int);
float FUN_0c0da410(int);
float FUN_0c0da560(int, float);
float FUN_0c0da610(int, float);
int nlMultiMatrixRevOrder(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0dcc70(float, float, float);
int nlUnitMatrix(void);
int FUN_0c0de000(float);
int nlObjPut(int);
int FUN_0c0de310(float, float, float);
int FUN_0c0e14c4(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e18ce(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e49a0(int, int, int);
int FUN_0c0e4ece(int, int, int);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(void);
int _quick_evn_mvn(void);
int _quick_odd_mvn(void);
int FUN_0c2212e0(int);
int FUN_0c22b402(int, int);
int FUN_0c22b6c8(int);
int FUN_0c22b6e0(int);
int FUN_0c22ba6a(void);
int FUN_0c22bece(int, int);
int FUN_0c22bfa2(int, int);
extern void _builtin_set_imask(int);
int check_valid(int);
int mwRnaErrCallFunc(int, int, int, int);
int str_len(int);
int syChainAddHandler(int, int, int, int);
int syChainDeleteHandler(int);
int vmsfs_c_getstate(int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int FUN_0c011c6c(void);
int FUN_0c0245ec(int a4);
int FUN_0c030592(int a4);
int FUN_0c01d276(int a4, int a5, int a6, int a7);
int FUN_0c0548cc(int a4);
int FUN_0c054918(int a4);
int FUN_0c032f3e(int a4);
int FUN_0c06ab38(void);
int FUN_0c024170(int a4, float f4);
int FUN_0c06ea7e(int a4, int a5, int a6, int a7);
int FUN_0c07c8ea(int a4);
int FUN_0c08498e(float f4, float f5, float f6);
int FUN_0c086c1e(int a4, int a5, int a6, float f4);
int FUN_0c08f5d0(int a4, int a5);
int FUN_0c0b8590(void);
int FUN_0c04fd64(void);
int FUN_0c0d70c8(int a4);
int FUN_0c0d6592(int a4, int a5);
void FUN_0c0da510(float f4);
int FUN_0c0a92b0(int a4);
void FUN_0c0da5c0(float f4);
int nlObjPutSetSaturate(float f4, float f5);
int FUN_0c0e5008(int a4, int a5, int a6);
int adxf_CloseSjStm(int a4);
int gdFsStrncmpi(int a4, int a5, int a6);
int FUN_0c22c598(int a4, int a5, int a6, int a7);
int FUN_0c2339e8(int a4, int a5, int a6, int a7);
int FUN_0c0a447c(int a4, int a5);
int FUN_0c0ae1ae(void);
int FUN_0c0b70b4(void);
void FUN_0c0bfa46(int a4);
int FUN_0c0c47ae(int a4);
void sys_init(void);
int FUN_0c0e4428(int a4);
int FUN_0c0e631c(int a4, int a5, int a6, int a7);
int FUN_0c0e6490(int a4, int a5);
int FUN_0c0e6550(int a4, int a5);
int ntInfGetProxyPortNum(int a4, int a5);
int buReadFile(int a4, int a5, int a6);
int buWriteFile(int a4, int a5, int a6);
void syChainMasterHandlerPVR_V(void);
int cmp_fname(int a4, int a5);
int FUN_0c22ba6e(int a4, int a5, int a6, int a7);
int FUN_0c23379c(int a4, int a5);
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o258_float { char p[0x258]; float v; };
struct o260_float { char p[0x260]; float v; };
struct o26C_float { char p[0x26C]; float v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_short { char p[0x30]; short v; };
struct o32_short { char p[0x32]; short v; };
struct o32_ushort { char p[0x32]; unsigned short v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3B0_int { char p[0x3B0]; int v; };
struct o3B8_int { char p[0x3B8]; int v; };
struct o3B8_uint { char p[0x3B8]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o400_int { char p[0x400]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C4_uint { char p[0x4C4]; unsigned int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4F0_int { char p[0x4F0]; int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5B8_uint { char p[0x5B8]; unsigned int v; };
struct o5BC_uint { char p[0x5BC]; unsigned int v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o62_short { char p[0x62]; short v; };
struct o64_short { char p[0x64]; short v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o70_short { char p[0x70]; short v; };
struct o78_float { char p[0x78]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct o90_int { char p[0x90]; int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };




int FUN_0c011c6c(void)
{
    (((struct o30_uint *)0xC23EAC0)->v) = 0x0;
    (((struct o2C_uint *)0xC23EAC0)->v) = 0x0;
    (((struct o20_uint *)0xC23EAC0)->v) = 0x0;
    (((struct o1C_uint *)0xC23EAC0)->v) = 0x0;
    (((struct o18_uint *)0xC23EAC0)->v) = 0x0;
    (((struct o14_uint *)0xC23EAC0)->v) = 0x0;
    (((struct o10_uint *)0xC23EAC0)->v) = 0x0;
    (((struct oC_uint *)0xC23EAC0)->v) = 0x0;
    (((struct o8_uint *)0xC23EAC0)->v) = 0x0;
    (((struct o4_uint *)0xC23EAC0)->v) = 0x0;
    (((struct o0_uint *)0xC23EAC0)->v) = 0x0;
    *(unsigned int *)0xC1EF568 = 0x1;
    (((struct o8_uint *)0xC23EAC0)->v) = 0x2;
    (((struct o30_uint *)0xC23EAC0)->v) = 0x3;
    (((struct o2C_uint *)0xC23EAC0)->v) = 0x3;
    (((struct o4_uint *)0xC23ECC8)->v) = 0x0;
    (((struct o0_uint *)0xC23ECC8)->v) = 0x0;
    (((struct oC_uint *)0xC23ECC8)->v) = 0x0;
    (((struct o8_uint *)0xC23ECC8)->v) = 0x0;
    return 0xC1EF568;
}

int FUN_0c0245ec(int a4)
{
    int t0;

    t0 = (((struct o4F0_int *)(a4))->v);
    (((struct o2C4_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x1C)));
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o20C_uint *)(a4))->v) = 0x1;
    (((struct o210_uint *)(a4))->v) = 0x0;
    (((struct o3AC_uint *)(a4))->v) = 0x0;
    (((struct o5B8_uint *)(a4))->v) = 0x0;
    (((struct o5BC_uint *)(a4))->v) = 0x0;
    (((struct o4C4_uint *)(a4))->v) = 0x3;
    (((struct o4C8_uint *)(a4))->v) = 0x7;
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return 0x4F8;
}

int FUN_0c030592(int a4)
{
    int t3;
    int t5;

    FUN_0c034fbc(a4, 0x200, 0x1, 0x1);
    if ((((((struct o3B8_int *)(a4))->v)) & 1) != 0) {
        t3 = (((struct o2EC_int *)(a4))->v);
        if ((t3 & 12) != 0) {
            (((struct o3B8_uint *)(a4))->v) = (((((struct o3B8_int *)(a4))->v)) & 0xFFFFFFFE);
            return FUN_0c02a19a(a4);
        }
        return t3;
    }
    t5 = (((struct o3AC_int *)(a4))->v);
    (((struct o3AC_uint *)(a4))->v) = (t5 + 0x1);
    if ((int)(t5 + 0x1) > (int)((((struct o3B0_int *)(a4))->v))) {
        return FUN_0c02a19a(a4);
    }
    return 0x3B0;
}


int FUN_0c0548cc(int a4)
{
    if ((*(float *)((a4 + 0x26C))) > (-1.0f)) {
        *(float *)((a4 + 0x26C)) = ((*(float *)((a4 + 0x26C))) - 0.049999997f);
    }
    *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) + (*(float *)(((0x258 + a4) + 0x0))));
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) + ((*(float *)(((0x26C + a4) + 0x0))) + 0.5f));
    *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) + (*(float *)(((0x260 + a4) + 0x0))));
    return 0x50;
}

int FUN_0c054918(int a4)
{
    if (((((struct o26C_float *)(a4))->v)) > (-1.0f)) {
        (((struct o26C_float *)(a4))->v) = (((((struct o26C_float *)(a4))->v)) - 0.0799999833f);
    }
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((struct o258_float *)(a4))->v)));
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + (((((struct o26C_float *)(a4))->v)) + 0.5f));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o260_float *)(a4))->v)));
    return 0x50;
}

int FUN_0c032f3e(int a4)
{
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAZ(((((struct o70_short *)(a4))->v)));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    FUN_0c0c47ae(((((struct o400_int *)(a4))->v)));
    return nlPopMatrix(0x1);
}

int FUN_0c06ab38(void)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC06AB92, 0xB0, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)0xC23EE00 = t1;
    (((struct oA0_float *)(t1))->v) = 6.0f;
    (((struct o54_float *)(t1))->v) = 1.0f;
    (((struct o50_float *)(t1))->v) = 1.0f;
    (((struct o3C_float *)(t1))->v) = 0.00139999995f;
    (((struct o5C_float *)(t1))->v) = 1.0f;
    (((struct o64_uint *)(t1))->v) = 0x9;
    (((struct o60_uint *)(t1))->v) = 0xFFFFFFFF;
    return 0x60;
}

int FUN_0c024170(int a4, float f4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = FUN_0c022e60(a4, f4);
    if (t0 == 0) {
        t1 = FUN_0c0350a4(a4, 0x200, 0x1, 0x0);
        if (t1 != 0) {
            t2 = *(int *)((a4 + 0x3AC));
            *(unsigned int *)((a4 + 0x3AC)) = (t2 + 0x1);
            if ((int)(t2 + 0x1) <= (int)(*(int *)((a4 + 0x3B0)))) {
                t4 = FUN_0c034134(a4, 6.0f);
                if (t4 != 0) {
                    return FUN_0c02a19a(a4);
                }
                return t4;
            }
            return FUN_0c02a19a(a4);
        }
        return FUN_0c02a19a(a4);
    }
    return t0;
}

int FUN_0c06ea7e(int a4, int a5, int a6, int a7)
{
    FUN_0c0685a4(a4, a5, a6, a7);
    if ((((((struct o64_short *)(a4))->v)) & (*(int *)0xC23ED88)) != 0) {
        nlPushMatrix(0x0);
        FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
        nlRotateAY(((((struct o62_short *)(a4))->v)));
        FUN_0c0c473c(((((struct o78_int *)(a4))->v)));
        return nlPopMatrix(0x1);
    }
    return 0x64;
}

int FUN_0c07c8ea(int a4)
{
    int t8;

    nlPushMatrix((a4 + 0x38));
    FUN_0c0de000(((((struct o78_float *)(a4))->v)));
    FUN_0c0c4898(((((struct o30_short *)(a4))->v)), (((((struct o34_float *)(a4))->v)) * (float)((((struct o32_short *)(a4))->v))));
    nlPopMatrix(0x1);
    t8 = (((struct o32_short *)(a4))->v);
    (((struct o32_ushort *)(a4))->v) = (t8 - 1);
    if ((int)(short)(t8 - 1) <= 0) {
        return FUN_0c0e19f2();
    }
    return 0x32;
}

int FUN_0c08498e(float f4, float f5, float f6)
{
    FUN_0c0de310((f4 * (*(float *)0xC247EE8)), (f5 * (*(float *)0xC247EEC)), (f6 * (*(float *)0xC247EF0)));
    return nlObjPutSetSaturate((-1.0f), (-1.0f));
}



int FUN_0c0b8590(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0B85DC, 0x440);
    FUN_0c0e19d0(t0);
    (((struct o0_uint *)0xC247CAC)->v) = t0;
    (((struct o4_uint *)0xC247CAC)->v) = t0;
    *(float *)((t0 + 0x254)) = 135.5f;
    *(float *)((t0 + 0x258)) = 68.0f;
    *(float *)((t0 + 0x25C)) = 84.6999969f;
    *(unsigned short *)((t0 + 0x3CC)) = 0xE38;
    *(unsigned short *)((t0 + 0x3CE)) = 0x1555;
    return FUN_0c0e1830(0xC07E24E, 0x30);
}

int FUN_0c04fd64(void)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t8;
    int t1;
    int t9;

    t0 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        t4 = *(int *)((t3 + 0xC247030));
        t8 = t4;
        if (t4 == 6) {
            t1 = 0xC246FF0;
            t1 = (t1 + t2);
            t1 = (*(int *)((t1 + 0x0)));
            t0 = t1;
            FUN_0c04fdb0(t0);
            t0 = t1;
            t8 = (FUN_0c055090(t0));
        } else {
            t9 = t0;
        }
        t3 = (t3 + 0x4);
        t0 = t9;
        t2 = (t2 + 0x4);
        if ((unsigned int)t3 >= (unsigned int)0x8) {
            break;
        }
    }
    return t8;
}

int FUN_0c0d70c8(int a4)
{
    int t0;
    int t2;

    t0 = (((struct o6C_int *)(a4))->v);
    t2 = *(int *)(((((((struct oBC_int *)(t0))->v)) << 2) + 0xC247504));
    if ((*(int *)((0xC247604 + (t2 << 2)))) == 11) {
        if ((*(float *)0xC0D7170) > (*(float *)(((((((struct oBC_int *)(t0))->v)) << 2) + ((((t2 << 2) << 2) << 2) + 0xC247694))))) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}


void FUN_0c0da510(float f4)
{
    float t0;
    float u1;
    int t3;
    int stk[4];

    *(float *)(((int)stk + 4)) = f4;
    t0 = FUN_0c0da560(((int)stk + 0), (f4 / (1.0f + 1.0f)));
    u1 = 1.0f;
    u1 = u1 + t0 * t0;
    *(volatile int *)(((int)stk + 0));
    t3 = FUN_0c0e5f1c();
    if (t3 == 0) {
        return;
    }
}

int FUN_0c0a92b0(int a4)
{
    float t1;
    float u4;
    float u5;

    t1 = FUN_0c0da410((((*(int *)0xC23A258) << 8) << 2));
    u4 = *(float *)((a4 + 0x34));
    u5 = (t1 * (FUN_0c0da410((((*(int *)0xC23A258) << 2) << 2))));
    *(float *)((a4 + 0x34)) = (u4 + (u5 * 0.049999997f));
    FUN_0c0a9084(a4);
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) - (u5 * 0.049999997f));
    return 0x34;
}

void FUN_0c0da5c0(float f4)
{
    int t2;
    int stk[3];

    FUN_0c0da610(((int)stk + 4), f4);
    *(volatile int *)(((int)stk + 4));
    t2 = FUN_0c0e5f1c();
    if (t2 == 0) {
        return;
    }
    if (f4 != 0.0f) {
        return;
    }
    *(volatile float *)0xC0DA694;
}

int nlObjPutSetSaturate(float f4, float f5)
{
    (((struct o0_float *)0xC20CEA0)->v) = f5;
    (((struct o4_float *)0xC20CEA0)->v) = (-f4);
    if ((f5 > 0.0f) && !(0.0f > (-(-f4)))) {
        (((struct o0_uint *)0xC0DE838)->v) = 0xC0E8060;
        (((struct o4_uint *)0xC0DE838)->v) = 0xC0E8060;
        (((struct o0_uint *)0xC0DE8A8)->v) = 0xC0E8062;
        (((struct o4_uint *)0xC0DE8A8)->v) = 0xC0E8062;
        return 0xC0DE8AC;
    }
    (((struct o0_uint *)0xC0DE838)->v) = 0xC0E6F60;
    (((struct o4_uint *)0xC0DE838)->v) = 0xC0E6F60;
    (((struct o0_uint *)0xC0DE8A8)->v) = 0xC0E6F62;
    (((struct o4_uint *)0xC0DE8A8)->v) = 0xC0E6F62;
    return 0xC0DE8AC;
}

int FUN_0c0e5008(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t3;
    int stk[6];
    int R1004;
    int R1008;
    int R1012;
    int R1020;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1020 = *(int *)((int)stk + 20);

    R1020 = a4;
    *(unsigned short *)(((((int)stk + 4) + 0xE) + 0x0)) = a5;
    *(unsigned short *)(((((int)stk + 4) + 0xC) + 0x0)) = a6;
    t0 = R1020;
    R1012 = (t0 + 0x33);
    t2 = *(short *)(((int)stk + 16));
    R1004 = ((((*(short *)(((int)stk + 18))) << 2) << 2) | t2);
    R1008 = 0x0;
    t3 = (t0 + 0x33);
    for (;;) {
        if ((int)(R1008) >= (int)0x4) {
            break;
        }
        t3 = (R1004);
        *(unsigned char *)(((R1012) + 0x0)) = t3;
        R1012 = ((R1012) + 0x4);
        t3 = (R1008);
        t3 = (t3 + 0x1);
        R1008 = t3;
    }
    return t2;
}

int adxf_CloseSjStm(int a4)
{
    int t31;
    int t11;
    int t22;

    if ((*(int *)((a4 + 0x4))) != 0) {
        t31 = ADXSTM_Close((*(int *)((a4 + 0x4))));
        *(unsigned int *)((a4 + 0x4)) = 0x0;
    }
    if ((*(int *)((a4 + 0x8))) != 0) {
        t11 = *(signed char *)((a4 + 0x2));
        t31 = t11;
        if (t11 == 0) {
            if ((*(int *)0xC95E688) == 1) {
                FUN_0c22b402((*(int *)((a4 + 0x28))), (*(int *)((a4 + 0x2C))));
            }
            t22 = *(int *)((a4 + 0x8));
            t31 = ((int (*)(int))((*(int *)(((*(int *)((t22 + 0x0))) + 0xC)))))(t22);
            *(unsigned int *)((a4 + 0x8)) = 0x0;
        }
    }
    return t31;
}

int gdFsStrncmpi(int a4, int a5, int a6)
{
    int t14;
    int t2;
    int t3;
    int t4;
    int t7;
    int t9;
    int t0;
    int t1;

    t14 = 0x1;
    if ((int)a6 > 0) {
        t2 = a5;
        t3 = a4;
        t4 = a6;
        for (;;) {
            if ((*(signed char *)((t3 + 0x0))) != 0) {
                t7 = *(signed char *)((t3 + 0x0));
                t3 = (t3 + 0x1);
                t0 = (FUN_0c2212e0(t7));
                t1 = (signed char)t0;
                t9 = *(signed char *)((t2 + 0x0));
                t2 = (t2 + 0x1);
                t0 = (FUN_0c2212e0(t9));
                t0 = (signed char)t0;
                if (t1 == t0) {
                    t4 = (t4 - 1);
                    if ((int)t4 <= 0) {
                        t0 = 0x1;
                        return t0;
                    }
                    continue;
                }
                t0 = 0x0;
                return t0;
            }
            break;
        }
        t14 = 0x1;
        if ((*(signed char *)((t2 + 0x0))) != 0) {
            t14 = 0x0;
        }
    }
    return t14;
}

int FUN_0c22c598(int a4, int a5, int a6, int a7)
{
    int t4;
    int stk[3];

    if (a4 == 0) {
        return (mwRnaErrCallFunc(0xC237EE0, a5, a6, a7));
    }
    FUN_0c22b6c8(((int)stk + 0));
    if ((unsigned char)(*(signed char *)((a4 + 0x7))) == 1) {
        t4 = (((struct o90_int *)(a4))->v);
        if ((t4 != 0) && (t4 != 1)) {
            FUN_0c22bfa2(a4, 0x1);
        }
        *(unsigned char *)((a4 + 0x7)) = 0x0;
    }
    return (FUN_0c22b6e0(((int)stk + 0)));
}

int FUN_0c2339e8(int a4, int a5, int a6, int a7)
{
    int stk[7];

    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x0)) = (FUN_0c0e49a0((*(short *)((a4 + 0x2))), (*(signed char *)(((int)stk + 8))), ((int)stk + 0)));
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = (*(int *)(((int)stk + 0)));
    *(unsigned int *)(((((*(signed char *)(((int)stk + 8))) << 2) + (a4 + 0x14)) + 0x0)) = (*(int *)(((*(int *)(((int)stk + 12))) + 0x0)));
    *(unsigned int *)((a4 + 0x1C)) = (*(int *)(((*(int *)(((int)stk + 4))) + 0x0)));
    return 0x0;
}

int FUN_0c0a447c(int a4, int a5)
{
    int t2;
    int t7;
    int t9;

    (((struct o84_uint *)((*(int *)0xC249778)))->v) = (unsigned short)(*(short *)((a5 + 0x6)));
    t2 = *(int *)0xC249778;
    if (((((struct o84_int *)(t2))->v)) == 0) {
        (((struct o80_uint *)(t2))->v) = (unsigned short)(*(short *)((a5 + 0x4)));
        (((struct oA0_uint *)((*(int *)0xC249778)))->v) = 0x0;
        t9 = 0xA0;
    } else {
        (((struct o80_uint *)(t2))->v) = (unsigned short)(*(short *)((a5 + 0x4)));
        t7 = *(short *)((a5 + 0x4));
        (((struct oA0_uint *)((*(int *)0xC249778)))->v) = (unsigned short)t7;
        t9 = (unsigned short)t7;
    }
    return t9;
}

int FUN_0c0ae1ae(void)
{
    int t7;

    FUN_0c0cc6dc();
    (((struct o8_uint *)0xC24FA68)->v) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    (((struct o0_uint *)0xC24FA68)->v) = (*(int *)0xC247CF8);
    *(unsigned int *)0xC247CF8 = 0x2;
    FUN_0c0cc752((*(int *)0xC23ED50));
    (((struct o0_uint *)0xC24FA18)->v) = (FUN_0c0e14c4(0xC0AE258));
    t7 = FUN_0c0e14c4(0xC0AE266);
    (((struct o14_uint *)0xC24FA18)->v) = t7;
    *(unsigned int *)0xC23A18C = ((*(int *)0xC23A18C) + 0x1);
    return t7;
}

int FUN_0c0b70b4(void)
{
    int t0;
    int t1;
    int t5;
    int t6;

    t0 = 0x0;
    t1 = 0xC24FAB4;
    for (;;) {
        *(unsigned char *)(((0xC522AA4 + t0) + 0x0)) = (int)(*(float *)((t1 + 0x4)));
        *(unsigned int *)((((t0 << 2) + 0xC522A68) + 0x0)) = (*(int *)((t1 + 0x0)));
        *(unsigned char *)(((0xC522A90 + t0) + 0x0)) = (*(short *)((t1 + 0x8)));
        t5 = *(short *)((t1 + 0xA));
        t6 = (0xC522A9A + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t6 + 0x0)) = t5;
        t1 = (t1 + 0xC);
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    return t5;
}

void FUN_0c0bfa46(int a4)
{
    if ((*(int *)0xC260CB8) != 0) {
        FUN_0c0bfa90();
    return;
    }
    if (a4 != 0) {
        *(unsigned int *)0xC260CB8 = a4;
        FUN_0c0d80c0(0x2008);
        if ((int)(*(int *)(((*(int *)0xC260CB8) + 0x8))) >= 0) {
            FUN_0c0cbe74(0x2, (*(int *)(((*(int *)0xC260CB8) + 0x8))), (*(int *)0xC4BFE28));
        }
        FUN_0c0bf908((*(int *)0xC260CB8));
        FUN_0c0d80c0(0x0);
    return;
    }
}

int FUN_0c0c47ae(int a4)
{
    if (((*(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0))) != 0) && (a4 != 0)) {
        nlPushMatrix(0x0);
        nlMultiMatrixRevOrder(((*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC))) + 0x2AC));
        nlObjPut((*(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0))));
        return nlPopMatrix(0x1);
    }
    return 0xC2623A0;
}

void sys_init(void)
{
    int t0;
    int t1;
    int stk[3];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    (((struct o0_uint *)0xFFA00020)->v) = 0x0;
    (((struct oC_uint *)0xFFA00020)->v) = 0x1201;
    (((struct o20_uint *)0xFFA00020)->v) = 0x8201;
    t0 = 0x1201;
    for (;;) {
        t1 = (((struct o20_int *)0xFFA00020)->v);
        *(unsigned int *)(((int)stk + 8)) = t1;
        if (t1 == 0x8201) {
            break;
        }
        R1004 = 0x0;
        for (;;) {
            if ((int)(R1004) >= (int)0x10000) {
                break;
            }
            t0 = (R1004);
            t0 = (t0 + 0x1);
            R1004 = t0;
        }
        (((struct o20_uint *)0xFFA00020)->v) = 0x8201;
    }
}

int FUN_0c0e4428(int a4)
{
    int t4;

    if ((a4 & 128) == 0) {
        return 0xFFFFFFFE;
    }
    if ((*(int *)(((*(int *)0xC94C810) + 0x0))) != 0) {
        return 0xFFFFFFFF;
    }
    t4 = *(int *)0xC94C810;
    *(unsigned int *)0xC94C810 = (t4 + 0x4);
    *(unsigned int *)((((t4 + 0x4) - 4) + 0x0)) = a4;
    if ((*(int *)0xC94C810) == 0xA0800500) {
        *(unsigned int *)0xC94C810 = 0xA0800400;
    }
    return 0x0;
}

int FUN_0c0e631c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t8;
    int t9;
    int t10;

    if (a4 != a5) {
        if ((unsigned int)a4 < (unsigned int)a5) {
            if ((unsigned int)0x0 < (unsigned int)a6) {
                t0 = a4;
                t1 = 0x0;
                t2 = a5;
                for (;;) {
                    t3 = *(signed char *)((t2 + 0x0));
                    t2 = (t2 + 0x1);
                    t1 = (t1 + 0x1);
                    *(unsigned char *)((t0 + 0x0)) = t3;
                    t0 = (t0 + 0x1);
                    if ((unsigned int)t1 >= (unsigned int)a6) {
                        break;
                    }
                }
            }
        } else {
            if ((unsigned int)0x0 < (unsigned int)a6) {
                t8 = (a5 + a6);
                t9 = 0x0;
                t10 = (a4 + a6);
                for (;;) {
                    t8 = (t8 - 1);
                    t9 = (t9 + 0x1);
                    *(unsigned char *)(((t10 - 0x1) + 0x0)) = (*(signed char *)((t8 + 0x0)));
                    t10 = (t10 - 0x1);
                    if ((unsigned int)t9 >= (unsigned int)a6) {
                        break;
                    }
                }
            }
        }
    }
    return a4;
}

int FUN_0c0e6490(int a4, int a5)
{
    if (((((struct o0_int *)0xC94D6BC)->v)) != 0) {
        (((struct o0_uint *)0xC94D6BC)->v) = 0x0;
        syChainDeleteHandler(((((struct o30_int *)0xC94D6BC)->v)));
        (((struct o30_uint *)0xC94D6BC)->v) = 0xFFFFFFFF;
    }
    if (a5 != 0) {
        (((struct o0_uint *)0xC94D6BC)->v) = a5;
        (((struct o30_uint *)0xC94D6BC)->v) = (syChainAddHandler(0x900, a5, 0x58, 0x0));
    }
    return 0x1;
}

int FUN_0c0e6550(int a4, int a5)
{
    if (((((struct o0_int *)0xC94D6C4)->v)) != 0) {
        (((struct o0_uint *)0xC94D6C4)->v) = 0x0;
        syChainDeleteHandler(((((struct o30_int *)0xC94D6C4)->v)));
        (((struct o30_uint *)0xC94D6C4)->v) = 0xFFFFFFFF;
    }
    if (a5 != 0) {
        (((struct o0_uint *)0xC94D6C4)->v) = a5;
        (((struct o30_uint *)0xC94D6C4)->v) = (syChainAddHandler(0xB00, a5, 0x0, 0x0));
    }
    return 0x1;
}

int ntInfGetProxyPortNum(int a4, int a5)
{
    int t0;
    int t3;
    int t9;

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
        if (t9 == 1) {
            *(unsigned short *)((a5 + 0x0)) = (*(short *)((t3 + 0x164)));
        } else {
            *(unsigned short *)((a5 + 0x0)) = (*(short *)((t3 + 0x2C8)));
        }
    }
    return t0;
}

int buReadFile(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t4;

    t0 = *(int *)((a4 + 0x28));
    t1 = vmsfs_c_getstate(t0);
    t4 = 0xFFFFFFFF;
    if (t1 != 0) {
    } else {
        vmsfs_c_setfunc(t0, 0x5);
        vmsfs_c_setparam(t0, a4, a5, a6, 0x0, 0x0, 0x0);
        t4 = 0x0;
    }
    return t4;
}

int buWriteFile(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t4;

    t0 = *(int *)((a4 + 0x28));
    t1 = vmsfs_c_getstate(t0);
    t4 = 0xFFFFFFFF;
    if (t1 != 0) {
    } else {
        vmsfs_c_setfunc(t0, 0x6);
        vmsfs_c_setparam(t0, a4, a5, a6, 0x0, 0x0, 0x0);
        t4 = 0x0;
    }
    return t4;
}

void syChainMasterHandlerPVR_V(void)
{
    int t2;
    int t5;

    _builtin_set_imask(0x6);
    t2 = (*(int *)0xC953C28);
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t5 = ((int (*)(int))((*(int *)((t2 + 0x0)))))((*(int *)((t2 + 0x8))));
        t2 = (*(int *)((t2 + 0x4)));
    }
}

int cmp_fname(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = str_len(a4);
    t1 = str_len(a5);
    if (t0 == t1) {
        if ((int)t0 > 0) {
            t2 = a5;
            t3 = a4;
            t4 = 0x0;
            for (;;) {
                if ((*(signed char *)((t3 + 0x0))) != (*(signed char *)((t2 + 0x0)))) {
                    break;
                }
                t4 = (t4 + 0x1);
                t2 = (t2 + 0x1);
                t3 = (t3 + 0x1);
                if ((int)t4 >= (int)t0) {
                    return 0x1;
                }
            }
            return 0x0;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c22ba6e(int a4, int a5, int a6, int a7)
{
    int t2;
    int t8;
    int stk[4];

    if (a4 == 0) {
        return (mwRnaErrCallFunc(0xC237EE0, a5, a6, a7));
    }
    t2 = *(signed char *)((a4 + 0x1));
    t8 = t2;
    if (t2 != 0) {
        FUN_0c22b6c8(((int)stk + 4));
        FUN_0c22bfa2(a4, 0x0);
        FUN_0c22bece(a4, 0x0);
        FUN_0c22ba6a();
        *(unsigned char *)((a4 + 0x7)) = 0x0;
        *(unsigned char *)((a4 + 0x1)) = 0x0;
        t8 = (FUN_0c22b6e0(((int)stk + 4)));
    }
    return t8;
}

int FUN_0c23379c(int a4, int a5)
{
    int t1;
    int t2;

    t1 = *(signed char *)((0xC2384FC + (FUN_0c0e5dc0())));
    t2 = FUN_0c0e5dc0();
    FUN_0c0e4ece((*(int *)(((*(int *)((a4 + 0x10))) + 0x4))), (0xF & (-t1)), (0x3FF & t2));
    return 0x0;
}
