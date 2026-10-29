/* Straight-line functions with calls and guards (batch gen_gt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c01ce40(int, int, float);
int FUN_0c01d636(int, int, int);
int FUN_0c021fee(int, int, int);
int FUN_0c02d6a8(int);
int FUN_0c035f64(int, int, int);
int FUN_0c036806(int, int, int, int, int, int, int);
int FUN_0c0465fa(int);
int FUN_0c04c306(int);
int FUN_0c054c8a(int);
int FUN_0c05824e(int, int);
int FUN_0c05a98a(int, int, int);
int FUN_0c062934(int, float, float);
int FUN_0c062a74(int);
int FUN_0c07787c(int);
int FUN_0c082f04(int, int, float);
int FUN_0c082f78(int, int, int);
int FUN_0c082fae(int, int, int, int, float);
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c08e970(int, int, float);
int FUN_0c0909fc(int);
int FUN_0c09d320(void);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a7c66(int, int, int);
int FUN_0c0b359e(int, int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0c6ac6(int);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d9dc0(int, int, float, float);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0db800(int, int, int, int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e262a(int);
int FUN_0c0e5f1c(void);
int FUN_0c0e6248(void);
int FUN_0c229058(int, int, int);
int FUN_0c232638(int, int, int);
int fmMngNum2Bit(int, int, int);
int fmcalccrc(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int thunk_FUN_0c22907e(int, int, int);
void FUN_0c05faf6(int a4, int a5);
int FUN_0c063df0(int a4, int a5, int a6);
int FUN_0c02d22a(int a4, int a5, int a6, float f4, float f5);
int FUN_0c064640(int a4, int a5);
float FUN_0c0e0454(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c046294(int a4, int a5, int a6);
int FUN_0c0493d8(int a4);
int FUN_0c0b455c(void);
int FUN_0c063a90(int a4);
int FUN_0c07a0f0(int a4);
int FUN_0c0835fa(int a4);
int FUN_0c08d75c(int a4, int a5, int a6);
int FUN_0c0ccd5a(int a4, int a5, int a6);
void FUN_0c063994(int a4, int a5);
void FUN_0c08a8e0(int a4, int a5);
void FUN_0c08a7f0(int a4, int a5);
int fmMngAddData(int a4);
int FUN_0c034924(int a4, int a5);
int FUN_0c0c6df6(int a4);
int FUN_0c0220dc(int a4, int a5, int a6, int a7);
int FUN_0c093a08(int a4, int a5, int a6);
int FUN_0c0c6b48(int a4, int a5);
int FUN_0c05c4ca(int a4, int a5, int a6);
int FUN_0c077780(int a4);
int FUN_0c04638a(int a4);
int FUN_0c062b5e(int a4);
int FUN_0c02642a(int a4);
void FUN_0c0a8f48(int a4, int a5);
int FUN_0c06b476(void);
int FUN_0c049076(int a4);
int FUN_0c07a352(int a4, float f4);
int FUN_0c0ccabc(int a4, int a5);
int FUN_0c017a04(void);
void FUN_0c078bec(int a4, int a5);
int FUN_0c02d9ee(int a4);
int FUN_0c059500(int a4);

void FUN_0c05faf6(int a4, int a5)
{
    int t1;
    int t8;
    int t11;
    int t19;
    int t20;

    t1 = FUN_0c0e19aa(0xC05FBFE, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    t8 = 0x0;
    if ((*(signed char *)((a5 + 0x4))) != 0) {
        t8 = (*(int *)((a4 + 0x1EC)));
    }
    *(unsigned int *)((t1 + 0x1EC)) = t8;
    t11 = *(int *)(((0xD0 + a4) + 0x0));
    *(unsigned int *)((t1 + 0x1EC)) = ((*(int *)((t1 + 0x1EC))) | (((int)t11 >= 0) ? (0x1 << (t11 & 31)) : ((-(int)t11 & 31) ? ((int)0x1 >> (-(int)t11 & 31)) : ((int)0x1 >> 31))));
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = ((unsigned short)(*(short *)((a5 + 0x8))) << 1);
    *(unsigned int *)((t1 + 0x220)) = 0x9C;
    t19 = *(int *)((a4 + 0xBC));
    t20 = *(int *)((a4 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((((((((t19 << 1) + t19) << 2) << 2) << 2) + 0xC23F268) + (((t20 << 1) + t20) << 2))); }
}

int FUN_0c063df0(int a4, int a5, int a6)
{
    int t1;
    int t10;
    int t12;
    int t14;

    t1 = FUN_0c0e19aa(0xC063D38, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a6 + 0x2)));
    if ((int)(*(short *)((a4 + 0xE8))) < (int)0x4) {
        t10 = 0x0;
        if ((*(signed char *)((a6 + 0x4))) != 0) {
            t10 = (*(int *)((a4 + 0x1EC)));
        }
        t14 = t10;
    } else {
        t12 = *(int *)((a4 + 0xBC));
        t14 = (((int)t12 >= 0) ? (0x1 << (t12 & 31)) : ((-(int)t12 & 31) ? ((int)0x1 >> (-(int)t12 & 31)) : ((int)0x1 >> 31)));
    }
    *(unsigned int *)((t1 + 0x1EC)) = t14;
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a6 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a6 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a6 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a6 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a6 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a6 + 0x0)));
    *(unsigned int *)((t1 + 0x22C)) = 0x0;
    *(float *)((t1 + 0x30)) = (*(float *)((a5 + 0x0)));
    *(float *)((t1 + 0x34)) = (*(float *)((a5 + 0x4)));
    *(float *)((t1 + 0x38)) = (*(float *)((a5 + 0x8)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    *(unsigned int *)((t1 + 0x230)) = a5;
    return 0x230;
}

int FUN_0c02d22a(int a4, int a5, int a6, float f4, float f5)
{
    int t5;
    float u7;
    int t9;
    float u16;

    if ((*(int *)((a4 + 0x330))) != 0) {
        *(unsigned int *)((a4 + 0x4F0)) = 0x16;
        *(unsigned int *)((a4 + 0x5CC)) = 0x0;
        *(unsigned int *)((a4 + 0x508)) = 0x0;
        if ((*(int *)((a4 + 0x554))) == 2) {
            *(unsigned int *)((a4 + 0x4F4)) = 0x19;
        } else {
            *(unsigned int *)((a4 + 0x4F4)) = 0x18;
        }
    } else {
        *(unsigned int *)((a4 + 0x4F0)) = 0x15;
        *(unsigned int *)((a4 + 0x5CC)) = 0x1;
        t5 = FUN_0c035f64(a4, a5, a6);
        if ((int)t5 >= 0) {
            u7 = *(float *)((((*(int *)(((0xBC + a4) + 0x0))) << 2) + ((((t5 << 2) << 2) << 2) + 0xC247694)));
            t9 = *(int *)((((t5 << 2) + 0xC2475D4) + 0x0));
            u16 = 999.998962f;
            if ((*(int *)((a4 + 0x50C))) != 0) {
                u16 = (*(float *)(((((*(int *)(((0xBC + a4) + 0x0))) << 2) + (0xC247084 + ((((*(int *)((a4 + 0x510))) << 2) << 2) << 2))) + 0x0)));
            }
            if (!(u7 > u16)) {
                *(unsigned int *)((a4 + 0x558)) = t5;
                *(unsigned int *)((a4 + 0x508)) = 0x1;
                *(unsigned int *)((a4 + 0x514)) = 0x1;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x518 + a4)) = *(struct mv3 *)((t9 + 0x30)); }
                *(unsigned int *)((a4 + 0x4F4)) = 0x17;
            } else {
                *(unsigned int *)((a4 + 0x558)) = 0x0;
                *(unsigned int *)((a4 + 0x508)) = 0x0;
                *(unsigned int *)((a4 + 0x4F4)) = 0x1;
            }
        } else {
            *(unsigned int *)((a4 + 0x558)) = 0x0;
            *(unsigned int *)((a4 + 0x508)) = 0x0;
            *(unsigned int *)((a4 + 0x4F4)) = 0x1;
        }
    }
    return 0x4F4;
}

int FUN_0c064640(int a4, int a5)
{
    int t1;
    int t5;
    int t10;

    t1 = FUN_0c0e19aa(0xC064740, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    t5 = 0x10;
    if ((int)(*(int *)((a4 + 0xBC))) < (int)0xC) {
        t5 = (*(int *)((a4 + 0xBC)));
    }
    *(unsigned int *)((t1 + 0xBC)) = t5;
    t10 = 0x0;
    if ((*(signed char *)((a5 + 0x4))) != 0) {
        t10 = (*(int *)((a4 + 0x1EC)));
    }
    *(unsigned int *)((t1 + 0x1EC)) = t10;
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = ((unsigned short)(*(short *)((a5 + 0x8))) << 1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
    return t1;
}

float FUN_0c0e0454(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    int t7;
    int t12;
    float u13;
    float u14;
    float u15;
    int t11;
    int t17;
    int t18;
    int t19;
    int t20;
    float u22;
    float u23;
    float u24;
    float u25;
    float u26;
    float u27;
    float u34;
    float u37;
    float u38;
    int t41;
    float u21;
    int stk[23];

    *(unsigned int *)(((int)stk + 60)) = a4;
    *(unsigned int *)(((int)stk + 56)) = a5;
    *(unsigned int *)(((int)stk + 52)) = a6;
    *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = f4;
    *(float *)(((((int)stk + 4) + 0x28) + 0x0)) = f5;
    *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = f6;
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = f7;
    u0 = *(float *)(((int)stk + 36));
    u1 = *(float *)(((int)stk + 48));
    u2 = *(float *)(((int)stk + 40));
    u3 = *(float *)(((int)stk + 44));
    u4 = *(float *)(((int)stk + 48));
    u5 = *(float *)(((int)stk + 44));
    { struct mv8 { int w[8]; }; *(struct mv8 *)(((int)stk + 4)) = *(struct mv8 *)(0xC1EA810); }
    t7 = *(int *)(((*(int *)(((int)stk + 60))) + 0x34));
    t12 = t7;
    u13 = 1.0f;
    u14 = 1.0f;
    u15 = u0;
    if ((t7 & 15) == 0) {
    } else {
        t11 = *(int *)(((*(int *)(((int)stk + 60))) + 0x34));
        t12 = (((t11 >> 1) >> 1) & 0x3);
        u13 = (float)(((t11 >> 1) >> 1) & 0x3);
        u14 = (float)((*(int *)(((*(int *)(((int)stk + 60))) + 0x34))) & 0x3);
        u15 = (float)(((t11 >> 1) >> 1) & 0x3);
    }
    t17 = t12;
    t18 = 0xC1EA810;
    t19 = ((int)stk + 4);
    t20 = 0x0;
    u22 = u2;
    u23 = u15;
    u24 = f6;
    u25 = f7;
    u26 = f8;
    u27 = f9;
    for (;;) {
        if ((int)t20 >= (int)0x4) {
            break;
        }
        u27 = (*(float *)((t19 + 0x0)));
        t19 = (t19 + 0x4);
        u26 = (*(float *)((t19 + 0x0)));
        t19 = (t19 + 0x4);
        u27 = (u27 - u14);
        u26 = (u26 - u13);
        t17 = 0x4;
        u25 = (*(float *)(((*(int *)(((int)stk + 60))) + t17)));
        t18 = (*(int *)(((int)stk + 60)));
        t17 = 0x8;
        u24 = (*(float *)((t18 + t17)));
        u23 = 0.0f;
        if (u27 != u23) {
            u21 = u27;
            u34 = u25;
            u34 = u34 + u21 * (u1 * u0);
            u25 = u34;
            u22 = (u4 * u2);
            u22 = (u22 * u27);
            u22 = (-u22);
            u24 = (u24 + u22);
        }
        u23 = 0.0f;
        if (u26 != u23) {
            u21 = u26;
            u37 = u25;
            u37 = u37 + u21 * (u3 * u2);
            u25 = u37;
            u21 = u26;
            u38 = u24;
            u38 = u38 + u21 * (u5 * u0);
            u24 = u38;
        }
        t18 = (*(int *)(((int)stk + 56)));
        t18 = (t18 + 0x4);
        *(unsigned int *)(((int)stk + 56)) = t18;
        t18 = (t18 - 4);
        *(float *)((t18 + 0x0)) = u25;
        t41 = *(int *)(((int)stk + 52));
        *(unsigned int *)(((int)stk + 52)) = (t41 + 0x4);
        *(float *)((((t41 + 0x4) - 4) + 0x0)) = u24;
        t20 = (t20 + 0x1);
    }
    return u21;
}

int FUN_0c046294(int a4, int a5, int a6)
{
    int stk[16];

    if (((*(int *)((a4 + 0x50C))) != 0) && (a6 != 0)) {
        if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x510))) << 2)))) == 4) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x20)) = *(struct mv3 *)(((*(int *)(((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0) + 0x0))) + 0x30)); }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x20)) = *(struct mv3 *)((0x24C + a4)); }
        }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x20)) = *(struct mv3 *)((0x24C + a4)); }
    }
    FUN_0c0a7714((((int)stk + 4) + 0x4), ((int)stk + 4), ((*(float *)((a4 + 0x30))) - (*(float *)(((((int)stk + 4) + 0x20) + 0x0)))), ((*(float *)((a4 + 0x34))) - (*(float *)(((((int)stk + 4) + 0x20) + 0x4)))), ((*(float *)((a4 + 0x38))) - (*(float *)(((((int)stk + 4) + 0x20) + 0x8)))));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70((*(float *)(((((int)stk + 4) + 0x20) + 0x0))), (*(float *)(((((int)stk + 4) + 0x20) + 0x4))), (*(float *)(((((int)stk + 4) + 0x20) + 0x8))));
    nlRotateAY((*(int *)(((int)stk + 4))));
    *(float *)(((int)stk + 24)) = (*(float *)((a5 + 0x0)));
    *(float *)(((int)stk + 28)) = (*(float *)((a5 + 0x4)));
    *(float *)(((int)stk + 32)) = (*(float *)((a5 + 0x8)));
    FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
    *(float *)(((0x518 + a4) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)(((0x51C + a4) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)(((0x520 + a4) + 0x0)) = (*(float *)(((int)stk + 20)));
    nlPopMatrix(0x1);
    *(unsigned int *)((a4 + 0x52C)) = (*(int *)(((int)stk + 4)));
    return 0x52C;
}

int FUN_0c0493d8(int a4)
{
    float u17;

    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        *(unsigned int *)0xC23EDB0 = 0x0;
        *(unsigned int *)0xC23ED5C = ((*(int *)0xC23ED5C) | 0x10000);
        *(unsigned int *)((a4 + 0x474)) = 0x0;
        return 0x474;
    }
    if ((*(int *)((a4 + 0x4D0))) == 0) {
        *(unsigned int *)((a4 + 0xA4)) = ((*(int *)((a4 + 0xA4))) & 0xFFFFFFF7);
    }
    if ((int)(*(int *)((a4 + 0x490))) > 0) {
        *(unsigned int *)((a4 + 0x398)) = ((*(int *)((a4 + 0x398))) - 1);
    }
    FUN_0c0465fa(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
    if ((((*(float *)((a4 + 0x390))) + 10.0f) > (*(float *)((a4 + 0x34)))) && (u17 = *(float *)((a4 + 0x4C)), !(u17 > 0.0f))) {
        *(float *)((a4 + 0x4C)) = (((*(float *)((a4 + 0x390))) - (*(float *)((a4 + 0x34)))) + 10.0f);
        *(float *)((a4 + 0x64)) = 0.0f;
    }
    *(float *)((a4 + 0x4B0)) = 0.0f;
    *(float *)((a4 + 0x4B4)) = 0.0f;
    *(float *)((a4 + 0x4B8)) = 0.0f;
    return 0x4B8;
}

int FUN_0c0b455c(void)
{
    int t0;
    int t1;
    int t3;
    int t5;
    int t16;

    t0 = 0xC2038E4;
    t1 = 0x4;
    for (;;) {
        t3 = FUN_0c0e19aa(0xC0B35E4, 0x474, (*(int *)0xC23ECEC));
        FUN_0c0e19d0(t3);
        *(float *)(((0x468 + t3) + 0x8)) = 1.0f;
        *(float *)(((0x468 + t3) + 0x4)) = 1.0f;
        *(float *)(((0x468 + t3) + 0x0)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x8)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x4)) = 1.0f;
        *(float *)(((0x45C + t3) + 0x0)) = 1.0f;
        *(float *)((t3 + 0x284)) = 1.0f;
        *(float *)((t3 + 0x27C)) = 1.0f;
        *(float *)((t3 + 0x278)) = 1.0f;
        *(float *)((t3 + 0x274)) = 1.0f;
        *(unsigned int *)((t3 + 0x32C)) = 0x0;
        t5 = *(int *)((t0 + 0x14));
        *(unsigned int *)((t3 + 0xBC)) = t1;
        *(unsigned int *)(((0xC0 + t3) + 0x0)) = (*(signed char *)((t0 + 0x1)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x30)) = *(struct mv3 *)((t0 + 0x8)); }
        FUN_0c0855ba(t3);
        FUN_0c0ba6e8(t3);
        if ((*(int *)((t3 + 0xC0))) == 17) {
            *(unsigned int *)((t3 + 0x404)) = 0x9D5;
            *(unsigned int *)((t3 + 0x410)) = 0x9D3;
            *(unsigned int *)((t3 + 0x41C)) = 0x9D4;
            *(unsigned int *)((t3 + 0x418)) = 0x9D6;
            *(unsigned int *)((t3 + 0x424)) = 0x9D7;
            *(unsigned int *)((t3 + 0x414)) = 0x9D8;
            *(unsigned int *)((t3 + 0x420)) = 0x9D9;
        }
        FUN_0c0ba776(t3);
        FUN_0c085638(t3);
        t16 = FUN_0c0b359e(t3, t5);
        t1 = (t1 + 0x1);
        t0 = (t0 + 0x18);
        if ((int)t1 >= (int)0xA) {
            break;
        }
    }
    return t16;
}

int FUN_0c063a90(int a4)
{
    int t1;
    int t2;
    int stk[10];

    t1 = *(int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0));
    t2 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t2 - 1);
    if ((int)(t2 - 1) < 0) {
        FUN_0c09d320();
        FUN_0c0e19f2();
    }
    if ((*(int *)((t1 + 0x2BC))) != (*(int *)((a4 + 0x220)))) {
        FUN_0c09d320();
        FUN_0c0e19f2();
    }
    if ((*(int *)((a4 + 0xD8))) != 0) {
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c0909fc(a4);
        }
        *(unsigned int *)((a4 + 0x1EC)) = ((*(int *)((a4 + 0x1EC))) & (~(*(int *)(((0x1C4 + a4) + 0x0)))));
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((*(int *)((t1 + 0x3E4))) + 0x1C0));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = -10.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((a4 + 0x30) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)(((a4 + 0x34) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)(((a4 + 0x38) + 0x0)) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    FUN_0c0e6248();
    return (FUN_0c01cdc2(a4));
}

int FUN_0c07a0f0(int a4)
{
    int t0;
    int t1;
    float u4;
    float u8;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c0e1830(0xC07A1D6, 0x2BC);
        FUN_0c0e19d0(t1);
        *(unsigned int *)((t1 + 0xBC)) = 0x18;
        *(float *)((t1 + 0x1E4)) = 5.5f;
        *(unsigned int *)((t1 + 0x1F8)) = 0x12;
        *(unsigned int *)((t1 + 0x200)) = 0x1;
        *(unsigned int *)((t1 + 0x1F4)) = 0x1E;
        u4 = (*(float *)((a4 + 0x30)));
        u4 = u4 + 10.0f * (float)t0;
        *(float *)((t1 + 0x30)) = (u4 + -20.0f);
        *(float *)((t1 + 0x38)) = (*(float *)((a4 + 0x38)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
        u8 = -0.5f;
        if ((*(int *)((a4 + 0x88))) != 0) {
            u8 = 0.5f;
        }
        *(float *)((t1 + 0x50)) = u8;
        t0 = (t0 + 0x1);
        *(unsigned int *)((t1 + 0x230)) = a4;
        if ((int)t0 >= (int)0x5) {
            break;
        }
    }
    return 0x230;
}

int FUN_0c0835fa(int a4)
{
    int t5;

    if ((*(int *)0xC2475A4) == 1) {
        *(unsigned int *)((a4 + 0x3B4)) = 0x0;
    } else {
        *(unsigned int *)((a4 + 0x3B4)) = 0x1;
    }
    t5 = *(int *)((((*(int *)((a4 + 0x3B4))) << 2) + 0xC246FF0));
    FUN_0c082f04(a4, 0x3, (*(float *)((t5 + 0x22C))));
    FUN_0c082f04(a4, 0x4, (*(float *)((t5 + 0x230))));
    FUN_0c082f04(a4, 0x5, (*(float *)((t5 + 0x234))));
    FUN_0c082fae(a4, 0x3, 0x0, 0x168, (*(float *)0xC1028C8));
    FUN_0c082fae(a4, 0x5, 0x0, 0x168, (*(float *)0xC1028D0));
    FUN_0c082f78(a4, 0x0, 0xC247EA8);
    FUN_0c082f78(a4, 0x1, 0xC247EAC);
    FUN_0c082f78(a4, 0x2, 0xC247EB0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x260 + a4)) = *(struct mv3 *)((0x22C + t5)); }
    *(unsigned int *)((a4 + 0x370)) = 0xEAAA;
    *(unsigned int *)((a4 + 0x374)) = 0x2D;
    *(unsigned int *)((a4 + 0x3FC)) = 0x78;
    return 0x3FC;
}

int FUN_0c08d75c(int a4, int a5, int a6)
{
    int t1;
    int t5;
    int t16;
    int t18;

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
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(a4); }
    t16 = 0x236;
    for (;;) {
        FUN_0c0cbafc(t16, 0x2, 0xFC000000, 0x94000000);
        t16 = (t16 + 0x1);
        if ((int)t16 >= (int)0x245) {
            break;
        }
    }
    t18 = 0x259;
    for (;;) {
        FUN_0c0cbafc(t18, 0x2, 0xFC000000, 0x94000000);
        t18 = (t18 + 0x1);
        if ((int)t18 >= (int)0x26D) {
            break;
        }
    }
    FUN_0c0cbafc(0x410, 0x2, 0xFC000000, 0xC000000);
    return (FUN_0c0cbafc(0x294, 0x2, 0xFC006000, 0x84002000));
}

int FUN_0c0ccd5a(int a4, int a5, int a6)
{
    int t4;
    int t6;
    int t12;
    float u14;
    int stk[14];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    if (a6 != 0) {
        *(unsigned int *)(((int)stk + 12)) = 0x1;
        *(unsigned int *)(((int)stk + 8)) = ((0xC23F268 + (((((a6 << 1) + a6) << 2) << 2) << 2)) + 0xC);
    }
    t4 = 0x14;
    for (;;) {
        t6 = FUN_0c0e19aa(0xC0CCE64, 0xC8, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t6);
        *(unsigned int *)((t6 + 0xB8)) = 0x0;
        *(unsigned int *)((t6 + 0xAC)) = (*(int *)0xC1E9E7C);
        *(unsigned int *)(((0xB4 + t6) + 0x0)) = (*(short *)0xC1E9E80);
        *(unsigned int *)(((0xB0 + t6) + 0x0)) = (*(short *)0xC1E9E82);
        *(unsigned int *)((t6 + 0x30)) = (*(int *)(((int)stk + 12)));
        t12 = *(int *)(((int)stk + 8));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x68)) = *(struct mv3 *)(t12); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x38)) = *(struct mv3 *)(t12); }
        t4 = (t4 - 0x1);
        u14 = 0.75f;
        u14 = u14 + 7.62962736e-06f * (float)(FUN_0c0da2e0());
        *(float *)((t6 + 0x98)) = u14;
        *(unsigned int *)((t6 + 0xA8)) = 0x1;
        *(unsigned int *)((t6 + 0xC4)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)((t6 + 0xC0)) = a6;
        if (t4 == 0) {
            break;
        }
    }
    return 0xC0;
}

void FUN_0c063994(int a4, int a5)
{
    int t1;
    int t10;
    int t12;
    int t14;

    t1 = FUN_0c0e19aa(0xC0638D0, 0x2BC, (*(int *)0xC23ECE4));
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
        t12 = *(int *)((a4 + 0xBC));
        t14 = (((int)t12 >= 0) ? (0x1 << (t12 & 31)) : ((-(int)t12 & 31) ? ((int)0x1 >> (-(int)t12 & 31)) : ((int)0x1 >> 31)));
    }
    *(unsigned int *)((t1 + 0x1EC)) = t14;
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t1 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t1 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x8)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c0e6248();
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
}

void FUN_0c08a8e0(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    float u21;
    int t22;
    int t31;
    int stk[11];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R12;
    int R13;
    int R14;
    float F3;
    float F4;
    float F5;
    float F6;
    float F7;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    *(unsigned int *)(((int)stk + 4)) = ((0x154 + R4) + (((R5 << 1) + R5) << 2));
    u0 = *(float *)((((((((R5 << 1) + R5) << 2) << 2) << 2) + 0xC23F268) + 0x4));
    u1 = *(float *)((((0x154 + R4) + (((R5 << 1) + R5) << 2)) + 0x4));
    u2 = *(float *)0xC08A9E0;
    R0 = (0xC08A9E0);
    R12 = ((((R5 << 1) + R5) << 2));
    R13 = (R4);
    R14 = (((((((R5 << 1) + R5) << 2) << 2) << 2) + 0xC23F268));
    F4 = (u2);
    F5 = ((u1 - u0));
    F6 = (u0);
    F7 = (u1);
    if ((!(u2 > u0))) goto L_C08A930;
    if ((F4 > F7)) goto L_C08A930;
    R0 = (0xC08A9E4);
    if ((F5 > (*(float *)0xC08A9E4))) goto L_C08A940;
    L_C08A930:;
    if ((F4 > F6)) goto L_C08A990;
    if ((!(F4 > F7))) goto L_C08A990;
    R0 = (0xC08A9E8);
    if ((!((*(float *)0xC08A9E8) > F5))) goto L_C08A990;
    L_C08A940:;
    u21 = *(float *)0xC08A9EC;
    t22 = !((_builtin_fabsf(F5) * u21) > u21);
    R0 = (0xC08A9EC);
    F15 = ((_builtin_fabsf(F5) * u21));
    F6 = (u21);
    if (t22) goto L_C08A950;
    F15 = (F6);
    L_C08A950:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(R14); }
    *(float *)(((int)stk + 16)) = F4;
    *(unsigned int *)(((int)stk + 8)) = ((0x154 + R13) + R12);
    t31 = FUN_0c0d9dc0(R4, R5, ((*(float *)((R14 + 0x0))) - (*(float *)((((0x154 + R13) + R12) + 0x0)))), ((*(float *)((R14 + 0x8))) - (*(float *)((((0x154 + R13) + R12) + 0x8)))));
    FUN_0c08e970((((int)stk + 4) + 0x8), (0x8000 + t31), F15);
    R0 = ((FUN_0c0cc3f8((*(int *)((R13 + 0x3C4))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28))));
    L_C08A990:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((0x154 + R13) + R12)) = *(struct mv3 *)(R14); }
}

void FUN_0c08a7f0(int a4, int a5)
{
    float u0;
    float u1;
    int t16;
    int t25;
    int stk[11];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R12;
    int R13;
    int R14;
    float F3;
    float F4;
    float F5;
    float F6;
    float F7;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    *(unsigned int *)(((int)stk + 4)) = ((0x154 + R4) + (((R5 << 1) + R5) << 2));
    u0 = *(float *)((((((((R5 << 1) + R5) << 2) << 2) << 2) + 0xC23F268) + 0x4));
    u1 = *(float *)((((0x154 + R4) + (((R5 << 1) + R5) << 2)) + 0x4));
    R0 = (0xC08A8C4);
    R12 = ((((R5 << 1) + R5) << 2));
    R13 = (R4);
    R14 = (((((((R5 << 1) + R5) << 2) << 2) << 2) + 0xC23F268));
    F4 = (4.0f);
    F5 = ((u1 - u0));
    F6 = (u0);
    F7 = (u1);
    if ((!(4.0f > u0))) goto L_C08A83E;
    if ((F4 > F7)) goto L_C08A83E;
    if ((F5 > 1.0f)) goto L_C08A84E;
    L_C08A83E:;
    if ((F4 > F6)) goto L_C08A89E;
    if ((!(F4 > F7))) goto L_C08A89E;
    if ((!((-1.0f) > F5))) goto L_C08A89E;
    L_C08A84E:;
    t16 = !((_builtin_fabsf(F5) * 0.5f) > 0.5f);
    R0 = (0xC08A8C8);
    F15 = ((_builtin_fabsf(F5) * 0.5f));
    F6 = (0.5f);
    if (t16) goto L_C08A85E;
    F15 = (F6);
    L_C08A85E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(R14); }
    *(float *)(((int)stk + 16)) = F4;
    *(unsigned int *)(((int)stk + 8)) = ((0x154 + R13) + R12);
    t25 = FUN_0c0d9dc0(R4, R5, ((*(float *)((R14 + 0x0))) - (*(float *)((((0x154 + R13) + R12) + 0x0)))), ((*(float *)((R14 + 0x8))) - (*(float *)((((0x154 + R13) + R12) + 0x8)))));
    FUN_0c08e970((((int)stk + 4) + 0x8), (0x8000 + t25), F15);
    R0 = ((FUN_0c0cc3f8((*(int *)((R13 + 0x3C4))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28))));
    L_C08A89E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((0x154 + R13) + R12)) = *(struct mv3 *)(R14); }
}

int fmMngAddData(int a4)
{
    int t36;
    int t30;
    int t10;
    int t18;
    int t26;
    int t20;
    int t23;
    int t24;

    t36 = 0xFFFFFFFA;
    if ((*(short *)((a4 + 0x2))) == 0) {
        *(unsigned short *)(((a4 + 0x34) + 0x0)) = (*(int *)((a4 + 0x28)));
        thunk_FUN_0c22907e((*(int *)((a4 + 0x30))), ((a4 + 0x34) + 0x2), 0x3C);
        *(unsigned short *)(((a4 + 0x34) + 0x3E)) = (fmcalccrc(0x3E, (a4 + 0x34)));
        FUN_0c229058((a4 + 0x34), ((*(int *)((a4 + 0xC))) + (((((*(int *)((a4 + 0x28))) + 0x1) << 2) << 2) << 2)), 0x40);
        t30 = 0xFFFFFFF6;
        if ((int)(*(int *)((a4 + 0x10))) >= (int)(*(int *)((a4 + 0x14)))) {
        } else {
            t10 = *(int *)((a4 + 0x14));
            fmMngNum2Bit(((*(int *)((a4 + 0x10))) + 0x1), ((*(int *)((a4 + 0xC))) + ((((t10 + 0x1) << 2) << 2) << 2)), (*(int *)((a4 + 0x18))));
            t18 = FUN_0c232638(((*(int *)((a4 + 0x4))) + ((((t10 + 0x1) << 2) << 2) << 2)), ((*(int *)((a4 + 0xC))) + ((((t10 + 0x1) << 2) << 2) << 2)), ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2));
            t26 = 0xFFFFFFFE;
            if (t18 == ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2)) {
                t20 = *(int *)((a4 + 0x10));
                *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + 0x1);
                t23 = FUN_0c232638(((*(int *)((a4 + 0x4))) + ((((t20 + 0x1) << 2) << 2) << 2)), (a4 + 0x34), 0x40);
                t24 = 0x0;
                if (t23 != 64) {
                    t24 = 0xFFFFFFFE;
                }
                t26 = t24;
            }
            t30 = t26;
        }
        t36 = t30;
    }
    return t36;
}

int FUN_0c034924(int a4, int a5)
{
    int t0;
    int t9;
    int stk[25];

    *(unsigned int *)(((int)stk + 24)) = a5;
    t0 = *(int *)((a4 + 0xBC));
    *(unsigned int *)(((int)stk + 28)) = (0xC23F268 + (((((t0 << 1) + t0) << 2) << 2) << 2));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    nlRotateAZ((*(short *)((a4 + 0x70))));
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    t9 = *(int *)((a4 + 0x4F4));
    *(float *)(((int)stk + 52)) = (-(*(float *)((((*(int *)(((((t9 << 1) + t9) << 2) + 0xC1F79BC))) + 0x7C) + 0x0))));
    FUN_0c0db470((((int)stk + 16) + 0x1C), (((int)stk + 16) + 0x10));
    *(float *)(((((int)stk + 16) + 0x40) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)(((((int)stk + 16) + 0x44) + 0x0)) = (*(float *)(((int)stk + 36)));
    *(float *)(((((int)stk + 16) + 0x48) + 0x0)) = (*(float *)(((int)stk + 40)));
    nlPopMatrix(0x1);
    *(int *)((int)stk + 12) = (((int)stk + 16) + 0x4);
    *(int *)((int)stk + 8) = (((int)stk + 12) + 0x4);
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x3C);
    return (FUN_0c036806((*(int *)(((int)stk + 28))), (((int)stk + 4) + 0x4C), (*(int *)(((int)stk + 24))), (((int)stk + 4) + 0x34), (((int)stk + 8) + 0x3C), (((int)stk + 12) + 0x4), (((int)stk + 16) + 0x4)));
}


int FUN_0c0220dc(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t50;
    int t4;
    int t5;
    int t10;
    int t18;
    int t41;
    int t31;

    t0 = *(int *)((a4 + 0x6C));
    t2 = *(int *)((((((t0 << 2) << 2) << 1) + 0xC246314) + 0x4));
    t50 = t2;
    if ((*(int *)((((((t0 << 2) << 2) << 1) + 0xC246314) + 0x8))) != 0) {
        t4 = *(int *)((t2 + 0x0));
        if (t4 != -2) {
            if (t4 != -1) {
                t5 = 0xC;
                for (;;) {
                    if ((*(int *)((((t5 << 2) + 0xC247030) + 0x0))) != 0) {
                        t5 = (t5 + 0x1);
                        if ((int)t5 >= (int)0x10) {
                            break;
                        }
                        continue;
                    }
                    break;
                }
                t10 = 0x0;
                for (;;) {
                    if ((*(int *)(((((t10 << 2) << 2) + 0xC246394) + 0x0))) != 0) {
                        t10 = (t10 + 0x1);
                        if ((int)t10 >= (int)0x10) {
                            break;
                        }
                        continue;
                    }
                    break;
                }
                t18 = t2;
                if (((int)t5 < (int)0x10) && ((int)t10 < (int)0x10)) {
                    FUN_0c021fee(t5, t10, t2);
                    t18 = (t2 + 0x20);
                }
                t31 = t18;
            } else {
                t31 = ((*(int *)((((((*(int *)0xC23ED50) << 2) << 1) + (*(int *)((a4 + 0x50)))) + 0x0))) + ((((unsigned short)(*(short *)((t2 + 0x1C))) << 2) << 2) << 1));
            }
            t41 = t31;
        } else {
            *(unsigned int *)(((((((*(int *)((a4 + 0x6C))) << 2) << 2) << 1) + 0xC246314) + 0x8)) = 0x0;
            t41 = t2;
        }
        t50 = t41;
    }
    *(unsigned int *)(((((((*(int *)((a4 + 0x6C))) << 2) << 2) << 1) + 0xC246314) + 0x4)) = t50;
    return 0x6C;
}

int FUN_0c093a08(int a4, int a5, int a6)
{
    int t1;
    int t14;
    int t15;

    t1 = FUN_0c0e19aa(0xC093844, 0xB4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x80)) = (unsigned char)(*(signed char *)0xC10BA2C);
    *(unsigned int *)(((0xA0 + t1) + 0x0)) = (unsigned char)(*(signed char *)0xC10BA2D);
    *(unsigned int *)(((0xA4 + t1) + 0x0)) = (unsigned short)(*(short *)0xC10BA2E);
    *(unsigned int *)((t1 + 0x8C)) = (*(int *)0xC10BA30);
    *(unsigned int *)((t1 + 0x78)) = (*(int *)((a4 + 0xC0)));
    *(unsigned int *)((t1 + 0x88)) = (*(int *)((a4 + 0xBC)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(a5); }
    FUN_0c0e6248();
    *(float *)((t1 + 0x74)) = 1.0f;
    *(unsigned int *)(((t1 + 0x68) + 0x0)) = (*(short *)((a6 + 0x0)));
    FUN_0c0da2e0();
    *(volatile short *)0xC10BA2E;
    *(unsigned int *)(((0x9C + t1) + 0x0)) = (FUN_0c0e5f1c());
    t14 = FUN_0c0da2e0();
    t15 = ((~(((~t14) + 0x1) & 0xFFFF)) + 0x1);
    if ((int)t14 >= 0) {
        t15 = (t14 & 0xFFFF);
    }
    *(unsigned int *)(((0xA8 + t1) + 0x0)) = t15;
    return t15;
}


int FUN_0c05c4ca(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t16;
    int t25;
    int t28;
    int t23;
    int t26;
    int t27;
    int stk[3];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    t0 = *(int *)((a4 + 0xBC));
    t1 = *(int *)((a4 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F268) + (((t1 << 1) + t1) << 2))); }
    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c0cc3f8(0x230A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0x7);
            FUN_0c054c8a(a4);
            FUN_0c0909fc(a4);
            FUN_0c04c306((*(int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0))));
            FUN_0c05824e((*(int *)((a4 + 0xBC))), (*(int *)((a4 + 0x1C4))));
            t16 = ((int (*)(void))(FUN_0c0e19f2))();
        }
    } else {
        t23 = a4;
    }
    t25 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t25 - 1);
    if (((int)(t25 - 1) >= 0) && (t26 = *(int *)((a4 + 0x1C)), t27 = *(int *)((t26 + 0x20C)), (t27 & 0x1A00) == 0)) {
    } else {
        t28 = ((int (*)(int))(FUN_0c0e19f2))(t23);
    }
    return FUN_0c01cdc2(a4);
}

int FUN_0c077780(int a4)
{
    int t1;
    int t21;
    int stk[14];

    FUN_0c0c47ae(0x11D4);
    *(unsigned int *)(((int)stk + 12)) = 0xC0FFCB0;
    *(unsigned int *)(((int)stk + 8)) = 0xC0FFC68;
    *(unsigned int *)(((int)stk + 4)) = 0xC0FFC74;
    *(unsigned int *)(((int)stk + 20)) = 0xC0FFC50;
    *(unsigned int *)(((int)stk + 16)) = 0xC0FFC5C;
    t1 = 0x0;
    for (;;) {
        nlPushMatrix(0x0);
        FUN_0c0dcca0((*(int *)(((int)stk + 12))));
        FUN_0c0c47ae((0x34E + ((*(int *)0xC23A258) & 0x3F)));
        FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
        FUN_0c0dcca0((*(int *)(((int)stk + 8))));
        FUN_0c0c47ae(0x11D6);
        FUN_0c0dcca0((*(int *)(((int)stk + 4))));
        FUN_0c0c47ae(0x11D5);
        FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
        FUN_0c0db470((*(int *)(((int)stk + 20))), ((0x126C + a4) + t1));
        FUN_0c0db470((*(int *)(((int)stk + 16))), (((0x126C + a4) + t1) + 0x2D0));
        FUN_0c07787c(((0x126C + a4) + t1));
        nlPopMatrix(0x1);
        t21 = nlRotateAY(0x2AAA);
        t1 = (t1 + 0x2F4);
        if ((unsigned int)t1 >= (unsigned int)0x11B8) {
            break;
        }
    }
    return t21;
}

int FUN_0c04638a(int a4)
{
    int stk[9];

    if ((*(int *)((a4 + 0x50C))) != 0) {
        if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0x510))) << 2)))) == 4) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(((*(int *)(((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0) + 0x0))) + 0x30)); }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)((0x24C + a4)); }
        }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)((0x24C + a4)); }
    }
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((a4 + 0x30))) - (*(float *)(((((int)stk + 4) + 0x8) + 0x0)))), ((*(float *)((a4 + 0x34))) - (*(float *)(((((int)stk + 4) + 0x8) + 0x4)))), ((*(float *)((a4 + 0x38))) - (*(float *)(((((int)stk + 4) + 0x8) + 0x8)))));
    *(unsigned int *)((a4 + 0x248)) = (*(int *)(((int)stk + 4)));
    return 0x248;
}

int FUN_0c062b5e(int a4)
{
    int t0;
    int t1;
    int t2;
    int t7;

    t0 = *(int *)((a4 + 0x22C));
    t1 = *(int *)((a4 + 0x240));
    t2 = FUN_0c062a74(a4);
    if (t2 == 0) {
        FUN_0c0e19f2();
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c062934(a4, 200.0f, (((float)t0 / (float)t1) * 1.0f));
    t7 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t7 - 1);
    if ((int)(t7 - 1) < 0) {
        return FUN_0c0e19f2();
    }
    return 0x22C;
}

int FUN_0c02642a(int a4)
{
    int stk[17];

    nlPushMatrix(0x0);
    FUN_0c0dbda0((*(int *)((a4 + 0x3E4))));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
    FUN_0c0a7c66((((int)stk + 4) + 0x18), ((((int)stk + 4) + 0x18) + 0x4), ((((int)stk + 4) + 0x18) + 0x8));
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((int)stk + 4) + 0x24)); }
    *(unsigned short *)((a4 + 0x6C)) = (*(int *)(((((int)stk + 4) + 0x18) + 0x0)));
    *(unsigned short *)((a4 + 0x6E)) = (*(int *)(((((int)stk + 4) + 0x18) + 0x4)));
    *(unsigned short *)((a4 + 0x70)) = (*(int *)(((((int)stk + 4) + 0x18) + 0x8)));
    return 0x70;
}

void FUN_0c0a8f48(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x1BC)) = 0x0;
    *(unsigned int *)((a4 + 0x3CC)) = a5;
    *(unsigned int *)((a4 + 0x3D0)) = a5;
    *(unsigned int *)(((0x2BC + a4) + 0x0)) = (*(short *)((a5 + 0x2)));
    *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (*(short *)((a5 + 0x2)));
    *(unsigned int *)(((0x2E8 + a4) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x6)));
    *(unsigned int *)(((0x2D4 + a4) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)(((0x3AC + a4) + 0x0)) = ((unsigned char)(*(signed char *)((a5 + 0x4))) - 1);
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(float *)((a4 + 0x60)) = 0.0f;
    *(float *)((a4 + 0x64)) = 0.0f;
    *(float *)((a4 + 0x68)) = 0.0f;
    *(float *)((a4 + 0x54)) = 0.0f;
    *(float *)((a4 + 0x58)) = 0.0f;
    *(float *)((a4 + 0x5C)) = 0.0f;
    if ((unsigned char)(*(signed char *)((a5 + 0x7))) != 0xFF) {
        *(unsigned short *)(((0x6E + a4) + 0x0)) = ((unsigned char)(*(signed char *)((a5 + 0x7))) << 8);
    }
    if ((*(int *)((a5 + 0x8))) != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((*(int *)((a5 + 0x8)))); }
    }
}

int FUN_0c06b476(void)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC06B544, 0x474, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(0xC200390); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    *(unsigned int *)(((0x28C + t1) + 0x0)) = (unsigned short)(*(short *)0xC2003A2);
    FUN_0c0e6248();
    *(unsigned int *)((t1 + 0xBC)) = 0xF;
    FUN_0c01ce40(t1, 0xC1B6794, 22.0f);
    *(unsigned int *)(((((*(int *)((t1 + 0xBC))) << 2) + 0xC247030) + 0x0)) = 0x4;
    *(unsigned int *)(((((*(int *)((t1 + 0xBC))) << 2) + 0xC246FF0) + 0x0)) = t1;
    *(unsigned int *)(((((*(int *)((t1 + 0xBC))) << 2) + 0xC246FF0) + 0x0)) = t1;
    return 0xBC;
}

int FUN_0c049076(int a4)
{
    float u11;

    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        *(unsigned int *)((a4 + 0x474)) = 0x0;
        return 0x474;
    }
    if ((*(int *)((a4 + 0x4D0))) == 0) {
        *(unsigned int *)((a4 + 0xA4)) = ((*(int *)((a4 + 0xA4))) & 0xFFFFFFF7);
    }
    FUN_0c0465fa(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
    if ((((*(float *)((a4 + 0x390))) + 10.0f) > (*(float *)((a4 + 0x34)))) && (u11 = *(float *)((a4 + 0x4C)), !(u11 > 0.0f))) {
        *(float *)((a4 + 0x4C)) = (((*(float *)((a4 + 0x390))) - (*(float *)((a4 + 0x34)))) + 10.0f);
        *(float *)((a4 + 0x64)) = 0.0f;
    }
    *(float *)((a4 + 0x4B0)) = 0.0f;
    *(float *)((a4 + 0x4B4)) = 0.0f;
    *(float *)((a4 + 0x4B8)) = 0.0f;
    return 0x4B8;
}

int FUN_0c07a352(int a4, float f4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC07A238, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x78)) = 0x245;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(a4); }
    *(float *)((t1 + 0x4C)) = (f4 * (*(float *)0xC07A448));
    *(float *)((t1 + 0x58)) = (-(f4 * (*(float *)0xC07A44C)));
    *(float *)((t1 + 0x74)) = f4;
    *(float *)((t1 + 0x90)) = (*(float *)0xC07A450);
    *(float *)((t1 + 0x94)) = 0.0f;
    *(unsigned int *)((t1 + 0xA0)) = 0x14;
    *(unsigned int *)((t1 + 0xA4)) = 0x32;
    *(unsigned int *)((t1 + 0x98)) = (*(int *)((t1 + 0xA0)));
    *(unsigned int *)((t1 + 0x9C)) = (*(int *)((t1 + 0xA4)));
    return 0x9C;
}

int FUN_0c0ccabc(int a4, int a5)
{
    int t0;
    int t2;
    float u5;

    t0 = 0x14;
    for (;;) {
        t2 = FUN_0c0e19aa(0xC0CCB64, 0x68, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t2);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)(a4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x3C)) = *(struct mv3 *)(a4); }
        t0 = (t0 - 0x1);
        u5 = 0.099999994f;
        u5 = u5 + 9.99999997e-07f * (float)(FUN_0c0da2e0());
        *(float *)((t2 + 0x5C)) = u5;
        *(unsigned int *)((t2 + 0x64)) = a5;
        if (t0 == 0) {
            break;
        }
    }
    return 0x64;
}

int FUN_0c017a04(void)
{
    int t9;
    int t2;

    t9 = 0x0;
    if (((*(int *)0xC23ED88) & 0x100) != 0) {
    } else {
        t2 = FUN_0c0e19aa(0xC01788C, 0x24C, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t2);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)(0xC0F5218); }
        FUN_0c0e6248();
        *(unsigned int *)((t2 + 0x21C)) = (*(int *)0xC0F522C);
        *(unsigned int *)((t2 + 0xBC)) = 0x11;
        *(unsigned int *)((t2 + 0x78)) = 0xC1B6F5C;
        *(unsigned int *)((t2 + 0x74)) = 0x15;
        FUN_0c01ce40(t2, 0xC1B6F5C, (*(float *)0xC017B44));
        FUN_0c01d636(t2, 0xC1EF9EC, 0x1);
        t9 = t2;
    }
    return t9;
}

void FUN_0c078bec(int a4, int a5)
{
    int t0;
    int t1;
    int t3;

    if ((int)a5 > 0) {
        t0 = 0x0;
        t1 = a4;
        for (;;) {
            t3 = FUN_0c0e19aa(0xC0789F4, 0xB4, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t3);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x30)) = *(struct mv3 *)(t1); }
            *(unsigned short *)(((0x62 + t3) + 0x0)) = (*(short *)((t1 + 0xC)));
            t0 = (t0 + 0x1);
            *(unsigned int *)(((0x78 + t3) + 0x0)) = (unsigned short)(*(short *)((t1 + 0xE)));
            *(unsigned int *)((t3 + 0x98)) = (*(int *)((t1 + 0x10)));
            *(unsigned int *)((t3 + 0x9C)) = (*(int *)((t1 + 0x14)));
            *(float *)((t3 + 0x40)) = (*(float *)((t1 + 0x18)));
            t1 = (t1 + 0x1C);
            if ((int)t0 >= (int)a5) {
                break;
            }
        }
    }
}

int FUN_0c02d9ee(int a4)
{
    int t6;

    if ((*(int *)((a4 + 0x474))) == 0) {
        *(unsigned int *)((a4 + 0x474)) = 0xC02D710;
        *(unsigned int *)((a4 + 0x5CC)) = 0x0;
    }
    if ((*(int *)((a4 + 0x478))) == 0) {
        *(unsigned int *)(((0x488 + a4) + 0x0)) = (FUN_0c0e262a(0x2BC));
        t6 = *(int *)((a4 + 0x488));
        FUN_0c02d6a8(a4);
        *(unsigned int *)((t6 + 0x22C)) = 0x3;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x3C)) = *(struct mv3 *)((t6 + 0x30)); }
        *(unsigned int *)((t6 + 0x248)) = 0x0;
        *(unsigned int *)((a4 + 0x478)) = 0xC02D9CE;
    }
    *(unsigned int *)((a4 + 0x508)) = 0x0;
    *(unsigned int *)((a4 + 0x4F4)) = 0x15;
    return 0x4F4;
}

int FUN_0c059500(int a4)
{
    float u6;
    int t11;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x30)); }
    *(float *)((a4 + 0x64)) = ((*(float *)((a4 + 0x64))) - ((*(float *)(((0x25C + a4) + 0x0))) * 6.0f));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x60));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    u6 = *(float *)((a4 + 0x25C));
    nlScale(u6, u6, u6);
    FUN_0c0de000((*(float *)((a4 + 0x25C))));
    t11 = 0x24C;
    if ((*(int *)((a4 + 0x21C))) == 0) {
        t11 = 0x248;
    }
    FUN_0c0c465c((*(int *)((a4 + t11))));
    return nlPopMatrix(0x1);
}
