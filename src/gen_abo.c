/* Straight-line functions with calls and guards (batch gen_abo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0db470(int, int);
extern float _builtin_sqrtf(float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int thunk_FUN_0c0546fe(int, int, int, int);
int FUN_0c031a4c(int a4);
struct o18_float { char p[0x18]; float v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o2B4_uint { char p[0x2B4]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o558_int { char p[0x558]; int v; };
struct o6E_short { char p[0x6E]; short v; };
struct o8_float { char p[0x8]; float v; };
struct oCC_int { char p[0xCC]; int v; };


int FUN_0c031a4c(int a4)
{
    int stk[16];
    register int t1;
    register int t4;
    register float u6;
    register float u7;
    register float u31;
    register float u32;
    register float u33;
    register float u34;
    register float u37;
    register float u40;
    register float u43;
    register float u46;
    register float u49;
    register int t52;
    float s1;

    t1 = *(int *)(((((((struct oCC_int *)(a4))->v)) << 2) + 0xC246FF0));
    thunk_FUN_0c0546fe(t1, ((((struct o6E_short *)(a4))->v)), 0x800, 0x1);
    t4 = (((struct o558_int *)(a4))->v);
    u6 = (((struct o4_float *)((((t4 << 2) << 1) + 0xC1EFDD8)))->v);
    u7 = *(float *)(((((t4 << 2) << 1) + 0xC1EFDD8) + 0x0));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((-((((struct o6E_short *)(a4))->v))));
    *(float *)(((int)stk + 16)) = (-u7);
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = (-u6);
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    (((struct o30_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 4)));
    (((struct o4_float *)((((int)stk + 4) + 0x30)))->v) = (*(float *)(((int)stk + 8)));
    (((struct o8_float *)((((int)stk + 4) + 0x30)))->v) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 16)) = ((-((((struct o30_float *)(t1))->v))) + ((((struct o30_float *)(a4))->v)));
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = ((-((((struct o38_float *)(t1))->v))) + ((((struct o38_float *)(a4))->v)));
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    (((struct o24_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 4)));
    (((struct o4_float *)((((int)stk + 4) + 0x24)))->v) = (*(float *)(((int)stk + 8)));
    (((struct o8_float *)((((int)stk + 4) + 0x24)))->v) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    (((struct o18_float *)(((int)stk + 4)))->v) = (((((struct o30_float *)(((int)stk + 4)))->v)) - ((((struct o24_float *)(((int)stk + 4)))->v)));
    (((struct o4_float *)((((int)stk + 4) + 0x18)))->v) = (((((struct o4_float *)((((int)stk + 4) + 0x30)))->v)) - ((((struct o4_float *)((((int)stk + 4) + 0x24)))->v)));
    (((struct o8_float *)((((int)stk + 4) + 0x18)))->v) = (((((struct o8_float *)((((int)stk + 4) + 0x30)))->v)) - ((((struct o8_float *)((((int)stk + 4) + 0x24)))->v)));
    u31 = (((struct o8_float *)((((int)stk + 4) + 0x24)))->v);
    u32 = (((struct o8_float *)((((int)stk + 4) + 0x30)))->v);
    u33 = (((struct o30_float *)(((int)stk + 4)))->v);
    u34 = (((struct o24_float *)(((int)stk + 4)))->v);
    u37 = ((u32 - u31) * (u32 - u31));
    u37 = u37 + ((u33 - u34)) * ((u33 - u34));
    u40 = ((((struct o48_float *)(t1))->v));
    u40 = u40 + 0.5f * ((((struct o18_float *)(((int)stk + 4)))->v));
    (((struct o48_float *)(t1))->v) = u40;
    u43 = ((((struct o50_float *)(t1))->v));
    u43 = u43 + 0.5f * ((((struct o8_float *)((((int)stk + 4) + 0x18)))->v));
    (((struct o50_float *)(t1))->v) = u43;
    s1 = _builtin_sqrtf(u37);
    if (1.0f > s1) {
        (((struct o210_uint *)(a4))->v) = 0x3E;
        u46 = ((((struct o48_float *)(t1))->v));
        u46 = u46 + 0.5f * ((((struct o18_float *)(((int)stk + 4)))->v));
        (((struct o48_float *)(t1))->v) = u46;
        u49 = ((((struct o50_float *)(t1))->v));
        u49 = u49 + 0.5f * ((((struct o8_float *)((((int)stk + 4) + 0x18)))->v));
        (((struct o50_float *)(t1))->v) = u49;
        t52 = (thunk_FUN_0c0546fe(t1, ((((struct o6E_short *)(a4))->v)), 0x800, 0x0));
    } else {
        (((struct o2B4_uint *)(a4))->v) = 0x0;
        (((struct o2B4_uint *)(t1))->v) = 0x0;
        t52 = 0x2B4;
        s1;
    }
    return t52;
}
