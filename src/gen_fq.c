/* Straight-line functions with calls and guards (batch gen_fq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[11]; } Stk11;
int FUN_0c01d636(int, int, int);
int FUN_0c0208fc(int);
int FUN_0c031fbc(int, int, int);
int FUN_0c0336d6(int, int, int);
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
int _divls(void);
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
struct o14_float { char p[0x14]; float v; };
struct o1B8_float { char p[0x1B8]; float v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o21C_uint { char p[0x21C]; unsigned int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o244_uint { char p[0x244]; unsigned int v; };
struct o248_uint { char p[0x248]; unsigned int v; };
struct o24C_uint { char p[0x24C]; unsigned int v; };
struct o25C_float { char p[0x25C]; float v; };
struct o264_uint { char p[0x264]; unsigned int v; };
struct o268_uint { char p[0x268]; unsigned int v; };
struct o26C_uint { char p[0x26C]; unsigned int v; };
struct o270_int { char p[0x270]; int v; };
struct o270_uint { char p[0x270]; unsigned int v; };
struct o284_uint { char p[0x284]; unsigned int v; };
struct o288_uint { char p[0x288]; unsigned int v; };
struct o28C_int { char p[0x28C]; int v; };
struct o28C_uint { char p[0x28C]; unsigned int v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3E_short { char p[0x3E]; short v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o53C_int { char p[0x53C]; int v; };
struct o53C_uint { char p[0x53C]; unsigned int v; };
struct o540_int { char p[0x540]; int v; };
struct o540_uint { char p[0x540]; unsigned int v; };
struct o55C_uint { char p[0x55C]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
struct oC8_uint { char p[0xC8]; unsigned int v; };
struct oF0_uint { char p[0xF0]; unsigned int v; };
struct o0_int { int v; };
struct o18_int { char p[0x18]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };



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
    int R1004;
    int R1008;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R4 = a4;
    L_C058FA0:;
    R1008 = 0xFFFFFFFF;
    R1004 = ((((unsigned int)R4 >= (unsigned int)0x6C)) ? 1 : 0);
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
    R1008 = R5;
    goto L_C058FDE;
    L_C058FDE:;
    t11 = (int)(R5 - 1) >= 0;
    R5 = ((R5 - 1));
    if (t11) goto L_C058FCA;
    goto L_C058FE4;
    L_C058FE4:;
    t13 = R1008;
    R0 = (t13);
    if ((t13 != -1)) goto L_C058FEE;
    goto L_C058FEA;
    L_C058FEA:;
    goto L_C059206;
    L_C058FEE:;
    if (((R1004) == 0)) goto L_C058FF8;
    goto L_C058FF4;
    L_C058FF4:;
    R8 = ((*(int *)0xC23ED50));
    goto L_C058FF8;
    L_C058FF8:;
    t20 = R1008;
    *(unsigned int *)(((((((t20 << 1) + t20) << 2) << 1) + R6) + 0x0)) = R8;
    R4 = (((R8 << 2) + 0xC1FF940));
    R9 = ((((((t20 << 1) + t20) << 2) << 1) + R6));
    if (((*(int *)((((R8 << 2) + 0xC1FF940) + 0x0))) != 0)) goto L_C059020;
    goto L_C059016;
    L_C059016:;
    if (((R1004) != 0)) goto L_C059020;
    goto L_C05901C;
    L_C05901C:;
    goto L_C059206;
    L_C059020:;
    R10 = (0x0);
    if (((R1004) != 0)) goto L_C05902C;
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
    (((struct o220_uint *)(t37))->v) = R8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t37 + 0x30)) = *(struct mv3 *)(R13); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t37 + 0x3C)) = *(struct mv3 *)(R13); }
    { struct mvb6 { char c[6]; }; *(struct mvb6 *)((t37 + 0x6C)) = *(struct mvb6 *)((R13 + 0xC)); }
    (((struct o264_uint *)(t37))->v) = (*(short *)((R13 + 0x12)));
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
    (((struct o244_uint *)(R14))->v) = R11;
    goto L_C0590C2;
    L_C0590C2:;
    (((struct oF0_uint *)(R14))->v) = (*(int *)((R13 + 0x38)));
    (((struct o268_uint *)(R14))->v) = ((((struct o3C_short *)(R13))->v));
    (((struct o26C_uint *)(R14))->v) = ((((struct o3E_short *)(R13))->v));
    (((struct o288_uint *)(R14))->v) = (*(int *)((R13 + 0x14)));
    t57 = *(int *)((((*(short *)((R13 + 0x12))) << 2) + 0xC0F8E70));
    (((struct o284_uint *)(R14))->v) = t57;
    (((struct o248_uint *)(R14))->v) = (*(int *)((t57 + 0x0)));
    (((struct o24C_uint *)(R14))->v) = (*(int *)((t57 + 0x4)));
    (((struct o25C_float *)(R14))->v) = ((((struct o8_float *)(t57))->v));
    (((struct o78_uint *)(R14))->v) = (*(int *)((t57 + 0x10)));
    (((struct o74_uint *)(R14))->v) = 0x15;
    (((struct oC0_uint *)(R14))->v) = (R1008);
    (((struct oBC_uint *)(R14))->v) = ((*(int *)((R9 + 0x4))) + 0x10);
    *(unsigned int *)(((((*(int *)((R9 + 0x4))) << 2) + (R9 + 0x8)) + 0x0)) = R14;
    (((struct oC8_uint *)(R14))->v) = 0x20000;
    (((struct o1B8_float *)(R14))->v) = ((((struct o14_float *)(t57))->v));
    (((struct o270_uint *)(R14))->v) = (((((struct o270_int *)(R14))->v)) | R11);
    R12 = (t57);
    if ((((*(int *)0xC23A1A8) & 0x101) == 0)) goto L_C059164;
    goto L_C059146;
    L_C059146:;
    if (((R1004) == 0)) goto L_C059164;
    goto L_C05914C;
    L_C05914C:;
    (((struct o28C_uint *)(R14))->v) = R11;
    (((struct o1EC_uint *)(R14))->v) = 0xFFFFFFF0;
    (((struct o1E4_float *)(R14))->v) = ((((struct o1B8_float *)(R14))->v));
    (((struct o200_uint *)(R14))->v) = 0xFFFFFFFF;
    goto L_C059164;
    L_C059164:;
    if ((((((struct o28C_int *)(R14))->v)) != 0)) goto L_C0591D8;
    goto L_C05916C;
    L_C05916C:;
    if (((*(int *)((R12 + 0x18))) == 0)) goto L_C0591D8;
    goto L_C059172;
    L_C059172:;
    FUN_0c01d636(R14, (*(int *)((R12 + 0x18))), 0x0);
    R0 = (0x270);
    R2 = (((((struct o270_int *)(R14))->v)));
    R3 = (0x2);
    goto L_C0591D4;
    L_C0591D4:;
    *(unsigned int *)((R14 + R0)) = (R2 | R3);
    goto L_C0591D8;
    L_C0591D8:;
    if ((((*(int *)((R12 + 0x1C))) & 2) == 0)) goto L_C0591E6;
    goto L_C0591DE;
    L_C0591DE:;
    (((struct o1F8_uint *)(R14))->v) = 0x3;
    goto L_C0591EA;
    L_C0591EA:;
    (((struct o21C_uint *)(R14))->v) = R10;
    t85 = *(int *)((R9 + 0x4));
    *(unsigned int *)((R9 + 0x4)) = (t85 + 0x1);
    R0 = (0x21C);
    R13 = ((R13 + 0x40));
    if (((int)(t85 + 0x1) >= (int)0x4)) goto L_C059206;
    goto L_C0591FC;
    L_C0591E6:;
    (((struct o1F8_uint *)(R14))->v) = R11;
    goto L_C0591EA;
    L_C05902C:;
    R13 = (R7);
    goto L_C05902E;
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
    int R1004;
    int R1008;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R4 = a4;
    L_C21EA80:;
    R1008 = R4;
    R11 = (0x2);
    R14 = (0xC9528EC);
    if ((R4 != 1)) goto L_C21EAB6;
    goto L_C21EA9E;
    L_C21EA9E:;
    t4 = (*(int *)((R14 + 0x10)));
    R1004 = t4;
    t9 = kmCreateVertexBuffer((*(int *)((R14 + 0x0))), (*(int *)((R14 + 0x4))), (*(int *)((R14 + 0x8))), (*(int *)((R14 + 0xC))), t4);
    R4 = (t9);
    if ((t9 != 0)) goto L_C21EB04;
    goto L_C21EAB6;
    L_C21EAB6:;
    if (((R1008) != 2)) goto L_C21EACC;
    goto L_C21EABC;
    L_C21EABC:;
    t16 = kmCreateTABuffer((*(int *)((R14 + 0x0))), ((((struct o58_int *)(R14))->v)));
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
    R1004 = t30;
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
    t46 = kmActivateFrameBuffer((*(int *)((R14 + 0x3C))), ((((struct o40_int *)(R14))->v)), (*(int *)((R14 + 0x18))), ((((struct o44_int *)(R14))->v)));
    R13 = (t46);
    if ((t46 != 0)) goto L_C21EBEA;
    goto L_C21EB5E;
    L_C21EB5E:;
    if ((((((struct o0_int *)0xC952640)->v)) == 1)) goto L_C21EB6E;
    goto L_C21EB66;
    L_C21EB66:;
    if (((*(int *)0xC239C70) != 1)) goto L_C21EBEA;
    goto L_C21EB6E;
    L_C21EB6E:;
    (((struct o20_uint *)0xC952640)->v) = ((((struct o18_int *)0xC952640)->v));
    *(unsigned int *)(((((((struct o18_int *)0xC952640)->v)) << 2) + 0xC952648)) = 0x0;
    (((struct o30_uint *)0xC952640)->v) = R8;
    R1008 = (R8 & ((((struct o18_int *)0xC952640)->v)));
    kmiWriteRegister(0x8, 0x1);
    kmiWriteRegister(0x8, 0x0);
    t58 = R1008;
    kmiWriteRegister(0x124, (*(int *)(((((t58 << 2) << 2) << 1) + 0xC952774))));
    kmiWriteRegister(0x12C, (*(int *)(((((t58 << 2) << 2) << 1) + 0xC952778))));
    kmiWriteRegister(0x128, (*(int *)(((((t58 << 2) << 2) << 1) + 0xC952780))));
    kmiWriteRegister(0x130, (*(int *)(((((t58 << 2) << 2) << 1) + 0xC952784))));
    kmiWriteRegister(0x164, (*(int *)(((((t58 << 2) << 2) << 1) + 0xC95277C))));
    kmiWriteRegister(0x144, 0x80000000);
    kmiReadRegister(0x144);
    (((struct o28_uint *)0xC952640)->v) = 0x0;
    (((struct o24_uint *)0xC952640)->v) = (*(int *)0xC952764);
    R14 = (0xC218DA4);
    goto L_C21EBEA;
    L_C21EBEA:;
    R0 = (R13);
    goto L_C21EBEC;
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
        { struct mvb6 { char c[6]; }; *(struct mvb6 *)((t5 + 0x6C)) = *(struct mvb6 *)((t3 + 0xC)); }
        t1 = (t1 + 0x1);
        (((struct o220_uint *)(t5))->v) = (*(short *)((t3 + 0x12)));
        t3 = (t3 + 0x18);
        (((struct oBC_uint *)(t5))->v) = t2;
        (((struct oC8_uint *)(t5))->v) = 0x20000;
        (((struct o1B8_float *)(t5))->v) = u0;
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
        t3 = FUN_0c0208fc(((int)stk + 4));
        if ((unsigned int)t0 >= (unsigned int)0xC0F66C8) {
            break;
        }
    }
    return t3;
}

int FUN_0c0c4a00(int a4, int a5, int a6, int a7)
{
    int stk[15];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    R1004 = a4;
    { struct mv10 { int w[10]; }; *(struct mv10 *)((((int)stk + 4) + 0x4)) = *(struct mv10 *)(0xC1E51CC); }
    *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = 1.0f;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = (*(int *)(((((int)stk + 4) + 0x2C) + 0x0)));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x14)) = (*(int *)(((((int)stk + 4) + 0x2C) + 0x0)));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x20)) = (*(int *)(((((int)stk + 4) + 0x2C) + 0x0)));
    return (FUN_0c0be88a((R1004), (((int)stk + 4) + 0x4), a6, a7));
}

int FUN_0c06ecaa(void)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC06EBC4, 0xB4, (*(int *)0xC23ECE4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(0xC0FBD14); }
    (((struct o78_uint *)(t1))->v) = (*(int *)0xC0FBD20);
    (((struct o8C_uint *)(t1))->v) = 0xC247ED8;
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
    (((struct o53C_uint *)(a4))->v) = (*(int *)(((((a5 << 2) << 2) + 0xC1F3134) + 0x0)));
    (((struct o540_uint *)(a4))->v) = ((((struct o53C_int *)(a4))->v));
    (((struct o55C_uint *)(a4))->v) = ((*(int *)(((((a5 << 2) << 2) + 0xC1F3134) + 0x4))) * (*(int *)0xC247070));
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

    t0 = (((struct o53C_int *)(a4))->v);
    t1 = (((struct o540_int *)(a4))->v);
    t2 = *(short *)(((((a5 << 2) << 1) + (t1 + 0xC)) + 0x0));
    (((struct o540_uint *)(a4))->v) = (t0 + ((short)t2 * (short)0x1C));
    return FUN_0c031fbc(a4, (((a5 << 2) << 1) + (t1 + 0xC)), (t0 + ((short)t2 * (short)0x1C)));
}


