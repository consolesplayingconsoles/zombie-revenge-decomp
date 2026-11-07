/* Straight-line functions with calls and guards (batch gen_zn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c465c(int);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int FUN_0c089494(int a4);
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o4A_short { char p[0x4A]; short v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o6E_short { char p[0x6E]; short v; };
struct o8_float { char p[0x8]; float v; };


int FUN_0c089494(int a4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    float R1004;
    R1004 = *(float *)((int)stk + 4);
    v0_1 = a4;
    *(float *)(((int)stk + 8)) = F15;
    v0_2 = ((((struct o44_int *)(v0_1))->v)) != 0;
    R1004 = F15;
    v0_0 = (v0_1);
    if (v0_2) goto L_C0894E6;
    v0_1 = (((struct o58_int *)(v0_0))->v);
    (((struct o58_uint *)(v0_0))->v) = (v0_1 - 1);
    R1004 = R1004;
    v0_2 = (0x58);
    if (((int)(v0_1 - 1) > 0)) goto L_C08954C;
    v0_1 = *(int *)((v0_0 + 0x30));
    (((struct o44_uint *)(v0_0))->v) = 0x1;
    (((struct o34_float *)(v0_0))->v) = (*(float *)(((v0_1 + 0x22C) + 0x0)));
    (((struct o38_float *)(v0_0))->v) = (((((struct o34_float *)((*(int *)((v0_0 + 0x30)))))->v)) + 1.0f);
    (((struct o3C_float *)(v0_0))->v) = ((((struct o8_float *)((v0_1 + 0x22C)))->v));
    *(unsigned short *)(((0x4A + v0_0) + 0x0)) = (((((struct o6E_short *)((*(int *)((v0_0 + 0x30)))))->v)) + 0x7FFF);
    R1004 = R1004;
    v0_1 = ((v0_1 + 0x22C));
    L_C0894E6:;
    nlPushMatrix(0x0);
    FUN_0c0dcca0((v0_0 + 0x34));
    nlRotateAY(((((struct o4A_short *)(v0_0))->v)));
    w0_0 = (((struct o40_float *)(v0_0))->v);
    nlScale(w0_0, w0_0, w0_0);
    FUN_0c0de000(((((struct o40_float *)(v0_0))->v)));
    FUN_0c0c465c(((((struct o50_int *)(v0_0))->v)));
    nlPopMatrix(0x1);
    v0_3 = (((struct o54_int *)(v0_0))->v);
    (((struct o54_uint *)(v0_0))->v) = (v0_3 + 0x1);
    R1004 = R1004;
    v0_2 = (0x54);
    if (((int)(v0_3 + 0x1) <= (int)0x2)) goto L_C08954C;
    (((struct o50_uint *)(v0_0))->v) = (((((struct o50_int *)(v0_0))->v)) + 0x1);
    v0_3 = (((struct o5C_int *)(v0_0))->v);
    (((struct o5C_uint *)(v0_0))->v) = (v0_3 - 1);
    R1004 = R1004;
    v0_2 = (0x5C);
    if (((int)(v0_3 - 1) >= 0)) goto L_C08954C;
    return FUN_0c0e19f2(v0_1);
    L_C08954C:;
    return v0_2;
}
