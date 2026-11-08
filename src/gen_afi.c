/* Straight-line functions with calls and guards (batch gen_afi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c465c(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int FUN_0c08ab5a(int a4);
struct o4_float { char p[0x4]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o64_int { char p[0x64]; int v; };
struct o8_float { char p[0x8]; float v; };


int FUN_0c08ab5a(int a4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R13;
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
    v0_0 = a4;
    v0_1 = *(int *)((v0_0 + 0x38));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((v0_0 + 0x3C)));
    nlPushMatrix(0x0);
    FUN_0c0dcc70((*(float *)((v0_1 + 0x0))), ((((struct o4C_float *)(v0_0))->v)), ((((struct o8_float *)(v0_1))->v)));
    nlRotateAY(0xBFFF);
    FUN_0c0dcca0(0xC10AB34);
    w0_0 = (((struct o50_float *)(v0_0))->v);
    nlScale(w0_0, w0_0, w0_0);
    FUN_0c0de000(((((struct o50_float *)(v0_0))->v)));
    FUN_0c0c465c((((((struct o58_int *)(v0_0))->v)) + 0x2F2));
    nlPopMatrix(0x1);
    v0_2 = (((struct o5C_int *)(v0_0))->v);
    (((struct o5C_uint *)(v0_0))->v) = (v0_2 + 0x1);
    v0_1 = (v0_0);
    if (((int)((v0_2 + 0x1) - 1) < (int)((((struct o64_int *)(v0_0))->v)))) goto L_C08ABE0;
    (((struct o5C_uint *)(v0_1))->v) = 0x0;
    v0_2 = (((struct o58_int *)(v0_1))->v);
    (((struct o58_uint *)(v0_1))->v) = (v0_2 + 0x1);
    v0_3 = (0x58);
    v0_0 = (0x0);
    if (((int)(v0_2 + 0x1) < (int)0xF)) goto L_C08ABE0;
    *(unsigned int *)((v0_1 + v0_3)) = v0_0;
    L_C08ABE0:;
    if (((*(int *)((0xC247030 + ((*(int *)((v0_1 + 0x30))) << 2)))) != 4)) goto L_C08ABFA;
    v0_3 = (0x4);
    if (!((!(((((struct o4_float *)((*(int *)(((int)stk + 4)))))->v)) > 3.0f)))) goto L_C08ABFA;
    return v0_3;
    L_C08ABFA:;
    return FUN_0c0e19f2();
}
