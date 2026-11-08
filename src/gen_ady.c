/* Straight-line functions with calls and guards (batch gen_ady): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f1b8(int, int);
float FUN_0c0da300(void);
float FUN_0c0cef82(int a4, int a5, int a6, int a7, int a8);
struct o24_float { char p[0x24]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o54_int { char p[0x54]; int v; };


float FUN_0c0cef82(int a4, int a5, int a6, int a7, int a8)
{
    int stk[23];
    register int t0;
    register float u5;
    register int t6;
    register float u12;
    register int t13;
    register float u18;
    register int t20;
    register float u26;
    register float u27;
    register float u31;
    register float u33;
    register float u36;
    register float t40;

    stk[14] = a8;
    t0 = *(short *)((a4 + 0x0));
    *(unsigned short *)(((int)stk + 4)) = t0;
    *(unsigned int *)(((int)stk + 12)) = (a4 + 0x4);
    u5 = (float)t0;
    u5 = u5 + (FUN_0c0da300()) * ((float)((*(short *)(((a4 + 0x4) + 0x0))) - (*(short *)(((int)stk + 4)))));
    (((struct o2C_float *)(((int)stk + 4)))->v) = u5;
    t6 = *(short *)((a4 + 0x2));
    *(unsigned short *)(((int)stk + 4)) = t6;
    u12 = (float)t6;
    u12 = u12 + (FUN_0c0da300()) * ((float)((*(short *)(((*(int *)(((int)stk + 12))) + 0x2))) - (*(short *)(((int)stk + 4)))));
    (((struct o4_float *)((((int)stk + 4) + 0x2C)))->v) = u12;
    *(unsigned int *)(((int)stk + 12)) = (a4 + 0x8);
    t13 = *(short *)(((a4 + 0x8) + 0x0));
    *(unsigned short *)(((int)stk + 8)) = t13;
    *(unsigned int *)(((int)stk + 4)) = (a4 + 0xC);
    u18 = (float)t13;
    u18 = u18 + (FUN_0c0da300()) * ((float)((*(short *)(((a4 + 0xC) + 0x0))) - (*(short *)(((int)stk + 8)))));
    (((struct o24_float *)(((int)stk + 4)))->v) = u18;
    t20 = *(short *)(((*(int *)(((int)stk + 12))) + 0x2));
    *(unsigned short *)(((int)stk + 8)) = t20;
    u26 = (float)t20;
    u26 = u26 + (FUN_0c0da300()) * ((float)((*(short *)(((*(int *)(((int)stk + 4))) + 0x2))) - (*(short *)(((int)stk + 8)))));
    (((struct o4_float *)((((int)stk + 4) + 0x24)))->v) = u26;
    u27 = (((struct o2C_float *)(((int)stk + 4)))->v);
    u31 = u27;
    u31 = u31 + (FUN_0c0da300()) * ((((((struct o24_float *)(((int)stk + 4)))->v)) - u27));
    (((struct o2C_float *)(((int)stk + 4)))->v) = u31;
    u33 = (((struct o4_float *)((((int)stk + 4) + 0x2C)))->v);
    u36 = u33;
    u36 = u36 + (FUN_0c0da300()) * ((((((struct o4_float *)((((int)stk + 4) + 0x24)))->v)) - u33));
    (((struct o4_float *)((((int)stk + 4) + 0x2C)))->v) = u36;
    *(float *)(((int)stk + 28)) = ((((struct o2C_float *)(((int)stk + 4)))->v));
    *(float *)(((int)stk + 32)) = (*(float *)0xC0CF114);
    *(float *)(((int)stk + 36)) = ((((struct o4_float *)((((int)stk + 4) + 0x2C)))->v));
    t40 = FUN_0c01f1b8((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
    *(float *)(((int)stk + 32)) = t40;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((struct o54_int *)(((int)stk + 4)))->v))) = *(struct mv3 *)((((int)stk + 4) + 0x18)); }
    return t40;
}
