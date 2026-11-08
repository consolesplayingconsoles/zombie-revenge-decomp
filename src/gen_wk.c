/* Straight-line functions with calls and guards (batch gen_wk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02a416(int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0db470(int, int);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c03242c(int a4, float f4, float f5);
struct o4_float { char p[0x4]; float v; };
struct o49C_int { char p[0x49C]; int v; };
struct o510_int { char p[0x510]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o40_float { char p[0x40]; float v; };



int FUN_0c03242c(int a4, float f4, float f5)
{
    int stk[20];
    register int t42;
    register int t2;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u19;
    register float u22;
    register int t40;
    register int t37;
    register int t39;
    int t38;
    float s1;

    *(float *)(((int)stk + 12)) = f4;
    *(float *)(((int)stk + 16)) = f5;
    t42 = 0x0;
    if ((*(int *)((0xC247030 + (((((struct o510_int *)(a4))->v)) << 2)))) == 4) {
        t2 = (((struct o510_int *)(a4))->v);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x40)) = *(struct mv3 *)(((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F274)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x34)) = *(struct mv3 *)((a4 + 0x30)); }
        FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (((((struct o40_float *)(((int)stk + 4)))->v)) - ((((struct o34_float *)(((int)stk + 4)))->v))), (((((struct o4_float *)((((int)stk + 4) + 0x40)))->v)) - ((((struct o4_float *)((((int)stk + 4) + 0x34)))->v))), (((((struct o8_float *)((((int)stk + 4) + 0x40)))->v)) - ((((struct o8_float *)((((int)stk + 4) + 0x34)))->v))));
        u11 = (((struct o40_float *)(((int)stk + 4)))->v);
        u12 = (((struct o4_float *)((((int)stk + 4) + 0x40)))->v);
        u13 = (((struct o4_float *)((((int)stk + 4) + 0x34)))->v);
        u14 = (((struct o34_float *)(((int)stk + 4)))->v);
        u15 = (((struct o8_float *)((((int)stk + 4) + 0x40)))->v);
        u16 = (((struct o8_float *)((((int)stk + 4) + 0x34)))->v);
        u19 = ((u13 - u12) * (u13 - u12));
        u19 = u19 + ((u14 - u11)) * ((u14 - u11));
        u22 = u19;
        u22 = u22 + ((u16 - u15)) * ((u16 - u15));
        nlPushMatrix(0x0);
        nlUnitMatrix();
        nlRotateAY((*(int *)(((int)stk + 8))));
        nlRotateAX((*(int *)(((int)stk + 4))));
        *(float *)(((int)stk + 32)) = 0.0f;
        *(float *)(((int)stk + 36)) = 0.0f;
        *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 12)));
        FUN_0c0db470((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10));
        (((struct o28_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 20)));
        (((struct o2C_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 24)));
        (((struct o30_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 28)));
        nlPopMatrix(0x1);
        nlAddVector((0x4B0 + a4), (((int)stk + 4) + 0x28));
        t40 = 0x0;
        s1 = _builtin_sqrtf(u22);
        if (s1 > (*(float *)(((int)stk + 16)))) {
            t37 = FUN_0c02a416(a4);
            t39 = 0x0;
            if ((t37 == 0) && (t38 = (((struct o49C_int *)(a4))->v), t38 != 3)) {
                t39 = 0x1;
            }
            t40 = t39;
        }
        t42 = t40;
        s1;
    }
    return t42;
}
