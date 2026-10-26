/* Straight-line functions with calls and guards (batch gen_bh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f1b8(int, int);
float FUN_0c0401e0(int);
int FUN_0c040266(int);
int FUN_0c041dd0(int);
int FUN_0c041f2a(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int);
int FUN_0c0cc720(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0dcca0(int);
int nlAddVector(int, int);
int FUN_0c0e19f2(void);
int _quick_odd_mvn(int, float);
extern float _builtin_sqrtf(float);
int FUN_0c07903a(int a4, int a5, int a6, int a7);
int FUN_0c04073a(int a4, float f4);
int FUN_0c0cc752(int a4);

int FUN_0c07903a(int a4, int a5, int a6, int a7)
{
    int t1;
    int t3;

    FUN_0c0685a4(a4, a5, a6, a7);
    t1 = *(int *)((a4 + 0x98));
    *(unsigned int *)((a4 + 0x98)) = (t1 - 1);
    if ((int)(t1 - 1) < 0) {
        return FUN_0c0e19f2();
    }
    t3 = *(int *)((a4 + 0x98));
    if ((t3 & 1) != 0) {
        nlAddVector((a4 + 0x30), (a4 + 0x48));
        *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) - 0.049999997f);
        *(unsigned short *)((a4 + 0x60)) = ((*(short *)((a4 + 0x60))) + (*(int *)(((a4 + 0x68) + 0x0))));
        *(unsigned short *)((a4 + 0x62)) = ((*(short *)((a4 + 0x62))) + (*(int *)(((0x6C + a4) + 0x0))));
        *(unsigned short *)((a4 + 0x64)) = ((*(short *)((a4 + 0x64))) + (*(int *)(((0x70 + a4) + 0x0))));
        nlPushMatrix(0x0);
        FUN_0c0dcca0((a4 + 0x30));
        nlRotateAZ((*(short *)((a4 + 0x64))));
        nlRotateAY((*(short *)((a4 + 0x62))));
        nlRotateAX((*(short *)((a4 + 0x60))));
        FUN_0c0c465c((*(int *)((a4 + 0x78))));
        return nlPopMatrix(0x1);
    }
    return t3;
}

int FUN_0c04073a(int a4, float f4)
{
    int t0;
    int t2;
    int t6;
    int t8;
    float t16;
    int t22;
    int t24;
    float t40;
    int t46;
    int t48;
    int t52;
    int t28;
    int t11;
    int stk[10];

    *(float *)(((int)stk + 4)) = f4;
    t0 = *(int *)((a4 + 0x4EC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t2 = t0;
                if (t0 != 3) {
                } else {
                    t2 = (FUN_0c041f2a(a4));
                }
                t11 = t2;
            } else {
                t6 = FUN_0c040266(a4);
                t8 = t6;
                if (t6 != 0) {
                    *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                    t8 = 0x4EC;
                }
                t11 = t8;
            }
            t28 = t11;
        } else {
            t16 = FUN_0c0401e0(a4);
            if ((*(float *)((a4 + 0x34))) > t16) {
                *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
            }
            t22 = *(int *)((a4 + 0x2EC));
            t24 = t22;
            if ((t22 & 12) != 0) {
                t24 = (FUN_0c041dd0(a4));
            }
            t28 = t24;
        }
        t52 = t28;
    } else {
        _quick_odd_mvn(a4, f4);
        *(float *)(((int)stk + 8)) = 0.0f;
        *(float *)((a4 + 0x26C)) = _builtin_sqrtf(((((FUN_0c01f1b8((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10))) + (*(float *)(((int)stk + 4)))) - (*(float *)((a4 + 0x34)))) * (*(float *)0xC040888)));
        *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
        t40 = FUN_0c0401e0(a4);
        if ((*(float *)((a4 + 0x34))) > t40) {
            *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
        }
        t46 = *(int *)((a4 + 0x2EC));
        t48 = t46;
        if ((t46 & 12) != 0) {
            t48 = (FUN_0c041dd0(a4));
        }
        t52 = t48;
    }
    return t52;
}

int FUN_0c0cc752(int a4)
{
    int t1;
    int t3;

    t1 = 0xC20AB70;
    if ((*(int *)0xC23A180) == 2) {
        t1 = 0xC20A818;
    }
    t3 = *(int *)(((t1 + ((a4 << 2) << 1)) + 0x0));
    if (t3 == 1) {
        FUN_0c0cc720();
        return FUN_0c0cc3f8((*(int *)(((t1 + ((a4 << 2) << 1)) + 0x4))));
    }
    return t3;
}
