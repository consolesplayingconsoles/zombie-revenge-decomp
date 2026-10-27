/* Straight-line functions with calls and guards (batch gen_fq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[11]; } Stk11;
int FUN_0c01d636(int, int, int);
int FUN_0c0208fc(int, Stk11);
int FUN_0c031fbc(int, int, int);
int FUN_0c0336d6(int, int, int, Stk11);
int FUN_0c0be88a(int, int, int, int);
int FUN_0c0bf88c(int, int, int);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dd0a0(int, int);
int FUN_0c0df9fc(int, int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e5dc0(void);
int FUN_0c0e6248(void);
extern float _builtin_sqrtf(float);
int kmActivateFrameBuffer(int, int, int, int);
int kmCreateFrameBufferSurface(int, int, int, int, int);
int kmCreateTABuffer(int, int);
int kmCreateVertexBuffer(int, int, int, int, int);
int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c058fa0(int a4);
int FUN_0c061214(int a4, int a5);
int FUN_0c0603d0(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7);
int FUN_0c02bfa8(int a4);
int kmiAllocSysConfig(int a4);
int FUN_0c059d72(int a4, int a5, int a6, int a7, int a8, float f4);
int FUN_0c079108(void);
int FUN_0c046b50(void);
int FUN_0c0c4a00(int a4, int a5, int a6, int a7);
int FUN_0c06ecaa(void);
int FUN_0c0c497c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0321d4(int a4, int a5);
void FUN_0c0c65d2(void);
void FUN_0c0c6694(void);
int FUN_0c0bf908(int a4);
int FUN_0c032142(int a4, int a5);

int FUN_0c058fa0(int a4)
{
    int t4;
    int t5;
    int t7;
    int t11;
    int t13;
    int t20;
    int t33;
    int t37;
    int t46;
    int t57;
    int t85;
    int stk[11];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F3;
    int T_;
    R4 = a4;
    L_C058FA0:;
    *(unsigned int *)(((int)stk + 8)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 4)) = ((((unsigned int)R4 >= (unsigned int)0x6C)) ? 1 : 0);
    t4 = R4;
    t5 = R4;
    R0 = (((((unsigned int)R4 >= (unsigned int)0x6C)) ? 1 : 0));
    R4 = (0xC247B84);
    R5 = (0x3);
    R6 = (0xC247B24);
    R7 = t4;
    R8 = t5;
    goto L_C058FCA;
    L_C058FCA:;
    t7 = (*(int *)(((R4 - 24) + 0x0))) != R8;
    R4 = ((R4 - 24));
    if (t7) goto L_C058FD6;
    goto L_C058FD2;
    L_C058FD2:;
    goto L_C059206;
    L_C059206:;
    return R0;
    L_C058FD6:;
    if (((*(int *)((R4 + 0x4))) != 0)) goto L_C058FDE;
    goto L_C058FDC;
    L_C058FDC:;
    *(unsigned int *)(((int)stk + 8)) = R5;
    goto L_C058FDE;
    L_C058FDE:;
    t11 = (int)(R5 - 1) >= 0;
    R5 = ((R5 - 1));
    if (t11) goto L_C058FCA;
    goto L_C058FE4;
    L_C058FE4:;
    t13 = *(int *)(((int)stk + 8));
    R0 = (t13);
    if ((t13 != -1)) goto L_C058FEE;
    goto L_C058FEA;
    L_C058FEA:;
    goto L_C059206;
    L_C058FEE:;
    if (((*(int *)(((int)stk + 4))) == 0)) goto L_C058FF8;
    goto L_C058FF4;
    L_C058FF4:;
    R8 = ((*(int *)0xC23ED50));
    goto L_C058FF8;
    L_C058FF8:;
    t20 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((((((t20 << 1) + t20) << 2) << 1) + R6) + 0x0)) = R8;
    R4 = (((R8 << 2) + 0xC1FF940));
    R9 = ((((((t20 << 1) + t20) << 2) << 1) + R6));
    if (((*(int *)((((R8 << 2) + 0xC1FF940) + 0x0))) != 0)) goto L_C059020;
    goto L_C059016;
    L_C059016:;
    if (((*(int *)(((int)stk + 4))) != 0)) goto L_C059020;
    goto L_C05901C;
    L_C05901C:;
    goto L_C059206;
    L_C059020:;
    R10 = (0x0);
    if (((*(int *)(((int)stk + 4))) != 0)) goto L_C05902C;
    goto L_C059028;
    L_C059028:;
    R13 = ((*(int *)((R4 + 0x0))));
    goto L_C05902E;
    L_C05902E:;
    R11 = (0x1);
    goto L_C0591FC;
    L_C0591FC:;
    t33 = *(short *)((R13 + 0x12));
    R0 = (t33);
    if ((t33 == 0)) goto L_C059206;
    goto L_C059202;
    L_C059202:;
    goto L_C059040;
    L_C059040:;
    t37 = FUN_0c0e19aa(0xC05921E, 0x290, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t37);
    *(unsigned int *)((t37 + 0x220)) = R8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t37 + 0x30)) = *(struct mv3 *)(R13); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t37 + 0x3C)) = *(struct mv3 *)(R13); }
    FUN_0c0e6248();
    *(unsigned int *)(((0x264 + t37) + 0x0)) = (*(short *)((R13 + 0x12)));
    R14 = (t37);
    R4 = (R10);
    R5 = (R10);
    goto L_C05908A;
    L_C05908A:;
    *(unsigned int *)((((0x224 + R14) + R4) + 0x0)) = (*(int *)((((R13 + 0x18) + R5) + 0x0)));
    *(unsigned int *)((((0x234 + R14) + R4) + 0x0)) = (*(int *)((((R13 + 0x18) + R5) + 0x4)));
    t46 = (unsigned int)(R4 + 0x4) < (unsigned int)0x10;
    R4 = ((R4 + 0x4));
    R5 = ((R5 + 0x8));
    if (t46) goto L_C05908A;
    goto L_C0590B4;
    L_C0590B4:;
    if (((*(short *)(((*(int *)0xC23ECFC) + 0x0))) != 3)) goto L_C0590C2;
    goto L_C0590BE;
    L_C0590BE:;
    *(unsigned int *)((R14 + 0x244)) = R11;
    goto L_C0590C2;
    L_C0590C2:;
    *(unsigned int *)((R14 + 0xF0)) = (*(int *)((R13 + 0x38)));
    *(unsigned int *)((R14 + 0x268)) = (*(short *)((R13 + 0x3C)));
    *(unsigned int *)((R14 + 0x26C)) = (*(short *)((R13 + 0x3E)));
    *(unsigned int *)((R14 + 0x288)) = (*(int *)((R13 + 0x14)));
    t57 = *(int *)((((*(short *)((R13 + 0x12))) << 2) + 0xC0F8E70));
    *(unsigned int *)((R14 + 0x284)) = t57;
    *(unsigned int *)((R14 + 0x248)) = (*(int *)((t57 + 0x0)));
    *(unsigned int *)((R14 + 0x24C)) = (*(int *)((t57 + 0x4)));
    *(float *)((R14 + 0x25C)) = (*(float *)((t57 + 0x8)));
    *(unsigned int *)((R14 + 0x78)) = (*(int *)((t57 + 0x10)));
    *(unsigned int *)((R14 + 0x74)) = 0x15;
    *(unsigned int *)((R14 + 0xC0)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)((R14 + 0xBC)) = ((*(int *)((R9 + 0x4))) + 0x10);
    *(unsigned int *)(((((*(int *)((R9 + 0x4))) << 2) + (R9 + 0x8)) + 0x0)) = R14;
    *(unsigned int *)((R14 + 0xC8)) = 0x20000;
    *(float *)((R14 + 0x1B8)) = (*(float *)((t57 + 0x14)));
    *(unsigned int *)((R14 + 0x270)) = ((*(int *)((R14 + 0x270))) | R11);
    R12 = (t57);
    if ((((*(int *)0xC23A1A8) & 0x101) == 0)) goto L_C059164;
    goto L_C059146;
    L_C059146:;
    if (((*(int *)(((int)stk + 4))) == 0)) goto L_C059164;
    goto L_C05914C;
    L_C05914C:;
    *(unsigned int *)((R14 + 0x28C)) = R11;
    *(unsigned int *)((R14 + 0x1EC)) = 0xFFFFFFF0;
    *(float *)((R14 + 0x1E4)) = (*(float *)((R14 + 0x1B8)));
    *(unsigned int *)((R14 + 0x200)) = 0xFFFFFFFF;
    goto L_C059164;
    L_C059164:;
    if (((*(int *)((R14 + 0x28C))) != 0)) goto L_C0591D8;
    goto L_C05916C;
    L_C05916C:;
    if (((*(int *)((R12 + 0x18))) == 0)) goto L_C0591D8;
    goto L_C059172;
    L_C059172:;
    FUN_0c01d636(R14, (*(int *)((R12 + 0x18))), 0x0);
    R0 = (0x270);
    R2 = ((*(int *)((R14 + 0x270))));
    R3 = (0x2);
    goto L_C0591D4;
    L_C0591D4:;
    *(unsigned int *)((R14 + R0)) = (R2 | R3);
    goto L_C0591D8;
    L_C0591D8:;
    if ((((*(int *)((R12 + 0x1C))) & 2) == 0)) goto L_C0591E6;
    goto L_C0591DE;
    L_C0591DE:;
    *(unsigned int *)((R14 + 0x1F8)) = 0x3;
    goto L_C0591EA;
    L_C0591EA:;
    *(unsigned int *)((R14 + 0x21C)) = R10;
    t85 = *(int *)((R9 + 0x4));
    *(unsigned int *)((R9 + 0x4)) = (t85 + 0x1);
    R0 = (0x21C);
    R13 = ((R13 + 0x40));
    if (((int)(t85 + 0x1) >= (int)0x4)) goto L_C059206;
    goto L_C0591FC;
    L_C0591E6:;
    *(unsigned int *)((R14 + 0x1F8)) = R11;
    goto L_C0591EA;
    L_C05902C:;
    R13 = (R7);
    goto L_C05902E;
}

int FUN_0c061214(int a4, int a5)
{
    int t1;
    int t10;
    int t12;
    int t24;
    int t25;
    int t14;
    int stk[18];

    t1 = FUN_0c0e19aa(0xC060F76, 0x2BC, (*(int *)0xC23ECE4));
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
    t24 = *(int *)((a4 + 0xBC));
    t25 = *(int *)((a4 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((((((((t24 << 1) + t24) << 2) << 2) << 2) + 0xC23F268) + (((t25 << 1) + t25) << 2))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    *(unsigned int *)((t1 + 0x220)) = 0x4F;
    *(float *)((t1 + 0x24C)) = 40.0f;
    *(float *)((t1 + 0x250)) = 0.649999976f;
    *(float *)((t1 + 0x254)) = 1.02499998f;
    nlPushMatrix(0x0);
    FUN_0c0dbda0(((*(int *)((a4 + 0x3E4))) + 0x100));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = (-(*(float *)((t1 + 0x250))));
    *(float *)(((int)stk + 24)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)((((((int)stk + 4) + 0x18) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((((int)stk + 4) + 0x18) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    *(float *)((t1 + 0x48)) = ((*(float *)(((((int)stk + 4) + 0x18) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x24) + 0x0))));
    *(float *)((t1 + 0x4C)) = ((*(float *)(((((int)stk + 4) + 0x18) + 0x4))) - (*(float *)(((((int)stk + 4) + 0x24) + 0x4))));
    *(float *)((t1 + 0x50)) = ((*(float *)(((((int)stk + 4) + 0x18) + 0x8))) - (*(float *)(((((int)stk + 4) + 0x24) + 0x8))));
    return 0x50;
}

int FUN_0c0603d0(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7)
{
    int t1;
    int t10;
    int t12;
    int t23;
    int t24;
    int t25;
    int t14;

    t1 = FUN_0c0e19aa(0xC06078C, 0x2BC, (*(int *)0xC23ECE4));
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
    t23 = *(short *)((a5 + 0x8));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = (((unsigned short)t23 << 1) + (unsigned short)t23);
    t24 = *(int *)((a4 + 0xBC));
    t25 = *(int *)((t1 + 0x1E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((((((((t24 << 1) + t24) << 2) << 2) << 2) + 0xC23F268) + (((t25 << 1) + t25) << 2))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    *(unsigned int *)((t1 + 0x220)) = 0x291;
    *(unsigned int *)((t1 + 0x244)) = 0x0;
    *(float *)((t1 + 0x24C)) = f5;
    *(float *)((t1 + 0x250)) = f6;
    *(float *)((t1 + 0x254)) = f7;
    *(unsigned int *)((t1 + 0x248)) = a8;
    if ((int)a8 > (int)0x8) {
        *(unsigned int *)((t1 + 0x248)) = 0x8;
    }
    *(unsigned short *)((t1 + 0x6C)) = a6;
    *(unsigned short *)((t1 + 0x6E)) = (a7 + (*(short *)((a4 + 0x6E))));
    *(unsigned short *)((t1 + 0x70)) = 0x0;
    FUN_0c0dc5a0();
    nlRotateAY((*(short *)((t1 + 0x6E))));
    nlRotateAX((*(short *)((t1 + 0x6C))));
    nlRotateAZ((*(short *)((t1 + 0x70))));
    FUN_0c0dcc70(0.0f, 0.0f, (-f4));
    FUN_0c0db840((t1 + 0x48));
    nlPopMatrix(0x1);
    FUN_0c0cbafc(0x291, 0x2, 0xFC007000, 0x84002000);
    return FUN_0c0cc3f8(0x432A9);
}

int FUN_0c02bfa8(int a4)
{
    int t2;
    int t23;
    int t26;
    int t35;
    int t38;
    int t41;
    int t50;
    int t53;
    float u54;
    int t55;
    int stk[30];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R11;
    int R12;
    int R13;
    int R14;
    float F3;
    float F12;
    float F13;
    int T_;
    R4 = a4;
    L_C02BFA8:;
    *(volatile int *)((R4 + 0x304));
    *(volatile int *)((R4 + 0x308));
    t2 = FUN_0c0e5dc0();
    { struct mv11 { int w[11]; }; *(struct mv11 *)((((int)stk + 4) + 0x2C)) = *(struct mv11 *)(0xC0F54DC); }
    { struct mv11 { int w[11]; }; *(struct mv11 *)(((int)stk + 4)) = *(struct mv11 *)(0xC0F5508); }
    R11 = ((((int)stk + 4) + 0x2C));
    R12 = (0x0);
    R13 = (t2);
    R14 = (R4);
    if (((int)(*(int *)((R4 + 0x304))) > 0)) goto L_C02C014;
    goto L_C02BFF4;
    L_C02BFF4:;
    R0 = (0x474);
    goto L_C02C13E;
    L_C02C13E:;
    *(unsigned int *)((R14 + R0)) = R12;
    goto L_C02C140;
    L_C02C140:;
    return R0;
    L_C02C014:;
    R4 = (0x5);
    R5 = (0xC246FF0);
    R6 = (0xC246A3C);
    if (((int)((*(int *)0xC247074) + (*(int *)0xC246A3C)) >= (int)0x5)) goto L_C02C036;
    goto L_C02C02A;
    L_C02C02A:;
    if (((int)R13 > (int)0x8)) goto L_C02C036;
    goto L_C02C030;
    L_C02C030:;
    if (((int)R13 >= (int)0x3)) goto L_C02C03A;
    goto L_C02C036;
    L_C02C036:;
    *(unsigned int *)((R14 + 0x574)) = R13;
    goto L_C02C03A;
    L_C02C03A:;
    if (((*(int *)((R14 + 0x574))) == R13)) goto L_C02C06A;
    goto L_C02C042;
    L_C02C042:;
    if (((int)((*(int *)((R5 + 0x84))) + (*(int *)((R6 + 0x0)))) >= (int)R4)) goto L_C02C06A;
    goto L_C02C04E;
    L_C02C04E:;
    t23 = *(int *)((R14 + 0x3A4));
    *(unsigned int *)((R14 + 0x3A4)) = (t23 - 1);
    if (((int)(t23 - 1) >= 0)) goto L_C02C06A;
    goto L_C02C05A;
    L_C02C05A:;
    FUN_0c0336d6(R14, 0x0, 0x0, *(Stk11 *)(((int)stk + 4)));
    *(unsigned int *)((R14 + 0x3A4)) = 0x3C;
    goto L_C02C06A;
    L_C02C06A:;
    t26 = *(int *)((R14 + 0x4F8));
    R0 = (t26);
    R4 = (t26);
    if ((t26 == 12)) goto L_C02C140;
    goto L_C02C074;
    L_C02C074:;
    R0 = (R4);
    if ((R4 == 13)) goto L_C02C140;
    goto L_C02C07C;
    L_C02C07C:;
    R0 = (0x20C);
    if ((((*(int *)((R14 + 0x20C))) & 0x80000) != 0)) goto L_C02C140;
    goto L_C02C086;
    L_C02C086:;
    t35 = *(int *)((R14 + 0x4C8));
    R0 = (t35);
    if ((t35 == 9)) goto L_C02C140;
    goto L_C02C08E;
    L_C02C08E:;
    t38 = *(int *)((R14 + 0x4C8));
    R0 = (t38);
    if ((t38 == 2)) goto L_C02C140;
    goto L_C02C096;
    L_C02C096:;
    t41 = *(int *)((R14 + 0x560));
    R0 = (t41);
    R4 = (t41);
    if ((t41 == 8)) goto L_C02C140;
    goto L_C02C0A0;
    L_C02C0A0:;
    R0 = (R4);
    if ((R4 == 9)) goto L_C02C140;
    goto L_C02C0A8;
    L_C02C0A8:;
    t50 = !((float)(*(int *)((R14 + 0x310))) > ((*(float *)((R11 + (R13 << 2)))) + (float)((FUN_0c0da2e0()) & 0x3)));
    if (t50) goto L_C02C10C;
    goto L_C02C0CA;
    L_C02C0CA:;
    *(unsigned int *)((R14 + 0x4D0)) = R12;
    *(unsigned int *)((R14 + 0x4F8)) = 0xC;
    *(unsigned int *)((R14 + 0x568)) = (*(int *)((R14 + 0x310)));
    R0 = (0x310);
    goto L_C02C13E;
    L_C02C10C:;
    t53 = *(int *)((R14 + 0x564));
    u54 = *(float *)((R11 + (R13 << 2)));
    t55 = FUN_0c0da2e0();
    R0 = ((t55 & 0x3));
    if ((!((float)t53 > (u54 + (float)(t55 & 0x3))))) goto L_C02C140;
    goto L_C02C12E;
    L_C02C12E:;
    *(unsigned int *)((R14 + 0x4D0)) = R12;
    *(unsigned int *)((R14 + 0x4F8)) = 0xC;
    *(unsigned int *)((R14 + 0x564)) = R12;
    R0 = (0x56C);
    goto L_C02C13E;
}

int kmiAllocSysConfig(int a4)
{
    int t4;
    int t9;
    int t16;
    int t30;
    int t35;
    int t39;
    int t46;
    int t58;
    int stk[11];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    L_C21EA80:;
    *(unsigned int *)(((int)stk + 8)) = R4;
    R11 = (0x2);
    R14 = (0xC9528EC);
    if ((R4 != 1)) goto L_C21EAB6;
    goto L_C21EA9E;
    L_C21EA9E:;
    t4 = (*(int *)((R14 + 0x10)));
    *(int *)((int)stk + 4) = t4;
    t9 = kmCreateVertexBuffer((*(int *)((R14 + 0x0))), (*(int *)((R14 + 0x4))), (*(int *)((R14 + 0x8))), (*(int *)((R14 + 0xC))), t4);
    R4 = (t9);
    if ((t9 != 0)) goto L_C21EB04;
    goto L_C21EAB6;
    L_C21EAB6:;
    if (((*(int *)(((int)stk + 8))) != 2)) goto L_C21EACC;
    goto L_C21EABC;
    L_C21EABC:;
    t16 = kmCreateTABuffer((*(int *)((R14 + 0x0))), (*(int *)((R14 + 0x58))));
    R4 = (t16);
    if ((t16 != 0)) goto L_C21EB04;
    goto L_C21EACC;
    L_C21EACC:;
    R4 = ((R14 + 0x1C));
    R8 = (0x1);
    if (((*(int *)(((R14 + 0x1C) + 0x0))) != (*(int *)(((R14 + 0x1C) + 0x10))))) goto L_C21EADC;
    goto L_C21EADA;
    L_C21EADA:;
    R11 = (R8);
    goto L_C21EADC;
    L_C21EADC:;
    R10 = (0x0);
    R12 = (0x0);
    if (((unsigned int)0x0 >= (unsigned int)R11)) goto L_C21EB48;
    goto L_C21EAE6;
    L_C21EAE6:;
    R9 = (0xC218A00);
    goto L_C21EAE8;
    L_C21EAE8:;
    t30 = (*(int *)((((R14 + 0x1C) + R12) + 0xC)));
    *(int *)((int)stk + 4) = t30;
    t35 = kmCreateFrameBufferSurface((*(int *)((((R14 + 0x1C) + R12) + 0x0))), (*(int *)((((R14 + 0x1C) + R12) + 0x4))), (*(int *)((((R14 + 0x1C) + R12) + 0x8))), (*(int *)((R14 + 0x18))), t30);
    R4 = (t35);
    if ((t35 == 0)) goto L_C21EB40;
    goto L_C21EB04;
    L_C21EB04:;
    R0 = (R4);
    goto L_C21EBEC;
    L_C21EBEC:;
    return R0;
    L_C21EB40:;
    t39 = (unsigned int)(R10 + 0x1) < (unsigned int)R11;
    R10 = ((R10 + 0x1));
    R12 = ((R12 + 0x10));
    if (t39) goto L_C21EAE8;
    goto L_C21EB48;
    L_C21EB48:;
    t46 = kmActivateFrameBuffer((*(int *)((R14 + 0x3C))), (*(int *)((R14 + 0x40))), (*(int *)((R14 + 0x18))), (*(int *)((R14 + 0x44))));
    R13 = (t46);
    if ((t46 != 0)) goto L_C21EBEA;
    goto L_C21EB5E;
    L_C21EB5E:;
    if (((*(int *)0xC952640) == 1)) goto L_C21EB6E;
    goto L_C21EB66;
    L_C21EB66:;
    if (((*(int *)0xC239C70) != 1)) goto L_C21EBEA;
    goto L_C21EB6E;
    L_C21EB6E:;
    *(unsigned int *)0xC952660 = (*(int *)0xC952658);
    *(unsigned int *)((((*(int *)0xC952658) << 2) + 0xC952648)) = 0x0;
    *(unsigned int *)0xC952670 = R8;
    *(unsigned int *)(((int)stk + 8)) = (R8 & (*(int *)0xC952658));
    kmiWriteRegister(0x8, 0x1);
    kmiWriteRegister(0x8, 0x0);
    t58 = *(int *)(((int)stk + 8));
    kmiWriteRegister(0x124, (*(int *)(((((t58 << 2) << 2) << 1) + 0xC952774))));
    kmiWriteRegister(0x12C, (*(int *)(((((t58 << 2) << 2) << 1) + 0xC952778))));
    kmiWriteRegister(0x128, (*(int *)(((((t58 << 2) << 2) << 1) + 0xC952780))));
    kmiWriteRegister(0x130, (*(int *)(((((t58 << 2) << 2) << 1) + 0xC952784))));
    kmiWriteRegister(0x164, (*(int *)(((((t58 << 2) << 2) << 1) + 0xC95277C))));
    kmiWriteRegister(0x144, 0x80000000);
    kmiReadRegister(0x144);
    *(unsigned int *)0xC952668 = 0x0;
    *(unsigned int *)0xC952664 = (*(int *)0xC952764);
    R14 = (0xC218DA4);
    goto L_C21EBEA;
    L_C21EBEA:;
    R0 = (R13);
    goto L_C21EBEC;
}

int FUN_0c059d72(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int t1;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    int stk[15];

    *(float *)(((int)stk + 12)) = f4;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t1 = FUN_0c0e19aa(0xC059B98, 0xB4, (*(int *)0xC23ECE4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(a5); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x54)) = *(struct mv3 *)((a4 + 0x30)); }
    *(unsigned short *)((t1 + 0x60)) = 0x0;
    *(unsigned short *)(((0x62 + t1) + 0x0)) = (*(short *)((a5 + 0xC)));
    *(unsigned short *)((t1 + 0x64)) = 0x0;
    *(unsigned int *)(((t1 + 0x68) + 0x0)) = (*(short *)((a4 + 0x6C)));
    *(unsigned int *)((t1 + 0x6C)) = (*(short *)((a4 + 0x6E)));
    *(unsigned int *)((t1 + 0x70)) = (*(short *)((a4 + 0x70)));
    *(float *)((t1 + 0x74)) = (*(float *)((a4 + 0x25C)));
    *(unsigned int *)(((0x78 + t1) + 0x0)) = (*(short *)((a5 + 0xE)));
    *(unsigned int *)((t1 + 0x80)) = 0x0;
    *(unsigned int *)((t1 + 0xA0)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)((t1 + 0xA4)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((0x84 + t1) + 0x0)) = ((*(short *)((a5 + 0xE))) & 0x1);
    *(float *)((t1 + 0x94)) = (*(float *)(((int)stk + 12)));
    if (a8 != 0) {
        *(unsigned int *)((t1 + 0x8C)) = a8;
    } else {
        *(unsigned int *)((t1 + 0x8C)) = 0xC0F9B34;
    }
    u14 = *(float *)((a5 + 0x0));
    u15 = *(float *)((a5 + 0x4));
    u16 = *(float *)((a5 + 0x8));
    u17 = (u15 * u15);
    u17 = u17 + u14 * u14;
    *(unsigned int *)(((int)stk + 4)) = 0x888;
    u18 = u17;
    u18 = u18 + u16 * u16;
    *(float *)((t1 + 0x48)) = ((1.0f * (*(float *)((a5 + 0x0)))) / _builtin_sqrtf(u18));
    *(float *)((t1 + 0x4C)) = ((1.0f * (*(float *)((a5 + 0x4)))) / _builtin_sqrtf(u18));
    *(float *)((t1 + 0x50)) = ((1.0f * (*(float *)((a5 + 0x8)))) / _builtin_sqrtf(u18));
    *(float *)((t1 + 0x90)) = 1.0f;
    *(float *)(((int)stk + 28)) = (-(*(float *)((t1 + 0x50))));
    *(float *)(((int)stk + 32)) = (*(float *)((t1 + 0x4C)));
    *(float *)(((int)stk + 36)) = (*(float *)((t1 + 0x48)));
    FUN_0c0dd0a0((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
    *(float *)(((t1 + 0x48) + 0x0)) = (*(float *)(((int)stk + 16)));
    *(float *)(((t1 + 0x4C) + 0x0)) = (*(float *)(((int)stk + 20)));
    *(float *)(((t1 + 0x50) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(unsigned int *)((t1 + 0x98)) = 0x0;
    *(unsigned int *)((t1 + 0x9C)) = (*(int *)(((int)stk + 4)));
    return 0x9C;
}

int FUN_0c079108(void)
{
    float u0;
    int t1;
    int t2;
    int t3;
    int t5;

    u0 = *(float *)0xC0791EC;
    t1 = 0x0;
    t2 = 0x10;
    t3 = 0xC10014C;
    for (;;) {
        t5 = FUN_0c0e19aa(0xC078DC2, 0x228, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t5);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t5 + 0x30)) = *(struct mv3 *)(t3); }
        FUN_0c0e6248();
        t1 = (t1 + 0x1);
        *(unsigned int *)(((0x220 + t5) + 0x0)) = (*(short *)((t3 + 0x12)));
        t3 = (t3 + 0x18);
        *(unsigned int *)((t5 + 0xBC)) = t2;
        *(unsigned int *)((t5 + 0xC8)) = 0x20000;
        *(float *)((t5 + 0x1B8)) = u0;
        t2 = (t2 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)0x2) {
            break;
        }
    }
    return 0x1B8;
}

int FUN_0c046b50(void)
{
    int t0;
    int t1;
    int t3;
    int stk[17];

    t0 = 0xC0F6644;
    for (;;) {
        t1 = t0;
        t0 = (t0 + 0x2C);
        { struct mv11 { int w[11]; }; *(struct mv11 *)(((int)stk + 4)) = *(struct mv11 *)(t1); }
        *(unsigned short *)(((int)stk + 36)) = (*(int *)0xC23ED50);
        t3 = FUN_0c0208fc(((int)stk + 4), *(Stk11 *)(((int)stk + 4)));
        if ((unsigned int)t0 >= (unsigned int)0xC0F66C8) {
            break;
        }
    }
    return t3;
}

int FUN_0c0c4a00(int a4, int a5, int a6, int a7)
{
    int stk[15];

    *(unsigned int *)(((int)stk + 4)) = a4;
    { struct mv10 { int w[10]; }; *(struct mv10 *)((((int)stk + 4) + 0x4)) = *(struct mv10 *)(0xC1E51CC); }
    *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = 1.0f;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = (*(int *)(((((int)stk + 4) + 0x2C) + 0x0)));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x14)) = (*(int *)(((((int)stk + 4) + 0x2C) + 0x0)));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x20)) = (*(int *)(((((int)stk + 4) + 0x2C) + 0x0)));
    return (FUN_0c0be88a((*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x4), a6, a7));
}

int FUN_0c06ecaa(void)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC06EBC4, 0xB4, (*(int *)0xC23ECE4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(0xC0FBD14); }
    *(unsigned int *)((t1 + 0x78)) = (*(int *)0xC0FBD20);
    *(unsigned int *)((t1 + 0x8C)) = 0xC247ED8;
    return 0x8C;
}

int FUN_0c0c497c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[12];

    *(unsigned short *)(((int)stk + 4)) = a4;
    { struct mv7 { int w[7]; }; *(struct mv7 *)((((int)stk + 4) + 0x4)) = *(struct mv7 *)(0xC1E516C); }
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = f4;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x14)) = (*(int *)(((((int)stk + 4) + 0x20) + 0x0)));
    return (FUN_0c0be88a((unsigned short)(*(short *)(((int)stk + 4))), (((int)stk + 4) + 0x4), a6, a7));
}

int FUN_0c0321d4(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x53C)) = (*(int *)(((((a5 << 2) << 2) + 0xC1F3134) + 0x0)));
    *(unsigned int *)((a4 + 0x540)) = (*(int *)((a4 + 0x53C)));
    *(unsigned int *)((a4 + 0x55C)) = ((*(int *)(((((a5 << 2) << 2) + 0xC1F3134) + 0x4))) * (*(int *)0xC247070));
    return FUN_0c031fbc(a4, a5, (((a5 << 2) << 2) + 0xC1F3134));
}

void FUN_0c0c65d2(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0C664C, 0x70);
    FUN_0c0e19d0(t0);
    { struct mv14 { int w[14]; }; *(struct mv14 *)((t0 + 0x30)) = *(struct mv14 *)(0xC1E96E0); }
}

void FUN_0c0c6694(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0C66BA, 0x70);
    FUN_0c0e19d0(t0);
    { struct mv14 { int w[14]; }; *(struct mv14 *)((t0 + 0x30)) = *(struct mv14 *)(0xC1E9718); }
}

int FUN_0c0bf908(int a4)
{
    int stk[5];

    *(unsigned int *)(((int)stk + 12)) = a4;
    FUN_0c0bf88c(((int)stk + 4), (((int)stk + 4) + 0x4), a4);
    return (FUN_0c0df9fc((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8)))));
}

int FUN_0c032142(int a4, int a5)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)((a4 + 0x53C));
    t1 = *(int *)((a4 + 0x540));
    t2 = *(short *)(((((a5 << 2) << 1) + (t1 + 0xC)) + 0x0));
    *(unsigned int *)((a4 + 0x540)) = (t0 + ((short)t2 * (short)0x1C));
    return FUN_0c031fbc(a4, (((a5 << 2) << 1) + (t1 + 0xC)), (t0 + ((short)t2 * (short)0x1C)));
}
