/* Straight-line functions with calls and guards (batch gen_gw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXF_GetFileRange(int, int, int, int);
int ADXSTM_OpenRange(int, int, int);
int ADXT_Stop(void);
int FUN_0c019a5c(int, int, int, int);
int FUN_0c01cdf2(int);
int FUN_0c01f8a0(int, int, int);
int FUN_0c036efc(int, int, int, int);
int FUN_0c0553b6(int, int, int);
int FUN_0c0556ce(int, int, int);
int FUN_0c0619e0(int);
int FUN_0c062934(int, float, float);
int FUN_0c062a74(int);
int FUN_0c063df0(int, int, int);
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c085704(int);
int FUN_0c08a220(int, int);
int FUN_0c09c39c(int);
int FUN_0c0a6bf8(int, int, int, float);
int FUN_0c0a8d80(int);
int FUN_0c0ba6e8(int);
int FUN_0c0bbbf4(int);
int FUN_0c0c46cc(int);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0ce486(void);
int FUN_0c0cee62(void);
int FUN_0c0cee6a(int, float);
int FUN_0c0cf908(void);
int FUN_0c0cfaf2(int);
int FUN_0c0cfb00(int);
int FUN_0c0d1854(int);
int FUN_0c0d1862(int);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e18ce(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e6248(void);
int adxt_start_stm(int);
int kgCmiNewId(void);
int kmSetBorderColor(Stk4);
int kmSetFogTableColor(Stk4);
int kmSetFogVertexColor(Stk4);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int pdVibMxIsReady(int);
int pdVibStart(int, int, int);
int FUN_0c059620(int a4);
int FUN_0c08edf0(int a4);
int FUN_0c062c0a(int a4);
int FUN_0c095d14(int a4);
int FUN_0c0b25e4(int a4, int a5);
int FUN_0c08e970(int a4, int a5, float f4);
void FUN_0c0c6ac6(int a4, int a5, int a6);
int FUN_0c062f54(int a4, int a5, int a6);
int FUN_0c03746a(int a4);
int FUN_0c042ad8(int a4, int a5, int a6, float f4, float f5);
int FUN_0c076fdc(void);
int ADXT_StartAfs(int a4, int a5, int a6);
void FUN_0c09134c(int a4, int a5, int a6, int a7);
int FUN_0c09a4d6(int a4);
void FUN_0c075256(void);
int FUN_0c07a89a(int a4);
int FUN_0c081074(int a4);
void FUN_0c0cdff2(void);
void FUN_0c01d0be(int a4);
int FUN_0c016c10(int a4);
void FUN_0c01d10c(int a4);
void FUN_0c0999cc(int a4);
int FUN_0c0cf11c(int a4, int a5);
void FUN_0c01d276(int a4, int a5, int a6, int a7);
int FUN_0c086c1e(int a4, int a5, int a6, float f4);
int FUN_0c08f5d0(int a4, int a5);
void FUN_0c0d6592(int a4, int a5);
int FUN_0c070b90(int a4, int a5);
int FUN_0c08ad98(int a4);
int FUN_0c016c5e(int a4);
int FUN_0c0b2e84(int a4);
int FUN_0c0874ca(int a4, int a5, int a6, int a7);
void FUN_0c0b7f08(int a4, int a5);
int FUN_0c0cee9e(void);
int FUN_0c086bda(int a4, float f4);
int FUN_0c086b96(int a4);
int adxf_SetAfsFileInfo(int a4, int a5, int a6);
int FUN_0c01993e(int a4, int a5, int a6, int a7);
int FUN_0c08b088(int a4, int a5);
int FUN_0c037430(int a4);
int FUN_0c06a978(void);
int nlFogTableColor(int a4);
int FUN_0c0b251c(void);
void FUN_0c0b2984(int a4);
void FUN_0c089ac0(int a4);
int FUN_0c09c42c(int a4);
int FUN_0c09c460(int a4);
int FUN_0c044060(int a4);
int FUN_0c0b1fb4(void);
void SJ_SplitChunk(int a4, int a5, int a6, int a7);
int FUN_0c082260(void);
int pdVibMxStart(int a4, int a5);
int pdVibMxStop(int a4);
void FUN_0c0de310(float f4, float f5, float f6);
int FUN_0c0d8f50(int a4);
int FUN_0c0d8ed0(int a4);
int FUN_0c0d8ef0(int a4);
void FUN_0c0a8fd6(int a4, int a5);

int FUN_0c059620(int a4)
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
    FUN_0c0c46cc((*(int *)((a4 + t11))));
    return nlPopMatrix(0x1);
}

int FUN_0c08edf0(int a4)
{
    int t1;
    int t3;
    int t5;
    int t6;

    t1 = FUN_0c0e19aa(0xC08EABC, 0xAC8, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(a4); }
    t3 = 0x2A7;
    for (;;) {
        FUN_0c0cbafc(t3, 0x2, 0xFC006000, 0x84002000);
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x2B7) {
            break;
        }
    }
    t5 = 0x3E9;
    for (;;) {
        t6 = FUN_0c0cbafc(t5, 0x2, 0xFC006000, 0x84002000);
        t5 = (t5 + 0x1);
        if ((int)t5 >= (int)0x3EC) {
            break;
        }
    }
    return t6;
}

int FUN_0c062c0a(int a4)
{
    float u0;
    int t1;
    int t6;
    int t11;

    u0 = *(float *)0xC062CEC;
    t1 = FUN_0c062a74(a4);
    if (t1 == 0) {
        FUN_0c0e19f2();
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c062934(a4, u0, 1.0f);
    t6 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t6 - 1);
    if ((int)(t6 - 1) < 0) {
        *(unsigned int *)((a4 + 0x22C)) = (*(int *)((a4 + 0x240)));
        *(unsigned int *)((a4 + 0x0)) = 0xC062B5E;
    }
    t11 = *(int *)((a4 + 0x22C));
    if ((t11 & 15) == 0) {
        return FUN_0c0619e0(a4);
    }
    return t11;
}

int FUN_0c095d14(int a4)
{
    int t0;
    int stk[9];

    t0 = *(int *)((a4 + 0xBC));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F274)); }
    FUN_0c0dc5a0();
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    FUN_0c0db470(0xC10BC94, ((int)stk + 4));
    nlPopMatrix(0x1);
    FUN_0c09134c((((int)stk + 4) + 0xC), ((int)stk + 4), 0x8, 0x2);
    return (FUN_0c08a220((((int)stk + 4) + 0xC), 0x1));
}

int FUN_0c0b25e4(int a4, int a5)
{
    *(float *)((a4 + 0x274)) = 1.0f;
    *(float *)((a4 + 0x278)) = 1.0f;
    *(float *)((a4 + 0x27C)) = 1.0f;
    *(float *)((a4 + 0x284)) = 1.0f;
    *(unsigned int *)(((0xBC + a4) + 0x0)) = (kgCmiNewId());
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((a5 + 0x10)); }
    *(unsigned short *)((a4 + 0x6E)) = (*(int *)((a5 + 0xC)));
    *(unsigned int *)((a4 + 0xC0)) = (*(int *)((a5 + 0x4)));
    FUN_0c0855ba(a4);
    FUN_0c0ba6e8(a4);
    FUN_0c085638(a4);
    *(unsigned int *)((a4 + 0x2C4)) = (*(int *)((a5 + 0x8)));
    *(unsigned int *)((a4 + 0x2CC)) = 0x1;
    *(unsigned int *)((a4 + 0x288)) = 0x0;
    return 0x288;
}

int FUN_0c08e970(int a4, int a5, float f4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC08E7D4, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x70)) = *(struct mv3 *)(a4); }
    *(unsigned short *)((t1 + 0x8A)) = a5;
    *(float *)((t1 + 0x90)) = f4;
    *(unsigned short *)((t1 + 0x9A)) = 0x302;
    *(unsigned short *)((t1 + 0x9C)) = 0x1;
    *(unsigned short *)((t1 + 0xA0)) = 0xE;
    *(unsigned short *)((t1 + 0x98)) = (*(short *)((t1 + 0xA0)));
    *(unsigned short *)((t1 + 0x8E)) = 0x1E;
    *(float *)((t1 + 0x94)) = (float)(*(short *)((t1 + 0x8E)));
    return 0x94;
}

void FUN_0c0c6ac6(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t0;
    int t10;

    if ((int)a4 > (int)0x1869F) {
        for (t0 = 0; ; t0++) { *(unsigned char *)(a6 + t0) = *(unsigned char *)(0xC1E9810 + t0); if (*(unsigned char *)(0xC1E9810 + t0) == 0) break; }
    } else {
        t1 = a4;
        t2 = a6;
        t3 = 0xC1E981A;
        t4 = 0x0;
        t5 = 0x5;
        for (;;) {
            t6 = *(short *)((t3 + 0x0));
            t3 = (t3 + 0x2);
            t7 = 0x0;
            for (;;) {
                t1 = (t1 - (unsigned short)t6);
                if ((int)t1 < 0) {
                    break;
                }
                t7 = (t7 + 0x1);
            }
            t1 = (t1 + (unsigned short)t6);
            if ((t7 != 0) || ((t4 != 0) || (t5 == 1))) {
                t4 = 0x1;
                *(unsigned char *)((t2 + 0x0)) = (t7 + 0x30);
                t2 = (t2 + 0x1);
            }
            t5 = (t5 - 0x1);
            if (t5 == 0) {
                break;
            }
        }
        for (t10 = 0; ; t10++) { *(unsigned char *)(t2 + t10) = *(unsigned char *)(a5 + t10); if (*(unsigned char *)(a5 + t10) == 0) break; }
    }
}

int FUN_0c062f54(int a4, int a5, int a6)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC062FBA, 0x760, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x30)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)(a5); }
    *(unsigned int *)((t1 + 0x40)) = a6;
    *(float *)((t1 + 0x48)) = (*(float *)((a4 + 0x278)));
    *(unsigned int *)((t1 + 0x5C)) = (t1 + 0x60);
    *(float *)((t1 + 0x50)) = (*(float *)(((*(int *)0xC247B98) + 0x2C)));
    return FUN_0c0cbafc(0x291, 0x2, 0xFC001000, 0x84000000);
}

int FUN_0c03746a(int a4)
{
    int t4;
    int t6;

    nlAddVector((a4 + 0x30), (a4 + 0x48));
    *(float *)((a4 + 0x48)) = 0.0f;
    *(float *)((a4 + 0x4C)) = 0.0f;
    *(float *)((a4 + 0x50)) = 0.0f;
    nlAddVector((a4 + 0x30), (a4 + 0x54));
    FUN_0c085704(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c0bbbf4(a4);
    t4 = *(int *)((a4 + 0x2EC));
    t6 = t4;
    if ((t4 & 12) != 0) {
        *(unsigned int *)((a4 + 0x2C4)) = (*(int *)((a4 + 0x5B8)));
        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
        *(unsigned int *)((a4 + 0x0)) = 0xC037430;
        t6 = 0x2CC;
    }
    return t6;
}

int FUN_0c042ad8(int a4, int a5, int a6, float f4, float f5)
{
    int stk[13];

    *(unsigned int *)(((int)stk + 8)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)((((a5 << 2) << 2) + 0xC246A44)); }
    *(float *)(((int)stk + 36)) = f4;
    *(float *)(((int)stk + 40)) = f5;
    FUN_0c036efc((((int)stk + 4) + 0x14), (*(int *)(((int)stk + 8))), (((int)stk + 4) + 0x8), ((int)stk + 4));
    *(float *)((a6 + 0x0)) = ((*(float *)((a6 + 0x0))) + (*(float *)(((int)stk + 12))));
    *(float *)((a6 + 0x4)) = ((*(float *)((a6 + 0x4))) + (*(float *)(((((int)stk + 4) + 0xC) + 0x0))));
    *(float *)((a6 + 0x8)) = ((*(float *)((a6 + 0x8))) + (*(float *)(((((int)stk + 4) + 0x10) + 0x0))));
    return 0x8;
}

int FUN_0c076fdc(void)
{
    int t0;
    int t1;
    int t3;
    int t6;

    t0 = 0x0;
    t1 = 0xC0FFC08;
    for (;;) {
        t3 = FUN_0c0e19aa(0xC0186A4, 0xB4, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t3);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x30)) = *(struct mv3 *)(t1); }
        *(unsigned short *)(((0x62 + t3) + 0x0)) = (*(short *)((t1 + 0xE)));
        t6 = *(short *)((t1 + 0x12));
        t0 = (t0 + 0x1);
        *(unsigned int *)(((0x78 + t3) + 0x0)) = t6;
        t1 = (t1 + 0x18);
        if ((unsigned int)t0 >= (unsigned int)0x2) {
            break;
        }
    }
    return t6;
}

int ADXT_StartAfs(int a4, int a5, int a6)
{
    int t8;
    int t11;
    int t13;
    int stk[10];

    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned int *)(((int)stk + 28)) = a6;
    ADXT_Stop();
    ADXCRS_Lock();
    ADXF_GetFileRange((*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 28))), ((int)stk + 16), (((int)stk + 16) + 0x4));
    t8 = ADXSTM_OpenRange((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))), (*(int *)((a4 + 0x10))));
    *(unsigned int *)((a4 + 0x8)) = t8;
    if (t8 == 0) {
        ADXCRS_Unlock();
        t11 = (*(int *)(((int)stk + 28)));
        *(int *)((int)stk + 12) = t11;
        t13 = (*(int *)(((int)stk + 24)));
        *(int *)((int)stk + 8) = t13;
        *(int *)((int)stk + 4) = 0xC236C08;
        ADXERR_CallErrFunc(0xC236C08, t13, t11);
    } else {
        adxt_start_stm(a4);
    }
    return (ADXCRS_Unlock());
}

void FUN_0c09134c(int a4, int a5, int a6, int a7)
{
    int t2;

    if ((*(int *)0xC23ED84) == 1) {
        t2 = FUN_0c0e19aa(0xC0913AA, 0xB4, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t2);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)(a4); }
        *(float *)((t2 + 0x74)) = (*(float *)0xC091484);
        *(unsigned int *)((t2 + 0xA0)) = a6;
        *(unsigned int *)((t2 + 0xA4)) = a7;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x48)) = *(struct mv3 *)(a5); }
    }
}

int FUN_0c09a4d6(int a4)
{
    int t1;
    int t4;

    t1 = FUN_0c0e19aa(0xC099A68, 0x2ACC, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned short *)((a4 + 0x238)) = 0x0;
    *(unsigned int *)((t1 + 0x30)) = a4;
    *(unsigned int *)((t1 + 0x34)) = (*(int *)((a4 + 0xBC)));
    t4 = *(int *)((a4 + 0x2E8));
    *(unsigned int *)((t1 + 0x44)) = (((int)t4 >= 0) ? (0x2 << (t4 & 31)) : ((-(int)t4 & 31) ? ((int)0x2 >> (-(int)t4 & 31)) : ((int)0x2 >> 31)));
    *(float *)((t1 + 0x50)) = (*(float *)((a4 + 0x390)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x54)) = *(struct mv3 *)((0x274 + a4)); }
    return FUN_0c0cbafc(0x392, 0x2, 0xFC000000, 0x84000000);
}

void FUN_0c075256(void)
{
    int t0;
    int t1;
    int t3;

    t0 = 0x0;
    t1 = 0xC0FE510;
    for (;;) {
        t3 = FUN_0c0e19aa(0xC0751C8, 0x44, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t3);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x30)) = *(struct mv3 *)(t1); }
        t0 = (t0 + 0x1);
        *(unsigned int *)((t3 + 0x3C)) = (*(int *)((t1 + 0xC)));
        t1 = (t1 + 0x10);
        if ((unsigned int)t0 >= (unsigned int)0xA) {
            break;
        }
    }
}

int FUN_0c07a89a(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC07A944, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(0xC0FFD50); }
    FUN_0c0e6248();
    *(unsigned int *)(((0x78 + t1) + 0x0)) = (unsigned short)(*(short *)0xC0FFD62);
    *(unsigned int *)((t1 + 0x8C)) = a4;
    return 0x8C;
}

int FUN_0c081074(int a4)
{
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x6C)) = *(struct mv3 *)((0x284 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((0x260 + a4)); }
    FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
    if ((*(int *)((a4 + 0xD8))) != 0) {
        return FUN_0c0a6bf8((0xC8 + a4), (0xBC + a4), (0x260 + a4), 0.0f);
    }
    return 0xD8;
}

void FUN_0c0cdff2(void)
{
    *(float *)0xC23F1D0 = 1.0f;
    *(float *)0xC23F1CC = 1.0f;
    *(float *)0xC23F1C0 = 1.0f;
    *(float *)0xC23F1BC = 1.0f;
    *(float *)0xC23F1B0 = 320.0f;
    *(float *)0xC23F1B4 = 180.0f;
    *(float *)0xC23F1B8 = 0.00139999995f;
    *(float *)0xC23F1D8 = 1.0f;
    *(unsigned int *)0xC23F1E0 = 0xA;
    *(unsigned int *)0xC23F1DC = 0xFFFFFFFF;
    { struct mv14 { int w[14]; }; *(struct mv14 *)(0xC23F1E4) = *(struct mv14 *)(0xC23F1AC); }
    *(unsigned int *)0xC5229BC = 0x9;
}

void FUN_0c01d0be(int a4)
{
    int t0;
    int t5;

    t0 = FUN_0c0e1830(0xC01CF44, 0x80);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x38)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0xC0)));
    *(unsigned int *)((t0 + 0x34)) = (*(int *)((a4 + 0x350)));
    t5 = *(int *)((a4 + 0x340));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x3C)) = *(struct mv3 *)(((((t5 << 1) + t5) << 2) + 0xC1FEFBC)); }
}

int FUN_0c016c10(int a4)
{
    { struct mv8 { int w[8]; }; *(struct mv8 *)(0xC23ED04) = *(struct mv8 *)(((((a4 << 2) << 2) << 1) + 0xC207A8C)); }
    if (((*(int *)0xC23A1A8) & 1) != 0) {
        FUN_0c0cfaf2(a4);
    }
    if (((*(int *)0xC23A1A8) & 0x100) != 0) {
        FUN_0c0d1854(a4);
    }
    FUN_0c0cf908();
    return 0xC23ED04;
}

void FUN_0c01d10c(int a4)
{
    int t0;
    int t5;

    t0 = FUN_0c0e18ce(0xC01D01C, 0x80);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x38)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0xC0)));
    *(unsigned int *)((t0 + 0x34)) = (*(int *)((a4 + 0x34C)));
    t5 = *(int *)((a4 + 0x340));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x3C)) = *(struct mv3 *)(((((t5 << 1) + t5) << 2) + 0xC1FEFBC)); }
}

void FUN_0c0999cc(int a4)
{
    int t1;
    int t4;

    t1 = FUN_0c0e19aa(0xC099548, 0x2A8C, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x30)) = a4;
    *(unsigned int *)((t1 + 0x34)) = (*(int *)((a4 + 0xBC)));
    t4 = *(int *)((a4 + 0x2E8));
    *(unsigned int *)((t1 + 0x44)) = (((int)t4 >= 0) ? (0x2 << (t4 & 31)) : ((-(int)t4 & 31) ? ((int)0x2 >> (-(int)t4 & 31)) : ((int)0x2 >> 31)));
    *(float *)((t1 + 0x4C)) = (*(float *)((a4 + 0x390)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x50)) = *(struct mv3 *)((0x274 + a4)); }
}

int FUN_0c0cf11c(int a4, int a5)
{
    int t0;
    int t1;

    if ((int)a4 < (int)0x16) {
        t0 = FUN_0c0556ce(a4, 0x4, a5);
        if ((int)t0 >= 0) {
            t1 = *(int *)(((t0 << 2) + 0xC2475D4));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x60)) = *(struct mv3 *)(0xC20B2F0); }
            *(unsigned int *)((t1 + 0x25C)) = 0x0;
            return FUN_0c0cee6a(a5, (*(float *)0xC0CF22C));
        }
        return t0;
    }
    FUN_0c0553b6(a4, 0x4, a5);
    return FUN_0c0cee6a(a5, (*(float *)0xC0CF22C));
}

void FUN_0c01d276(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = FUN_0c0e18ce(0xC01D1AC, 0x80);
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x38)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((t0 + 0x30)) = (*(int *)((a4 + 0xC0)));
    *(unsigned int *)((t0 + 0x34)) = ((a5 << 16) | a6);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x3C)) = *(struct mv3 *)(a7); }
}

int FUN_0c086c1e(int a4, int a5, int a6, float f4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC086CAC, 0x50, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    { struct mv4 { int w[4]; }; *(struct mv4 *)((t1 + 0x30)) = *(struct mv4 *)(a4); }
    *(float *)((t1 + 0x40)) = f4;
    *(unsigned int *)((t1 + 0x48)) = a5;
    *(unsigned int *)((t1 + 0x4C)) = a6;
    return 0x4C;
}

int FUN_0c08f5d0(int a4, int a5)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC08C4D8, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x70)) = *(struct mv3 *)(a4); }
    *(unsigned short *)((t1 + 0x8A)) = a5;
    *(float *)((t1 + 0x90)) = (*(float *)0xC08F720);
    *(unsigned short *)((t1 + 0x9A)) = 0x328;
    *(unsigned short *)((t1 + 0xA0)) = 0x15;
    return 0xA0;
}

void FUN_0c0d6592(int a4, int a5)
{
    int t8;
    int t6;
    int t4;
    int t2;
    int t0;

    t8 = (0xA4 + a4);
    if (a5 != 0) {
        t6 = (0xCC + a4);
        if (a5 != 1) {
            t4 = (0xF4 + a4);
            if (a5 != 2) {
                t2 = (0x11C + a4);
                if (a5 != 3) {
                    t0 = (0x144 + a4);
                    if (a5 != 4) {
                        t0 = a5;
                    }
                    t2 = t0;
                }
                t4 = t2;
            }
            t6 = t4;
        }
        t8 = t6;
    }
    { struct mv10 { int w[10]; }; *(struct mv10 *)((a4 + 0x7C)) = *(struct mv10 *)(t8); }
}

int FUN_0c070b90(int a4, int a5)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC070C96, 0x474, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(a4); }
    *(unsigned int *)((t1 + 0x28C)) = 0x1260;
    *(unsigned int *)((t1 + 0xBC)) = 0x2;
    *(unsigned short *)((t1 + 0x6E)) = a5;
    *(unsigned int *)((t1 + 0x29C)) = (*(short *)((t1 + 0x6E)));
    return 0x29C;
}

int FUN_0c08ad98(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC08AE04, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x70)) = *(struct mv3 *)(a4); }
    *(unsigned short *)((t1 + 0x9A)) = 0x296;
    *(unsigned short *)((t1 + 0xA2)) = 0x1;
    *(float *)((t1 + 0x90)) = 0.375f;
    *(unsigned short *)((t1 + 0x8E)) = 0x6B;
    return 0x8E;
}

int FUN_0c016c5e(int a4)
{
    { struct mv8 { int w[8]; }; *(struct mv8 *)(0xC23ED24) = *(struct mv8 *)(((((a4 << 2) << 2) << 1) + 0xC207A8C)); }
    if (((*(int *)0xC23A1A8) & 1) != 0) {
        FUN_0c0cfb00(a4);
    }
    if (((*(int *)0xC23A1A8) & 0x100) != 0) {
        FUN_0c0d1862(a4);
    }
    return 0xC23ED24;
}

int FUN_0c0b2e84(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC0B2ECC, 0xB4, (*(int *)0xC23ECE4));
    *(unsigned int *)((t1 + 0x7C)) = (*(int *)((a4 + 0x8)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((a4 + 0x10)); }
    *(unsigned int *)(((0x98 + t1) + 0x0)) = ((FUN_0c0da2e0()) & 0x7);
    *(unsigned int *)((t1 + 0x9C)) = 0x0;
    return 0x9C;
}

int FUN_0c0874ca(int a4, int a5, int a6, int a7)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC087510, 0x60, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)(a5); }
    *(unsigned int *)((t1 + 0x30)) = a4;
    *(unsigned int *)((t1 + 0x5C)) = a6;
    *(unsigned int *)((t1 + 0x58)) = a7;
    return 0x58;
}

void FUN_0c0b7f08(int a4, int a5)
{
    int t0;
    int t2;
    int t3;
    int t4;

    t0 = FUN_0c0e1830(0xC0B7F4E, 0xC8);
    FUN_0c0e19d0(t0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)(a4); }
    t2 = (0xB4 + t0);
    t3 = a5;
    for (;;) {
        t4 = *(signed char *)((t3 + 0x0));
        t3 = (t3 + 0x1);
        *(unsigned char *)((t2 + 0x0)) = t4;
        t2 = (t2 + 0x1);
        if ((unsigned int)t2 >= (unsigned int)((0xB4 + t0) + 0x14)) {
            break;
        }
    }
}

int FUN_0c0cee9e(void)
{
    float u1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t3;

    FUN_0c0cee62();
    u1 = *(float *)0xC0CF100;
    t2 = 0xC0CF100;
    t4 = 0x4;
    t5 = 0xC247B24;
    for (;;) {
        t6 = (t5 + 0x8);
        for (;;) {
            t7 = *(int *)((t6 + 0x0));
            t6 = (t6 + 0x4);
            if (t7 != 0) {
                t2 = (FUN_0c0cee6a((t7 + 0x30), u1));
            }
            t3 = t5;
            t3 = (t3 + 0x18);
            if ((unsigned int)t6 >= (unsigned int)t3) {
                break;
            }
        }
        t4 = (t4 - 0x1);
        t5 = (t5 + 0x18);
        if (t4 == 0) {
            break;
        }
    }
    return t2;
}

int FUN_0c086bda(int a4, float f4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC08C25A, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x70)) = *(struct mv3 *)(a4); }
    *(float *)((t1 + 0x90)) = f4;
    *(unsigned short *)((t1 + 0x9A)) = 0x245;
    *(unsigned short *)((t1 + 0xA0)) = 0x14;
    return 0xA0;
}

int FUN_0c086b96(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC08C25A, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x70)) = *(struct mv3 *)(a4); }
    *(unsigned short *)((t1 + 0x9A)) = 0x410;
    *(unsigned short *)((t1 + 0xA0)) = 0x14;
    *(float *)((t1 + 0x90)) = (*(float *)0xC086CA0);
    return 0x90;
}

int adxf_SetAfsFileInfo(int a4, int a5, int a6)
{
    int t2;
    int stk[7];

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t2 = ADXF_GetFileRange((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))), (((int)stk + 4) + 0x4), ((int)stk + 4));
    if ((int)t2 < 0) {
        return 0xFFFFFFFD;
    }
    *(unsigned int *)((a4 + 0xC)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)((a4 + 0x10)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)((a4 + 0x14)) = ((((*(int *)(((int)stk + 4))) << 8) << 2) << 1);
    return 0x0;
}

int FUN_0c01993e(int a4, int a5, int a6, int a7)
{
    int t0;
    int t11;

    t0 = *(int *)0xC23ED9C;
    if ((t0 != 7) && ((t0 != 4) && (t0 != 25))) {
        return FUN_0c019a5c(a4, 0xC23F1AC, a6, a7);
    }
    if (((*(int *)0xC23A258) & 31) == 0) {
        *(unsigned int *)0xC23F244 = ((*(int *)0xC23F244) ^ 0x1);
    }
    t11 = ((int (*)(int, int))((*(int *)((((*(int *)0xC23F21C) << 2) + 0xC1EFA4C)))))(a4, 0xC23F1AC);
    return FUN_0c0ce486();
}

int FUN_0c08b088(int a4, int a5)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC08B124, 0x5C, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(a4); }
    *(unsigned int *)((t1 + 0x48)) = 0x1555;
    *(unsigned int *)((t1 + 0x58)) = a5;
    return 0x58;
}

int FUN_0c037430(int a4)
{
    int t4;

    FUN_0c085704(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c0bbbf4(a4);
    t4 = *(int *)(((*(int *)((((*(int *)((a4 + 0xBC))) << 2) + 0xC246FF0))) + 0x4C8));
    if (t4 == 15) {
        *(unsigned int *)((a4 + 0x0)) = 0xC0373E0;
    }
    return t4;
}

int FUN_0c06a978(void)
{
    int t1;
    int t3;

    t1 = FUN_0c0e19aa(0xC06AB24, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(0xC0FA568); }
    t3 = *(short *)0xC0FA57A;
    *(unsigned int *)(((0x78 + t1) + 0x0)) = (unsigned short)t3;
    return (unsigned short)t3;
}

int nlFogTableColor(int a4)
{
    int stk[5];

    *(unsigned char *)((((int)stk + 8) + 0x3)) = (signed char)((unsigned int)((unsigned int)a4 >> 16) >> 8);
    *(unsigned char *)((((int)stk + 8) + 0x2)) = (short)((unsigned int)a4 >> 16);
    *(unsigned char *)((((int)stk + 8) + 0x1)) = ((int)a4 >> 8);
    *(unsigned char *)((((int)stk + 8) + 0x0)) = a4;
    *(int *)((int)stk + 4) = ((*(int *)((((int)stk + 8) + 0x0))));
    return (kmSetFogTableColor(*(Stk4 *)((int)stk + 4)));
}

int FUN_0c0b251c(void)
{
    int t2;

    FUN_0c0a8d80(0xC11160C);
    t2 = FUN_0c0e19aa(0xC018450, 0xB4, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t2);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x30)) = *(struct mv3 *)(0xC111668); }
    *(unsigned int *)((t2 + 0x78)) = 0xCE4;
    return 0x78;
}

void FUN_0c0b2984(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC0B29E8, 0x474, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    FUN_0c0b25e4(t1, a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x258 + t1)) = *(struct mv3 *)((t1 + 0x30)); }
}

void FUN_0c089ac0(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC089B50, 0x6C, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x64)) = 0x78;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(a4); }
}

int FUN_0c09c42c(int a4)
{
    int stk[8];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = (FUN_0c09c39c(a4));
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x8)) = *(struct mv4 *)(0xC10C478); }
    FUN_0c063df0((*(int *)(((int)stk + 4))), ((*(int *)(((int)stk + 8))) + 0x4C), (((int)stk + 4) + 0x8));
    return (FUN_0c0cc3f8(0x424A9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
}

int FUN_0c09c460(int a4)
{
    int t0;
    int stk[8];

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = FUN_0c09c39c(a4);
    *(unsigned int *)((t0 + 0x44)) = 0x1;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x4)) = *(struct mv4 *)(0xC10C488); }
    return (FUN_0c063df0((*(int *)(((int)stk + 4))), (t0 + 0x4C), (((int)stk + 4) + 0x4)));
}

int FUN_0c044060(int a4)
{
    *(float *)((a4 + 0x390)) = (*(float *)((a4 + 0xB4)));
    FUN_0c085704(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c0bbbf4(a4);
    return FUN_0c01cdf2(a4);
}

int FUN_0c0b1fb4(void)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC0B1FE4, 0xB0, (*(int *)0xC23ECF4));
    FUN_0c0e19d0(t1);
    { struct mv14 { int w[14]; }; *(struct mv14 *)((t1 + 0x30)) = *(struct mv14 *)(0xC202CD0); }
    *(unsigned int *)((t1 + 0x90)) = 0x1A4;
    return 0x90;
}

void SJ_SplitChunk(int a4, int a5, int a6, int a7)
{
    { struct mv2 { int w[2]; }; *(struct mv2 *)(a6) = *(struct mv2 *)(a4); }
    *(unsigned int *)((a7 + 0x4)) = (*(int *)((a6 + 0x4)));
    if ((int)(*(int *)((a6 + 0x4))) > (int)a5) {
        *(unsigned int *)((a6 + 0x4)) = a5;
    }
    *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a6 + 0x0))) + (*(int *)((a6 + 0x4))));
    *(unsigned int *)((a7 + 0x4)) = ((*(int *)((a7 + 0x4))) - (*(int *)((a6 + 0x4))));
}

int FUN_0c082260(void)
{
    int t1;

    *(unsigned int *)0xC247D9C = (*(int *)0xC23ED50);
    t1 = *(int *)0xC23ED50;
    { struct mv10 { int w[10]; }; *(struct mv10 *)(0xC247D74) = *(struct mv10 *)((((((t1 << 2) + t1) << 2) << 1) + 0xC1016E0)); }
    return 0xC247D74;
}

int pdVibMxStart(int a4, int a5)
{
    int t0;

    t0 = pdVibMxIsReady(a4);
    if (t0 == 0) {
        return 0xFFFFFFFE;
    }
    return pdVibStart(a4, a5, 0x1);
}

int pdVibMxStop(int a4)
{
    int t0;

    t0 = pdVibMxIsReady(a4);
    if (t0 == 0) {
        return 0xFFFFFFFE;
    }
    return pdVibStart(a4, 0xC236C00, 0x1);
}

void FUN_0c0de310(float f4, float f5, float f6)
{
    *(float *)0xC20CE80 = f4;
    *(float *)0xC20CE84 = f5;
    *(float *)0xC20CE88 = f6;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC20CE90) = *(struct mv3 *)(0xC20CE80); }
}

int FUN_0c0d8f50(int a4)
{
    int stk[4];

    *(unsigned int *)(((int)stk + 8)) = (a4 | 0xFF000000);
    *(int *)((int)stk + 4) = (a4 | 0xFF000000);
    return (kmSetBorderColor(*(Stk4 *)((int)stk + 4)));
}

int FUN_0c0d8ed0(int a4)
{
    int stk[4];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(int *)((int)stk + 4) = a4;
    return (kmSetFogTableColor(*(Stk4 *)((int)stk + 4)));
}

int FUN_0c0d8ef0(int a4)
{
    int stk[4];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(int *)((int)stk + 4) = a4;
    return (kmSetFogVertexColor(*(Stk4 *)((int)stk + 4)));
}

void FUN_0c0a8fd6(int a4, int a5)
{
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x54)) = *(struct mv3 *)(a5); }
}
