/* Straight-line functions with calls and guards (batch gen_sq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f1b8(int, int);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0d9dc0(float, float);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c0bd164(int a4, int a5, int a6, int a7, int a8);
struct o20C_int { char p[0x20C]; int v; };
struct o274_float { char p[0x274]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o27C_float { char p[0x27C]; float v; };
struct o280_float { char p[0x280]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o8_float { char p[0x8]; float v; };


int FUN_0c0bd164(int a4, int a5, int a6, int a7, int a8)
{
    int stk[31];
    register float u14;
    register float t33;
    register float t34;
    register int t61;
    register int t59;
    register int t40;
    float s1;

    if ((((((struct o20C_int *)(a4))->v)) & 0xD800) == 0) {
        FUN_0c0dcc70((*(float *)((a5 + 0x0))), ((((struct o4_float *)(a5))->v)), (-((((struct o8_float *)(a5))->v))));
        FUN_0c0de000(((((struct o280_float *)(a4))->v)));
        nlRotateAZ((*(short *)((a6 + 0x0))));
        nlRotateAY((*(short *)(((a6 + 0x2) + 0x0))));
        t61 = (nlRotateAX((*(short *)((((a6 + 0x2) + 0x2) + 0x0)))));
    } else {
        u14 = 4.45649958f;
        if (a8 != 0) {
            u14 = -10.0912991f;
        }
        nlPushMatrix(0x0);
        FUN_0c0dcc70((*(float *)((a5 + 0x0))), ((((struct o4_float *)(a5))->v)), (-((((struct o8_float *)(a5))->v))));
        FUN_0c0db840((((int)stk + 4) + 0x6C));
        nlRotateAZ((*(short *)((a6 + 0x0))));
        nlRotateAY((*(short *)((a6 + 0x2))));
        nlRotateAX((*(short *)((a6 + 0x4))));
        nlGetMatrix((((int)stk + 4) + 0x8));
        *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x48) + 0x8);
        *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x48) + 0x4);
        FUN_0c0a79fa((((int)stk + 4) + 0x48), ((((int)stk + 4) + 0x48) + 0x4), ((((int)stk + 4) + 0x48) + 0x8));
        FUN_0c0dcc70(0.0f, u14, 0.0f);
        FUN_0c0db840((((int)stk + 4) + 0x60));
        nlPopMatrix(0x1);
        t33 = FUN_0c01f1b8((((int)stk + 4) + 0x6C), (((int)stk + 4) + 0x54));
        t34 = FUN_0c01f1b8((((int)stk + 4) + 0x60), (((int)stk + 4) + 0x54));
        s1 = _builtin_fabsf(u14);
        if ((s1 + 1.0f) > _builtin_fabsf((t33 - (t34 + 0.5f)))) {
            if (((int)((((struct o48_int *)(((int)stk + 4)))->v)) <= 0) && (a8 == 0)) {
                t40 = (short)(FUN_0c0d9dc0((t33 - (t34 + 0.5f)), s1));
            } else {
                t40 = (-(short)(FUN_0c0d9dc0((t33 - (t34 + 0.5f)), s1)));
            }
            nlUnitMatrix();
            FUN_0c0dcc70((*(float *)(((int)stk + 112))), (*(float *)(((int)stk + 116))), (*(float *)(((int)stk + 120))));
            nlRotateAY((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))));
            nlRotateAX((((((struct o48_int *)(((int)stk + 4)))->v)) + t40));
            nlRotateAZ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
            t59 = (nlScale(((((struct o274_float *)(a4))->v)), ((((struct o278_float *)(a4))->v)), ((((struct o27C_float *)(a4))->v))));
        } else {
            t59 = (FUN_0c0dbda0((((int)stk + 4) + 0x8)));
        }
        t61 = t59;
        s1;
    }
    return t61;
}
