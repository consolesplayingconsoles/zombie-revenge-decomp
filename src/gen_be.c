/* Straight-line functions with calls and guards (batch gen_be): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02a416(int);
int FUN_0c032394(int);
int FUN_0c036994(int, int, int, int, int, int, int, float);
int FUN_0c036efc(int, int, int, int);
int FUN_0c084800(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0cc3f8(int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
int nlAddVector(int, int);
int FUN_0c0dce80(int, int, float);
int nlSubVector3op(int, int, int);
int FUN_0c0dfd50(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e5f1c(int);
int _quick_odd_mvn(void);
int FUN_0c0a3cdc(int a4, int a5, int a6, int a7);
int FUN_0c036a4c(int a4, int a5, int a6, int a7);
int FUN_0c063df0(int a4, int a5, int a6);
int FUN_0c03261c(int a4, float f4, float f5);
int FUN_0c064640(int a4, int a5);
int FUN_0c0b2126(int);
void FUN_0c058e7c(int, int);
struct o3C_float { char p[0x3C]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o45C_float { char p[0x45C]; float v; };
struct o460_float { char p[0x460]; float v; };
struct o464_float { char p[0x464]; float v; };


int FUN_0c0a3cdc(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t7;
    int t22;
    int t23;
    float u25;
    float u43;
    float u31;
    int stk[10];

    t0 = (((struct o44_int *)(a4))->v);
    t1 = *(int *)((a4 + 0x30));
    (((struct o44_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        (((struct o45C_float *)(t1))->v) = 1.0f;
        (((struct o460_float *)(t1))->v) = 1.0f;
        (((struct o464_float *)(t1))->v) = 1.0f;
        FUN_0c0e19f2();
    }
    t7 = *(int *)((a4 + 0x34));
    if (t7 != 0) {
        if (t7 != 1) {
            if (t7 != 2) {
            } else {
                if (((*(int *)0xC23A258) & 1) != 0) {
                    (((struct o3C_float *)(a4))->v) = 0.0f;
                } else {
                    (((struct o3C_float *)(a4))->v) = 1.0f;
                }
            }
        } else {
            if ((int)((((struct o44_int *)(a4))->v)) < (int)0x3C) {
                u31 = (((((struct o3C_float *)(a4))->v)) * 0.969999969f);
            } else {
                t22 = FUN_0c0da2e0();
                t23 = *(int *)(((0x40 + a4) + 0x0));
                *(unsigned int *)(((0x40 + a4) + 0x0)) = (t23 + ((t22 + 0x1234) & 0xFFF));
                u25 = 0.699999988f;
                u25 = u25 + 0.299999982f * (FUN_0c0d9e90((t23 + ((t22 + 0x1234) & 0xFFF))));
                u31 = (u25 * 0.799999952f);
            }
            (((struct o3C_float *)(a4))->v) = u31;
        }
    } else {
        u43 = (((struct o3C_float *)(a4))->v);
        (((struct o3C_float *)(a4))->v) = (u43 + 0.0399999954f);
        if (!(0.799999952f > (u43 + 0.0399999954f))) {
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
        }
    }
    FUN_0c0dce80(((int)stk + 4), (*(int *)((a4 + 0x38))), ((((struct o3C_float *)(a4))->v)));
    return (nlSubVector3op((0x45C + t1), 0xC10D078, ((int)stk + 4)));
}



int FUN_0c03261c(int a4, float f4, float f5)
{
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int stk[19];

    *(float *)(((int)stk + 12)) = f4;
    *(float *)(((int)stk + 8)) = f5;
    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c0cc3f8((*(int *)((((*(int *)((a4 + 0x1F8))) << 2) + 0xC1FFB70))));
        return 0x0;
    }
    t4 = FUN_0c032394(a4);
    if ((int)t4 >= 0) {
        t5 = FUN_0c02a416(a4);
        if ((t5 == 0) && ((t6 = *(int *)((a4 + 0x49C)), t6 != 3) && (t7 = *(int *)((a4 + 0x510)), t8 = *(int *)((0xC247030 + (t7 << 2))), t8 == 4))) {
            *(volatile int *)((a4 + 0x510));
            _quick_odd_mvn();
            *(float *)(((int)stk + 60)) = (*(float *)(((int)stk + 12)));
            *(float *)(((int)stk + 64)) = (1.0f + 1.0f);
            _quick_odd_mvn();
            *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 8)));
            *(float *)(((int)stk + 44)) = 1.0f;
            FUN_0c036efc((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), ((int)stk + 4));
            nlAddVector((0x4B0 + a4), (((int)stk + 4) + 0xC));
            *(float *)((a4 + 0x550)) = (*(float *)(((int)stk + 4)));
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}





