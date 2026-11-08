/* Straight-line functions with calls and guards (batch gen_adt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c061a8a(int, int, float);
int FUN_0c061ccc(void);
int FUN_0c062180(int, int);
int FUN_0c0caf6a(int, int, int, float);
int FUN_0c0db840(int);
int FUN_0c0dcc70(float, float, float);
extern float _builtin_sqrtf(float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c062934(int a4, float f4, float f5);
struct o244_int { char p[0x244]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o70_short { char p[0x70]; short v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };


int FUN_0c062934(int a4, float f4, float f5)
{
    int stk[10];
    register int t1;
    register int t41;
    register float u28;
    register float u29;
    register float u30;
    register float u31;
    register float u32;
    register float u34;
    register float u40;
    float s1;

    nlPushMatrix(0x0);
    t1 = (((struct o244_int *)(a4))->v);
    t41 = 0;
    if (t1 != 0) {
        if (t1 != 1) {
        } else {
            FUN_0c062180((a4 + 0x30), (a4 + 0x6C));
        }
        u40 = f5;
        t41 = ((t1 == 1));
    } else {
        nlUnitMatrix();
        FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
        nlRotateAZ(((((struct o70_short *)(a4))->v)));
        nlRotateAY(((((struct o6E_short *)(a4))->v)));
        nlRotateAX(((((struct o6C_short *)(a4))->v)));
        nlPushMatrix(0x0);
        FUN_0c0caf6a(((int)stk + 4), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8), ((((struct o3C_float *)((*(int *)0xC247B94)))->v)));
        FUN_0c0db840((((int)stk + 4) + 0x18));
        (((struct oC_float *)(((int)stk + 4)))->v) = ((*(float *)(((int)stk + 28))) - (*(float *)(((int)stk + 4))));
        (((struct o4_float *)((((int)stk + 4) + 0xC)))->v) = ((*(float *)(((int)stk + 32))) - ((((struct o3C_float *)((*(int *)0xC247B94)))->v)));
        (((struct o8_float *)((((int)stk + 4) + 0xC)))->v) = ((*(float *)(((int)stk + 36))) - (*(float *)(((int)stk + 8))));
        u28 = (((struct o4_float *)((((int)stk + 4) + 0xC)))->v);
        u29 = (((struct oC_float *)(((int)stk + 4)))->v);
        u30 = (((struct o8_float *)((((int)stk + 4) + 0xC)))->v);
        u31 = (u28 * u28);
        u31 = u31 + u29 * u29;
        u32 = u31;
        u32 = u32 + u30 * u30;
        s1 = _builtin_sqrtf(u32);
        nlScale((f5 / 1.0f), (f5 / 1.0f), s1);
        u34 = (f5 / 1.0f);
        if (s1 > (f5 / 1.0f)) {
            u34 = s1;
        }
        FUN_0c061a8a((0x254 + a4), (0x258 + a4), u34);
        nlPopMatrix(0x1);
        FUN_0c061ccc();
        u40 = s1;
        t41 = ((s1 > (f5 / 1.0f)));
    }
    return (nlPopMatrix(0x1));
}
