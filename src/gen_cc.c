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

    if (((*(int *)((a4 + 0x20C))) & 64) != 0) {
        *(unsigned int *)((a4 + 0x560)) = 0x0;
        return 0x560;
    }
    FUN_0c03bd28(a4, 0x0, 0x3, 0x5, 0x0);
    if (((int)(*(int *)((a4 + 0x304))) > 0) && ((t3 = *(int *)((a4 + 0x57C)), t3 != 4) && (t4 = *(int *)((a4 + 0x560)), t4 == 0))) {
    } else {
        t7 = *(int *)((a4 + 0x4F8));
        if ((t7 == 12) || (t7 == 13)) {
            *(unsigned int *)0xC247D04 = 0xA;
        }
        t8 = *(int *)((a4 + 0x4F8));
        if (((t8 != 4) && (t8 != 5)) || (t9 = *(int *)((a4 + 0x544)), t9 != 3)) {
        } else {
            *(unsigned int *)0xC247D04 = 0xA;
        }
        t14 = 0xA;
        t15 = t8;
    }
    if ((int)(*(int *)((a4 + 0x304))) > 0) {
        t18 = *(int *)((a4 + 0x57C));
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

    t0 = *(int *)((a4 + 0x60));
    if (((int)t0 < (int)0x5A) && ((0x1 & t0) != 0)) {
    } else {
        nlPushMatrix(0x0);
        FUN_0c0dcca0((a4 + 0x30));
        nlRotateAY((*(short *)((a4 + 0x56))));
        nlRotateAX((*(short *)((a4 + 0x54))));
        nlRotateAZ((*(short *)((a4 + 0x58))));
        FUN_0c0c475c((*(short *)((a4 + 0x5A))), (*(float *)((a4 + 0x5C))));
        nlPopMatrix(0x1);
    }
    nlAddVector((a4 + 0x48), (a4 + 0x3C));
    FUN_0c0dce80((a4 + 0x48), (a4 + 0x48), 0.979999959f);
    nlAddVector((a4 + 0x30), (a4 + 0x48));
    if (!((*(float *)((a4 + 0x34))) > 0.0f) && (u21 = *(float *)((a4 + 0x4C)), 0.0f > u21)) {
        *(float *)((a4 + 0x34)) = 0.0f;
        u23 = (*(float *)((a4 + 0x4C)));
        u23 *= -0.979999959f;
        *(float *)((a4 + 0x4C)) = u23;
    }
    t28 = *(int *)((a4 + 0x60));
    *(unsigned int *)((a4 + 0x60)) = (t28 - 1);
    if ((int)(t28 - 1) < (int)0x1E) {
        *(float *)((a4 + 0x5C)) = ((*(float *)((a4 + 0x5C))) - 0.0333333313f);
        if ((*(int *)((a4 + 0x60))) == 0) {
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

    if (((*(int *)((a4 + 0x20C))) & 64) != 0) {
        *(unsigned int *)((a4 + 0x560)) = 0x0;
        return 0x560;
    }
    FUN_0c03bd28(a4, 0x0, 0x3, 0x5, 0x0);
    if (((int)(*(int *)((a4 + 0x304))) > 0) && ((t3 = *(int *)((a4 + 0x57C)), t3 != 4) && (t4 = *(int *)((a4 + 0x560)), t4 == 0))) {
    } else {
        t7 = *(int *)((a4 + 0x4F8));
        if ((t7 == 12) || (t7 == 13)) {
            *(unsigned int *)0xC247D04 = 0xA;
        }
        t8 = *(int *)((a4 + 0x4F8));
        if (((t8 != 4) && (t8 != 5)) || (t9 = *(int *)((a4 + 0x544)), t9 != 3)) {
        } else {
            *(unsigned int *)0xC247D04 = 0xA;
        }
        t14 = 0xA;
        t15 = t8;
    }
    if ((int)(*(int *)((a4 + 0x304))) > 0) {
        t18 = *(int *)((a4 + 0x57C));
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



