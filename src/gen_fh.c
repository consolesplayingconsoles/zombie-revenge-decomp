/* Straight-line functions with calls and guards (batch gen_fh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c05561a(int, int, int, int, Stk3);
int FUN_0c063098(int);
int FUN_0c0caf6a(int, int, int, float);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
extern int FUN_0c0e19f2();
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c06348e(int a4, int a5, int a6, int a7);
int FUN_0c03ecf2(int a4, int a5, int a6, int a7);
void FUN_0c042d28(void);
int FUN_0c06ccb8(int a4);
float FUN_0c061ccc(void);

int FUN_0c06348e(int a4, int a5, int a6, int a7)
{
    int t2;
    int t62;
    int t36;
    int t31;
    int t55;
    int t48;
    int t41;
    int stk[14];

    if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0xBC))) << 2)))) != 4) {
        t2 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = -0.0772199929f;
    FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
    *(float *)(((0x2B0 + a4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)(((0x2B4 + a4) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)(((0x2B8 + a4) + 0x0)) = (*(float *)(((int)stk + 16)));
    nlPopMatrix(0x1);
    *(unsigned int *)(((int)stk + 4)) = (0x25C + a4);
    nlAddVector(((*(int *)(((int)stk + 4))) + 0x48), ((0x25C + a4) + 0x54));
    nlAddVector((a4 + 0x30), ((0x25C + a4) + 0x48));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c063098(a4);
    t62 = 0x34;
    if (!(((*(float *)((a4 + 0x258))) + 50.0f) > (*(float *)((a4 + 0x34))))) {
        if (((*(int *)0xC247030) == 4) && (t31 = *(int *)0xC247034, t31 == 4)) {
            t36 = FUN_0c0da2e0();
            *(unsigned int *)(((0x228 + a4) + 0x0)) = (t36 & 0x1);
            t55 = (t36 & 0x1);
        } else {
            if ((*(int *)0xC247030) == 4) {
                *(unsigned int *)((a4 + 0x228)) = 0x0;
                t48 = 0x228;
            } else {
                if ((*(int *)0xC247034) == 4) {
                    *(unsigned int *)((a4 + 0x228)) = 0x1;
                    t41 = 0x228;
                } else {
                    t41 = (((int (*)(int))(FUN_0c0e19f2))(0xC247030));
                }
                t48 = t41;
            }
            t55 = t48;
        }
        *(unsigned int *)((a4 + 0x0)) = 0xC0632D4;
        t62 = t55;
    }
    return t62;
}

int FUN_0c03ecf2(int a4, int a5, int a6, int a7)
{
    int t9;
    int t10;
    int t20;
    int t25;
    int t31;
    int t38;
    int t40;
    int t48;
    int t63;
    int stk[7];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R9;
    int R10;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C03ECF2:;
    R13 = (0xC246FF0);
    R14 = (R4);
    if (((*(int *)0xC23ED50) != (*(int *)((R4 + 0x30))))) goto L_C03ED1A;
    goto L_C03ED08;
    L_C03ED08:;
    if (((unsigned int)(*(int *)((R14 + 0x34))) <= (unsigned int)0x200)) goto L_C03ED20;
    goto L_C03ED10;
    L_C03ED10:;
    if (((unsigned int)(*(int *)((R14 + 0x40))) < (unsigned int)0x6)) goto L_C03ED20;
    goto L_C03ED1A;
    L_C03ED1A:;
    t9 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(R4, R5, R6, R7);
    goto L_C03ED20;
    L_C03ED20:;
    t10 = *(int *)((R14 + 0x38));
    R0 = (t10);
    if ((t10 == 0)) goto L_C03ED2E;
    goto L_C03ED26;
    L_C03ED26:;
    if ((R0 == 1)) goto L_C03ED94;
    goto L_C03ED2A;
    L_C03ED2A:;
    goto L_C03EE3A;
    L_C03EE3A:;
    return R0;
    L_C03ED94:;
    if (((*(int *)(((R13 + 0x40) + ((*(int *)((R14 + 0x3C))) << 2)))) != 5)) goto L_C03EDAC;
    goto L_C03EDA2;
    L_C03EDA2:;
    R0 = ((((int (*)(int, int, int, int))(FUN_0c0e19f2))(R4, R5, R6, R7)));
    goto L_C03EE3A;
    L_C03EDAC:;
    t20 = *(int *)((((*(int *)((R14 + 0x3C))) << 2) + 0xC246FF0));
    R0 = (0x2BC);
    R4 = (t20);
    if (((*(int *)((t20 + 0x2BC))) != 0x33B)) goto L_C03EE3A;
    goto L_C03EDC2;
    L_C03EDC2:;
    t25 = *(int *)((R4 + 0x2B4));
    R0 = (t25);
    if ((t25 != 31)) goto L_C03EE3A;
    goto L_C03EDCA;
    L_C03EDCA:;
    R0 = (0x2AC);
    if (((*(int *)((R4 + 0x2AC))) != 0)) goto L_C03EE3A;
    goto L_C03EDD2;
    L_C03EDD2:;
    t31 = *(int *)0xC2462F4;
    R5 = (((-t31) + 0x4));
    R6 = (0xC2462FC);
    R7 = (0x200);
    if (((int)((-t31) + 0x4) <= 0)) goto L_C03EDFC;
    goto L_C03EDE2;
    L_C03EDE2:;
    *(unsigned int *)((R6 + 0x0)) = ((*(int *)((R6 + 0x0))) | (*(int *)((R14 + 0x34))));
    t38 = *(int *)((R14 + 0x34));
    *(unsigned int *)((R14 + 0x34)) = (t38 << 1);
    if (((unsigned int)(t38 << 1) > (unsigned int)R7)) goto L_C03EDFC;
    goto L_C03EDF6;
    L_C03EDF6:;
    t40 = (int)(R5 - 1) > 0;
    R5 = ((R5 - 1));
    if (t40) goto L_C03EDE2;
    goto L_C03EDFC;
    L_C03EDFC:;
    R0 = (0x40);
    if (((unsigned int)(*(int *)((R14 + 0x40))) >= (unsigned int)0x6)) goto L_C03EE3A;
    goto L_C03EE06;
    L_C03EE06:;
    if (((*(int *)((((*(int *)((R14 + R0))) << 2) + 0xC0F56D0))) == 0)) goto L_C03EE32;
    goto L_C03EE12;
    L_C03EE12:;
    t48 = *(int *)((R14 + 0x40));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC0F5730); }
    FUN_0c05561a(R4, R5, ((((t48 << 1) + t48) << 2) + 0xC0F56E8), ((int)stk + 4), *(Stk3 *)(((int)stk + 4)));
    goto L_C03EE32;
    L_C03EE32:;
    *(unsigned int *)((R14 + 0x40)) = ((*(int *)((R14 + 0x40))) + 0x1);
    R0 = (0x40);
    goto L_C03EE3A;
    L_C03ED2E:;
    R4 = (0x4);
    R5 = (0x230);
    R6 = (0x2);
    R7 = (0xC);
    goto L_C03ED36;
    L_C03ED36:;
    if (((int)(*(int *)((((R4 << 2) + (R13 + 0x40)) + 0x0))) < (int)R6)) goto L_C03ED62;
    goto L_C03ED46;
    L_C03ED46:;
    R0 = (0xC8);
    if ((((*(int *)(((*(int *)((((R4 << 2) + R13) + 0x0))) + 0xC8))) & R5) == 0)) goto L_C03ED62;
    goto L_C03ED58;
    L_C03ED58:;
    *(unsigned int *)((R14 + 0x3C)) = R4;
    *(unsigned int *)((R14 + 0x38)) = ((*(int *)((R14 + 0x38))) + 0x1);
    goto L_C03EE3A;
    L_C03ED62:;
    t63 = (int)(R4 + 0x1) < (int)R7;
    R4 = ((R4 + 0x1));
    if (t63) goto L_C03ED36;
    goto L_C03ED68;
    L_C03ED68:;
    goto L_C03EE3A;
}

void FUN_0c042d28(void)
{
    int t0;
    int t4;
    int t6;
    int t7;
    int t8;
    int t9;
    int t17;
    int t28;
    int t29;
    int t30;
    int t5;
    int t22;
    int t43;

    t0 = 0x0;
    for (;;) {
        if ((*(int *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC247B24) + 0x0))) == (*(int *)0xC23ED50)) {
            t5 = (((((t0 << 1) + t0) << 2) << 1) + 0xC247B24); break;
        }
        t4 = (((((t0 << 1) + t0) << 2) << 1) + 0xC247B24);
        t0 = (t0 + 0x1);
        if ((int)t0 < (int)0x4) continue;
        t5 = t4; break;
    }
    t6 = t5;
    t7 = t0;
    t8 = 0x0;
    t9 = 0x0;
    for (;;) {
        if ((int)t8 >= (int)0x1E) {
            break;
        }
        if ((int)t8 < (int)0x10) {
            t6 = 0xC246FF0;
            t6 = (t6 + 0x40);
            t6 = (t6 + (t8 << 2));
            t7 = (*(int *)((t6 + 0x0)));
            if (t7 != 0) {
                t7 = 0xC246FF0;
                t17 = *(int *)((((t8 << 2) + t7) + 0x0));
                t7 = 0xC0E61D4;
                t6 = t17;
                *(unsigned int *)(((((t9 << 2) << 2) + 0xC246A40) + 0x0)) = t8;
                t6 = (t6 + 0x30);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((((t9 << 2) << 2) + 0xC246A40) + 0x4)) = *(struct mv3 *)(t6); }
                t9 = (t9 + 0x1);
                t22 = 0xC0E61D4;
            } else {
                t22 = t7;
            }
            t7 = t22;
            t8 = (t8 + 0x1);
            continue;
        }
        if (((int)t8 < (int)0x14) && (t6 = 0x4, (int)t0 < (int)t6)) {
            t28 = *(int *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC247B24) + 0x8));
            if (t28 != 0) {
                t29 = 0x0;
                t30 = t28;
                for (;;) {
                    t7 = (*(int *)((t30 + 0xBC)));
                    if ((t7 == t8) || (t29 = (t29 + 0x1), (int)t29 >= (int)0x4)) {
                        break;
                    }
                    t7 = (((((t0 << 1) + t0) << 2) << 1) + 0xC247B24);
                    t30 = t29;
                    t7 = (t7 + 0x8);
                    t30 = (t30 << 2);
                    t30 = (t30 + t7);
                    t30 = (*(int *)((t30 + 0x0)));
                    if (t30 != 0) continue;
                    *(unsigned int *)(((((t9 << 2) << 2) + 0xC246A40) + 0x0)) = 0xFFFFFFFF;
                    return;
                }
                if ((*(int *)((t30 + 0x21C))) == 0) {
                    t6 = t30;
                    t6 = (t6 + 0x30);
                    *(unsigned int *)(((((t9 << 2) << 2) + 0xC246A40) + 0x0)) = t8;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((t9 << 2) << 2) + 0xC246A40) + 0x4)) = *(struct mv3 *)(t6); }
                    t9 = (t9 + 0x1);
                    t43 = 0xC0E61D4;
                } else {
                    t43 = t7;
                }
                t7 = t43;
                t8 = (t8 + 0x1);
                continue;
            }
            break;
        }
        t8 = (t8 + 0x1);
    }
    *(unsigned int *)(((((t9 << 2) << 2) + 0xC246A40) + 0x0)) = 0xFFFFFFFF;
}

int FUN_0c06ccb8(int a4)
{
    int t5;
    int t6;
    int t17;
    int t24;
    int stk[9];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F4;
    int T_;
    R4 = a4;
    L_C06CCB8:;
    *(unsigned int *)(((int)stk + 4)) = 0xC246FF0;
    R10 = (0xC23F268);
    R11 = (0x0);
    R12 = (0xC0);
    R6 = (0x0);
    R9 = (0x2);
    goto L_C06CCD8;
    L_C06CCD8:;
    t5 = *(int *)(((int)stk + 4));
    t6 = *(int *)((((R6 << 2) + (t5 + 0x40)) + 0x0));
    R0 = (t5);
    R5 = (t6);
    if (((int)t6 < (int)0x3)) goto L_C06CDA8;
    goto L_C06CCEC;
    L_C06CCEC:;
    if (((int)R5 > (int)0x5)) goto L_C06CDA8;
    goto L_C06CCF2;
    L_C06CCF2:;
    R0 = ((R4 + 0x36));
    R14 = ((((((R6 << 1) + R6) << 2) << 2) << 2));
    R5 = ((R4 + 0x36));
    R7 = ((R4 + 0x36));
    R8 = ((R6 << 1));
    goto L_C06CDA0;
    L_C06CDA0:;
    if (((unsigned int)R5 < (unsigned int)(R4 + 0x3E))) goto L_C06CD54;
    goto L_C06CDA8;
    L_C06CDA8:;
    t17 = (int)(R6 + 0x1) < (int)0x4;
    R6 = ((R6 + 0x1));
    if (t17) goto L_C06CCD8;
    goto L_C06CDB0;
    L_C06CDB0:;
    return R0;
    L_C06CD54:;
    if (((*(short *)((R5 + 0x0))) == R6)) goto L_C06CDA8;
    goto L_C06CD5A;
    L_C06CD5A:;
    if (((int)(*(short *)((R7 + 0x0))) >= 0)) goto L_C06CD9A;
    goto L_C06CD60;
    L_C06CD60:;
    *(unsigned short *)((R0 + 0x0)) = R6;
    R5 = (R11);
    goto L_C06CD64;
    L_C06CD64:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((R4 + 0x6C) + R14) + R5)) = *(struct mv3 *)(((R14 + R10) + R5)); }
    *(float *)(((((0x96C + R4) + R14) + R5) + 0x8)) = F4;
    *(float *)(((((0x96C + R4) + R14) + R5) + 0x4)) = F4;
    t24 = (unsigned int)(R5 + 0xC) < (unsigned int)R12;
    *(float *)(((((0x96C + R4) + R14) + R5) + 0x0)) = F4;
    R0 = (0x4);
    R5 = ((R5 + 0xC));
    if (t24) goto L_C06CD64;
    goto L_C06CD90;
    L_C06CD90:;
    *(unsigned short *)(((R8 + (R4 + 0x52)) + 0x0)) = R9;
    goto L_C06CDA8;
    L_C06CD9A:;
    R0 = ((R0 + 0x2));
    R5 = ((R5 + 0x2));
    R7 = ((R7 + 0x2));
    goto L_C06CDA0;
}

float FUN_0c061ccc(void)
{
    int t0;
    int t4;
    int t5;
    int t13;
    int t19;
    int t30;
    float u32;
    int t37;
    float u39;
    int t44;
    float u46;
    float u56;
    int t6;
    float u7;
    float u8;
    float u9;
    int stk[14];

    t0 = *(int *)0xC247B84;
    if (t0 != 0) {
        FUN_0c0caf6a(((int)stk + 4), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8), (*(float *)(((*(int *)0xC247B94) + 0x3C))));
        t4 = 0xC061DE8;
        t5 = 0x0;
        for (;;) {
            if ((int)t5 >= (int)(*(int *)(((*(int *)0xC247B94) + 0x20)))) {
                break;
            }
            t6 = (*(int *)((t0 + 0x30)));
            t6 = (t6 + 0x1);
            *(unsigned int *)((t0 + 0x30)) = t6;
            t6 = (t6 - 1);
            t13 = t6;
            t6 = (t6 << 2);
            t6 = (t6 + t13);
            t6 = (t6 << 2);
            t6 = (t6 << 1);
            t6 = (t6 + (t0 + 0x34));
            if ((int)(*(int *)((t0 + 0x30))) >= (int)0x100) {
                *(unsigned int *)((t0 + 0x30)) = 0x0;
            }
            t4 = 0x58;
            *(unsigned int *)((t6 + 0x20)) = 0x0;
            *(unsigned int *)((t6 + 0x18)) = (*(int *)(((*(int *)0xC247B94) + 0x10)));
            t19 = *(int *)(((*(int *)0xC247B94) + t4));
            t4 = 0x3C;
            *(unsigned int *)((t6 + 0x1C)) = t19;
            u8 = (*(float *)(((*(int *)0xC247B94) + t4)));
            t4 = 0x4;
            *(float *)((t6 + t4)) = u8;
            t4 = 0x4;
            u8 = (*(float *)(((int)stk + 4)));
            *(float *)((t6 + 0x0)) = u8;
            u8 = (*(float *)((((int)stk + 4) + t4)));
            t4 = 0x8;
            *(float *)((t6 + t4)) = u8;
            t4 = 0x14;
            u8 = (*(float *)(((*(int *)0xC247B94) + t4)));
            t4 = 0x24;
            *(float *)((t6 + t4)) = u8;
            u9 = (*(float *)(((*(int *)0xC247B94) + 0x0)));
            t4 = (FUN_0c0da2e0());
            t4 = (t4 & 0xFFF);
            t30 = t4;
            t4 = 0x4;
            u7 = (*(float *)(((*(int *)0xC247B94) + t4)));
            t4 = 0x10;
            u7 = (u7 / 4095.0f);
            u8 = (float)t30;
            u32 = u9;
            u32 = u32 + u7 * u8;
            u9 = u32;
            *(float *)((t6 + t4)) = u9;
            t4 = 0x8;
            u9 = (*(float *)(((*(int *)0xC247B94) + t4)));
            t4 = (FUN_0c0da2e0());
            t4 = (t4 & 0xFFF);
            t37 = t4;
            t4 = 0xC;
            u7 = (*(float *)(((*(int *)0xC247B94) + t4)));
            u7 = (u7 / 4095.0f);
            u8 = (float)t37;
            u39 = u9;
            u39 = u39 + u7 * u8;
            u9 = u39;
            *(float *)((t6 + t4)) = u9;
            t4 = 0x8;
            u9 = (*(float *)(((*(int *)0xC247B94) + t4)));
            t4 = (FUN_0c0da2e0());
            t4 = (t4 & 0xFFF);
            t44 = t4;
            t4 = 0xC;
            u7 = (*(float *)(((*(int *)0xC247B94) + t4)));
            t4 = 0x14;
            t5 = (t5 + 0x1);
            u7 = (u7 / 4095.0f);
            u8 = (float)t44;
            u46 = u9;
            u46 = u46 + u7 * u8;
            u9 = u46;
            *(float *)((t6 + t4)) = u9;
        }
        u56 = u7;
    }
    return u56;
}
