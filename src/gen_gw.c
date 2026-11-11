typedef struct { int w[1]; } Stk1;
/* Straight-line functions with calls and guards (batch gen_gw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXF_GetFileRange(int, int, int, int);
int ADXSTM_OpenRange(int, int, int);
int ADXT_Stop(int);
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
int FUN_0c0cc3f8(int, int, int, int);
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
int kmSetBorderColor(Stk1);
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
struct o21C_int { char p[0x21C]; int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o238_ushort { char p[0x238]; unsigned short v; };
struct o240_int { char p[0x240]; int v; };
struct o25C_float { char p[0x25C]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o27C_float { char p[0x27C]; float v; };
struct o284_float { char p[0x284]; float v; };
struct o288_uint { char p[0x288]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o390_float { char p[0x390]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5B8_int { char p[0x5B8]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o64_float { char p[0x64]; float v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8A_ushort { char p[0x8A]; unsigned short v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o8E_short { char p[0x8E]; short v; };
struct o8E_ushort { char p[0x8E]; unsigned short v; };
struct o90_float { char p[0x90]; float v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_ushort { char p[0x98]; unsigned short v; };
struct o9A_ushort { char p[0x9A]; unsigned short v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct o9C_ushort { char p[0x9C]; unsigned short v; };
struct oA0_short { char p[0xA0]; short v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA0_ushort { char p[0xA0]; unsigned short v; };
struct oA2_ushort { char p[0xA2]; unsigned short v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
struct o28C_uint { char p[0x28C]; unsigned int v; };
struct o29C_uint { char p[0x29C]; unsigned int v; };
struct o4C8_int { char p[0x4C8]; int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oD8_int { char p[0xD8]; int v; };



int FUN_0c059620(int a4)
{
    float u6;
    int t11;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x30)); }
    (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) - ((*(float *)(((0x25C + a4) + 0x0))) * 6.0f));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x60));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    u6 = (((struct o25C_float *)(a4))->v);
    nlScale(u6, u6, u6);
    FUN_0c0de000(((((struct o25C_float *)(a4))->v)));
    t11 = 0x24C;
    if (((((struct o21C_int *)(a4))->v)) == 0) {
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
    t6 = (((struct o22C_int *)(a4))->v);
    (((struct o22C_uint *)(a4))->v) = (t6 - 1);
    if ((int)(t6 - 1) < 0) {
        (((struct o22C_uint *)(a4))->v) = ((((struct o240_int *)(a4))->v));
        *(unsigned int *)((a4 + 0x0)) = 0xC062B5E;
    }
    t11 = (((struct o22C_int *)(a4))->v);
    if ((t11 & 15) == 0) {
        return FUN_0c0619e0(a4);
    }
    return t11;
}

int FUN_0c095d14(int a4)
{
    int t0;
    int stk[9];

    t0 = (((struct oBC_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(((((((t0 << 1) + t0) << 2) << 2) << 2) + 0xC23F274)); }
    FUN_0c0dc5a0();
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    FUN_0c0db470(0xC10BC94, ((int)stk + 4));
    nlPopMatrix(0x1);
    FUN_0c09134c((((int)stk + 4) + 0xC), ((int)stk + 4), 0x8, 0x2);
    return (FUN_0c08a220((((int)stk + 4) + 0xC), 0x1));
}

int FUN_0c0b25e4(int a4, int a5)
{
    (((struct o274_float *)(a4))->v) = 1.0f;
    (((struct o278_float *)(a4))->v) = 1.0f;
    (((struct o27C_float *)(a4))->v) = 1.0f;
    (((struct o284_float *)(a4))->v) = 1.0f;
    *(unsigned int *)(((0xBC + a4) + 0x0)) = (kgCmiNewId());
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((a5 + 0x10)); }
    (((struct o6E_ushort *)(a4))->v) = (*(int *)((a5 + 0xC)));
    (((struct oC0_uint *)(a4))->v) = (*(int *)((a5 + 0x4)));
    FUN_0c0855ba(a4);
    FUN_0c0ba6e8(a4);
    FUN_0c085638(a4);
    (((struct o2C4_uint *)(a4))->v) = (*(int *)((a5 + 0x8)));
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o288_uint *)(a4))->v) = 0x0;
    return 0x288;
}

int FUN_0c08e970(int a4, int a5, float f4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC08E7D4, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x70)) = *(struct mv3 *)(a4); }
    (((struct o8A_ushort *)(t1))->v) = a5;
    (((struct o90_float *)(t1))->v) = f4;
    (((struct o9A_ushort *)(t1))->v) = 0x302;
    (((struct o9C_ushort *)(t1))->v) = 0x1;
    (((struct oA0_ushort *)(t1))->v) = 0xE;
    (((struct o98_ushort *)(t1))->v) = ((((struct oA0_short *)(t1))->v));
    (((struct o8E_ushort *)(t1))->v) = 0x1E;
    (((struct o94_float *)(t1))->v) = (float)((((struct o8E_short *)(t1))->v));
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
    (((struct o40_uint *)(t1))->v) = a6;
    (((struct o48_float *)(t1))->v) = ((((struct o278_float *)(a4))->v));
    (((struct o5C_uint *)(t1))->v) = (t1 + 0x60);
    (((struct o50_float *)(t1))->v) = ((((struct o2C_float *)((*(int *)0xC247B98)))->v));
    return FUN_0c0cbafc(0x291, 0x2, 0xFC001000, 0x84000000);
}

int FUN_0c03746a(int a4)
{
    int t4;
    int t6;

    nlAddVector((a4 + 0x30), (a4 + 0x48));
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    nlAddVector((a4 + 0x30), (a4 + 0x54));
    FUN_0c085704(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c0bbbf4(a4);
    t4 = (((struct o2EC_int *)(a4))->v);
    t6 = t4;
    if ((t4 & 12) != 0) {
        (((struct o2C4_uint *)(a4))->v) = ((((struct o5B8_int *)(a4))->v));
        (((struct o2CC_uint *)(a4))->v) = 0x1;
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
    (((struct o4_float *)(a6))->v) = (((((struct o4_float *)(a6))->v)) + (*(float *)(((((int)stk + 4) + 0xC) + 0x0))));
    (((struct o8_float *)(a6))->v) = (((((struct o8_float *)(a6))->v)) + (*(float *)(((((int)stk + 4) + 0x10) + 0x0))));
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
    ADXT_Stop(a4);
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
        (((struct o74_float *)(t2))->v) = (*(float *)0xC091484);
        (((struct oA0_uint *)(t2))->v) = a6;
        (((struct oA4_uint *)(t2))->v) = a7;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x48)) = *(struct mv3 *)(a5); }
    }
}

int FUN_0c09a4d6(int a4)
{
    int t1;
    int t4;

    t1 = FUN_0c0e19aa(0xC099A68, 0x2ACC, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    (((struct o238_ushort *)(a4))->v) = 0x0;
    *(unsigned int *)((t1 + 0x30)) = a4;
    *(unsigned int *)((t1 + 0x34)) = ((((struct oBC_int *)(a4))->v));
    t4 = (((struct o2E8_int *)(a4))->v);
    (((struct o44_uint *)(t1))->v) = (((int)t4 >= 0) ? (0x2 << (t4 & 31)) : ((-(int)t4 & 31) ? ((int)0x2 >> (-(int)t4 & 31)) : ((int)0x2 >> 31)));
    (((struct o50_float *)(t1))->v) = ((((struct o390_float *)(a4))->v));
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
    { struct mvb6 { char c[6]; }; *(struct mvb6 *)((t1 + 0x60)) = *(struct mvb6 *)(0xC0FFD5C); }
    (((struct o78_uint *)(t1))->v) = (unsigned short)(*(short *)0xC0FFD62);
    (((struct o8C_uint *)(t1))->v) = a4;
    return 0x8C;
}

int FUN_0c081074(int a4)
{
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x6C)) = *(struct mv3 *)((0x284 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((0x260 + a4)); }
    FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
    if (((((struct oD8_int *)(a4))->v)) != 0) {
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
    *(unsigned int *)((t1 + 0x34)) = ((((struct oBC_int *)(a4))->v));
    t4 = (((struct o2E8_int *)(a4))->v);
    (((struct o44_uint *)(t1))->v) = (((int)t4 >= 0) ? (0x2 << (t4 & 31)) : ((-(int)t4 & 31) ? ((int)0x2 >> (-(int)t4 & 31)) : ((int)0x2 >> 31)));
    (((struct o4C_float *)(t1))->v) = ((((struct o390_float *)(a4))->v));
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
    *(unsigned int *)((t0 + 0x38)) = ((((struct oBC_int *)(a4))->v));
    *(unsigned int *)((t0 + 0x30)) = ((((struct oC0_int *)(a4))->v));
    *(unsigned int *)((t0 + 0x34)) = ((a5 << 16) | a6);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x3C)) = *(struct mv3 *)(a7); }
}

int FUN_0c086c1e(int a4, int a5, int a6, float f4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC086CAC, 0x50, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    { struct mv4 { int w[4]; }; *(struct mv4 *)((t1 + 0x30)) = *(struct mv4 *)(a4); }
    (((struct o40_float *)(t1))->v) = f4;
    (((struct o48_uint *)(t1))->v) = a5;
    (((struct o4C_uint *)(t1))->v) = a6;
    return 0x4C;
}

int FUN_0c08f5d0(int a4, int a5)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC08C4D8, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x70)) = *(struct mv3 *)(a4); }
    (((struct o8A_ushort *)(t1))->v) = a5;
    (((struct o90_float *)(t1))->v) = (*(float *)0xC08F720);
    (((struct o9A_ushort *)(t1))->v) = 0x328;
    (((struct oA0_ushort *)(t1))->v) = 0x15;
    return 0xA0;
}

void FUN_0c0d6592(int a4, int a5)
{
    int t8;

    t8 = (0xA4 + a4);
    if (a5 != 0) {
        t8 = (0xCC + a4);
        if (a5 != 1) {
            t8 = (0xF4 + a4);
            if (a5 != 2) {
                t8 = (0x11C + a4);
                if (a5 != 3) {
                    t8 = (0x144 + a4);
                    if (a5 != 4) {
                        t8 = a5;
                    }
                }
            }
        }
    }
    { struct mv10 { int w[10]; }; *(struct mv10 *)((a4 + 0x7C)) = *(struct mv10 *)(t8); }
}

int FUN_0c070b90(int a4, int a5)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC070C96, 0x474, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(a4); }
    (((struct o28C_uint *)(t1))->v) = 0x1260;
    (((struct oBC_uint *)(t1))->v) = 0x2;
    (((struct o6E_ushort *)(t1))->v) = a5;
    (((struct o29C_uint *)(t1))->v) = ((((struct o6E_short *)(t1))->v));
    return 0x29C;
}

int FUN_0c08ad98(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC08AE04, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x70)) = *(struct mv3 *)(a4); }
    (((struct o9A_ushort *)(t1))->v) = 0x296;
    (((struct oA2_ushort *)(t1))->v) = 0x1;
    (((struct o90_float *)(t1))->v) = 0.375f;
    (((struct o8E_ushort *)(t1))->v) = 0x6B;
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
    (((struct o7C_uint *)(t1))->v) = (*(int *)((a4 + 0x8)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((a4 + 0x10)); }
    *(unsigned int *)(((0x98 + t1) + 0x0)) = ((FUN_0c0da2e0()) & 0x7);
    (((struct o9C_uint *)(t1))->v) = 0x0;
    return 0x9C;
}

int FUN_0c0874ca(int a4, int a5, int a6, int a7)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC087510, 0x60, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)(a5); }
    *(unsigned int *)((t1 + 0x30)) = a4;
    (((struct o5C_uint *)(t1))->v) = a6;
    (((struct o58_uint *)(t1))->v) = a7;
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
    (((struct o90_float *)(t1))->v) = f4;
    (((struct o9A_ushort *)(t1))->v) = 0x245;
    (((struct oA0_ushort *)(t1))->v) = 0x14;
    return 0xA0;
}

int FUN_0c086b96(int a4)
{
    int t1;

    t1 = FUN_0c0e19aa(0xC08C25A, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x70)) = *(struct mv3 *)(a4); }
    (((struct o9A_ushort *)(t1))->v) = 0x410;
    (((struct oA0_ushort *)(t1))->v) = 0x14;
    (((struct o90_float *)(t1))->v) = (*(float *)0xC086CA0);
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
    (((struct o48_uint *)(t1))->v) = 0x1555;
    (((struct o58_uint *)(t1))->v) = a5;
    return 0x58;
}

int FUN_0c037430(int a4)
{
    int t4;

    FUN_0c085704(a4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c0bbbf4(a4);
    t4 = (((struct o4C8_int *)((*(int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC246FF0)))))->v);
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
    (((struct o78_uint *)(t2))->v) = 0xCE4;
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
    (((struct o64_uint *)(t1))->v) = 0x78;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(a4); }
}

int FUN_0c09c42c(int a4)
{
    int stk[8];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = (FUN_0c09c39c(a4));
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x8)) = *(struct mv4 *)(0xC10C478); }
    FUN_0c063df0((*(int *)(((int)stk + 4))), ((*(int *)(((int)stk + 8))) + 0x4C), (((int)stk + 4) + 0x8));
    return (FUN_0c0cc3f8(0x424A9, 0x0, 0x0, 0x0));
}

int FUN_0c09c460(int a4)
{
    int t0;
    int stk[8];

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = FUN_0c09c39c(a4);
    (((struct o44_uint *)(t0))->v) = 0x1;
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
    (((struct o90_uint *)(t1))->v) = 0x1A4;
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
    return (kmSetBorderColor(*(Stk1 *)((int)stk + 4)));
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
