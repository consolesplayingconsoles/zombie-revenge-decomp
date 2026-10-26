/* Straight-line functions with calls and guards (batch gen_cb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0236ce(int);
int FUN_0c0316d4(int, int);
int FUN_0c034134(int, float);
int FUN_0c03442c(int, int, int, int, int, int, float);
int FUN_0c034b1c(int, int);
int FUN_0c035ce4(int);
int FUN_0c03bd28(int, int, int, int, int);
int FUN_0c043338(int);
int FUN_0c049c0a(int, int, int, int);
int FUN_0c051a48(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0855ba(int);
int FUN_0c086638(int, int, int);
int FUN_0c0866c4(int, int, int, float);
int FUN_0c08a5e4(int, int);
int FUN_0c08a8e0(int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0c4684(int);
int FUN_0c0c47ae(int);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db640(int);
int FUN_0c0db840(int);
int FUN_0c0db900(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc4c0(int);
int FUN_0c0dc510(int);
int FUN_0c0dc6e0(int);
int FUN_0c0dc890(int);
int FUN_0c0dc950(int);
int FUN_0c0dcb80(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dccc0(void);
int FUN_0c0de000(float);
int FUN_0c0df4c0(int);
int FUN_0c0e16c0(int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e262a(int);
int FUN_0c0e2794(int, int);
int FUN_0c0e2a4c(int);
int FUN_0c0e5f1c(void);
int FUN_0c0e5fe4(void);
int FUN_0c0e61d4(int, int);
int FUN_0c0f2d14(int, int, int, int, float, float, float, float, float, float, float, float);
extern float _builtin_sqrtf(float);
int _destructFiber(int, int);
int buIsFormat(int);
int get_fat(int, int);
int longjmp(int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int FUN_0c08d75c(int a4, int a5, int a6);
int FUN_0c0b3d5a(void);
int FUN_0c033c8c(int a4, int a5, int a6, float f4);
int FUN_0c03c75c(int a4);
int FUN_0c043ed4(int a4, int a5, int a6, int a7);
int FUN_0c04dbf0(int a4, int a5);
int FUN_0c0a4104(int a4, int a5, int a6, int a7);
int FUN_0c0a7dfa(int a4, int a5, int a6);
int FUN_0c02a288(int a4);
int FUN_0c03cd4c(int a4);
int FUN_0c04d8e0(int a4, int a5);
int FUN_0c07c964(int a4);
int FUN_0c01de60(int a4, int a5);
int FUN_0c03c830(int a4);
int FUN_0c0672b0(int a4, int a5, int a6, int a7);
int FUN_0c096d6c(void);
int FUN_0c0e26c4(int a4, int a5);
int kmChangeContextDSTBlendMode(int a4);
int vmsfs_sysdiskfree(int a4);
int buFbrExecFiberServer(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c085638(int a4);
int FUN_0c08aa8e(int a4, int a5, int a6, int a7);
void FUN_0c09635c(int a4, int a5, float f4, float f5);
void FUN_0c098c2e(int a4, int a5, float f4, float f5);

int FUN_0c08d75c(int a4, int a5, int a6)
{
    int t1;
    int t5;
    int t17;
    int t19;

    t1 = FUN_0c0e19aa(0xC08D068, 0x110, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x3C)) = a5;
    *(unsigned int *)((t1 + 0x40)) = a6;
    *(unsigned int *)0xC247D04 = ((*(int *)0xC247D04) | 0x10000);
    t5 = *(int *)0xC23ED50;
    if ((*(int *)0xC200A78) != t5) {
        *(unsigned int *)0xC200A78 = t5;
        *(unsigned int *)0xC248DD4 = (*(int *)0xC248A64);
        *(unsigned int *)0xC248DD8 = (*(int *)0xC248A68);
        *(unsigned int *)0xC248DDC = (*(int *)0xC248A6C);
        *(unsigned int *)0xC248DE0 = (unsigned char)((int)(*(int *)0xC248A70) >> 8);
        *(unsigned int *)0xC248DE4 = (unsigned char)(*(signed char *)0xC248A70);
    }
    FUN_0c0e61d4(t5, 0xC200A78);
    t17 = 0x236;
    for (;;) {
        FUN_0c0cbafc(t17, 0x2, 0xFC000000, 0x94000000);
        t17 = (t17 + 0x1);
        if ((int)t17 >= (int)0x245) {
            break;
        }
    }
    t19 = 0x259;
    for (;;) {
        FUN_0c0cbafc(t19, 0x2, 0xFC000000, 0x94000000);
        t19 = (t19 + 0x1);
        if ((int)t19 >= (int)0x26D) {
            break;
        }
    }
    FUN_0c0cbafc(0x410, 0x2, 0xFC000000, 0xC000000);
    return (FUN_0c0cbafc(0x294, 0x2, 0xFC006000, 0x84002000));
}

int FUN_0c0b3d5a(void)
{
    int t1;
    float u11;
    float u8;

    t1 = FUN_0c0e19aa(0xC0B3E32, 0xB0, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    if ((*(int *)0xC23A1A0) == 0) {
        *(unsigned int *)((t1 + 0x88)) = 0xC203E2C;
        *(float *)((t1 + 0x34)) = 610.0f;
        u8 = 240.0f;
    } else {
        *(unsigned int *)((t1 + 0x88)) = 0xC203E74;
        *(float *)((t1 + 0x34)) = (*(float *)0xC0B3ECC);
        u8 = (*(float *)0xC0B3ED0);
    }
    *(float *)((t1 + 0x38)) = u8;
    *(float *)((t1 + 0x3C)) = (*(float *)0xC0B3ED4);
    u11 = *(float *)0xC0B3ED8;
    *(float *)((t1 + 0x44)) = u11;
    *(float *)((t1 + 0x40)) = u11;
    *(float *)((t1 + 0x54)) = 1.0f;
    *(float *)((t1 + 0x50)) = 1.0f;
    *(float *)((t1 + 0x5C)) = 1.0f;
    *(unsigned int *)((t1 + 0x64)) = 0xA;
    *(unsigned int *)((t1 + 0x60)) = 0xFFFFFFFF;
    return 0x60;
}

int FUN_0c033c8c(int a4, int a5, int a6, float f4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u7;
    float u8;
    float u9;
    float u10;
    float u22;
    float u23;
    float u24;
    int t29;
    int stk[10];

    *(float *)(((int)stk + 16)) = f4;
    *(unsigned int *)(((int)stk + 12)) = a6;
    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a5 + 0x0));
    u2 = *(float *)((a5 + 0x4));
    u3 = *(float *)((a4 + 0x4));
    u4 = *(float *)((a5 + 0x8));
    u5 = *(float *)((a4 + 0x8));
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (u1 - u0), (u2 - u3), (u4 - u5));
    u7 = ((u2 - u3) * (u2 - u3));
    u7 = u7 + (u1 - u0) * (u1 - u0);
    u8 = u7;
    u8 = u8 + (u4 - u5) * (u4 - u5);
    u9 = *(float *)0xC033E0C;
    u10 = *(float *)(((int)stk + 16));
    FUN_0c0dc510(0x0);
    FUN_0c0dccc0();
    FUN_0c0dcc70((*(float *)((a4 + 0x0))), (*(float *)((a4 + 0x4))), (*(float *)((a4 + 0x8))));
    FUN_0c0dc890((*(int *)(((int)stk + 8))));
    FUN_0c0dc6e0((*(int *)(((int)stk + 4))));
    FUN_0c0dcb80((-(u10 / 1.0f)), (-(u10 / 1.0f)), (-(_builtin_sqrtf(u8) / u9)));
    u22 = (u10 / 1.0f);
    u23 = _builtin_fabsf((_builtin_sqrtf(u8) / u9));
    u24 = _builtin_fabsf((_builtin_sqrtf(u8) / u9));
    if (_builtin_fabsf((u10 / 1.0f)) > _builtin_fabsf((_builtin_sqrtf(u8) / u9))) {
        u22 = _builtin_fabsf((u10 / 1.0f));
        u23 = (_builtin_sqrtf(u8) / u9);
        u24 = _builtin_fabsf((u10 / 1.0f));
    }
    FUN_0c0de000(u24);
    *(volatile int *)(((int)stk + 12));
    t29 = *(int *)((((FUN_0c0e5f1c()) << 2) + 0xC1EFE10));
    FUN_0c0c47ae(t29);
    return (FUN_0c0dc4c0(0x1));
}

int FUN_0c03c75c(int a4)
{
    int t6;
    int t7;
    int t22;
    int t30;
    int t32;
    int t2;
    int t3;
    int t15;
    int t16;
    int t8;
    int t46;
    int t40;
    int stk[5];

    FUN_0c03bd28(a4, 0x0, 0x3, 0x5, 0x0);
    if (((int)(*(int *)((a4 + 0x304))) > 0) && ((t2 = *(int *)((a4 + 0x57C)), t2 != 4) && (t3 = *(int *)((a4 + 0x560)), t3 == 0))) {
    } else {
        t6 = *(int *)((a4 + 0x4F8));
        if ((t6 == 12) || (t6 == 13)) {
            *(unsigned int *)0xC247D04 = 0xA;
        }
        t7 = *(int *)((a4 + 0x4F8));
        if (((t7 != 4) && (t7 != 5)) || (t8 = *(int *)((a4 + 0x544)), t8 != 0)) {
        } else {
            *(unsigned int *)0xC247D04 = 0xA;
        }
        t15 = 0xA;
        t16 = t7;
    }
    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        t22 = 0x5C0;
        if ((*(int *)((a4 + 0x5C0))) == 0) {
            *(unsigned int *)((a4 + 0x5C0)) = 0x1;
            t22 = (FUN_0c0cc3f8(0xA2EA9, t15, t16, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
        }
        t46 = t22;
    } else {
        t30 = *(int *)((a4 + 0x57C));
        if ((t30 != 0) && ((t30 != 1) && ((t30 != 2) && (t30 != 3)))) {
            t32 = t30;
            if (t30 != 4) {
            } else {
                t32 = (FUN_0c0cc3f8(0xA2EA9, t15, t16, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
            }
            t40 = t32;
        } else {
            t40 = (FUN_0c0cc3f8(0x12EA9, t15, t16, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
        }
        t46 = t40;
    }
    return t46;
}

int FUN_0c043ed4(int a4, int a5, int a6, int a7)
{
    float u0;

    *(unsigned int *)((a4 + 0x304)) = 0x1;
    *(unsigned int *)((a4 + 0x308)) = 0x1;
    *(unsigned int *)((a4 + 0xC8)) = 0x4;
    *(unsigned int *)((a4 + 0xC0)) = 0x8;
    u0 = *(float *)0xC04401C;
    *(float *)((a4 + 0x274)) = u0;
    *(float *)((a4 + 0x278)) = u0;
    *(float *)((a4 + 0x27C)) = u0;
    *(float *)((a4 + 0x284)) = u0;
    *(float *)(((0x45C + a4) + 0x8)) = 1.0f;
    *(float *)(((0x45C + a4) + 0x4)) = 1.0f;
    *(float *)(((0x45C + a4) + 0x0)) = 1.0f;
    *(unsigned int *)((a4 + 0x20C)) = 0x20000000;
    *(unsigned int *)((a4 + 0x508)) = 0x0;
    *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x3;
    FUN_0c049c0a(a4, a5, a6, a7);
    *(unsigned int *)((a4 + 0x388)) = 0x0;
    *(float *)((a4 + 0x390)) = 0.0f;
    *(float *)((a4 + 0x214)) = (*(float *)((((((*(int *)((a4 + 0xC0))) << 2) << 1) + 0xC1FE510) + 0x0)));
    *(float *)((a4 + 0x218)) = (*(float *)(((0xC1FE510 + (((*(int *)((a4 + 0xC0))) << 2) << 1)) + 0x4)));
    FUN_0c0855ba(a4);
    FUN_0c0ba6e8(a4);
    FUN_0c0ba776(a4);
    FUN_0c085638(a4);
    *(unsigned int *)((a4 + 0xA4)) = 0xA7F;
    *(unsigned int *)((a4 + 0x1EC)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x1B0)) = 0x0;
    *(unsigned int *)0xC246310 = ((*(int *)0xC246310) | 0x1);
    *(unsigned int *)((a4 + 0x4C4)) = 0x1;
    return FUN_0c043338(a4);
}

int FUN_0c04dbf0(int a4, int a5)
{
    int t23;
    int t6;
    int t7;
    int t8;
    int t16;
    int t1;

    t23 = 0x0;
    if (((*(int *)((a4 + 0xAC))) == 22) && (t1 = *(int *)0xC23ED5C, (t1 & 80) == 0)) {
        *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x10000);
        *(unsigned int *)((0xC2475A4 + ((*(int *)((a4 + 0xBC))) << 2))) = 0x1;
        *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0x394)) = 0x1;
        *(unsigned int *)((a4 + 0x3B8)) = (*(int *)((a4 + 0x210)));
        *(unsigned int *)((a4 + 0x210)) = 0x5D;
        *(unsigned int *)((a4 + 0xAC)) = 0x0;
        FUN_0c051a48(a4);
        t6 = *(int *)((a4 + 0xBC));
        t7 = *(int *)(((((t6 + 0x1) & 0x1) << 2) + 0xC247030));
        if (t7 != 5) {
            if (t7 != 4) {
                *(unsigned int *)((0xC2475A4 + (((t6 + 0x1) & 0x1) << 2))) = 0x0;
            } else {
                t8 = *(int *)(((0xC246FF0 + (((t6 + 0x1) & 0x1) << 2)) + 0x0));
                *(unsigned int *)((t8 + 0x1B0)) = 0xFFFFFFFF;
                *(unsigned int *)((t8 + 0x3B8)) = (*(int *)((t8 + 0x210)));
                *(unsigned int *)((t8 + 0x210)) = 0x5D;
                *(unsigned int *)((t8 + 0xAC)) = 0x0;
                *(unsigned int *)((t8 + 0x394)) = 0x1;
                *(unsigned int *)((0xC2475A4 + (((t6 + 0x1) & 0x1) << 2))) = 0x0;
                FUN_0c051a48(t8);
            }
        } else {
            *(unsigned int *)(((0xC247030 + (((t6 + 0x1) & 0x1) << 2)) + 0x0)) = 0x4;
            *(unsigned int *)(((((t6 + 0x1) & 0x1) << 2) + 0xC247594)) = ((*(int *)(((((t6 + 0x1) & 0x1) << 2) + 0xC247594))) + 0x1);
            t16 = *(int *)(((0xC246FF0 + (((t6 + 0x1) & 0x1) << 2)) + 0x0));
            *(unsigned int *)((t16 + 0x1B0)) = 0xFFFFFFFF;
            *(unsigned int *)((t16 + 0x3B8)) = (*(int *)((t16 + 0x210)));
            *(unsigned int *)((t16 + 0x210)) = 0x5D;
            *(unsigned int *)((t16 + 0xAC)) = 0x0;
            *(unsigned int *)((t16 + 0x394)) = 0x1;
            *(unsigned int *)((0xC2475A4 + (((t6 + 0x1) & 0x1) << 2))) = 0x0;
            FUN_0c051a48(t16);
        }
        t23 = 0x1;
    }
    return t23;
}

int FUN_0c0a4104(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t7;
    int t8;
    int t2;

    t0 = *(int *)((a4 + 0x34));
    t1 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x34)) = (t0 - 1);
    if (((int)(t0 - 1) > 0) && (t2 = *(int *)((t1 + 0x2EC)), (t2 & 15) == 0)) {
    } else {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    t7 = *(int *)0xC23A258;
    if ((t7 & 1) == 0) {
        t8 = FUN_0c0e1830(0xC0A4234, 0x5C);
        FUN_0c0e19d0(t8);
        *(float *)((t8 + 0x40)) = ((-((float)(FUN_0c0da2e0()) * 3.05185094e-05f)) + -0.299999982f);
        *(float *)((t8 + 0x48)) = 1.0f;
        *(unsigned int *)((t8 + 0x50)) = 0x46;
        *(unsigned int *)(((0x4C + t8) + 0x0)) = ((FUN_0c0da2e0()) & 0x3);
        *(float *)((t8 + 0x54)) = (float)(((((((FUN_0c0da2e0()) & 0xF) - 8) << 2) << 2) << 2) + 0x20);
        *(float *)((t8 + 0x58)) = (*(float *)((t1 + 0x278)));
        FUN_0c0dc510(0x0);
        FUN_0c0dbda0(((*(int *)((t1 + 0x3E4))) + 0x140));
        FUN_0c0db840((t8 + 0x30));
        FUN_0c0dbda0(((*(int *)((t1 + 0x3E4))) + 0x100));
        FUN_0c0db4d0((t8 + 0x3C), (t8 + 0x3C));
        return FUN_0c0dc4c0(0x1);
    }
    return t7;
}

int FUN_0c0a7dfa(int a4, int a5, int a6)
{
    int t1;
    int t4;
    float t5;
    float t6;
    float u7;
    int t9;
    int t11;
    int t14;
    int t16;
    int t26;
    float u27;
    float u29;
    int t30;
    int t20;
    int stk[27];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    FUN_0c0db640((((int)stk + 4) + 0xC));
    t1 = *(int *)(((int)stk + 12));
    t4 = FUN_0c0d9dc0((-(*(float *)(((int)stk + 32)))), (*(float *)(((int)stk + 36))));
    *(unsigned int *)((t1 + 0x0)) = (short)t4;
    t5 = FUN_0c0da410((short)t4);
    t6 = FUN_0c0d9e90((short)t4);
    u7 = *(float *)(((int)stk + 40));
    if ((((short)t4 + 0x2000) & 0x4000) == 0) {
        t9 = FUN_0c0d9dc0((u7 * t6), (*(float *)(((int)stk + 36))));
        t11 = ((short)t9 + 0x8000);
        if (!(0.0f > t6)) {
            t11 = (short)t9;
        }
        t20 = t11;
    } else {
        t14 = FUN_0c0d9dc0((u7 * t5), (-(*(float *)(((int)stk + 32)))));
        t16 = (short)t14;
        if (0.0f > t5) {
            t16 = ((short)t14 + 0x8000);
        }
        t20 = t16;
    }
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = (short)t20;
    t26 = *(int *)(((int)stk + 8));
    u27 = ((*(float *)(((int)stk + 20))) * t5);
    u27 = u27 + t6 * (*(float *)(((int)stk + 16)));
    u29 = ((*(float *)(((int)stk + 52))) * t5);
    u29 = u29 + t6 * (*(float *)(((int)stk + 48)));
    t30 = FUN_0c0d9dc0(u29, u27);
    *(unsigned int *)((t26 + 0x0)) = (short)t30;
    return (short)t30;
}

int FUN_0c02a288(int a4)
{
    int t0;
    int t7;
    int t11;
    int t15;
    int t17;
    int t21;
    int t24;
    int t27;
    int t33;
    int stk[11];

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
    float F4;
    int T_;
    R4 = a4;
    L_C02A288:;
    t0 = *(int *)((R4 + 0x4F4));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)(((*(int *)(((((t0 << 1) + t0) << 2) + 0xC1F79BC))) + 0x9C)));
    R0 = (0x4EC);
    R14 = (R4);
    if (((int)(*(int *)((R4 + 0x4EC))) < 0)) goto L_C02A350;
    goto L_C02A2B0;
    L_C02A2B0:;
    t7 = FUN_0c0236ce(R14);
    R0 = (t7);
    if ((t7 == 0)) goto L_C02A350;
    goto L_C02A2BA;
    L_C02A2BA:;
    t11 = FUN_0c034134(R14, (*(float *)0xC02A3A0));
    R0 = (t11);
    if ((t11 == 0)) goto L_C02A350;
    goto L_C02A2C8;
    L_C02A2C8:;
    t15 = *(int *)((((*(int *)((R14 + 0x510))) << 2) + 0xC246FF0));
    FUN_0c03442c(R14, t15, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0xC), (((int)stk + 12) + 0xC), F4);
    t17 = *(int *)(((int)stk + 12));
    R0 = (t17);
    R13 = (t15);
    if ((t17 != 2)) goto L_C02A350;
    goto L_C02A2F6;
    L_C02A2F6:;
    t21 = FUN_0c034b1c(R14, R13);
    R0 = (t21);
    if ((t21 != 2)) goto L_C02A350;
    goto L_C02A302;
    L_C02A302:;
    t24 = FUN_0c0316d4(R14, 0x14000000);
    R0 = (t24);
    if ((t24 == 0)) goto L_C02A350;
    goto L_C02A30E;
    L_C02A30E:;
    t27 = FUN_0c035ce4(R14);
    R0 = (t27);
    if ((t27 == 0)) goto L_C02A350;
    goto L_C02A318;
    L_C02A318:;
    FUN_0c0da2e0();
    t33 = (int)(FUN_0c0e5f1c()) <= (int)(*(int *)(((int)stk + 28)));
    R13 = (0xFFFFFFFF);
    if (t33) goto L_C02A332;
    goto L_C02A32C;
    L_C02A32C:;
    *(unsigned int *)((R14 + 0x4EC)) = R13;
    R0 = (0x4EC);
    goto L_C02A350;
    L_C02A350:;
    return R0;
    L_C02A332:;
    *(unsigned int *)((R14 + 0x4E0)) = R13;
    *(unsigned int *)((R14 + 0x4EC)) = R13;
    *(unsigned int *)((R14 + 0x4F8)) = 0x4;
    *(unsigned short *)((R14 + 0x6E)) = ((*(short *)((R14 + 0x6E))) + 0x8000);
    *(unsigned int *)((R14 + 0x544)) = 0x1;
    R0 = (0x544);
    goto L_C02A350;
}

int FUN_0c03cd4c(int a4)
{
    int t6;
    int t36;
    int t22;
    int t42;
    int t3;
    int t4;
    int t7;
    int t16;
    int t31;
    int t25;
    int stk[5];

    if (((*(int *)((a4 + 0x20C))) & 64) != 0) {
        *(unsigned int *)((a4 + 0x560)) = 0x0;
        t42 = 0x560;
    } else {
        FUN_0c03bd28(a4, 0x0, 0x3, 0x5, 0x0);
        if (((int)(*(int *)((a4 + 0x304))) > 0) && ((t3 = *(int *)((a4 + 0x57C)), t3 != 4) && (t4 = *(int *)((a4 + 0x560)), t4 == 0))) {
        } else {
            FUN_0c0cc3f8(0x334A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
            t6 = *(int *)((a4 + 0x4F8));
            if (((t6 != 4) && (t6 != 5)) || (t7 = *(int *)((a4 + 0x544)), t7 != 3)) {
            } else {
                *(unsigned int *)0xC247D04 = 0xA;
            }
        }
        if (((int)(*(int *)((a4 + 0x304))) <= 0) && (t16 = *(int *)((a4 + 0x57C)), (int)t16 < (int)0x3)) {
            *(unsigned int *)((a4 + 0x57C)) = 0x3;
        }
        t36 = 0x304;
        if ((int)(*(int *)((a4 + 0x304))) > 0) {
            t22 = *(int *)((a4 + 0x57C));
            if ((t22 != 0) && (t22 != 1)) {
                if ((t22 != 2) && (t22 != 3)) {
                    t25 = t22;
                } else {
                    t25 = (FUN_0c0cc3f8(0xDE, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
                }
                t31 = t25;
            } else {
                t31 = (FUN_0c0cc3f8(0xDC, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
            }
            t36 = t31;
        }
        t42 = t36;
    }
    return t42;
}

int FUN_0c04d8e0(int a4, int a5)
{
    int t3;
    int t6;
    int t11;
    int t13;
    int t17;
    int t19;
    int t21;
    int t24;
    int t27;
    int t34;
    int t38;
    int t42;
    int stk[4];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    L_C04D8E0:;
    t3 = (int)(*(int *)((R4 + 0x394))) < 0;
    *(unsigned int *)(((int)stk + 8)) = (R14);
    *(unsigned int *)(((int)stk + 4)) = (R13);
    R0 = (0x394);
    R14 = (R4);
    if (t3) goto L_C04D9AA;
    goto L_C04D8F0;
    L_C04D8F0:;
    t6 = *(int *)((R5 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R4 = (t6);
    R6 = (0x400);
    if (((t6 & 0x400) == 0)) goto L_C04D90A;
    goto L_C04D8FA;
    L_C04D8FA:;
    t11 = ((*(int *)((R5 + 0x8))) & 0x200) == 0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (t11) goto L_C04D90A;
    goto L_C04D902;
    L_C04D902:;
    t13 = (unsigned int)(*(int *)((R5 + 0x10))) < (unsigned int)0x4;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (0x4);
    if (t13) goto L_C04D91E;
    goto L_C04D90A;
    L_C04D90A:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (((0x200 & R4) == 0)) goto L_C04D9AA;
    goto L_C04D910;
    L_C04D910:;
    t17 = ((*(int *)((R5 + 0x8))) & R6) == 0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (t17) goto L_C04D9AA;
    goto L_C04D916;
    L_C04D916:;
    t19 = (unsigned int)(*(int *)((R5 + 0x20))) >= (unsigned int)0x4;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (t19) goto L_C04D9AA;
    goto L_C04D91E;
    L_C04D91E:;
    t21 = (int)(*(int *)(((0x340 + R14) + 0x0))) > (int)0x3;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (0x3);
    if (t21) goto L_C04D9AA;
    goto L_C04D92A;
    L_C04D92A:;
    t24 = ((*(int *)((R14 + 0x20C))) & 192) == 0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R13 = (0x1);
    if (t24) goto L_C04D942;
    goto L_C04D934;
    L_C04D934:;
    t27 = (int)(*(int *)((R14 + 0x2B4))) > (int)0x2;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (0x2B4);
    if (t27) goto L_C04D9AA;
    goto L_C04D93E;
    L_C04D93E:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_C04D958;
    L_C04D958:;
    FUN_0c051a48(R14);
    *(unsigned int *)((R14 + 0x20C)) = 0x2;
    *(unsigned int *)((R14 + 0x210)) = 0x7D;
    *(unsigned int *)((R14 + 0x2C4)) = (unsigned short)(*(short *)(((((int)(*(int *)((R14 + 0x324))) >> 6) << 1) + 0xC0F7FF4)));
    *(unsigned int *)((R14 + 0x324)) = ((*(int *)((R14 + 0x324))) + 0x50);
    t34 = (int)(*(int *)((R14 + 0x324))) <= (int)0xFF;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R4 = (0xFF);
    if (t34) goto L_C04D992;
    goto L_C04D98E;
    L_C04D98E:;
    *(unsigned int *)((R14 + 0x324)) = R4;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_C04D992;
    L_C04D992:;
    *(unsigned int *)((R14 + 0x2CC)) = R13;
    *(unsigned int *)((R14 + 0x394)) = R13;
    *(unsigned int *)((R14 + 0x2D4)) = R13;
    *(unsigned int *)((R14 + 0x1B0)) = 0xFFFFFFFF;
    *(unsigned int *)((R14 + 0x3AC)) = 0x19;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (0x3AC);
    goto L_C04D9AA;
    L_C04D9AA:;
    return R0;
    L_C04D942:;
    t38 = (*(int *)((R14 + 0x394))) != 0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (0x394);
    if (t38) goto L_C04D9AA;
    goto L_C04D94A;
    L_C04D94A:;
    t42 = (int)(*(int *)((((*(int *)((R14 + 0xBC))) << 2) + 0xC246FD8))) > (int)R13;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (0xC246FD8);
    if (t42) goto L_C04D9AA;
    goto L_C04D958;
}

int FUN_0c07c964(int a4)
{
    int t1;
    float u2;
    float u3;
    float u4;
    int t7;
    int t12;
    float u18;

    FUN_0c0da2e0();
    t1 = FUN_0c0e5fe4();
    u2 = *(float *)(((0xC100DDC + ((((t1 << 1) + t1) << 2) << 1)) + 0x8));
    u3 = *(float *)(((0xC100DDC + ((((t1 << 1) + t1) << 2) << 1)) + 0x10));
    u4 = u2;
    if (u3 > u2) {
        u4 = u3;
    }
    t7 = FUN_0c0e19aa(0xC07C8EA, 0x7C, (*(int *)((a4 + 0x34))));
    FUN_0c0e19d0(t7);
    FUN_0c0dc510(0x0);
    FUN_0c0dcc70(0.0f, (*(float *)(((0xC100DDC + ((((t1 << 1) + t1) << 2) << 1)) + 0x0))), 0.0f);
    t12 = FUN_0c0da2e0();
    FUN_0c0dc890(t12);
    FUN_0c0dcb80((u4 + 1.0f), 20.0f, (u4 + 1.0f));
    FUN_0c0dcc70(0.0f, -1.29999995f, 0.0f);
    FUN_0c0db640((t7 + 0x38));
    FUN_0c0dc4c0(0x1);
    u18 = (u4 + 1.0f);
    if (20.0f > (u4 + 1.0f)) {
        u18 = 20.0f;
    }
    *(float *)((t7 + 0x78)) = u18;
    *(unsigned short *)((t7 + 0x32)) = 0xA;
    *(unsigned short *)((t7 + 0x30)) = 0x2BE;
    *(float *)((t7 + 0x34)) = 0.099999994f;
    return 0x34;
}

int FUN_0c01de60(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    int t24;
    int t21;

    u0 = *(float *)0xC01DF60;
    u1 = *(float *)((a4 + 0x30));
    u2 = *(float *)0xC23FE68;
    u3 = *(float *)0xC23FE70;
    u4 = *(float *)((a4 + 0x38));
    t24 = 0x38;
    if (((int)(int)((u1 - u2) * u0) >= 0) && ((int)(int)((u4 - u3) * u0) >= 0)) {
        FUN_0c0dc510(0x0);
        FUN_0c0dccc0();
        FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
        FUN_0c0dc950((*(short *)((a4 + 0x70))));
        FUN_0c0dc890((*(short *)((a4 + 0x6E))));
        FUN_0c0dc6e0((*(short *)((a4 + 0x6C))));
        FUN_0c0db640((a5 + 0x10));
        FUN_0c0db900(0x0);
        FUN_0c0db640((a5 + 0x50));
        FUN_0c0dc4c0(0x1);
        t21 = *(int *)((a5 + 0xA4));
        *(unsigned int *)(((*(int *)(((((((((int)((u4 - u3) * u0) & 0x1F) << 1) + ((int)((u4 - u3) * u0) & 0x1F)) << 8) + 0xC23FF94) + (((((int)((u1 - u2) * u0) & 0x3F) << 1) + ((int)((u1 - u2) * u0) & 0x3F)) << 2)) + 0x0))) + 0x4)) = t21;
        *(unsigned int *)((t21 + 0x4)) = (((((((int)((u4 - u3) * u0) & 0x1F) << 1) + ((int)((u4 - u3) * u0) & 0x1F)) << 8) + 0xC23FF94) + (((((int)((u1 - u2) * u0) & 0x3F) << 1) + ((int)((u1 - u2) * u0) & 0x3F)) << 2));
        *(unsigned int *)((t21 + 0x0)) = (*(int *)(((((((((int)((u4 - u3) * u0) & 0x1F) << 1) + ((int)((u4 - u3) * u0) & 0x1F)) << 8) + 0xC23FF94) + (((((int)((u1 - u2) * u0) & 0x3F) << 1) + ((int)((u1 - u2) * u0) & 0x3F)) << 2)) + 0x0)));
        *(unsigned int *)(((((((((int)((u4 - u3) * u0) & 0x1F) << 1) + ((int)((u4 - u3) * u0) & 0x1F)) << 8) + 0xC23FF94) + (((((int)((u1 - u2) * u0) & 0x3F) << 1) + ((int)((u1 - u2) * u0) & 0x3F)) << 2)) + 0x0)) = t21;
        *(unsigned int *)((a4 + 0xB8)) = 0x1;
        t24 = 0xB8;
    }
    return t24;
}

int FUN_0c03c830(int a4)
{
    int t6;
    int t7;
    int t22;
    int t30;
    int t32;
    int t2;
    int t3;
    int t15;
    int t16;
    int t8;
    int t46;
    int t40;
    int stk[5];

    FUN_0c03bd28(a4, 0x0, 0x3, 0x5, 0x0);
    if (((int)(*(int *)((a4 + 0x304))) > 0) && ((t2 = *(int *)((a4 + 0x57C)), t2 != 4) && (t3 = *(int *)((a4 + 0x560)), t3 == 0))) {
    } else {
        t6 = *(int *)((a4 + 0x4F8));
        if ((t6 == 12) || (t6 == 13)) {
            *(unsigned int *)0xC247D04 = 0xA;
        }
        t7 = *(int *)((a4 + 0x4F8));
        if (((t7 != 4) && (t7 != 5)) || (t8 = *(int *)((a4 + 0x544)), t8 != 0)) {
        } else {
            *(unsigned int *)0xC247D04 = 0xA;
        }
        t15 = 0xA;
        t16 = t7;
    }
    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        t22 = 0x5C0;
        if ((*(int *)((a4 + 0x5C0))) == 0) {
            *(unsigned int *)((a4 + 0x5C0)) = 0x1;
            t22 = (FUN_0c0cc3f8(0xA2EA9, t15, t16, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
        }
        t46 = t22;
    } else {
        t30 = *(int *)((a4 + 0x57C));
        if ((t30 != 0) && ((t30 != 1) && ((t30 != 2) && (t30 != 3)))) {
            t32 = t30;
            if (t30 != 4) {
            } else {
                t32 = (FUN_0c0cc3f8(0xA2EA9, t15, t16, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
            }
            t40 = t32;
        } else {
            t40 = (FUN_0c0cc3f8(0x12EA9, t15, t16, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
        }
        t46 = t40;
    }
    return t46;
}

int FUN_0c0672b0(int a4, int a5, int a6, int a7)
{
    int t8;
    int t10;
    int t1;
    int t2;

    if ((((*(int *)0xC23ED5C) & 32) == 0) && (t1 = *(int *)((a4 + 0x88)), t2 = *(int *)((0xC247030 + (t1 << 2))), t2 == 4)) {
    } else {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    t8 = *(int *)0xC23ED9C;
    if (((int)t8 >= (int)0xB) && ((int)t8 <= (int)0xE)) {
        return 0xE;
    }
    t10 = *(int *)((((*(int *)((a4 + 0x88))) << 2) + 0xC246FF0));
    FUN_0c0dc510(0x0);
    FUN_0c0dcc70((*(float *)((t10 + 0x22C))), (*(float *)((t10 + 0x230))), (*(float *)((t10 + 0x234))));
    FUN_0c0dc890(((*(short *)((t10 + 0x222))) + (*(short *)((t10 + 0x228)))));
    FUN_0c0dc6e0(((*(short *)((t10 + 0x220))) + (*(short *)((t10 + 0x226)))));
    FUN_0c0dc950((*(short *)((t10 + 0x22A))));
    FUN_0c0dc6e0(0x8000);
    FUN_0c0dcc70(0.0f, 0.0f, (1.0f + 1.0f));
    FUN_0c0dcb80(35.0f, 35.0f, 18.3999996f);
    FUN_0c0de000(35.0f);
    FUN_0c0df4c0(0x2);
    FUN_0c0c4684((*(int *)((a4 + 0x7C))));
    return FUN_0c0dc4c0(0x1);
}

int FUN_0c096d6c(void)
{
    int t4;
    int t10;
    int t11;

    if ((*(int *)0xC23ED50) == 93) {
        *(float *)0xC200ADC = 1.0f;
        *(float *)0xC200AE0 = 0.75f;
        *(float *)0xC200AE4 = 0.299999982f;
        *(float *)0xC200AE8 = 0.529999971f;
        *(float *)0xC200AEC = 1.0f;
        *(float *)0xC200AF0 = 0.529999971f;
        *(float *)0xC200AF4 = 0.449999988f;
        *(float *)0xC200AF8 = 1.0f;
        *(float *)0xC200AFC = 0.449999988f;
    } else {
        *(float *)0xC200ADC = 1.0f;
        *(float *)0xC200AE0 = 0.75f;
        *(float *)0xC200AE4 = 0.299999982f;
        *(float *)0xC200AE8 = 0.649999976f;
        *(float *)0xC200AEC = 0.649999976f;
        *(float *)0xC200AF0 = 1.0f;
        *(float *)0xC200AF4 = 1.0f;
        *(float *)0xC200AF8 = 1.0f;
        *(float *)0xC200AFC = 1.0f;
    }
    t4 = 0x2A7;
    for (;;) {
        FUN_0c0cbafc(t4, 0x2, 0xFC000000, 0x84000000);
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x2B0) {
            break;
        }
    }
    FUN_0c0cbafc(0x2BE, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x2B0, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x291, 0x2, 0xFC000000, 0x84000000);
    FUN_0c0cbafc(0x295, 0x2, 0xFC006000, 0x84002000);
    t10 = 0x410;
    for (;;) {
        t11 = FUN_0c0cbafc(t10, 0x2, 0xFC000000, 0x84000000);
        t10 = (t10 + 0x1);
        if ((int)t10 >= (int)0x424) {
            break;
        }
    }
    return t11;
}

int FUN_0c0e26c4(int a4, int a5)
{
    int t0;
    int t6;
    int t9;
    int t28;
    int t29;
    int t30;
    int t15;
    int t18;
    int t19;
    int t5;

    t0 = *(int *)(((a4 - 12) + 0x0));
    if (((*(int *)(((a4 - 12) + 0x0))) & 0x40000000) == 0) {
        t6 = 0x0;
        if ((*(int *)(((a4 - 8) + 0x0))) != a4) {
            t5 = (*(int *)(((a4 - 8) + 0x0)));
            t6 = 0x1;
        }
        t15 = t5;
        t18 = 0x0;
        t19 = t6;
    } else {
        t9 = (*(int *)(((a4 - 8) + 0x0)));
        for (;;) {
            if (((*(int *)(((t9 - 12) + 0x0))) & 0x40000000) == 0) {
                break;
            }
            t9 = (*(int *)(((t9 - 8) + 0x0)));
        }
        t15 = t9;
        t18 = 0x1;
        t19 = 0x0;
    }
    if ((int)(*(int *)((((a4 - 12) - 4) + 0x0))) < 0) {
        *(unsigned int *)((((a4 - 12) - 4) + 0x0)) = (-(*(int *)((((a4 - 12) - 4) + 0x0))));
        FUN_0c0e2a4c(a4);
        *(unsigned int *)((((a4 - 12) - 4) + 0x0)) = (-(*(int *)((((a4 - 12) - 4) + 0x0))));
    } else {
        FUN_0c0e2a4c(a4);
    }
    t28 = FUN_0c0e262a(a5);
    if (t28 != a4) {
        if ((int)(t0 - 4) > 0) {
            t29 = 0x0;
            t30 = 0x0;
            for (;;) {
                t30 = (t30 + 0x1);
                *(unsigned int *)((t28 + t29)) = (*(int *)((a4 + t29)));
                t29 = (t29 + 0x4);
                if ((int)t30 >= (int)(t0 - 4)) {
                    break;
                }
            }
        }
    }
    if (t19 == 1) {
        FUN_0c0e2794(t28, t15);
    } else {
        if (t18 == 1) {
            FUN_0c0e2794(t15, t28);
        }
    }
    return t28;
}

int kmChangeContextDSTBlendMode(int a4)
{
    if ((unsigned int)a4 < (unsigned int)0xC) {
        switch ((a4 << 1)) {
            case 0:
            {
                *(unsigned int *)0xC95288C = (((*(int *)0xC95288C) & 0x1FFFFFFF) | 0xA0000000);
                *(unsigned int *)0xC95288C = ((0xE3FFFFFF & (*(int *)0xC95288C)) | 0x10000000);
            }
                break;
            case 2:
            {
                *(unsigned int *)0xC95288C = (((*(int *)0xC95288C) & 0x1FFFFFFF) | 0x80000000);
                *(unsigned int *)0xC95288C = ((0xE3FFFFFF & (*(int *)0xC95288C)) | 0x14000000);
            }
                break;
            case 4:
            {
                *(unsigned int *)0xC95288C = ((0xE3FFFFFF & (*(int *)0xC95288C)) | 0x18000000);
            }
                break;
            case 6:
            case 10:
            {
            }
                break;
            case 8:
            {
                *(unsigned int *)0xC95288C = ((0xE3FFFFFF & (*(int *)0xC95288C)) | 0x1C000000);
            }
                break;
            case 12:
            {
                *(unsigned int *)0xC95288C = ((0xE3FFFFFF & (*(int *)0xC95288C)) | 0x14000000);
            }
                break;
            case 14:
            {
                *(unsigned int *)0xC95288C = ((0xE3FFFFFF & (*(int *)0xC95288C)) | 0xC000000);
            }
                break;
            case 16:
            {
                *(unsigned int *)0xC95288C = ((0xE3FFFFFF & (*(int *)0xC95288C)) | 0x10000000);
            }
                break;
            case 18:
            {
                *(unsigned int *)0xC95288C = ((0xE3FFFFFF & (*(int *)0xC95288C)) | 0x8000000);
            }
                break;
            case 20:
            {
                *(unsigned int *)0xC95288C = ((0xE3FFFFFF & (*(int *)0xC95288C)) | 0x4000000);
            }
                break;
            default:
            {
                *(unsigned int *)0xC95288C = (0xE3FFFFFF & (*(int *)0xC95288C));
            }
                break;
        }
    }
    *(unsigned int *)0xC239B34 = (*(int *)0xC95288C);
    return 0x0;
}

int vmsfs_sysdiskfree(int a4)
{
    int t42;
    int t1;
    int t3;
    int t25;
    int t5;
    int t17;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t33;
    int t4;

    t42 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC956768) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t33 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t25 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = *(signed char *)((((a4 * 0x148) + 0xC956768) + 0x8)), t4 != 0)) {
                t5 = buIsFormat(a4);
                t17 = 0xFFFFFF03;
                if ((int)t5 < 0) {
                } else {
                    t6 = t5;
                    t7 = 0x0;
                    t8 = 0x0;
                    for (;;) {
                        t9 = *(int *)((((a4 * 0x148) + 0xC956768) + 0x1C));
                        t10 = *(int *)((t9 + 0x2C));
                        t11 = *(int *)((t9 + 0x10));
                        if ((int)t8 >= (int)(((int)((unsigned int)((int)((unsigned int)(t11 * (t10 + 0x1)) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t11 * (t10 + 0x1)))) ? 1u : 0u))) >> 1)) {
                            break;
                        }
                        t6 = (get_fat(a4, t8));
                        t6 = (unsigned short)t6;
                        t8 = (t8 + 0x1);
                        if (t6 == 0xFFFC) {
                            t7 = (t7 + 0x1);
                        }
                    }
                    t17 = t7;
                }
                t25 = t17;
            }
            t33 = t25;
        }
        t42 = t33;
    }
    return t42;
}

int buFbrExecFiberServer(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int t1;
    int t4;
    int t5;
    int t7;
    int t3;

    *(unsigned int *)0xC990CB4 = (*(int *)0xC990CB0);
    t1 = _builtin_get_fpscr();
    _builtin_set_fpscr(0x40001);
    *(unsigned int *)0xC990CB0 = a4;
    FUN_0c0f2d14((a4 + 0x4), a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
    t4 = 0x0;
    t5 = (0x210 + a4);
    for (;;) {
        if ((int)t4 >= (int)(*(int *)((a4 + 0x208)))) {
            break;
        }
        *(unsigned int *)((a4 + 0xD78)) = t5;
        t7 = *(int *)((t5 + 0xC));
        if (t7 != 0) {
            if (t7 != 3) {
                if (t7 != 1) {
                    if (t7 != 2) {
                    } else {
                        t3 = 0xC233FEE;
                        *(unsigned int *)((t5 + 0xC)) = 0x3;
                        *(unsigned int *)((t5 + 0x20)) = 0xC233FEE;
                    }
                } else {
                    t3 = (*(int *)((t5 + 0x14)));
                    if ((unsigned int)t3 <= (unsigned int)(*(int *)((a4 + 0x204)))) {
                        longjmp((t5 + 0x18), 0x1);
                    }
                }
            } else {
                _destructFiber(a4, t5);
            }
        }
        t3 = 0x124;
        t4 = (t4 + 0x1);
        t5 = (t5 + t3);
    }
    *(unsigned int *)((a4 + 0x204)) = ((*(int *)((a4 + 0x204))) + 0x1);
    *(unsigned int *)0xC990CB0 = (*(int *)0xC990CB4);
    _builtin_set_fpscr(t1);
    return 0x204;
}

int FUN_0c085638(int a4)
{
    float u0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    u0 = *(float *)((a4 + 0x284));
    t1 = *(int *)((a4 + 0x3D4));
    t2 = *(int *)((a4 + 0x3D8));
    t3 = *(int *)((a4 + 0x3DC));
    *(unsigned int *)((a4 + 0x2E4)) = 0x0;
    *(unsigned int *)((a4 + 0x2E8)) = 0x0;
    *(unsigned int *)((a4 + 0x2B4)) = 0x1;
    *(unsigned int *)((a4 + 0x2B8)) = 0x1;
    *(unsigned int *)((a4 + 0x2BC)) = 0x0;
    *(unsigned int *)((a4 + 0x2C0)) = 0x0;
    *(unsigned int *)((a4 + 0x2C4)) = 0x0;
    *(unsigned int *)((a4 + 0x2C8)) = 0x0;
    *(unsigned int *)((a4 + 0x2D4)) = 0x0;
    *(unsigned int *)((a4 + 0x2DC)) = 0x0;
    *(unsigned int *)((a4 + 0x2D8)) = 0x0;
    *(unsigned int *)((a4 + 0x2E0)) = 0x0;
    t4 = *(int *)((a4 + 0x2BC));
    t5 = *(signed char *)((((((t4 << 2) << 2) << 1) + 0xC1AAE7C) + 0x15));
    *(unsigned int *)((a4 + 0x2AC)) = ((((int)(unsigned char)t5 >= 0) ? (0x1 << ((unsigned char)t5 & 31)) : ((-(int)(unsigned char)t5 & 31) ? ((int)0x1 >> (-(int)(unsigned char)t5 & 31)) : ((int)0x1 >> 31))) - 1);
    *(unsigned int *)((a4 + 0x2B0)) = 0x0;
    *(unsigned int *)((a4 + 0x2CC)) = 0x0;
    *(unsigned int *)((a4 + 0x2D0)) = 0x0;
    *(unsigned int *)((a4 + 0x2A4)) = 0x0;
    *(unsigned int *)((a4 + 0x2A8)) = 0x0;
    FUN_0c0866c4((*(int *)((((((t4 << 2) << 2) << 1) + 0xC1AAE7C) + 0x18))), t2, 0x0, u0);
    FUN_0c0866c4(((*(int *)((((((t4 << 2) << 2) << 1) + 0xC1AAE7C) + 0x18))) + 0x6C), t3, 0x0, u0);
    FUN_0c086638(t2, t1, 0x0);
    *(float *)((a4 + 0x3E8)) = (*(float *)((t1 + 0x64)));
    *(unsigned int *)((a4 + 0x2F8)) = 0x0;
    *(unsigned int *)((a4 + 0x2FC)) = 0x0;
    return 0x2FC;
}

int FUN_0c08aa8e(int a4, int a5, int a6, int a7)
{
    int t3;
    int t4;
    int t8;
    int t9;
    int t1;
    int t2;
    float u5;
    float u6;
    float u7;
    int t37;
    int t38;
    float u43;
    float u44;
    float u45;
    int t26;
    int t27;
    float u32;
    float u33;
    float u34;
    int t14;
    int t15;
    float u20;
    float u21;
    float u22;

    FUN_0c0685a4(a4, a5, a6, a7);
    t3 = 0xC246FF0;
    t4 = 0x0;
    for (;;) {
        t8 = *(int *)((((t4 << 2) + 0xC247030) + 0x0));
        t9 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        if (((((t8 == 4)) ? 1 : 0) == 0) && ((t8 != 5) && (t8 != 3))) {
            t2 = t4;
            t1 = 0x154;
            t2 = (t2 << 1);
            t2 = (t2 + t4);
            t1 = (t1 + a4);
            t2 = (t2 << 2);
            t2 = (t2 + t1);
            *(float *)((t2 + 0x4)) = 0.0f;
            t37 = t1;
            t38 = t2;
            u43 = u5;
            u44 = u6;
            u45 = u7;
        } else {
            u7 = (*(float *)((t9 + 0x30)));
            u6 = 550.0f;
            u5 = (*(float *)((t9 + 0x38)));
            u5 = (-u5);
            u7 = (-u7);
            u5 = (u5 + 350.0f);
            u7 = (u7 + u6);
            u5 = _builtin_fabsf(u5);
            u7 = _builtin_fabsf(u7);
            u7 = (u7 + u5);
            u5 = 18.0f;
            if (u5 > u7) {
                if ((((t8 == 4)) ? 1 : 0) != 0) {
                    FUN_0c08a5e4(a4, t4);
                } else {
                    t14 = t1;
                    t15 = t2;
                    u20 = u5;
                    u21 = u6;
                    u22 = u7;
                }
                u5 = u20;
                u6 = u21;
                u7 = u22;
                t1 = t14;
                t2 = t15;
                FUN_0c08a8e0(a4, t4);
            } else {
                t2 = t4;
                t1 = 0x154;
                t2 = (t2 << 1);
                t2 = (t2 + t4);
                t1 = (t1 + a4);
                t2 = (t2 << 2);
                t2 = (t2 + t1);
                *(float *)((t2 + 0x4)) = 0.0f;
                t26 = t1;
                t27 = t2;
                u32 = u5;
                u33 = u6;
                u34 = u7;
            }
            t37 = t26;
            t38 = t27;
            u43 = u32;
            u44 = u33;
            u45 = u34;
        }
        u5 = u43;
        u6 = u44;
        u7 = u45;
        t1 = t37;
        t4 = (t4 + 0x1);
        t2 = t38;
        if ((int)t4 >= (int)0xC) {
            break;
        }
    }
    return FUN_0c0e16c0((*(int *)((a4 + 0x30))));
}

void FUN_0c09635c(int a4, int a5, float f4, float f5)
{
    float u0;
    float u2;
    float u4;

    if (((int)a4 >= (int)a5) && ((int)(a4 - a5) <= (int)0x8)) {
        u0 = 1.0f;
        if (0.0f > f5) {
            u0 = (-1.0f);
        }
        u2 = f5;
        if (0.0f > f5) {
            u2 = (-f5);
        }
        u4 = *(float *)0xC096470;
        FUN_0c0dc510(0x0);
        FUN_0c0dcc70(0.0f, (((((((float)(a4 - a5) * u0)) * (*(float *)0xC096478)) - f4)) * (*(float *)0xC09647C)), 0.0f);
        FUN_0c0dc890((a5 * 0x7123));
        FUN_0c0dcb80(u2, u2, u2);
        FUN_0c0848bc(((*(float *)0xC200AE8) * ((-((float)(a4 - a5) / u4)) + 1.0f)), ((*(float *)0xC200AEC) * ((-((float)(a4 - a5) / u4)) + 1.0f)), ((*(float *)0xC200AF0) * ((-((float)(a4 - a5) / u4)) + 1.0f)));
        FUN_0c0de000(u2);
        FUN_0c0c47ae(0x2BE);
        FUN_0c0dc4c0(0x1);
    return;
    }
}

void FUN_0c098c2e(int a4, int a5, float f4, float f5)
{
    float u0;
    float u2;
    float u4;

    if (((int)a4 >= (int)a5) && ((int)(a4 - a5) <= (int)0x8)) {
        u0 = 1.0f;
        if (0.0f > f5) {
            u0 = (-1.0f);
        }
        u2 = f5;
        if (0.0f > f5) {
            u2 = (-f5);
        }
        u4 = *(float *)0xC098D44;
        FUN_0c0dc510(0x0);
        FUN_0c0dcc70(0.0f, (((((((float)(a4 - a5) * u0)) * (*(float *)0xC098D4C)) - f4)) * (*(float *)0xC098D50)), 0.0f);
        FUN_0c0dc890((a5 * 0x7123));
        FUN_0c0dcb80(u2, u2, u2);
        FUN_0c0de000(u2);
        FUN_0c0848bc(((*(float *)0xC200AE8) * ((-((float)(a4 - a5) / u4)) + 1.0f)), ((*(float *)0xC200AEC) * ((-((float)(a4 - a5) / u4)) + 1.0f)), ((*(float *)0xC200AF0) * ((-((float)(a4 - a5) / u4)) + 1.0f)));
        FUN_0c0c47ae(0x2BE);
        FUN_0c0dc4c0(0x1);
    return;
    }
}
