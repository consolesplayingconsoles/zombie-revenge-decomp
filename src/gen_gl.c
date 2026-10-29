/* Straight-line functions with calls and guards (batch gen_gl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c02286c(int, int, float, float);
extern int FUN_0c02a19a();
int FUN_0c03217c(int, int, int);
int FUN_0c03227c(int);
int FUN_0c032394(int);
int FUN_0c032590(int, float, float);
int FUN_0c032aa6(int);
int FUN_0c033530(int, int);
int FUN_0c03442c(int, int, int, int, int, int);
int FUN_0c034b1c(int, int);
int FUN_0c034fbc(int, int, int, int);
int FUN_0c036d86(int, int);
int FUN_0c0376f4(int);
int FUN_0c037954(int);
int FUN_0c037acc(int);
int FUN_0c0685a4(int, int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0909fc(int);
int FUN_0c090f70(int);
int FUN_0c0a6610(int, int, int);
int FUN_0c0a79fa(int, int, int);
extern int FUN_0c0be6ee();
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcca0(int);
int FUN_0c0dccf0(void);
int FUN_0c0de000(float);
int FUN_0c0de3c0(int, int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c038732(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c02704c(int a4, int a5, int a6, int a7);
int FUN_0c09d360(int a4, int a5, int a6, int a7);
int FUN_0c088fcc(int a4);

int FUN_0c038732(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t7;
    int t9;
    int t11;
    int t12;
    int t31;
    int t33;
    int t37;
    int t39;
    int t41;
    int t43;
    int t45;
    int t47;
    int t51;
    int t53;
    int t55;
    int t58;
    int t60;
    float u77;
    float u78;
    float u79;
    float u80;
    float u82;
    int t83;
    float u84;
    float u85;
    float u87;
    float u88;
    int t97;
    int t1;
    int t102;
    int stk[26];

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    if (((*(int *)((a4 + 0x48C))) == 21) && (t1 = *(int *)(((int)stk + 8)), t1 == 1)) {
        *(int *)((int)stk + 4) = ((*(short *)((a4 + 0x6E))));
        FUN_0c0da2e0();
        FUN_0c0da2e0();
        t102 = (FUN_0c033530(a4, a8));
    } else {
        t7 = FUN_0c0e1830(0xC03840E, 0x41C);
        FUN_0c0e19d0(t7);
        t9 = *(int *)(((int)stk + 16));
        t11 = *(int *)(((int)stk + 12));
        t12 = *(int *)((((*(int *)((a4 + 0xC0))) << 2) + 0xC195BE0));
        *(unsigned int *)((t7 + 0x21C)) = a10;
        *(unsigned int *)((t7 + 0x1DC)) = ((*(short *)((a4 + 0x6E))) - 32768);
        *(unsigned int *)((t7 + 0x1CC)) = a8;
        *(unsigned int *)((t7 + 0x414)) = (*(int *)((a4 + 0x5C8)));
        *(float *)((t7 + 0x3EC)) = 0.0272199996f;
        *(unsigned int *)((t7 + 0x238)) = (*(short *)((a9 + 0x0)));
        *(unsigned int *)((t7 + 0x23C)) = (*(short *)(((a9 + 0x2) + 0x0)));
        *(unsigned int *)((t7 + 0x240)) = (*(short *)((((a9 + 0x2) + 0x2) + 0x0)));
        *(float *)((t7 + 0x268)) = 0.0f;
        *(float *)((t7 + 0x26C)) = 0.0f;
        *(float *)((t7 + 0x270)) = 0.0f;
        *(float *)((t7 + 0x274)) = ((*(float *)((((((t9 << 1) + t9) << 2) + t12) + 0x0))) * (*(float *)((a4 + 0x274))));
        *(float *)((t7 + 0x278)) = ((*(float *)((((((t9 << 1) + t9) << 2) + t12) + 0x4))) * (*(float *)((a4 + 0x278))));
        *(float *)((t7 + 0x27C)) = ((*(float *)((((((t9 << 1) + t9) << 2) + t12) + 0x8))) * (*(float *)((a4 + 0x27C))));
        *(float *)((t7 + 0x280)) = ((*(float *)(((t12 + (((t11 << 1) + t11) << 2)) + 0x0))) * (*(float *)((a4 + 0x274))));
        *(float *)((t7 + 0x284)) = ((*(float *)(((t12 + (((t11 << 1) + t11) << 2)) + 0x4))) * (*(float *)((a4 + 0x278))));
        *(float *)((t7 + 0x288)) = ((*(float *)(((t12 + (((t11 << 1) + t11) << 2)) + 0x8))) * (*(float *)((a4 + 0x27C))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x18)) = *(struct mv3 *)(0xC0F5630); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x28C + t7)) = *(struct mv3 *)((((int)stk + 8) + 0x18)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x298 + t7)) = *(struct mv3 *)((((int)stk + 8) + 0x18)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x2A4 + t7)) = *(struct mv3 *)((((int)stk + 8) + 0x18)); }
        *(unsigned int *)((t7 + 0x400)) = (*(int *)(((int)stk + 8)));
        t31 = *(int *)(((int)stk + 8));
        if ((unsigned int)t31 < (unsigned int)0x10) {
            switch ((t31 << 1)) {
                case 0:
                case 4:
                {
                }
                    break;
                case 2:
                {
                    t33 = (*(short *)((a4 + 0x6E)));
                    *(int *)((int)stk + 4) = t33;
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((((FUN_0c0da2e0()) & 0x3800) + t33) - 8192);
                    *(int *)((int)stk + 4) = (0x3E8 + t7);
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((*(int *)(((0x3E8 + t7) + 0x0))) + ((FUN_0c0da2e0()) & 0x8000));
                    t37 = *(int *)((a4 + 0xBC));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x30)) = *(struct mv3 *)((((((((t37 << 1) + t37) << 2) << 2) << 2) + 0xC23F268) + 0xC)); }
                    *(float *)((t7 + 0x3F0)) = 1.19999993f;
                }
                    break;
                case 6:
                case 8:
                case 10:
                {
                    t39 = (*(short *)((a4 + 0x6E)));
                    *(int *)((int)stk + 4) = t39;
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((((FUN_0c0da2e0()) & 0x3800) + t39) + 0x2000);
                    t41 = *(int *)((a4 + 0xBC));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x30)) = *(struct mv3 *)((((((((t41 << 1) + t41) << 2) << 2) << 2) + 0xC23F268) + 0x24)); }
                    *(float *)((t7 + 0x3F0)) = 1.5f;
                }
                    break;
                case 12:
                case 14:
                case 16:
                {
                    t43 = (*(short *)((a4 + 0x6E)));
                    *(int *)((int)stk + 4) = t43;
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((((FUN_0c0da2e0()) & 0x3800) + t43) + 0xA000);
                    t45 = *(int *)((a4 + 0xBC));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x30)) = *(struct mv3 *)((((((((t45 << 1) + t45) << 2) << 2) << 2) + 0xC23F268) + 0x3C)); }
                    *(float *)((t7 + 0x3F0)) = 1.5f;
                }
                    break;
                case 18:
                case 20:
                case 26:
                {
                    t47 = (*(short *)((a4 + 0x6E)));
                    *(int *)((int)stk + 4) = t47;
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((((FUN_0c0da2e0()) & 0x3800) + t47) - 8192);
                    *(int *)((int)stk + 4) = (0x3E8 + t7);
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((*(int *)(((0x3E8 + t7) + 0x0))) + ((FUN_0c0da2e0()) & 0x8000));
                    t51 = *(int *)((a4 + 0xBC));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x30)) = *(struct mv3 *)((((((((t51 << 1) + t51) << 2) << 2) << 2) + 0xC23F268) + 0x48)); }
                    *(float *)((t7 + 0x3F0)) = (1.0f + 1.0f);
                }
                    break;
                case 22:
                case 24:
                {
                    t53 = (*(short *)((a4 + 0x6E)));
                    *(int *)((int)stk + 4) = t53;
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((((FUN_0c0da2e0()) & 0x3800) + t53) + 0x2000);
                    t55 = *(int *)((a4 + 0xBC));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x30)) = *(struct mv3 *)((((((((t55 << 1) + t55) << 2) << 2) << 2) + 0xC23F268) + 0x48)); }
                    *(float *)((t7 + 0x3F0)) = (*(float *)0xC038C28);
                }
                    break;
                default:
                {
                    t58 = (*(short *)((a4 + 0x6E)));
                    *(int *)((int)stk + 4) = t58;
                    *(unsigned int *)(((0x3E8 + t7) + 0x0)) = ((((FUN_0c0da2e0()) & 0x3800) + t58) + 0xA000);
                    t60 = *(int *)((a4 + 0xBC));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x30)) = *(struct mv3 *)((((((((t60 << 1) + t60) << 2) << 2) << 2) + 0xC23F268) + 0x60)); }
                    *(float *)((t7 + 0x3F0)) = (*(float *)0xC038C28);
                }
                    break;
            }
        }
        FUN_0c0376f4(t7);
        FUN_0c037954(t7);
        *(unsigned int *)((t7 + 0x3DC)) = 0xFFFFFFFF;
        FUN_0c037acc(t7);
        *(float *)(((((int)stk + 8) + 0x18) + 0x0)) = 0.0f;
        u77 = *(float *)0xC038C38;
        u78 = *(float *)0xC038C3C;
        u79 = *(float *)((t7 + 0x3F0));
        u80 = *(float *)0xC038C40;
        *(float *)(((int)stk + 4)) = (u80 / (u79 / (1.0f + 1.0f)));
        u82 = u77;
        u82 = u82 + u78 * (float)((FUN_0c0da2e0()) & 0x7);
        *(float *)(((((int)stk + 8) + 0x18) + 0x4)) = ((u80 / (u79 / (1.0f + 1.0f))) * u82);
        t83 = *(int *)((t7 + 0x1CC));
        u84 = *(float *)0xC038C44;
        u85 = *(float *)((t7 + 0x3F0));
        *(float *)(((int)stk + 4)) = (((float)t83 * u84) / (u85 / (1.0f + 1.0f)));
        u87 = u77;
        u87 = u87 + u78 * (float)((FUN_0c0da2e0()) & 0x7);
        u88 = (((float)t83 * u84) / (u85 / (1.0f + 1.0f)));
        *(float *)(((((int)stk + 8) + 0x18) + 0x8)) = (u88 * u87);
        *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x0)) = 0x0;
        *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x4)) = ((*(int *)((t7 + 0x3E8))) + 0x8000);
        *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x8)) = 0x0;
        FUN_0c0a6610((((int)stk + 8) + 0x18), (((int)stk + 8) + 0xC), (0x220 + t7));
        *(unsigned int *)(((0x22C + t7) + 0x0)) = ((FUN_0c0da2e0()) & 0x900);
        *(unsigned int *)((t7 + 0x230)) = 0x0;
        *(unsigned int *)(((0x234 + t7) + 0x0)) = ((FUN_0c0da2e0()) & 0x400);
        *(unsigned int *)((t7 + 0x410)) = 0x0;
        t97 = 0x380;
        if ((*(int *)((a4 + 0x380))) != 0) {
            t97 = (FUN_0c036d86(t7, (*(int *)(((*(int *)((a4 + 0x380))) + 0x0)))));
        }
        t102 = t97;
    }
    return t102;
}

int FUN_0c02704c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t134;
    int t113;
    int t87;
    int t1;
    int t9;
    int t11;
    int t26;
    int t36;
    int t27;
    int t28;
    int t29;
    int t30;
    int t34;
    int t77;
    int t41;
    int t57;
    int t53;
    int t66;
    int t89;
    int t90;
    int t93;
    int t94;
    float u116;
    float u117;
    float u118;
    int t125;
    int t104;
    int t78;
    int t38;
    int t23;
    int t12;
    int t21;
    int t69;
    int stk[25];

    t0 = *(int *)((a4 + 0x3A0));
    t134 = 0;
    if (t0 != 0) {
        t113 = 0;
        if (t0 != 1) {
            t87 = 0;
            if (t0 == 2) {
                t1 = *(int *)((a4 + 0x488));
                FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
                if ((*(int *)((t1 + 0xD8))) != 0) {
                    if ((*(int *)((t1 + 0xD8))) == 2) {
                        FUN_0c090f70(t1);
                        *(unsigned int *)((a4 + 0x534)) = 0x0;
                        t23 = (((int (*)(int))(FUN_0c02a19a))(a4));
                    } else {
                        t9 = *(int *)((((*(int *)((a4 + 0xE4))) << 2) + 0xC246FF0));
                        *(int *)((int)stk + 8) = (((int)stk + 12) + 0xC);
                        *(int *)((int)stk + 4) = (((int)stk + 8) + 0xC);
                        FUN_0c03442c(a4, t9, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0xC), (((int)stk + 12) + 0xC));
                        t11 = FUN_0c034b1c(a4, t9);
                        if ((t11 == 0) && (t12 = *(int *)(((int)stk + 12)), t12 == 0)) {
                            FUN_0c0909fc(t1);
                            *(unsigned int *)((a4 + 0x4C4)) = 0x6;
                            *(float *)((a4 + 0x34)) = (*(float *)((t9 + 0x390)));
                            *(unsigned int *)((a4 + 0x534)) = 0x0;
                            FUN_0c03217c(a4, (*(int *)((a4 + 0x54C))), (*(int *)((a4 + 0x544))));
                            *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                            t21 = 0x3A0;
                        } else {
                            FUN_0c0909fc(t1);
                            *(unsigned int *)((a4 + 0x534)) = 0x0;
                            t21 = (((int (*)(int))(FUN_0c02a19a))(a4));
                        }
                        t23 = t21;
                    }
                    t38 = t23;
                } else {
                    t26 = FUN_0c032394(a4);
                    t36 = 0;
                    if ((int)t26 >= 0) {
                        t27 = *(int *)((a4 + 0x3B0));
                        *(unsigned int *)((a4 + 0x3B0)) = (t27 + 0x1);
                        if ((int)(t27 + 0x1) > (int)0x3C) {
                            *(unsigned int *)((a4 + 0x534)) = 0x0;
                            t28 = ((int (*)(int))(FUN_0c02a19a))(a4);
                        } else {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
                            t29 = *(int *)((t1 + 0xBC));
                            t30 = *(int *)((t1 + 0x1E8));
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((((((((t29 << 1) + t29) << 2) << 2) << 2) + 0xC23F268) + (((t30 << 1) + t30) << 2))); }
                            FUN_0c01cdc2(t1);
                        }
                        t36 = (((int)(t27 + 0x1) > (int)0x3C));
                    } else {
                        *(unsigned int *)((a4 + 0x534)) = 0x0;
                        t34 = ((int (*)(int))(FUN_0c02a19a))(a4);
                        t36 = (0);
                    }
                    t38 = (FUN_0c02286c(a4, 0x28, -5.0f, 0.0199999996f));
                }
                t78 = t38;
                t87 = (t36);
            } else {
                t77 = 0;
                if (t0 == 3) {
                    t41 = FUN_0c03227c(a4);
                    t57 = t41;
                    if (t41 == 0) {
                        nlPushMatrix(0x0);
                        FUN_0c0dbda0((*(int *)((a4 + 0x3E4))));
                        *(float *)(((int)stk + 40)) = 0.0f;
                        *(float *)(((int)stk + 44)) = 0.0f;
                        *(float *)(((int)stk + 48)) = 0.0f;
                        FUN_0c0db470((((int)stk + 12) + 0x1C), (((int)stk + 12) + 0x10));
                        *(float *)(((((int)stk + 12) + 0x34) + 0x0)) = (*(float *)(((int)stk + 28)));
                        *(float *)((((((int)stk + 12) + 0x34) + 0x4) + 0x0)) = (*(float *)(((int)stk + 32)));
                        *(float *)((((((int)stk + 12) + 0x34) + 0x8) + 0x0)) = (*(float *)(((int)stk + 36)));
                        FUN_0c0a79fa((((int)stk + 12) + 0x28), ((((int)stk + 12) + 0x28) + 0x4), ((((int)stk + 12) + 0x28) + 0x8));
                        nlPopMatrix(0x1);
                        *(float *)((a4 + 0x34)) = (*(float *)(((((int)stk + 12) + 0x34) + 0x4)));
                        *(unsigned short *)((a4 + 0x6E)) = (*(int *)(((((int)stk + 12) + 0x28) + 0x4)));
                        t53 = *(int *)((a4 + 0x4F0));
                        *(unsigned int *)((a4 + 0x2C4)) = (unsigned short)(*(short *)(((*(int *)(((((t53 << 2) + t53) << 2) + 0xC1F8E44))) + 0x0)));
                        *(unsigned int *)((a4 + 0x2CC)) = 0x1;
                        *(unsigned int *)((a4 + 0x2D4)) = 0x0;
                        *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
                        t57 = 0x3A0;
                    }
                    t69 = t57;
                    t77 = ((t41 == 0));
                } else {
                    t66 = t0;
                    if (t0 == 4) {
                        *(unsigned int *)((a4 + 0x534)) = 0x0;
                        t66 = (((int (*)(int, int, int, int))(FUN_0c02a19a))(a4, a5, a6, a7));
                    }
                    t69 = t66;
                    t77 = ((t0 == 4));
                }
                t78 = t69;
                t87 = (t77);
            }
            t104 = t78;
            t113 = (t87);
        } else {
            FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
            t89 = FUN_0c032590(a4, 15.0f, 20.0f);
            if (t89 != 0) {
            } else {
                t90 = *(int *)((a4 + 0x488));
                *(unsigned int *)((a4 + 0x534)) = 0x9;
                *(unsigned int *)((t90 + 0xBC)) = (*(int *)((a4 + 0xBC)));
                *(unsigned int *)((t90 + 0x1EC)) = (*(int *)((a4 + 0x1EC)));
                *(unsigned int *)((t90 + 0x200)) = 0x1;
                *(unsigned int *)((t90 + 0x1E8)) = 0x0;
                *(unsigned int *)((t90 + 0x1F4)) = 0x1;
                *(unsigned int *)((t90 + 0x204)) = 0x0;
                *(float *)((t90 + 0x1E4)) = 8.0f;
                *(unsigned int *)((t90 + 0x1FC)) = 0x2;
                *(unsigned int *)((t90 + 0x1F8)) = 0x3;
                *(unsigned int *)((t90 + 0xD8)) = 0x0;
                t93 = *(int *)((t90 + 0xBC));
                t94 = *(int *)((t90 + 0x1E8));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t90 + 0x30)) = *(struct mv3 *)((((((((t93 << 1) + t93) << 2) << 2) << 2) + 0xC23F268) + (((t94 << 1) + t94) << 2))); }
                *(unsigned int *)((a4 + 0x3B0)) = 0x0;
                *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
            }
            t104 = (FUN_0c02286c(a4, 0x28, -5.0f, 0.0199999996f));
            t113 = ((t89 == 0));
        }
        t125 = t104;
        t134 = (t113);
    } else {
        FUN_0c034fbc(a4, 0x200, 0x1, 0x0);
        FUN_0c032aa6(a4);
        u116 = *(float *)((a4 + 0x60));
        u117 = *(float *)((a4 + 0x68));
        u118 = (u117 * u117);
        u118 = u118 + u116 * u116;
        if (!(0.099999994f > _builtin_sqrtf((u118 + 0.0f)))) {
        } else {
            *(unsigned int *)((a4 + 0x2C4)) = 0x558;
            *(unsigned int *)((a4 + 0x2CC)) = 0x1;
            *(unsigned int *)((a4 + 0x2D4)) = 0x2;
            *(unsigned int *)((a4 + 0x3A0)) = ((*(int *)((a4 + 0x3A0))) + 0x1);
        }
        t125 = (FUN_0c02286c(a4, 0x28, -5.0f, 0.0199999996f));
        t134 = ((0.099999994f > _builtin_sqrtf((u118 + 0.0f))));
    }
    return t125;
}

int FUN_0c09d360(int a4, int a5, int a6, int a7)
{
    int t18;
    int t25;
    int t31;
    int t34;
    float u37;
    float u40;
    float u43;
    int t44;
    int t54;
    int t55;
    float u56;
    float u78;
    int t88;
    float u52;
    int stk[18];

    *(unsigned int *)(((int)stk + 12)) = (*(int *)((a4 + 0x30)));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    *(unsigned int *)(((int)stk + 20)) = 0x1;
    FUN_0c0685a4(a4, a5, a6, a7);
    if ((*(int *)0xC249720) == 0) {
    } else {
        nlPushMatrix(0x0);
        FUN_0c0dbda0(((*(int *)(((*(int *)(((int)stk + 12))) + 0x3E4))) + 0x200));
        FUN_0c0dcca0(0xC10C51C);
        FUN_0c0dccf0();
        nlRotateAY((*(short *)(((*(int *)(((int)stk + 4))) + 0x3CE))));
        nlRotateAX((*(short *)(((*(int *)(((int)stk + 4))) + 0x3D0))));
        nlScale(2.98999977f, 2.98999977f, 1.0f);
        if (0x0 != 0) {
            t18 = 0x0;
            for (;;) {
                FUN_0c0de000(2.98999977f);
                FUN_0c0c47ae(0x295);
                t18 = (t18 + 0x1);
                if ((int)t18 >= 0) {
                    break;
                }
            }
        }
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x3;
        for (;;) {
            t25 = *(int *)((a4 + 0x38));
            *(unsigned int *)((a4 + 0x38)) = (t25 + 0x1);
            if ((unsigned int)(*(int *)((a4 + 0x38))) >= (unsigned int)0x190) {
                *(unsigned int *)((a4 + 0x38)) = 0x0;
            }
            FUN_0c0dbda0(((*(int *)(((*(int *)(((int)stk + 12))) + 0x3E4))) + 0x1C0));
            t31 = FUN_0c0da2e0();
            nlRotateAY((t31 << 1));
            nlGetMatrix((((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C)) + 0x18));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C))) = *(struct mv3 *)(0xC10C510); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C)) + 0xC)) = *(struct mv3 *)(0xC10C4EC); }
            *(float *)((((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C)) + 0x58)) = 5.079f;
            *(unsigned int *)((((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C)) + 0x5C)) = 0x8;
            t34 = FUN_0c0da2e0();
            u37 = (*(float *)((((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C)) + 0x0)));
            u37 = u37 + ((float)(t34 & 0xFFF) * 0.00024420023f) * (*(float *)0xC10C4EC);
            *(float *)((((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C)) + 0x0)) = u37;
            u40 = (*(float *)((((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C)) + 0x4)));
            u40 = u40 + ((float)(t34 & 0xFFF) * 0.00024420023f) * (*(float *)0xC10C4F0);
            *(float *)((((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C)) + 0x4)) = u40;
            u43 = (*(float *)((((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C)) + 0x8)));
            u43 = u43 + ((float)(t34 & 0xFFF) * 0.00024420023f) * (*(float *)0xC10C4F4);
            *(float *)((((((((((t25 + 0x1) - 1) << 1) + ((t25 + 0x1) - 1)) << 2) << 2) << 1) + (a4 + 0x3C)) + 0x8)) = u43;
            t44 = *(int *)(((int)stk + 8));
            *(unsigned int *)(((int)stk + 8)) = (t44 - 1);
            if ((t44 - 1) != 0) continue;
            break;
        }
        nlPopMatrix(0x1);
        u52 = 0.00024420023f;
    }
    nlPushMatrix(0x0);
    t54 = 0x0;
    t55 = (a4 + 0x3C);
    u56 = u52;
    for (;;) {
        if ((int)(*(int *)((t55 + 0x5C))) > 0) {
            *(float *)((t55 + 0x58)) = ((*(float *)((t55 + 0x58))) + -0.153999999f);
            *(unsigned int *)(((int)stk + 20)) = 0x0;
            u56 = (float)(*(int *)((t55 + 0x5C)));
            u56 = (u56 * 0.125f);
            *(float *)((t55 + 0xC)) = ((*(float *)((t55 + 0xC))) * (*(float *)0xC10C4F8));
            *(float *)((t55 + 0x10)) = ((*(float *)((t55 + 0x10))) * (*(float *)0xC10C4FC));
            *(float *)((t55 + 0x14)) = ((*(float *)((t55 + 0x14))) * (*(float *)0xC10C500));
            nlAddVector((t55 + 0xC), 0xC10C504);
            nlAddVector(t55, (t55 + 0xC));
            FUN_0c0dbda0((t55 + 0x18));
            FUN_0c0dcca0(t55);
            FUN_0c0dccf0();
            nlRotateAY((*(short *)(((*(int *)(((int)stk + 4))) + 0x3CE))));
            nlRotateAX((*(short *)(((*(int *)(((int)stk + 4))) + 0x3CC))));
            nlRotateAZ((t54 * 0x3723));
            u78 = *(float *)((t55 + 0x58));
            *(float *)(((int)stk + 16)) = u78;
            nlScale(u78, u78, 1.0f);
            FUN_0c0de000((*(float *)((t55 + 0x58))));
            FUN_0c0848bc((u56 * 0.309999973f), (u56 * 0.319999993f), (u56 * 1.0f));
            FUN_0c0c47ae(0x295);
            *(unsigned int *)((t55 + 0x5C)) = ((*(int *)((t55 + 0x5C))) - 1);
        }
        t54 = (t54 + 0x1);
        t55 = (t55 + 0x60);
        if ((unsigned int)t54 >= (unsigned int)0x190) {
            break;
        }
    }
    nlPopMatrix(0x1);
    t88 = FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    if ((*(int *)(((int)stk + 20))) != 0) {
        return FUN_0c0e19f2();
    }
    return t88;
}

int FUN_0c088fcc(int a4)
{
    int t1;
    int t2;
    int t8;
    int t9;
    int t10;
    float u11;
    int t12;
    int t13;
    int t14;
    int t16;
    float u17;
    int t20;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    float t28;
    int t29;
    int t30;
    int t31;
    float t32;
    int t33;
    int t35;
    int t37;
    float u39;
    int t40;
    float u42;
    int t44;
    int t46;
    float u54;
    float u55;
    float t57;
    float u58;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t97;
    int t101;
    int t109;
    int t4;
    int t5;
    int t119;
    float u71;
    float u73;
    float u64;
    int t113;
    int stk[40];

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    t2 = *(int *)((a4 + 0x120));
    *(unsigned int *)(((int)stk + 28)) = ((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC23F268);
    *(unsigned int *)(((int)stk + 40)) = ((a4 + 0x58) + 0x28);
    *(unsigned int *)(((int)stk + 48)) = ((0x80 + a4) + 0x28);
    *(unsigned int *)(((int)stk + 36)) = ((0xA8 + a4) + 0x28);
    *(unsigned int *)(((int)stk + 32)) = (0xF8 + a4);
    *(unsigned int *)(((int)stk + 12)) = ((0xF8 + a4) + 0x28);
    *(unsigned int *)(((int)stk + 44)) = 0xA;
    if (((*(int *)((a4 + 0x128))) == 0) && (t4 = *(int *)((a4 + 0x120)), t5 = *(int *)((0xC247030 + (t4 << 2))), t5 == 8)) {
        t119 = t5;
    } else {
        nlPushMatrix(0x0);
        FUN_0c0de3c0(0x4, 0x1);
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 12) + 0x34);
        *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 12) + 0x34) + 0x18);
        t8 = (a4 + 0x58);
        for (;;) {
            *(unsigned int *)(((int)stk + 52)) = (((int)stk + 12) + 0x34);
            t8 = (t8 - 4);
            *(unsigned int *)(((int)stk + 60)) = 0xC10A984;
            t9 = *(int *)(((int)stk + 32));
            t10 = *(int *)((t8 + 0x0));
            *(unsigned int *)(((int)stk + 32)) = (t9 - 4);
            u11 = *(float *)(((t9 - 4) + 0x0));
            *(float *)(((int)stk + 8)) = u11;
            t12 = *(int *)(((int)stk + 36));
            *(unsigned int *)(((int)stk + 36)) = (t12 - 4);
            *(int *)((int)stk + 4) = (t12 - 4);
            t13 = FUN_0c0da2e0();
            t14 = *(int *)(((t12 - 4) + 0x0));
            *(unsigned int *)(((t12 - 4) + 0x0)) = (t14 + ((t13 & 0x1FF) + 0x400));
            t16 = *(int *)(((int)stk + 12));
            u17 = 0.899999976f;
            u17 = u17 + 0.099999994f * (FUN_0c0da410((t14 + ((t13 & 0x1FF) + 0x400))));
            *(unsigned int *)(((int)stk + 12)) = (t16 - 4);
            *(unsigned int *)(((int)stk + 24)) = ((short)((unsigned int)(*(int *)(((t16 - 4) + 0x0))) >> 16) + 0x1B8);
            *(unsigned int *)(((int)stk + 56)) = 0x4;
            *(int *)((int)stk + 8) = (t16 - 4);
            t20 = (*(int *)(((t16 - 4) + 0x0)));
            *(int *)((int)stk + 4) = t20;
            *(unsigned int *)(((t16 - 4) + 0x0)) = ((((FUN_0c0da2e0()) + t20) + 0x4000) & 0x1FFFFF);
            for (;;) {
                t22 = *(int *)(((int)stk + 52));
                *(unsigned int *)(((int)stk + 52)) = (t22 + 0xC);
                t23 = *(int *)(((int)stk + 60));
                *(unsigned int *)(((int)stk + 60)) = (t23 + 0xC);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((t22 + 0xC) - 12)) = *(struct mv3 *)(((t23 + 0xC) - 12)); }
                t24 = *(int *)(((int)stk + 56));
                *(unsigned int *)(((int)stk + 56)) = (t24 - 1);
                if ((t24 - 1) == 0) {
                    break;
                }
            }
            t25 = *(int *)(((int)stk + 40));
            *(unsigned int *)(((int)stk + 40)) = (t25 - 4);
            *(int *)((int)stk + 8) = (t25 - 4);
            t26 = FUN_0c0da2e0();
            t27 = *(int *)(((t25 - 4) + 0x0));
            *(unsigned int *)(((t25 - 4) + 0x0)) = (t27 + ((t26 & 0xFFF) + 0x200));
            t28 = FUN_0c0da410((t27 + ((t26 & 0xFFF) + 0x200)));
            t29 = *(int *)(((int)stk + 48));
            *(unsigned int *)(((int)stk + 48)) = (t29 - 4);
            *(int *)((int)stk + 8) = (t29 - 4);
            t30 = FUN_0c0da2e0();
            t31 = *(int *)(((t29 - 4) + 0x0));
            *(unsigned int *)(((t29 - 4) + 0x0)) = (t31 + ((unsigned char)t30 + 0x100));
            t32 = FUN_0c0da410((t31 + ((unsigned char)t30 + 0x100)));
            t33 = *(int *)(((int)stk + 16));
            *(float *)((t33 + 0x0)) = ((*(float *)((t33 + 0x0))) + (t32 * 1.0f));
            t35 = *(int *)(((int)stk + 20));
            *(float *)((t35 + 0x0)) = ((*(float *)((t35 + 0x0))) + (t32 * 1.0f));
            t37 = *(int *)(((int)stk + 16));
            u39 = ((t28 * 0.099999994f) + 0.899999976f);
            *(float *)((t37 + 0x4)) = ((*(float *)((t37 + 0x4))) * u39);
            t40 = *(int *)(((int)stk + 20));
            u42 = (0.899999976f - (t28 * 0.099999994f));
            *(float *)((t40 + 0x4)) = ((*(float *)((t40 + 0x4))) * u42);
            t44 = ((int (*)(int, int, float))(FUN_0c0be6ee))((*(int *)(((int)stk + 24))), (((int)stk + 12) + 0x34), (t32 * 1.0f));
            FUN_0c0dbda0((0x2AC + t1));
            t46 = *(int *)(((int)stk + 28));
            *(unsigned int *)(((int)stk + 28)) = (t46 + 0xC);
            FUN_0c0dcca0(((t46 + 0xC) - 12));
            nlRotateAY((*(short *)((t1 + 0x3CE))));
            nlRotateAX((*(short *)((t1 + 0x3CC))));
            if ((int)t10 < (int)0x2AAA) {
                u54 = (u11 * u17);
                u55 = ((FUN_0c0da410((t10 << 1))) * 1.79999995f);
                *(unsigned int *)((t8 + 0x0)) = (t10 + 0x111);
                u71 = (u54 * u55);
                u73 = (u11 * u17);
            } else {
                if ((int)(*(int *)((a4 + 0x124))) < (int)0xA) {
                    t57 = FUN_0c0da410(t10);
                    u58 = (u11 * u17);
                    *(unsigned int *)((t8 + 0x0)) = (t10 - 0x666);
                    u64 = (u58 * t57);
                } else {
                    *(unsigned int *)((t8 + 0x0)) = 0x3FFF;
                    u64 = (u11 * u17);
                }
                u71 = (u11 * u17);
                u73 = u64;
            }
            nlScale(u73, u71, u73);
            FUN_0c0de000((u73 + (1.0f + 1.0f)));
            FUN_0c0c475c((*(int *)(((int)stk + 24))), 0.98999995f);
            t79 = *(int *)(((int)stk + 44));
            *(unsigned int *)(((int)stk + 44)) = (t79 - 1);
            if ((t79 - 1) != 0) continue;
            break;
        }
        t80 = 0x1B8;
        t81 = 0x20;
        for (;;) {
            t82 = t80;
            t80 = (t80 + 0x1);
            t83 = ((int (*)(int, int))(FUN_0c0be6ee))(t82, 0xC10A984);
            t81 = (t81 - 0x1);
            if (t81 == 0) {
                break;
            }
        }
        FUN_0c0de3c0(0x4, 0x5);
        nlPopMatrix(0x1);
        if ((*(int *)((((*(int *)((a4 + 0x120))) << 2) + 0xC247030))) == 0) {
            FUN_0c0e19f2();
        }
        if ((*(int *)((a4 + 0x128))) != 0) {
            t97 = *(int *)((a4 + 0x124));
            *(unsigned int *)((a4 + 0x124)) = (t97 - 1);
            t101 = 0x124;
            if ((int)(t97 - 1) <= 0) {
                *(unsigned int *)(((*(int *)((((*(int *)((a4 + 0x120))) << 2) + 0xC246FF0))) + 0x380)) = 0x0;
                t101 = (FUN_0c0e19f2());
            }
            t113 = t101;
        } else {
            t109 = 0x304;
            if ((int)(*(int *)(((*(int *)((((*(int *)((a4 + 0x120))) << 2) + 0xC246FF0))) + 0x304))) <= 0) {
                *(unsigned int *)((a4 + 0x128)) = 0x1;
                *(unsigned int *)((a4 + 0x124)) = 0x3C;
                t109 = 0x124;
            }
            t113 = t109;
        }
        t119 = t113;
    }
    return t119;
}
