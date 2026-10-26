/* Straight-line functions with calls and guards (batch gen_ao): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0745a0(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a81ac(int, int, int, int);
int FUN_0c0ac8a2(int, float);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db640(int);
int FUN_0c0db800(int, int, int, int, int);
int FUN_0c0dc1e0(int);
int FUN_0c0dc4c0(int);
int FUN_0c0dc510(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dc6e0(int);
int FUN_0c0dc890(int);
int FUN_0c0dc950(int);
int FUN_0c0dcca0(int);
int FUN_0c0ac548(int a4, float f4);

int FUN_0c0ac548(int a4, float f4)
{
    int t0;
    int t1;
    int t4;
    int t5;
    float t6;
    int t7;
    int t8;
    float t9;
    int t10;
    int t11;
    float t12;
    int t29;
    int t30;
    int t53;
    int t54;
    int t111;
    int t190;
    int t141;
    int t142;
    int t184;
    int t199;
    int stk[15];

    t0 = *(int *)((a4 + 0x74));
    t1 = *(int *)((a4 + 0x30));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                } else {
                    t4 = FUN_0c0da2e0();
                    t5 = *(int *)(((0xA8 + a4) + 0x0));
                    *(unsigned int *)(((0xA8 + a4) + 0x0)) = (t5 + (t4 & 0x1FF));
                    t6 = FUN_0c0da410((t5 + (t4 & 0x1FF)));
                    t7 = FUN_0c0da2e0();
                    t8 = *(int *)(((0xAC + a4) + 0x0));
                    *(unsigned int *)(((0xAC + a4) + 0x0)) = (t8 + (t7 & 0x1FF));
                    t9 = FUN_0c0da410((t8 + (t7 & 0x1FF)));
                    t10 = FUN_0c0da2e0();
                    t11 = *(int *)(((0xB0 + a4) + 0x0));
                    *(unsigned int *)(((0xB0 + a4) + 0x0)) = (t11 + (t10 & 0x1FF));
                    t12 = FUN_0c0da410((t11 + (t10 & 0x1FF)));
                    *(unsigned int *)((a4 + 0x9C)) = (int)(t6 * 910.0f);
                    *(unsigned int *)((a4 + 0xA0)) = (int)(t9 * 873.0f);
                    *(unsigned int *)((a4 + 0xA4)) = (int)(t12 * 600.0f);
                    *(float *)((a4 + 0x84)) = (t6 * 2.69999981f);
                    *(float *)((a4 + 0x88)) = (t9 * 6.0f);
                    *(float *)((a4 + 0x8C)) = (t12 * 1.0999999f);
                }
            } else {
                FUN_0c0a81ac((*(int *)((t0 + 0x10))), (*(int *)((a4 + 0xB8))), (a4 + 0x78), (0x90 + a4));
                t29 = *(int *)((t0 + 0x18));
                t30 = *(int *)((a4 + 0xB8));
                *(unsigned int *)((a4 + 0xB8)) = (t30 + t29);
                if ((int)(t30 + t29) >= (int)(*(int *)((t0 + 0x14)))) {
                    *(unsigned int *)((a4 + 0x30)) = 0x3;
                }
            }
        } else {
            if ((int)(*(int *)0xC24FA38) < (int)(*(short *)((t0 + 0x2)))) {
            } else {
                *(unsigned int *)((a4 + 0x30)) = 0x2;
                FUN_0c0a81ac((*(int *)((t0 + 0x10))), (*(int *)((a4 + 0xB8))), (a4 + 0x78), (0x90 + a4));
                t53 = *(int *)((t0 + 0x18));
                t54 = *(int *)((a4 + 0xB8));
                *(unsigned int *)((a4 + 0xB8)) = (t54 + t53);
                if ((int)(t54 + t53) >= (int)(*(int *)((t0 + 0x14)))) {
                    *(unsigned int *)((a4 + 0x30)) = 0x3;
                }
            }
        }
        FUN_0c0dc5a0();
        FUN_0c0dcca0((a4 + 0x78));
        FUN_0c0dcca0((0x84 + a4));
        FUN_0c0dc890(((*(int *)((a4 + 0x94))) + (*(int *)((a4 + 0xA0)))));
        FUN_0c0dc6e0(((*(int *)((a4 + 0x90))) + (*(int *)((a4 + 0x9C)))));
        FUN_0c0dc950(((*(int *)((a4 + 0x98))) + (*(int *)((a4 + 0xA4)))));
        FUN_0c0db640((a4 + 0x34));
        FUN_0c0dc1e0(((*(int *)0xC247CAC) + 0x2AC));
        FUN_0c0db640(((*(int *)0xC247CB0) + 0x2AC));
        FUN_0c0c465c(0xF07);
        FUN_0c0745a0(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
        FUN_0c0dc510(0x0);
        FUN_0c0dcca0(0xC10EDE4);
        FUN_0c0dc6e0(0x2000);
        FUN_0c0c465c(0xF06);
        FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8));
        FUN_0c0dcca0(0xC0FE468);
        FUN_0c0dc6e0((*(int *)((a4 + 0xB4))));
        FUN_0c0dc890(((*(int *)0xC23A258) * 0x2900));
        FUN_0c0c465c((*(short *)0xC0FE47A));
        FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8));
        FUN_0c0dcca0(0xC0FE480);
        t111 = *(int *)0xC23A258;
        FUN_0c0dc6e0((((((t111 << 1) + t111) << 8) << 2) << 1));
        FUN_0c0c465c((*(short *)0xC0FE492));
        FUN_0c0dc4c0(0x1);
        t199 = (FUN_0c0dc4c0(0x1));
    } else {
        t190 = t1;
        if ((int)(*(int *)0xC24FA38) < (int)(*(short *)((t0 + 0x0)))) {
        } else {
            *(unsigned int *)((a4 + 0x30)) = 0x1;
            FUN_0c0cc3f8((*(int *)((t0 + 0x8))));
            if ((*(int *)((t0 + 0x4))) != 0) {
                FUN_0c0dc5a0();
                FUN_0c0dcca0((a4 + 0x78));
                FUN_0c0dc890((*(int *)((a4 + 0x94))));
                FUN_0c0dc6e0((*(int *)((a4 + 0x90))));
                FUN_0c0dc950((*(int *)((a4 + 0x98))));
                FUN_0c0db470(0xC10E718, ((int)stk + 8));
                FUN_0c0ac8a2(((int)stk + 8), 6.10370125e-06f);
                FUN_0c0dc4c0(0x1);
            }
            if ((int)(*(int *)0xC24FA38) < (int)(*(short *)((t0 + 0x2)))) {
            } else {
                *(unsigned int *)((a4 + 0x30)) = 0x2;
                FUN_0c0a81ac((*(int *)((t0 + 0x10))), (*(int *)((a4 + 0xB8))), (a4 + 0x78), (0x90 + a4));
                t141 = *(int *)((t0 + 0x18));
                t142 = *(int *)((a4 + 0xB8));
                *(unsigned int *)((a4 + 0xB8)) = (t142 + t141);
                if ((int)(t142 + t141) >= (int)(*(int *)((t0 + 0x14)))) {
                    *(unsigned int *)((a4 + 0x30)) = 0x3;
                }
            }
            FUN_0c0dc5a0();
            FUN_0c0dcca0((a4 + 0x78));
            FUN_0c0dcca0((0x84 + a4));
            FUN_0c0dc890(((*(int *)((a4 + 0x94))) + (*(int *)((a4 + 0xA0)))));
            FUN_0c0dc6e0(((*(int *)((a4 + 0x90))) + (*(int *)((a4 + 0x9C)))));
            FUN_0c0dc950(((*(int *)((a4 + 0x98))) + (*(int *)((a4 + 0xA4)))));
            FUN_0c0db640((a4 + 0x34));
            FUN_0c0dc1e0(((*(int *)0xC247CAC) + 0x2AC));
            FUN_0c0db640(((*(int *)0xC247CB0) + 0x2AC));
            FUN_0c0c465c(0xF07);
            FUN_0c0745a0(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
            FUN_0c0dc510(0x0);
            FUN_0c0dcca0(0xC10EDE4);
            FUN_0c0dc6e0(0x2000);
            FUN_0c0c465c(0xF06);
            FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8));
            FUN_0c0dcca0(0xC0FE468);
            FUN_0c0dc6e0((*(int *)((a4 + 0xB4))));
            FUN_0c0dc890(((*(int *)0xC23A258) * 0x2900));
            FUN_0c0c465c((*(short *)0xC0FE47A));
            FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8));
            FUN_0c0dcca0(0xC0FE480);
            t184 = *(int *)0xC23A258;
            FUN_0c0dc6e0((((((t184 << 1) + t184) << 8) << 2) << 1));
            FUN_0c0c465c((*(short *)0xC0FE492));
            FUN_0c0dc4c0(0x1);
            t190 = (FUN_0c0dc4c0(0x1));
        }
        t199 = t190;
    }
    return t199;
}
