/* Straight-line functions with calls and guards (batch gen_kn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02286c(int, int, float, float);
int FUN_0c02a19a(int);
int FUN_0c02a416(int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c03a66c(int, int, int, int);
int FUN_0c04685c(int, int, float, float, float, float);
int FUN_0c049b80(int);
int FUN_0c05a81e(int);
int FUN_0c07e24e(void);
int FUN_0c084bf6(int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a87b4(int, int, int, int);
int FUN_0c0a8d80(int);
int FUN_0c0bdec2(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcc80(int);
int FUN_0c0dcca0(int);
float FUN_0c0dcea0(int);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e5fe4(int);
extern void _builtin_ftrv(float *, float *);
extern void _builtin_ld_ext(float (*)[4]);
extern float _builtin_sqrtf(float);
extern void _builtin_st_ext(float (*)[4]);
int nlAddVector3op(int, int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c0260cc(int a4);
int FUN_0c083a6c(int a4);
int FUN_0c095438(int a4);
float FUN_0c02c254(int a4, int a5);
int FUN_0c093098(int a4);
int FUN_0c03f5b0(int a4);
int FUN_0c048a24(int a4, float f4, float f5, float f6, float f7);
int FUN_0c0bf36c(int a4);
int FUN_0c02cdb8(int a4, int a5, int a6);
int FUN_0c0bf234(int a4);
int FUN_0c024d84(int a4);
int FUN_0c0935cc(int a4, int a5, int a6, int a7);
int FUN_0c026034(int a4);
int FUN_0c04e670(int a4, int a5);
int FUN_0c04dfdc(int a4, int a5, int a6);
int FUN_0c031158(int a4, int a5, int a6);
int FUN_0c093738(int a4, int a5, int a6, int a7);
int FUN_0c0263dc(int a4);
int FUN_0c02e6cc(int a4);
int FUN_0c020a64(void);
int FUN_0c08b7dc(int a4, int a5, int a6, int a7);
int FUN_0c0b6a7c(int a4);
int FUN_0c05a94c(int a4, int a5);
float FUN_0c0dc860(float f4, float f5);
float FUN_0c0dc920(float f4, float f5);
float FUN_0c0dc980(float f4, float f5);
float FUN_0c0dc9e0(float f4, float f5);
int FUN_0c03f430(int a4);
int FUN_0c0457a8(void);
int FUN_0c0a8ac4(int a4);
int FUN_0c02bf94(int a4);
int FUN_0c045aa4(void);
int FUN_0c0ba57c(int a4);
int FUN_0c03b870(int a4, int a5, int a6, int a7);
int FUN_0c04c41c(int a4);
int FUN_0c0500dc(int a4);
int FUN_0c0a5200(int a4, int a5);
int FUN_0c0b5020(int a4);
int FUN_0c03f00c(int a4);
int FUN_0c03f194(int a4);
int FUN_0c03f2f0(int a4);
int FUN_0c0a94d4(void);
int FUN_0c0aa464(void);
int FUN_0c0ab2d0(void);
int FUN_0c0acb40(void);
int FUN_0c0ab804(void);
int FUN_0c0ad080(void);
int FUN_0c0ae138(void);
int FUN_0c0af970(void);
int FUN_0c0afd98(void);
int FUN_0c0b0b3c(void);
int FUN_0c0b24a8(void);
int FUN_0c0b37e0(void);
int FUN_0c0b6610(void);
int FUN_0c0b8938(void);
int FUN_0c083d2c(int a4, int a5);
int FUN_0c0ae194(void);
int FUN_0c0e6690(int a4, int a5);
int FUN_0c228ef8(int a4, int a5);
int FUN_0c228f34(int a4, int a5);
int FUN_0c228f48(int a4, int a5);
int FUN_0c02a190(int a4);
int FUN_0c0af168(void);

int FUN_0c0260cc(int a4)
{
    int stk[21];
    register int t0;
    register float u19;
    register float u20;
    register float u21;
    register float u22;
    register float u23;
    register float u24;
    register float u25;
    register float u26;
    register int t58;
    register int t73;

    t0 = *(int *)0xC247CAC;
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70((*(float *)((t0 + 0x254))), (*(float *)((t0 + 0x258))), (*(float *)((t0 + 0x25C))));
    nlRotateAZ((*(short *)((t0 + 0x3D0))));
    nlRotateAY((*(short *)((t0 + 0x3CE))));
    nlRotateAX((*(short *)((t0 + 0x3CC))));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = -7.0f;
    FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
    *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)((((((int)stk + 4) + 0x2C) + 0x4) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)((((((int)stk + 4) + 0x2C) + 0x8) + 0x0)) = (*(float *)(((int)stk + 20)));
    nlPopMatrix(0x1);
    *(float *)((a4 + 0x3BC)) = (*(float *)(((((int)stk + 4) + 0x2C) + 0x4)));
    u19 = *(float *)((a4 + 0x30));
    u20 = *(float *)((a4 + 0x34));
    u21 = *(float *)(((((int)stk + 4) + 0x2C) + 0x4));
    u22 = *(float *)(((((int)stk + 4) + 0x2C) + 0x0));
    u23 = *(float *)((a4 + 0x38));
    u24 = *(float *)(((((int)stk + 4) + 0x2C) + 0x8));
    u25 = ((u21 - u20) * (u21 - u20));
    u25 = u25 + (u22 - u19) * (u22 - u19);
    u26 = u25;
    u26 = u26 + (u24 - u23) * (u24 - u23);
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)(((((int)stk + 4) + 0x2C) + 0x0))) - (*(float *)((a4 + 0x30)))), ((*(float *)(((((int)stk + 4) + 0x2C) + 0x4))) - (*(float *)((a4 + 0x34)))), ((*(float *)(((((int)stk + 4) + 0x2C) + 0x8))) - (*(float *)((a4 + 0x38)))));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0249999985f;
    FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)((((((int)stk + 4) + 0x20) + 0x4) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)((((((int)stk + 4) + 0x20) + 0x8) + 0x0)) = (*(float *)(((int)stk + 20)));
    nlPopMatrix(0x1);
    *(float *)((a4 + 0x4B0)) = ((*(float *)((a4 + 0x4B0))) + (*(float *)(((((int)stk + 4) + 0x20) + 0x0))));
    *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) + (*(float *)(((0x4 + (((int)stk + 4) + 0x20)) + 0x0))));
    *(float *)((a4 + 0x4B8)) = ((*(float *)((a4 + 0x4B8))) + (*(float *)(((0x8 + (((int)stk + 4) + 0x20)) + 0x0))));
    *(unsigned int *)((a4 + 0x508)) = 0x1;
    *(unsigned int *)((a4 + 0x514)) = 0x1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x518 + a4)) = *(struct mv3 *)((0x254 + t0)); }
    FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
    if ((*(float *)0xC0263BC) > _builtin_sqrtf(u26)) {
        *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) + 0x1);
    }
    if ((int)(*(int *)((a4 + 0x3AC))) <= (int)0x78) {
        t58 = *(int *)((a4 + 0x3B0));
        *(unsigned int *)((a4 + 0x3B0)) = (t58 + 0x1);
        if ((int)(t58 + 0x1) > (int)0x258) {
            FUN_0c02a19a(a4);
        }
    } else {
        FUN_0c02a19a(a4);
    }
    t73 = FUN_0c02a416(a4);
    if (t73 != 0) {
        FUN_0c02a19a(a4);
    }
    return (FUN_0c02286c(a4, 0x28, (*(float *)((a4 + 0x3BC))), (*(float *)0xC0263C8)));
}

int FUN_0c083a6c(int a4)
{
    int stk[12];
    register int t1;
    register int t3;
    register float t5;
    register int t7;
    register int t10;
    register float t27;
    register float t31;

    t1 = *(int *)((0xC246FF0 + ((unsigned char)(*(signed char *)0xC247CB8) << 2)));
    t3 = *(int *)((0xC246FF0 + ((unsigned char)(*(signed char *)0xC247CB9) << 2)));
    nlSubVector3op(((int)stk + 4), (0x22C + t3), (0x22C + t1));
    t5 = FUN_0c0dcea0(((int)stk + 4));
    t7 = 0x1;
    if (t5 > (*(float *)((a4 + 0x3B0)))) {
        t7 = 0x0;
    }
    if (t7 != (*(int *)((a4 + 0x3F4)))) {
        t10 = *(int *)((a4 + 0x3F0));
        *(unsigned int *)((a4 + 0x3F0)) = (t10 + 0x1);
        if ((int)(t10 + 0x1) > (int)0x78) {
            *(unsigned int *)((a4 + 0x3F4)) = t7;
            *(unsigned int *)((a4 + 0x3F0)) = 0x0;
        }
    }
    if ((*(int *)((a4 + 0x3F4))) == 0) {
        nlGetAverageVector((0x22C + t1), (0x22C + t3), 0xC247EB4, 0.799999952f, 0.199999988f);
        *(float *)(((int)stk + 8)) = 0.0f;
        nlScaleUnitVector(((int)stk + 4), ((int)stk + 4), 20.0f);
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 5.0f);
        nlAddVector3op(0xC247EA8, (0x22C + t3), ((int)stk + 4));
    } else {
        nlGetAverageVector((0x22C + t1), (0x22C + t3), 0xC247EB4, 0.199999988f, (*(float *)0xC083CBC));
        *(float *)(((int)stk + 8)) = 0.0f;
        nlScaleUnitVector(((int)stk + 4), ((int)stk + 4), (*(float *)0xC083CC4));
        *(float *)(((int)stk + 8)) = 5.0f;
        FUN_0c0dc5a0();
        t27 = FUN_0c0da410(((*(int *)0xC23A258) << 8));
        nlRotateAY((int)(t27 * (*(float *)0xC083CD8)));
        t31 = FUN_0c0d9e90(((*(int *)0xC23A258) << 7));
        nlRotateAX((int)(t31 * (*(float *)0xC083CE4)));
        FUN_0c0db470(((int)stk + 4), ((int)stk + 4));
        nlPopMatrix(0x1);
        nlSubVector3op(0xC247EA8, (0x22C + t1), ((int)stk + 4));
    }
    *(float *)((a4 + 0x3B0)) = t5;
    return 0x3B0;
}

int FUN_0c095438(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)((a4 + 0x38));
    t1 = *(short *)((a4 + 0x4E));
    if (t1 != 0) {
        t2 = t1;
        if (t1 != 1) {
        } else {
            t1 = *(short *)((a4 + 0x56));
            *(unsigned short *)((a4 + 0x56)) = (t1 + 0x1);
            t3 = 0x56;
            if ((int)(short)(t1 + 0x1) >= (int)0x3) {
                *(unsigned short *)((a4 + 0x56)) = 0x0;
                *(unsigned short *)((a4 + 0x62)) = (*(short *)((((*(short *)((a4 + 0x66))) << 1) + (*(int *)((t0 + 0x14))))));
                if ((*(int *)((t0 + 0x18))) != 0) {
                    *(unsigned short *)((a4 + 0x64)) = (*(short *)((((*(short *)((a4 + 0x66))) << 1) + (*(int *)((t0 + 0x18))))));
                }
                t1 = *(short *)((a4 + 0x66));
                *(unsigned short *)((a4 + 0x66)) = (t1 + 0x1);
                t4 = 0x3A;
                if ((int)(short)(t1 + 0x1) >= (int)(unsigned char)(*(signed char *)((t0 + 0x3A)))) {
                    *(unsigned short *)((a4 + 0x4E)) = ((*(short *)((a4 + 0x4E))) + 0x1);
                    t4 = 0x4E;
                }
                t3 = t4;
            }
            t2 = t3;
        }
        t1 = t2;
    } else {
        t2 = *(short *)((a4 + 0x56));
        *(unsigned short *)((a4 + 0x56)) = (t2 + 0x1);
        if ((int)(short)(t2 + 0x1) >= (int)0x3) {
            *(unsigned short *)((a4 + 0x56)) = 0x0;
            t2 = *(short *)((a4 + 0x5A));
            *(unsigned short *)((a4 + 0x5A)) = (t2 + 0x1);
            if ((int)(short)(t2 + 0x1) >= (int)(unsigned char)(*(signed char *)((t0 + 0x38)))) {
                *(unsigned short *)((a4 + 0x5A)) = 0x0;
            }
        }
        *(unsigned short *)((a4 + 0x62)) = (*(short *)((((*(short *)((a4 + 0x5A))) << 1) + (*(int *)((t0 + 0xC))))));
        if ((int)(*(short *)((a4 + 0x66))) < (int)0x14) {
            *(unsigned short *)((a4 + 0x3E)) = ((*(short *)((a4 + 0x3E))) + (*(short *)(((0x5E + t0) + 0x0))));
            *(unsigned short *)((a4 + 0x3C)) = ((*(short *)((a4 + 0x3C))) + (*(short *)(((0x62 + t0) + 0x0))));
        }
        t0 = *(short *)((a4 + 0x66));
        *(unsigned short *)((a4 + 0x66)) = (t0 - 1);
        t2 = 0x66;
        if ((int)(short)(t0 - 1) < 0) {
            *(unsigned short *)((a4 + 0x4E)) = ((*(short *)((a4 + 0x4E))) + 0x1);
            *(unsigned short *)((a4 + 0x66)) = 0x0;
            *(unsigned short *)((a4 + 0x3E)) = 0x0;
            *(unsigned short *)((a4 + 0x3C)) = 0x0;
            t2 = 0x3C;
        }
        t1 = t2;
    }
    return t1;
}

float FUN_0c02c254(int a4, int a5)
{
    register float u11;
    register float u35;

    if (!(((float)(*(int *)((a4 + 0x308))) * (*(float *)0xC02C32C)) > (float)(*(int *)((a4 + 0x304))))) {
        *(unsigned int *)((a4 + 0x4F0)) = 0x21;
    } else {
        *(unsigned int *)((a4 + 0x4F0)) = 0x22;
    }
    if (!(((float)(*(int *)((a4 + 0x308))) * (*(float *)0xC02C330)) > (float)(*(int *)((a4 + 0x304))))) {
        *(unsigned int *)((a4 + 0x4F4)) = 0x23;
    } else {
        u11 = *(float *)0xC02C334;
        if (!(((float)(*(int *)((a4 + 0x308))) * u11) > (float)(*(int *)((a4 + 0x304))))) {
            if ((*(int *)((a4 + 0x4F4))) != 36) {
                *(unsigned int *)((a4 + 0x4FC)) = 0x1;
            }
            *(unsigned int *)((a4 + 0x4F4)) = 0x24;
        } else {
            if ((int)(*(int *)((a4 + 0x304))) > 0) {
                if ((*(int *)((a4 + 0x4F4))) != 37) {
                    *(unsigned int *)((a4 + 0x4FC)) = 0x1;
                }
                *(unsigned int *)((a4 + 0x4F4)) = 0x25;
            }
        }
        u35 = u11;
    }
    return u35;
}

int FUN_0c093098(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t1 = *(int *)((a4 + 0x98));
    *(unsigned int *)((a4 + 0x98)) = (t1 + 0x1);
    if ((((t1 + 0x1) - 1) & (*(int *)((a4 + 0xA0)))) == 0) {
        t1 = *(int *)((((*(int *)((a4 + 0x88))) << 2) + 0xC246FF0));
        t2 = *(int *)((a4 + 0x9C));
        *(unsigned int *)((a4 + 0x9C)) = (t2 + 0x1);
        t3 = *(short *)(((((t2 + 0x1) - 1) << 1) + (*(int *)((a4 + 0x8C)))));
        if ((int)(short)t3 < 0) {
            t2 = *(int *)((a4 + 0x88));
            t4 = *(int *)((a4 + 0x80));
            *(unsigned int *)((((((((t2 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t4 << 2) << 1)) + 0x0)) = 0x0;
            *(unsigned short *)((((((((t2 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t4 << 2) << 1)) + 0x6)) = ((*(short *)((((((((t2 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t4 << 2) << 1)) + 0x6))) - 1);
            if (((*(short *)((((((((t2 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t4 << 2) << 1)) + 0x4))) != 0) && (t0 = *(short *)((((((((t2 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t4 << 2) << 1)) + 0x6)), t0 == 0)) {
                *(unsigned int *)(((((*(int *)((a4 + 0x80))) << 2) + (0x404 + t1)) + 0x0)) = (*(short *)((((((((t2 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t4 << 2) << 1)) + 0x4)));
                *(unsigned short *)((((((((t2 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t4 << 2) << 1)) + 0x4)) = 0x0;
            }
            return FUN_0c0e19f2(a4, ((((((t2 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t4 << 2) << 1)), t1, 0x0);
        }
        *(unsigned int *)(((((*(int *)((a4 + 0x80))) << 2) + (0x404 + t1)) + 0x0)) = (short)t3;
        return 0x80;
    }
    return 0xA0;
}

int FUN_0c03f5b0(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x4DC));
    t1 = *(int *)((a4 + 0x4E0));
    *(unsigned int *)((a4 + 0x4E0)) = (t1 + 0x1);
    *(unsigned int *)((a4 + 0x5BC)) = (*(short *)((((((t1 + 0x1) << 2) << 1) + (*(int *)((((((t0 - 76) << 1) + (t0 - 76)) << 2) + 0xC1F518C)))) + 0x0)));
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x20C)) = 0x4000;
    *(unsigned int *)((a4 + 0x210)) = 0x0;
    *(unsigned int *)((a4 + 0x3AC)) = 0x0;
    *(unsigned int *)((a4 + 0x3B0)) = (*(int *)((a4 + 0x4E4)));
    *(unsigned int *)((a4 + 0x1B0)) = 0x0;
    *(unsigned int *)((a4 + 0x534)) = 0x0;
    *(unsigned int *)((a4 + 0xA4)) = 0xA7F;
    *(unsigned int *)((a4 + 0x4C4)) = 0x4;
    *(unsigned int *)((a4 + 0x4C8)) = 0x0;
    *(unsigned int *)((a4 + 0x4CC)) = 0x1;
    *(unsigned int *)((a4 + 0x4D0)) = 0x0;
    *(unsigned int *)((a4 + 0x4F8)) = 0x9;
    *(unsigned int *)((a4 + 0x4DC)) = 0x0;
    *(unsigned int *)((a4 + 0x4E0)) = 0x0;
    *(unsigned int *)((a4 + 0x4E4)) = 0x0;
    *(unsigned int *)((a4 + 0x4E8)) = 0x0;
    *(unsigned int *)((a4 + 0x4EC)) = 0x0;
    *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x4;
    return 0xC247030;
}

int FUN_0c048a24(int a4, float f4, float f5, float f6, float f7)
{
    register int t1;

    *(unsigned int *)((a4 + 0x4C8)) = 0x2;
    *(unsigned int *)((a4 + 0xD8)) = 0x0;
    *(unsigned int *)((a4 + 0x3AC)) = 0x0;
    *(unsigned int *)((a4 + 0x3B0)) = 0x0;
    *(unsigned int *)((a4 + 0x3A0)) = 0x0;
    t1 = *(int *)((a4 + 0x4F0));
    *(unsigned int *)((a4 + 0x55C)) = (*(int *)((((*(int *)(((((*(int *)(((0x54C + a4) + 0x0))) - 1) << 2) + (*(int *)((0xC1F8E48 + (((t1 << 2) + t1) << 2))))))) + (((*(int *)((a4 + 0x544))) << 2) << 2)) + 0x4)));
    *(unsigned int *)((a4 + 0x20C)) = 0x80;
    *(unsigned int *)((a4 + 0x534)) = 0x0;
    *(unsigned int *)((a4 + 0x1EC)) = 0xFFC;
    *(unsigned int *)((a4 + 0x2C4)) = 0x598;
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x510)) = (*(int *)((a4 + 0x1C4)));
    *(unsigned int *)((a4 + 0x20C)) = ((*(int *)((a4 + 0x20C))) | 0x40);
    *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
    return FUN_0c04685c(a4, 0xA, 0.0f, (*(float *)0xC048B60), f6, f7);
}

int FUN_0c0bf36c(int a4)
{
    int stk[19];
    register int t18;

    nlGetMatrix(((int)stk + 4));
    FUN_0c0dc5a0();
    nlRotateAX(0x209);
    FUN_0c0dcc80(0xC1960AC);
    nlMultiMatrix(0xC260A78);
    nlMultiMatrix(((int)stk + 4));
    FUN_0c0bdec2(((*(int *)0xC260A34) + 0x100));
    FUN_0c0dbda0(0xC260A38);
    FUN_0c0dcca0(0xC1960AC);
    nlRotateAX(0xFFFFFDF7);
    FUN_0c0de000((*(float *)((a4 + 0x280))));
    t18 = ((int (*)(int, float))((*(int *)((((unsigned short)(*(short *)((a4 + 0x454))) << 2) + 0xC195F38)))))((*(short *)(((*(int *)0xC260A34) + 0x108))), (*(float *)((a4 + 0x458))));
    return (nlPopMatrix(0x1));
}

int FUN_0c02cdb8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x304;
    if ((int)(*(int *)((a4 + 0x304))) < (int)(*(int *)((a4 + 0x308)))) {
        t1 = *(int *)((0xC247030 + ((*(int *)((a4 + 0x490))) << 2)));
        t2 = t1;
        if (t1 == 4) {
            t1 = *(int *)((a4 + 0x490));
            t3 = *(int *)((((t1 << 2) + 0xC246FF0) + 0x0));
            if ((*(int *)((a4 + 0x1C4))) == t1) {
                *(unsigned int *)((t3 + 0x304)) = ((*(int *)((t3 + 0x304))) - 1);
                if ((int)(*(int *)((t3 + 0x304))) <= 0) {
                    *(unsigned int *)((t3 + 0x304)) = 0x1;
                }
            } else {
                *(unsigned int *)((t3 + 0x304)) = ((*(int *)((t3 + 0x304))) - ((*(int *)(((0x308 + a4) + 0x0))) - (*(int *)(((0x304 + a4) + 0x0)))));
                if ((int)(*(int *)((t3 + 0x304))) <= 0) {
                    *(unsigned int *)((a4 + 0x304)) = 0x0;
                    *(unsigned int *)((t3 + 0x304)) = 0x0;
                }
            }
            if ((*(int *)((a4 + 0x304))) != 0) {
                *(unsigned int *)((a4 + 0x304)) = (*(int *)((a4 + 0x308)));
            }
            t2 = 0x304;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c0bf234(int a4)
{
    int stk[20];
    register int t17;

    nlGetMatrix((((int)stk + 4) + 0x4));
    FUN_0c0dc5a0();
    *(unsigned int *)(((int)stk + 4)) = 0xC1960A0;
    FUN_0c0dcc80(0xC1960A0);
    nlMultiMatrix(0xC260BF8);
    nlMultiMatrix((((int)stk + 4) + 0x4));
    FUN_0c0bdec2(((*(int *)0xC260A34) + 0x90));
    FUN_0c0dbda0(0xC260BB8);
    FUN_0c0dcca0((*(int *)(((int)stk + 4))));
    FUN_0c0de000((*(float *)((a4 + 0x280))));
    t17 = ((int (*)(int, float))((*(int *)((((unsigned short)(*(short *)((a4 + 0x454))) << 2) + 0xC195F38)))))((*(short *)(((*(int *)0xC260A34) + 0x98))), (*(float *)((a4 + 0x458))));
    return (nlPopMatrix(0x1));
}

int FUN_0c024d84(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x4F0));
    *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x0)));
    if ((*(int *)((a4 + 0x4C8))) != 0) {
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    }
    *(unsigned int *)((a4 + 0x20C)) = 0x1;
    *(unsigned short *)((a4 + 0x454)) = 0x1;
    *(unsigned int *)((a4 + 0x3AC)) = 0x0;
    *(unsigned int *)((a4 + 0x3B4)) = 0x1E;
    *(unsigned int *)((a4 + 0x3B0)) = 0x1E;
    *(unsigned int *)((a4 + 0x3B8)) = 0x0;
    *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x500)) = 0x0;
    *(unsigned int *)((a4 + 0x2F0)) = 0x0;
    *(unsigned int *)((a4 + 0x5B4)) = 0x0;
    *(unsigned int *)((a4 + 0x1EC)) = 0xFFC;
    *(unsigned int *)((a4 + 0x4D0)) = 0x0;
    *(unsigned int *)((a4 + 0x4C4)) = 0x0;
    *(unsigned int *)((a4 + 0x4CC)) = 0x0;
    *(unsigned int *)((a4 + 0x4C8)) = 0x3;
    *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
    return 0x4F8;
}

int FUN_0c0935cc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(int *)((((*(int *)((a4 + 0x88))) << 2) + 0xC246FF0));
    if (t1 != 0) {
        t2 = *(int *)((t1 + 0x2B4));
        if (((int)(*(int *)((a4 + 0xA4))) > (int)t2) && ((t0 = *(int *)((t1 + 0x2EC)), (t0 & 15) == 0) || (t2 == 0))) {
            return t0;
        }
        t0 = *(int *)((a4 + 0x88));
        t2 = *(int *)((a4 + 0x80));
        t3 = a4;
        if ((*(int *)((((((((t0 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t2 << 2) << 1)) + 0x0))) == (*(int *)((a4 + 0x8)))) {
            *(unsigned int *)(((((*(int *)((a4 + 0x80))) << 2) + (0x404 + t1)) + 0x0)) = (*(short *)((((((((t0 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t2 << 2) << 1)) + 0x4)));
            *(unsigned short *)((((((((t0 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t2 << 2) << 1)) + 0x4)) = 0x0;
            *(unsigned int *)((((((((t0 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t2 << 2) << 1)) + 0x0)) = 0x0;
            t3 = 0x0;
        }
        *(unsigned short *)((((((((t0 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t2 << 2) << 1)) + 0x6)) = ((*(short *)((((((((t0 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t2 << 2) << 1)) + 0x6))) - 1);
        return FUN_0c0e19f2(t3, ((((((t0 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t2 << 2) << 1)), t1, a7);
    }
    return 0xC246FF0;
}

int FUN_0c026034(int a4)
{
    int stk[3];
    register int t0;
    register int t5;

    t0 = *(int *)((a4 + 0x4F0));
    *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((((t0 << 2) + t0) << 2) + 0xC1F8E44))) + 0x0)));
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x3AC)) = 0x0;
    *(unsigned int *)((a4 + 0x3B0)) = 0x1;
    *(unsigned int *)((a4 + 0x4C8)) = 0x3;
    *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
    *(volatile int *)0xC23A258;
    t5 = FUN_0c0e5fe4(0x1);
    if ((unsigned int)t5 > (unsigned int)(*(int *)(((0xBC + a4) + 0x0)))) {
        FUN_0c0cc3f8(0x431A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    }
    return FUN_0c02286c(a4, 0x28, 10.0f, 0.0199999996f);
}

int FUN_0c04e670(int a4, int a5)
{
    register int t0;
    register int t9;

    t0 = *(int *)((a4 + 0x2EC));
    t9 = t0;
    if ((t0 & 12) != 0) {
        *(unsigned int *)((a4 + 0x1B0)) = 0x0;
        *(unsigned int *)((a4 + 0xA4)) = ((*(int *)((a4 + 0xA4))) | 0x62);
        *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)((((*(int *)(((0x340 + a4) + 0x0))) << 1) + ((((*(int *)((a4 + 0xC0))) >> 1) * 0x2C) + 0xC1FE210))));
        *(unsigned int *)((a4 + 0x20C)) = ((*(int *)((a4 + 0x20C))) & 0xFFBFFFFF);
        *(unsigned int *)((a4 + 0x20C)) = ((*(int *)((a4 + 0x20C))) | 0x1);
        *(unsigned int *)((a4 + 0x210)) = 0x0;
        *(unsigned int *)((a4 + 0x2D4)) = 0x3;
        if ((int)(*(int *)((a4 + 0x394))) >= 0) {
            *(unsigned int *)((a4 + 0x394)) = 0x0;
        }
        t9 = 0x394;
    }
    return t9;
}

int FUN_0c04dfdc(int a4, int a5, int a6)
{
    register int t0;
    register int t6;

    t0 = *(int *)((a4 + 0x2EC));
    t6 = t0;
    if ((t0 & 12) != 0) {
        *(unsigned int *)((a4 + 0x20C)) = 0x1;
        *(unsigned int *)((a4 + 0x210)) = 0x0;
        *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (unsigned short)(*(short *)(((((*(int *)(((0x340 + a4) + 0x0))) << 1) + (0xC1FE210 + (((*(int *)((a4 + 0xC0))) >> 1) * 0x2C))) + 0x0)));
        *(unsigned int *)((a4 + 0x2D4)) = 0x2;
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0x3AC)) = 0x0;
        *(unsigned int *)((a4 + 0x3B0)) = 0x0;
        *(unsigned int *)((a4 + 0x378)) = 0x0;
        if ((int)(*(int *)((a4 + 0x394))) >= 0) {
            *(unsigned int *)((a4 + 0x394)) = 0x0;
        }
        t6 = 0x394;
    }
    return t6;
}

int FUN_0c031158(int a4, int a5, int a6)
{
    int t10;
    register int t22;

    if ((*(int *)((a4 + 0x554))) == 2) {
        if ((*(int *)((a4 + 0x4F4))) != 13) {
            *(unsigned int *)((a4 + 0x340)) = 0x0;
            *(unsigned int *)((a4 + 0x4E8)) = 0x0;
        }
        t22 = 0xD;
    } else {
        if ((*(int *)((a4 + 0x4F4))) == 13) {
            t10 = *(int *)((a4 + 0x340));
            if ((t10 != 1) && (t10 != 2)) {
                *(unsigned int *)((a4 + 0x3B8)) = ((*(int *)((a4 + 0x3B8))) & 0xFFFFFFFE);
            } else {
                *(unsigned int *)((a4 + 0x3B8)) = ((*(int *)((a4 + 0x3B8))) | 0x1);
            }
            *(unsigned int *)((a4 + 0x4FC)) = 0x1;
        }
        t22 = 0xE;
    }
    *(unsigned int *)((a4 + 0x4F4)) = t22;
    return 0x4F4;
}

int FUN_0c093738(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t14;

    t0 = *(int *)((a4 + 0x8C));
    t1 = *(int *)((a4 + 0x88));
    t2 = *(int *)((a4 + 0x80));
    if ((*(int *)((a4 + 0x78))) != (*(int *)((t0 + 0x2BC)))) {
        t14 = a4;
        if ((*(int *)((((((((t1 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t2 << 2) << 1)) + 0x0))) == (*(int *)((a4 + 0x8)))) {
            *(unsigned int *)(((((*(int *)((a4 + 0x80))) << 2) + (0x404 + t0)) + 0x0)) = (*(short *)((((((((t1 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t2 << 2) << 1)) + 0x4)));
            *(unsigned short *)((((((((t1 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t2 << 2) << 1)) + 0x4)) = 0x0;
            *(unsigned int *)((((((((t1 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t2 << 2) << 1)) + 0x0)) = 0x0;
            t14 = 0x0;
        }
        *(unsigned short *)((((((((t1 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t2 << 2) << 1)) + 0x6)) = ((*(short *)((((((((t1 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t2 << 2) << 1)) + 0x6))) - 1);
        return FUN_0c0e19f2(t14, ((((((t1 << 2) << 2) << 2) << 1) + 0xC248EF0) + ((t2 << 2) << 1)), t0, a7);
    }
    return 0x78;
}

int FUN_0c0263dc(int a4)
{
    *(unsigned int *)((a4 + 0x2C4)) = 0x376;
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x4C8)) = 0x2;
    *(unsigned int *)((a4 + 0x4C4)) = 0x0;
    *(unsigned int *)((a4 + 0x20C)) = 0x80;
    *(unsigned int *)((a4 + 0x3AC)) = 0x0;
    *(unsigned int *)((a4 + 0x3B0)) = 0x0;
    *(unsigned int *)((a4 + 0x3A4)) = 0x0;
    *(unsigned int *)((a4 + 0x564)) = 0x0;
    *(unsigned int *)((a4 + 0x56C)) = 0x0;
    *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) + 0.277219981f);
    *(unsigned int *)((a4 + 0x4E8)) = 0x1;
    *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
    return 0x4F8;
}

int FUN_0c02e6cc(int a4)
{
    register int t1;

    if (((*(int *)((a4 + 0x20C))) & 0x4000) == 0) {
        t1 = *(int *)((a4 + 0x4F0));
        *(unsigned int *)((a4 + 0x5BC)) = (unsigned short)(*(short *)(((*(int *)(((((t1 << 2) + t1) << 2) + 0xC1F8E44))) + 0x20)));
    }
    *(unsigned int *)((a4 + 0x4F0)) = 0x6;
    *(unsigned int *)((a4 + 0x4F4)) = 0x8;
    *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
    return 0x4F8;
}

int FUN_0c020a64(void)
{
    register int t0;
    register int t1;
    int t3;
    register int t4;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if (((*(short *)(((0xC2460F4 + t0) + 0x4))) != 0) && (t3 = *(int *)(((0xC2460F4 + t1) + 0x0)), t4 = *(int *)((t3 + 0xC8)), t4 == 64)) {
            break;
        }
        t0 = (t0 + 0x10);
        t1 = (t1 + 0x10);
        if ((unsigned int)t0 >= (unsigned int)0x200) {
            return 0x0;
        }
    }
    return 0x1;
}

int FUN_0c08b7dc(int a4, int a5, int a6, int a7)
{
    register int t1;
    int t3;

    t1 = *(int *)((a4 + 0x38));
    if (((*(int *)((0xC247030 + ((*(int *)((a4 + 0x38))) << 2)))) == 4) && (t3 = *(int *)0xC23ED5C, (t3 & 6) == 0)) {
        return t3;
    }
    *(unsigned int *)(((*(int *)((a4 + 0x30))) + 0x38C)) = 0x0;
    *(unsigned int *)((((((t1 << 2) + t1) << 2) + 0xC248CBC) + 0x0)) = 0x0;
    return FUN_0c0e19f2(a4, ((((t1 << 2) + t1) << 2) + 0xC248CBC), 0x0, a7);
}

int FUN_0c0b6a7c(int a4)
{
    register int t0;

    t0 = *(int *)0xC246FF0;
    *(float *)((a4 + 0x254)) = (*(float *)((t0 + 0x30)));
    *(float *)((a4 + 0x258)) = (*(float *)0xC0B6B58);
    *(float *)((a4 + 0x25C)) = (*(float *)((t0 + 0x38)));
    *(unsigned short *)((a4 + 0x3CE)) = (*(short *)(((*(int *)0xC247CAC) + 0x3CE)));
    return FUN_0c07e24e();
}

int FUN_0c05a94c(int a4, int a5)
{
    register int t1;

    if ((*(int *)((a4 + 0xEC))) == 0) {
        t1 = *(int *)((a4 + 0x288));
        *(unsigned int *)((a4 + 0xEC)) = (*(int *)((t1 + 0x0)));
        *(unsigned int *)((a4 + 0x288)) = (t1 + 0x4);
    }
    *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | (*(int *)((a4 + 0xEC))));
    return FUN_0c05a81e(a4);
}

float FUN_0c0dc860(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];

    u0[0] = 0.0f;
    u0[1] = f5;
    u0[2] = f4;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = 0.0f;
    u1[1] = f4;
    u1[2] = f5;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[4] = u0[0];
    u2[5] = u0[1];
    _builtin_ld_ext((float (*)[4])u2);
    _builtin_st_ext((float (*)[4])u3);
    u3[6] = u0[2];
    u3[7] = u0[3];
    _builtin_ld_ext((float (*)[4])u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[8] = u1[0];
    u4[9] = u1[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[10] = u1[2];
    u5[11] = u1[3];
    _builtin_ld_ext((float (*)[4])u5);
    return u0[0];
}

float FUN_0c0dc920(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];

    u0[0] = f5;
    u0[1] = 0.0f;
    u0[2] = f4;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = (-f4);
    u1[1] = 0.0f;
    u1[2] = f5;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[0] = u0[0];
    u2[1] = u0[1];
    _builtin_ld_ext((float (*)[4])u2);
    _builtin_st_ext((float (*)[4])u3);
    u3[2] = u0[2];
    u3[3] = u0[3];
    _builtin_ld_ext((float (*)[4])u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[8] = u1[0];
    u4[9] = u1[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[10] = u1[2];
    u5[11] = u1[3];
    _builtin_ld_ext((float (*)[4])u5);
    return u0[0];
}

float FUN_0c0dc980(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];

    u0[0] = f5;
    u0[1] = f4;
    u0[2] = 0.0f;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = (-f4);
    u1[1] = f5;
    u1[2] = 0.0f;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[0] = u0[0];
    u2[1] = u0[1];
    _builtin_ld_ext((float (*)[4])u2);
    _builtin_st_ext((float (*)[4])u3);
    u3[2] = u0[2];
    u3[3] = u0[3];
    _builtin_ld_ext((float (*)[4])u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[4] = u1[0];
    u4[5] = u1[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[6] = u1[2];
    u5[7] = u1[3];
    _builtin_ld_ext((float (*)[4])u5);
    return u0[0];
}

float FUN_0c0dc9e0(float f4, float f5)
{
    float u0[4];
    float u1[4];
    float u2[16];
    float u3[16];
    float u4[16];
    float u5[16];

    u0[0] = f5;
    u0[1] = (-f4);
    u0[2] = 0.0f;
    u0[3] = 0.0f;
    _builtin_ftrv(u0, u0);
    u1[0] = f4;
    u1[1] = f5;
    u1[2] = 0.0f;
    u1[3] = 0.0f;
    _builtin_ftrv(u1, u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[0] = u0[0];
    u2[1] = u0[1];
    _builtin_ld_ext((float (*)[4])u2);
    _builtin_st_ext((float (*)[4])u3);
    u3[2] = u0[2];
    u3[3] = u0[3];
    _builtin_ld_ext((float (*)[4])u3);
    _builtin_st_ext((float (*)[4])u4);
    u4[4] = u1[0];
    u4[5] = u1[1];
    _builtin_ld_ext((float (*)[4])u4);
    _builtin_st_ext((float (*)[4])u5);
    u5[6] = u1[2];
    u5[7] = u1[3];
    _builtin_ld_ext((float (*)[4])u5);
    return u0[0];
}

int FUN_0c03f430(int a4)
{
    register int t7;
    register int t2;
    register int t3;

    t7 = 0x304;
    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        t2 = *(int *)((a4 + 0x2EC));
        t3 = t2;
        if ((t2 & 12) != 0) {
            *(unsigned int *)((a4 + 0x4DC)) = 0x43;
            *(unsigned int *)((a4 + 0x47C)) = 0x0;
            t3 = 0x47C;
        }
        t7 = t3;
    }
    return t7;
}

int FUN_0c0457a8(void)
{
    register int t1;

    if ((*(int *)0xC247030) != 0) {
        *(float *)0xC24758C = 0.0f;
        *(unsigned int *)0xC246DD0 = 0x0;
        t1 = 0xC246DD0;
    }
    return t1;
}

int FUN_0c0a8ac4(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x30));
    *(unsigned int *)0xC247CF8 = t0;
    return FUN_0c0dbda0(((*(int *)(((t0 << 2) + 0xC247CAC))) + 0x2AC));
}

int FUN_0c02bf94(int a4)
{
    if ((*(int *)((a4 + 0x474))) == 0) {
        *(unsigned int *)((a4 + 0x474)) = 0xC02BDA4;
    }
    *(unsigned int *)((a4 + 0x4F4)) = 0x1;
    return 0x4F4;
}

int FUN_0c045aa4(void)
{
    *(unsigned int *)0xC246DE8 = 0x1;
    *(unsigned int *)0xC23EDBC = 0x1;
    *(unsigned int *)0xC246DEC = (*(int *)0xC246DE8);
    return 0xC246DEC;
}

int FUN_0c0ba57c(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x48));
    *(unsigned int *)((a4 + 0x48)) = (t0 - 1);
    if ((t0 - 1) == 0) {
        *(unsigned int *)((a4 + 0x0)) = 0xC0BA31A;
    }
    return 0x48;
}

int FUN_0c03b870(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x2EC));
    if ((t0 & 12) != 0) {
        return FUN_0c03a66c(a4, a5, a6, a7);
    }
    return t0;
}

int FUN_0c04c41c(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x2EC));
    if ((t0 & 12) != 0) {
        return FUN_0c049b80(a4);
    }
    return t0;
}

int FUN_0c0500dc(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x2EC));
    if ((t0 & 12) != 0) {
        return FUN_0c049b80(a4);
    }
    return t0;
}

int FUN_0c0a5200(int a4, int a5)
{
    register int t0;

    t0 = *(short *)((a5 + 0x4));
    *(unsigned int *)(((0x80 + (*(int *)0xC2497AC)) + 0x0)) = (unsigned short)t0;
    return (unsigned short)t0;
}

int FUN_0c0b5020(int a4)
{
    *(unsigned int *)((a4 + 0x50)) = 0xF;
    *(unsigned int *)((a4 + 0x40)) = ((*(int *)((a4 + 0x40))) + 0x1);
    return 0x40;
}

int FUN_0c03f00c(int a4)
{
    *(unsigned int *)((a4 + 0x4DC)) = 0x6;
    *(unsigned int *)((a4 + 0x47C)) = 0x0;
    return 0x47C;
}

int FUN_0c03f194(int a4)
{
    *(unsigned int *)((a4 + 0x4DC)) = 0x1F;
    *(unsigned int *)((a4 + 0x47C)) = 0x0;
    return 0x47C;
}

int FUN_0c03f2f0(int a4)
{
    *(unsigned int *)((a4 + 0x4DC)) = 0x31;
    *(unsigned int *)((a4 + 0x47C)) = 0x0;
    return 0x47C;
}

int FUN_0c0a94d4(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10D214));
    return ((int (*)(void))(t1))();
}

int FUN_0c0aa464(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A18C) << 2) + 0xC10D2A8));
    return ((int (*)(void))(t1))();
}

int FUN_0c0ab2d0(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10DFCC));
    return ((int (*)(void))(t1))();
}

int FUN_0c0acb40(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10EDFC));
    return ((int (*)(void))(t1))();
}

int FUN_0c0ab804(void)
{
    return FUN_0c0a87b4(0xC0AB812, 0xC0AB878, 0xC0A8C94, 0x258);
}

int FUN_0c0ad080(void)
{
    return FUN_0c0a87b4(0xC0AD08E, 0xC0A8C94, 0xC0AD10C, 0x52D);
}

int FUN_0c0ae138(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10EE5C));
    return ((int (*)(void))(t1))();
}

int FUN_0c0af970(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC10FDE0));
    return ((int (*)(void))(t1))();
}

int FUN_0c0afd98(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC110510));
    return ((int (*)(void))(t1))();
}

int FUN_0c0b0b3c(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC202CB8));
    return ((int (*)(void))(t1))();
}

int FUN_0c0b24a8(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC11159C));
    return ((int (*)(void))(t1))();
}

int FUN_0c0b37e0(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC203F78));
    return ((int (*)(void))(t1))();
}

int FUN_0c0b6610(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC111DF4));
    return ((int (*)(void))(t1))();
}

int FUN_0c0b8938(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC23A190) << 2) + 0xC1124C0));
    return ((int (*)(void))(t1))();
}

int FUN_0c083d2c(int a4, int a5)
{
    return FUN_0c084bf6(a5, 0x0);
}

int FUN_0c0ae194(void)
{
    return FUN_0c0e19aa(0xC0AE1A0, 0x68, (*(int *)0xC23ECE0));
}

int FUN_0c0e6690(int a4, int a5)
{
    *(unsigned int *)((a5 + 0x0)) = (*(int *)(((a4 << 2) + 0xC94D6B8)));
    return 0x1;
}

int FUN_0c228ef8(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x5);
}

int FUN_0c228f34(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x8);
}

int FUN_0c228f48(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x9);
}

int FUN_0c02a190(int a4)
{
    *(unsigned int *)((a4 + 0x4F8)) = ((*(int *)((a4 + 0x4F8))) + 0x1);
    return 0x4F8;
}

int FUN_0c0af168(void)
{
    return FUN_0c0a8d80(0xC10FBE0);
}
