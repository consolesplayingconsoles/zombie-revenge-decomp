/* Straight-line functions with calls and guards (batch gen_go): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c01db0e(int, int);
int FUN_0c01e7e8(int, int, int);
float FUN_0c01f172(int);
int FUN_0c054c8a(int);
int FUN_0c056e7a(int);
int FUN_0c058e7c(int, int);
int FUN_0c05a98a(int, int, int);
int FUN_0c081074(int);
int FUN_0c081e0c(int);
int FUN_0c085704(int);
int FUN_0c086b96(int);
extern int FUN_0c08a3d4();
int FUN_0c08d834(int);
int FUN_0c08d840(int, float);
int FUN_0c090bf0(int);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0a78fc(int, int, float, float, float);
int FUN_0c0bbbf4(int);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0c8d06(int);
int FUN_0c0cc054(int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0cf392(int);
int FUN_0c0d8ae0(int);
int FUN_0c0d8ba0(int);
int FUN_0c0d91e0(int);
int FUN_0c0d9a40(int);
int FUN_0c0d9ca0(float);
int FUN_0c0d9dc0(float, float);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int FUN_0c0dd0a0(int, int);
int FUN_0c0ddd20(int, float, float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int);
int FUN_0c0e5dc0(void);
int FUN_0c0e6248(int);
int FUN_0c20e0ba(float);
extern void _builtin_set_imask(int);
int kmInitDevice(int);
int kmSetDisplayMode(int, int, int, int);
int kmSetWaitVsyncCount(int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int sys_init(void);
int FUN_0c05e6dc(int a4, int a5, int a6);
int FUN_0c07d17c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c08b8e0(int a4, int a5);
int FUN_0c0598e4(int a4);
int FUN_0c0553b6(int a4, int a5, int a6);
int FUN_0c0b35e4(int a4);
void FUN_0c08a5e4(int a4, int a5);
int FUN_0c081e8c(int a4);
int FUN_0c087aa0(int a4, int a5, int a6);
void FUN_0c0d8d00(int a4, int a5, int a6);
int FUN_0c05fd8c(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7);
void FUN_0c05b274(int a4, int a5, int a6, int a7, int a8);
int FUN_0c05f1e2(int a4, int a5);

int FUN_0c05e6dc(int a4, int a5, int a6)
{
    int t0;
    int t5;
    int t19;
    int t1;
    int t14;
    int stk[6];

    t0 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t0 - 1);
    if (((int)(t0 - 1) > 0) && (t1 = *(int *)((a4 + 0xD8)), t1 == 0)) {
        if (((*(int *)0xC23A258) & 7) == 0) {
            t5 = FUN_0c0e1830(0xC05E952, 0xB4);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t5 + 0x30)) = *(struct mv3 *)((a4 + 0x30)); }
            FUN_0c0e6248(t5);
            *(unsigned int *)((a4 + 0x78)) = 0x2D0;
            *(unsigned int *)((a4 + 0xA0)) = 0x10;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
        FUN_0c01e7e8(a4, 0xA7F, (*(int *)((a4 + 0xBC))));
        if (((*(int *)((a4 + 0xA8))) != 0) && (t14 = *(int *)((a4 + 0xAC)), (int)t14 <= (int)0x16)) {
            *(float *)((a4 + 0x1E4)) = (*(float *)((a4 + 0x24C)));
            FUN_0c08d834((a4 + 0x30));
            *(unsigned int *)((a4 + 0x23C)) = 0x0;
            *(unsigned int *)((a4 + 0x220)) = 0x344;
            *(float *)((a4 + 0x1E4)) = 30.0f;
            FUN_0c0cc3f8(0x1331A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            t19 = FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0xD);
            *(unsigned int *)((a4 + 0x0)) = 0xC05EE68;
            return t19;
        }
        *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x54 + a4) + 0x0))));
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x58 + a4) + 0x0))));
        *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x5C + a4) + 0x0))));
        *(float *)((a4 + 0x54)) = ((*(float *)((a4 + 0x54))) * 1.06999993f);
        *(float *)((a4 + 0x58)) = ((*(float *)((a4 + 0x58))) * 1.06999993f);
        *(float *)((a4 + 0x5C)) = ((*(float *)((a4 + 0x5C))) * 1.06999993f);
        FUN_0c01cdc2(a4);
        nlPushMatrix(0x0);
        FUN_0c0dcca0((a4 + 0x30));
        nlRotateAY((*(short *)((a4 + 0x6E))));
        nlRotateAX((*(short *)((a4 + 0x6C))));
        FUN_0c0c465c((*(int *)((a4 + 0x220))));
        FUN_0c0dcc70(0.0f, 0.0f, 7.0f);
        nlRotateAX(0xC000);
        nlScale(10.0f, 10.0f, 10.0f);
        FUN_0c0de000(10.0f);
        FUN_0c0c465c((0x281 + ((*(int *)0xC23A258) & 0xF)));
        nlRotateAY(0x4000);
        FUN_0c0de000(10.0f);
        FUN_0c0c465c((0x281 + ((*(int *)0xC23A258) & 0xF)));
        return nlPopMatrix(0x1);
    }
    *(float *)((a4 + 0x1E4)) = (*(float *)((a4 + 0x24C)));
    FUN_0c05a98a(a4, a5, a6);
    if ((*(int *)((a4 + 0xD8))) == 1) {
        FUN_0c054c8a(a4);
        FUN_0c090bf0(a4);
    }
    FUN_0c08d834((a4 + 0x30));
    *(unsigned int *)((a4 + 0x23C)) = 0x0;
    *(unsigned int *)((a4 + 0x220)) = 0x344;
    *(float *)((a4 + 0x1E4)) = 30.0f;
    FUN_0c0cc3f8(0x1331A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    FUN_0c0cc054((*(int *)((a4 + 0xBC))), 0xD);
    *(unsigned int *)((a4 + 0x0)) = 0xC05EE68;
    return FUN_0c08d840((a4 + 0x30), 35.0f);
}



int FUN_0c0598e4(int a4)
{
    float u1;
    float u8;
    int t10;
    float u17;
    int t19;
    int t24;
    float u38;
    int t40;
    int t45;
    float u58;
    int t63;
    int stk[25];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x30)); }
    u1 = -4.0f;
    u1 = u1 + 6.0f * (*(float *)((a4 + 0x25C)));
    *(float *)(((0x64 + a4) + 0x0)) = ((*(float *)(((0x64 + a4) + 0x0))) - u1);
    FUN_0c0dc5a0();
    FUN_0c0dcca0((a4 + 0x60));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    *(float *)(((int)stk + 4)) = 0.0f;
    u8 = -4.0f;
    u8 = u8 + 6.0f * (*(float *)((a4 + 0x25C)));
    *(float *)(((int)stk + 8)) = u8;
    *(float *)(((int)stk + 12)) = 0.0f;
    FUN_0c0db470(((int)stk + 4), (((int)stk + 4) + 0xC));
    t10 = FUN_0c0c8d06((((int)stk + 4) + 0xC));
    if ((int)t10 >= 0) {
        *(float *)((a4 + 0x34)) = (*(float *)(((((int)stk + 4) + 0xC) + 0x4)));
    } else {
        *(float *)(((((int)stk + 4) + 0xC) + 0x4)) = (*(float *)((a4 + 0x34)));
    }
    *(float *)(((int)stk + 4)) = 8.5f;
    u17 = -4.0f;
    u17 = u17 + 6.0f * (*(float *)((a4 + 0x25C)));
    *(float *)(((int)stk + 8)) = u17;
    *(float *)(((int)stk + 12)) = 0.0f;
    FUN_0c0db470(((int)stk + 4), ((((int)stk + 4) + 0xC) + 0xC));
    t19 = FUN_0c0c8d06(((((int)stk + 4) + 0xC) + 0xC));
    if ((int)t19 >= 0) {
        *(unsigned short *)(((0x70 + a4) + 0x0)) = ((FUN_0c0d9ca0((((*(float *)((((((int)stk + 4) + 0xC) + 0xC) + 0x4))) - (*(float *)(((((int)stk + 4) + 0xC) + 0x4)))) / 8.5f))) << 1);
    } else {
        *(float *)(((int)stk + 4)) = -8.5f;
        FUN_0c0db470(((int)stk + 4), ((((int)stk + 4) + 0xC) + 0xC));
        t24 = FUN_0c0c8d06(((((int)stk + 4) + 0xC) + 0xC));
        if ((int)t24 >= 0) {
            *(unsigned short *)(((0x70 + a4) + 0x0)) = ((FUN_0c0d9ca0((((*(float *)((((((int)stk + 4) + 0xC) + 0xC) + 0x4))) - (*(float *)(((((int)stk + 4) + 0xC) + 0x4)))) / -8.5f))) << 1);
        }
    }
    nlRotateAZ((*(short *)((a4 + 0x70))));
    *(float *)(((int)stk + 4)) = 0.0f;
    u38 = -4.0f;
    u38 = u38 + 6.0f * (*(float *)((a4 + 0x25C)));
    *(float *)(((int)stk + 8)) = u38;
    *(float *)(((int)stk + 12)) = 6.0f;
    FUN_0c0db470(((int)stk + 4), ((((int)stk + 4) + 0xC) + 0x18));
    t40 = FUN_0c0c8d06(((((int)stk + 4) + 0xC) + 0x18));
    if ((int)t40 >= 0) {
        *(unsigned short *)(((0x6C + a4) + 0x0)) = (-((FUN_0c0d9ca0((((*(float *)((((((int)stk + 4) + 0xC) + 0x18) + 0x4))) - (*(float *)(((((int)stk + 4) + 0xC) + 0x4)))) / 6.0f))) << 1));
    } else {
        *(float *)(((int)stk + 12)) = -6.0f;
        FUN_0c0db470(((int)stk + 4), ((((int)stk + 4) + 0xC) + 0x18));
        t45 = FUN_0c0c8d06(((((int)stk + 4) + 0xC) + 0x18));
        if ((int)t45 >= 0) {
            *(unsigned short *)(((0x6C + a4) + 0x0)) = (-((FUN_0c0d9ca0((((*(float *)((((((int)stk + 4) + 0xC) + 0x18) + 0x4))) - (*(float *)(((((int)stk + 4) + 0xC) + 0x4)))) / -6.0f))) << 1));
        }
    }
    nlRotateAX((*(short *)((a4 + 0x6C))));
    u58 = *(float *)((a4 + 0x25C));
    nlScale(u58, u58, u58);
    FUN_0c0de000((*(float *)((a4 + 0x25C))));
    t63 = 0x24C;
    if ((*(int *)((a4 + 0x21C))) == 0) {
        t63 = 0x248;
    }
    FUN_0c0c47ae((*(int *)((a4 + t63))));
    return (nlPopMatrix(0x1));
}

int FUN_0c0553b6(int a4, int a5, int a6)
{
    int t67;
    int t21;
    int t2;
    int t5;
    int t8;
    int t16;
    int t33;
    int t44;
    int t22;
    int t4;
    int t12;
    int t13;
    int t14;

    t67 = 0x0;
    if ((int)a4 < (int)0x16) {
    } else {
        t21 = 0x0;
        if ((*(int *)0xC204998) == 1) {
            t2 = FUN_0c0da2e0();
            if (((*(int *)0xC23ED50) == 40) && (t4 = *(int *)0xC1FF6D4, t4 == 0)) {
                *(unsigned int *)0xC1FF884 = ((((int)t2 > (int)0x4E20)) ? 1 : 0);
                t5 = 0x1;
                if ((int)t2 <= (int)0x2710) {
                    t5 = 0x0;
                }
                t12 = t5;
            } else {
                *(unsigned int *)0xC1FF884 = ((((int)t2 > (int)0x4E20)) ? 1 : 0);
                t8 = 0x1;
                if (((int)t2 <= (int)0x7530) && (((int)a4 < (int)0x19) || ((int)a4 >= (int)0x1D))) {
                    t8 = 0x0;
                }
                t12 = t8;
            }
            t16 = 0x0;
            if ((t12 == 1) && ((t13 = *(int *)0xC1FF888, t13 == 1) && (t14 = *(int *)0xC1FF884, t14 == 1))) {
                t16 = 0x1;
            }
            t21 = t16;
            t22 = t2;
        }
        *(unsigned int *)0xC1FF888 = 0x0;
        if (t21 != 0) {
            *(unsigned int *)((((a4 << 2) + 0xC1FF74C) + 0x0)) = 0xC05878C;
        } else {
            *(unsigned int *)((((a4 << 2) + 0xC1FF74C) + 0x0)) = 0xC057142;
        }
        t33 = FUN_0c0e19aa((*(int *)(((a4 << 2) + 0xC1FF74C))), 0x288, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t33);
        if (((*(int *)0xC23A1A8) & 0x100) != 0) {
            FUN_0c0cf392(t33);
        }
        if (t21 == 0) {
            *(unsigned int *)0xC1FF880 = 0x13;
            *(unsigned int *)((t33 + 0xC8)) = 0x40000;
            *(unsigned int *)((t33 + 0x220)) = a4;
            *(unsigned int *)((t33 + 0x228)) = a5;
            *(unsigned int *)((t33 + 0x240)) = (unsigned short)(*(short *)(((a4 << 1) + 0xC1FE8AA)));
            *(unsigned int *)((t33 + 0x224)) = (*(int *)((((a4 - 22) << 2) + 0xC1FF680)));
        } else {
            t44 = FUN_0c058e7c(a4, t22);
            *(unsigned int *)0xC1FF880 = t44;
            *(unsigned int *)((t33 + 0xC8)) = 0x40000;
            *(unsigned int *)((t33 + 0x220)) = t44;
            *(unsigned int *)((t33 + 0x228)) = a5;
            *(unsigned int *)((t33 + 0x240)) = (unsigned short)(*(short *)(((t44 << 1) + 0xC1FF7C0)));
            *(unsigned int *)((t33 + 0x224)) = (*(int *)(((t44 << 2) + 0xC1FF834)));
        }
        if ((*(short *)(((*(int *)0xC23ECFC) + 0x0))) == 3) {
            *(unsigned int *)((t33 + 0x230)) = 0x1;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t33 + 0x30)) = *(struct mv3 *)(a6); }
        if (a5 == 11) {
            *(float *)((t33 + 0x34)) = ((FUN_0c01f172(t33)) + (*(float *)((t33 + 0x258))));
            *(unsigned short *)(((0x6E + t33) + 0x0)) = (FUN_0c0da2e0());
        }
        t67 = t33;
    }
    return t67;
}

int FUN_0c0b35e4(int a4)
{
    int t0;
    int t36;
    int t54;
    int t63;
    int t80;
    int t89;
    int t99;
    int t106;
    int t101;
    int t103;
    int t2;
    int t29;
    int t37;
    int t116;
    int t68;
    int t110;
    int t94;

    t0 = *(int *)((a4 + 0x3D0));
    if (((*(int *)0xC204994) != 0) && (t2 = *(int *)0xC23ED50, t2 == 5)) {
        *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + 5.0f);
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + 0.75f);
    }
    FUN_0c085704(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    if (((*(int *)((a4 + 0x20C))) & 0x20000000) != 0) {
        FUN_0c01db0e(a4, (*(int *)((a4 + 0xA4))));
    } else {
        *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
        *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
        *(float *)((a4 + 0x48)) = 0.0f;
        *(float *)((a4 + 0x4C)) = 0.0f;
        *(float *)((a4 + 0x50)) = 0.0f;
    }
    FUN_0c0bbbf4(a4);
    if (((*(int *)0xC204994) != 0) && (t29 = *(int *)0xC23ED50, t29 == 5)) {
        *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) - 5.0f);
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) - 0.75f);
    }
    t36 = *(short *)((t0 + 0x6));
    if (((short)t36 != 0) && (t37 = *(int *)((a4 + 0x2B4)), (short)t36 == t37)) {
        if ((*(int *)((a4 + 0x3AC))) == 0) {
            t54 = *(short *)(((t0 + 0xC) + 0x2));
            t63 = t54;
            if (t54 != -1) {
                *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (*(short *)(((t0 + 0xC) + 0x2)));
                *(unsigned int *)((a4 + 0x2E8)) = 0x0;
                *(unsigned int *)(((0x3AC + a4) + 0x0)) = ((*(short *)(((t0 + 0xC) + 0x4))) - 1);
                if ((unsigned short)(*(short *)(((t0 + 0xC) + 0x8))) != 0xFFFF) {
                    *(unsigned short *)(((0x6E + a4) + 0x0)) = (*(short *)(((t0 + 0xC) + 0x8)));
                }
                *(unsigned int *)((a4 + 0x3D0)) = (t0 + 0xC);
                *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                *(unsigned int *)((a4 + 0x2D4)) = (*(short *)(((t0 + 0xC) + 0x0)));
                t63 = 0x2D4;
            }
            t68 = t63;
        } else {
            *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) - 1);
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            t68 = 0x2CC;
        }
        t116 = t68;
    } else {
        if (((*(int *)((a4 + 0x2EC))) & 12) != 0) {
            if ((*(int *)((a4 + 0x3AC))) == 0) {
                t80 = *(short *)(((t0 + 0xC) + 0x2));
                t89 = t80;
                if (t80 != -1) {
                    *(unsigned int *)(((0x2C4 + a4) + 0x0)) = (*(short *)(((t0 + 0xC) + 0x2)));
                    *(unsigned int *)((a4 + 0x2E8)) = 0x0;
                    *(unsigned int *)(((0x3AC + a4) + 0x0)) = ((*(short *)(((t0 + 0xC) + 0x4))) - 1);
                    if ((unsigned short)(*(short *)(((t0 + 0xC) + 0x8))) != 0xFFFF) {
                        *(unsigned short *)(((0x6E + a4) + 0x0)) = (*(short *)(((t0 + 0xC) + 0x8)));
                    }
                    *(unsigned int *)((a4 + 0x3D0)) = (t0 + 0xC);
                    *(unsigned int *)((a4 + 0x2D4)) = (*(short *)(((t0 + 0xC) + 0x0)));
                    t89 = 0x2D4;
                }
                t94 = t89;
            } else {
                *(unsigned int *)((a4 + 0x3AC)) = ((*(int *)((a4 + 0x3AC))) - 1);
                t94 = 0x3AC;
            }
            t110 = t94;
        } else {
            t99 = *(int *)((a4 + 0x2EC));
            t106 = t99;
            if ((t99 & 3) != 0) {
                t101 = *(short *)((t0 + 0xA));
                t103 = t101;
                if ((unsigned char)t101 != 0) {
                    *(unsigned int *)((a4 + 0x2E8)) = (unsigned char)(*(short *)((t0 + 0xA)));
                    t103 = 0x2E8;
                }
                t106 = t103;
            }
            t110 = t106;
        }
        t116 = t110;
    }
    return t116;
}


int FUN_0c081e8c(int a4)
{
    int t0;
    int t4;
    int t8;
    int t13;
    float u45;
    int t29;
    float t60;
    float u65;
    float u61;
    float t68;
    float u73;
    float u69;
    int t1;
    int t9;
    int t22;
    int t23;
    float u38;
    float u57;
    int stk[15];

    t0 = *(int *)0xC247CFC;
    if ((((int)t0 >= (int)0x6) && (t0 != 8)) || (t1 = *(int *)((a4 + 0x3F4)), t1 != 0)) {
    } else {
        t4 = ((int (*)(int))((*(int *)((((*(int *)0xC247D6C) << 2) + 0xC1027D8)))))(a4);
    }
    t8 = *(int *)0xC247CFC;
    if ((t8 == 6) && (t9 = *(int *)0xC247D70, t9 != 0)) {
    } else {
        if ((int)t8 > (int)0x7) {
            FUN_0c081074(a4);
        } else {
            t13 = ((int (*)(int))((*(int *)(((*(int *)0xC247CA4) + 0x8)))))(a4);
        }
    }
    if (((*(int *)0xC247CFC) == (*(int *)0xC247D64)) && (t22 = *(int *)0xC247D68, t23 = *(int *)0xC247D00, t23 == t22)) {
    } else {
        *(unsigned int *)((a4 + 0x250)) = ((*(int *)((a4 + 0x250))) | 0x1);
        *(unsigned int *)((a4 + 0x3C8)) = 0x0;
    }
    u45 = 1.0f;
    if ((0x1 & (*(int *)((a4 + 0x250)))) != 0) {
        t29 = *(int *)((a4 + 0x3C8));
        *(unsigned int *)((a4 + 0x3C8)) = (t29 + 0x88);
        if ((int)(t29 + 0x88) >= (int)0x3FFF) {
            *(unsigned int *)((a4 + 0x250)) = ((*(int *)((a4 + 0x250))) & 0xFFFFFFFE);
            *(unsigned int *)((a4 + 0x3C8)) = 0x0;
            u38 = 1.0f;
        } else {
            u38 = (FUN_0c0da410((*(int *)((a4 + 0x3C8)))));
        }
        u45 = u38;
    }
    if ((*(int *)((a4 + 0x3F4))) != 0) {
        *(unsigned int *)((a4 + 0x3F4)) = ((*(int *)((a4 + 0x3F4))) - 1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x254 + a4)) = *(struct mv3 *)((0x260 + a4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x278 + a4)) = *(struct mv3 *)((0x284 + a4)); }
    } else {
        nlSubVector3op(((int)stk + 4), (0x284 + a4), (0x278 + a4));
        nlSubVector3op((((int)stk + 4) + 0xC), (0x260 + a4), (0x254 + a4));
        if (((*(int *)((a4 + 0x250))) & 24) != 0) {
            *(unsigned int *)((a4 + 0x250)) = ((*(int *)((a4 + 0x250))) & 0xFFFFFFE7);
            *(unsigned int *)((a4 + 0x3EC)) = ((*(int *)((a4 + 0x3EC))) + 0x1);
            u57 = (u45 * 1.5f);
        } else {
            *(unsigned int *)((a4 + 0x3EC)) = 0x0;
            u57 = u45;
        }
        t60 = FUN_0c0dcea0(((int)stk + 4));
        u65 = (u57 * 0.099999994f);
        if (!(10.0f > t60)) {
        } else {
            u61 = (u57 * t60);
            u65 = (u61 * 0.00999999978f);
        }
        FUN_0c0dce80(((int)stk + 4), ((int)stk + 4), u65);
        t68 = FUN_0c0dcea0((((int)stk + 4) + 0xC));
        u73 = (u57 * 0.099999994f);
        if (!(10.0f > t68)) {
        } else {
            u69 = (u57 * t68);
            u73 = (u69 * 0.00999999978f);
        }
        FUN_0c0dce80((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC), u73);
        nlAddVector((0x278 + a4), ((int)stk + 4));
        nlAddVector((0x254 + a4), (((int)stk + 4) + 0xC));
    }
    return (FUN_0c081e0c(a4));
}

int FUN_0c087aa0(int a4, int a5, int a6)
{
    int t52;
    int t3;
    float u12;
    float u19;
    int t20;
    int t26;
    float u29;
    int t37;
    int t49;
    int stk[10];

    *(unsigned int *)(((int)stk + 12)) = a6;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC248AD0) = *(struct mv3 *)(a4); }
    FUN_0c0dce80(0xC248AF4, a5, 16.0f);
    FUN_0c01e7e8(0xC248AA0, 0x100, 0xFFFFFFFF);
    t52 = 0xA8;
    if ((*(int *)0xC248B48) == 0) {
    } else {
        t3 = FUN_0c0e1830(0xC087F9C, 0x6C);
        FUN_0c0e19d0(t3);
        FUN_0c0a78fc(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)0xC248B38), (*(float *)0xC248B3C), (*(float *)0xC248B40));
        *(unsigned int *)((t3 + 0x3C)) = 0xC087E3C;
        *(unsigned int *)((t3 + 0x38)) = 0xC0C465C;
        *(float *)((t3 + 0x58)) = 1.0f;
        *(unsigned int *)((t3 + 0x64)) = 0x258;
        FUN_0c0dc5a0();
        FUN_0c0dcca0(0xC248B2C);
        u12 = 0.099999994f;
        u12 = u12 + 3.05185094e-05f * (float)(FUN_0c0da2e0());
        FUN_0c0dce80((t3 + 0x40), 0xC248B38, u12);
        FUN_0c0db470((t3 + 0x40), (t3 + 0x40));
        nlPopMatrix(0x1);
        if ((*(float *)0xC248B3C) > 0.699999988f) {
            *(unsigned int *)(((int)stk + 16)) = ((FUN_0c0da2e0()) & 0x3);
            u19 = 0.699999988f;
            u19 = u19 + 3.96740579e-05f * (float)(FUN_0c0da2e0());
            *(float *)((t3 + 0x54)) = u19;
            t20 = *(int *)(((int)stk + 16));
            *(unsigned int *)((t3 + 0x60)) = (unsigned short)(*(short *)((((t20 << 2) + 0xC10A9C4) + 0x0)));
            *(unsigned int *)(((0x5C + t3) + 0x0)) = (unsigned short)(*(short *)((((t20 << 2) + 0xC10A9C4) + 0x2)));
            *(unsigned short *)((t3 + 0x4C)) = (*(int *)(((int)stk + 4)));
            *(unsigned short *)((t3 + 0x50)) = (*(int *)(((int)stk + 8)));
            *(unsigned short *)((t3 + 0x4E)) = (*(int *)(((int)stk + 12)));
            t37 = ((t20 << 2) + 0xC10A9C4);
        } else {
            t26 = FUN_0c0da2e0();
            u29 = (*(float *)(((((((0x7 & t26) << 1) + (0x7 & t26)) << 2) + 0xC10A9D4) + 0x4)));
            u29 = u29 + 6.10370189e-05f * (float)(FUN_0c0da2e0());
            *(float *)((t3 + 0x54)) = u29;
            *(unsigned int *)((t3 + 0x60)) = (unsigned short)(*(short *)(((((((0x7 & t26) << 1) + (0x7 & t26)) << 2) + 0xC10A9D4) + 0x0)));
            *(unsigned int *)(((0x5C + t3) + 0x0)) = (unsigned short)(*(short *)(((((((0x7 & t26) << 1) + (0x7 & t26)) << 2) + 0xC10A9D4) + 0x2)));
            *(unsigned short *)((t3 + 0x4C)) = 0x3FFF;
            *(unsigned short *)((t3 + 0x50)) = ((*(int *)(((int)stk + 12))) + 0x7FFF);
            *(unsigned short *)((t3 + 0x4E)) = 0x7FFF;
            t37 = 0x7FFF;
        }
        if ((*(int *)0xC23ED84) == 0) {
            *(unsigned int *)((t3 + 0x0)) = 0xC0E19F2;
            t49 = t37;
        } else {
            *(unsigned int *)0xC248DC8 = ((*(int *)0xC248DC8) + 0x1);
            *(unsigned int *)0xC248DCC = ((*(int *)0xC248DCC) + 0x1);
            t49 = 0xC248DCC;
        }
        t52 = (FUN_0c0e19f2(t49));
    }
    return t52;
}

void FUN_0c0d8d00(int a4, int a5, int a6)
{
    int t19;
    float u25;

    _builtin_set_imask(0xE);
    if ((int)(*(int *)0xA05F689C) >= (int)0x8) {
        *(unsigned int *)0xC943E38 = 0x1;
    } else {
        *(unsigned int *)0xC943E38 = 0x0;
    }
    _builtin_set_gbr((void *)(0xC990E80));
    sys_init();
    *(unsigned short *)0xC948280 = 0x0;
    *(unsigned short *)0xC948282 = 0x0;
    if ((0x80 & a5) != 0) {
        *(unsigned short *)0xC948280 = 0x1;
    }
    if ((0x8000 & a5) != 0) {
        *(unsigned short *)0xC948282 = 0x1;
    }
    *(unsigned int *)0xC943EA4 = (*(int *)((((a5 & 0xF) << 2) + 0xC1EA3B4)));
    kmInitDevice((*(int *)((((unsigned char)(((a4 << 1) + a4) << 2) + 0xC1EA2B8) + 0x0))));
    kmSetDisplayMode((*(int *)((((unsigned char)(((a4 << 1) + a4) << 2) + 0xC1EA2B8) + 0x4))), (*(int *)0xC943EA4), (*(short *)0xC948280), (*(short *)0xC948282));
    *(unsigned short *)0xC94827C = (*(short *)((((unsigned char)(((a4 << 1) + a4) << 2) + 0xC1EA2B8) + 0x8)));
    *(unsigned short *)0xC94827E = (*(short *)((((unsigned char)(((a4 << 1) + a4) << 2) + 0xC1EA2B8) + 0xA)));
    FUN_0c0d8ba0(0xC944470);
    FUN_0c0d8ae0(0xC947AB0);
    *(unsigned int *)0xC9480B0 = 0xC947AB0;
    *(unsigned int *)0xC9480B4 = 0x0;
    *(unsigned int *)0xC94826C = 0xFFFFFFFF;
    *(unsigned int *)0xC948274 = 0x0;
    *(unsigned int *)0xC948284 = 0x0;
    *(unsigned int *)0xC948268 = 0x0;
    *(float *)0xC948298 = 0.0f;
    *(float *)0xC94829C = 0.0f;
    *(float *)0xC9482A0 = 0.0f;
    *(float *)0xC9482A4 = 0.0f;
    *(unsigned int *)0xC948288 = 0x0;
    *(unsigned int *)0xC94828C = 0x0;
    *(unsigned int *)0xC948290 = 0x0;
    *(unsigned int *)0xC948294 = 0x0;
    *(float *)0xC990EA8 = 1.0f;
    *(unsigned int *)0xC990EC4 = 0x0;
    t19 = *(short *)0xC94827C;
    u25 = 480.0f;
    if (((*(short *)0xC948282) == 1) && (a4 != 0)) {
    } else {
        u25 = (float)(*(short *)0xC94827E);
    }
    FUN_0c0ddd20(0xC990E80, 0.0f, 0.0f, (float)t19, u25);
    FUN_0c20e0ba((*(float *)0xC0D8F90));
    *(unsigned int *)0xFF000038 = 0xC;
    *(unsigned int *)0xFF00003C = 0xC;
    kmSetWaitVsyncCount(a6);
    FUN_0c0d91e0(0x200000);
    FUN_0c0d9a40(0x0);
    *(unsigned int *)0xC943EAC = 0x0;
    _builtin_set_imask(0x0);
}



int FUN_0c05f1e2(int a4, int a5)
{
    int t0;
    int t2;
    int t9;
    int t17;
    int t18;
    float u34;
    int t23;
    float u26;
    int t21;
    int t22;

    t0 = *(int *)((a4 + 0x348));
    if (t0 != 13) {
        return t0;
    }
    t2 = FUN_0c0e19aa(0xC05F3E0, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t2);
    *(unsigned int *)((t2 + 0xBC)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)(((0x200 + t2) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    t9 = 0x0;
    if ((*(signed char *)((a5 + 0x4))) != 0) {
        t9 = (*(int *)((a4 + 0x1EC)));
    }
    *(unsigned int *)((t2 + 0x1EC)) = t9;
    *(unsigned int *)(((0x1E8 + t2) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t2) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t2) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    *(float *)((t2 + 0x1E4)) = (*(float *)((a5 + 0xC)));
    *(unsigned int *)(((0x1FC + t2) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    *(unsigned int *)((t2 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    t17 = *(int *)((a4 + 0xBC));
    t18 = *(int *)((t2 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)((((((((t17 << 1) + t17) << 2) << 2) << 2) + 0xC23F268) + (((t18 << 1) + t18) << 2))); }
    *(unsigned short *)((t2 + 0x70)) = 0x4000;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x3C)) = *(struct mv3 *)((t2 + 0x30)); }
    *(unsigned int *)((t2 + 0x220)) = 0x125E;
    *(unsigned int *)((t2 + 0xCC)) = (*(int *)((a4 + 0x350)));
    u34 = -0.799999952f;
    if (((int)(*(int *)((a4 + 0xBC))) < (int)0x2) && (t21 = *(int *)((a4 + 0xBC)), t22 = *(int *)(((((((t21 << 2) + t21) << 2) << 2) + 0xC2497E0) + 0x10)), t22 != 0)) {
        t23 = *(int *)(((((((t21 << 2) + t21) << 2) << 2) + 0xC2497E0) + 0x10));
        u26 = (float)(t23 & 0x3F);
        if ((int)(t23 & 0x3F) < 0) {
            u26 = ((float)(t23 & 0x3F) + 4.2949673e+09f);
        }
        u34 = ((-(u26 * 0.0129999993f)) + -0.399999976f);
    }
    FUN_0c0a6800((*(short *)((a4 + 0x6E))), (t2 + 0x60), 0.0f, 0.0f, u34);
    *(float *)((t2 + 0x64)) = (0.0f - (u34 * 0.299999982f));
    return FUN_0c056e7a(a4);
}
