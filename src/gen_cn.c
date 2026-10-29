/* Straight-line functions with calls and guards (batch gen_cn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdf2(int);
int FUN_0c01d3ee(int, int);
int FUN_0c01d636(int, int, int);
int FUN_0c01db0e(int, int);
int FUN_0c023300(int, int, int, int);
int FUN_0c02a19a(int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c03611c(int);
int FUN_0c036256(int);
int FUN_0c038d08(int);
int FUN_0c039c6a(int);
int FUN_0c03b80e(int);
int FUN_0c03e1a0(int, int, int);
int FUN_0c03e33c(int);
int FUN_0c03e388(void);
int FUN_0c03e5bc(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c07e636(int, int);
int FUN_0c081074(int);
int FUN_0c081e0c(int);
int FUN_0c08448c(int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c085704(int);
extern int FUN_0c08a3d4();
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0bbbf4(int);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0cacde(int, float, float);
int FUN_0c0cae8e(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d8c40(int, int, int);
int FUN_0c0d9940(int, int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db2a0(int);
int FUN_0c0db470(int, int);
int FUN_0c0dc0b0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int nlAddVector(int, int);
float nlLength(int, int);
int nlScaleUnitVector(int, int, float);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int FUN_0c0dd2f0(int, float, float, float);
int FUN_0c0de000(float);
int FUN_0c0de310(float, float, float);
int FUN_0c0de3a0(float, float, float);
int FUN_0c0de3b0(float, float, float);
int nlObjPutSetSaturate(float, float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
extern int FUN_0c0e19f2();
int FUN_0c0e262a(int);
int FUN_0c0e5790(int);
int FUN_0c0e57a0(int, float, float, float);
int FUN_0c0e57d0(int, float, float, float);
int FUN_0c0e57f0(int, float, float, float);
int FUN_0c0e5810(int, float);
int FUN_0c0e5880(int, float, float);
int FUN_0c0e5910(int, int);
int FUN_0c0e5930(int);
int FUN_0c0e5980(int, int);
int FUN_0c0e5ad0(int, int);
int FUN_0c0e5b30(void);
int FUN_0c0e5dc0(void);
extern int _quick_odd_mvn();
int FUN_0c0e6248(void);
extern int FUN_0c0e631c();
int FUN_0c9de360(void);
extern float _builtin_sqrtf(float);
int buCalcCRC(int, int);
int copy_device(void);
int kdRecvFrame(void);
int memset(int, int, int);
extern int mpdrv_frame_send();
int mwPlySetLpFlg(int);
int FUN_0c084218(void);
int FUN_0c0b35e4(int a4);
void FUN_0c0bd958(int a4, int a5, int a6, int a7);
int buMakeBackupFileImage(int a4, int a5);
int FUN_0c0ccb64(int a4, int a5, int a6, int a7);
int FUN_0c03e6c6(int a4, int a5, int a6);
int FUN_0c068b62(int a4);
int FUN_0c018232(int a4, int a5, int a6);
int FUN_0c024dfa(int a4, int a5, int a6, int a7);
int FUN_0c061a8a(int a4, int a5, float f4);
int FUN_0c08a5e4(int a4, int a5);
int FUN_0c081e8c(int a4);
int FUN_0c090450(int a4, int a5, int a6, int a7);
int kdSendFrame(int a4, int a5);
float FUN_0c022c5e(int a4);

int FUN_0c084218(void)
{
    int t9;
    int t10;
    int t11;
    int t19;
    int t22;
    int t23;
    int t21;

    FUN_0c0dc0b0(0x3);
    nlUnitMatrix();
    FUN_0c0dd2f0((*(int *)0xC247ED8), (*(float *)0xC247EDC), (*(float *)0xC247EE0), (*(float *)0xC247EE4));
    FUN_0c0dc0b0(0x1);
    FUN_0c08448c(0x0);
    t9 = *(int *)0xC248A64;
    t10 = *(int *)0xC248A68;
    t11 = *(int *)0xC248A6C;
    FUN_0c0d8c40((((t9 << 16) | (t10 << 8)) | t11), (((t9 << 16) | (t10 << 8)) | t11), (((t9 << 16) | (t10 << 8)) | t11));
    if ((*(int *)0xC247F4C) != 0) {
        FUN_0c0e5b30();
        FUN_0c0e5790((*(int *)0xC247F50));
        FUN_0c0e5930(0xC248A54);
        t19 = 0xF;
        if ((*(int *)0xC247F50) == 0) {
            t19 = 0x0;
        }
        if ((int)t19 >= 0) {
            t22 = t19;
            t23 = ((t19 * 0xB0) + 0xC247F54);
            for (;;) {
                FUN_0c0e5ad0(t22, (*(short *)((t23 + 0x0))));
                if ((*(short *)((t23 + 0x0))) != 0) {
                    FUN_0c0e5910(t22, (*(short *)((t23 + 0x2))));
                    t21 = t23;
                    t21 = (t21 + 0x34);
                    FUN_0c0e57d0(t22, (*(float *)((t21 + 0x0))), (*(float *)((t21 + 0x4))), (*(float *)((t21 + 0x8))));
                    t21 = t23;
                    t21 = (t21 + 0x40);
                    FUN_0c0e57a0(t22, (*(float *)((t21 + 0x0))), (*(float *)((t21 + 0x4))), (*(float *)((t21 + 0x8))));
                    FUN_0c0e57f0(t22, (*(float *)((t23 + 0x4C))), (*(float *)((t23 + 0x50))), (*(float *)((t23 + 0x54))));
                    FUN_0c0e5810(t22, (*(float *)((t23 + 0xA0))));
                    FUN_0c0e5980(t22, (t23 + 0x14));
                    FUN_0c0e5880(t22, (*(float *)((t23 + 0xA4))), (*(float *)((t23 + 0x58))));
                }
                t22 = (t22 - 1);
                t23 = (t23 - 0xB0);
                if ((int)t22 < 0) {
                    break;
                }
            }
        }
        FUN_0c9de360();
    }
    FUN_0c0db2a0((*(int *)0xC248A94));
    if ((*(int *)0xC248A94) != 0) {
        FUN_0c0d9940((*(int *)0xC248A9C), (*(int *)0xC248A98));
    }
    if ((*(int *)0xC247F0C) != 0) {
        nlObjPutSetSaturate((*(float *)0xC247F10), (*(float *)0xC247F14));
        FUN_0c0de3a0(((*(float *)0xC247EF4) * (*(float *)0xC247EE8)), ((*(float *)0xC247EF8) * (*(float *)0xC247EEC)), ((*(float *)0xC247EFC) * (*(float *)0xC247EF0)));
        return FUN_0c0de3b0(((*(float *)0xC247F00) * (*(float *)0xC247EE8)), ((*(float *)0xC247F04) * (*(float *)0xC247EEC)), ((*(float *)0xC247F08) * (*(float *)0xC247EF0)));
    }
    nlObjPutSetSaturate((-1.0f), (-1.0f));
    return FUN_0c0de310((*(float *)0xC247EE8), (*(float *)0xC247EEC), (*(float *)0xC247EF0));
}


void FUN_0c0bd958(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t12;
    int t25;
    int t28;
    float t31;
    int t52;
    int t56;
    int t62;
    int t96;
    int t100;
    int stk[15];

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
    float F0;
    float F2;
    float F3;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C0BD958:;
    *(unsigned int *)(((int)stk + 4)) = R5;
    t0 = *(int *)(((((R4 << 1) + R4) << 2) + 0xC2623A0));
    t2 = *(int *)((t0 + ((((unsigned int)(*(int *)(((((R4 << 1) + R4) << 2) + 0xC24FB54))) >> 2) - 1) << 2)));
    t3 = FUN_0c0e262a(((((t2 << 1) + t2) << 2) << 2));
    *(unsigned int *)(((int)stk + 12)) = t3;
    t4 = FUN_0c0e262a(((t2 << 2) << 1));
    *(unsigned int *)(((int)stk + 20)) = t4;
    R0 = (t4);
    R10 = (0x0);
    R11 = (0x0);
    R12 = (t4);
    R13 = (t3);
    R14 = (t2);
    R9 = ((t0 + 0x18));
    goto L_C0BDB24;
    L_C0BDB24:;
    t12 = *(int *)((R9 + 0x0));
    R4 = (t12);
    R9 = ((R9 + 0x4));
    if ((t12 == 0)) goto L_C0BDB2E;
    goto L_C0BDB2A;
    L_C0BDB2A:;
    goto L_C0BD9B2;
    L_C0BD9B2:;
    if (((R4 & 0x80000000) == 0)) goto L_C0BD9C4;
    goto L_C0BD9BA;
    L_C0BD9BA:;
    R9 = (((R9 - 4) + 0x50));
    goto L_C0BDB24;
    L_C0BD9C4:;
    R8 = (0x1);
    if (((R4 & 0x10) == 0)) goto L_C0BDA66;
    goto L_C0BD9CE;
    L_C0BD9CE:;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)((R9 + 0x0)));
    R14 = ((R9 + 0x4));
    goto L_C0BD9D4;
    L_C0BD9D4:;
    if ((((*(int *)((R14 + 0x0))) & R8) != 0)) goto L_C0BD9DE;
    goto L_C0BD9DA;
    L_C0BD9DA:;
    R14 = ((R14 + 0x8));
    goto L_C0BDA58;
    L_C0BDA58:;
    t25 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 16)) = (t25 - 1);
    if (((t25 - 1) != 0)) goto L_C0BD9D4;
    goto L_C0BDA62;
    L_C0BDA62:;
    goto L_C0BDB1C;
    L_C0BDB1C:;
    R9 = (R14);
    goto L_C0BDB24;
    L_C0BD9DE:;
    t28 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 8)) = R11;
    R9 = (t28);
    if (((int)R10 <= 0)) goto L_C0BDA18;
    goto L_C0BD9E6;
    L_C0BD9E6:;
    t31 = nlLength(R9, R14);
    F0 = (t31);
    if ((!(9.99999975e-06f > t31))) goto L_C0BDA0C;
    goto L_C0BD9F6;
    L_C0BD9F6:;
    *(unsigned int *)((R12 + 0x0)) = R14;
    *(unsigned int *)((R12 + 0x4)) = (*(int *)(((*(int *)((R9 + 0x2C))) + 0x4)));
    *(unsigned int *)((R9 + 0x28)) = ((*(int *)((R9 + 0x28))) + 0x1);
    *(unsigned int *)(((*(int *)((R9 + 0x2C))) + 0x4)) = R12;
    R12 = ((R12 + 0x8));
    goto L_C0BDA18;
    L_C0BDA18:;
    if (((int)(*(int *)(((int)stk + 8))) < (int)R10)) goto L_C0BDA56;
    goto L_C0BDA1E;
    L_C0BDA1E:;
    *(float *)((R13 + 0x0)) = (*(float *)((R14 + 0x0)));
    *(float *)((R13 + 0x4)) = (*(float *)((R14 + 0x4)));
    *(float *)((R13 + 0x8)) = (*(float *)((R14 + 0x8)));
    *(float *)((R13 + 0x18)) = (*(float *)((R14 + 0xC)));
    *(float *)((R13 + 0x1C)) = (*(float *)((R14 + 0x10)));
    *(float *)((R13 + 0x20)) = (*(float *)((R14 + 0x14)));
    *(unsigned int *)((R13 + 0x28)) = R8;
    *(unsigned int *)((R13 + 0x24)) = R11;
    *(unsigned int *)((R13 + 0x2C)) = R12;
    *(unsigned int *)((R12 + 0x0)) = R14;
    *(unsigned int *)((R12 + 0x4)) = R11;
    R0 = (0x20);
    R10 = ((R10 + 0x1));
    R12 = ((R12 + 0x8));
    R13 = ((R13 + 0x30));
    goto L_C0BDA56;
    L_C0BDA56:;
    R14 = ((R14 + 0x20));
    goto L_C0BDA58;
    L_C0BDA0C:;
    t52 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (t52 + 0x1);
    R9 = ((R9 + 0x30));
    if (((int)(t52 + 0x1) < (int)R10)) goto L_C0BD9E6;
    goto L_C0BDA18;
    L_C0BDA66:;
    if (((R4 & 0x8) == 0)) goto L_C0BDB20;
    goto L_C0BDA6C;
    L_C0BDA6C:;
    t56 = *(int *)((R9 + 0x0));
    R14 = ((R9 + 0x4));
    R6 = (((t56 << 1) + t56));
    goto L_C0BDA76;
    L_C0BDA76:;
    if ((((*(int *)((R14 + 0x0))) & R8) != 0)) goto L_C0BDA98;
    goto L_C0BDA7C;
    L_C0BDA7C:;
    R14 = ((R14 + 0x8));
    goto L_C0BDB18;
    L_C0BDB18:;
    t62 = (R6 - 0x1) != 0;
    R6 = ((R6 - 0x1));
    if (t62) goto L_C0BDA76;
    goto L_C0BDB1C;
    L_C0BDA98:;
    R4 = ((*(int *)(((int)stk + 12))));
    R5 = (R11);
    if (((int)R10 <= 0)) goto L_C0BDADA;
    goto L_C0BDAA0;
    L_C0BDAA0:;
    if (((*(float *)((R4 + 0x0))) != (*(float *)((R14 + 0x0))))) goto L_C0BDAD2;
    goto L_C0BDAA8;
    L_C0BDAA8:;
    R0 = (0x4);
    if (((*(float *)((R4 + 0x4))) != (*(float *)((R14 + 0x4))))) goto L_C0BDAD2;
    goto L_C0BDAB2;
    L_C0BDAB2:;
    R0 = (0x8);
    if (((*(float *)((R4 + 0x8))) != (*(float *)((R14 + 0x8))))) goto L_C0BDAD2;
    goto L_C0BDABC;
    L_C0BDABC:;
    *(unsigned int *)((R12 + 0x0)) = R14;
    *(unsigned int *)((R12 + 0x4)) = (*(int *)(((*(int *)((R4 + 0x2C))) + 0x4)));
    *(unsigned int *)((R4 + 0x28)) = ((*(int *)((R4 + 0x28))) + 0x1);
    *(unsigned int *)(((*(int *)((R4 + 0x2C))) + 0x4)) = R12;
    R12 = ((R12 + 0x8));
    goto L_C0BDADA;
    L_C0BDADA:;
    if (((int)R5 < (int)R10)) goto L_C0BDB16;
    goto L_C0BDADE;
    L_C0BDADE:;
    *(float *)((R13 + 0x0)) = (*(float *)((R14 + 0x0)));
    *(float *)((R13 + 0x4)) = (*(float *)((R14 + 0x4)));
    *(float *)((R13 + 0x8)) = (*(float *)((R14 + 0x8)));
    *(float *)((R13 + 0x18)) = (*(float *)((R14 + 0xC)));
    *(float *)((R13 + 0x1C)) = (*(float *)((R14 + 0x10)));
    *(float *)((R13 + 0x20)) = (*(float *)((R14 + 0x14)));
    *(unsigned int *)((R13 + 0x28)) = R8;
    *(unsigned int *)((R13 + 0x24)) = R11;
    *(unsigned int *)((R13 + 0x2C)) = R12;
    *(unsigned int *)((R12 + 0x0)) = R14;
    *(unsigned int *)((R12 + 0x4)) = R11;
    R0 = (0x20);
    R10 = ((R10 + 0x1));
    R12 = ((R12 + 0x8));
    R13 = ((R13 + 0x30));
    goto L_C0BDB16;
    L_C0BDB16:;
    R14 = ((R14 + 0x20));
    goto L_C0BDB18;
    L_C0BDAD2:;
    t96 = (int)(R5 + 0x1) < (int)R10;
    R4 = ((R4 + 0x30));
    R5 = ((R5 + 0x1));
    if (t96) goto L_C0BDAA0;
    goto L_C0BDADA;
    L_C0BDB20:;
    goto L_C0BDB20;
    L_C0BDB2E:;
    t100 = *(int *)(((int)stk + 4));
    *(unsigned int *)((t100 + 0x0)) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)((t100 + 0x4)) = (*(int *)(((int)stk + 20)));
    *(unsigned int *)((t100 + 0x8)) = R10;
}

int buMakeBackupFileImage(int a4, int a5)
{
    int t100;
    int t11;
    int t12;
    int t13;
    int t15;
    int t17;
    int t18;
    int t19;
    int t21;
    int t23;
    int t24;
    int t25;
    int t27;
    int t30;
    int t32;
    int t33;
    int t48;
    int t51;
    int t63;
    int t77;
    int t98;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t37;
    int t43;
    int t59;
    int t71;
    int stk[12];

    t100 = 0xFFFFFF00;
    if (((*(short *)((a5 + 0x4C))) != 0) && ((t1 = *(short *)((a5 + 0x4C)), (int)(unsigned short)t1 <= (int)0x3) && ((t2 = *(short *)((a5 + 0x54)), (int)(unsigned short)t2 <= (int)0x3) && ((t3 = *(int *)((a5 + 0x44)), t3 != 0) && ((t4 = *(int *)((a5 + 0x48)), t4 != 0) && ((t5 = *(short *)((a5 + 0x54)), t5 == 0) || (t6 = *(int *)((a5 + 0x50)), t6 != 0))))))) {
        memset(a4, 0x0, 0x60);
        memset(a4, 0x20, 0x10);
        memset((a4 + 0x10), 0x20, 0x20);
        memset((a4 + 0x30), 0x0, 0x10);
        t11 = a5;
        t12 = 0x0;
        t13 = a4;
        for (;;) {
            if ((*(signed char *)((t11 + 0x0))) != 0) {
                t15 = *(signed char *)((t11 + 0x0));
                t11 = (t11 + 0x1);
                t12 = (t12 + 0x1);
                *(unsigned char *)((t13 + 0x0)) = t15;
                t13 = (t13 + 0x1);
                if ((int)t12 >= (int)0x10) {
                    break;
                }
                continue;
            }
            break;
        }
        t17 = (a5 + 0x12);
        t18 = 0x0;
        t19 = (a4 + 0x10);
        for (;;) {
            if ((*(signed char *)((t17 + 0x0))) != 0) {
                t21 = *(signed char *)((t17 + 0x0));
                t17 = (t17 + 0x1);
                t18 = (t18 + 0x1);
                *(unsigned char *)((t19 + 0x0)) = t21;
                t19 = (t19 + 0x1);
                if ((int)t18 >= (int)0x20) {
                    break;
                }
                continue;
            }
            break;
        }
        t23 = 0x0;
        t24 = (a5 + 0x34);
        t25 = (a4 + 0x30);
        for (;;) {
            if ((*(signed char *)((t24 + 0x0))) != 0) {
                t27 = *(signed char *)((t24 + 0x0));
                t24 = (t24 + 0x1);
                t23 = (t23 + 0x1);
                *(unsigned char *)((t25 + 0x0)) = t27;
                t25 = (t25 + 0x1);
                if ((int)t23 >= (int)0x10) {
                    break;
                }
                continue;
            }
            break;
        }
        t30 = *(int *)(((((unsigned short)(*(short *)((a5 + 0x4C))) & 0x3) << 2) + 0xC2393E0));
        t32 = *(int *)(((((unsigned short)(*(short *)((a5 + 0x54))) & 0x3) << 2) + 0xC2393F0));
        t33 = *(int *)((a5 + 0x5C));
        *(unsigned short *)((a4 + 0x42)) = (*(short *)((a5 + 0x4E)));
        *(unsigned short *)((a4 + 0x40)) = (*(short *)((a5 + 0x4C)));
        *(unsigned int *)(((int)stk + 4)) = 0x80;
        if (((*(short *)((a5 + 0x54))) != 0) && (t37 = *(int *)((a5 + 0x50)), t37 != 0)) {
            *(unsigned short *)((a4 + 0x44)) = (*(short *)((a5 + 0x54)));
            *(unsigned int *)(((int)stk + 12)) = (t30 + 0x80);
        } else {
            *(unsigned short *)((a4 + 0x44)) = 0x0;
            *(unsigned int *)(((int)stk + 12)) = 0x0;
        }
        if (((*(int *)((a5 + 0x5C))) != 0) && (t43 = *(int *)((a5 + 0x58)), t43 != 0)) {
            *(unsigned int *)((a4 + 0x48)) = (*(int *)((a5 + 0x5C)));
            *(unsigned int *)(((int)stk + 8)) = ((t30 + t32) + 0x80);
        } else {
            *(unsigned int *)((a4 + 0x48)) = 0x0;
            *(unsigned int *)(((int)stk + 8)) = 0x0;
        }
        if (t30 != 0) {
            t48 = ((int (*)(int, int, int, int))(FUN_0c0e631c))((a4 + 0x60), (*(int *)((a5 + 0x44))), 0x20, t24);
            t51 = ((int (*)(int, int, int))(FUN_0c0e631c))(((*(int *)(((int)stk + 4))) + a4), (*(int *)((a5 + 0x48))), t30);
        } else {
            t59 = t24;
        }
        if (t32 != 0) {
            t63 = ((int (*)(int, int, int, int))(FUN_0c0e631c))(((*(int *)(((int)stk + 12))) + a4), (*(int *)((a5 + 0x50))), t32, t59);
        } else {
            t71 = t59;
        }
        if ((*(int *)((a5 + 0x5C))) != 0) {
            t77 = ((int (*)(int, int, int, int))(FUN_0c0e631c))(((*(int *)(((int)stk + 8))) + a4), (*(int *)((a5 + 0x58))), (*(int *)((a5 + 0x5C))), t71);
        }
        if ((0x1FF & ((t33 + (t30 + t32)) + 0x80)) != 0) {
            memset((a4 + ((t33 + (t30 + t32)) + 0x80)), 0x0, (0x200 - (0x1FF & ((t33 + (t30 + t32)) + 0x80))));
        }
        *(unsigned short *)(((0x46 + a4) + 0x0)) = (buCalcCRC(a4, ((t33 + (t30 + t32)) + 0x80)));
        t98 = 0x0;
        if ((0x1FF & ((t33 + (t30 + t32)) + 0x80)) != 0) {
            t98 = 0x1;
        }
        t100 = (t98 + ((unsigned int)((unsigned int)((t33 + (t30 + t32)) + 0x80) >> 8) >> 1));
    }
    return t100;
}

int FUN_0c0ccb64(int a4, int a5, int a6, int a7)
{
    float u2;
    float u4;
    float u6;
    float u10;
    float u34;
    int t42;
    int stk[13];

    FUN_0c0685a4(a4, a5, a6, a7);
    u2 = -81.0f;
    u2 = u2 + 0.00499999989f * (float)(FUN_0c0da2e0());
    *(float *)(((int)stk + 12)) = u2;
    u4 = -32.0f;
    u4 = u4 + 0.00199999986f * (float)(FUN_0c0da2e0());
    *(float *)(((int)stk + 16)) = u4;
    u6 = -81.0f;
    u6 = u6 + 0.00499999989f * (float)(FUN_0c0da2e0());
    *(float *)(((int)stk + 20)) = u6;
    nlAddVector((((int)stk + 4) + 0x8), (a4 + 0x3C));
    nlSubVector((((int)stk + 4) + 0x8), (a4 + 0x30));
    u10 = 0.00999999978f;
    u10 = u10 + 1.92266589e-06f * (float)(FUN_0c0da2e0());
    nlScaleUnitVector((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x8), u10);
    nlAddVector((a4 + 0x48), (((int)stk + 4) + 0x8));
    FUN_0c0dce80((a4 + 0x48), (a4 + 0x48), 0.979999959f);
    nlAddVector((a4 + 0x30), (a4 + 0x48));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) - 0.272222161f);
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)((a4 + 0x48))), (*(float *)((a4 + 0x4C))), (*(float *)((a4 + 0x50))));
    *(unsigned short *)(((0x54 + a4) + 0x0)) = (int)((float)(*(short *)(((0x54 + a4) + 0x0))) + ((float)(FUN_0c07e636((*(short *)((a4 + 0x54))), (*(int *)(((int)stk + 4))))) * 0.099999994f));
    *(unsigned short *)(((0x56 + a4) + 0x0)) = (int)((float)(*(short *)(((0x56 + a4) + 0x0))) + ((float)(FUN_0c07e636((*(short *)((a4 + 0x56))), ((*(int *)(((int)stk + 8))) + 0x7FFF))) * 0.099999994f));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((a4 + 0x56))));
    nlRotateAX((*(short *)((a4 + 0x54))));
    u34 = *(float *)((a4 + 0x5C));
    nlScale(u34, u34, u34);
    FUN_0c0de000((*(float *)((a4 + 0x5C))));
    FUN_0c0c465c((*(short *)((((*(int *)((a4 + 0x60))) << 1) + 0xC1E9E4C))));
    nlPopMatrix(0x1);
    t42 = *(int *)((a4 + 0x60));
    *(unsigned int *)((a4 + 0x60)) = (t42 + 0x1);
    if ((unsigned int)(t42 + 0x1) >= (unsigned int)0x4) {
        *(unsigned int *)((a4 + 0x60)) = 0x0;
    }
    return 0x60;
}

int FUN_0c03e6c6(int a4, int a5, int a6)
{
    int t14;
    int t16;
    int t23;
    int t24;
    int t53;
    int t60;
    int t85;
    int t87;
    int t94;
    int t95;
    int t124;
    int t131;
    int t22;
    int t43;
    int t70;
    int t93;
    int t114;
    int t141;
    int stk[5];

    if ((*(int *)((a4 + 0x1BC))) == 0) {
        if (((*(int *)((a4 + 0x20C))) & 0x80000) == 0) {
            return FUN_0c03e1a0(a4, a5, a6);
        }
        if ((*(int *)((a4 + 0x4C8))) == 9) {
            return FUN_0c03e1a0(a4, a5, a6);
        }
        *(unsigned int *)((a4 + 0x564)) = ((*(int *)((a4 + 0x564))) + 0x1);
        *(unsigned int *)((a4 + 0xA4)) = 0xA7F;
        *(unsigned int *)((a4 + 0x4DC)) = 0x0;
        if (((*(int *)((a4 + 0x20C))) & 0x80000) != 0) {
            FUN_0c03611c(a4);
            *(unsigned int *)((a4 + 0x554)) = 0x0;
            FUN_0c038d08(a4);
            FUN_0c03e5bc(a4);
            t14 = 0x1CC;
            if ((*(int *)((a4 + 0x57C))) == 4) {
                t14 = 0x304;
            }
            t16 = *(int *)((a4 + t14));
            *(unsigned int *)((a4 + 0x304)) = (int)((float)(*(int *)((a4 + 0x304))) - (float)t16);
            *(unsigned int *)((a4 + 0x56C)) = (int)((float)(*(int *)((a4 + 0x56C))) + (float)t16);
            if ((int)(*(int *)((a4 + 0x304))) <= 0) {
                *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x5;
                *(unsigned int *)((a4 + 0x304)) = 0x0;
                if (((*(int *)((a4 + 0x47C))) == 0) && (t22 = *(int *)((a4 + 0x5C0)), t22 == 0)) {
                    *(unsigned int *)((a4 + 0x5C0)) = 0x1;
                    t23 = FUN_0c0da2e0();
                    t24 = 0x22EA9;
                    if ((t23 & 0x1) != 0) {
                        t24 = 0x42EA9;
                    }
                    FUN_0c0cc3f8(t24, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                }
            }
            FUN_0c036256(a4);
            FUN_0c03b80e(a4);
        } else {
            if (((int)(*(int *)((a4 + 0x314))) >= (int)0x3C) && (t43 = *(int *)((a4 + 0x4D0)), t43 != 1)) {
                *(unsigned int *)(((0x568 + a4) + 0x0)) = (*(int *)((a4 + 0x310)));
                if ((int)(*(int *)((a4 + 0x568))) >= (int)0x6) {
                    *(unsigned int *)((a4 + 0x568)) = 0x0;
                }
                *(unsigned int *)((a4 + 0x310)) = 0x1;
            } else {
                *(unsigned int *)((a4 + 0x310)) = ((*(int *)((a4 + 0x310))) + 0x1);
            }
            *(unsigned int *)((a4 + 0x314)) = 0x0;
            *(unsigned int *)((a4 + 0x5B8)) = 0x0;
            *(unsigned int *)((a4 + 0x5BC)) = 0x0;
            FUN_0c03e5bc(a4);
            FUN_0c03e388();
            FUN_0c03e33c(a4);
            t53 = *(int *)((a4 + 0x560));
            if ((t53 != 0) && (t53 != 10)) {
                FUN_0c038d08(a4);
                *(unsigned int *)((a4 + 0x4D0)) = 0x1;
                *(unsigned int *)((a4 + 0x534)) = 0x0;
                *(unsigned int *)((a4 + 0xD8)) = 0x0;
                *(unsigned int *)((a4 + 0x500)) = 0x1;
            }
        }
        if ((int)(*(int *)((a4 + 0x304))) <= 0) {
            t60 = *(int *)((a4 + 0x570));
            *(unsigned int *)((a4 + 0x570)) = (t60 + 0x1);
            if ((int)(t60 + 0x1) > (int)0xA) {
                *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
            }
        }
        if (((*(int *)((a4 + 0x1BC))) == 16) && (t70 = *(int *)((a4 + 0x560)), t70 != 0)) {
            FUN_0c039c6a(a4);
        }
        *(unsigned int *)((a4 + 0x1BC)) = 0x0;
        *(unsigned int *)((a4 + 0x1CC)) = 0x0;
        return 0x1CC;
    }
    *(unsigned int *)((a4 + 0x564)) = ((*(int *)((a4 + 0x564))) + 0x1);
    *(unsigned int *)((a4 + 0xA4)) = 0xA7F;
    *(unsigned int *)((a4 + 0x4DC)) = 0x0;
    if (((*(int *)((a4 + 0x20C))) & 0x80000) != 0) {
        FUN_0c03611c(a4);
        *(unsigned int *)((a4 + 0x554)) = 0x0;
        FUN_0c038d08(a4);
        FUN_0c03e5bc(a4);
        t85 = 0x1CC;
        if ((*(int *)((a4 + 0x57C))) == 4) {
            t85 = 0x304;
        }
        t87 = *(int *)((a4 + t85));
        *(unsigned int *)((a4 + 0x304)) = (int)((float)(*(int *)((a4 + 0x304))) - (float)t87);
        *(unsigned int *)((a4 + 0x56C)) = (int)((float)(*(int *)((a4 + 0x56C))) + (float)t87);
        if ((int)(*(int *)((a4 + 0x304))) <= 0) {
            *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x5;
            *(unsigned int *)((a4 + 0x304)) = 0x0;
            if (((*(int *)((a4 + 0x47C))) == 0) && (t93 = *(int *)((a4 + 0x5C0)), t93 == 0)) {
                *(unsigned int *)((a4 + 0x5C0)) = 0x1;
                t94 = FUN_0c0da2e0();
                t95 = 0x22EA9;
                if ((t94 & 0x1) != 0) {
                    t95 = 0x42EA9;
                }
                FUN_0c0cc3f8(t95, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            }
        }
        FUN_0c036256(a4);
        FUN_0c03b80e(a4);
    } else {
        if (((int)(*(int *)((a4 + 0x314))) >= (int)0x3C) && (t114 = *(int *)((a4 + 0x4D0)), t114 != 1)) {
            *(unsigned int *)(((0x568 + a4) + 0x0)) = (*(int *)((a4 + 0x310)));
            if ((int)(*(int *)((a4 + 0x568))) >= (int)0x6) {
                *(unsigned int *)((a4 + 0x568)) = 0x0;
            }
            *(unsigned int *)((a4 + 0x310)) = 0x1;
        } else {
            *(unsigned int *)((a4 + 0x310)) = ((*(int *)((a4 + 0x310))) + 0x1);
        }
        *(unsigned int *)((a4 + 0x314)) = 0x0;
        *(unsigned int *)((a4 + 0x5B8)) = 0x0;
        *(unsigned int *)((a4 + 0x5BC)) = 0x0;
        FUN_0c03e5bc(a4);
        FUN_0c03e388();
        FUN_0c03e33c(a4);
        t124 = *(int *)((a4 + 0x560));
        if ((t124 != 0) && (t124 != 10)) {
            FUN_0c038d08(a4);
            *(unsigned int *)((a4 + 0x4D0)) = 0x1;
            *(unsigned int *)((a4 + 0x534)) = 0x0;
            *(unsigned int *)((a4 + 0xD8)) = 0x0;
            *(unsigned int *)((a4 + 0x500)) = 0x1;
        }
    }
    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        t131 = *(int *)((a4 + 0x570));
        *(unsigned int *)((a4 + 0x570)) = (t131 + 0x1);
        if ((int)(t131 + 0x1) > (int)0xA) {
            *(unsigned int *)((a4 + 0x1B0)) = 0xFFFFFFFF;
        }
    }
    if (((*(int *)((a4 + 0x1BC))) == 16) && (t141 = *(int *)((a4 + 0x560)), t141 != 0)) {
        FUN_0c039c6a(a4);
    }
    *(unsigned int *)((a4 + 0x1BC)) = 0x0;
    *(unsigned int *)((a4 + 0x1CC)) = 0x0;
    return 0x1CC;
}

int FUN_0c068b62(int a4)
{
    int t7;
    float t18;
    float t20;
    int t22;
    int t24;
    int t25;
    float u27;
    int t28;
    int t32;
    int t59;
    int t65;
    float u43;
    int t23;
    float u26;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        mwPlySetLpFlg(a4);
        FUN_0c0e19f2();
    }
    t7 = *(int *)((a4 + 0x220));
    if (t7 != 0) {
        if (t7 != 1) {
        } else {
            *(unsigned int *)((a4 + 0x1BC)) = 0x0;
            *(unsigned short *)((a4 + 0x6C)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x230))))) * (float)(*(int *)((a4 + 0x22C))));
            *(unsigned short *)((a4 + 0x70)) = (int)((FUN_0c0da410((*(int *)((a4 + 0x234))))) * (float)(*(int *)((a4 + 0x22C))));
            *(unsigned int *)((a4 + 0x230)) = ((*(int *)((a4 + 0x230))) + 0x500);
            *(unsigned int *)((a4 + 0x234)) = ((*(int *)((a4 + 0x234))) + 0x800);
            t18 = FUN_0c0da410((*(short *)((a4 + 0x6C))));
            t20 = FUN_0c0da410((*(short *)((a4 + 0x70))));
            *(float *)((a4 + 0x64)) = (_builtin_fabsf((t18 * 10.0f)) + _builtin_fabsf((t20 * 10.0f)));
            t22 = 0xC0;
            t24 = a4;
            t25 = (*(int *)((a4 + 0xC0)));
            u27 = 10.0f;
            for (;;) {
                t28 = ((int)t25 > 0);
                t25 = (t25 - 1);
                if (!t28) {
                    break;
                }
                t22 = 0x228;
                t24 = (*(int *)((a4 + t22)));
                t22 = 0x64;
                t23 = t22;
                u26 = (*(float *)((a4 + t22)));
                t23 = (t23 + t24);
                u27 = (*(float *)((t23 + 0x0)));
                u26 = (u26 + u27);
                *(float *)((a4 + t22)) = u26;
            }
            t32 = *(int *)((a4 + 0x22C));
            *(unsigned int *)((a4 + 0x22C)) = (t32 - 32);
            if ((int)(t32 - 32) < 0) {
                *(unsigned int *)((a4 + 0x1BC)) = 0x0;
                *(unsigned int *)((a4 + 0x220)) = 0x0;
                *(float *)((a4 + 0x64)) = 0.0f;
            }
            u43 = (_builtin_fabsf((t18 * 10.0f)) + _builtin_fabsf((t20 * 10.0f)));
        }
    } else {
        if ((*(int *)((a4 + 0xC0))) != 0) {
            *(unsigned int *)((a4 + 0x1BC)) = ((*(int *)((a4 + 0x1BC))) | (*(int *)(((0x1BC + (*(int *)((a4 + 0x228)))) + 0x0))));
        }
        if ((*(int *)((a4 + 0x1BC))) == 0) {
        } else {
            if ((int)(*(int *)((a4 + 0x1C4))) < (int)0x2) {
                t59 = *(int *)((a4 + 0x1C4));
                *(unsigned int *)(((t59 << 2) + 0xC247584)) = ((*(int *)(((t59 << 2) + 0xC247584))) + 0xA);
            }
            t65 = *(int *)((a4 + 0xC0));
            *(unsigned int *)((a4 + 0x22C)) = ((-(((((t65 << 2) + t65) << 2) << 2) << 1)) + 0x300);
            *(unsigned int *)((a4 + 0x220)) = ((*(int *)((a4 + 0x220))) + 0x1);
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((a4 + 0x30))), ((*(float *)((a4 + 0x34))) + (*(float *)((a4 + 0x64)))), (*(float *)((a4 + 0x38))));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAZ((*(short *)((a4 + 0x70))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    FUN_0c0c465c((*(int *)((a4 + 0x21C))));
    nlPopMatrix(0x1);
    return FUN_0c01cdf2(a4);
}


int FUN_0c024dfa(int a4, int a5, int a6, int a7)
{
    int t0;
    int t59;
    int t14;
    int t20;
    float u5;
    int t8;
    float u22;
    float u23;
    float u24;
    float u25;
    float u26;
    float u30;
    int t77;
    int t80;
    int t63;
    int t51;
    int stk[16];

    t0 = *(int *)((a4 + 0x3B8));
    if (t0 != 0) {
        if (t0 != 1) {
            t59 = 0;
            if (t0 != 2) {
                t14 = t0;
                t20 = 0;
                if (t0 == 3) {
                    FUN_0c034fbc(a4, 0x400, 0x1, 0x1);
                    *(unsigned int *)((a4 + 0x3B0)) = ((*(int *)((a4 + 0x3B0))) + 0x1);
                    *(float *)((a4 + 0x458)) = ((float)(*(int *)((a4 + 0x3B0))) / (float)(*(int *)((a4 + 0x3B4))));
                    u5 = *(float *)((a4 + 0x458));
                    t8 = 0x458;
                    if (!(1.0f > u5)) {
                        *(unsigned short *)((a4 + 0x454)) = 0x0;
                        *(unsigned int *)((a4 + 0x1B0)) = 0x0;
                        *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x4;
                        *(unsigned int *)((a4 + 0xA4)) = 0xA7F;
                        *(unsigned int *)((a4 + 0x528)) = 0x1;
                        *(unsigned int *)((a4 + 0x524)) = 0x1;
                        t8 = (FUN_0c02a19a(a4));
                    }
                    t14 = t8;
                    t20 = ((1.0f > u5));
                } else {
                    t20 = (0);
                }
                t51 = t14;
                t59 = (t20);
            } else {
                FUN_0c034fbc(a4, 0x800, 0x1, 0x1);
                u22 = *(float *)((a4 + 0x30));
                u23 = *(float *)((a4 + 0x518));
                u24 = *(float *)((a4 + 0x38));
                u25 = *(float *)((a4 + 0x520));
                u26 = ((u25 - u24) * (u25 - u24));
                u26 = u26 + (u23 - u22) * (u23 - u22);
                u30 = 4.0f;
                if (4.0f > _builtin_sqrtf(u26)) {
                    *(unsigned int *)((a4 + 0x3B8)) = ((*(int *)((a4 + 0x3B8))) + 0x1);
                    u30 = _builtin_sqrtf(u26);
                }
                FUN_0c0a7714((((int)stk + 4) + 0x4), ((int)stk + 4), ((*(float *)((a4 + 0x518))) - (*(float *)((a4 + 0x30)))), ((*(float *)((a4 + 0x51C))) - (*(float *)((a4 + 0x34)))), ((*(float *)((a4 + 0x520))) - (*(float *)((a4 + 0x38)))));
                nlPushMatrix(0x0);
                nlUnitMatrix();
                nlRotateAY((*(int *)(((int)stk + 4))));
                *(float *)(((int)stk + 24)) = 0.0f;
                *(float *)(((int)stk + 28)) = 0.0f;
                *(float *)(((int)stk + 32)) = u30;
                FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
                *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 12)));
                *(float *)((((((int)stk + 4) + 0x20) + 0x4) + 0x0)) = (*(float *)(((int)stk + 16)));
                *(float *)((((((int)stk + 4) + 0x20) + 0x8) + 0x0)) = (*(float *)(((int)stk + 20)));
                nlPopMatrix(0x1);
                *(float *)((a4 + 0x48)) = (*(float *)(((((int)stk + 4) + 0x20) + 0x0)));
                *(float *)((a4 + 0x4C)) = (*(float *)(((((int)stk + 4) + 0x20) + 0x4)));
                *(float *)((a4 + 0x50)) = (*(float *)(((((int)stk + 4) + 0x20) + 0x8)));
                t51 = 0x50;
                t59 = ((4.0f > _builtin_sqrtf(u26)));
            }
            t63 = t51;
        } else {
            FUN_0c023300(a4, a5, a6, a7);
            *(unsigned int *)((a4 + 0xA4)) = 0x0;
            *(unsigned int *)((a4 + 0x3B8)) = ((*(int *)((a4 + 0x3B8))) + 0x1);
            *(unsigned int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC247030)) = 0x3;
            t63 = 0xC247030;
        }
        t80 = t63;
    } else {
        *(unsigned int *)((a4 + 0x3B0)) = ((*(int *)((a4 + 0x3B0))) - 1);
        *(float *)((a4 + 0x458)) = ((float)(*(int *)((a4 + 0x3B0))) / (float)(*(int *)((a4 + 0x3B4))));
        t77 = 0x458;
        if ((*(float *)((a4 + 0x458))) > 0.049999997f) {
        } else {
            *(unsigned int *)((a4 + 0x3B8)) = ((*(int *)((a4 + 0x3B8))) + 0x1);
            t77 = 0x3B8;
        }
        t80 = t77;
    }
    return t80;
}

int FUN_0c061a8a(int a4, int a5, float f4)
{
    float u2;
    float u5;
    float u6;
    float u9;
    float u11;
    int t25;
    float u26;
    int t32;
    int stk[14];

    nlPushMatrix(0x0);
    u2 = *(float *)(((*(int *)0xC247B94) + 0x88));
    nlScale((u2 * 0.5f), (u2 * 0.5f), 0.099999994f);
    u5 = *(float *)(((*(int *)0xC247B94) + 0x88));
    u6 = (u5 * 0.5f);
    if (0.099999994f > (u5 * 0.5f)) {
        u6 = 0.099999994f;
    }
    u9 = 0.5f;
    if (((*(int *)0xC23A258) & 1) != 0) {
        u9 = 1.0f;
    }
    *(float *)(((int)stk + 4)) = u9;
    u11 = *(float *)((a4 + 0x0));
    *(float *)((a4 + 0x0)) = (u11 - 0.0299999993f);
    if (!((u11 - 0.0299999993f) > 0.0f)) {
        *(float *)((a4 + 0x0)) = ((*(float *)((a4 + 0x0))) + 1.0f);
    }
    *(float *)((a5 + 0x0)) = ((*(float *)((a5 + 0x0))) - 0.0399999991f);
    if (!((*(float *)((a5 + 0x0))) > 0.0f)) {
        *(float *)((a5 + 0x0)) = ((*(float *)((a5 + 0x0))) + 1.0f);
    }
    nlPushMatrix(0x0);
    nlRotateAY(0x8000);
    FUN_0c0cae8e(0x3EC);
    FUN_0c0cacde(0x3EC, 0.199999988f, 0.0f);
    FUN_0c0de000((f4 * u6));
    t25 = *(int *)0xC247B94;
    u26 = *(float *)(((int)stk + 4));
    FUN_0c0848bc(((*(float *)((t25 + 0x40))) * u26), ((*(float *)((t25 + 0x44))) * u26), ((*(float *)((t25 + 0x48))) * u26));
    FUN_0c0c47ae(0x3EC);
    t32 = *(int *)0xC247B94;
    FUN_0c0848bc((*(float *)((t32 + 0x4C))), (*(float *)((t32 + 0x50))), (*(float *)((t32 + 0x54))));
    FUN_0c0cacde(0x3EC, -0.199999988f, 0.0f);
    FUN_0c0cae8e(0x3EC);
    nlScale(0.5f, 0.5f, (1.0f + 1.0f));
    FUN_0c0de000(((1.0f + 1.0f) * ((f4 * u6))));
    FUN_0c0cae8e(0x3ED);
    FUN_0c0cacde(0x3ED, 0.0f, (*(float *)((a4 + 0x0))));
    FUN_0c0c47ae(0x3ED);
    FUN_0c0cacde(0x3ED, 0.0f, ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0)))));
    nlScale(1.00999999f, 1.00999999f, 1.0f);
    FUN_0c0de000(((1.0f + 1.0f) * ((f4 * u6))));
    FUN_0c0c47ae(0x3ED);
    FUN_0c0cacde(0x3ED, 0.0f, (-(*(float *)((a5 + 0x0)))));
    FUN_0c0cae8e(0x3ED);
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    nlPopMatrix(0x1);
    return nlPopMatrix(0x1);
}



int FUN_0c090450(int a4, int a5, int a6, int a7)
{
    int t2;
    int t17;
    int t18;
    int t24;
    int t27;
    int t33;
    float u65;
    float u66;
    int t79;
    float u83;
    float u84;
    float u96;
    float u97;
    int t125;
    int t112;
    int t132;
    int t10;
    int t11;
    int t141;
    int t117;
    int t107;

    if ((*(short *)((((((*(int *)((a4 + 0x34))) << 2) << 2) + 0xC2460F4) + 0x4))) == 0) {
        t2 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    if (((unsigned short)(*(short *)((((((*(int *)((a4 + 0x34))) << 2) << 2) + 0xC2460F4) + 0x4))) != 2) && (t10 = *(int *)((a4 + 0x34)), t11 = *(int *)(((((t10 << 2) << 2) + 0xC2460F4) + 0xC)), t11 == 3)) {
        t141 = t11;
    } else {
        t17 = *(int *)((((*(int *)((a4 + 0x30))) << 2) + 0xC247030));
        if (((int)t17 >= (int)0x2) && (t17 != 5)) {
        } else {
            t18 = ((int (*)(int))(FUN_0c0e19f2))(t17);
        }
        t24 = *(int *)((((*(int *)((a4 + 0x30))) << 2) + 0xC246FF0));
        if ((unsigned short)(*(short *)((((((*(int *)((a4 + 0x34))) << 2) << 2) + 0xC2460F4) + 0x4))) != 2) {
            *(float *)(((0x45C + t24) + 0x8)) = 1.0f;
            *(float *)(((0x45C + t24) + 0x4)) = 1.0f;
            t27 = ((int (*)(int))(FUN_0c0e19f2))((0x45C + t24));
        }
        t33 = *(int *)((a4 + 0x38));
        if (t33 != 0) {
            if (t33 != 1) {
                if (t33 != 2) {
                    if (t33 != 3) {
                    } else {
                        if ((int)(*(int *)((a4 + 0x40))) >= (int)0x1E) {
                            *(float *)((a4 + 0x44)) = 1.0f;
                            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
                        } else {
                            *(float *)((a4 + 0x44)) = ((-(*(float *)((a4 + 0x44)))) + 1.0f);
                        }
                    }
                } else {
                    *(float *)((a4 + 0x44)) = ((*(float *)((a4 + 0x44))) + (*(float *)(((0x48 + a4) + 0x0))));
                    if (!((*(float *)0xC090688) > (*(float *)((a4 + 0x44))))) {
                        *(float *)((a4 + 0x44)) = (*(float *)0xC09068C);
                        *(unsigned int *)((a4 + 0x38)) = 0x0;
                    }
                }
            } else {
                u65 = *(float *)(((0x48 + a4) + 0x0));
                u66 = *(float *)((a4 + 0x44));
                *(float *)((a4 + 0x44)) = (u66 - u65);
                if (!((u66 - u65) > 0.0f)) {
                    *(float *)((a4 + 0x44)) = 0.0f;
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
                }
            }
        } else {
            *(volatile int *)((t24 + 0x4E4));
            *(volatile int *)((t24 + 0x3B4));
            t79 = FUN_0c0e5dc0();
            *(unsigned int *)((a4 + 0x3C)) = t79;
            if ((int)t79 < (int)0x2) {
                *(unsigned int *)((a4 + 0x3C)) = 0x2;
            }
            *(float *)((a4 + 0x48)) = (3.0f / (float)(*(int *)((a4 + 0x3C))));
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
            u83 = *(float *)(((0x48 + a4) + 0x0));
            u84 = *(float *)((a4 + 0x44));
            *(float *)((a4 + 0x44)) = (u84 - u83);
            if (!((u84 - u83) > 0.0f)) {
                *(float *)((a4 + 0x44)) = 0.0f;
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1);
            }
        }
        u96 = *(float *)((a4 + 0x44));
        u97 = u96;
        if (u96 > 1.0f) {
            u97 = 1.0f;
        }
        *(float *)(((0x45C + t24) + 0x8)) = u97;
        *(float *)(((0x45C + t24) + 0x4)) = u97;
        t125 = (0x45C + t24);
        if ((*(int *)((t24 + 0x4E4))) == 0) {
            if ((*(int *)((t24 + 0x554))) == 2) {
                if (((int)(*(int *)((a4 + 0x40))) > 0) && (t107 = *(int *)((a4 + 0x38)), (int)t107 <= (int)0x2)) {
                    *(unsigned int *)(((0x40 + a4) + 0x0)) = 0x0;
                    *(float *)((a4 + 0x44)) = 0.0f;
                    *(unsigned int *)((a4 + 0x38)) = 0x3;
                }
                t117 = (0x45C + t24);
            } else {
                *(float *)(((0x45C + t24) + 0x8)) = 1.0f;
                *(float *)(((0x45C + t24) + 0x4)) = 1.0f;
                t112 = ((int (*)(int))(FUN_0c0e19f2))((0x45C + t24));
            }
            t125 = t117;
        }
        *(unsigned int *)((a4 + 0x40)) = ((*(int *)((a4 + 0x40))) + 0x1);
        t132 = 0x40;
        if ((int)(*(int *)((a4 + 0x38))) > (int)0x3) {
            t132 = (((int (*)(int))(FUN_0c0e19f2))(t125));
        }
        t141 = t132;
    }
    return t141;
}

int kdSendFrame(int a4, int a5)
{
    int t151;
    int t26;
    int t49;
    int t72;
    int t95;
    int t113;
    int t119;
    int t126;
    int t137;
    int t147;

    t151 = 0x0;
    if ((*(int *)0xC9542AC) == 0) {
    } else {
        *(unsigned int *)0xC9542C0 = ((*(int *)0xC9542C4) - 1);
        *(unsigned int *)0xC9542C4 = 0x0;
        if ((*(int *)0xC9542BC) != 0) {
            *(unsigned int *)0xC9542C8 = ((*(int *)0xA05F80C4) & 0x3FF);
            *(unsigned int *)0xC9542CC = ((short)((unsigned int)(*(int *)0xA05F80C4) >> 16) & 0x3FF);
        }
        *(unsigned int *)0xC9542BC = 0x0;
        if ((*(int *)0xC9542B8) != 0) {
            *(unsigned int *)0xA05F8040 = (*(int *)0xC9542B4);
            *(unsigned int *)0xA05F80E8 = ((*(int *)0xA05F80E8) & 0xFFFFFFF7);
            *(unsigned int *)0xC9542B8 = 0x0;
        }
        if (((*(int *)0xA05F6908) & 0xF00) != 0) {
            if (((*(int *)0xA05F6908) & 0x800) != 0) {
                *(unsigned int *)0xC954048 = ((*(int *)0xC954048) + 0x1);
                if ((*(int *)0xC954064) != 0) {
                    t26 = ((int (*)(int, int, int, int))((*(int *)0xC954064)))(0x1, 0xFFFFFFFE, (*(int *)0xC954034), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x400) != 0) {
                *(unsigned int *)0xC95404C = ((*(int *)0xC95404C) + 0x1);
                if ((*(int *)0xC954064) != 0) {
                    t49 = ((int (*)(int, int, int, int))((*(int *)0xC954064)))(0x1, 0xFFFFFFFD, (*(int *)0xC954034), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x200) != 0) {
                *(unsigned int *)0xC954050 = ((*(int *)0xC954050) + 0x1);
                if ((*(int *)0xC954064) != 0) {
                    t72 = ((int (*)(int, int, int, int))((*(int *)0xC954064)))(0x1, 0xFFFFFFFC, (*(int *)0xC954034), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x100) != 0) {
                *(unsigned int *)0xC954054 = ((*(int *)0xC954054) + 0x1);
                if ((*(int *)0xC954064) != 0) {
                    t95 = ((int (*)(int, int, int, int))((*(int *)0xC954064)))(0x1, 0xFFFFFFFB, (*(int *)0xC954034), (*(int *)0xA05F6908));
                }
            }
            *(unsigned int *)0xA05F6908 = 0xF00;
            kdRecvFrame();
            t113 = ((int (*)(void))(mpdrv_frame_send))();
            if ((int)t113 >= 0) {
                copy_device();
            } else {
                if ((*(int *)0xC954064) != 0) {
                    t119 = ((int (*)(int, int, int, int))((*(int *)0xC954064)))(0x1, 0xFFFFFFFA, (*(int *)0xC954034), t113);
                }
            }
            t147 = t113;
        } else {
            t126 = ((int (*)(int))(mpdrv_frame_send))(0xC9542B8);
            if ((int)t126 >= 0) {
                *(unsigned int *)0xC9542DC = 0x0;
                *(unsigned short *)(((((*(int *)0xC9542B0) << 1) + 0xC954060) + 0x0)) = 0x0;
                *(unsigned short *)(((((*(int *)0xC9542B0) << 1) + 0xC954058) + 0x0)) = ((*(int *)0xA05F810C) & 0x3FF);
                copy_device();
                *(unsigned int *)0xC95402C = ((*(int *)0xC95402C) + 0x1);
            } else {
                kdRecvFrame();
                *(unsigned int *)0xC95403C = ((*(int *)0xC95403C) + 0x1);
                if ((*(int *)0xC954064) != 0) {
                    t137 = ((int (*)(int, int, int, int))((*(int *)0xC954064)))(0x1, 0xFFFFFFF9, (*(int *)0xC954034), t126);
                }
            }
            t147 = t126;
        }
        t151 = t147;
    }
    return t151;
}

float FUN_0c022c5e(int a4)
{
    int t7;
    float u30;
    int t21;
    float u23;
    float u31;
    float u49;
    float u50;
    float u51;
    float u52;
    float u53;
    float u59;
    float u60;
    float u55;
    float u56;
    float u62;
    float u63;
    float u64;
    float u65;
    float u66;
    float u67;
    float u76;
    float u77;
    float u72;
    float u73;
    int t1;
    int t2;
    float u14;
    int t16;
    int t17;
    float u58;

    if (((*(int *)((a4 + 0x50C))) != 0) && (t1 = *(int *)((a4 + 0x510)), t2 = *(int *)((((t1 << 2) + 0xC247030) + 0x0)), t2 != 0)) {
        u14 = (*(float *)(((*(int *)(((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0) + 0x0))) + 0x390)));
    } else {
        t7 = *(short *)(((*(int *)0xC23ECFC) + 0x2));
        u14 = (*(float *)((0xC205CBC + ((((t7 << 1) + t7) << 2) << 1))));
    }
    u30 = 35.0f;
    if (((*(int *)((a4 + 0x50C))) != 0) && (t16 = *(int *)((a4 + 0x510)), t17 = *(int *)((0xC247030 + (t16 << 2))), t17 == 4)) {
        t21 = *(int *)((a4 + 0x510));
        u23 = (*(float *)(((((((t21 << 1) + t21) << 2) << 2) << 2) + 0xC23F26C)));
        u23 = u23 + 0.5f * (*(float *)((((*(int *)(((0x510 + a4) + 0x0))) << 2) + (0xC247084 + ((((*(int *)((a4 + 0xBC))) << 2) << 2) << 2)))));
        u30 = (u23 - u14);
    }
    u31 = u30;
    if (u30 > 40.0f) {
        u31 = 40.0f;
    }
    if (!((*(float *)((a4 + 0x34))) > (u14 + u31))) {
        *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) + 0.0272199996f);
    }
    if ((*(float *)((a4 + 0x34))) > (u14 + u31)) {
        *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) + 0.0f);
    }
    *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) - 0.0272199996f);
    *(float *)((a4 + 0x48)) = (*(float *)((a4 + 0x60)));
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x64))) * 0.949999988f);
    *(float *)((a4 + 0x50)) = (*(float *)((a4 + 0x68)));
    nlAddVector((a4 + 0x48), (0x4B0 + a4));
    u49 = *(float *)((a4 + 0x48));
    u50 = *(float *)((a4 + 0x4C));
    u51 = *(float *)((a4 + 0x50));
    u52 = (u50 * u50);
    u52 = u52 + u49 * u49;
    u53 = u52;
    u53 = u53 + u51 * u51;
    u59 = _builtin_sqrtf(u53);
    u60 = u51;
    if (!(3.0f > _builtin_sqrtf(u53))) {
        *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) * (3.0f / _builtin_sqrtf(u53)));
        u55 = *(float *)((a4 + 0x4C));
        *(float *)((a4 + 0x4C)) = (u55 * (3.0f / _builtin_sqrtf(u53)));
        u56 = *(float *)((a4 + 0x50));
        *(float *)((a4 + 0x50)) = (u56 * (3.0f / _builtin_sqrtf(u53)));
        u58 = (u55 * (3.0f / _builtin_sqrtf(u53)));
        u59 = (u56 * (3.0f / _builtin_sqrtf(u53)));
        u60 = (3.0f / _builtin_sqrtf(u53));
    }
    u62 = *(float *)((a4 + 0x48));
    u63 = *(float *)((a4 + 0x4C));
    u64 = *(float *)((a4 + 0x50));
    u65 = (u63 * u63);
    u65 = u65 + u62 * u62;
    u66 = *(float *)((a4 + 0x550));
    u67 = u65;
    u67 = u67 + u64 * u64;
    u76 = u58;
    u77 = _builtin_sqrtf(u67);
    if (!(u66 > _builtin_sqrtf(u67)) && (u66 != 0.0f)) {
        *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) * ((*(float *)(((0x550 + a4) + 0x0))) / _builtin_sqrtf(u67)));
        *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) * ((*(float *)(((0x550 + a4) + 0x0))) / _builtin_sqrtf(u67)));
        u72 = *(float *)(((0x550 + a4) + 0x0));
        u73 = *(float *)((a4 + 0x50));
        *(float *)((a4 + 0x50)) = (u73 * (u72 / _builtin_sqrtf(u67)));
        u76 = (u73 * (u72 / _builtin_sqrtf(u67)));
        u77 = (u72 / _builtin_sqrtf(u67));
    }
    return u64;
}
