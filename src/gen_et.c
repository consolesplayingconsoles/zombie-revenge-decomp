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

int FUN_0c055a40(int a4)
{
    int t0;
    int t1;
    int t14;
    int t18;
    int t21;
    int t12;

    t0 = *(int *)((a4 + 0x33C));
    t1 = *(int *)(((0xC2475D4 + (t0 << 2)) + 0x0));
    *(unsigned int *)((((t0 << 2) + 0xC247604) + 0x0)) = 0x1;
    *(unsigned int *)((t1 + 0x23C)) = (*(int *)((a4 + 0xBC)));
    if ((*(int *)((a4 + 0x210))) == 85) {
        *(unsigned int *)((a4 + 0x348)) = (*(int *)((t1 + 0x220)));
        *(unsigned int *)((a4 + 0x350)) = (*(int *)((a4 + 0x33C)));
        *(unsigned int *)((a4 + 0x330)) = 0x2;
        t12 = (*(int *)((a4 + 0x348)));
    } else {
        *(unsigned int *)((a4 + 0x344)) = (*(int *)((t1 + 0x220)));
        *(unsigned int *)((a4 + 0x34C)) = (*(int *)((a4 + 0x33C)));
        *(unsigned int *)((a4 + 0x330)) = 0x4;
        t12 = (*(int *)((a4 + 0x344)));
    }
    *(unsigned int *)((a4 + 0x340)) = t12;
    t14 = *(int *)(((0x220 + t1) + 0x0));
    *(unsigned int *)((a4 + 0x338)) = ((*(int *)((a4 + 0x338))) | (((int)t14 >= 0) ? (0x1 << (t14 & 31)) : ((-(int)t14 & 31) ? ((int)0x1 >> (-(int)t14 & 31)) : ((int)0x1 >> 31))));
    *(unsigned int *)((a4 + 0x33C)) = 0x0;
    *(unsigned int *)((a4 + 0x39C)) = ((*(int *)((a4 + 0x39C))) | (*(int *)(((0x22C + t1) + 0x0))));
    t18 = *(int *)((t1 + 0x220));
    if ((*(int *)((0xC1FF6D8 + (t18 << 2)))) != 0) {
        t21 = *(int *)((0xC1FF6D8 + ((*(int *)((t1 + 0x220))) << 2)));
        return ((int (*)(int, int, int, int))(t21))(a4, ((t0 << 2) + 0xC247604), 0xC2475D4, (((int)t14 >= 0) ? (0x1 << (t14 & 31)) : ((-(int)t14 & 31) ? ((int)0x1 >> (-(int)t14 & 31)) : ((int)0x1 >> 31))));
    }
    return (t18 << 2);
}

int FUN_0c055f24(int a4)
{
    int t0;
    int t1;
    int t5;
    int t17;
    int t20;

    t0 = *(int *)((a4 + 0x358));
    t1 = *(int *)(((0xC2475D4 + (t0 << 2)) + 0x0));
    *(unsigned int *)((((t0 << 2) + 0xC247604) + 0x0)) = 0x1;
    *(unsigned int *)((t1 + 0x23C)) = (*(int *)((a4 + 0xBC)));
    *(unsigned int *)((a4 + 0x34C)) = (*(int *)((t1 + 0xBC)));
    *(unsigned int *)((a4 + 0x344)) = (*(int *)((t1 + 0x220)));
    t5 = *(int *)(((0x220 + t1) + 0x0));
    *(unsigned int *)((a4 + 0x338)) = ((*(int *)((a4 + 0x338))) | (((int)t5 >= 0) ? (0x1 << (t5 & 31)) : ((-(int)t5 & 31) ? ((int)0x1 >> (-(int)t5 & 31)) : ((int)0x1 >> 31))));
    *(unsigned int *)((a4 + 0x39C)) = ((*(int *)((a4 + 0x39C))) | (*(int *)(((0x22C + t1) + 0x0))));
    if ((*(int *)((a4 + 0x330))) == 2) {
        *(unsigned int *)((a4 + 0x330)) = 0x3;
    } else {
        *(unsigned int *)((a4 + 0x330)) = 0x1;
        *(unsigned int *)((a4 + 0x340)) = (*(int *)((a4 + 0x344)));
    }
    FUN_0c0bb1a8(a4, 0x0);
    FUN_0c0519f0(a4);
    t17 = *(int *)((a4 + 0x344));
    if ((*(int *)((0xC1FF6D8 + (t17 << 2)))) != 0) {
        t20 = *(int *)((0xC1FF6D8 + ((*(int *)((a4 + 0x344))) << 2)));
        return ((int (*)(int))(t20))(a4);
    }
    return (t17 << 2);
}

int FUN_0c07ed4c(int a4)
{
    int t2;
    int t19;
    int t5;
    int t16;
    int stk[9];

    *(unsigned int *)(((int)stk + 4)) = a4;
    t2 = *(int *)((((*(int *)((a4 + 0x3B4))) << 2) + 0xC246FF0));
    t19 = 0x0;
    if ((*(int *)0xC247D20) != 0) {
        FUN_0c0dc5a0();
        t5 = *(int *)(((*(int *)(((int)stk + 4))) + 0x3B4));
        FUN_0c0dcca0((((((((t5 << 1) + t5) << 2) << 2) << 2) + 0xC23F268) + 0xC));
        nlRotateAY((*(short *)((t2 + 0x6E))));
        FUN_0c0db470(0xC1013F4, (((int)stk + 4) + 0x4));
        nlUnitMatrix();
        nlRotateAX(0x11C7);
        nlRotateAY((-(*(short *)((t2 + 0x6E)))));
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

    if ((*(int *)((a4 + 0x50C))) == 0) {
        *(float *)((a6 + 0x0)) = 0.0f;
        *(float *)((a7 + 0x0)) = 50.0f;
        return 0xC035820;
    }
    t2 = *(int *)((((*(int *)((a4 + 0x510))) << 2) + 0xC246FF0));
    u3 = *(float *)((a4 + 0x30));
    u4 = *(float *)((t2 + 0x30));
    u5 = *(float *)((t2 + 0x38));
    u6 = *(float *)((a4 + 0x38));
    u7 = ((u5 - u6) * (u5 - u6));
    u7 = u7 + (u4 - u3) * (u4 - u3);
    *(float *)((a6 + 0x0)) = _builtin_sqrtf(u7);
    if ((int)a5 < 0) {
        *(float *)((a7 + 0x0)) = ((*(float *)((t2 + 0x34))) - (*(float *)((a4 + 0x34))));
        return 0x34;
    }
    t10 = *(int *)((a4 + 0x510));
    *(float *)((a7 + 0x0)) = ((*(float *)((((((a5 << 1) + a5) << 2) + ((((((t10 << 1) + t10) << 2) << 2) << 2) + 0xC23F268)) + 0x4))) - (*(float *)((a4 + 0x34))));
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
    *(unsigned int *)0xC2397C0 = 0x0;
    thunk_FUN_0c22c4ca();
    *(unsigned int *)0xC2397C4 = 0x0;
    ADXF_ExecServer();
    *(unsigned int *)0xC2397C8 = 0x0;
    ADXSTM_ExecServer();
    *(unsigned int *)0xC2397CC = 0x0;
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
    *(unsigned int *)0xC2397D0 = 0x0;
    *(unsigned int *)0xC2397BC = 0x0;
    return t8;
}
