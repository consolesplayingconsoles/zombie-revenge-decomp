/* Straight-line functions with calls and guards (batch gen_cf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_CopyExtraBufMono(int, int, int, int);
int ADXB_CopyExtraBufSte(int, int, int, int);
int FUN_0c0341a6(int, int);
int FUN_0c034314(int, int, int);
int FUN_0c034b1c(int, int);
float FUN_0c0467c2(int, int, float, float, float, float);
int FUN_0c0d6c6a(int);
int FUN_0c0d6d74(int);
float FUN_0c0da410(int);
int FUN_0c0db840(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e5dc0(void);
int FUN_0c0e5f1c(void);
int FUN_0c0e6118(void);
int FUN_0c0e6248(int);
int FUN_0c22baec(int, int, int, int, int);
int FUN_0c22bbe0(int, int, int, int);
int FUN_0c235ce0(int);
int kmiDiscardRenderPipeline(int, int, int, int);
int kmiFBControl(int, int, int, int);
int kmiResetBoard(void);
int kmiSetTAEnvironment(int, int, int, int, int);
int kmiWriteDispModeRegisters(void);
int kmiWriteRegister(int, int);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int kmChangeDisplayFilterMode(int a4, int a5, int a6, int a7);
int FUN_0c0294e6(int a4, int a5);
int FUN_0c22c262(int a4, int a5, int a6, int a7);
int ADXB_EndDecode(int a4, int a5);
int FUN_0c0d60a6(int a4);
int FUN_0c0359c0(int a4, int a5, int a6, int a7);
int FUN_0c04685c(int a4, int a5, float f4, float f5, float f6, float f7);
struct o250_float { char p[0x250]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o48C_int { char p[0x48C]; int v; };
struct o4B4_float { char p[0x4B4]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o60_float { char p[0x60]; float v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct o0_float { float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o4_float { char p[0x4]; float v; };





int FUN_0c22c262(int a4, int a5, int a6, int a7)
{
    int t12;
    int t13;
    int t45;
    int t17;
    int t19;
    int t21;
    int t27;
    int t32;
    int t33;
    int t20;
    int t31;

    *(volatile int *)((a4 + 0x30));
    *(volatile int *)((a4 + 0x3C));
    *(volatile int *)((a4 + 0x5C));
    *(volatile int *)((a4 + 0x8));
    FUN_0c0e5dc0();
    FUN_0c0e5dc0();
    *(volatile int *)((a4 + 0x58));
    
    FUN_0c0e5dc0();
    
    t12 = FUN_0c0e5dc0();
    t13 = ((t12 * a4) * a5);
    if ((int)((t12 * a4) * a5) < 0) {
        t13 = (((t12 * a4) * a5) + 0x7);
    }
    t45 = 0x0;
    if ((int)(((t13 >> 1) >> 1) >> 1) <= 0) {
    } else {
        t17 = 0xC95FB90;
        if ((*(int *)((a4 + 0x8))) == 4) {
            t17 = 0xC9603B0;
        }
        t19 = t17;
        t21 = 0x0;
        for (;;) {
            if ((int)t21 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t20 = t21;
            t20 = (t20 << 2);
            t20 = (t20 + (a4 + 0x28));
            *(volatile int *)((a4 + 0x58));
            *(volatile int *)((a4 + 0x8));
            t20 = (*(int *)((t20 + 0x0)));
            t20 = (t20 + (FUN_0c0e5dc0()));
            t19 = a4;
            t27 = FUN_0c22baec(t19, t21, ((t17 + 0x20) & 0xFFFFFFE0), t20, (((t13 >> 1) >> 1) >> 1));
            t21 = (t21 + 0x1);
            t19 = t27;
        }
        *(volatile int *)((a4 + 0x8));
        (((struct o60_uint *)(a4))->v) = (((FUN_0c0e5dc0()) << 2) << 1);
        if ((((((struct o58_int *)(a4))->v)) == 0) && (t31 = (((struct o60_int *)(a4))->v), (int)t31 > 0)) {
            t32 = (((t13 >> 1) >> 1) >> 1);
            t33 = 0x0;
            for (;;) {
                if ((int)t33 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                    break;
                }
                t32 = t33;
                *(volatile int *)((a4 + 0x30));
                t32 = (t32 << 2);
                t32 = (t32 + (a4 + 0x28));
                *(volatile int *)((a4 + 0x8));
                t32 = (*(int *)((t32 + 0x0)));
                t32 = (t32 + (FUN_0c0e5dc0()));
                FUN_0c22bbe0(a4, t33, ((t17 + 0x20) & 0xFFFFFFE0), t32);
                t33 = (t33 + 0x1);
            }
        }
        t45 = ((((struct o60_int *)(a4))->v));
    }
    return t45;
}

int ADXB_EndDecode(int a4, int a5)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t12;
    int t14;

    t0 = *(int *)(((a4 + 0x50) + 0x10));
    t1 = *(int *)(((a4 + 0x50) + 0xC));
    *(volatile int *)(((a4 + 0x50) + 0x28));
    t3 = (((struct o40_int *)(a4))->v);
    t4 = *(int *)(((a4 + 0x50) + 0x20));
    t5 = *(int *)(((a4 + 0x50) + 0x14));
    t6 = (((struct o44_int *)(a4))->v);
    t7 = FUN_0c0e5dc0();
    t8 = FUN_0c0e5f1c();
    FUN_0c235ce0((*(int *)((a4 + 0x8))));
    *(volatile int *)(((a4 + 0x50) + 0x8));
    t12 = FUN_0c0e5dc0();
    t14 = t12;
    if ((int)t7 <= (int)a5) {
        t14 = (t12 - ((t0 - t8) - 1));
    }
    (((struct oA0_uint *)(a4))->v) = t14;
    (((struct oA4_uint *)(a4))->v) = (t1 * a5);
    if ((int)(t4 + t14) >= (int)t3) {
        if ((*(int *)(((a4 + 0x50) + 0x8))) == 2) {
            return ADXB_CopyExtraBufSte(t5, t3, t6, ((t4 + t14) - t3));
        }
        return ADXB_CopyExtraBufMono(t5, t3, t6, ((t4 + t14) - t3));
    }
    return 0xA4;
}

int FUN_0c0d60a6(int a4)
{
    int t2;
    int t3;
    int t4;
    int t28;
    int t29;
    int t0;
    int t1;
    int t5;
    int t8;
    int t9;
    int stk[10];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    R1004 = 0xC247594;
    t2 = 0x0;
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)0x2) {
            break;
        }
        t5 = 0x1D4;
        t5 = (t3 * t5);
        t5 = (t5 + 0xC9436B4);
        t1 = (*(int *)((t5 + 0x0)));
        if ((t1 != 0) && (t8 = R1004, t9 = *(int *)((t8 + 0x0)), t9 != 0)) {
            t0 = 0x58;
            t1 = 0x1;
            *(unsigned int *)((t5 + 0x4)) = t1;
            if ((int)(*(int *)((t5 + t0))) > 0) {
                *(unsigned int *)((t5 + t0)) = ((*(int *)((t5 + t0))) - 1);
            } else {
                if ((*(int *)((t5 + t0))) == 0) {
                    t1 = 0x10000;
                    t0 = 0x54;
                    *(unsigned int *)((t5 + t0)) = t1;
                }
            }
            t0 = (FUN_0c0d6c6a(t5));
            t0 = 0x64;
            t1 = (*(int *)((t5 + t0)));
            if ((int)t1 > 0) {
                t1 = (*(int *)((t5 + t0)));
                t1 = (t1 - 1);
                *(unsigned int *)((t5 + t0)) = t1;
            } else {
                if ((*(int *)((t5 + t0))) == 0) {
                    t0 = 0x5C;
                    *(unsigned int *)((t5 + t0)) = 0x0;
                }
            }
            t0 = (FUN_0c0d6d74(t5));
            t1 = 0xC943554;
            t1 = (t1 + (t2 << 2));
            *(unsigned int *)((t1 + 0x0)) = (*(int *)(((0xC249880 + (t2 << 2)) + 0x0)));
            t1 = 0xC249880;
            t1 = (t1 + (t2 << 2));
            t28 = *(int *)((t1 + 0x4));
            t1 = 0xC943554;
            t1 = (t1 + 0x10);
            t1 = (t1 + (t2 << 2));
            *(unsigned int *)(((0xC943554 + (t2 << 2)) + 0x4)) = t28;
            t29 = *(int *)((t1 + 0x0));
            t1 = 0xC943554;
            t1 = (t1 + 0x10);
            t1 = (t1 + (t2 << 2));
            *(unsigned int *)(((0xC249880 + (t2 << 2)) + 0x0)) = t29;
            *(unsigned int *)(((0xC249880 + (t2 << 2)) + 0x4)) = (*(int *)((t1 + 0x4)));
            t1 = (0xC2497E0 + t4);
            t0 = 0x50;
            t0 = (FUN_0c0e6118());
            t1 = 0xC0;
            t1 = (t1 + 0xC943554);
            t1 = (t1 + t4);
            t0 = 0x50;
            t0 = (FUN_0c0e6118());
        }
        t1 = (R1004);
        t3 = (t3 + 0x1);
        t4 = (t4 + 0x50);
        t1 = (t1 + 0x4);
        R1004 = t1;
        t2 = (t2 + 0x2);
    }
    return t0;
}


int FUN_0c04685c(int a4, int a5, float f4, float f5, float f6, float f7)
{
    float u0;
    float t1;
    float u2;
    float u4;
    float u8;
    float u16;
    int t18;
    float t20;
    float u21;
    float u47;

    u0 = (((struct o250_float *)(a4))->v);
    t1 = FUN_0c0467c2(a4, a5, f4, u0, f6, f7);
    u2 = (((struct o0_float *)0xC046980)->v);
    if (((((struct o48C_int *)(a4))->v)) == 54) {
        u4 = (((struct o4_float *)0xC046980)->v);
        if (!(((((struct o34_float *)(a4))->v)) > (u0 + (t1 + u4)))) {
            u8 = ((((struct o4B4_float *)(a4))->v));
            u8 = u8 + u2 * ((((t1 + u4) + u0) - ((((struct o34_float *)(a4))->v))) / (t1 + u4));
            (((struct o4B4_float *)(a4))->v) = u8;
        }
    } else {
        if (!(((((struct o34_float *)(a4))->v)) > (u0 + t1))) {
            u16 = (((struct o34_float *)(a4))->v);
            *(volatile int *)((a4 + 0xBC));
            t18 = FUN_0c0e5dc0();
            t20 = FUN_0c0da410((a4 + (t18 * (*(int *)0xC23A258))));
            u21 = (t20 * f5);
            u21 = u21 + u2 * (((u0 + t1) - u16) / t1);
            (((struct o4B4_float *)(a4))->v) = (((((struct o4B4_float *)(a4))->v)) + u21);
        }
        if (((((struct o34_float *)(a4))->v)) > (u0 + t1)) {
            (((struct o4B4_float *)(a4))->v) = (((((struct o4B4_float *)(a4))->v)) + 0.0f);
        }
    }
    (((struct o4B4_float *)(a4))->v) = (((((struct o4B4_float *)(a4))->v)) - 0.0272199996f);
    u47 = (((struct o1C_float *)0xC046980)->v);
    (((struct o48_float *)(a4))->v) = (((((struct o60_float *)(a4))->v)) * u47);
    (((struct o4C_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) * u47);
    (((struct o50_float *)(a4))->v) = (((((struct o68_float *)(a4))->v)) * u47);
    return nlAddVector((a4 + 0x48), (0x4B0 + a4));
}


