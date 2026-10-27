/* Straight-line functions with calls and guards (batch gen_av): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c029646(int, int);
int FUN_0c02a19a(int, int, int, int);
int FUN_0c0372f8(int, int, int, int);
int FUN_0c062d4a(int, int, int, int, int, int, int);
int FUN_0c062f54(int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int nlPopMatrix(int);
int FUN_0c0dc5a0(void);
int nlRotateAX(int);
int nlRotateAY(int);
int FUN_0c0dcca0(int);
float FUN_0c0dcea0(int);
int nlSubVector3op(int, int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int);
int FUN_0c0e5dc0(void);
int _quick_evn_mvn(void);
int _quick_odd_mvn(int, int, int, int, float);
int FUN_0c029bf2(int a4);
int FUN_0c086dcc(int a4);


int FUN_0c086dcc(int a4)
{
    int t0;
    int t3;
    float u5;
    int t6;
    int t7;
    int t9;
    float u12;
    float u14;
    float u16;
    float u18;
    float t21;
    float u22;
    float u35;
    int t38;
    int t56;
    int t58;
    int t49;
    int stk[20];

    t0 = *(int *)((a4 + 0x44));
    *(unsigned int *)((a4 + 0x44)) = (t0 + 0x1);
    if ((int)(t0 + 0x1) < (int)(*(int *)((a4 + 0x40)))) {
        t49 = a4;
    } else {
        t3 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
        u5 = 0.299999982f;
        u5 = u5 + 9.15555211e-06f * (float)(FUN_0c0da2e0());
        *(float *)(((int)stk + 16)) = u5;
        *(unsigned int *)((a4 + 0x44)) = 0x0;
        *(unsigned int *)(((int)stk + 12)) = 0xC10AA74;
        t6 = 0xC10AA74;
        t7 = 0xC10AA6C;
        for (;;) {
            t9 = FUN_0c0e19aa(0xC08C3EC, 0xA4, (*(int *)0xC23ECF0));
            FUN_0c0e19d0(t9);
            u12 = 0.799999952f;
            u12 = u12 + 6.10370125e-06f * (float)(FUN_0c0da2e0());
            *(float *)((t9 + 0x7C)) = u12;
            u14 = 0.799999952f;
            u14 = u14 + 6.10370125e-06f * (float)(FUN_0c0da2e0());
            *(float *)((t9 + 0x80)) = u14;
            u16 = 0.799999952f;
            u16 = u16 + 6.10370125e-06f * (float)(FUN_0c0da2e0());
            *(float *)((t9 + 0x84)) = u16;
            u18 = 0.299999982f;
            u18 = u18 + 4.57777642e-05f * (float)(FUN_0c0da2e0());
            *(float *)((t9 + 0x90)) = ((*(float *)((a4 + 0x3C))) * u18);
            *(unsigned short *)((t9 + 0x9A)) = 0xC5F;
            *(unsigned short *)((t9 + 0x9C)) = 0x1;
            *(unsigned short *)((t9 + 0xA0)) = 0x1F;
            *(float *)((t9 + 0x94)) = 1.0f;
            nlSubVector3op((((int)stk + 4) + 0x10), (a4 + 0x30), (0x254 + t3));
            t21 = FUN_0c0dcea0((((int)stk + 4) + 0x10));
            u22 = *(float *)(((int)stk + 16));
            FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))), (*(float *)(((int)stk + 28))));
            FUN_0c0dc5a0();
            FUN_0c0dcca0((0x254 + t3));
            nlRotateAY((*(int *)(((int)stk + 8))));
            nlRotateAX((*(int *)(((int)stk + 4))));
            u35 = *(float *)((t7 + 0x0));
            t7 = (t7 + 0x4);
            *(float *)((t9 + 0x70)) = (((((t21 * u22)) * (float)(FUN_0c0da2e0()))) * u35);
            *(float *)((t9 + 0x78)) = (t21 - (t21 * u22));
            t38 = *(short *)((t6 + 0x0));
            t6 = (t6 + 0x2);
            *(unsigned short *)(((0x8A + t9) + 0x0)) = ((((FUN_0c0da2e0()) & 0x1FFF) + t38) - 4096);
            FUN_0c0db470((t9 + 0x70), (t9 + 0x70));
            nlPopMatrix(0x1);
            if ((unsigned int)t7 < (unsigned int)(*(int *)(((int)stk + 12)))) continue;
            break;
        }
    }
    t56 = *(int *)((a4 + 0x48));
    *(unsigned int *)((a4 + 0x48)) = (t56 - 1);
    t58 = 0x48;
    if ((int)(t56 - 1) <= 0) {
        t58 = (FUN_0c0e19f2(t49));
    }
    return t58;
}
