/* Straight-line functions with calls and guards (batch gen_et): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_ExecServer(void);
int ADXF_GetNumReadSct(int);
int ADXF_GetStat(int);
int ADXF_ReadNw32(int, int, int);
int ADXSJD_ExecServer(void);
int ADXSTM_ExecServer(void);
int FUN_0c0519f0(int);
int FUN_0c0853d4(int, float);
int FUN_0c0bb1a8(int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc80(int);
int FUN_0c0dcca0(int);
int FUN_0c210400(void);
int FUN_0c22b2b6(int);
extern float _builtin_sqrtf(float);
int adxf_wait_1ms(void);
int nlPopMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int thunk_FUN_0c22c4ca(void);
int adxf_LoadData(int a4, int a5, int a6);
int FUN_0c055a40(int a4);
int FUN_0c055f24(int a4);
int FUN_0c07ed4c(int a4);
int FUN_0c03578e(int a4, int a5, int a6, int a7);
int FUN_0c213d02(void);
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3B4_int { char p[0x3B4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o50C_int { char p[0x50C]; int v; };
struct o510_int { char p[0x510]; int v; };
struct o6E_short { char p[0x6E]; short v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



int adxf_LoadData(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t8;
    int t12;

    t0 = 0x0;
    for (;;) {
        t1 = ADXF_ReadNw32(a4, a5, a6);
        if ((int)t1 <= 0) {
            FUN_0c210400();
            ADXSTM_ExecServer();
            ADXF_ExecServer();
            adxf_wait_1ms();
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x2710) {
                break;
            }
            continue;
        }
        break;
    }
    if (t0 == 0x2710) {
        return 0x0;
    }
    t8 = 0x0;
    for (;;) {
        FUN_0c210400();
        ADXSTM_ExecServer();
        ADXF_ExecServer();
        t12 = ADXF_GetStat(a4);
        if (t12 != 3) {
            adxf_wait_1ms();
            t8 = (t8 + 0x1);
            if ((int)t8 >= (int)0x2710) {
                break;
            }
            continue;
        }
        break;
    }
    return ADXF_GetNumReadSct(a4);
}



int FUN_0c07ed4c(int a4)
{
    int t2;
    int t19;
    int t5;
    int t16;
    int stk[9];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    R1004 = a4;
    t2 = *(int *)(((((((struct o3B4_int *)(a4))->v)) << 2) + 0xC246FF0));
    t19 = 0x0;
    if ((*(int *)0xC247D20) != 0) {
        FUN_0c0dc5a0();
        t5 = (((struct o3B4_int *)((R1004)))->v);
        FUN_0c0dcca0((((((((t5 << 1) + t5) << 2) << 2) << 2) + 0xC23F268) + 0xC));
        nlRotateAY(((((struct o6E_short *)(t2))->v)));
        FUN_0c0db470(0xC1013F4, (((int)stk + 4) + 0x4));
        nlUnitMatrix();
        nlRotateAX(0x11C7);
        nlRotateAY((-((((struct o6E_short *)(t2))->v))));
        FUN_0c0dcc80((((int)stk + 4) + 0x4));
        t16 = FUN_0c0853d4(0xC247D24, (*(float *)0xC07EE60));
        nlPopMatrix(0x1);
        t19 = t16;
    }
    return t19;
}

int FUN_0c03578e(int a4, int a5, int a6, int a7)
{
    int t2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    int t10;

    if (((((struct o50C_int *)(a4))->v)) == 0) {
        *(float *)((a6 + 0x0)) = 0.0f;
        *(float *)((a7 + 0x0)) = 50.0f;
        return 0xC035820;
    }
    t2 = *(int *)(((((((struct o510_int *)(a4))->v)) << 2) + 0xC246FF0));
    u3 = (((struct o30_float *)(a4))->v);
    u4 = (((struct o30_float *)(t2))->v);
    u5 = (((struct o38_float *)(t2))->v);
    u6 = (((struct o38_float *)(a4))->v);
    u7 = ((u5 - u6) * (u5 - u6));
    u7 = u7 + (u4 - u3) * (u4 - u3);
    *(float *)((a6 + 0x0)) = _builtin_sqrtf(u7);
    if ((int)a5 < 0) {
        *(float *)((a7 + 0x0)) = (((((struct o34_float *)(t2))->v)) - ((((struct o34_float *)(a4))->v)));
        return 0x34;
    }
    t10 = (((struct o510_int *)(a4))->v);
    *(float *)((a7 + 0x0)) = (((((struct o4_float *)(((((a5 << 1) + a5) << 2) + ((((((t10 << 1) + t10) << 2) << 2) << 2) + 0xC23F268))))->v)) - ((((struct o34_float *)(a4))->v)));
    return 0x34;
}

int FUN_0c213d02(void)
{
    int t4;
    int t5;
    int t6;
    int t8;
    int t9;

    ADXSJD_ExecServer();
    (((struct o4_uint *)0xC2397BC)->v) = 0x0;
    thunk_FUN_0c22c4ca();
    (((struct o8_uint *)0xC2397BC)->v) = 0x0;
    ADXF_ExecServer();
    (((struct oC_uint *)0xC2397BC)->v) = 0x0;
    ADXSTM_ExecServer();
    (((struct o10_uint *)0xC2397BC)->v) = 0x0;
    t4 = 0xC2397CC;
    t5 = 0xC239418;
    for (;;) {
        t6 = *(signed char *)((t5 + 0x0));
        t8 = t6;
        if (t6 == 1) {
            t8 = (FUN_0c22b2b6(t5));
        } else {
            t9 = t4;
        }
        t4 = t9;
        t5 = (t5 + 0x74);
        if ((unsigned int)t5 >= (unsigned int)0xC2397B8) {
            break;
        }
    }
    (((struct o14_uint *)0xC2397BC)->v) = 0x0;
    (((struct o0_uint *)0xC2397BC)->v) = 0x0;
    return t8;
}
