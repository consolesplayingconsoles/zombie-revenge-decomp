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
struct o26C_float { char p[0x26C]; float v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o4EC_int { char p[0x4EC]; int v; };
struct o4EC_uint { char p[0x4EC]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o60_short { char p[0x60]; short v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o62_short { char p[0x62]; short v; };
struct o62_ushort { char p[0x62]; unsigned short v; };
struct o64_short { char p[0x64]; short v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o78_int { char p[0x78]; int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o70_int { char p[0x70]; int v; };



int FUN_0c07903a(int a4, int a5, int a6, int a7)
{
    int t1;
    int t3;

    FUN_0c0685a4(a4, a5, a6, a7);
    t1 = (((struct o98_int *)(a4))->v);
    (((struct o98_uint *)(a4))->v) = (t1 - 1);
    if ((int)(t1 - 1) < 0) {
        return FUN_0c0e19f2();
    }
    t3 = (((struct o98_int *)(a4))->v);
    if ((t3 & 1) != 0) {
        nlAddVector((a4 + 0x30), (a4 + 0x48));
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.049999997f);
        (((struct o60_ushort *)(a4))->v) = (((((struct o60_short *)(a4))->v)) + ((((struct o68_int *)(a4))->v)));
        (((struct o62_ushort *)(a4))->v) = (((((struct o62_short *)(a4))->v)) + ((((struct o6C_int *)(a4))->v)));
        (((struct o64_ushort *)(a4))->v) = (((((struct o64_short *)(a4))->v)) + ((((struct o70_int *)(a4))->v)));
        nlPushMatrix(0x0);
        FUN_0c0dcca0((a4 + 0x30));
        nlRotateAZ(((((struct o64_short *)(a4))->v)));
        nlRotateAY(((((struct o62_short *)(a4))->v)));
        nlRotateAX(((((struct o60_short *)(a4))->v)));
        FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
        return nlPopMatrix(0x1);
    }
    return t3;
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

int FUN_0c04073a(int a4, float f4)
{
    int stk[7];
    register int t0;
    register int t6;
    register float t16;
    register int t22;
    register float t39;
    register int t45;
    register int t51;

    *(float *)(((int)stk + 0)) = f4;
    t0 = (((struct o4EC_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t51 = t0;
                if (t0 != 3) {
                } else {
                    t51 = (FUN_0c041f2a(a4));
                }
            } else {
                t6 = FUN_0c040266(a4);
                t51 = t6;
                if (t6 != 0) {
                    (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
                    t51 = 0x4EC;
                }
            }
        } else {
            t16 = FUN_0c0401e0(a4);
            if (((((struct o34_float *)(a4))->v)) > t16) {
                (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
            }
            t22 = (((struct o2EC_int *)(a4))->v);
            t51 = t22;
            if ((t22 & 12) != 0) {
                t51 = (FUN_0c041dd0(a4));
            }
        }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)((a4 + 0x30)); }
        *(float *)(((int)stk + 4)) = 0.0f;
        (((struct o26C_float *)(a4))->v) = _builtin_sqrtf(((((FUN_0c01f1b8((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x10))) + (*(float *)(((int)stk + 0)))) - ((((struct o34_float *)(a4))->v))) * (*(float *)0xC040888)));
        (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
        t39 = FUN_0c0401e0(a4);
        if (((((struct o34_float *)(a4))->v)) > t39) {
            (((struct o4EC_uint *)(a4))->v) = (((((struct o4EC_int *)(a4))->v)) + 0x1);
        }
        t45 = (((struct o2EC_int *)(a4))->v);
        t51 = t45;
        if ((t45 & 12) != 0) {
            t51 = (FUN_0c041dd0(a4));
        }
    }
    return t51;
}

