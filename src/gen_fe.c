/* Straight-line functions with calls and guards (batch gen_fe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
extern int FUN_0c0be6ee();
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, float, float, float);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c036bc0(int a4);
int FUN_0c0688d6(int a4, int a5, int a6, int a7);
struct o18_float { char p[0x18]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o62_short { char p[0x62]; short v; };
struct o78_int { char p[0x78]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_int { char p[0xA8]; int v; };
struct oA8_uint { char p[0xA8]; unsigned int v; };


int FUN_0c036bc0(int a4)
{
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t10;
    float t23;
    float t25;
    int t33;
    int t57;
    float t43;
    float u45;
    float u47;
    int t61;
    int t63;
    int t65;
    int stk[23];

    t1 = *(int *)0xC247CAC;
    *(unsigned int *)(((int)stk + 4)) = (((((struct o48_int *)(a4))->v)) + 0x30);
    nlPushMatrix(0x0);
    t3 = (((int)stk + 4) + 0x4);
    t4 = 0x4;
    t5 = 0xC0F55AC;
    for (;;) {
        t6 = t5;
        t5 = (t5 + 0xC);
        t7 = t3;
        t3 = (t3 + 0xC);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t7) = *(struct mv3 *)(t6); }
        t4 = (t4 - 0x1);
        if (t4 == 0) {
            break;
        }
    }
    if (((*(int *)0xC23A258) & 1) != 0) {
        t10 = (((struct o40_int *)(a4))->v);
        (((struct o40_uint *)(a4))->v) = (t10 + 0x1);
        if ((int)(t10 + 0x1) >= (int)0x1E) {
            (((struct o40_uint *)(a4))->v) = 0x0;
        }
    }
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + (((FUN_0c0da2e0()) & 0xFFF) + 0x200));
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + ((unsigned char)(FUN_0c0da2e0()) + 0x100));
    t23 = FUN_0c0da410((*(int *)((a4 + 0x34))));
    t25 = FUN_0c0da410((*(int *)((a4 + 0x38))));
    (((struct o4_float *)(((int)stk + 4)))->v) = (((((struct o4_float *)(((int)stk + 4)))->v)) + (t25 * (1.0f + 1.0f)));
    (((struct o18_float *)((((int)stk + 4) + 0x4)))->v) = (((((struct o18_float *)((((int)stk + 4) + 0x4)))->v)) + (t25 * (1.0f + 1.0f)));
    (((struct o4_float *)((((int)stk + 4) + 0x4)))->v) = (((((struct o4_float *)((((int)stk + 4) + 0x4)))->v)) * (((t23 * 0.199999988f) + 0.799999952f)));
    (((struct o4_float *)(((((int)stk + 4) + 0x4) + 0x18)))->v) = (((((struct o4_float *)(((((int)stk + 4) + 0x4) + 0x18)))->v)) * ((0.799999952f - (t23 * 0.199999988f))));
    t33 = ((int (*)(int, int, float))(FUN_0c0be6ee))((((((struct o40_int *)(a4))->v)) + 0x1B8), (((int)stk + 4) + 0x4), (0.799999952f - (t23 * 0.199999988f)));
    FUN_0c0dbda0((0x2AC + t1));
    FUN_0c0dcca0((*(int *)(((int)stk + 4))));
    nlRotateAY(((((struct o3CE_short *)(t1))->v)));
    nlRotateAX(((((struct o3CC_short *)(t1))->v)));
    t57 = 0;
    if ((int)(*(int *)((a4 + 0x30))) < (int)0x71C7) {
        t43 = FUN_0c0da410((*(int *)((a4 + 0x30))));
        (((struct o3C_float *)(a4))->v) = (t43 * (1.0f + 1.0f));
        nlScale(1.0f, (t43 * (1.0f + 1.0f)), 1.0f);
        u45 = (((struct o3C_float *)(a4))->v);
        u47 = 1.0f;
        if (_builtin_fabsf(u45) > 1.0f) {
            u47 = _builtin_fabsf(((((struct o3C_float *)(a4))->v)));
        }
        FUN_0c0de000(u47);
        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + (((FUN_0c0da2e0()) + 0x16C) & 0xFFF));
        t57 = ((_builtin_fabsf(u45) > 1.0f));
    } else {
        t57 = (1);
    }
    FUN_0c0c465c((((((struct o40_int *)(a4))->v)) + 0x1B8));
    t61 = ((int (*)(int, int))(FUN_0c0be6ee))((((((struct o40_int *)(a4))->v)) + 0x1B8), 0xC0F55AC);
    nlPopMatrix(0x1);
    t63 = (((struct o44_int *)(a4))->v);
    (((struct o44_uint *)(a4))->v) = (t63 - 1);
    t65 = 0x44;
    if ((int)(t63 - 1) <= 0) {
        t65 = (FUN_0c0e19f2());
    }
    return t65;
}

int FUN_0c0688d6(int a4, int a5, int a6, int a7)
{
    int t1;
    int t28;
    int t30;
    int t36;
    int t37;
    int t42;
    int t46;
    int t47;
    int t50;
    int stk[3];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F4;
    float F5;
    float F6;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_C0688D6:;
    FUN_0c0685a4(R4, R5, R6, a7);
    t1 = (((struct o80_int *)(R4))->v);
    R0 = (t1);
    R14 = (R4);
    R4 = (0x0);
    R5 = (0xC23ED88);
    R6 = (0x1);
    if ((t1 == 0)) goto L_C068904;
    goto L_C0688F0;
    L_C0688F0:;
    if ((R0 == 1)) goto L_C06891C;
    goto L_C0688F4;
    L_C0688F4:;
    if ((R0 == 2)) goto L_C068944;
    goto L_C0688F8;
    L_C0688F8:;
    if ((R0 == 3)) goto L_C068990;
    goto L_C0688FC;
    L_C0688FC:;
    if ((R0 == 4)) goto L_C0689CE;
    goto L_C068900;
    L_C068900:;
    goto L_C068A32;
    L_C068A32:;
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(R14))->v)), ((((struct o34_float *)(R14))->v)), ((((struct o38_float *)(R14))->v)));
    nlRotateAY(((((struct o62_short *)(R14))->v)));
    nlRotateAZ(((((struct o9C_int *)(R14))->v)));
    FUN_0c0c465c(((((struct o78_int *)(R14))->v)));
    return nlPopMatrix(0x1);
    L_C0689CE:;
    (((struct o9C_uint *)(R14))->v) = (((((struct o9C_int *)(R14))->v)) + ((((struct o98_int *)(R14))->v)));
    (((struct o98_uint *)(R14))->v) = (((((struct o98_int *)(R14))->v)) + 0x40);
    if (((int)((((struct o9C_int *)(R14))->v)) < 0)) goto L_C068A32;
    goto L_C0689EE;
    L_C0689EE:;
    t28 = (((struct oA4_int *)(R14))->v);
    (((struct oA4_uint *)(R14))->v) = (t28 + 0x1);
    if (((int)(t28 + 0x1) < (int)0x3)) goto L_C068A14;
    goto L_C0689FC;
    L_C0689FC:;
    (((struct o9C_uint *)(R14))->v) = R4;
    (((struct o80_uint *)(R14))->v) = R4;
    t30 = (((struct o88_int *)(R14))->v);
    *(unsigned int *)((R5 + 0x0)) = ((*(int *)((R5 + 0x0))) & (~(((int)t30 >= 0) ? (R6 << (t30 & 31)) : ((-(int)t30 & 31) ? ((int)R6 >> (-(int)t30 & 31)) : ((int)R6 >> 31)))));
    goto L_C068A32;
    L_C068A14:;
    (((struct o9C_uint *)(R14))->v) = (-((((struct o9C_int *)(R14))->v)));
    (((struct o98_uint *)(R14))->v) = (-(((((struct o98_int *)(R14))->v)) >> 1));
    (((struct oA8_uint *)(R14))->v) = (-((((struct oA8_int *)(R14))->v)));
    goto L_C068A32;
    L_C068990:;
    (((struct o98_uint *)(R14))->v) = (((((struct o98_int *)(R14))->v)) + 0x40);
    t36 = (((struct o9C_int *)(R14))->v);
    t37 = (((struct o98_int *)(R14))->v);
    (((struct o9C_uint *)(R14))->v) = (t36 + t37);
    if (((int)(t36 + t37) < 0)) goto L_C068A32;
    goto L_C0689AA;
    L_C0689AA:;
    (((struct o98_uint *)(R14))->v) = (-(((((struct o98_int *)(R14))->v)) >> 1));
    (((struct o9C_uint *)(R14))->v) = R4;
    (((struct oA4_uint *)(R14))->v) = R4;
    (((struct o80_uint *)(R14))->v) = (((((struct o80_int *)(R14))->v)) + 0x1);
    FUN_0c0cc3f8(0xF2BA9, R5, R6, F4, F5, F6);
    goto L_C068A32;
    L_C068944:;
    t42 = (((struct oA0_int *)(R14))->v);
    (((struct oA0_uint *)(R14))->v) = (t42 - 1);
    if (((int)(t42 - 1) > 0)) goto L_C068A32;
    goto L_C068950;
    L_C068950:;
    (((struct o98_uint *)(R14))->v) = 0x100;
    goto L_C06895A;
    L_C06895A:;
    (((struct o80_uint *)(R14))->v) = (((((struct o80_int *)(R14))->v)) + 0x1);
    goto L_C068A32;
    L_C06891C:;
    (((struct o98_uint *)(R14))->v) = (((((struct o98_int *)(R14))->v)) - 32);
    t46 = (((struct o9C_int *)(R14))->v);
    t47 = (((struct o98_int *)(R14))->v);
    (((struct o9C_uint *)(R14))->v) = (t46 + t47);
    if (((int)(t46 + t47) <= (int)0xFFFFC000)) goto L_C06893C;
    goto L_C068938;
    L_C068938:;
    goto L_C068A32;
    L_C06893C:;
    (((struct oA0_uint *)(R14))->v) = 0x1E;
    goto L_C06895A;
    L_C068904:;
    t50 = (((struct o88_int *)(R14))->v);
    if ((((((int)t50 >= 0) ? (R6 << (t50 & 31)) : ((-(int)t50 & 31) ? ((int)R6 >> (-(int)t50 & 31)) : ((int)R6 >> 31))) & (*(int *)((R5 + 0x0)))) != 0)) goto L_C068914;
    goto L_C068910;
    L_C068910:;
    goto L_C068A32;
    L_C068914:;
    (((struct o98_uint *)(R14))->v) = 0xFFFFFF00;
    goto L_C06895A;
}
