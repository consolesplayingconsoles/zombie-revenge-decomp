/* Straight-line functions with calls and guards (batch gen_ej): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float FUN_0c01f172(int);
int FUN_0c0558f8(int);
int FUN_0c05664c(int, int, int, int);
int FUN_0c0567c0(int);
int FUN_0c056928(int);
int FUN_0c057aa8(int);
int FUN_0c057c50(int);
int FUN_0c0c465c(int);
int FUN_0c0c7d0a(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlRotateAX(int);
int nlScale(float, float, float);
int FUN_0c053406(int a4);
int FUN_0c056b24(int a4, int a5, int a6, int a7);
int FUN_0c0c7d9c(void);
struct o248_int { char p[0x248]; int v; };
struct o248_uint { char p[0x248]; unsigned int v; };
struct o258_float { char p[0x258]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_int { char p[0x70]; int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC8_int { char p[0xC8]; int v; };


int FUN_0c053406(int a4)
{
    int t2;
    int t3;
    float u5;
    int t16;

    FUN_0c0dc5a0();
    FUN_0c0dcca0((a4 + 0x30));
    t2 = FUN_0c0da2e0();
    t3 = (((struct o4C_int *)(a4))->v);
    (((struct o4C_uint *)(a4))->v) = (t3 + ((t2 & 0x3FFF) + 0x4000));
    nlRotateAX((t3 + ((t2 & 0x3FFF) + 0x4000)));
    u5 = (((struct o50_float *)(a4))->v);
    nlScale(u5, u5, u5);
    FUN_0c0de000(((((struct o50_float *)(a4))->v)));
    FUN_0c0c465c(0x12);
    nlPopMatrix(0x1);
    (((struct o3C_float *)(a4))->v) = (((((struct o3C_float *)(a4))->v)) + ((((struct o48_float *)(a4))->v)));
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), (*(float *)0xC05352C));
    nlAddVector((a4 + 0x30), (a4 + 0x3C));
    t16 = (((struct o54_int *)(a4))->v);
    (((struct o54_uint *)(a4))->v) = (t16 - 1);
    if ((int)(t16 - 1) < 0) {
        return FUN_0c0e19f2();
    }
    return 0x54;
}

int FUN_0c056b24(int a4, int a5, int a6, int a7)
{
    int t2;
    float t5;
    int t12;

    FUN_0c05664c(a4, a5, a6, a7);
    t2 = *(int *)((0xC247604 + (((((struct oBC_int *)(a4))->v)) << 2)));
    if ((t2 != 2) && (t2 != 1)) {
        if (t2 != 11) {
            if (t2 != 3) {
                if (t2 != 4) {
                    if (t2 != 5) {
                        return FUN_0c057aa8(a4);
                    }
                    return t2;
                }
                FUN_0c056928(a4);
                return FUN_0c057aa8(a4);
            }
            FUN_0c0567c0(a4);
            return FUN_0c057aa8(a4);
        }
        t5 = FUN_0c01f172(a4);
        if (t5 > -990.0f) {
            (((struct o34_float *)(a4))->v) = (t5 + ((((struct o258_float *)(a4))->v)));
        }
        FUN_0c057c50(a4);
        t12 = (((struct o248_int *)(a4))->v);
        (((struct o248_uint *)(a4))->v) = (t12 + 0x100);
        (((struct o6E_ushort *)(a4))->v) = (int)((FUN_0c0da410((t12 + 0x100))) * 8192.0f);
        if (((*(int *)0xC23ED5C) & 0x40000) != 0) {
            FUN_0c0558f8(a4);
            FUN_0c0e19f2();
        }
        return FUN_0c057aa8(a4);
    }
    return FUN_0c057aa8(a4);
}

int FUN_0c0c7d9c(void)
{
    int t3;
    int t21;
    int stk[5];

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
    int R12;
    int R13;
    int R14;
    int T_;
    L_C0C7D9C:;
    R13 = (0xC31FD20);
    R14 = (0x4);
    goto L_C0C7E2A;
    L_C0C7E2A:;
    if (((int)R14 < (int)0xC)) goto L_C0C7DAA;
    goto L_C0C7E30;
    L_C0C7E30:;
    return R0;
    L_C0C7DAA:;
    t3 = *(int *)(((0xC247030 + (R14 << 2)) + 0x0));
    R4 = (0xC246FF0);
    R5 = (t3);
    R7 = ((R14 << 2));
    if (((int)t3 < (int)0x2)) goto L_C0C7E28;
    goto L_C0C7DBE;
    L_C0C7DBE:;
    R0 = (R5);
    if ((R5 == 5)) goto L_C0C7E28;
    goto L_C0C7DC6;
    L_C0C7DC6:;
    R0 = (0xC8);
    if (((((((struct oC8_int *)((*(int *)(((R4 + R7) + 0x0)))))->v)) & 0x230) == 0)) goto L_C0C7E28;
    goto L_C0C7DD6;
    L_C0C7DD6:;
    R4 = (0x0);
    goto L_C0C7E18;
    L_C0C7E18:;
    if (((int)R4 < (int)(*(int *)((R13 + 0x10))))) goto L_C0C7E00;
    goto L_C0C7E1E;
    L_C0C7E1E:;
    FUN_0c0c7d0a(R14);
    R0 = ((FUN_0c0e19f2()));
    goto L_C0C7E28;
    L_C0C7E28:;
    R14 = ((R14 + 0x1));
    goto L_C0C7E2A;
    L_C0C7E00:;
    t21 = *(int *)((((R4 << 2) + R13) + 0x0));
    R5 = (t21);
    if ((t21 == 0)) goto L_C0C7E16;
    goto L_C0C7E0E;
    L_C0C7E0E:;
    R0 = (0x70);
    if ((((((struct o70_int *)(R5))->v)) == R14)) goto L_C0C7E28;
    goto L_C0C7E16;
    L_C0C7E16:;
    R4 = ((R4 + 0x1));
    goto L_C0C7E18;
}
