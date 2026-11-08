/* Straight-line functions with calls and guards (batch gen_ig): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c063098(int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0da2e0(void);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0632d4(int a4, int a5, int a6, int a7);
int FUN_0c0605d8(int a4, int a5, int a6, int a7);
struct o220_int { char p[0x220]; int v; };
struct o228_int { char p[0x228]; int v; };
struct o244_int { char p[0x244]; int v; };
struct o244_uint { char p[0x244]; unsigned int v; };
struct o248_int { char p[0x248]; int v; };
struct o258_float { char p[0x258]; float v; };
struct o2A8_float { char p[0x2A8]; float v; };
struct o2B0_float { char p[0x2B0]; float v; };
struct o2B4_float { char p[0x2B4]; float v; };
struct o2B8_float { char p[0x2B8]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6C_ushort { char p[0x6C]; unsigned short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct oBC_int { char p[0xBC]; int v; };


int FUN_0c0632d4(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t12;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register float u19;
    register float u20;
    register float u21;
    register float u27;
    register float u28;
    register float u22;
    register float u23;
    register float u31;
    register float u32;
    register float u33;
    register float u39;
    register float u40;
    register float u34;
    register float u35;
    register int t72;
    register int t8;
    register int t9;
    float s1;
    float s2;
    float s3;
    float s4;

    if ((*(int *)((0xC247030 + (((((struct oBC_int *)(a4))->v)) << 2)))) != 4) {
        FUN_0c0e19f2();
    }
    (((struct o2B0_float *)(a4))->v) = 0.0f;
    (((struct o2B4_float *)(a4))->v) = 0.0f;
    (((struct o2B8_float *)(a4))->v) = 0.0f;
    if ((0.0f > ((((struct o2A8_float *)(a4))->v))) && (t8 = (((struct o228_int *)(a4))->v), t9 = *(int *)((0xC247030 + (t8 << 2))), t9 == 4)) {
        t12 = *(int *)((((((((struct o228_int *)(a4))->v)) << 2) + 0xC246FF0) + 0x0));
        u14 = (((struct o38_float *)(t12))->v);
        u15 = (((struct o38_float *)(a4))->v);
        u16 = (((struct o258_float *)(a4))->v);
        u17 = (((struct o34_float *)(a4))->v);
        u19 = (((struct o48_float *)((0x25C + a4)))->v);
        u20 = ((((((struct o4_float *)(((0x25C + a4) + 0x48)))->v)) * (((((struct o30_float *)(t12))->v)) - ((((struct o30_float *)(a4))->v)))) / (u17 - u16));
        u20 = -u20;
        (((struct o54_float *)((0x25C + a4)))->v) = (u20 - u19);
        u21 = (((struct o2B0_float *)(a4))->v);
        u27 = u19;
        s1 = _builtin_fabsf(u21);
        u28 = s1;
        if (s1 > 0.0297499988f) {
            u22 = (((struct o54_float *)((0x25C + a4)))->v);
            u23 = (((struct o54_float *)((0x25C + a4)))->v);
            s2 = _builtin_fabsf(u22);
            (((struct o54_float *)((0x25C + a4)))->v) = ((u23 / s2) * 0.0297499988f);
            u27 = ((u23 / s2) * 0.0297499988f);
            u28 = s2;
        }
        u31 = (((struct o8_float *)(((0x25C + a4) + 0x48)))->v);
        u32 = ((((((struct o4_float *)(((0x25C + a4) + 0x48)))->v)) * (u14 - u15)) / (u17 - u16));
        u32 = -u32;
        (((struct o5C_float *)((0x25C + a4)))->v) = (u32 - u31);
        u33 = (((struct o2B8_float *)(a4))->v);
        u39 = u31;
        s3 = _builtin_fabsf(u33);
        u40 = s3;
        if (s3 > 0.0297499988f) {
            u34 = (((struct o5C_float *)((0x25C + a4)))->v);
            u35 = (((struct o8_float *)(((0x25C + a4) + 0x54)))->v);
            s4 = _builtin_fabsf(u34);
            (((struct o8_float *)(((0x25C + a4) + 0x54)))->v) = ((u35 / s4) * 0.0297499988f);
            u39 = ((u35 / s4) * 0.0297499988f);
            u40 = s4;
        }
    }
    (((struct o2B4_float *)(a4))->v) = (((((struct o2B4_float *)(a4))->v)) + -0.0272199996f);
    *(unsigned int *)(((int)stk + 12)) = (0x25C + a4);
    nlAddVector(((*(int *)(((int)stk + 12))) + 0x48), ((0x25C + a4) + 0x54));
    nlAddVector((a4 + 0x30), ((0x25C + a4) + 0x48));
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (((((struct o3C_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v))), (((((struct o40_float *)(a4))->v)) - ((((struct o34_float *)(a4))->v))), (((((struct o44_float *)(a4))->v)) - ((((struct o38_float *)(a4))->v))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    (((struct o6C_ushort *)(a4))->v) = (*(int *)(((int)stk + 4)));
    (((struct o6E_ushort *)(a4))->v) = (*(int *)(((int)stk + 8)));
    FUN_0c063098(a4);
    t72 = 0x34;
    if (!(((((struct o34_float *)(a4))->v)) > (((((struct o258_float *)(a4))->v)) + 55.0f))) {
        if (0.0f > ((((struct o2A8_float *)(a4))->v))) {
            *(unsigned int *)((a4 + 0x0)) = 0xC063160;
        }
        t72 = 0x2A8;
    }
    return t72;
}

int FUN_0c0605d8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = (((struct o244_int *)(a4))->v);
    t1 = *(int *)0xC247CAC;
    (((struct o244_uint *)(a4))->v) = (t0 + 0x1);
    if ((int)(t0 + 0x1) >= (int)((((struct o248_int *)(a4))->v))) {
        FUN_0c0e19f2();
    }
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.0272199996f);
    t0 = (((struct o248_int *)(a4))->v);
    t2 = 0x3CDEFC7A;
    t3 = ((((((t0 - 1) - 1) << 1) + ((t0 - 1) - 1)) << 2) + (0x25C + a4));
    t4 = ((((((t0 - 1) << 1) + (t0 - 1)) << 2) + (0x25C + a4)) + 0xC);
    for (;;) {
        if ((unsigned int)t4 <= (unsigned int)((0x25C + a4) + 0x24)) {
            break;
        }
        t4 = (t4 - 12);
        t2 = t4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t2) = *(struct mv3 *)(t3); }
        t3 = (t3 - 12);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x274 + a4)) = *(struct mv3 *)((a4 + 0x3C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o38_float *)(a4))->v) = (((((struct o38_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x268 + a4)) = *(struct mv3 *)((a4 + 0x3C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x25C + a4)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c0848bc(0.799999952f, 0.399999976f, 1.0f);
    t0 = ((((struct o244_int *)(a4))->v));
    for (;;) {
        if ((int)t0 >= (int)((((struct o248_int *)(a4))->v))) {
            break;
        }
        nlPushMatrix(0x0);
        FUN_0c0dcca0(((((t0 << 1) + t0) << 2) + (0x25C + a4)));
        nlRotateAY(((((struct o3CE_short *)(t1))->v)));
        nlRotateAX(((((struct o3CC_short *)(t1))->v)));
        t2 = FUN_0c0da2e0();
        nlRotateAZ((t2 << 1));
        u0 = 8.0f;
        u0 = (u0 - (float)t0);
        nlScale(u0, u0, u0);
        FUN_0c0de000(u0);
        FUN_0c0c465c(((((struct o220_int *)(a4))->v)));
        nlPopMatrix(0x1);
        t0 = (t0 + 0x1);
    }
    return FUN_0c0849da();
}
