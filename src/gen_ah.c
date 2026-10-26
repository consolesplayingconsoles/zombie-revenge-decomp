/* Straight-line functions with calls and guards (batch gen_ah): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f1b8(int, int);
int FUN_0c033530(int, int);
int FUN_0c036d86(int, int);
int FUN_0c0376f4(int);
int FUN_0c037954(int);
int FUN_0c037acc(int);
int FUN_0c0546fe(int, int, int, int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c08e46e(int);
int FUN_0c0a6610(int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c465c(int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0dc4c0(int);
int FUN_0c0dc510(int);
int FUN_0c0dc950(int);
int FUN_0c0dcb80(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dcd10(int, int);
int FUN_0c0dcd30(int, int, int);
float FUN_0c0dcda0(int, int);
int FUN_0c0dce40(int, int, float);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int FUN_0c0dcef0(int, int, int);
int FUN_0c0dd050(int);
int FUN_0c0de000(float);
int FUN_0c0e0454(int, int, int, float, float, float, float);
int FUN_0c0e0550(float, float, float, float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int, int, int, int);
int FUN_0c0e61d4(void);
extern void _builtin_prefetch(void *);
int FUN_0c0dfd50(int a4);
int FUN_0c038732(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
void FUN_0c08da10(int a4, int a5, int a6, int a7);
void FUN_0c02f6f4(int a4, int a5, int a6, int a7, float f4, float f5, float f6);

int FUN_0c0dfd50(int a4)
{
    int t3;
    int t7;
    float t46;
    float u52;
    float u53;
    int t56;
    float u57;
    float u58;
    int t67;
    int t69;
    int t71;
    int t75;
    int t83;
    int t91;
    int t98;
    int t101;
    int t105;
    int t107;
    int t110;
    int t159;
    int t160;
    int t166;
    int t181;
    int t185;
    int t186;
    int t187;
    int t205;
    int t240;
    int t243;
    int t11;
    int t12;
    int stk[34];

    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x0)) = a4;
    t3 = *(short *)(((*(int *)0xC94C69C) + ((*(int *)(((*(int *)(((int)stk + 124))) + 0x0))) << 1)));
    *(unsigned int *)(((int)stk + 36)) = (short)t3;
    if ((short)t3 == -1) {
        return (short)t3;
    }
    *(unsigned int *)(((int)stk + 108)) = (((((*(int *)(((int)stk + 36))) << 2) << 2) << 1) + (*(int *)0xC94C6A8));
    t7 = *(int *)(((*(int *)(((int)stk + 124))) + 0x30));
    if (t7 != 0) {
        if (t7 != 2) {
            *(float *)(((int)stk + 40)) = (*(float *)(((*(int *)(((int)stk + 124))) + 0x2C)));
            *(unsigned int *)(((int)stk + 44)) = 0x0;
            if (!(1.0f > (*(float *)(((int)stk + 40)))) && (t11 = *(int *)(((int)stk + 108)), t12 = *(int *)((t11 + 0x14)), t12 == 0)) {
            } else {
                *(unsigned int *)(((int)stk + 44)) = 0x1;
            }
        } else {
            *(float *)(((int)stk + 40)) = (*(float *)(((*(int *)(((int)stk + 124))) + 0x2C)));
            *(unsigned int *)(((int)stk + 44)) = 0x1;
        }
    } else {
        *(unsigned int *)(((int)stk + 44)) = 0x0;
    }
    *(float *)(((int)stk + 116)) = ((((*(float *)(((*(int *)(((int)stk + 108))) + 0x18))) * (*(float *)(((*(int *)(((int)stk + 124))) + 0x10))))) * 0.5f);
    *(float *)(((int)stk + 112)) = ((((*(float *)(((*(int *)(((int)stk + 108))) + 0x1C))) * (*(float *)(((*(int *)(((int)stk + 124))) + 0x14))))) * 0.5f);
    *(float *)(((int)stk + 120)) = (1.0f / (*(float *)(((*(int *)(((int)stk + 124))) + 0xC))));
    *(float *)(((int)stk + 72)) = (FUN_0c0da410((*(int *)(((*(int *)(((int)stk + 124))) + 0x28)))));
    t46 = FUN_0c0d9e90((*(int *)(((*(int *)(((int)stk + 124))) + 0x28))));
    *(float *)(((int)stk + 68)) = t46;
    FUN_0c0e0454((*(int *)(((int)stk + 124))), (((int)stk + 4) + 0x58), (((int)stk + 4) + 0x48), (*(float *)(((int)stk + 116))), (*(float *)(((int)stk + 112))), (*(float *)(((int)stk + 72))), t46);
    u52 = *(float *)0xC20CE34;
    u53 = *(float *)0xC94C6AC;
    *(float *)(((int)stk + 12)) = (u53 * u52);
    *(float *)(((int)stk + 8)) = ((*(float *)0xC94C6B0) * (*(float *)0xC20CE38));
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t56 = 0xC20CE38;
    u57 = (u53 * u52);
    u58 = u52;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) >= (int)0x4) {
            break;
        }
        t56 = (*(int *)(((int)stk + 4)));
        t56 = (t56 << 2);
        t56 = (t56 + (((int)stk + 4) + 0x58));
        u58 = (*(float *)(((int)stk + 12)));
        u57 = (*(float *)((t56 + 0x0)));
        u57 = (u57 * u58);
        *(float *)((t56 + 0x0)) = u57;
        t56 = (*(int *)(((int)stk + 4)));
        t56 = (t56 << 2);
        t56 = (t56 + (((int)stk + 4) + 0x48));
        u58 = (*(float *)(((int)stk + 8)));
        u57 = (*(float *)((t56 + 0x0)));
        u57 = (u57 * u58);
        *(float *)((t56 + 0x0)) = u57;
        t56 = (*(int *)(((int)stk + 4)));
        t56 = (t56 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t56;
    }
    t67 = *(int *)(((int)stk + 108));
    *(unsigned int *)((t67 + 0x0)) = ((*(int *)((t67 + 0x0))) & 0xF8FCFFFF);
    t69 = *(int *)(((int)stk + 108));
    *(unsigned int *)((t69 + 0x4)) = ((*(int *)((t69 + 0x4))) & 0x1FFFFFFF);
    t71 = *(int *)(((int)stk + 108));
    *(unsigned int *)((t71 + 0x8)) = ((*(int *)((t71 + 0x8))) & 0x3278FFF);
    if (((*(int *)(((*(int *)(((int)stk + 124))) + 0x34))) & 0x800) != 0) {
    } else {
        t75 = *(int *)(((int)stk + 108));
        *(unsigned int *)((t75 + 0x8)) = ((*(int *)((t75 + 0x8))) | 0x800000);
    }
    if (((*(int *)(((*(int *)(((int)stk + 124))) + 0x34))) & 0x1000) != 0) {
        t83 = *(int *)(((int)stk + 108));
        *(unsigned int *)((t83 + 0x8)) = ((*(int *)((t83 + 0x8))) | 0x2000);
    }
    if (((*(int *)(((*(int *)(((int)stk + 124))) + 0x34))) & 0x10000) != 0) {
        t91 = *(int *)(((int)stk + 108));
        *(unsigned int *)((t91 + 0x8)) = ((*(int *)((t91 + 0x8))) | 0x1000);
    }
    t98 = *(int *)(((*(int *)(((int)stk + 124))) + 0x34));
    *(unsigned int *)(((int)stk + 64)) = (((int)t98 >> 8) & 0x7);
    if ((((int)t98 >> 8) & 0x7) == 0) {
        *(unsigned int *)(((int)stk + 64)) = 0x4;
    }
    t101 = *(int *)(((int)stk + 108));
    *(unsigned int *)((t101 + 0x4)) = ((*(int *)((t101 + 0x4))) | ((*(int *)(((int)stk + 64))) << 29));
    if ((*(int *)(((int)stk + 44))) != 0) {
        t105 = *(int *)(((int)stk + 108));
        *(unsigned int *)((t105 + 0x0)) = ((*(int *)((t105 + 0x0))) | 0x2000000);
        t107 = *(int *)(((int)stk + 108));
        *(unsigned int *)((t107 + 0x8)) = ((*(int *)((t107 + 0x8))) | (((((*(int *)0xC20CC58) ^ 0xFC) << 16) << 8) | 0x100000));
    } else {
        t110 = *(int *)(((int)stk + 108));
        *(unsigned int *)((t110 + 0x8)) = ((*(int *)((t110 + 0x8))) | 0x20080000);
        *(float *)(((int)stk + 40)) = 1.0f;
    }
    if (((*(int *)(((*(int *)(((int)stk + 124))) + 0x34))) & 0x2000) != 0) {
        *(unsigned int *)((((*(int *)(((int)stk + 108))) + 0x10) + 0x0)) = (FUN_0c0e0550((*(float *)(((int)stk + 40))), (*(float *)0xC20CE80), (*(float *)0xC20CE84), (*(float *)0xC20CE88)));
    } else {
        *(unsigned int *)((((*(int *)(((int)stk + 108))) + 0x10) + 0x0)) = (FUN_0c0e0550((*(float *)(((int)stk + 40))), 1.0f, 1.0f, 1.0f));
    }
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((*(int *)(((int)stk + 124))) + 0x34))) & 0x30);
    *(float *)(((int)stk + 60)) = (*(float *)(((*(int *)(((int)stk + 124))) + 0x18)));
    *(float *)(((int)stk + 56)) = (*(float *)(((*(int *)(((int)stk + 124))) + 0x20)));
    if (((*(int *)(((int)stk + 12))) & 16) != 0) {
        *(float *)(((int)stk + 60)) = (1.0f - (*(float *)(((int)stk + 60))));
        *(float *)(((int)stk + 56)) = (1.0f - (*(float *)(((int)stk + 56))));
    }
    *(float *)(((int)stk + 52)) = (*(float *)(((*(int *)(((int)stk + 124))) + 0x1C)));
    *(float *)(((int)stk + 48)) = (*(float *)(((*(int *)(((int)stk + 124))) + 0x24)));
    if (((*(int *)(((int)stk + 12))) & 32) != 0) {
    } else {
        *(float *)(((int)stk + 52)) = (1.0f - (*(float *)(((int)stk + 52))));
        *(float *)(((int)stk + 48)) = (1.0f - (*(float *)(((int)stk + 48))));
    }
    t159 = *(int *)(((*(int *)(((int)stk + 124))) + 0x34));
    if ((t159 & 0xC000) != 0x8000) {
        if ((t159 & 0xC000) != 0xC000) {
        } else {
            t160 = *(int *)(((int)stk + 108));
            *(unsigned int *)((t160 + 0x0)) = ((*(int *)((t160 + 0x0))) | 0x30000);
        }
    } else {
        t166 = *(int *)(((int)stk + 108));
        *(unsigned int *)((t166 + 0x0)) = ((*(int *)((t166 + 0x0))) | 0x20000);
    }
    *(float *)(((int)stk + 16)) = (*(float *)(((int)stk + 60)));
    *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 16))) & 0xFFFF0000);
    *(float *)(((int)stk + 16)) = (*(float *)(((int)stk + 56)));
    *(unsigned int *)(((int)stk + 28)) = (0xFFFF0000 & (*(int *)(((int)stk + 16))));
    *(float *)(((int)stk + 16)) = (*(float *)(((int)stk + 52)));
    *(unsigned int *)(((int)stk + 24)) = ((unsigned int)(*(int *)(((int)stk + 16))) >> 16);
    *(float *)(((int)stk + 16)) = (*(float *)(((int)stk + 48)));
    *(unsigned int *)(((int)stk + 20)) = ((unsigned int)(*(int *)(((int)stk + 16))) >> 16);
    t181 = 0x0;
    if ((*(int *)(((int)stk + 44))) != 0) {
        t181 = 0x2;
    }
    *(unsigned int *)(((int)stk + 8)) = t181;
    *(unsigned int *)(((int)stk + 12)) = (*(int *)(((t181 << 2) + (*(int *)0xC952968))));
    *(unsigned int *)(((int)stk + 4)) = 0xFF000038;
    t185 = *(int *)(((int)stk + 4));
    t186 = *(int *)(((int)stk + 12));
    *(unsigned int *)((t185 + 0x0)) = ((unsigned int)((unsigned int)t186 >> 16) >> 8);
    *(unsigned int *)(((t185 + 0x4) + 0x0)) = ((unsigned int)((unsigned int)t186 >> 16) >> 8);
    t187 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = ((t187 & 0x3FFFFFF) | 0xE0000000);
    *(unsigned int *)((((t187 & 0x3FFFFFF) | 0xE0000000) + 0x0)) = ((*(int *)(((*(int *)(((int)stk + 108))) + 0x0))) | (*(int *)0xC9482A8));
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x4)) = (*(int *)(((*(int *)(((int)stk + 108))) + 0x4)));
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x8)) = ((*(int *)(((*(int *)(((int)stk + 108))) + 0x8))) | (*(int *)0xC9482AC));
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0xC)) = (*(int *)(((*(int *)(((int)stk + 108))) + 0xC)));
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x10)) = (*(int *)(((*(int *)(((int)stk + 108))) + 0x10)));
    _builtin_prefetch((void *)(*(int *)(((int)stk + 12))));
    t205 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = (t205 + 0x20);
    *(unsigned int *)(((t205 + 0x20) + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x4)) = (*(int *)(((int)stk + 92)));
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x8)) = (*(int *)(((int)stk + 76)));
    *(float *)(((*(int *)(((int)stk + 12))) + 0xC)) = (*(float *)(((int)stk + 120)));
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x10)) = (*(int *)(((int)stk + 96)));
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x14)) = (*(int *)(((int)stk + 80)));
    *(float *)(((*(int *)(((int)stk + 12))) + 0x18)) = (*(float *)(((int)stk + 120)));
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x1C)) = (*(int *)(((int)stk + 100)));
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x20)) = (*(int *)(((int)stk + 84)));
    *(float *)(((*(int *)(((int)stk + 12))) + 0x24)) = (*(float *)(((int)stk + 120)));
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x28)) = (*(int *)(((int)stk + 104)));
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x2C)) = (*(int *)(((int)stk + 88)));
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x30)) = ((*(int *)(((int)stk + 36))) | 0x53500000);
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x34)) = ((*(int *)(((int)stk + 32))) | (*(int *)(((int)stk + 24))));
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x38)) = ((*(int *)(((int)stk + 28))) | (*(int *)(((int)stk + 24))));
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x3C)) = ((*(int *)(((int)stk + 28))) | (*(int *)(((int)stk + 20))));
    _builtin_prefetch((void *)(*(int *)(((int)stk + 12))));
    t240 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = (t240 + 0x20);
    _builtin_prefetch((void *)(t240 + 0x20));
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x20);
    t243 = *(int *)0xC952968;
    *(unsigned int *)(((((*(int *)(((int)stk + 8))) << 2) + t243) + 0x0)) = (((*(int *)((((*(int *)(((int)stk + 8))) << 2) + t243))) & 0xFC000000) | ((*(int *)(((int)stk + 12))) & 0x3FFFFFF));
    return t243;
}

int FUN_0c038732(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t7;
    int t9;
    int t11;
    int t12;
    int t30;
    int t31;
    int t32;
    int t33;
    int t35;
    int t42;
    int t47;
    int t52;
    int t59;
    int t64;
    int t70;
    float u81;
    float u82;
    float u83;
    float u84;
    float u86;
    int t87;
    float u88;
    float u89;
    float u91;
    int t101;
    int t1;
    int t106;
    int stk[26];

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    if (((*(int *)((a4 + 0x48C))) == 21) && (t1 = *(int *)(((int)stk + 8)), t1 == 1)) {
        *(volatile short *)((a4 + 0x6E));
        FUN_0c0da2e0();
        FUN_0c0da2e0();
        t106 = (FUN_0c033530(a4, a8));
    } else {
        t7 = FUN_0c0e1830(0xC03840E, 0x41C);
        FUN_0c0e19d0(t7);
        t9 = *(int *)(((int)stk + 16));
        t11 = *(int *)(((int)stk + 12));
        t12 = *(int *)((((*(int *)((a4 + 0xC0))) << 2) + 0xC195BE0));
        *(unsigned int *)((t7 + 0x21C)) = a10;
        *(unsigned int *)((t7 + 0x1DC)) = ((*(short *)((a4 + 0x6E))) - 32768);
        *(unsigned int *)((t7 + 0x1CC)) = a8;
        *(unsigned int *)((t7 + 0x414)) = (*(int *)((a4 + 0x5C8)));
        *(float *)((t7 + 0x3EC)) = 0.0272199996f;
        *(unsigned int *)((t7 + 0x238)) = (*(short *)((a9 + 0x0)));
        *(unsigned int *)((t7 + 0x23C)) = (*(short *)(((a9 + 0x2) + 0x0)));
        *(unsigned int *)((t7 + 0x240)) = (*(short *)((((a9 + 0x2) + 0x2) + 0x0)));
        *(float *)((t7 + 0x268)) = 0.0f;
        *(float *)((t7 + 0x26C)) = 0.0f;
        *(float *)((t7 + 0x270)) = 0.0f;
        *(float *)((t7 + 0x274)) = ((*(float *)((((((t9 << 1) + t9) << 2) + t12) + 0x0))) * (*(float *)((a4 + 0x274))));
        *(float *)((t7 + 0x278)) = ((*(float *)((((((t9 << 1) + t9) << 2) + t12) + 0x4))) * (*(float *)((a4 + 0x278))));
        *(float *)((t7 + 0x27C)) = ((*(float *)((((((t9 << 1) + t9) << 2) + t12) + 0x8))) * (*(float *)((a4 + 0x27C))));
        *(float *)((t7 + 0x280)) = ((*(float *)(((t12 + (((t11 << 1) + t11) << 2)) + 0x0))) * (*(float *)((a4 + 0x274))));
        *(float *)((t7 + 0x284)) = ((*(float *)(((t12 + (((t11 << 1) + t11) << 2)) + 0x4))) * (*(float *)((a4 + 0x278))));
        *(float *)((t7 + 0x288)) = ((*(float *)(((t12 + (((t11 << 1) + t11) << 2)) + 0x8))) * (*(float *)((a4 + 0x27C))));
        t30 = ((int (*)(int, int))(FUN_0c0e61d4))((((int)stk + 8) + 0x18), (t12 + (((t11 << 1) + t11) << 2)));
        t31 = ((int (*)(int))(FUN_0c0e61d4))(a4);
        t32 = ((int (*)(int))(FUN_0c0e61d4))(a4);
        t33 = ((int (*)(int))(FUN_0c0e61d4))(a4);
        *(unsigned int *)((t7 + 0x400)) = (*(int *)(((int)stk + 8)));
        t35 = *(int *)(((int)stk + 8));
        if ((unsigned int)t35 < (unsigned int)0x10) {
            switch ((t35 << 1)) {
                case 0:
                case 4:
                {
                }
                    break;
                case 2:
                {
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((((FUN_0c0da2e0()) & 0x3800) + ((*(short *)((a4 + 0x6E))))) - 8192);
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((*(int *)(((0x3E8 + t7) + 0x0))) + ((FUN_0c0da2e0()) & 0x8000));
                    *(volatile int *)((a4 + 0xBC));
                    t42 = ((int (*)(void))(FUN_0c0e61d4))();
                    *(float *)((t7 + 0x3F0)) = 1.19999993f;
                }
                    break;
                case 6:
                case 8:
                case 10:
                {
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((((FUN_0c0da2e0()) & 0x3800) + ((*(short *)((a4 + 0x6E))))) + 0x2000);
                    *(volatile int *)((a4 + 0xBC));
                    t47 = ((int (*)(void))(FUN_0c0e61d4))();
                    *(float *)((t7 + 0x3F0)) = 1.5f;
                }
                    break;
                case 12:
                case 14:
                case 16:
                {
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((((FUN_0c0da2e0()) & 0x3800) + ((*(short *)((a4 + 0x6E))))) + 0xA000);
                    *(volatile int *)((a4 + 0xBC));
                    t52 = ((int (*)(void))(FUN_0c0e61d4))();
                    *(float *)((t7 + 0x3F0)) = 1.5f;
                }
                    break;
                case 18:
                case 20:
                case 26:
                {
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((((FUN_0c0da2e0()) & 0x3800) + ((*(short *)((a4 + 0x6E))))) - 8192);
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((*(int *)(((0x3E8 + t7) + 0x0))) + ((FUN_0c0da2e0()) & 0x8000));
                    *(volatile int *)((a4 + 0xBC));
                    t59 = ((int (*)(void))(FUN_0c0e61d4))();
                    *(float *)((t7 + 0x3F0)) = (1.0f + 1.0f);
                }
                    break;
                case 22:
                case 24:
                {
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((((FUN_0c0da2e0()) & 0x3800) + ((*(short *)((a4 + 0x6E))))) + 0x2000);
                    *(volatile int *)((a4 + 0xBC));
                    t64 = ((int (*)(void))(FUN_0c0e61d4))();
                    *(float *)((t7 + 0x3F0)) = (*(float *)0xC038C28);
                }
                    break;
                default:
                {
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((((FUN_0c0da2e0()) & 0x3800) + ((*(short *)((a4 + 0x6E))))) + 0xA000);
                    *(volatile int *)((a4 + 0xBC));
                    t70 = ((int (*)(void))(FUN_0c0e61d4))();
                    *(float *)((t7 + 0x3F0)) = (*(float *)0xC038C28);
                }
                    break;
            }
        }
        FUN_0c0376f4(t7);
        FUN_0c037954(t7);
        *(unsigned int *)((t7 + 0x3DC)) = 0xFFFFFFFF;
        FUN_0c037acc(t7);
        *(float *)(((((int)stk + 8) + 0x18) + 0x0)) = 0.0f;
        u81 = *(float *)0xC038C38;
        u82 = *(float *)0xC038C3C;
        u83 = *(float *)((t7 + 0x3F0));
        u84 = *(float *)0xC038C40;
        *(float *)(((int)stk + 4)) = (u84 / (u83 / (1.0f + 1.0f)));
        u86 = u81;
        u86 = u86 + u82 * (float)((FUN_0c0da2e0()) & 0x7);
        *(float *)(((((int)stk + 8) + 0x18) + 0x4)) = ((u84 / (u83 / (1.0f + 1.0f))) * u86);
        t87 = *(int *)((t7 + 0x1CC));
        u88 = *(float *)0xC038C44;
        u89 = *(float *)((t7 + 0x3F0));
        *(float *)(((int)stk + 4)) = (((float)t87 * u88) / (u89 / (1.0f + 1.0f)));
        u91 = u81;
        u91 = u91 + u82 * (float)((FUN_0c0da2e0()) & 0x7);
        *(float *)(((((int)stk + 8) + 0x18) + 0x8)) = (((((float)t87 * u88) / (u89 / (1.0f + 1.0f)))) * u91);
        *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x0)) = 0x0;
        *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x4)) = ((*(int *)((t7 + 0x3E8))) + 0x8000);
        *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x8)) = 0x0;
        FUN_0c0a6610((((int)stk + 8) + 0x18), (((int)stk + 8) + 0xC), (0x220 + t7));
        *(unsigned int *)(((0x22C + t7) + 0x0)) = ((FUN_0c0da2e0()) & 0x900);
        *(unsigned int *)((t7 + 0x230)) = 0x0;
        *(unsigned int *)(((0x234 + t7) + 0x0)) = ((FUN_0c0da2e0()) & 0x400);
        *(unsigned int *)((t7 + 0x410)) = 0x0;
        t101 = 0x380;
        if ((*(int *)((a4 + 0x380))) != 0) {
            t101 = (FUN_0c036d86(t7, (*(int *)(((*(int *)((a4 + 0x380))) + 0x0)))));
        }
        t106 = t101;
    }
    return t106;
}

void FUN_0c08da10(int a4, int a5, int a6, int a7)
{
    int t0;
    float u16;
    float u21;
    float u36;
    float u37;
    float u44;
    int t46;
    int t48;
    float u55;
    int t68;
    int t75;
    float t76;
    int t89;
    float u94;
    int t96;
    float t105;
    int t108;
    float t116;
    float u122;
    int t128;
    float t133;
    float u141;
    int stk[20];

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
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C08DA10:;
    t0 = *(int *)((R4 + 0x70));
    R0 = (t0);
    R10 = (0xC248DC0);
    R11 = (0xC0DA2E0);
    R12 = (0x1);
    R14 = (R4);
    R8 = (0x244);
    R9 = (0xC0DCE80);
    F12 = (0.00999999978f);
    F15 = (1.0f);
    if ((t0 == 0)) goto L_C08DA64;
    goto L_C08DA44;
    L_C08DA44:;
    if ((R0 == 1)) goto L_C08DB08;
    goto L_C08DA48;
    L_C08DA48:;
    if ((R0 != 2)) goto L_C08DA50;
    goto L_C08DA4C;
    L_C08DA4C:;
    goto L_C08DBA2;
    L_C08DBA2:;
    FUN_0c0685a4(R4, R5, R6, R7);
    goto L_C08DDD8;
    L_C08DDD8:;
    if (((*(int *)((R14 + 0x70))) != 4)) goto L_C08DE28;
    goto L_C08DDE0;
    L_C08DDE0:;
    u16 = *(float *)((R14 + 0x68));
    *(float *)((R14 + 0x68)) = (u16 * 0.979999959f);
    R0 = (0x68);
    F1 = (0.0f);
    if ((!((u16 * 0.979999959f) > 0.0f))) goto L_C08DE98;
    goto L_C08DDF4;
    L_C08DDF4:;
    goto L_C08DE4A;
    L_C08DE4A:;
    FUN_0c0dc510(0x0);
    u21 = *(float *)((R14 + 0x68));
    FUN_0c0dcca0((R14 + 0x34));
    FUN_0c0dc950((*(int *)((R14 + 0x6C))));
    FUN_0c0dcb80(u21, u21, u21);
    FUN_0c0de000(u21);
    FUN_0c0848d6((*(float *)((R14 + 0x40))), (*(float *)((R14 + 0x44))), (*(float *)((R14 + 0x48))));
    FUN_0c0c465c((*(int *)((R14 + 0x74))));
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    R0 = ((FUN_0c0dc4c0(0x1)));
    goto L_C08DE98;
    L_C08DE98:;
    return;
    L_C08DE28:;
    u36 = *(float *)0xC08DF04;
    u37 = *(float *)((R14 + 0x64));
    R0 = (0x68);
    F4 = ((u37 * u36));
    if ((!((u37 * u36) > (*(float *)((R14 + 0x68)))))) goto L_C08DE4A;
    goto L_C08DE3A;
    L_C08DE3A:;
    u44 = (*(float *)((R14 + R0)));
    u44 = u44 + F12 * (F4 - (*(float *)(((R0 + R14) + 0x0))));
    *(float *)((R14 + R0)) = u44;
    goto L_C08DE4A;
    L_C08DA50:;
    if ((R0 != 3)) goto L_C08DA58;
    goto L_C08DA54;
    L_C08DA54:;
    goto L_C08DBD0;
    L_C08DBD0:;
    t46 = *(int *)((R14 + 0x78));
    *(unsigned int *)((R14 + 0x78)) = (t46 - 1);
    if (((int)(t46 - 1) <= 0)) goto L_C08DBE0;
    goto L_C08DBDC;
    L_C08DBDC:;
    goto L_C08DDD8;
    L_C08DBE0:;
    t48 = FUN_0c0e1830(0xC08DEB4, R8);
    FUN_0c0e19d0(t48);
    FUN_0c0e61d4();
    *(float *)((t48 + 0x34)) = ((*(float *)((t48 + 0x34))) + 3.0f);
    *(unsigned int *)(((0x238 + t48) + 0x0)) = (((FUN_0c0da2e0()) << 2) << 2);
    *(float *)((t48 + 0x228)) = (*(float *)((R14 + 0x64)));
    u55 = 450.0f;
    u55 = u55 + 60.0f * (*(float *)((R14 + 0x64)));
    *(unsigned int *)((t48 + 0x240)) = (int)u55;
    *(unsigned int *)((t48 + 0x230)) = R12;
    *(unsigned int *)((t48 + 0xBC)) = 0x14;
    FUN_0c0e61d4();
    *(float *)((t48 + 0x40)) = ((*(float *)((t48 + 0x40))) - 10.0f);
    *(unsigned int *)((t48 + 0x1F8)) = 0x4;
    *(unsigned int *)((t48 + 0x1F4)) = 0xA;
    *(float *)((t48 + 0x1E4)) = ((*(float *)((R14 + 0x64))) * F15);
    R13 = (t48);
    if (((*(int *)((R14 + 0x78))) == 0)) goto L_C08DC80;
    goto L_C08DC7A;
    L_C08DC7A:;
    F2 = (4.0f);
    goto L_C08DC84;
    L_C08DC84:;
    *(float *)((R13 + 0x22C)) = F2;
    *(unsigned int *)((R14 + 0x70)) = 0x4;
    *(unsigned int *)((R14 + 0x78)) = 0x0;
    FUN_0c08e46e(0x258);
    goto L_C08DDD8;
    L_C08DC80:;
    F2 = ((1.0f + 1.0f));
    goto L_C08DC84;
    L_C08DA58:;
    if ((R0 != 4)) goto L_C08DA60;
    goto L_C08DA5C;
    L_C08DA5C:;
    goto L_C08DC9C;
    L_C08DC9C:;
    if ((((*(int *)((R14 + 0x78))) & R12) != 0)) goto L_C08DCA8;
    goto L_C08DCA4;
    L_C08DCA4:;
    goto L_C08DDC2;
    L_C08DDC2:;
    t68 = *(int *)((R14 + 0x78));
    *(unsigned int *)((R14 + 0x78)) = (t68 + 0x1);
    if (((t68 + 0x1) != 30)) goto L_C08DDD8;
    goto L_C08DDD2;
    L_C08DDD2:;
    FUN_0c0e19f2(R4, R5, R6, R7);
    goto L_C08DDD8;
    L_C08DCA8:;
    if ((R12 != 0)) goto L_C08DCB0;
    goto L_C08DCAC;
    L_C08DCAC:;
    goto L_C08DDC2;
    L_C08DCB0:;
    R13 = ((*(int *)((R10 + 0x0))));
    goto L_C08DDBA;
    L_C08DDBA:;
    if ((R13 == 0)) goto L_C08DDC2;
    goto L_C08DDBE;
    L_C08DDBE:;
    goto L_C08DCB4;
    L_C08DCB4:;
    t75 = *(int *)((R14 + 0x78));
    t76 = FUN_0c0dcda0((R14 + 0x34), (R13 + 0x34));
    F0 = (t76);
    F13 = ((float)t75);
    F4 = (t76);
    if ((t76 > (float)t75)) goto L_C08DDB6;
    goto L_C08DCD0;
    L_C08DCD0:;
    *(unsigned int *)((R13 + 0x70)) = 0x3;
    *(unsigned int *)((R13 + 0x78)) = (int)F13;
    R4 = (R13);
    F14 = ((F4 * 0.125f));
    if ((R13 != (*(int *)((R10 + 0x0))))) goto L_C08DD30;
    goto L_C08DCEE;
    L_C08DCEE:;
    *(unsigned int *)((R10 + 0x0)) = (*(int *)((R4 + 0x30)));
    goto L_C08DD36;
    L_C08DD36:;
    if ((F15 > F14)) goto L_C08DDB8;
    goto L_C08DD3A;
    L_C08DD3A:;
    FUN_0c0dcef0((((int)stk + 4) + 0x10), (R13 + 0x34), (R14 + 0x34));
    FUN_0c0dd050((((int)stk + 4) + 0x10));
    goto L_C08DD52;
    L_C08DD52:;
    t89 = FUN_0c0e1830(0xC08DEB4, R8);
    FUN_0c0e19d0(t89);
    FUN_0c0dce80((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10), (F14 * 2.5f));
    FUN_0c0dcd30((t89 + 0x30), (R14 + 0x34), (((int)stk + 4) + 0x4));
    *(unsigned int *)((t89 + 0x234)) = (int)F14;
    u94 = 0.599999964f;
    u94 = u94 + 1.22074025e-05f * (float)(FUN_0c0da2e0());
    *(float *)((t89 + 0x228)) = ((*(float *)((R14 + 0x64))) * u94);
    *(unsigned int *)((t89 + 0x240)) = 0x3C;
    t96 = !(F15 > (F14 - F15));
    F0 = (1.22074025e-05f);
    F14 = ((F14 - F15));
    if (t96) goto L_C08DD52;
    goto L_C08DDB2;
    L_C08DDB2:;
    goto L_C08DDB8;
    L_C08DDB8:;
    R13 = ((*(int *)((R13 + 0x30))));
    goto L_C08DDBA;
    L_C08DD30:;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x30)) = (*(int *)((R4 + 0x30)));
    goto L_C08DD36;
    L_C08DDB6:;
    *(unsigned int *)(((int)stk + 4)) = R13;
    goto L_C08DDB8;
    L_C08DA60:;
    goto L_C08DDD8;
    L_C08DB08:;
    FUN_0c0dcd10((R14 + 0x34), (R14 + 0x4C));
    FUN_0c0dce80((R14 + 0x4C), (R14 + 0x4C), 0.979999959f);
    t105 = FUN_0c0dcea0((R14 + 0x4C));
    F0 = (t105);
    if ((!(t105 > 9.99999997e-07f))) goto L_C08DB36;
    goto L_C08DB32;
    L_C08DB32:;
    goto L_C08DDD8;
    L_C08DB36:;
    *(unsigned int *)((R14 + 0x70)) = 0x2;
    t108 = *(int *)((R14 + 0x78));
    *(unsigned int *)((R14 + 0x78)) = (t108 - 1);
    if (((t108 - 1) != 0)) goto L_C08DB4C;
    goto L_C08DB48;
    L_C08DB48:;
    goto L_C08DDD8;
    L_C08DB4C:;
    R13 = ((*(int *)((R10 + 0x0))));
    F14 = (2.44148055e-07f);
    F15 = (0.00799999945f);
    goto L_C08DB9A;
    L_C08DB9A:;
    if ((R13 != 0)) goto L_C08DB58;
    goto L_C08DB9E;
    L_C08DB9E:;
    goto L_C08DDD8;
    L_C08DB58:;
    if ((R14 == R13)) goto L_C08DB98;
    goto L_C08DB5C;
    L_C08DB5C:;
    t116 = FUN_0c0dcda0((R13 + 0x34), (R14 + 0x34));
    F0 = (t116);
    if ((t116 > (((*(float *)((R14 + 0x64))) + (*(float *)((R13 + 0x64)))) * 10.0f))) goto L_C08DB98;
    goto L_C08DB7A;
    L_C08DB7A:;
    *(unsigned int *)((R14 + 0x70)) = R12;
    u122 = F15;
    u122 = u122 + F14 * (float)(FUN_0c0da2e0());
    FUN_0c0dce80((R14 + 0x4C), (R14 + 0x58), u122);
    goto L_C08DDD8;
    L_C08DB98:;
    R13 = ((*(int *)((R13 + 0x30))));
    goto L_C08DB9A;
    L_C08DA64:;
    *(unsigned int *)((R14 + 0x70)) = 0x2;
    t128 = (*(int *)((R10 + 0x0)));
    R10 = (0xC0DCE40);
    R13 = t128;
    F14 = (3.05185068e-07f);
    F15 = (0.0f);
    goto L_C08DAD6;
    L_C08DAD6:;
    if ((R13 != 0)) goto L_C08DA76;
    goto L_C08DADA;
    L_C08DADA:;
    goto L_C08DDD8;
    L_C08DA76:;
    if ((R13 == R14)) goto L_C08DAD4;
    goto L_C08DA7A;
    L_C08DA7A:;
    t133 = FUN_0c0dcda0((R13 + 0x34), (R14 + 0x34));
    F0 = (t133);
    if ((t133 > (((*(float *)((R14 + 0x64))) + (*(float *)((R13 + 0x64)))) * 10.0f))) goto L_C08DAD4;
    goto L_C08DA98;
    L_C08DA98:;
    *(unsigned int *)((R14 + 0x70)) = R12;
    FUN_0c0dcef0((R14 + 0x58), (R13 + 0x34), (R14 + 0x34));
    *(float *)((R14 + 0x5C)) = F15;
    FUN_0c0dd050((R14 + 0x58));
    u141 = F12;
    u141 = u141 + F14 * (float)(FUN_0c0da2e0());
    FUN_0c0dce40((R14 + 0x4C), (R14 + 0x58), u141);
    goto L_C08DDD8;
    L_C08DAD4:;
    R13 = ((*(int *)((R13 + 0x30))));
    goto L_C08DAD6;
}

void FUN_0c02f6f4(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int t5;
    int t15;
    int t16;
    int t20;
    float t34;
    int t51;
    int t62;
    int t73;
    float t77;
    int t106;
    int t115;
    int t125;
    int t126;
    int stk[26];

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
    float F4;
    float F5;
    float F6;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    L_C02F6F4:;
    R12 = (0x1);
    R14 = (R4);
    R9 = (0xC0A7714);
    if (((*(int *)((R4 + 0x504))) != 0)) goto L_C02F794;
    goto L_C02F71A;
    L_C02F71A:;
    t5 = *(int *)((R14 + 0xAC));
    R0 = (0xAC);
    R4 = (t5);
    F15 = (12288.0f);
    if (((int)t5 < (int)0x9)) goto L_C02F75E;
    goto L_C02F728;
    L_C02F728:;
    if (((int)R4 > (int)0xB)) goto L_C02F75E;
    goto L_C02F72E;
    L_C02F72E:;
    FUN_0c0a7714((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x8), (*(float *)((R14 + 0x98))), (*(float *)((R14 + 0x9C))), (*(float *)((R14 + 0xA0))));
    t15 = *(int *)(((int)stk + 12));
    t16 = *(short *)((R14 + 0x6E));
    R4 = (t15);
    R6 = ((short)(t16 - t15));
    if ((!(F15 > _builtin_fabsf((float)(short)(t16 - t15))))) goto L_C02F794;
    goto L_C02F758;
    L_C02F758:;
    *(unsigned int *)((R14 + 0x504)) = R12;
    goto L_C02F794;
    L_C02F794:;
    t20 = *(int *)((R14 + 0x504));
    R0 = (t20);
    R10 = (0xC1F8E3C);
    R11 = (0x3);
    R13 = (0x0);
    R8 = (0xC01F1B8);
    F13 = ((-1.0f));
    F14 = (0.049999997f);
    F15 = (0.0f);
    if ((t20 != 0)) goto L_C02F7B2;
    goto L_C02F7AE;
    L_C02F7AE:;
    goto L_C02FB5A;
    L_C02FB5A:;
    R0 = (0x0);
    goto L_C02FB5C;
    L_C02FB5C:;
    return;
    L_C02F7B2:;
    if ((R0 == 1)) goto L_C02F800;
    goto L_C02F7B6;
    L_C02F7B6:;
    if ((R0 == 2)) goto L_C02F85E;
    goto L_C02F7BA;
    L_C02F7BA:;
    if ((R0 != 3)) goto L_C02F7C2;
    goto L_C02F7BE;
    L_C02F7BE:;
    goto L_C02F8DC;
    L_C02F8DC:;
    t34 = FUN_0c01f1b8((R14 + 0x30), (((int)stk + 4) + 0x2C));
    R0 = (0x26C);
    F0 = (t34);
    F4 = (t34);
    if ((!((*(float *)((R14 + 0x26C))) > F13))) goto L_C02F8F6;
    goto L_C02F8F0;
    L_C02F8F0:;
    *(float *)((R14 + R0)) = ((*(float *)((R14 + R0))) - F14);
    goto L_C02F8F6;
    L_C02F8F6:;
    *(float *)((R14 + 0x48)) = ((*(float *)((R14 + 0x48))) + (*(float *)(((0x258 + R14) + 0x0))));
    *(float *)((R14 + 0x4C)) = ((*(float *)((R14 + 0x4C))) + (*(float *)(((0x26C + R14) + 0x0))));
    *(float *)((R14 + 0x50)) = ((*(float *)((R14 + 0x50))) + (*(float *)(((0x260 + R14) + 0x0))));
    if ((!(F4 > ((*(float *)((R14 + 0x34))) + (*(float *)((R14 + 0x4C))))))) goto L_C02F932;
    goto L_C02F92E;
    L_C02F92E:;
    goto L_C02FAD6;
    L_C02FAD6:;
    *(float *)((R14 + 0x258)) = F15;
    *(float *)((R14 + 0x25C)) = F15;
    *(float *)((R14 + 0x260)) = F15;
    *(float *)((R14 + 0x4C)) = ((*(float *)((R14 + 0x4C))) - 10.0f);
    t51 = *(int *)((R14 + 0x4F0));
    *(unsigned int *)((R14 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((R10 + (((t51 << 2) + t51) << 2)) + 0x8))) + 0x2A)));
    *(unsigned int *)((R14 + 0x2CC)) = R12;
    *(unsigned int *)((R14 + 0x504)) = 0x7;
    goto L_C02FB56;
    L_C02FB56:;
    R0 = (0x1);
    goto L_C02FB5C;
    L_C02F932:;
    goto L_C02FB56;
    L_C02F7C2:;
    if ((R0 != 4)) goto L_C02F7CA;
    goto L_C02F7C6;
    L_C02F7C6:;
    goto L_C02F96C;
    L_C02F96C:;
    FUN_0c0a7714(((int)stk + 4), (0x52C + R14), (*(float *)((R14 + 0x98))), (*(float *)((R14 + 0x9C))), (*(float *)((R14 + 0xA0))));
    *(unsigned int *)((R14 + 0x20C)) = ((*(int *)((R14 + 0x20C))) | 0x400000);
    *(unsigned int *)((R14 + 0x210)) = 0x2F;
    *(unsigned int *)((R14 + 0xA4)) = ((*(int *)((R14 + 0xA4))) & 0xFFFFFF9D);
    *(unsigned int *)((R14 + 0x2D4)) = R11;
    *(unsigned int *)((R14 + 0x4C4)) = R11;
    *(unsigned int *)((R14 + 0x500)) = 0xF;
    t62 = *(int *)((R14 + 0x4F0));
    *(unsigned int *)((R14 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((R10 + (((t62 << 2) + t62) << 2)) + 0x8))) + 0x26)));
    *(unsigned int *)((R14 + 0x2CC)) = R12;
    R3 = (0x5);
    goto L_C02F9C8;
    L_C02F9C8:;
    *(unsigned int *)((R14 + 0x504)) = R3;
    goto L_C02FB56;
    L_C02F7CA:;
    if ((R0 != 5)) goto L_C02F7D2;
    goto L_C02F7CE;
    L_C02F7CE:;
    goto L_C02F9CE;
    L_C02F9CE:;
    FUN_0c0546fe(R14, (*(int *)((R14 + 0x52C))), 0x200, 0x1);
    if ((((*(int *)((R14 + 0x2EC))) & 12) != 0)) goto L_C02F9E8;
    goto L_C02F9E4;
    L_C02F9E4:;
    goto L_C02FB56;
    L_C02F9E8:;
    FUN_0c01f1b8((R14 + 0x30), (((int)stk + 4) + 0x2C));
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = F15;
    *(float *)(((((int)stk + 4) + 0x20) + 0x4)) = F15;
    *(float *)(((((int)stk + 4) + 0x20) + 0x8)) = -0.25f;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = R13;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4)) = R13;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x8)) = R13;
    FUN_0c0a6610((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14), (0x258 + R14));
    *(float *)((R14 + 0x26C)) = 0.199999988f;
    t73 = *(int *)((R14 + 0x4F0));
    *(unsigned int *)((R14 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((R10 + (((t73 << 2) + t73) << 2)) + 0x8))) + 0x28)));
    *(unsigned int *)((R14 + 0x20C)) = 0x20000;
    *(unsigned int *)((R14 + 0x2CC)) = R12;
    *(unsigned int *)((R14 + 0x504)) = 0x6;
    goto L_C02FB56;
    L_C02F7D2:;
    if ((R0 != 6)) goto L_C02F7DA;
    goto L_C02F7D6;
    L_C02F7D6:;
    goto L_C02FA84;
    L_C02FA84:;
    t77 = FUN_0c01f1b8((R14 + 0x30), (((int)stk + 4) + 0x2C));
    R0 = (0x26C);
    F0 = (t77);
    F4 = (t77);
    if ((!((*(float *)((R14 + 0x26C))) > F13))) goto L_C02FA9E;
    goto L_C02FA98;
    L_C02FA98:;
    *(float *)((R14 + R0)) = ((*(float *)((R14 + R0))) - F14);
    goto L_C02FA9E;
    L_C02FA9E:;
    *(float *)((R14 + 0x48)) = ((*(float *)((R14 + 0x48))) + (*(float *)(((0x258 + R14) + 0x0))));
    *(float *)((R14 + 0x4C)) = ((*(float *)((R14 + 0x4C))) + (*(float *)(((0x26C + R14) + 0x0))));
    *(float *)((R14 + 0x50)) = ((*(float *)((R14 + 0x50))) + (*(float *)(((0x260 + R14) + 0x0))));
    if ((!(F4 > ((*(float *)((R14 + 0x34))) + (*(float *)((R14 + 0x4C))))))) goto L_C02FB56;
    goto L_C02FAD6;
    L_C02F7DA:;
    if ((R0 != 7)) goto L_C02F7E2;
    goto L_C02F7DE;
    L_C02F7DE:;
    goto L_C02FB16;
    L_C02FB16:;
    if ((((*(int *)((R14 + 0x2EC))) & 12) == 0)) goto L_C02FB56;
    goto L_C02FB1E;
    L_C02FB1E:;
    *(unsigned int *)((R14 + 0xA4)) = ((*(int *)((R14 + 0xA4))) | 0x62);
    *(unsigned int *)((R14 + 0x20C)) = ((*(int *)((R14 + 0x20C))) & 0xFFFDFFFF);
    *(unsigned int *)((R14 + 0x20C)) = ((*(int *)((R14 + 0x20C))) | R12);
    *(unsigned int *)((R14 + 0x210)) = R13;
    *(unsigned int *)((R14 + 0x3AC)) = (*(int *)((R14 + 0x3B0)));
    *(unsigned int *)((R14 + 0x2D4)) = R11;
    *(unsigned int *)((R14 + 0x4C4)) = R13;
    *(unsigned int *)((R14 + 0x500)) = R13;
    *(unsigned int *)((R14 + 0x504)) = R13;
    goto L_C02FB5A;
    L_C02F7E2:;
    goto L_C02FB5A;
    L_C02F85E:;
    FUN_0c0546fe(R14, (*(int *)((R14 + 0x52C))), 0x200, 0x1);
    if ((((*(int *)((R14 + 0x2EC))) & 12) != 0)) goto L_C02F878;
    goto L_C02F874;
    L_C02F874:;
    goto L_C02FB56;
    L_C02F878:;
    FUN_0c01f1b8((R14 + 0x30), (((int)stk + 4) + 0x2C));
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = F15;
    *(float *)(((((int)stk + 4) + 0x20) + 0x4)) = F15;
    *(float *)(((((int)stk + 4) + 0x20) + 0x8)) = 0.25f;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = R13;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4)) = R13;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x8)) = R13;
    FUN_0c0a6610((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14), (0x258 + R14));
    *(float *)((R14 + 0x26C)) = 1.19999993f;
    t106 = *(int *)((R14 + 0x4F0));
    *(unsigned int *)((R14 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((R10 + (((t106 << 2) + t106) << 2)) + 0x8))) + 0x22)));
    *(unsigned int *)((R14 + 0x20C)) = 0x20000;
    *(unsigned int *)((R14 + 0x2CC)) = R12;
    *(unsigned int *)((R14 + 0x504)) = R11;
    goto L_C02FB56;
    L_C02F800:;
    FUN_0c0a7714(((int)stk + 4), (0x52C + R14), (*(float *)((R14 + 0x98))), (*(float *)((R14 + 0x9C))), (*(float *)((R14 + 0xA0))));
    *(unsigned int *)((R14 + 0x20C)) = ((*(int *)((R14 + 0x20C))) | 0x400000);
    *(unsigned int *)((R14 + 0x210)) = 0x2F;
    *(unsigned int *)((R14 + 0xA4)) = ((*(int *)((R14 + 0xA4))) & 0xFFFFFF9D);
    *(unsigned int *)((R14 + 0x2D4)) = R11;
    *(unsigned int *)((R14 + 0x4C4)) = R11;
    *(unsigned int *)((R14 + 0x500)) = 0xE;
    t115 = *(int *)((R14 + 0x4F0));
    *(unsigned int *)((R14 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((R10 + (((t115 << 2) + t115) << 2)) + 0x8))) + 0x24)));
    *(unsigned int *)((R14 + 0x2CC)) = R12;
    R3 = (0x2);
    goto L_C02F9C8;
    L_C02F75E:;
    if (((*(int *)((R14 + R0))) != 8)) goto L_C02F794;
    goto L_C02F764;
    L_C02F764:;
    FUN_0c0a7714((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x4), (*(float *)((R14 + 0x98))), (*(float *)((R14 + 0x9C))), (*(float *)((R14 + 0xA0))));
    t125 = *(int *)(((int)stk + 8));
    t126 = *(short *)((R14 + 0x6E));
    R4 = ((short)(t126 - t125));
    R6 = ((t126 - t125));
    if ((!(F15 > _builtin_fabsf((float)(short)(t126 - t125))))) goto L_C02F794;
    goto L_C02F78E;
    L_C02F78E:;
    *(unsigned int *)((R14 + 0x504)) = 0x4;
    goto L_C02F794;
}
