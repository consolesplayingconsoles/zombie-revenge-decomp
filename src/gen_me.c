/* Straight-line functions with calls and guards (batch gen_me): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_uint { char p[0x1E8]; unsigned int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o1FC_uint { char p[0x1FC]; unsigned int v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o238_float { char p[0x238]; float v; };
struct o2B4_int { char p[0x2B4]; int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D4_uint { char p[0x2D4]; unsigned int v; };
struct o2E8_uint { char p[0x2E8]; unsigned int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o3AC_int { char p[0x3AC]; int v; };
struct o3AC_uint { char p[0x3AC]; unsigned int v; };
struct o3D0_int { char p[0x3D0]; int v; };
struct o3D0_uint { char p[0x3D0]; unsigned int v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o6C_ushort { char p[0x6C]; unsigned short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o78_int { char p[0x78]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o90_float { char p[0x90]; float v; };
struct o9A_ushort { char p[0x9A]; unsigned short v; };
struct oA0_ushort { char p[0xA0]; unsigned short v; };
struct oA2_ushort { char p[0xA2]; unsigned short v; };
struct oA4_int { char p[0xA4]; int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c01db0e(int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c06e9cc(int, int);
int FUN_0c06eb08(int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c085704(int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0a8730(void);
int FUN_0c0b3254(int);
int FUN_0c0bbbf4(int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
extern int FUN_0c0e15d4();
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int FUN_0c05cfea(int a4, int a5, int a6);
int FUN_0c0b30f4(int a4);
int FUN_0c06ebc4(int a4, int a5, int a6, int a7);
int FUN_0c0a873c(int a4, int a5, int a6, int a7);
void FUN_0c0a8766(void);
int FUN_0c06eba4(void);
int FUN_0c06ebb4(void);
int FUN_0c06eb84(void);
int FUN_0c06eb94(void);
int FUN_0c05cfe8(int a4, int a5);

int FUN_0c05cfea(int a4, int a5, int a6)
{
    int stk[21];
    register int t1;
    register int t4;
    register int t10;
    register int t37;

    *(unsigned int *)(((int)stk + 0)) = a6;
    t1 = FUN_0c0e19aa(0xC05CB48, 0x2BC, ((((struct o0_int *)0xC23ECE4)->v)));
    FUN_0c0e19d0(t1);
    t4 = FUN_0c0e19aa(0xC08C20E, 0xA4, ((((struct oC_int *)0xC23ECE4)->v)));
    FUN_0c0e19d0(t4);
    nlPushMatrix(0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x3C)) = *(struct mv3 *)(0xC0F9BCC); }
    { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 0) + 0x24)) = *(struct mv6 *)(0xC0F9BD8); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x18)) = *(struct mv3 *)(0xC0F9BF0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC0F9BFC); }
    FUN_0c0dbda0(((((struct o3E4_int *)(a4))->v)));
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x48) + 0x8);
    FUN_0c0a79fa((((int)stk + 0) + 0x48), ((((int)stk + 0) + 0x48) + 0x4), ((((int)stk + 0) + 0x48) + 0x8));
    t10 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 8)) = ((((t10 << 1) + t10) << 2) + (((int)stk + 0) + 0x24));
    FUN_0c0db470(((((t10 << 1) + t10) << 2) + (((int)stk + 0) + 0x24)), (t1 + 0x30));
    FUN_0c0dcca0((*(int *)(((int)stk + 8))));
    FUN_0c0dcc70(0.0f, 1.0f, 16.0f);
    nlGetMatrix((t4 + 0x30));
    nlUnitMatrix();
    nlRotateAY((*(int *)((((((int)stk + 0) + 0x48) + 0x4) + 0x0))));
    nlRotateAX(((((struct o48_int *)(((int)stk + 0)))->v)));
    nlRotateAZ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    FUN_0c0db470((((int)stk + 0) + 0x3C), (t1 + 0x48));
    FUN_0c0a7714((((int)stk + 0) + 0x48), ((((int)stk + 0) + 0x48) + 0x4), ((((struct o48_float *)(t1))->v)), ((((struct o4C_float *)(t1))->v)), ((((struct o50_float *)(t1))->v)));
    (((struct o6E_ushort *)(t1))->v) = (*(int *)((((((int)stk + 0) + 0x48) + 0x4) + 0x0)));
    (((struct o6C_ushort *)(t1))->v) = ((((struct o48_int *)(((int)stk + 0)))->v));
    nlPopMatrix(0x1);
    FUN_0c0cc3f8(0xF28A9, 0x0, 0x0, 0x0);
    t37 = 0x0;
    if ((*(signed char *)((a5 + 0x4))) != 0) {
        t37 = ((((struct o1EC_int *)(a4))->v));
    }
    (((struct o1EC_uint *)(t1))->v) = t37;
    (((struct oBC_uint *)(t1))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct o200_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    (((struct o1E8_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    (((struct o1F4_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    (((struct o204_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    (((struct o1E4_float *)(t1))->v) = ((((struct oC_float *)(a5))->v));
    (((struct o1FC_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    (((struct o1F8_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    (((struct o22C_uint *)(t1))->v) = (unsigned short)(*(short *)((a5 + 0x8)));
    (((struct o220_uint *)(t1))->v) = 0x124E;
    (((struct o238_float *)(t1))->v) = 1.19999993f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    (((struct o9A_ushort *)(t4))->v) = 0x40A;
    (((struct oA2_ushort *)(t4))->v) = 0x1;
    (((struct oA0_ushort *)(t4))->v) = 0x3;
    (((struct o90_float *)(t4))->v) = 1.0f;
    return 0x90;
}

int FUN_0c0b30f4(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t1 = (((struct o3D0_int *)(a4))->v);
    FUN_0c085704(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c01db0e(a4, ((((struct oA4_int *)(a4))->v)));
    FUN_0c0bbbf4(a4);
    t2 = *(short *)((t1 + 0x6));
    if (((short)t2 != 0) && (t0 = (((struct o2B4_int *)(a4))->v), (short)t2 == t0)) {
        if (((((struct o3AC_int *)(a4))->v)) == 0) {
            if ((*(short *)(((t1 + 0xC) + 0x2))) != -1) {
                t0 = *(short *)(((t1 + 0xC) + 0x2));
                t2 = t0;
                if (t0 == -2) {
                } else {
                    (((struct o2C4_uint *)(a4))->v) = (*(short *)(((t1 + 0xC) + 0x2)));
                    (((struct o2E8_uint *)(a4))->v) = (unsigned char)(*(short *)(((t1 + 0xC) + 0xA)));
                    (((struct o3AC_uint *)(a4))->v) = ((*(short *)(((t1 + 0xC) + 0x4))) - 1);
                    if ((unsigned short)(*(short *)(((t1 + 0xC) + 0x8))) != 0xFFFF) {
                        (((struct o6E_ushort *)(a4))->v) = (*(short *)(((t1 + 0xC) + 0x8)));
                    }
                    (((struct o3D0_uint *)(a4))->v) = (t1 + 0xC);
                    (((struct o2CC_uint *)(a4))->v) = 0x1;
                    (((struct o2D4_uint *)(a4))->v) = (*(short *)(((t1 + 0xC) + 0x0)));
                    if (((unsigned short)(*(short *)(((t1 + 0xC) + 0xA))) & 0x100) != 0) {
                        (((struct o20C_uint *)(a4))->v) = 0x20000000;
                    } else {
                        (((struct o20C_uint *)(a4))->v) = 0x40000000;
                    }
                    t2 = 0x20C;
                }
                t0 = t2;
            } else {
                t2 = 0xBC;
                if ((int)((((struct oBC_int *)(a4))->v)) < (int)0x2) {
                    (((struct o2D4_uint *)(a4))->v) = (*(short *)(((t1 + 0xC) + 0x0)));
                    t3 = FUN_0c0b3254(a4);
                    *(unsigned int *)0xC23EDB0 = 0x0;
                    t2 = t3;
                }
                t0 = t2;
            }
            t2 = t0;
        } else {
            (((struct o3AC_uint *)(a4))->v) = (((((struct o3AC_int *)(a4))->v)) - 1);
            (((struct o2CC_uint *)(a4))->v) = 0x1;
            t2 = 0x2CC;
        }
        t0 = t2;
    } else {
        t2 = (((struct o2EC_int *)(a4))->v);
        t3 = t2;
        if ((t2 & 12) != 0) {
            if (((((struct o3AC_int *)(a4))->v)) == 0) {
                t2 = *(short *)(((t1 + 0xC) + 0x2));
                if (t2 == -1) {
                    t4 = 0xBC;
                    if ((int)((((struct oBC_int *)(a4))->v)) < (int)0x2) {
                        (((struct o2D4_uint *)(a4))->v) = (*(short *)(((t1 + 0xC) + 0x0)));
                        t5 = FUN_0c0b3254(a4);
                        *(unsigned int *)0xC23EDB0 = 0x0;
                        t4 = t5;
                    }
                    t5 = t4;
                } else {
                    t4 = t2;
                    if (t2 != -2) {
                        (((struct o2C4_uint *)(a4))->v) = (*(short *)(((t1 + 0xC) + 0x2)));
                        (((struct o2E8_uint *)(a4))->v) = (unsigned char)(*(short *)(((t1 + 0xC) + 0xA)));
                        (((struct o3AC_uint *)(a4))->v) = ((*(short *)(((t1 + 0xC) + 0x4))) - 1);
                        if ((unsigned short)(*(short *)(((t1 + 0xC) + 0x8))) != 0xFFFF) {
                            (((struct o6E_ushort *)(a4))->v) = (*(short *)(((t1 + 0xC) + 0x8)));
                        }
                        (((struct o3D0_uint *)(a4))->v) = (t1 + 0xC);
                        (((struct o2D4_uint *)(a4))->v) = (*(short *)(((t1 + 0xC) + 0x0)));
                        if (((unsigned short)(*(short *)(((t1 + 0xC) + 0xA))) & 0x100) != 0) {
                            (((struct o20C_uint *)(a4))->v) = 0x20000000;
                        } else {
                            (((struct o20C_uint *)(a4))->v) = 0x40000000;
                        }
                        t4 = 0x20C;
                    }
                    t5 = t4;
                }
                t1 = t5;
            } else {
                (((struct o3AC_uint *)(a4))->v) = (((((struct o3AC_int *)(a4))->v)) - 1);
                t1 = 0x3AC;
            }
            t3 = t1;
        }
        t0 = t3;
    }
    return t0;
}

int FUN_0c06ebc4(int a4, int a5, int a6, int a7)
{
    register float u2;

    FUN_0c0685a4(a4, a5, a6, a7);
    u2 = (((struct o40_float *)(((((struct o8C_int *)(a4))->v))))->v);
    FUN_0c0848bc((u2 * (1.0f + 1.0f)), (u2 * (1.0f + 1.0f)), (u2 * (1.0f + 1.0f)));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
    nlPopMatrix(0x1);
    return FUN_0c0849da();
}

int FUN_0c0a873c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = ((int (*)(int, int, int, int))(FUN_0c0e15d4))(((((struct o0_int *)0xC23ECE0)->v)), a5, a6, a7);
    t0 = ((int (*)(int))(FUN_0c0e15d4))(((((struct oC_int *)0xC23ECE0)->v)));
    t0 = ((int (*)(int))(FUN_0c0e15d4))(((((struct o4_int *)0xC23ECE0)->v)));
    t0 = ((int (*)(int))(FUN_0c0e15d4))(((((struct o10_int *)0xC23ECE0)->v)));
    t0 = ((int (*)(int))(FUN_0c0e15d4))(((((struct o14_int *)0xC23ECE0)->v)));
    return FUN_0c0a8730();
}

void FUN_0c0a8766(void)
{
    (((struct o0_uint *)0xC23ED44)->v) = 0x1;
    (((struct o4_uint *)0xC23ED44)->v) = 0x0;
    *(unsigned int *)0xC23EDB0 = 0x0;
}

int FUN_0c06eba4(void)
{
    FUN_0c06e9cc(0xC0FBB3C, 0x2);
    return FUN_0c06eb08(0xC0FBC74, 0x4);
}

int FUN_0c06ebb4(void)
{
    FUN_0c06e9cc(0xC0FBB6C, 0x1);
    return FUN_0c06eb08(0xC0FBCD4, 0x2);
}

int FUN_0c06eb84(void)
{
    FUN_0c06e9cc(0xC0FBADC, 0x2);
    return FUN_0c06eb08(0xC0FBBB4, 0x4);
}

int FUN_0c06eb94(void)
{
    FUN_0c06e9cc(0xC0FBB0C, 0x2);
    return FUN_0c06eb08(0xC0FBC14, 0x4);
}

int FUN_0c05cfe8(int a4, int a5)
{
    return FUN_0c05cfea(a4, a5, 0x0);
}
