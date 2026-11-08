/* Straight-line functions with calls and guards (batch gen_cc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c02a416(int);
int FUN_0c03442c(int, int, int, int);
int FUN_0c034b1c(int, int);
int FUN_0c03bd28(int, int, int, int, int);
int FUN_0c0909fc(int);
int FUN_0c090f70(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cc3f8(int, int, int);
int FUN_0c0da2e0(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0dcca0(int);
int nlAddVector(int, int);
float nlLength(int, int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int _quick_odd_mvn(void);
int FUN_0c0e6248(void);
int FUN_0c03374c(int a4);
int FUN_0c0ccd5a(int a4, int a5, int a6);
void FUN_0c08b580(int a4, int a5, int a6, float f4, float f5);
int FUN_0c03ce1e(int a4);
int FUN_0c077da4(int a4);
int FUN_0c03ceec(int a4);
int FUN_0c063994(int a4, int a5);
struct o20C_int { char p[0x20C]; int v; };
struct o304_int { char p[0x304]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o54_short { char p[0x54]; short v; };
struct o544_int { char p[0x544]; int v; };
struct o56_short { char p[0x56]; short v; };
struct o560_int { char p[0x560]; int v; };
struct o560_uint { char p[0x560]; unsigned int v; };
struct o57C_int { char p[0x57C]; int v; };
struct o58_short { char p[0x58]; short v; };
struct o5A_short { char p[0x5A]; short v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };





int FUN_0c03ce1e(int a4)
{
    int t7;
    int t8;
    int t18;
    int t3;
    int t4;
    int t14;
    int t15;
    int t9;

    if ((((((struct o20C_int *)(a4))->v)) & 64) != 0) {
        (((struct o560_uint *)(a4))->v) = 0x0;
        return 0x560;
    }
    FUN_0c03bd28(a4, 0x0, 0x3, 0x5, 0x0);
    if (((int)((((struct o304_int *)(a4))->v)) > 0) && ((t3 = (((struct o57C_int *)(a4))->v), t3 != 4) && (t4 = (((struct o560_int *)(a4))->v), t4 == 0))) {
    } else {
        t7 = (((struct o4F8_int *)(a4))->v);
        if ((t7 == 12) || (t7 == 13)) {
            *(unsigned int *)0xC247D04 = 0xA;
        }
        t8 = (((struct o4F8_int *)(a4))->v);
        if (((t8 != 4) && (t8 != 5)) || (t9 = (((struct o544_int *)(a4))->v), t9 != 3)) {
        } else {
            *(unsigned int *)0xC247D04 = 0xA;
        }
        t14 = 0xA;
        t15 = t8;
    }
    if ((int)((((struct o304_int *)(a4))->v)) > 0) {
        t18 = (((struct o57C_int *)(a4))->v);
        if ((t18 != 0) && (t18 != 1)) {
            if ((t18 != 2) && (t18 != 3)) {
                
                return t18;
            }
            return FUN_0c0cc3f8(0xDB, t14, t15);
        }
        return FUN_0c0cc3f8(0xD9, t14, t15);
    }
    return 0x304;
}

int FUN_0c077da4(int a4)
{
    int t0;
    float u23;
    int t28;
    float u21;

    t0 = (((struct o60_int *)(a4))->v);
    if (((int)t0 < (int)0x5A) && ((0x1 & t0) != 0)) {
    } else {
        nlPushMatrix(0x0);
        FUN_0c0dcca0((a4 + 0x30));
        nlRotateAY(((((struct o56_short *)(a4))->v)));
        nlRotateAX(((((struct o54_short *)(a4))->v)));
        nlRotateAZ(((((struct o58_short *)(a4))->v)));
        FUN_0c0c475c(((((struct o5A_short *)(a4))->v)), ((((struct o5C_float *)(a4))->v)));
        nlPopMatrix(0x1);
    }
    nlAddVector((a4 + 0x48), (a4 + 0x3C));
    FUN_0c0dce80((a4 + 0x48), (a4 + 0x48), 0.979999959f);
    nlAddVector((a4 + 0x30), (a4 + 0x48));
    if (!(((((struct o34_float *)(a4))->v)) > 0.0f) && (u21 = (((struct o4C_float *)(a4))->v), 0.0f > u21)) {
        (((struct o34_float *)(a4))->v) = 0.0f;
        u23 = ((((struct o4C_float *)(a4))->v));
        u23 *= -0.979999959f;
        (((struct o4C_float *)(a4))->v) = u23;
    }
    t28 = (((struct o60_int *)(a4))->v);
    (((struct o60_uint *)(a4))->v) = (t28 - 1);
    if ((int)(t28 - 1) < (int)0x1E) {
        (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) - 0.0333333313f);
        if (((((struct o60_int *)(a4))->v)) == 0) {
            return FUN_0c0e19f2();
        }
        return 0x60;
    }
    return 0x60;
}

int FUN_0c03ceec(int a4)
{
    int t7;
    int t8;
    int t18;
    int t3;
    int t4;
    int t14;
    int t15;
    int t9;

    if ((((((struct o20C_int *)(a4))->v)) & 64) != 0) {
        (((struct o560_uint *)(a4))->v) = 0x0;
        return 0x560;
    }
    FUN_0c03bd28(a4, 0x0, 0x3, 0x5, 0x0);
    if (((int)((((struct o304_int *)(a4))->v)) > 0) && ((t3 = (((struct o57C_int *)(a4))->v), t3 != 4) && (t4 = (((struct o560_int *)(a4))->v), t4 == 0))) {
    } else {
        t7 = (((struct o4F8_int *)(a4))->v);
        if ((t7 == 12) || (t7 == 13)) {
            *(unsigned int *)0xC247D04 = 0xA;
        }
        t8 = (((struct o4F8_int *)(a4))->v);
        if (((t8 != 4) && (t8 != 5)) || (t9 = (((struct o544_int *)(a4))->v), t9 != 3)) {
        } else {
            *(unsigned int *)0xC247D04 = 0xA;
        }
        t14 = 0xA;
        t15 = t8;
    }
    if ((int)((((struct o304_int *)(a4))->v)) > 0) {
        t18 = (((struct o57C_int *)(a4))->v);
        if ((t18 != 0) && (t18 != 1)) {
            if ((t18 != 2) && (t18 != 3)) {
                
                return t18;
            }
            return FUN_0c0cc3f8(0xDF, t14, t15);
        }
        return FUN_0c0cc3f8(0xDD, t14, t15);
    }
    return 0x304;
}



