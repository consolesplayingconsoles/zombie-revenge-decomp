/* Straight-line functions with calls and guards (batch gen_il): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c01ce40(int, int, float);
int FUN_0c01f8a0(int, int, int);
int FUN_0c0465fa(int);
int FUN_0c04685c(int, int, float, float);
int FUN_0c053cf0(int, int);
int FUN_0c053d60(int, int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c07e2b0(int);
int FUN_0c07e5c8(int);
int FUN_0c082f04(int, int, float);
int FUN_0c082fae(int, int, int, int, float);
int FUN_0c083074(int, int, int, int, int);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c090bf0(int);
int FUN_0c09d6c8(int);
int FUN_0c0a6688(int, int, int);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a6bf8(int, int, int, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a7984(int, int, float, float, float);
int FUN_0c0a7c66(int, int, int);
int FUN_0c0bea20(int, int);
int FUN_0c0c465c(int);
int FUN_0c0c473c(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d9dc0(float, float);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcc80(int);
int FUN_0c0dcca0(int);
int FUN_0c0dccf0(void);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e6248(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlInvertMatrix(int);
float nlLength(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateAxe(int, int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c05d624(int a4, int a5, int a6, int a7);
int FUN_0c080ed8(int a4);
int FUN_0c087ca8(int a4);
int FUN_0c02d544(int a4);
int FUN_0c05cb48(int a4, int a5, int a6, int a7);
int FUN_0c06af2e(void);
int FUN_0c05970c(int a4);
int FUN_0c06e87a(int a4, int a5, int a6, int a7);
int FUN_0c06ba4c(void);
float FUN_0c041a74(int a4, float f4);
void FUN_0c0cd85c(int a4);
int FUN_0c07fc50(int a4);
int FUN_0c04caf8(int a4);
int FUN_0c063bbc(int a4, int a5);
int FUN_0c0824c0(int a4, int a5, int a6);
int FUN_0c0833ec(int a4);
int FUN_0c0175bc(int a4, int a5, int a6, int a7);
void FUN_0c0a339c(int a4, int a5, int a6, int a7);

int FUN_0c05d624(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        if ((int)(*(int *)((a4 + 0xBC))) < (int)0x2) {
            t0 = *(int *)((a4 + 0xBC));
            *(unsigned int *)(((((t0 << 2) << 2) << 1) + 0xC247548)) = ((*(int *)(((((t0 << 2) << 2) << 1) + 0xC247548))) + 0x1);
        }
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c054c8a(a4);
            FUN_0c090bf0(a4);
        }
        t0 = ((int (*)(void))(FUN_0c0e19f2))();
    } else {
        t0 = *(int *)((a4 + 0x22C));
        *(unsigned int *)((a4 + 0x22C)) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            t0 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
        }
    }
    t0 = *(int *)((a4 + 0x23C));
    *(unsigned int *)((a4 + 0x23C)) = (t0 + 0x1);
    if (((t0 + 0x1) - 1) != 0) {
        if (((t0 + 0x1) - 1) != 1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
        } else {
            *(float *)((a4 + 0x1E4)) = ((*(float *)((a4 + 0x1E4))) * 5.0f);
        }
    } else {
        *(unsigned int *)((a4 + 0x23C)) = 0x1;
    }
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
    FUN_0c01cdc2(a4);
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    u0 = *(float *)0xC05D7A8;
    nlScale(u0, u0, 1.0f);
    FUN_0c0de000(u0);
    FUN_0c0c465c((*(int *)((a4 + 0x220))));
    return nlPopMatrix(0x1);
}

int FUN_0c080ed8(int a4)
{
    int stk[16];
    register float u0;
    register int t38;
    register float u28;

    u0 = *(float *)((a4 + 0x29C));
    nlSubVector3op((((int)stk + 4) + 0x20), (0x260 + a4), (0x284 + a4));
    nlScaleUnitVector((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20), ((u0 + 30.0f) * (1.0f + 1.0f)));
    *(float *)(((int)stk + 40)) = 0.0f;
    nlSubVector3op((a4 + 0x6C), (0x284 + a4), (((int)stk + 4) + 0x20));
    nlAddVector3op((a4 + 0x60), (0x284 + a4), (((int)stk + 4) + 0x20));
    FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
    t38 = 0xD8;
    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x284 + a4), (*(float *)(((*(int *)0xC247CA4) + 0x18))));
        FUN_0c07e2b0(a4);
        FUN_0c0dc5a0();
        nlSubVector3op((((int)stk + 4) + 0x8), (0x260 + a4), (0x284 + a4));
        FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))));
        nlRotateAX((-(*(int *)(((int)stk + 4)))));
        nlRotateAY((-(*(int *)(((int)stk + 8)))));
        FUN_0c0dcc80((0x260 + a4));
        FUN_0c0db470((0xBC + a4), (((int)stk + 4) + 0x14));
        nlInvertMatrix(0x0);
        FUN_0c0db4d0(0xC1027C8, (((int)stk + 4) + 0x8));
        u28 = (*(float *)(((int)stk + 28)));
        u28 = u28 + (*(float *)(((int)stk + 32))) * (*(float *)0xC247D10);
        if (!(0.0f > u28)) {
            FUN_0c0dce80((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x8), u28);
            nlAddVector((0x284 + a4), (((int)stk + 4) + 0x8));
            nlAddVector((0x260 + a4), (((int)stk + 4) + 0x8));
        }
        t38 = (nlPopMatrix(0x1));
    }
    return t38;
}


int FUN_0c02d544(int a4)
{
    int stk[25];
    register float t21;
    register float t28;
    register float u32;

    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAZ((*(short *)((a4 + 0x70))));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 10.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 28)));
    *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(float *)(((int)stk + 32)));
    nlPopMatrix(0x1);
    FUN_0c0a7984(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 16))));
    if (!(0.0f > (*(float *)(((int)stk + 12))))) {
        nlPushMatrix(0x0);
        nlUnitMatrix();
        t21 = FUN_0c0da410((*(int *)(((int)stk + 8))));
        nlRotateAZ((int)(-(t21 * 128.0f)));
        u32 = (-((FUN_0c0da410((*(int *)(((int)stk + 4))))) * 128.0f));
    } else {
        nlPushMatrix(0x0);
        nlUnitMatrix();
        t28 = FUN_0c0da410((*(int *)(((int)stk + 8))));
        nlRotateAZ((int)(t28 * 128.0f));
        u32 = ((FUN_0c0da410((*(int *)(((int)stk + 4))))) * 128.0f);
    }
    nlRotateAX((int)u32);
    FUN_0c0a7c66((((int)stk + 4) + 0x2C), ((((int)stk + 4) + 0x2C) + 0x4), ((((int)stk + 4) + 0x2C) + 0x8));
    nlPopMatrix(0x1);
    *(unsigned short *)((a4 + 0x6C)) = ((*(short *)((a4 + 0x6C))) + (*(int *)(((((int)stk + 4) + 0x2C) + 0x0))));
    *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + (*(int *)(((((int)stk + 4) + 0x2C) + 0x4))));
    *(unsigned short *)((a4 + 0x70)) = ((*(short *)((a4 + 0x70))) + (*(int *)(((((int)stk + 4) + 0x2C) + 0x8))));
    return 0x70;
}

int FUN_0c05cb48(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c054c8a(a4);
            FUN_0c090bf0(a4);
        }
        if ((int)(*(int *)((a4 + 0xBC))) < (int)0x2) {
            t0 = *(int *)((a4 + 0xBC));
            *(unsigned int *)(((((t0 << 2) << 2) << 1) + 0xC247548)) = ((*(int *)(((((t0 << 2) << 2) << 1) + 0xC247548))) + 0x1);
        }
        t0 = ((int (*)(void))(FUN_0c0e19f2))();
    } else {
        t0 = *(int *)((a4 + 0x22C));
        *(unsigned int *)((a4 + 0x22C)) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            t0 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
        }
    }
    if ((*(int *)((a4 + 0x23C))) == 0) {
        *(unsigned int *)((a4 + 0x23C)) = 0x1;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
        *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
        *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
    }
    FUN_0c01cdc2(a4);
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    nlScale(1.0f, 1.0f, (*(float *)((a4 + 0x238))));
    FUN_0c0de000((*(float *)((a4 + 0x238))));
    FUN_0c0c465c((*(int *)((a4 + 0x220))));
    return nlPopMatrix(0x1);
}

int FUN_0c06af2e(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t0 = *(int *)0xC23ED50;
    t1 = 0xC0FA8D8;
    if ((t0 != 67) && ((t0 != 66) && (t0 != 68))) {
        t1 = 0xC0FA890;
    }
    t0 = 0xC23ED50;
    t2 = t1;
    for (;;) {
        t1 = *(short *)((t2 + 0x2));
        if (t1 == 0) {
            break;
        }
        t3 = (*(short *)((t2 + 0x0)));
        if (t3 == 0) {
            t4 = 0x0;
            for (;;) {
                if ((int)t4 >= (int)(unsigned short)(*(short *)((t2 + 0x2)))) {
                    break;
                }
                t0 = 0xC0E19AA;
                t7 = FUN_0c0e19aa(0xC06B1B2, 0x70, (*(int *)0xC23ECE4));
                t5 = t7;
                FUN_0c0e19d0(t7);
                t3 = t4;
                t3 = (t3 << 1);
                t0 = t4;
                t6 = (*(int *)((t2 + 0x4)));
                t3 = (t3 + t0);
                t0 = 0xC0E61D4;
                t3 = (t3 << 2);
                t3 = (t3 + t6);
                t6 = t5;
                t6 = (t6 + 0x34);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t6) = *(struct mv3 *)(t3); }
                t6 = (*(int *)((t2 + 0x8)));
                t4 = (t4 + 0x1);
                *(unsigned int *)((t5 + 0x6C)) = t6;
            }
        } else {
            t4 = 0x0;
            for (;;) {
                if ((int)t4 >= (int)(unsigned short)(*(short *)((t2 + 0x2)))) {
                    break;
                }
                t7 = t4;
                t7 = (t7 << 8);
                t7 = (t7 << 2);
                t7 = (t7 << 2);
                t3 = 0xC0E19AA;
                t8 = FUN_0c0e19aa(0xC06B114, 0x70, (*(int *)0xC23ECE4));
                t5 = t8;
                FUN_0c0e19d0(t8);
                t3 = 0x4000;
                t0 = t5;
                t0 = (t0 + 0x4C);
                t3 = (t3 + t7);
                *(unsigned int *)((t0 + 0x0)) = t3;
                t0 = 0x2000;
                t0 = (t0 + t7);
                *(unsigned int *)((t5 + 0x50)) = t0;
                t0 = 0xC0DA2E0;
                *(unsigned int *)((t5 + 0x54)) = t7;
                t6 = 0x58;
                t3 = t4;
                t6 = (t6 + t5);
                t0 = t4;
                t3 = (t3 << 1);
                *(unsigned int *)((t6 + 0x0)) = ((FUN_0c0da2e0()) << 1);
                t6 = (*(int *)((t2 + 0x4)));
                t3 = (t3 + t0);
                t3 = (t3 << 2);
                t0 = 0xC0E61D4;
                t3 = (t3 + t6);
                t6 = t5;
                t6 = (t6 + 0x34);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t6) = *(struct mv3 *)(t3); }
                t6 = (*(int *)((t2 + 0x8)));
                t4 = (t4 + 0x1);
                *(unsigned int *)((t5 + 0x6C)) = t6;
            }
        }
        t2 = (t2 + 0xC);
    }
    return t1;
}

int FUN_0c05970c(int a4)
{
    register float u55;

    if ((*(int *)((a4 + 0x21C))) != 0) {
        return 0x21C;
    }
    if ((*(int *)((a4 + 0x1FC))) != (*(int *)((a4 + 0x1F8)))) {
        *(float *)((a4 + 0x64)) = 1.0f;
        *(unsigned short *)((a4 + 0x6C)) = (int)((FUN_0c0d9e90((*(int *)((a4 + 0x1DC))))) * 1024.0f);
        *(unsigned short *)((a4 + 0x70)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x1DC))))) * 1024.0f);
    }
    if ((*(float *)((a4 + 0x64))) > 0.0f) {
        *(float *)((a4 + 0x64)) = ((*(float *)((a4 + 0x64))) - 0.049999997f);
        if (0.099999994f > (*(float *)((a4 + 0x64)))) {
            *(unsigned short *)((a4 + 0x6C)) = 0x0;
            *(unsigned short *)((a4 + 0x70)) = 0x0;
        } else {
            *(unsigned int *)((a4 + 0x250)) = (int)((float)(*(int *)((a4 + 0x250))) - ((float)(*(short *)((a4 + 0x6C))) * 0.099999994f));
            *(unsigned int *)((a4 + 0x258)) = (int)((float)(*(int *)((a4 + 0x258))) - ((float)(*(short *)((a4 + 0x70))) * 0.199999988f));
            *(unsigned short *)((a4 + 0x6C)) = ((*(short *)((a4 + 0x6C))) + (*(int *)(((0x250 + a4) + 0x0))));
            *(unsigned short *)((a4 + 0x70)) = ((*(short *)((a4 + 0x70))) + (*(int *)(((0x258 + a4) + 0x0))));
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    FUN_0c0dcca0((a4 + 0x60));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAZ((*(short *)((a4 + 0x70))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    u55 = *(float *)((a4 + 0x25C));
    nlScale(u55, u55, u55);
    FUN_0c0de000((*(float *)((a4 + 0x25C))));
    FUN_0c0c465c((*(int *)((a4 + 0x248))));
    return nlPopMatrix(0x1);
}


int FUN_0c06ba4c(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    t1 = 0xC200340;
    for (;;) {
        t2 = FUN_0c0e19aa(0xC06BDE0, 0x24C, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t2);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x60)) = *(struct mv3 *)(t1); }
        *(unsigned int *)(((0x21C + t2) + 0x0)) = (unsigned short)(*(short *)((t1 + 0x12)));
        FUN_0c0e6248();
        if ((unsigned short)(*(short *)((t1 + 0x12))) == 0xF55) {
            *(unsigned int *)((t2 + 0x228)) = 0xC0FB144;
        } else {
            *(unsigned int *)((t2 + 0x228)) = 0xC0FB138;
        }
        *(unsigned int *)((t2 + 0xBC)) = (t0 + 0xC);
        FUN_0c01ce40(t2, 0xC1CED54, 22.0f);
        t0 = (t0 + 0x1);
        *(unsigned int *)(((((*(int *)((t2 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x4;
        *(unsigned int *)(((((*(int *)((t2 + 0xBC))) << 2) + 0xC246FF0) + 0x0)) = t2;
        *(unsigned int *)(((((*(int *)((t2 + 0xBC))) << 2) + 0xC246FF0) + 0x0)) = t2;
        t1 = (t1 + 0x14);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    t0 = 0x0;
    t1 = 0xC1FFE54;
    for (;;) {
        t2 = FUN_0c0e19aa(0xC06BBC0, 0x58, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t2);
        *(unsigned int *)((t2 + 0x48)) = t0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)(t1); }
        *(unsigned int *)(((0x44 + t2) + 0x0)) = (unsigned short)(*(short *)((t1 + 0x12)));
        FUN_0c0e6248();
        t0 = (t0 + 0x1);
        if ((unsigned short)(*(short *)((t1 + 0x12))) == 0xF55) {
            *(unsigned int *)((t2 + 0x54)) = 0xC0FB144;
        } else {
            *(unsigned int *)((t2 + 0x54)) = 0xC0FB138;
        }
        t1 = (t1 + 0x14);
        if ((unsigned int)t0 >= (unsigned int)0x3F) {
            break;
        }
    }
    return 0x54;
}

float FUN_0c041a74(int a4, float f4)
{
    int stk[18];
    register float u17;
    register float u18;
    register float u19;
    register float u20;
    register float u21;
    register float u26;
    register float u29;

    *(float *)(((int)stk + 16)) = f4;
    *(float *)(((((int)stk + 4) + 0x28) + 0x8)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0x28) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0x28) + 0x0)) = 0.0f;
    FUN_0c0a7714((((int)stk + 4) + 0x8), ((int)stk + 4), ((*(float *)((a4 + 0x518))) - (*(float *)((a4 + 0x30)))), ((*(float *)((a4 + 0x51C))) - (*(float *)((a4 + 0x34)))), ((*(float *)((a4 + 0x520))) - (*(float *)((a4 + 0x38)))));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 4))));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 16)));
    FUN_0c0db470((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10));
    *(float *)(((0x4B0 + a4) + 0x0)) = (*(float *)(((int)stk + 20)));
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((0x4B8 + a4) + 0x0)) = (*(float *)(((int)stk + 28)));
    nlPopMatrix(0x1);
    u17 = *(float *)((a4 + 0x30));
    u18 = *(float *)((a4 + 0x518));
    u19 = *(float *)((a4 + 0x38));
    u20 = *(float *)((a4 + 0x520));
    u21 = ((u20 - u19) * (u20 - u19));
    u21 = u21 + (u18 - u17) * (u18 - u17);
    FUN_0c0465fa(a4);
    FUN_0c04685c(a4, 0xA, (*(float *)0xC041BE4), (*(float *)0xC041BE0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
    u26 = *(float *)0xC041BF0;
    if ((((*(float *)((a4 + 0x390))) + u26) > (*(float *)((a4 + 0x34)))) && (u29 = *(float *)((a4 + 0x4C)), !(u29 > 0.0f))) {
        *(float *)((a4 + 0x4C)) = (((*(float *)((a4 + 0x390))) - (*(float *)((a4 + 0x34)))) + u26);
        *(float *)((a4 + 0x64)) = 0.0f;
    }
    *(float *)((a4 + 0x4B0)) = 0.0f;
    *(float *)((a4 + 0x4B4)) = 0.0f;
    *(float *)((a4 + 0x4B8)) = 0.0f;
    return _builtin_sqrtf((u21 + 0.0f));
}

void FUN_0c0cd85c(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t0 + 0x1);
    if ((int)(t0 + 0x1) >= (int)0x17) {
        t0 = 0xA;
        for (;;) {
            t1 = FUN_0c0e19aa(0xC0CD9C0, 0x80, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t1);
            u0 = (*(float *)0xC1E9E9C);
            u0 = u0 + 0.000976592302f * (float)((FUN_0c0da2e0()) - 16384);
            *(float *)((t1 + 0x44)) = u0;
            *(float *)((t1 + 0x48)) = (*(float *)0xC1E9EA0);
            u0 = (*(float *)0xC1E9EA4);
            u0 = u0 + 0.000976592302f * (float)((FUN_0c0da2e0()) - 16384);
            *(float *)((t1 + 0x4C)) = u0;
            *(unsigned int *)((t1 + 0x34)) = 0xC1E9EA8;
            u0 = (*(float *)0xC1E9EA8);
            u0 = u0 + 0.000488296151f * (float)((FUN_0c0da2e0()) - 16384);
            *(float *)((t1 + 0x38)) = u0;
            *(float *)((t1 + 0x3C)) = (*(float *)0xC1E9EAC);
            u0 = (*(float *)0xC1E9EB0);
            u0 = u0 + 0.000488296151f * (float)((FUN_0c0da2e0()) - 16384);
            *(float *)((t1 + 0x40)) = u0;
            u0 = 0.599999964f;
            u0 = u0 + 3.12204284e-05f * (float)(FUN_0c0da2e0());
            *(float *)((t1 + 0x68)) = u0;
            u1 = 0.5f;
            u1 = u1 + 0.5f * (u0 + -0.349999994f);
            *(float *)((t1 + 0x64)) = u1;
            *(unsigned short *)(((0x5E + t1) + 0x0)) = (FUN_0c0d9dc0(((*(float *)((t1 + 0x38))) - (*(float *)((t1 + 0x44)))), ((*(float *)((t1 + 0x40))) - (*(float *)((t1 + 0x4C))))));
            *(unsigned int *)((t1 + 0x78)) = 0x5;
            t0 = (t0 - 0x1);
            *(unsigned int *)((t1 + 0x74)) = 0x1;
            if (t0 == 0) {
                break;
            }
        }
        *(unsigned int *)((a4 + 0x30)) = 0x0;
    }
}

int FUN_0c07fc50(int a4)
{
    int stk[12];
    register int t0;
    register float t4;
    register float u5;
    register float t11;
    register float u14;
    register float t29;
    register float u30;
    register int t33;

    t0 = *(int *)0xC247D70;
    FUN_0c07e5c8(a4);
    nlGetAverageVector((0x3A4 + a4), (t0 + 0x10), (0x284 + a4), 0.5f, 0.5f);
    nlSubVector3op(((int)stk + 4), (0x284 + a4), (t0 + 0x10));
    t4 = FUN_0c0dcea0(((int)stk + 4));
    u5 = *(float *)((t0 + 0x1C));
    if (t4 > u5) {
        nlScaleUnitVector(((int)stk + 4), ((int)stk + 4), u5);
        nlAddVector3op((0x284 + a4), (t0 + 0x10), ((int)stk + 4));
    }
    t11 = nlLength(t0, (0x284 + a4));
    u14 = t11;
    if ((*(float *)((a4 + 0x3B0))) > t11) {
        u14 = (*(float *)((a4 + 0x3B0)));
    }
    *(float *)((a4 + 0x29C)) = u14;
    nlSubVector3op((((int)stk + 4) + 0xC), t0, (0x3A4 + a4));
    FUN_0c0a7714((0x3DC + a4), (0x3E0 + a4), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))));
    *(unsigned int *)((a4 + 0x3D4)) = (int)((float)(*(int *)((a4 + 0x3D4))) + ((float)((*(int *)(((0x3DC + a4) + 0x0))) - (*(int *)(((0x3D4 + a4) + 0x0)))) * 0.0399999991f));
    *(unsigned int *)((a4 + 0x3D8)) = (int)((float)(*(int *)((a4 + 0x3D8))) + ((float)((*(int *)(((0x3E0 + a4) + 0x0))) - (*(int *)(((0x3D8 + a4) + 0x0)))) * 0.0399999991f));
    FUN_0c07e2b0(a4);
    nlSubVector3op(((int)stk + 4), (0x260 + a4), t0);
    t29 = FUN_0c0dcea0(((int)stk + 4));
    u30 = *(float *)((t0 + 0xC));
    t33 = 0xC;
    if (t29 > u30) {
        nlScaleUnitVector(((int)stk + 4), ((int)stk + 4), u30);
        t33 = (nlAddVector3op((0x260 + a4), t0, ((int)stk + 4)));
    }
    return t33;
}

int FUN_0c04caf8(int a4)
{
    int stk[12];
    register int t1;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register float u14;
    register int t21;
    register int t37;

    t1 = *(int *)((((*(int *)((a4 + 0xCC))) << 2) + 0xC246FF0));
    FUN_0c053cf0(t1, 0x1);
    FUN_0c053d60(a4, 0x1);
    FUN_0c0a68ec(((int)stk + 4), ((*(float *)((a4 + 0x30))) - (*(float *)((t1 + 0x30)))), ((*(float *)((a4 + 0x38))) - (*(float *)((t1 + 0x38)))));
    u9 = *(float *)((a4 + 0x30));
    u10 = *(float *)((t1 + 0x30));
    u11 = *(float *)((a4 + 0x38));
    u12 = *(float *)((t1 + 0x38));
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0xC);
    u14 = ((u11 - u12) * (u11 - u12));
    u14 = u14 + (u9 - u10) * (u9 - u10);
    FUN_0c0a6800((*(int *)(((int)stk + 4))), (((int)stk + 4) + 0xC), 0.0f, 0.0f, ((_builtin_sqrtf(u14) + -19.5f) * 0.5f));
    *(float *)((t1 + 0x48)) = ((*(float *)((t1 + 0x48))) + (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x14);
    *(float *)((t1 + 0x50)) = ((*(float *)((t1 + 0x50))) + (*(float *)(((((int)stk + 4) + 0x14) + 0x0))));
    t21 = *(int *)((a4 + 0x2EC));
    t37 = t21;
    if ((t21 & 12) != 0) {
        FUN_0c053cf0(t1, 0x0);
        FUN_0c053d60(a4, 0x0);
        *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)((((*(int *)((a4 + 0xC0))) << 1) + 0xC0F8426)));
        *(unsigned int *)((a4 + 0x210)) = 0x3D;
        *(unsigned int *)((a4 + 0x39C)) = ((*(int *)((a4 + 0x39C))) | 0x400);
        *(unsigned int *)((a4 + 0x2D4)) = 0x0;
        *(unsigned int *)((t1 + 0x2D4)) = 0x0;
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((t1 + 0x2CC)) = 0x1;
        *(unsigned int *)((t1 + 0x2C4)) = (unsigned short)(*(short *)((((*(int *)(((0xC0 + t1) + 0x0))) << 1) + (*(int *)((0xC1FE3B0 + ((*(int *)((a4 + 0xC0))) << 2)))))));
        *(float *)((t1 + 0x48)) = ((*(float *)((t1 + 0x48))) + (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))));
        *(float *)((t1 + 0x50)) = ((*(float *)((t1 + 0x50))) + (*(float *)(((*(int *)(((int)stk + 12))) + 0x0))));
        *(unsigned int *)((a4 + 0x3AC)) = 0x3C;
        t37 = 0x3AC;
    }
    return t37;
}

int FUN_0c063bbc(int a4, int a5)
{
    int stk[11];
    register int t1;
    register int t10;
    register int t14;

    t1 = FUN_0c0e19aa(0xC063A90, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    if ((int)(*(short *)((a4 + 0xE8))) < (int)0x4) {
        t10 = 0x0;
        if ((*(signed char *)((a5 + 0x4))) != 0) {
            t10 = (*(int *)((a4 + 0x1EC)));
        }
        t14 = t10;
    } else {
        t14 = ((int)0x1 << (int)(*(int *)((a4 + 0xBC))));
    }
    *(unsigned int *)((t1 + 0x1EC)) = t14;
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x8)));
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((*(int *)((a4 + 0x3E4))) + 0x1C0));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = -10.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((t1 + 0x30) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)(((t1 + 0x34) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)(((t1 + 0x38) + 0x0)) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    FUN_0c0e6248();
    *(unsigned int *)((t1 + 0x220)) = (*(int *)((a4 + 0x2BC)));
    FUN_0c0cc3f8(0x132A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    return (FUN_0c09d6c8(a4));
}


int FUN_0c0833ec(int a4)
{
    int stk[16];
    register int t1;
    register int t2;
    register int t3;
    register int t40;

    t1 = *(int *)((((unsigned char)(*(signed char *)0xC247CB8) << 2) + 0xC246FF0));
    t2 = *(short *)0xC247CBC;
    t3 = *(short *)0xC247CBE;
    FUN_0c0dc5a0();
    FUN_0c0dcca0((0x22C + t1));
    nlRotateAY((*(short *)0xC247CCA));
    nlRotateAX((*(short *)0xC247CC8));
    *(float *)0xC2009A8 = (*(float *)0xC247CC0);
    FUN_0c0db470(0xC2009A0, (((int)stk + 16) + 0xC));
    FUN_0c0dccf0();
    nlRotateAY((*(short *)0xC247CCE));
    nlRotateAX((*(short *)0xC247CCC));
    *(float *)0xC2009A8 = (*(float *)0xC247CC4);
    FUN_0c0db470(0xC2009A0, ((int)stk + 16));
    nlPopMatrix(0x1);
    FUN_0c082f04(a4, 0x3, (*(float *)((t1 + 0x22C))));
    FUN_0c082f04(a4, 0x4, (*(float *)((t1 + 0x230))));
    FUN_0c082f04(a4, 0x5, (*(float *)((t1 + 0x234))));
    *(int *)((int)stk + 12) = 0x0;
    FUN_0c083074(a4, 0x3, (0x22C + t1), 0x3, 0x0);
    *(int *)((int)stk + 8) = 0x0;
    FUN_0c083074(a4, 0x4, (0x230 + t1), 0x3, 0x0);
    *(int *)((int)stk + 4) = 0x0;
    FUN_0c083074(a4, 0x5, (0x234 + t1), 0x3, 0x0);
    FUN_0c082f04(a4, 0x0, (*(float *)(((int)stk + 28))));
    FUN_0c082f04(a4, 0x1, (*(float *)(((int)stk + 32))));
    FUN_0c082f04(a4, 0x2, (*(float *)(((int)stk + 36))));
    FUN_0c082fae(a4, 0x0, t2, t3, (*(float *)(((int)stk + 16))));
    FUN_0c082fae(a4, 0x1, t2, t3, (*(float *)(((int)stk + 20))));
    t40 = FUN_0c082fae(a4, 0x2, t2, t3, (*(float *)(((int)stk + 24))));
    *(unsigned short *)0xC10291C = t3;
    return t40;
}

int FUN_0c0175bc(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t1;
    register float u19;
    register int t56;
    register int t62;
    register int t64;
    register int t27;
    register int t28;
    register int t52;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        t1 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
    *(unsigned int *)(((a4 + 0x68) + 0x0)) = ((*(int *)(((a4 + 0x68) + 0x0))) + (*(int *)(((a4 + 0x68) + 0x4))));
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) - 0.0599999987f);
    if (!((*(float *)((a4 + 0x34))) > (*(float *)((a4 + 0x90))))) {
        *(float *)((a4 + 0x34)) = (*(float *)((a4 + 0x90)));
        u19 = (*(float *)((a4 + 0x4C)));
        u19 *= -0.599999964f;
        *(float *)((a4 + 0x4C)) = u19;
    }
    if (((*(int *)((a4 + 0x80))) != 0) && (t27 = *(int *)((a4 + 0x84)), t28 = *(int *)((a4 + 0xA0)), ((t28 + t27) & 1) == 0)) {
        t52 = (a4 + 0x68);
    } else {
        nlPushMatrix(0x0);
        FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
        nlRotateAZ((*(short *)((a4 + 0x64))));
        nlRotateAY((*(short *)((a4 + 0x62))));
        nlRotateAX((*(short *)((a4 + 0x60))));
        *(float *)(((int)stk + 4)) = (*(float *)((a4 + 0x54)));
        *(float *)(((int)stk + 8)) = (*(float *)((a4 + 0x58)));
        *(float *)(((int)stk + 12)) = (*(float *)((a4 + 0x5C)));
        nlRotateAxe(((int)stk + 4), (*(int *)(((a4 + 0x68) + 0x0))));
        FUN_0c0c465c((*(int *)((a4 + 0x78))));
        nlPopMatrix(0x1);
    }
    t56 = *(int *)((a4 + 0xA0));
    *(unsigned int *)((a4 + 0xA0)) = (t56 - 1);
    if ((int)(t56 - 1) <= 0) {
        *(unsigned int *)((a4 + 0xA0)) = (*(int *)((a4 + 0xA4)));
        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
    }
    t62 = *(int *)((a4 + 0x80));
    t64 = t62;
    if (t62 == 2) {
        t64 = (((int (*)(int))(FUN_0c0e19f2))(t52));
    }
    return t64;
}

void FUN_0c0a339c(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t12;
    register int t22;
    register int t24;
    register int t46;

    if (((*(int *)0xC23A1A8) & 0x10000001) == 0x10000001) {
        return;
    }
    if ((*(short *)((((((*(int *)((a4 + 0x88))) << 2) << 2) + 0xC2460F4) + 0x4))) != 0) {
        if ((unsigned short)(*(short *)((((((*(int *)((a4 + 0x88))) << 2) << 2) + 0xC2460F4) + 0x4))) != 1) {
            t12 = *(int *)((((((*(int *)((a4 + 0x88))) << 2) << 2) + 0xC2460F4) + 0x0));
            if (((*(int *)((t12 + 0x290))) & 0x40000000) != 0) {
                FUN_0c0e19f2(0xC246074, a5, a6, a7);
            }
            if ((*(int *)((0xC247030 + ((*(int *)((t12 + 0xBC))) << 2)))) != 8) {
                t22 = *(int *)((a4 + 0xA0));
                *(unsigned int *)((a4 + 0xA0)) = (t22 + 0x1);
                t24 = *(short *)((((t22 + 0x1) << 1) + (*(int *)((a4 + 0x8C)))));
                *(unsigned int *)((a4 + 0x78)) = t24;
                if ((int)t24 < 0) {
                    *(unsigned int *)((a4 + 0xA0)) = 0x0;
                    *(unsigned int *)((a4 + 0x78)) = (*(short *)((((*(int *)((a4 + 0xA0))) << 1) + (*(int *)((a4 + 0x8C))))));
                }
                nlPushMatrix(0x0);
                nlMultiMatrix((((((*(int *)((a4 + 0x7C))) << 2) << 2) << 2) + (*(int *)((t12 + 0x3E4)))));
                FUN_0c0dcca0((a4 + 0x30));
                FUN_0c0848d6((*(float *)(((0x45C + t12) + 0x0))), (*(float *)(((0x45C + t12) + 0x4))), (*(float *)(((0x45C + t12) + 0x8))));
                FUN_0c0de000(_builtin_fabsf((*(float *)((t12 + 0x284)))));
                t46 = ((int (*)(int, float))((*(int *)((((unsigned short)(*(short *)((t12 + 0x454))) << 2) + 0xC195F48)))))((*(int *)((a4 + 0x78))), (*(float *)((t12 + 0x458))));
                FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
                nlPopMatrix(0x1);
    return;
            }
            return;
        }
        return;
    }
    FUN_0c0e19f2(0xC246074, a5, a6, a7);
}

int FUN_0c06e87a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c0685a4(a4, a5, a6, a7);
    t0 = *(int *)((a4 + 0x80));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                nlPushMatrix(0x0);
            } else {
                *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | (*(short *)((a4 + 0x64))));
                t0 = *(int *)((a4 + 0xA0));
                *(unsigned int *)((a4 + 0xA0)) = (t0 - 1);
                if ((int)(t0 - 1) <= 0) {
                    t0 = *(int *)((a4 + 0x8C));
                    *(unsigned int *)((a4 + 0x8C)) = (t0 + 0x4);
                    *(unsigned int *)((a4 + 0xA0)) = (*(short *)(((t0 + 0x4) + 0x0)));
                    if ((int)(*(int *)((a4 + 0xA0))) < 0) {
                        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                    } else {
                        *(unsigned int *)(((0x78 + a4) + 0x0)) = (*(short *)(((t0 + 0x4) + 0x2)));
                    }
                }
                nlPushMatrix(0x0);
            }
            FUN_0c0dcc70((*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x38))));
            FUN_0c0c473c((*(int *)((a4 + 0x78))));
            return nlPopMatrix(0x1);
        }
        t0 = 0x0;
        for (;;) {
            t1 = *(int *)(((0xC246FF0 + (t0 << 2)) + 0x0));
            if ((*(int *)(((t0 << 2) + 0xC247030))) == 4) {
                u0 = (*(float *)((a4 + 0x30)));
                u0 = (u0 + (0.0f));
                if (!(u0 > ((*(float *)((t1 + 0x30)))))) {
                    t0 = (t0 + 0x1);
                    if ((int)t0 >= (int)0x2) {
                        break;
                    }
                    continue;
                }
                break;
            }
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x2) {
                break;
            }
        }
        t1 = t0;
        if (t0 == 2) {
            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
            t1 = 0x80;
        }
        return t1;
    }
    *(unsigned int *)((a4 + 0x8C)) = 0xC0FBA9C;
    t0 = *(int *)((a4 + 0x8C));
    *(unsigned int *)((a4 + 0xA0)) = (*(short *)((t0 + 0x0)));
    *(unsigned int *)(((0x78 + a4) + 0x0)) = (*(short *)((t0 + 0x2)));
    *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)(((0xC246FF0 + (t0 << 2)) + 0x0));
        if ((*(int *)(((t0 << 2) + 0xC247030))) == 4) {
            u0 = (*(float *)((a4 + 0x30)));
            u0 = (u0 + (0.0f));
            if (!(u0 > ((*(float *)((t1 + 0x30)))))) {
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)0x2) {
                    break;
                }
                continue;
            }
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    t1 = t0;
    if (t0 == 2) {
        *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
        t1 = 0x80;
    }
    return t1;
}

int FUN_0c087ca8(int a4)
{
    int stk[18];
    register int t0;
    register int t27;
    int t1;
    register int t3;
    register float u8;
    register float u15;
    register int t23;
    register int t26;

    t0 = *(int *)((a4 + 0xC8));
    t27 = t0;
    if (t0 == 1) {
        *(unsigned int *)(((int)stk + 4)) = 0x4;
        for (;;) {
            t1 = FUN_0c0da2e0();
            t3 = FUN_0c0e19aa(0xC087F9C, 0x6C, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t3);
            FUN_0c0bea20((*(int *)((a4 + 0x404))), (((int)stk + 4) + 0x4));
            *(unsigned int *)((t3 + 0x34)) = a4;
            *(unsigned int *)((t3 + 0x3C)) = 0xC087EF2;
            *(unsigned int *)((t3 + 0x38)) = 0xC0C465C;
            u8 = -0.5f;
            u8 = u8 + 3.05185094e-05f * (float)(FUN_0c0da2e0());
            *(float *)((t3 + 0x44)) = u8;
            *(float *)((t3 + 0x48)) = ((-((float)(FUN_0c0da2e0()) * 3.05185063e-06f)) - ((*(float *)(((int)stk + 20))) * (*(float *)0xC087E20)));
            *(float *)((t3 + 0x58)) = 1.0f;
            *(unsigned int *)((t3 + 0x64)) = 0x258;
            u15 = (*(float *)0xC087E24);
            u15 = u15 + (*(float *)0xC087E28) * (float)(FUN_0c0da2e0());
            *(float *)((t3 + 0x54)) = u15;
            *(unsigned int *)((t3 + 0x60)) = (unsigned short)(*(short *)(((((0x3 & t1) << 2) + 0xC10A9C4) + 0x0)));
            *(unsigned int *)((t3 + 0x5C)) = (unsigned short)(*(short *)((((((0x3 & t1) << 2) + 0xC10A9C4) + 0x2) + 0x0)));
            *(unsigned short *)((t3 + 0x4C)) = 0xFFFFC001;
            *(unsigned short *)(((0x4E + t3) + 0x0)) = (((FUN_0c0da2e0()) & 0x1FFF) - 8192);
            FUN_0c0dc5a0();
            nlRotateAY((*(short *)((t3 + 0x4E))));
            FUN_0c0db470((t3 + 0x40), (t3 + 0x40));
            t23 = nlPopMatrix(0x1);
            *(unsigned int *)0xC248DC8 = ((*(int *)0xC248DC8) + 0x1);
            *(unsigned int *)0xC248DCC = ((*(int *)0xC248DCC) + 0x1);
            t26 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t26 - 1);
            if ((t26 - 1) == 0) {
                break;
            }
        }
        t27 = t23;
    }
    return t27;
}

