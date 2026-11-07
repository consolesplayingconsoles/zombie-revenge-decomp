/* Straight-line functions with calls and guards (batch gen_bi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02dc30(int);
int FUN_0c03611c(int);
int FUN_0c03a834(int);
int FUN_0c03aaa2(int);
int FUN_0c03afe8(int);
int FUN_0c03bffe(int);
int FUN_0c03c336(int);
int FUN_0c03c510(int);
int FUN_0c03c592(int, int, int, int);
int FUN_0c03c65c(int);
int FUN_0c03c70c(int);
int FUN_0c03c75c(int);
int FUN_0c03c900(int);
int FUN_0c03c9e0(int);
int FUN_0c03cb3a(int);
int FUN_0c03cc70(int, int);
int FUN_0c03ce1e(int, int, int, int);
int FUN_0c03cfb8(int);
int FUN_0c03d020(int);
int FUN_0c03d038(int);
int FUN_0c03d516(int);
extern int FUN_0c0848d6();
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c09ee68(int);
int FUN_0c0a9894(void);
extern int FUN_0c0a9d50();
int FUN_0c0a9e94(int, int);
extern int FUN_0c0c0340();
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int FUN_0c0dc0b0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e5dc0(void);
int FUN_0c0e5e74(void);
int FUN_0c0e5f1c(int);
int FUN_0c0e5fe4(void);
int nlGetMatrix(int);
int nlMultiMatrixRevOrder(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0aa5ea(int a4, float f4);
void FUN_0c03d588(int a4, int a5, int a6, int a7);
float FUN_0c0ca9a8(int a4);


void FUN_0c03d588(int a4, int a5, int a6, int a7)
{
    int t0;
    int t44;
    int t62;
    int t63;
    int t45;
    int t46;

    t0 = *(int *)((a4 + 0x48C));
    if (t0 != 20) {
        if (t0 != 28) {
            if (t0 != 30) {
                if (t0 != 29) {
                    if (t0 != 41) {
                        if ((t0 != 43) && (t0 != 42)) {
                            if (t0 != 44) {
                                if (t0 != 45) {
                                    if (t0 != 46) {
                                        if (t0 != 49) {
                                            if (t0 != 51) {
                                                if (t0 != 52) {
                                                    if ((t0 != 53) && (t0 != 54)) {
                                                        if ((t0 != 47) && (t0 != 48)) {
                                                            if (t0 != 31) {
                                                                FUN_0c03bffe(a4);
                                                            } else {
                                                                FUN_0c03d516(a4);
                                                            }
                                                        } else {
                                                            FUN_0c03d038(a4);
                                                        }
                                                    } else {
                                                        FUN_0c03ce1e(a4, a5, a6, a7);
                                                    }
                                                } else {
                                                    FUN_0c03cc70(a4, a5);
                                                }
                                            } else {
                                                FUN_0c03cb3a(a4);
                                            }
                                        } else {
                                            FUN_0c03c9e0(a4);
                                        }
                                    } else {
                                        FUN_0c03c900(a4);
                                    }
                                } else {
                                    FUN_0c03c75c(a4);
                                }
                            } else {
                                FUN_0c03c70c(a4);
                            }
                        } else {
                            FUN_0c03c65c(a4);
                        }
                    } else {
                        FUN_0c03c592(a4, a5, a6, a7);
                    }
                } else {
                    FUN_0c03cfb8(a4);
                }
            } else {
                FUN_0c03d020(a4);
            }
        } else {
            FUN_0c03c510(a4);
        }
    } else {
        FUN_0c03c336(a4);
    }
    t44 = *(int *)((a4 + 0x560));
    if ((t44 != 2) && ((t44 != 3) && ((t44 != 4) && ((t44 != 6) && ((t44 != 12) && ((t45 = *(int *)((a4 + 0x304)), (int)t45 > 0) && (t46 = *(int *)((a4 + 0x20C)), t46 != 0x200000))))))) {
    } else {
        FUN_0c03611c(a4);
        *(unsigned int *)((a4 + 0x554)) = 0x0;
    }
    *(unsigned int *)((a4 + 0x5A8)) = ((*(int *)((a4 + 0x5A8))) & 0x3);
    *(unsigned int *)((a4 + 0x5A4)) = ((*(int *)((a4 + 0x5A4))) & 0x3);
    *(unsigned int *)(((0x5A0 + a4) + 0x0)) = ((*(int *)((a4 + 0x5A0))) & 0x1);
    *(volatile int *)((a4 + 0x57C));
    *(unsigned int *)(((0x57C + a4) + 0x0)) = (FUN_0c0e5f1c(0x3));
    *(unsigned int *)((a4 + 0x580)) = ((*(int *)((a4 + 0x580))) & a4);
    *(unsigned int *)((a4 + 0x584)) = ((*(int *)((a4 + 0x584))) & a4);
    *(volatile int *)((a4 + 0x578));
    *(unsigned int *)(((0x578 + a4) + 0x0)) = (FUN_0c0e5f1c(a4));
    t62 = *(int *)((a4 + 0x560));
    if ((unsigned int)t62 < (unsigned int)0xE) {
        switch ((t62 << 1)) {
            case 0:
            {
                FUN_0c02dc30(a4);
    return;
            }
            case 2:
            {
                FUN_0c03afe8(a4);
    return;
            }
            case 4:
            {
                *(unsigned int *)((a4 + 0x57C)) = a4;
                FUN_0c03aaa2(a4);
    return;
            }
            case 6:
            {
                *(unsigned int *)((a4 + 0x57C)) = a4;
                FUN_0c03a834(a4);
    return;
            }
            case 8:
            {
                *(unsigned int *)((a4 + 0x57C)) = 0x4;
                FUN_0c03aaa2(a4);
    return;
            }
            case 10:
            {
                ((int (*)(int))(0xC03A998))(a4);
    return;
            }
            case 12:
            {
                ((int (*)(int))(0xC03A77A))(a4);
    return;
            }
            case 14:
            {
                return;
            }
            case 16:
            {
                ((int (*)(int))(0xC03B40C))(a4);
    return;
            }
            case 18:
            {
                ((int (*)(int))(0xC03B4DA))(a4);
    return;
            }
            case 20:
            {
                *(unsigned int *)((a4 + 0x4C8)) = 0xB;
                return;
            }
            case 22:
            {
                t63 = *(int *)((a4 + 0x48C));
                if ((t63 != 47) && (t63 != 48)) {
                    FUN_0c03afe8(a4);
    return;
                }
                ((int (*)(int))(0xC03B30C))(a4);
    return;
            }
            case 24:
            {
                ((int (*)(int))(0xC03AC0E))(a4);
    return;
            }
            default:
            {
                ((int (*)(int))(0xC03B568))(a4);
    return;
            }
        }
    }
}

float FUN_0c0ca9a8(int a4)
{
    int t0;
    int t18;
    int t36;
    int t40;
    float u43;
    float u44;
    float t46;
    float u47;
    float u49;
    float u51;
    float u54;
    int t60;
    int t67;
    float u69;
    float u70;
    float t72;
    float u73;
    float u75;
    float u77;
    float u80;
    int stk[54];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    t0 = *(int *)0xC23A258;
    R0 = (0xFFFFFF5C);
    R10 = ((unsigned short)((t0 << 8) << 1));
    F3 = ((float)t0);
    if (((int)t0 >= 0)) goto L_C0CA9E0;
    F3 = ((F3 + 4.2949673e+09f));
    L_C0CA9E0:;
    *(float *)(((int)stk + 4)) = ((F3 * 0.0f) - (float)(int)(F3 * 0.0f));
    R14 = (R4);
    F1 = (((F3 * 0.0f) - (float)(int)(F3 * 0.0f)));
    if (!((R4 != 0))) goto L_C0CAC04;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + ((int)stk + 4))) = *(struct mv3 *)((0x32C + (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC))))); }
    nlPushMatrix(0x0);
    nlGetMatrix((((int)stk + 4) + 0x58));
    FUN_0c0dc0b0(0x3);
    nlGetMatrix((((int)stk + 4) + 0x18));
    FUN_0c0dc0b0(0x1);
    nlMultiMatrixRevOrder((((int)stk + 4) + 0x18));
    R4 = ((R14 + 0x18));
    goto L_C0CABF4;
    L_C0CAC04:;
    return F0;
    L_C0CABF4:;
    t18 = *(int *)((R4 + 0x0));
    R4 = ((R4 + 0x4));
    R5 = (t18);
    if ((t18 == 0)) goto L_C0CABFE;
    if (((R5 & 0x80000000) == 0)) goto L_C0CAA90;
    R4 = (((R4 - 4) + 0x50));
    goto L_C0CABF4;
    L_C0CAA90:;
    *(float *)(((int)stk + 8)) = (float)R10;
    R11 = (0xC0D9E90);
    R12 = (0xC0DA410);
    R13 = (0x1);
    R6 = (0x10);
    F12 = (0.5f);
    F13 = (5.55999994f);
    F14 = (0.0489999987f);
    F15 = (0.0249999985f);
    if (((R5 & 0x10) == 0)) goto L_C0CAB3A;
    t36 = (*(int *)((R4 + 0x0)));
    R14 = ((R4 + 0x4));
    R4 = ((R4 + 0x4));
    R8 = t36;
    L_C0CAABA:;
    if ((((*(int *)((R14 + 0x0))) & R13) != 0)) goto L_C0CAAC4;
    R14 = ((R14 + 0x8));
    L_C0CAB32:;
    t40 = (R8 - 0x1) != 0;
    R8 = ((R8 - 0x1));
    if (t40) goto L_C0CAABA;
    L_C0CABC6:;
    R4 = (R14);
    goto L_C0CABF4;
    L_C0CAAC4:;
    u43 = *(float *)((R14 + 0x0));
    *(float *)(((int)stk + 16)) = (u43 * 2784.0f);
    u44 = *(float *)(((int)stk + 8));
    *(float *)(((int)stk + 12)) = (FUN_0c0da410((int)(u44 + (u43 * 2784.0f))));
    t46 = FUN_0c0d9e90((int)(u44 + (u43 * 2784.0f)));
    u47 = 0.0649999976f;
    u47 = u47 + F14 * t46;
    *(float *)((R14 + 0x10)) = u47;
    u49 = 0.934999943f;
    u49 = u49 + F14 * (*(float *)(((int)stk + 12)));
    *(float *)((R14 + 0xC)) = u49;
    u51 = (u49 * F13);
    u51 = u51 + F15 * (*(float *)((R14 + 0x0)));
    *(float *)((R14 + 0x18)) = (u51 + F12);
    u54 = ((*(float *)((R14 + 0x10))) * F13);
    u54 = u54 + F15 * (*(float *)((R14 + 0x8)));
    *(float *)((R14 + 0x1C)) = ((u54 + (*(float *)(((int)stk + 4)))) + F12);
    *(unsigned int *)(((R14 + 0x1C) + 0x0)) = ((*(int *)(((R14 + 0x1C) + 0x0))) | R13);
    R14 = ((R14 + 0x20));
    goto L_C0CAB32;
    L_C0CAB3A:;
    R6 = (0x8);
    if (((R5 & 0x8) == 0)) goto L_C0CABCA;
    t60 = *(int *)((R4 + 0x0));
    R14 = ((R4 + 0x4));
    R4 = ((R4 + 0x4));
    R8 = (((t60 << 1) + t60));
    L_C0CAB4A:;
    if ((((*(int *)((R14 + 0x0))) & R13) != 0)) goto L_C0CAB54;
    R14 = ((R14 + 0x8));
    L_C0CABC2:;
    t67 = (R8 - 0x1) != 0;
    R8 = ((R8 - 0x1));
    if (t67) goto L_C0CAB4A;
    goto L_C0CABC6;
    L_C0CAB54:;
    u69 = *(float *)((R14 + 0x0));
    *(float *)(((int)stk + 20)) = (u69 * 2784.0f);
    u70 = *(float *)(((int)stk + 8));
    *(float *)(((int)stk + 24)) = (FUN_0c0da410((int)(u70 + (u69 * 2784.0f))));
    t72 = FUN_0c0d9e90((int)(u70 + (u69 * 2784.0f)));
    u73 = 0.0649999976f;
    u73 = u73 + F14 * t72;
    *(float *)((R14 + 0x10)) = u73;
    u75 = 0.934999943f;
    u75 = u75 + F14 * (*(float *)(((int)stk + 24)));
    *(float *)((R14 + 0xC)) = u75;
    u77 = (u75 * F13);
    u77 = u77 + F15 * (*(float *)((R14 + 0x0)));
    *(float *)((R14 + 0x18)) = (u77 + F12);
    u80 = ((*(float *)((R14 + 0x10))) * F13);
    u80 = u80 + F15 * (*(float *)((R14 + 0x8)));
    *(float *)((R14 + 0x1C)) = ((u80 + (*(float *)(((int)stk + 4)))) + F12);
    *(unsigned int *)(((R14 + 0x1C) + 0x0)) = ((*(int *)(((R14 + 0x1C) + 0x0))) | R13);
    R14 = ((R14 + 0x20));
    goto L_C0CABC2;
    L_C0CABCA:;
    goto L_C0CABCA;
    L_C0CABFE:;
    R0 = ((nlPopMatrix(0x1)));
    goto L_C0CAC04;
}
