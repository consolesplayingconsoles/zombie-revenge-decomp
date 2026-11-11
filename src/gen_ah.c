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
int FUN_0c0849da(void);
int FUN_0c08e46e(int);
int FUN_0c0a6610(int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c465c(int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcca0(int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
float nlLength(int, int);
int nlScaleUnitVector(int, int, float);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int nlSubVector3op(int, int, int);
int FUN_0c0dd050(int);
int FUN_0c0de000(float);
int FUN_0c0e0454(int, int, int, float, float, float, float);
int FUN_0c0e0550(float, float, float, float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int _quick_odd_mvn(void);
extern void _builtin_prefetch(void *);
int FUN_0c0dfd50(int a4);
int FUN_0c038732(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
void FUN_0c08da10(int a4, int a5, int a6, int a7);
int FUN_0c02f6f4(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o228_float { char p[0x228]; float v; };
struct o22C_float { char p[0x22C]; float v; };
struct o230_uint { char p[0x230]; unsigned int v; };
struct o234_uint { char p[0x234]; unsigned int v; };
struct o238_uint { char p[0x238]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o240_uint { char p[0x240]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_int { char p[0x74]; int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_int { char p[0xC]; int v; };



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
    int stk[33];

    (((struct o78_uint *)(((int)stk + 0)))->v) = a4;
    t3 = *(short *)((((((struct o0_int *)0xC94C69C)->v)) + ((*(int *)(((*(int *)(((int)stk + 120))) + 0x0))) << 1)));
    *(unsigned int *)(((int)stk + 32)) = (short)t3;
    if ((short)t3 == -1) {
        return (short)t3;
    }
    *(unsigned int *)(((int)stk + 104)) = (((((*(int *)(((int)stk + 32))) << 2) << 2) << 1) + ((((struct oC_int *)0xC94C69C)->v)));
    t7 = *(int *)(((*(int *)(((int)stk + 120))) + 0x30));
    if (t7 != 0) {
        if (t7 != 2) {
            *(float *)(((int)stk + 36)) = ((((struct o2C_float *)((*(int *)(((int)stk + 120)))))->v));
            *(unsigned int *)(((int)stk + 40)) = 0x0;
            if (!(1.0f > (*(float *)(((int)stk + 36)))) && (t11 = *(int *)(((int)stk + 104)), t12 = *(int *)((t11 + 0x14)), t12 == 0)) {
            } else {
                *(unsigned int *)(((int)stk + 40)) = 0x1;
            }
        } else {
            *(float *)(((int)stk + 36)) = ((((struct o2C_float *)((*(int *)(((int)stk + 120)))))->v));
            *(unsigned int *)(((int)stk + 40)) = 0x1;
        }
    } else {
        *(unsigned int *)(((int)stk + 40)) = 0x0;
    }
    *(float *)(((int)stk + 112)) = (((((((struct o18_float *)((*(int *)(((int)stk + 104)))))->v)) * ((((struct o10_float *)((*(int *)(((int)stk + 120)))))->v)))) * 0.5f);
    *(float *)(((int)stk + 108)) = (((((((struct o1C_float *)((*(int *)(((int)stk + 104)))))->v)) * ((((struct o14_float *)((*(int *)(((int)stk + 120)))))->v)))) * 0.5f);
    *(float *)(((int)stk + 116)) = (1.0f / ((((struct oC_float *)((*(int *)(((int)stk + 120)))))->v)));
    *(float *)(((int)stk + 68)) = (FUN_0c0da410((*(int *)(((*(int *)(((int)stk + 120))) + 0x28)))));
    t46 = FUN_0c0d9e90((*(int *)(((*(int *)(((int)stk + 120))) + 0x28))));
    *(float *)(((int)stk + 64)) = t46;
    FUN_0c0e0454((*(int *)(((int)stk + 120))), (((int)stk + 0) + 0x58), (((int)stk + 0) + 0x48), (*(float *)(((int)stk + 112))), (*(float *)(((int)stk + 108))), (*(float *)(((int)stk + 68))), t46);
    u52 = (((struct o0_float *)0xC20CE34)->v);
    u53 = (((struct o10_float *)0xC94C69C)->v);
    *(float *)(((int)stk + 8)) = (u53 * u52);
    *(float *)(((int)stk + 4)) = (((((struct o14_float *)0xC94C69C)->v)) * ((((struct o4_float *)0xC20CE34)->v)));
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t56 = 0xC20CE38;
    u57 = (u53 * u52);
    u58 = u52;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)0x4) {
            break;
        }
        t56 = (*(int *)(((int)stk + 0)));
        t56 = (t56 << 2);
        t56 = (t56 + (((int)stk + 0) + 0x58));
        u58 = (*(float *)(((int)stk + 8)));
        u57 = (*(float *)((t56 + 0x0)));
        u57 = (u57 * u58);
        *(float *)((t56 + 0x0)) = u57;
        t56 = (*(int *)(((int)stk + 0)));
        t56 = (t56 << 2);
        t56 = (t56 + (((int)stk + 0) + 0x48));
        u58 = (*(float *)(((int)stk + 4)));
        u57 = (*(float *)((t56 + 0x0)));
        u57 = (u57 * u58);
        *(float *)((t56 + 0x0)) = u57;
        t56 = (*(int *)(((int)stk + 0)));
        t56 = (t56 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t56;
    }
    t67 = *(int *)(((int)stk + 104));
    *(unsigned int *)((t67 + 0x0)) = ((*(int *)((t67 + 0x0))) & 0xF8FCFFFF);
    t69 = *(int *)(((int)stk + 104));
    *(unsigned int *)((t69 + 0x4)) = ((*(int *)((t69 + 0x4))) & 0x1FFFFFFF);
    t71 = *(int *)(((int)stk + 104));
    *(unsigned int *)((t71 + 0x8)) = ((*(int *)((t71 + 0x8))) & 0x3278FFF);
    if (((*(int *)(((*(int *)(((int)stk + 120))) + 0x34))) & 0x800) != 0) {
    } else {
        t75 = *(int *)(((int)stk + 104));
        *(unsigned int *)((t75 + 0x8)) = ((*(int *)((t75 + 0x8))) | 0x800000);
    }
    if (((*(int *)(((*(int *)(((int)stk + 120))) + 0x34))) & 0x1000) != 0) {
        t83 = *(int *)(((int)stk + 104));
        *(unsigned int *)((t83 + 0x8)) = ((*(int *)((t83 + 0x8))) | 0x2000);
    }
    if (((*(int *)(((*(int *)(((int)stk + 120))) + 0x34))) & 0x10000) != 0) {
        t91 = *(int *)(((int)stk + 104));
        *(unsigned int *)((t91 + 0x8)) = ((*(int *)((t91 + 0x8))) | 0x1000);
    }
    t98 = *(int *)(((*(int *)(((int)stk + 120))) + 0x34));
    *(unsigned int *)(((int)stk + 60)) = (((int)t98 >> 8) & 0x7);
    if ((((int)t98 >> 8) & 0x7) == 0) {
        *(unsigned int *)(((int)stk + 60)) = 0x4;
    }
    t101 = *(int *)(((int)stk + 104));
    *(unsigned int *)((t101 + 0x4)) = ((*(int *)((t101 + 0x4))) | ((*(int *)(((int)stk + 60))) << 29));
    if ((*(int *)(((int)stk + 40))) != 0) {
        t105 = *(int *)(((int)stk + 104));
        *(unsigned int *)((t105 + 0x0)) = ((*(int *)((t105 + 0x0))) | 0x2000000);
        t107 = *(int *)(((int)stk + 104));
        *(unsigned int *)((t107 + 0x8)) = ((*(int *)((t107 + 0x8))) | (((((*(int *)0xC20CC58) ^ 0xFC) << 16) << 8) | 0x100000));
    } else {
        t110 = *(int *)(((int)stk + 104));
        *(unsigned int *)((t110 + 0x8)) = ((*(int *)((t110 + 0x8))) | 0x20080000);
        *(float *)(((int)stk + 36)) = 1.0f;
    }
    if (((*(int *)(((*(int *)(((int)stk + 120))) + 0x34))) & 0x2000) != 0) {
        *(unsigned int *)((((*(int *)(((int)stk + 104))) + 0x10) + 0x0)) = (FUN_0c0e0550((*(float *)(((int)stk + 36))), ((((struct o0_float *)0xC20CE80)->v)), ((((struct o4_float *)0xC20CE80)->v)), ((((struct o8_float *)0xC20CE80)->v))));
    } else {
        *(unsigned int *)((((*(int *)(((int)stk + 104))) + 0x10) + 0x0)) = (FUN_0c0e0550((*(float *)(((int)stk + 36))), 1.0f, 1.0f, 1.0f));
    }
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((*(int *)(((int)stk + 120))) + 0x34))) & 0x30);
    *(float *)(((int)stk + 56)) = ((((struct o18_float *)((*(int *)(((int)stk + 120)))))->v));
    *(float *)(((int)stk + 52)) = ((((struct o20_float *)((*(int *)(((int)stk + 120)))))->v));
    if (((*(int *)(((int)stk + 8))) & 16) != 0) {
        *(float *)(((int)stk + 56)) = (1.0f - (*(float *)(((int)stk + 56))));
        *(float *)(((int)stk + 52)) = (1.0f - (*(float *)(((int)stk + 52))));
    }
    *(float *)(((int)stk + 48)) = ((((struct o1C_float *)((*(int *)(((int)stk + 120)))))->v));
    *(float *)(((int)stk + 44)) = ((((struct o24_float *)((*(int *)(((int)stk + 120)))))->v));
    if (((*(int *)(((int)stk + 8))) & 32) != 0) {
    } else {
        *(float *)(((int)stk + 48)) = (1.0f - (*(float *)(((int)stk + 48))));
        *(float *)(((int)stk + 44)) = (1.0f - (*(float *)(((int)stk + 44))));
    }
    t159 = *(int *)(((*(int *)(((int)stk + 120))) + 0x34));
    if ((t159 & 0xC000) != 0x8000) {
        if ((t159 & 0xC000) != 0xC000) {
        } else {
            t160 = *(int *)(((int)stk + 104));
            *(unsigned int *)((t160 + 0x0)) = ((*(int *)((t160 + 0x0))) | 0x30000);
        }
    } else {
        t166 = *(int *)(((int)stk + 104));
        *(unsigned int *)((t166 + 0x0)) = ((*(int *)((t166 + 0x0))) | 0x20000);
    }
    *(float *)(((int)stk + 12)) = (*(float *)(((int)stk + 56)));
    *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 12))) & 0xFFFF0000);
    *(float *)(((int)stk + 12)) = (*(float *)(((int)stk + 52)));
    *(unsigned int *)(((int)stk + 24)) = (0xFFFF0000 & (*(int *)(((int)stk + 12))));
    *(float *)(((int)stk + 12)) = (*(float *)(((int)stk + 48)));
    *(unsigned int *)(((int)stk + 20)) = ((unsigned int)(*(int *)(((int)stk + 12))) >> 16);
    *(float *)(((int)stk + 12)) = (*(float *)(((int)stk + 44)));
    *(unsigned int *)(((int)stk + 16)) = ((unsigned int)(*(int *)(((int)stk + 12))) >> 16);
    t181 = 0x0;
    if ((*(int *)(((int)stk + 40))) != 0) {
        t181 = 0x2;
    }
    *(unsigned int *)(((int)stk + 4)) = t181;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((t181 << 2) + (*(int *)0xC952968))));
    *(unsigned int *)(((int)stk + 0)) = 0xFF000038;
    t185 = *(int *)(((int)stk + 0));
    t186 = *(int *)(((int)stk + 8));
    *(unsigned int *)((t185 + 0x0)) = ((unsigned int)((unsigned int)t186 >> 16) >> 8);
    *(unsigned int *)(((t185 + 0x4) + 0x0)) = ((unsigned int)((unsigned int)t186 >> 16) >> 8);
    t187 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = ((t187 & 0x3FFFFFF) | 0xE0000000);
    *(unsigned int *)((((t187 & 0x3FFFFFF) | 0xE0000000) + 0x0)) = ((*(int *)(((*(int *)(((int)stk + 104))) + 0x0))) | ((((struct o0_int *)0xC9482A8)->v)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x4)) = (*(int *)(((*(int *)(((int)stk + 104))) + 0x4)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x8)) = ((*(int *)(((*(int *)(((int)stk + 104))) + 0x8))) | ((((struct o4_int *)0xC9482A8)->v)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0xC)) = (*(int *)(((*(int *)(((int)stk + 104))) + 0xC)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x10)) = (*(int *)(((*(int *)(((int)stk + 104))) + 0x10)));
    _builtin_prefetch((void *)(*(int *)(((int)stk + 8))));
    t205 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (t205 + 0x20);
    *(unsigned int *)(((t205 + 0x20) + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x4)) = (*(int *)(((int)stk + 88)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x8)) = (*(int *)(((int)stk + 72)));
    (((struct oC_float *)((*(int *)(((int)stk + 8)))))->v) = (*(float *)(((int)stk + 116)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x10)) = (*(int *)(((int)stk + 92)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x14)) = (*(int *)(((int)stk + 76)));
    (((struct o18_float *)((*(int *)(((int)stk + 8)))))->v) = (*(float *)(((int)stk + 116)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x1C)) = (*(int *)(((int)stk + 96)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x20)) = (*(int *)(((int)stk + 80)));
    (((struct o24_float *)((*(int *)(((int)stk + 8)))))->v) = (*(float *)(((int)stk + 116)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x28)) = (*(int *)(((int)stk + 100)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x2C)) = (*(int *)(((int)stk + 84)));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x30)) = ((*(int *)(((int)stk + 32))) | 0x53500000);
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x34)) = ((*(int *)(((int)stk + 28))) | (*(int *)(((int)stk + 20))));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x38)) = ((*(int *)(((int)stk + 24))) | (*(int *)(((int)stk + 20))));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x3C)) = ((*(int *)(((int)stk + 24))) | (*(int *)(((int)stk + 16))));
    _builtin_prefetch((void *)(*(int *)(((int)stk + 8))));
    t240 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (t240 + 0x20);
    _builtin_prefetch((void *)(t240 + 0x20));
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x20);
    t243 = *(int *)0xC952968;
    *(unsigned int *)(((((*(int *)(((int)stk + 4))) << 2) + t243) + 0x0)) = (((*(int *)((((*(int *)(((int)stk + 4))) << 2) + t243))) & 0xFC000000) | ((*(int *)(((int)stk + 8))) & 0x3FFFFFF));
    return t243;
}



