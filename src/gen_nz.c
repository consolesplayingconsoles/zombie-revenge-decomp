/* Straight-line functions with calls and guards (batch gen_nz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(int, int);
int ADXCRS_Unlock(void);
int ADXSJD_Stop(int);
int ADXSTM_Seek(int, int);
int ADXSTM_Start(int);
int ADXSTM_Stop(int);
int FUN_0c0745a0(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0bb0f4(int);
int FUN_0c0c465c(int);
int FUN_0c0c47ae(int);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d8590(void);
int FUN_0c0da2e0(void);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int adxt_start_sj(int, int);
int kmSetSystemConfiguration(int);
int kmiCopyToFrameBuffer(int, int, int);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSubVector(int, int);
int nlUnitMatrix(void);
int thunk_FUN_0c22bece(int, int);
int thunk_FUN_0c22bfa2(int, int);
int FUN_0c0747d6(int a4);
int FUN_0c09c02a(int a4, int a5, int a6, int a7);
int vmsfs_init_work_normal(int a4, int a5, int a6);
int FUN_0c0d9450(int a4, int a5, int a6, int a7);
int adxt_RcvrReplay(int a4, int a5);
int FUN_0c010b04(int a4, float f4, float f5, float f6, float f7);
int kmLoadRectangleTexturePart(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c0a2122(int a4, int a5);

int FUN_0c0747d6(int a4)
{
    int stk[11];

    register int R3;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_2 = a4;
    v0_1 = (v0_2);
    v0_0 = (v0_2);
    v0_2 = (0x0);
    v0_4 = (0x0);
    v0_5 = (0xC246FF0);
    v0_6 = (0x30);
    L_C0747FA:;
    v0_7 = *(int *)((v0_2 + (v0_5 + 0x40)));
    v0_3 = (v0_7);
    if ((v0_7 != 4)) goto L_C074840;
    v0_2 = *(int *)(((v0_5 + v0_4) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x54)) = *(struct mv3 *)((v0_2 + 0x30)); }
    v0_2 = (v0_2);
    L_C074848:;
    nlPushMatrix(0x0);
    FUN_0c0dcca0((v0_0 + 0x30));
    nlRotateAZ((*(short *)((v0_0 + 0x64))));
    nlRotateAY((*(short *)((v0_0 + 0x62))));
    nlRotateAX((*(short *)((v0_0 + 0x60))));
    FUN_0c0c465c((*(int *)((v0_0 + 0x78))));
    FUN_0c0745a0(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcca0((v0_0 + 0x30));
    nlRotateAZ((*(short *)((v0_0 + 0x64))));
    nlRotateAY((*(short *)((v0_0 + 0x62))));
    nlRotateAX((*(short *)((v0_0 + 0x60))));
    FUN_0c0dcc70(0.0f, -5.28999996f, -68.3689957f);
    FUN_0c0db840((((int)stk + 4) + 0x1C));
    *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(float *)(((int)stk + 36)));
    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 40)));
    FUN_0c0a7714((((int)stk + 4) + 0x4), ((int)stk + 4), ((*(float *)(((int)stk + 20))) - (*(float *)((v0_0 + 0x54)))), ((*(float *)(((int)stk + 16))) - (*(float *)((v0_0 + 0x58)))), ((*(float *)(((int)stk + 12))) - (*(float *)((v0_0 + 0x5C)))));
    *(unsigned int *)(((int)stk + 8)) = (unsigned short)(0x10000 - (*(int *)(((int)stk + 8))));
    *(unsigned int *)(((int)stk + 4)) = (unsigned short)(*(int *)(((int)stk + 4)));
    nlPopMatrix(0x1);
    v0_2 = (0xC0DC4C0);
    v0_2 = (0xC0DC890);
    v0_2 = (0xC0DC6E0);
    v0_2 = (0x438E);
    v0_3 = (0xC0DCCA0);
    v0_3 = (0xC0DC510);
    w0_0 = (-68.3689957f);
    w0_1 = (-5.28999996f);
    w0_2 = (0.0f);
    if (((int)(*(int *)(((int)stk + 4))) >= (int)0x438E)) goto L_C07492C;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    L_C07492C:;
    v0_2 = (0xBC71);
    if (((int)(*(int *)(((int)stk + 4))) <= (int)0xBC71)) goto L_C074936;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    L_C074936:;
    v0_3 = (0xB4);
    if (((int)(*(int *)((v0_1 + 0xB4))) >= (int)(*(int *)(((int)stk + 8))))) goto L_C074956;
    *(unsigned int *)((v0_1 + v0_3)) = ((*(int *)((v0_1 + v0_3))) + 0x7F);
    if (((int)(*(int *)((v0_1 + 0xB4))) <= (int)(*(int *)(((int)stk + 8))))) goto L_C074976;
    *(unsigned int *)((v0_1 + 0xB4)) = (*(int *)(((int)stk + 8)));
    L_C074956:;
    v0_3 = (0xB4);
    if (((int)(*(int *)((v0_1 + 0xB4))) <= (int)(*(int *)(((int)stk + 8))))) goto L_C074976;
    *(unsigned int *)((v0_1 + v0_3)) = ((*(int *)((v0_1 + v0_3))) - 127);
    if (((int)(*(int *)((v0_1 + 0xB4))) >= (int)(*(int *)(((int)stk + 8))))) goto L_C074976;
    *(unsigned int *)((v0_1 + 0xB4)) = (*(int *)(((int)stk + 8)));
    L_C074976:;
    v0_3 = (0xB8);
    v0_2 = ((*(int *)((v0_1 + 0xB8))));
    v0_4 = ((*(int *)(((int)stk + 4))));
    if (((int)v0_2 >= (int)v0_4)) goto L_C0749DE;
    *(unsigned int *)((v0_1 + v0_3)) = ((*(int *)((v0_1 + v0_3))) + 0x7F);
    if (((int)(*(int *)((v0_1 + 0xB8))) <= (int)(*(int *)(((int)stk + 4))))) goto L_C0749DE;
    *(unsigned int *)((v0_1 + 0xB8)) = (*(int *)(((int)stk + 4)));
    L_C0749DE:;
    v0_3 = (0xB8);
    if (((int)(*(int *)((v0_1 + 0xB8))) <= (int)(*(int *)(((int)stk + 4))))) goto L_C0749FE;
    *(unsigned int *)((v0_1 + v0_3)) = ((*(int *)((v0_1 + v0_3))) - 127);
    if (((int)(*(int *)((v0_1 + 0xB8))) >= (int)(*(int *)(((int)stk + 4))))) goto L_C0749FE;
    *(unsigned int *)((v0_1 + 0xB8)) = (*(int *)(((int)stk + 4)));
    L_C0749FE:;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((v0_1 + 0xB4)));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((v0_1 + 0xB8)));
    nlPushMatrix(0x0);
    FUN_0c0dcc70(w0_2, w0_1, w0_0);
    nlRotateAY((*(int *)(((int)stk + 4))));
    nlRotateAX((*(int *)(((int)stk + 8))));
    nlRotateAY(0x8000);
    nlRotateAX(0x2000);
    FUN_0c0c465c(0xF06);
    nlPopMatrix(0x1);
    nlUnitMatrix();
    FUN_0c0dcca0((v0_0 + 0x30));
    nlRotateAZ((*(short *)((v0_0 + 0x64))));
    nlRotateAY((*(short *)((v0_0 + 0x62))));
    nlRotateAX((*(short *)((v0_0 + 0x60))));
    FUN_0c0dcc70(w0_2, w0_1, w0_0);
    nlRotateAY((*(int *)(((int)stk + 4))));
    nlRotateAX((*(int *)(((int)stk + 8))));
    FUN_0c0dcc70(-2.29999995f, 0.799999952f, 4.5f);
    nlRotateAY(0x7B90);
    nlRotateAX(0x8000);
    FUN_0c0db840((((int)stk + 4) + 0x1C));
    *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = (*(float *)(((int)stk + 32)));
    *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(float *)(((int)stk + 36)));
    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 40)));
    FUN_0c0db4d0(0xC200604, (((int)stk + 4) + 0x1C));
    FUN_0c0a7714((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x18), (*(float *)(((int)stk + 32))), (*(float *)(((int)stk + 36))), (*(float *)(((int)stk + 40))));
    *(float *)0xC20A270 = (*(float *)(((int)stk + 20)));
    *(float *)0xC20A274 = (*(float *)(((int)stk + 16)));
    *(float *)0xC20A278 = (*(float *)(((int)stk + 12)));
    *(unsigned int *)0xC20A27C = (*(int *)(((int)stk + 24)));
    *(unsigned int *)0xC20A280 = (*(int *)(((int)stk + 28)));
    *(unsigned int *)0xC20A284 = 0x0;
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0FE498);
    nlRotateAX((*(short *)0xC0FE4A4));
    v0_1 = *(int *)((v0_0 + 0xA0));
    *(unsigned int *)((v0_0 + 0xA0)) = (v0_1 + 0x1);
    nlRotateAY(((v0_1 + 0x1) * 0x2900));
    FUN_0c0c465c((*(short *)0xC0FE4AA));
    nlPopMatrix(0x1);
    v0_2 = (0x0);
    nlPushMatrix(v0_2);
    FUN_0c0dcca0(0xC0FE4B0);
    v0_0 = *(int *)((v0_0 + 0xA0));
    nlRotateAX((((((v0_0 << 1) + v0_0) << 8) << 2) << 1));
    FUN_0c0c465c((*(short *)0xC0FE4C2));
    nlPopMatrix(0x1);
    return (nlPopMatrix(0x1));
    L_C074840:;
    v0_3 = (unsigned int)(v0_2 + 0x4) < (unsigned int)v0_6;
    v0_2 = ((v0_2 + 0x4));
    v0_4 = ((v0_4 + 0x4));
    if (v0_3) goto L_C0747FA;
    goto L_C074848;
}

int FUN_0c09c02a(int a4, int a5, int a6, int a7)
{
    int stk[13];
    register int t2;
    register float u5;
    register int t16;
    int t30;
    register int t44;
    register int t56;
    register int t62;
    register int t70;
    register int t72;
    register int t75;
    register int t73;
    register int t79;
    register int t77;
    register int t80;
    register int t81;
    register int t82;
    register int t87;
    register int t99;

    *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x30)));
    t2 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    u5 = 1.0f;
    if (((*(int *)0xC23A258) & 1) != 0) {
        u5 = 0.5f;
    }
    if (((*(int *)0xC23ED5C) & 6) != 0) {
        FUN_0c0cc3f8(0x524A9, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        FUN_0c0e19f2();
    }
    if ((*(int *)((a4 + 0x44))) == 0) {
        t16 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t16 - 1);
        if ((int)(t16 - 1) < 0) {
            FUN_0c0cc3f8(0x524A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            FUN_0c0e19f2();
        }
    }
    t30 = *(int *)((((*(int *)((a4 + 0x48))) << 2) + 0xC247030));
    if ((t30 != 4) && (t30 != 2)) {
        FUN_0c0cc3f8(0x524A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        FUN_0c0e19f2();
    }
    nlPushMatrix(0x0);
    FUN_0c0dbda0((*(int *)(((*(int *)(((int)stk + 4))) + 0x3E4))));
    FUN_0c0db840((((int)stk + 4) + 0x24));
    nlUnitMatrix();
    FUN_0c0dcca0((((int)stk + 4) + 0x24));
    t44 = *(int *)0xC23A258;
    nlRotateAY(((((t44 << 1) + t44) << 8) << 1));
    FUN_0c0dcca0(0xC200C48);
    FUN_0c0db840((((int)stk + 4) + 0x24));
    nlSubVector((((int)stk + 4) + 0x24), (a4 + 0x4C));
    FUN_0c0dce80((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24), 0.129999995f);
    nlAddVector((a4 + 0x4C), (((int)stk + 4) + 0xC));
    nlUnitMatrix();
    FUN_0c0dcca0((a4 + 0x4C));
    FUN_0c0848bc((u5 * 0.839999974f), (u5 * 0.869999945f), (u5 * 1.57999992f));
    t56 = 0x2;
    for (;;) {
        nlPushMatrix(0x0);
        nlRotateAY((*(short *)((t2 + 0x3CE))));
        nlRotateAX((*(short *)((t2 + 0x3CC))));
        t62 = FUN_0c0da2e0();
        nlRotateAZ((t62 << 1));
        nlScale(4.76999998f, 4.76999998f, 1.0f);
        FUN_0c0de000(4.76999998f);
        FUN_0c0c47ae(0x291);
        nlPopMatrix(0x1);
        t56 = (t56 - 0x1);
        if (t56 == 0) {
            break;
        }
    }
    FUN_0c0848bc((u5 * 0.529999971f), (u5 * 0.649999976f), (u5 * 2.47999978f));
    *(unsigned int *)(((int)stk + 4)) = 0xD;
    *(unsigned int *)(((int)stk + 8)) = 0x40;
    t70 = 0x47AE927;
    for (;;) {
        t72 = *(int *)(((int)stk + 4));
        t75 = (t70 & 0x1);
        t73 = (int)(((unsigned int)t75 >> 1) | ((unsigned int)t75 << 31));
        t79 = ((((t70 >> 1) | t73) ^ t72) & 0x1);
        t77 = (int)(((unsigned int)t79 >> 1) | ((unsigned int)t79 << 31));
        t80 = ((((((t70 >> 1) | t73) ^ t72) >> 1) | t77) ^ (((((t70 >> 1) | t73) ^ t72) | t72) * 0x22AC8EE1));
        t81 = (((t70 >> 1) | t73) ^ t72);
        t82 = ((((((t70 >> 1) | t73) ^ t72) | t72) * 0x22AC8EE1) | ((((((t70 >> 1) | t73) ^ t72) >> 1) | t77) ^ (((((t70 >> 1) | t73) ^ t72) | t72) * 0x22AC8EE1)));
        t70 = ((((((t70 >> 1) | t73) ^ t72) >> 1) | t77) ^ (((((t70 >> 1) | t73) ^ t72) | t72) * 0x22AC8EE1));
        t70 = (t70 >> 1);
        t87 = (t80 & 0x1);
        t70 = (t70 | ((int)(((unsigned int)t87 >> 1) | ((unsigned int)t87 << 31))));
        t70 = (t70 ^ (t82 * 0x22AC8EE1));
        *(unsigned int *)(((int)stk + 4)) = (((t82 * 0x22AC8EE1) | t70) * 0x22AC8EE1);
        *(unsigned int *)(((int)stk + 12)) = t70;
        nlPushMatrix(0x0);
        nlRotateAX(t80);
        nlRotateAZ((*(int *)(((int)stk + 12))));
        nlRotateAY((unsigned short)(((*(int *)0xC23A258) * 0x320) + t81));
        FUN_0c0dcca0(0xC200C54);
        nlScale(0.0199999996f, 0.0199999996f, 0.0199999996f);
        FUN_0c0de000(100.0f);
        FUN_0c0c47ae(0x3C9);
        nlPopMatrix(0x1);
        t99 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t99 - 1);
        if ((t99 - 1) == 0) {
            break;
        }
    }
    nlPopMatrix(0x1);
    return (FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12)));
}

int vmsfs_init_work_normal(int a4, int a5, int a6)
{
    int stk[6];

    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_6 = a4;
    v0_5 = a5;
    v0_7 = a6;
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    v0_8 = (v0_6);
    v0_0 = (0x1);
    v0_4 = (0xC239CF0);
    v0_1 = (0x0);
    v0_2 = (0xC956768);
    v0_5 = (0xC239D00);
    v0_3 = ((*(int *)0xC956764));
    v0_9 = (((v0_6 == 15)));
    if ((v0_6 == 15)) goto L_C225078;
    v0_9 = (((v0_8 == 33)));
    if ((v0_8 == 33)) goto L_C225080;
    v0_9 = (((v0_8 == 65)));
    if ((v0_8 == 65)) goto L_C22508A;
    v0_9 = (((v0_8 == 122)));
    if ((v0_8 == 122)) goto L_C225094;
    v0_8 = (0xFFFFFF00);
    L_C225182:;
    return v0_8;
    L_C225094:;
    *(unsigned int *)((v0_3 + 0x4)) = 0x3;
    v0_8 = ((*(int *)((v0_5 + 0xC))));
    v0_9 = (0x3);
    v0_5 = ((*(int *)((v0_4 + 0xC))));
    L_C22509C:;
    *(unsigned int *)(((int)stk + 20)) = v0_8;
    L_C2250CC:;
    v0_4 = (v0_5);
    *(unsigned int *)(((int)stk + 12)) = (((v0_6 << 8) << 1) + 0x20);
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    *(unsigned int *)(((int)stk + 16)) = (((v0_4 + 0x1) << 8) << 1);
    v0_6 = (v0_7);
    v0_4 = (0xC0E6368);
    v0_7 = (v0_1);
    L_C22517A:;
    if (((int)v0_7 < (int)0x8)) goto L_C2250E8;
    v0_8 = (0x0);
    goto L_C225182;
    L_C2250E8:;
    if ((((*(int *)(((int)stk + 8))) & (*(int *)(((int)stk + 4)))) == 0)) goto L_C22516E;
    *(unsigned char *)((v0_2 + 0x2)) = v0_0;
    *(unsigned short *)((v0_2 + 0x0)) = v0_7;
    *(unsigned int *)((v0_2 + 0x1C)) = ((v0_7 * 0x4C) + 0xC95B1C8);
    *(unsigned char *)((v0_2 + 0xA)) = v0_1;
    *(unsigned char *)((v0_2 + 0xB)) = v0_1;
    *(unsigned char *)((v0_2 + 0xC)) = v0_1;
    *(unsigned int *)((v0_2 + 0x2C)) = v0_6;
    *(unsigned int *)((v0_2 + 0x20)) = (v0_6 + 0x20);
    *(unsigned int *)((v0_2 + 0x24)) = (0x220 + v0_6);
    *(unsigned int *)((v0_2 + 0x28)) = (((*(int *)(((int)stk + 16))) + v0_6) + 0x20);
    *(unsigned char *)((v0_2 + 0x8)) = v0_1;
    *(unsigned char *)((v0_2 + 0x9)) = v0_1;
    *(unsigned short *)((v0_2 + 0xE)) = v0_0;
    *(unsigned short *)((v0_2 + 0x10)) = v0_5;
    *(unsigned short *)((v0_2 + 0x12)) = (*(short *)(((int)stk + 20)));
    *(unsigned short *)((v0_2 + 0x14)) = 0x20;
    v0_8 = ((int (*)(int, int, int, int))(v0_4))((v0_2 + 0x38), 0x0, 0x10, v0_3);
    v0_8 = ((int (*)(int, int, int))(v0_4))((v0_2 + 0x48), 0x0, 0x100);
    v0_8 = ((int (*)(int, int, int))(v0_4))((*(int *)((v0_2 + 0x2C))), 0x47, 0x20);
    v0_8 = ((int (*)(int, int, int))(v0_4))((*(int *)((v0_2 + 0x20))), 0x53, 0x20);
    v0_8 = ((int (*)(int, int, int))(v0_4))((*(int *)((v0_2 + 0x24))), 0x46, 0x20);
    v0_8 = ((int (*)(int, int, int))(v0_4))((*(int *)((v0_2 + 0x28))), 0x44, 0x20);
    v0_6 = ((v0_6 + (*(int *)(((int)stk + 12)))));
    L_C22516E:;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) << 1);
    v0_2 = ((v0_2 + 0x148));
    v0_7 = ((v0_7 + 0x1));
    goto L_C22517A;
    L_C22508A:;
    *(unsigned int *)((v0_3 + 0x4)) = 0x2;
    v0_8 = ((*(int *)((v0_5 + 0x8))));
    v0_9 = (0x2);
    v0_5 = ((*(int *)((v0_4 + 0x8))));
    goto L_C22509C;
    L_C225080:;
    *(unsigned int *)((v0_3 + 0x4)) = v0_0;
    v0_9 = ((*(int *)((v0_5 + 0x4))));
    v0_5 = ((*(int *)((v0_4 + 0x4))));
    L_C225086:;
    *(unsigned int *)(((int)stk + 20)) = v0_9;
    goto L_C2250CC;
    L_C225078:;
    *(unsigned int *)((v0_3 + 0x4)) = v0_1;
    v0_9 = ((*(int *)((v0_5 + 0x0))));
    v0_5 = ((*(int *)((v0_4 + 0x0))));
    goto L_C225086;
}


int adxt_RcvrReplay(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    ADXCRS_Lock(a4, a5);
    thunk_FUN_0c22bece((*(int *)((a4 + 0xC))), 0x0);
    thunk_FUN_0c22bfa2((*(int *)((a4 + 0xC))), 0x0);
    ADXSJD_Stop((*(int *)((a4 + 0x4))));
    if ((*(int *)((a4 + 0x8))) != 0) {
        ADXSTM_Stop((*(int *)((a4 + 0x8))));
        t0 = *(int *)((a4 + 0x14));
        t1 = ((int (*)(int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x14)))))(t0);
    }
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        t1 = t0;
        t1 = (t1 << 2);
        t1 = (t1 + (a4 + 0x18));
        t1 = (*(int *)((t1 + 0x0)));
        t2 = ((int (*)(int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x14)))))(t1);
        t0 = (t0 + 0x1);
    }
    if ((*(int *)((a4 + 0x8))) != 0) {
        ADXSTM_Seek((*(int *)((a4 + 0x8))), 0x0);
        ADXSTM_Start((*(int *)((a4 + 0x8))));
    }
    adxt_start_sj(a4, (*(int *)((a4 + 0x14))));
    return ADXCRS_Unlock();
}


int kmLoadRectangleTexturePart(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int t0;
    register int t28;
    register int t1;
    register int t5;
    register int t8;
    register int t10;
    register int t13;
    register int t14;
    register int t15;

    t0 = *(int *)((a4 + 0x18));
    t28 = 0x4;
    if (((0x4 & t0) == 0) && (((0x1 & t0) == 0) && (((0x8 & t0) == 0) && ((0x20 & t0) == 0)))) {
        t1 = *(int *)((a4 + 0xC));
        t5 = *(int *)((a4 + 0x1C));
        t8 = a5;
        t10 = (a6 << 1);
        if (a12 == 0) {
        } else {
            t8 = ((((unsigned int)((a11 * (a12 << 1)) + (a10 << 1)) >> 2) << 2) + a5);
            t10 = (a12 << 1);
        }
        if ((unsigned int)0x0 < (unsigned int)a7) {
            t13 = 0x0;
            t14 = t8;
            t15 = (((a9 * (t1 << 1)) + (a8 << 1)) + t5);
            for (;;) {
                kmiCopyToFrameBuffer(t15, t14, (a6 << 1));
                t13 = (t13 + 0x1);
                t15 = (t15 + (t1 << 1));
                t14 = (t14 + (((unsigned int)t10 >> 2) << 2));
                if ((unsigned int)t13 >= (unsigned int)a7) {
                    break;
                }
            }
        }
        t28 = 0x0;
    }
    return t28;
}

int FUN_0c0a2122(int a4, int a5)
{
    register int t1;

    t1 = FUN_0c0e19aa(0xC0A1E7E, 0x214, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x30)) = a4;
    *(unsigned int *)((t1 + 0x40)) = ((int)0x2 << (int)(*(int *)((a4 + 0x2E8))));
    *(unsigned int *)(((0x44 + t1) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x6)));
    *(unsigned int *)((t1 + 0x38)) = (unsigned short)(*(short *)((a5 + 0x4)));
    *(unsigned int *)((t1 + 0x48)) = 0x392;
    if ((*(int *)((a4 + 0x3E4))) == 0) {
        FUN_0c0bb0f4(a4);
    }
    return FUN_0c0cbafc(0x392, 0x2, 0xFC000000, 0x84000000);
}
