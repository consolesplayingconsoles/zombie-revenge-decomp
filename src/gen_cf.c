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
int _divls(void);
int _modls(void);
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
int FUN_0c22c262(int a4);
int ADXB_EndDecode(int a4);
int FUN_0c0d60a6(int a4);
int FUN_0c0359c0(int a4, int a5, int a6, int a7);
int FUN_0c04685c(int a4, int a5, float f4, float f5, float f6, float f7);
struct o5C_int { char p[0x5C]; int v; };
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





int FUN_0c22c262(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t1 = *(int *)((a4 + 0x30));
    t2 = *(int *)((a4 + 0x8));
    t3 = (int)((int)0x20 / (int)t2);
    t4 = (int)((int)((t1 - (*(int *)((a4 + 0x3C)))) - ((((struct o5C_int *)(a4))->v))) / (int)((t3 << 2) << 1));
    t5 = (((struct o58_int *)(a4))->v);
    t6 = (t4 * ((t3 << 2) << 1));
    if ((int)(t4 * ((t3 << 2) << 1)) >= (int)(t1 - t5)) {
        t6 = (t1 - t5);
    }
    t1 = (int)((int)0x800 / (int)t2);
    t4 = t6;
    if ((int)t6 >= (int)((t1 << 2) << 1)) {
        t4 = ((t1 << 2) << 1);
    }
    t1 = (int)((int)t4 / (int)((t3 << 2) << 1));
    t4 = ((t1 * ((t3 << 2) << 1)) * t2);
    if ((int)((t1 * ((t3 << 2) << 1)) * t2) < 0) {
        t4 = (((t1 * ((t3 << 2) << 1)) * t2) + 0x7);
    }
    t1 = 0x0;
    if ((int)(((t4 >> 1) >> 1) >> 1) > 0) {
        t2 = 0xC95FB90;
        if ((*(int *)((a4 + 0x8))) == 4) {
            t2 = 0xC9603B0;
        }
        t3 = t2;
        t5 = 0x0;
        for (;;) {
            if ((int)t5 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t6 = t5;
            t6 = (t6 << 2);
            t6 = (t6 + (a4 + 0x28));
            t6 = (*(int *)((t6 + 0x0)));
            t6 = (t6 + ((int)((int)(((((struct o58_int *)(a4))->v)) * (*(int *)((a4 + 0x8)))) / (int)0x8)));
            t3 = a4;
            t7 = FUN_0c22baec(t3, t5, ((t2 + 0x20) & 0xFFFFFFE0), t6, (((t4 >> 1) >> 1) >> 1));
            t5 = (t5 + 0x1);
            t3 = t7;
        }
        (((struct o60_uint *)(a4))->v) = ((((int)((int)t3 / (int)(*(int *)((a4 + 0x8))))) << 2) << 1);
        if ((((((struct o58_int *)(a4))->v)) == 0) && (t0 = (((struct o60_int *)(a4))->v), (int)t0 > 0)) {
            t0 = (((t4 >> 1) >> 1) >> 1);
            t3 = 0x0;
            for (;;) {
                if ((int)t3 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                    break;
                }
                t0 = t3;
                t0 = (t0 << 2);
                t0 = (t0 + (a4 + 0x28));
                t0 = (*(int *)((t0 + 0x0)));
                t0 = (t0 + ((int)((int)((*(int *)((a4 + 0x30))) * (*(int *)((a4 + 0x8)))) / (int)0x8)));
                FUN_0c22bbe0(a4, t3, ((t2 + 0x20) & 0xFFFFFFE0), t0);
                t3 = (t3 + 0x1);
            }
        }
        t1 = ((((struct o60_int *)(a4))->v));
    }
    return t1;
}

int ADXB_EndDecode(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t8;
    register int t10;
    register int t12;
    register int t14;

    t0 = *(int *)(((a4 + 0x50) + 0x10));
    t1 = *(int *)(((a4 + 0x50) + 0xC));
    t2 = *(int *)(((a4 + 0x50) + 0x28));
    t3 = (((struct o40_int *)(a4))->v);
    t4 = *(int *)(((a4 + 0x50) + 0x20));
    t5 = *(int *)(((a4 + 0x50) + 0x14));
    t6 = (((struct o44_int *)(a4))->v);
    t8 = (int)((int)((t0 + t2) - 1) % (int)t0);
    t10 = FUN_0c235ce0((*(int *)((a4 + 0x8))));
    t12 = (int)((int)(t0 * t10) / (int)(*(int *)(((a4 + 0x50) + 0x8))));
    t14 = t12;
    if ((int)((int)((int)((t0 + t2) - 1) / (int)t0)) <= (int)t10) {
        t14 = (t12 - ((t0 - t8) - 1));
    }
    (((struct oA0_uint *)(a4))->v) = t14;
    (((struct oA4_uint *)(a4))->v) = (t1 * t10);
    if ((int)(t4 + t14) >= (int)t3) {
        if ((*(int *)(((a4 + 0x50) + 0x8))) == 2) {
            return ADXB_CopyExtraBufSte(t5, t3, t6, ((t4 + t14) - t3));
        }
        return ADXB_CopyExtraBufMono(t5, t3, t6, ((t4 + t14) - t3));
    }
    return 0xA4;
}





