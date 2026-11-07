/* Straight-line functions with calls and guards (batch gen_gm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
float FUN_0c01f1b8(int, int);
int FUN_0c0376f4(int);
int FUN_0c037954(int);
int FUN_0c037c66(int);
int FUN_0c037e44(int);
int FUN_0c037ee8(int);
int FUN_0c03f4bc(int);
int FUN_0c041dd0(int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c086bda(int, float);
int FUN_0c0a4bb2(int);
int FUN_0c0a6688(int, int, int);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0be338(int, int);
extern int FUN_0c0be8d2();
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e1830(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(int);
int FUN_0c0e6248(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c053fac(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c017aca(int a4, int a5, int a6);
int FUN_0c03840e(int a4, int a5, int a6, int a7);
int FUN_0c02c6ee(int a4, float f4);
int FUN_0c087510(int a4);
int FUN_0c0635ec(int a4, int a5);
int FUN_0c05e158(int a4, int a5, int a6);
int FUN_0c04105c(int a4);


int FUN_0c017aca(int a4, int a5, int a6)
{
    int t3;
    int t4;
    int t6;
    int t8;
    int t9;
    int t186;
    int t187;
    int t188;
    float u191;
    int t11;
    int t14;
    int t18;
    int t23;
    int t28;
    int t34;
    int t68;
    int t75;
    int t112;
    int t117;
    int t156;
    int t159;
    int t168;
    int t173;
    int t0;
    int t1;
    int t2;
    int t5;
    float u7;
    int t189;
    int t190;
    int t181;
    int t182;
    int t183;
    float u184;
    int t64;
    int t65;
    int t108;
    int t109;
    int t151;
    int t152;
    int t153;
    int stk[18];

    t3 = 0xC0F5240;
    t4 = a6;
    t6 = 0xC0F5240;
    for (;;) {
        t8 = *(short *)((t6 + 0x14));
        if (t8 != -1) {
            t1 = 0xC23ECE4;
            t9 = *(short *)((t6 + 0x14));
            t4 = (*(int *)((t1 + 0x0)));
            t0 = 0xE;
            t186 = t0;
            t187 = t1;
            t188 = t2;
            u191 = u7;
            if ((unsigned int)t9 >= (unsigned int)t0) {
                t189 = t3;
                t190 = t4;
            } else {
                t0 = (t9 << 1);
                switch (t0) {
                    case 0:
                    {
                        t3 = 0xC018450;
                        t11 = FUN_0c0e19aa(0xC018450, 0xB4, t4);
                        t5 = t11;
                        t3 = t11;
                        FUN_0c0e19d0(t3);
                        t2 = 0xC0E61D4;
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                        t0 = 0x78;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t181 = t0;
                        t182 = t1;
                        t183 = 0xC0E61D4;
                    }
                        break;
                    case 2:
                    {
                        t3 = 0xC0186A4;
                        t14 = FUN_0c0e19aa(t3, 0xB4, t4);
                        t5 = t14;
                        t3 = t14;
                        FUN_0c0e19d0(t3);
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                        t1 = t6;
                        t2 = 0xC0E6248;
                        t0 = t5;
                        t1 = (t1 + 0xC);
                        t0 = (t0 + 0x60);
                        FUN_0c0e6248();
                        t0 = 0x78;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t181 = t0;
                    }
                        break;
                    case 4:
                    {
                        t3 = 0xC0186EC;
                        t18 = FUN_0c0e19aa(t3, 0xB4, t4);
                        t5 = t18;
                        t3 = t18;
                        FUN_0c0e19d0(t3);
                        t2 = 0xC0E61D4;
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                        t1 = t6;
                        t2 = 0xC0E6248;
                        t0 = t5;
                        t1 = (t1 + 0xC);
                        t0 = (t0 + 0x60);
                        FUN_0c0e6248();
                        t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                        u7 = (float)t2;
                        u7 = (u7 * 0.099999994f);
                        *(float *)((t5 + 0x74)) = u7;
                        t0 = 0x78;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t181 = t0;
                        t183 = t2;
                        u184 = u7;
                    }
                        break;
                    case 6:
                    {
                        t3 = 0xC01874E;
                        t23 = FUN_0c0e19aa(t3, 0xB4, t4);
                        t5 = t23;
                        t3 = t23;
                        FUN_0c0e19d0(t3);
                        t2 = 0xC0E61D4;
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                        t1 = t6;
                        t2 = 0xC0E6248;
                        t0 = t5;
                        t1 = (t1 + 0xC);
                        t0 = (t0 + 0x60);
                        FUN_0c0e6248();
                        t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                        u7 = (float)t2;
                        u7 = (u7 * 0.099999994f);
                        *(float *)((t5 + 0x74)) = u7;
                        t0 = 0x78;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t181 = t0;
                        t183 = t2;
                        u184 = u7;
                    }
                        break;
                    case 8:
                    {
                        t3 = 0xC0187CC;
                        t28 = FUN_0c0e19aa(t3, 0x244, t4);
                        t5 = t28;
                        t3 = t28;
                        FUN_0c0e19d0(t3);
                        t2 = 0xC0E61D4;
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                        t0 = 0x6E;
                        t0 = (t0 + t5);
                        *(unsigned short *)((t0 + 0x0)) = (*(short *)((t6 + 0xE)));
                        t0 = 0x224;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t0 = 0x1DC;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x10)));
                        t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                        u7 = (float)t2;
                        u7 = (u7 * 0.099999994f);
                        *(float *)((t5 + 0x1E4)) = u7;
                        t181 = t0;
                        t182 = t1;
                        t183 = t2;
                        u184 = u7;
                    }
                        break;
                    case 10:
                    {
                        t3 = 0xC01885A;
                        t34 = FUN_0c0e19aa(t3, 0x244, t4);
                        t5 = t34;
                        t3 = t34;
                        FUN_0c0e19d0(t3);
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                        t0 = 0x70;
                        t0 = (t0 + t5);
                        *(unsigned short *)((t0 + 0x0)) = (*(short *)((t6 + 0x10)));
                        t0 = 0x224;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t0 = 0x1DC;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0xC)));
                        t2 = (*(int *)((t6 + 0x18)));
                        if (t2 != 0) {
                            t2 = (*(int *)((t6 + 0x18)));
                            *(unsigned int *)(((int)stk + 4)) = t2;
                            t3 = 0x0;
                            nlPushMatrix(t3);
                            t2 = 0xC0DCCC0;
                            nlUnitMatrix();
                            t2 = 0xC0DCC70;
                            FUN_0c0dcc70((*(float *)((t5 + 0x30))), (*(float *)((t5 + 0x34))), (*(float *)((t5 + 0x38))));
                            t2 = 0xC0DC950;
                            t3 = (*(short *)((t5 + 0x70)));
                            nlRotateAZ(t3);
                            t1 = (*(int *)(((int)stk + 4)));
                            t3 = ((int)stk + 4);
                            u7 = (*(float *)((t1 + 0x0)));
                            *(float *)(((int)stk + 20)) = u7;
                            t2 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t2 + 0x4)));
                            *(float *)(((int)stk + 24)) = u7;
                            t2 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t2 + 0x8)));
                            t2 = 0xC0DB470;
                            *(float *)(((int)stk + 28)) = u7;
                            t3 = (t3 + 0x10);
                            FUN_0c0db470(t3, (((int)stk + 4) + 0x4));
                            t1 = t5;
                            u7 = (*(float *)(((int)stk + 8)));
                            t1 = (t1 + 0x60);
                            t2 = t5;
                            *(float *)((t1 + 0x0)) = u7;
                            t2 = (t2 + 0x64);
                            u7 = (*(float *)(((int)stk + 12)));
                            *(float *)((t2 + 0x0)) = u7;
                            t2 = t5;
                            u7 = (*(float *)(((int)stk + 16)));
                            t2 = (t2 + 0x68);
                            *(float *)((t2 + 0x0)) = u7;
                            t2 = 0xC0DC4C0;
                            t3 = 0x1;
                            nlPopMatrix(t3);
                            t1 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t1 + 0xC)));
                        } else {
                            t1 = t5;
                            t2 = 0xC0E61D4;
                            t0 = t5;
                            t1 = (t1 + 0x30);
                            t0 = (t0 + 0x60);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                            t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                            u7 = (float)t2;
                            u7 = (u7 * 0.099999994f);
                            t64 = t0;
                            t65 = t2;
                        }
                        t0 = t64;
                        t2 = t65;
                        *(float *)((t5 + 0x1E4)) = u7;
                        t181 = t0;
                        t182 = t1;
                        t183 = t2;
                        u184 = u7;
                    }
                        break;
                    case 12:
                    {
                        t3 = 0xC018918;
                        t68 = FUN_0c0e19aa(t3, 0x244, t4);
                        t5 = t68;
                        t3 = t68;
                        FUN_0c0e19d0(t3);
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                        t0 = 0x6C;
                        t0 = (t0 + t5);
                        *(unsigned short *)((t0 + 0x0)) = (*(short *)((t6 + 0xC)));
                        t1 = 0x6E;
                        t1 = (t1 + t5);
                        t0 = 0x70;
                        *(unsigned short *)((t1 + 0x0)) = (*(short *)((t6 + 0xE)));
                        t0 = (t0 + t5);
                        *(unsigned short *)((t0 + 0x0)) = (*(short *)((t6 + 0x10)));
                        t0 = 0x224;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                        u7 = (float)t2;
                        u7 = (u7 * 0.099999994f);
                        *(float *)((t5 + 0x1E4)) = u7;
                        t181 = t0;
                        t182 = t1;
                        t183 = t2;
                        u184 = u7;
                    }
                        break;
                    case 14:
                    {
                        t3 = 0xC018A38;
                        t75 = FUN_0c0e19aa(t3, 0x244, t4);
                        t5 = t75;
                        t3 = t75;
                        FUN_0c0e19d0(t3);
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                        t1 = t6;
                        t2 = 0xC0E6248;
                        t0 = t5;
                        t1 = (t1 + 0xC);
                        t0 = (t0 + 0x6C);
                        FUN_0c0e6248();
                        t0 = 0x224;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t2 = (*(int *)((t6 + 0x18)));
                        if (t2 != 0) {
                            t2 = (*(int *)((t6 + 0x18)));
                            *(unsigned int *)(((int)stk + 4)) = t2;
                            t3 = 0x0;
                            nlPushMatrix(t3);
                            t2 = 0xC0DCCC0;
                            nlUnitMatrix();
                            t2 = 0xC0DCC70;
                            FUN_0c0dcc70((*(float *)((t5 + 0x30))), (*(float *)((t5 + 0x34))), (*(float *)((t5 + 0x38))));
                            t2 = 0xC0DC950;
                            t3 = (*(short *)((t5 + 0x70)));
                            nlRotateAZ(t3);
                            t2 = 0xC0DC890;
                            t3 = (*(short *)((t5 + 0x6E)));
                            nlRotateAY(t3);
                            t2 = 0xC0DC6E0;
                            t3 = (*(short *)((t5 + 0x6C)));
                            nlRotateAX(t3);
                            t1 = (*(int *)(((int)stk + 4)));
                            t3 = ((int)stk + 4);
                            u7 = (*(float *)((t1 + 0x0)));
                            *(float *)(((int)stk + 20)) = u7;
                            t2 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t2 + 0x4)));
                            *(float *)(((int)stk + 24)) = u7;
                            t2 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t2 + 0x8)));
                            t2 = 0xC0DB470;
                            *(float *)(((int)stk + 28)) = u7;
                            t3 = (t3 + 0x10);
                            FUN_0c0db470(t3, (((int)stk + 4) + 0x4));
                            t1 = t5;
                            u7 = (*(float *)(((int)stk + 8)));
                            t1 = (t1 + 0x60);
                            t2 = t5;
                            *(float *)((t1 + 0x0)) = u7;
                            t2 = (t2 + 0x64);
                            u7 = (*(float *)(((int)stk + 12)));
                            *(float *)((t2 + 0x0)) = u7;
                            t2 = t5;
                            u7 = (*(float *)(((int)stk + 16)));
                            t2 = (t2 + 0x68);
                            *(float *)((t2 + 0x0)) = u7;
                            t2 = 0xC0DC4C0;
                            t3 = 0x1;
                            nlPopMatrix(t3);
                            t1 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t1 + 0xC)));
                        } else {
                            t1 = t5;
                            t2 = 0xC0E61D4;
                            t0 = t5;
                            t1 = (t1 + 0x30);
                            t0 = (t0 + 0x60);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                            t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                            u7 = (float)t2;
                            u7 = (u7 * 0.099999994f);
                            t108 = t0;
                            t109 = t2;
                        }
                        t0 = t108;
                        t2 = t109;
                        *(float *)((t5 + 0x228)) = u7;
                        *(float *)((t5 + 0x1E4)) = 1.0f;
                        t181 = t0;
                        t182 = t1;
                        t183 = t2;
                        u184 = u7;
                    }
                        break;
                    case 16:
                    {
                        t3 = 0xC01898C;
                        t112 = FUN_0c0e19aa(0xC01898C, 0x244, t4);
                        t5 = t112;
                        t3 = t112;
                        FUN_0c0e19d0(t3);
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                        t1 = t6;
                        t2 = 0xC0E6248;
                        t0 = t5;
                        t1 = (t1 + 0xC);
                        t0 = (t0 + 0x6C);
                        FUN_0c0e6248();
                        t0 = 0x224;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                        u7 = (float)t2;
                        u7 = (u7 * 0.099999994f);
                        *(float *)((t5 + 0x1E4)) = u7;
                        t181 = t0;
                        t183 = t2;
                        u184 = u7;
                    }
                        break;
                    case 18:
                    {
                        t3 = 0xC018C7C;
                        t117 = FUN_0c0e19aa(t3, 0x244, t4);
                        t5 = t117;
                        t3 = t117;
                        FUN_0c0e19d0(t3);
                        t2 = 0xC0E61D4;
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                        t1 = t6;
                        t2 = 0xC0E6248;
                        t0 = t5;
                        t1 = (t1 + 0xC);
                        t0 = (t0 + 0x6C);
                        FUN_0c0e6248();
                        t0 = 0x224;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                        u7 = (float)t2;
                        u7 = (u7 * 0.099999994f);
                        *(float *)((t5 + 0xB4)) = u7;
                        t2 = (*(int *)((t6 + 0x18)));
                        if (t2 != 0) {
                            t2 = (*(int *)((t6 + 0x18)));
                            *(unsigned int *)(((int)stk + 4)) = t2;
                            t3 = 0x0;
                            nlPushMatrix(t3);
                            t2 = 0xC0DCCC0;
                            nlUnitMatrix();
                            t2 = 0xC0DCC70;
                            FUN_0c0dcc70((*(float *)((t5 + 0x30))), (*(float *)((t5 + 0x34))), (*(float *)((t5 + 0x38))));
                            t2 = 0xC0DC950;
                            t3 = (*(short *)((t5 + 0x70)));
                            nlRotateAZ(t3);
                            t2 = 0xC0DC890;
                            t3 = (*(short *)((t5 + 0x6E)));
                            nlRotateAY(t3);
                            t2 = 0xC0DC6E0;
                            t3 = (*(short *)((t5 + 0x6C)));
                            nlRotateAX(t3);
                            t1 = (*(int *)(((int)stk + 4)));
                            t3 = ((int)stk + 4);
                            u7 = (*(float *)((t1 + 0x0)));
                            *(float *)(((int)stk + 20)) = u7;
                            t2 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t2 + 0x4)));
                            *(float *)(((int)stk + 24)) = u7;
                            t2 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t2 + 0x8)));
                            t2 = 0xC0DB470;
                            *(float *)(((int)stk + 28)) = u7;
                            t3 = (t3 + 0x10);
                            FUN_0c0db470(t3, (((int)stk + 4) + 0x4));
                            t1 = t5;
                            u7 = (*(float *)(((int)stk + 8)));
                            t1 = (t1 + 0x60);
                            t2 = t5;
                            *(float *)((t1 + 0x0)) = u7;
                            t2 = (t2 + 0x64);
                            u7 = (*(float *)(((int)stk + 12)));
                            *(float *)((t2 + 0x0)) = u7;
                            t2 = t5;
                            u7 = (*(float *)(((int)stk + 16)));
                            t2 = (t2 + 0x68);
                            *(float *)((t2 + 0x0)) = u7;
                            t2 = 0xC0DC4C0;
                            t3 = 0x1;
                            nlPopMatrix(t3);
                            t1 = (*(int *)(((int)stk + 4)));
                            u7 = (*(float *)((t1 + 0xC)));
                            *(float *)((t5 + 0x228)) = u7;
                            t152 = t1;
                        } else {
                            t151 = t0;
                            t153 = t2;
                        }
                        t0 = t151;
                        t1 = t152;
                        t2 = t153;
                        *(float *)((t5 + 0x1E4)) = 1.0f;
                        t181 = t0;
                        t182 = t1;
                        t183 = t2;
                        u184 = u7;
                    }
                        break;
                    case 20:
                    {
                        t3 = 0xC018480;
                        t156 = FUN_0c0e19aa(t3, 0xB4, t4);
                        t5 = t156;
                        t3 = t156;
                        FUN_0c0e19d0(t3);
                        t2 = 0xC0E61D4;
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                        t0 = 0x78;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t181 = t0;
                        t182 = t1;
                        t183 = 0xC0E61D4;
                    }
                        break;
                    case 22:
                    {
                        t3 = 0xC0184E0;
                        t159 = FUN_0c0e19aa(t3, 0xB4, t4);
                        t5 = t159;
                        t3 = t159;
                        FUN_0c0e19d0(t3);
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                        t1 = t6;
                        t2 = 0xC0E6248;
                        t0 = t5;
                        t1 = (t1 + 0xC);
                        t0 = (t0 + 0x60);
                        FUN_0c0e6248();
                        t0 = 0x78;
                        t0 = (t0 + t5);
                        t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                        u7 = (float)t2;
                        u7 = (u7 * 0.099999994f);
                        *(float *)((t5 + 0x74)) = u7;
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t2 = (*(int *)((t6 + 0x18)));
                        if (t2 != 0) {
                            t2 = 0x1;
                            *(unsigned int *)((t5 + (t2 + 0x7F))) = t2;
                        } else {
                            t0 = 0x2;
                            *(unsigned int *)((t5 + (t0 + 0x7E))) = t0;
                        }
                        t181 = t0;
                        t183 = t2;
                        u184 = u7;
                    }
                        break;
                    case 24:
                    {
                        t3 = 0xC018550;
                        t168 = FUN_0c0e19aa(t3, 0xB4, t4);
                        t5 = t168;
                        t3 = t168;
                        FUN_0c0e19d0(t3);
                        t2 = 0xC0E61D4;
                        t0 = t5;
                        t1 = t6;
                        t0 = (t0 + 0x30);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                        t1 = t6;
                        t2 = 0xC0E6248;
                        t0 = t5;
                        t1 = (t1 + 0xC);
                        t0 = (t0 + 0x60);
                        FUN_0c0e6248();
                        t2 = (unsigned short)(*(short *)((t6 + 0x12)));
                        u7 = (float)t2;
                        u7 = (u7 * 0.099999994f);
                        *(float *)((t5 + 0x74)) = u7;
                        t0 = 0x78;
                        t0 = (t0 + t5);
                        *(unsigned int *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t181 = t0;
                        t183 = t2;
                        u184 = u7;
                    }
                        break;
                    default:
                    {
                        t3 = 0xC01860C;
                        t173 = FUN_0c0e19aa(t3, 0x54, t4);
                        t5 = t173;
                        t3 = t173;
                        FUN_0c0e19d0(t3);
                        t1 = 0xC017AD0;
                        t0 = t5;
                        t2 = 0xC0E61D4;
                        t0 = (t0 + 0x38);
                        *(unsigned int *)((t5 + 0x4)) = t1;
                        t1 = t6;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                        t1 = t6;
                        t2 = 0xC0E6248;
                        t0 = t5;
                        t1 = (t1 + 0xC);
                        t0 = (t0 + 0x44);
                        FUN_0c0e6248();
                        t0 = 0x4A;
                        t0 = (t0 + t5);
                        *(unsigned short *)((t0 + 0x0)) = (*(short *)((t6 + 0x16)));
                        t2 = (*(int *)((t6 + 0x18)));
                        *(unsigned int *)((t5 + 0x50)) = t2;
                        t3 = (*(short *)((t5 + 0x4A)));
                        t2 = 0xC0BE338;
                        t3 = (unsigned short)t3;
                        FUN_0c0be338(t3, (t5 + 0x30));
                    }
                        break;
                }
                t186 = t181;
                t187 = t182;
                t188 = t183;
                u191 = u184;
            }
            u7 = u191;
            t0 = t186;
            t6 = (t6 + 0x1C);
            t1 = t187;
            t2 = t188;
            t3 = t189;
            t4 = t190;
            continue;
        }
        break;
    }
    return t8;
}


int FUN_0c02c6ee(int a4, float f4)
{
    int t11;
    int t86;
    int t85;
    int t27;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u33;
    float u35;
    float u37;
    float t69;
    float t71;
    float t73;
    int t103;
    float u5;
    int stk[28];

    if ((int)(*(int *)((a4 + 0x304))) <= 0) {
        *(unsigned int *)((a4 + 0x474)) = 0x0;
        t103 = 0x474;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
        *(unsigned int *)((a4 + 0xA4)) = ((*(int *)((a4 + 0xA4))) & 0xFFFFF7FF);
        *(unsigned int *)((a4 + 0x1EC)) = ((*(int *)((a4 + 0x1EC))) & 0xFFFFF00F);
        if ((((*(float *)((a4 + 0x390))) + 10.0f) > (*(float *)((a4 + 0x34)))) && (u5 = *(float *)((a4 + 0x4C)), !(u5 > 0.0f))) {
            *(float *)((a4 + 0x4C)) = (((*(float *)((a4 + 0x390))) - (*(float *)((a4 + 0x34)))) + 10.0f);
            *(float *)((a4 + 0x64)) = 0.0f;
        }
        *(float *)((a4 + 0x4B0)) = 0.0f;
        *(float *)((a4 + 0x4B4)) = 0.0f;
        *(float *)((a4 + 0x4B8)) = 0.0f;
        t11 = *(int *)((a4 + 0x4C8));
        t86 = t11;
        if (t11 == 2) {
        } else {
            t85 = 0;
            if ((*(int *)((a4 + 0x50C))) == 0) {
                nlPushMatrix(0x0);
                nlUnitMatrix();
                FUN_0c0dcc70((*(float *)((a4 + 0x24C))), (*(float *)((a4 + 0x250))), (*(float *)((a4 + 0x254))));
                nlRotateAY((*(int *)((a4 + 0x52C))));
                *(float *)(((int)stk + 60)) = 0.0f;
                *(float *)(((int)stk + 64)) = 3.0f;
                *(float *)(((int)stk + 68)) = -15.0f;
                FUN_0c0db470((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x2C));
                *(float *)(((0x518 + a4) + 0x0)) = (*(float *)(((int)stk + 48)));
                *(float *)(((0x51C + a4) + 0x0)) = (*(float *)(((int)stk + 52)));
                *(float *)(((0x520 + a4) + 0x0)) = (*(float *)(((int)stk + 56)));
                nlPopMatrix(0x1);
                t85 = (1);
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x38)) = *(struct mv3 *)((0x24C + a4)); }
                t27 = *(int *)((a4 + 0x510));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x2C)) = *(struct mv3 *)(((((((t27 << 1) + t27) << 2) << 2) << 2) + 0xC23F268)); }
                u28 = *(float *)(((((int)stk + 4) + 0x38) + 0x0));
                u29 = *(float *)(((((int)stk + 4) + 0x2C) + 0x4));
                u30 = *(float *)(((((int)stk + 4) + 0x38) + 0x4));
                u31 = *(float *)(((((int)stk + 4) + 0x2C) + 0x0));
                u32 = *(float *)(((((int)stk + 4) + 0x2C) + 0x8));
                u33 = *(float *)(((((int)stk + 4) + 0x38) + 0x8));
                u35 = ((u30 - u29) * (u30 - u29));
                u35 = u35 + (u28 - u31) * (u28 - u31);
                u37 = u35;
                u37 = u37 + (u33 - u32) * (u33 - u32);
                FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)(((((int)stk + 4) + 0x38) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x2C) + 0x0)))), ((*(float *)(((((int)stk + 4) + 0x38) + 0x4))) - (*(float *)(((((int)stk + 4) + 0x2C) + 0x4)))), ((*(float *)(((((int)stk + 4) + 0x38) + 0x8))) - u32));
                if (_builtin_sqrtf(u37) > 35.0f) {
                    nlPushMatrix(0x0);
                    nlUnitMatrix();
                    FUN_0c0dcc70((*(float *)(((((int)stk + 4) + 0x2C) + 0x0))), (*(float *)(((((int)stk + 4) + 0x2C) + 0x4))), (*(float *)(((((int)stk + 4) + 0x2C) + 0x8))));
                    nlRotateAY((*(int *)(((int)stk + 8))));
                    nlRotateAX((*(int *)(((int)stk + 4))));
                    *(float *)(((int)stk + 36)) = 0.0f;
                    *(float *)(((int)stk + 40)) = 0.0f;
                    *(float *)(((int)stk + 44)) = 30.0f;
                    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
                    *(float *)(((0x518 + a4) + 0x0)) = (*(float *)(((int)stk + 24)));
                    *(float *)(((0x51C + a4) + 0x0)) = (*(float *)(((int)stk + 28)));
                    *(float *)(((0x520 + a4) + 0x0)) = (*(float *)(((int)stk + 32)));
                    nlPopMatrix(0x1);
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x518 + a4)) = *(struct mv3 *)((((int)stk + 4) + 0x38)); }
                }
                nlPushMatrix(0x0);
                nlUnitMatrix();
                nlRotateAY((*(int *)(((int)stk + 8))));
                nlRotateAX((*(int *)(((int)stk + 4))));
                t69 = FUN_0c0da410(((*(int *)0xC23A258) * 0x333));
                *(float *)(((int)stk + 24)) = (t69 * 2.5f);
                t71 = FUN_0c0d9e90(((*(int *)0xC23A258) * 0x333));
                *(float *)(((int)stk + 28)) = (t71 * 2.5f);
                t73 = FUN_0c0da410(((*(int *)0xC23A258) * 0x222));
                *(float *)(((int)stk + 32)) = (t73 * 5.0f);
                FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
                *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 12)));
                *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 16)));
                *(float *)(((((int)stk + 4) + 0x28) + 0x0)) = (*(float *)(((int)stk + 20)));
                nlPopMatrix(0x1);
                nlAddVector((0x518 + a4), (((int)stk + 4) + 0x20));
                _builtin_sqrtf(u37);
                t85 = ((_builtin_sqrtf(u37) > 35.0f));
            }
            *(unsigned int *)((a4 + 0x514)) = 0x1;
            t86 = 0x514;
        }
        t103 = t86;
    }
    return t103;
}

int FUN_0c087510(int a4)
{
    int t0;
    int t5;
    int t6;
    int t10;
    int t19;
    int t28;
    float u40;
    int t41;
    int t46;
    float u49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t55;
    int t58;
    int t72;
    float u76;
    int t79;
    int t21;
    int t22;
    int t12;
    int t13;
    int t27;
    int t36;
    int stk[17];

    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t0 = *(int *)((a4 + 0x58));
    if (t0 != 9) {
        if (t0 != 10) {
            t5 = 0x0;
            t6 = 0xA;
            if ((int)(*(int *)(((*(int *)((a4 + 0x30))) + 0x304))) <= 0) {
                t5 = 0x3;
                t6 = 0x3C;
            }
            t12 = t5;
            t13 = t6;
        } else {
            *(unsigned int *)(((int)stk + 16)) = 0x3;
            t10 = 0x19;
            if ((int)(*(int *)(((*(int *)((a4 + 0x30))) + 0x304))) <= 0) {
                t10 = 0x3C;
            }
            t12 = 0x3;
            t13 = t10;
        }
        t21 = t12;
        t22 = t13;
    } else {
        t19 = 0x5;
        if ((int)(*(int *)(((*(int *)((a4 + 0x30))) + 0x304))) <= 0) {
            t19 = 0x18;
        }
        t21 = 0x0;
        t22 = t19;
    }
    if (((int)(*(int *)((a4 + 0x40))) < (int)0x3) && (t27 = *(int *)0xC23ED84, t27 == 1)) {
        t28 = FUN_0c0e1830(0xC08C1AA, 0xA4);
        FUN_0c0e19d0(t28);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t28 + 0x70)) = *(struct mv3 *)((a4 + 0x34)); }
        *(unsigned short *)((t28 + 0x8A)) = (*(short *)((a4 + 0x5C)));
        *(float *)((t28 + 0x90)) = 10.0f;
        *(unsigned short *)((t28 + 0x9A)) = 0xFF;
        *(unsigned short *)((t28 + 0xA0)) = 0x6;
        *(unsigned int *)((a4 + 0x40)) = ((*(int *)((a4 + 0x40))) + 0x1);
    } else {
        t36 = 0x3C;
    }
    if ((int)(*(int *)((a4 + 0x44))) >= (int)t22) {
        return FUN_0c0e19f2(t36);
    }
    u40 = 0.299999982f;
    u40 = u40 + 3.05185094e-05f * (float)(FUN_0c0da2e0());
    *(float *)(((int)stk + 12)) = u40;
    t41 = FUN_0c0da2e0();
    *(unsigned int *)(((int)stk + 4)) = ((((FUN_0c0da2e0()) & 0x3FFF) + (*(int *)(((0x5C + a4) + 0x0)))) - 24575);
    *(unsigned int *)(((int)stk + 8)) = (((FUN_0c0da2e0()) & 0x1FFF) + 0x71C);
    nlPushMatrix(0x0);
    t46 = ((t41 & 0x3) + t21);
    for (;;) {
        u49 = (*(float *)(((int)stk + 12)));
        u49 = u49 + 1.22074025e-05f * (float)(FUN_0c0da2e0());
        t50 = FUN_0c0da2e0();
        t51 = *(int *)(((int)stk + 4));
        t52 = FUN_0c0da2e0();
        t53 = *(int *)(((int)stk + 8));
        t55 = FUN_0c0e19aa(0xC087834, 0x64, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t55);
        if ((int)t46 <= (int)(*(int *)(((int)stk + 16)))) {
            t58 = *(int *)((a4 + 0x48));
            *(unsigned int *)((a4 + 0x48)) = (t58 + 0x1);
            if (((t58 + 0x1) & 0x8) != 0) {
                *(unsigned int *)(((0x58 + t55) + 0x0)) = 0x1;
            }
        }
        nlUnitMatrix();
        nlRotateAY((((0x1FF & t50) + t51) - 256));
        nlRotateAX((-((unsigned char)t52 + t53)));
        *(float *)((t55 + 0x44)) = (u49 + -0.199999988f);
        FUN_0c0db470((t55 + 0x3C), (t55 + 0x3C));
        t72 = *(int *)(((*(int *)((a4 + 0x30))) + 0xBC));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t55 + 0x30)) = *(struct mv3 *)(((((((t72 << 1) + t72) << 2) << 2) << 2) + 0xC23F274)); }
        *(unsigned int *)((t55 + 0x60)) = (unsigned short)(*(short *)((((*(int *)0xC23ED84) << 1) + 0xC10AA78)));
        u76 = 2.19999981f;
        u76 = u76 + 1.83111042e-05f * (float)(FUN_0c0da2e0());
        *(float *)((t55 + 0x48)) = u76;
        *(unsigned short *)((t55 + 0x50)) = (int)((u49 + -0.199999988f) * 6826.0f);
        nlAddVector((t55 + 0x30), (t55 + 0x3C));
        *(unsigned short *)((t55 + 0x54)) = (((0x1FF & t50) + t51) - 256);
        *(unsigned short *)((t55 + 0x52)) = ((unsigned char)t52 + t53);
        *(unsigned int *)((a4 + 0x44)) = ((*(int *)((a4 + 0x44))) + 0x1);
        t79 = (t46 == 0);
        t46 = (t46 - 1);
        if (!t79) continue;
        break;
    }
    return nlPopMatrix(0x1);
}

int FUN_0c0635ec(int a4, int a5)
{
    int t1;
    int t71;
    int t3;
    int t12;
    int t14;
    float u38;
    int t16;
    int stk[25];

    t1 = FUN_0c0a4bb2((*(int *)((a4 + 0xBC))));
    t71 = t1;
    if (t1 == 0) {
    } else {
        t3 = FUN_0c0e19aa(0xC06348E, 0x2BC, (*(int *)0xC23ECE4));
        FUN_0c0e19d0(t3);
        *(unsigned int *)((t3 + 0xBC)) = (*(int *)((a4 + 0xBC)));
        *(unsigned int *)(((0x200 + t3) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
        if ((int)(*(short *)((a4 + 0xE8))) < (int)0x4) {
            t12 = 0x0;
            if ((*(signed char *)((a5 + 0x4))) != 0) {
                t12 = (*(int *)((a4 + 0x1EC)));
            }
            t16 = t12;
        } else {
            t14 = *(int *)((a4 + 0xBC));
            t16 = (((int)t14 >= 0) ? (0x1 << (t14 & 31)) : ((-(int)t14 & 31) ? ((int)0x1 >> (-(int)t14 & 31)) : ((int)0x1 >> 31)));
        }
        *(unsigned int *)((t3 + 0x1EC)) = t16;
        FUN_0c0cc3f8(0x52BA9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        *(unsigned int *)(((0x1E8 + t3) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
        *(unsigned int *)(((0x1F4 + t3) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
        *(unsigned int *)(((0x204 + t3) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
        *(float *)((t3 + 0x1E4)) = 1.0f;
        *(unsigned int *)(((0x1FC + t3) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
        *(unsigned int *)((t3 + 0x1F8)) = (unsigned char)(*(signed char *)((a5 + 0x0)));
        *(unsigned int *)(((0x22C + t3) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x8)));
        *(unsigned int *)((t3 + 0x220)) = 0x125C;
        *(float *)((t3 + 0x24C)) = (*(float *)((a5 + 0xC)));
        nlPushMatrix(0x0);
        FUN_0c0dbda0((*(int *)((a4 + 0x3E4))));
        *(float *)(((int)stk + 24)) = 0.0f;
        *(float *)(((int)stk + 28)) = 0.0f;
        *(float *)(((int)stk + 32)) = 0.0f;
        FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
        *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(float *)(((int)stk + 12)));
        *(float *)((((((int)stk + 4) + 0x20) + 0x4) + 0x0)) = (*(float *)(((int)stk + 16)));
        *(float *)((((((int)stk + 4) + 0x20) + 0x8) + 0x0)) = (*(float *)(((int)stk + 20)));
        *(float *)(((int)stk + 24)) = 0.0f;
        *(float *)(((int)stk + 28)) = 0.0f;
        *(float *)(((int)stk + 32)) = 1.0f;
        FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
        *(float *)(((((int)stk + 4) + 0x2C) + 0x0)) = (*(float *)(((int)stk + 12)));
        *(float *)((((((int)stk + 4) + 0x2C) + 0x4) + 0x0)) = (*(float *)(((int)stk + 16)));
        *(float *)((((((int)stk + 4) + 0x2C) + 0x8) + 0x0)) = (*(float *)(((int)stk + 20)));
        u38 = *(float *)((a4 + 0x284));
        nlScale((1.0f / u38), (1.0f / u38), (1.0f / u38));
        FUN_0c0de000((1.0f / (*(float *)((a4 + 0x284)))));
        *(float *)(((int)stk + 24)) = (*(float *)((t1 + 0x0)));
        *(float *)(((int)stk + 28)) = (*(float *)((t1 + 0x4)));
        *(float *)(((int)stk + 32)) = (*(float *)((t1 + 0x8)));
        FUN_0c0db470((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
        *(float *)(((t3 + 0x30) + 0x0)) = (*(float *)(((int)stk + 12)));
        *(float *)(((t3 + 0x34) + 0x0)) = (*(float *)(((int)stk + 16)));
        *(float *)(((t3 + 0x38) + 0x0)) = (*(float *)(((int)stk + 20)));
        nlPopMatrix(0x1);
        FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)(((((int)stk + 4) + 0x2C) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x20) + 0x0)))), ((*(float *)(((((int)stk + 4) + 0x2C) + 0x4))) - (*(float *)(((((int)stk + 4) + 0x20) + 0x4)))), ((*(float *)(((((int)stk + 4) + 0x2C) + 0x8))) - (*(float *)(((((int)stk + 4) + 0x20) + 0x8)))));
        *(unsigned short *)((t3 + 0x6C)) = (*(int *)(((int)stk + 4)));
        *(unsigned short *)((t3 + 0x6E)) = (*(int *)(((int)stk + 8)));
        *(unsigned short *)((t3 + 0x70)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x3C)) = *(struct mv3 *)((t3 + 0x30)); }
        *(float *)((t3 + 0x258)) = (*(float *)((a4 + 0x390)));
        *(float *)((t3 + 0x2A4)) = 0.0f;
        *(float *)((t3 + 0x2A8)) = 0.0f;
        *(float *)((t3 + 0x2AC)) = 0.0f;
        nlPushMatrix(0x0);
        nlUnitMatrix();
        nlRotateAY((*(short *)((t3 + 0x6E))));
        nlRotateAX((*(short *)((t3 + 0x6C))));
        *(float *)(((int)stk + 48)) = 0.0f;
        *(float *)(((int)stk + 52)) = 0.0f;
        *(float *)(((int)stk + 56)) = -0.049999997f;
        FUN_0c0db470((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20));
        *(float *)(((0x2B0 + t3) + 0x0)) = (*(float *)(((int)stk + 36)));
        *(float *)(((0x2B4 + t3) + 0x0)) = (*(float *)(((int)stk + 40)));
        *(float *)(((0x2B8 + t3) + 0x0)) = (*(float *)(((int)stk + 44)));
        t71 = (nlPopMatrix(0x1));
    }
    return t71;
}

int FUN_0c05e158(int a4, int a5, int a6)
{
    int t3;
    int t21;
    float u30;
    int t38;
    float u70;
    int t45;
    int t50;
    int t51;
    float u111;
    int t118;
    int t19;
    float u35;
    int stk[10];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(0xC0F9C38); }
    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        if ((int)(*(int *)((a4 + 0xBC))) < (int)0x2) {
            t3 = *(int *)((a4 + 0xBC));
            *(unsigned int *)(((((t3 << 2) << 2) << 1) + 0xC247548)) = ((*(int *)(((((t3 << 2) << 2) << 1) + 0xC247548))) + 0x1);
        }
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c054c8a(a4);
        }
        *(unsigned int *)((a4 + 0xD8)) = 0x0;
    } else {
        t19 = a4;
    }
    t21 = *(int *)((a4 + 0x22C));
    *(unsigned int *)((a4 + 0x22C)) = (t21 - 1);
    if ((int)(t21 - 1) <= 0) {
        FUN_0c0e19f2(t19);
    }
    if ((*(int *)((a4 + 0x23C))) == 0) {
        *(unsigned int *)((a4 + 0x23C)) = 0x1;
        u30 = *(float *)(((((int)stk + 4) + 0x4) + 0x8));
        *(float *)((a4 + 0x238)) = (0.099999994f - u30);
        u35 = u30;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    }
    if ((*(int *)((a4 + 0xD4))) != 0) {
        t38 = *(int *)((a4 + 0x244));
        *(unsigned int *)((a4 + 0x244)) = (t38 - 1);
        if ((int)(t38 - 1) >= 0) {
            u70 = u35;
            if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0xCC))) << 2)))) == 4) {
                t45 = *(int *)(((((*(int *)((a4 + 0xCC))) << 2) + 0xC246FF0) + 0x0));
                FUN_0c0a68ec(((int)stk + 4), ((*(float *)((t45 + 0x30))) - (*(float *)((a4 + 0x30)))), ((*(float *)((t45 + 0x38))) - (*(float *)((a4 + 0x38)))));
                t50 = *(int *)(((int)stk + 4));
                t51 = *(short *)((a4 + 0x6E));
                if (_builtin_fabsf((float)(short)(t51 - t50)) > 1280.0f) {
                    if ((int)(short)(t51 - t50) > 0) {
                        *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + 0x300);
                        *(unsigned int *)((a4 + 0xEC)) = 0x300;
                    } else {
                        *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) - 0x300);
                        *(unsigned int *)((a4 + 0xEC)) = 0xFFFFFD00;
                    }
                }
                u70 = _builtin_fabsf((float)(short)(t51 - t50));
            }
        } else {
            *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((a4 + 0x6E))) + (*(int *)(((0xEC + a4) + 0x0))));
            *(unsigned int *)((a4 + 0xEC)) = ((*(int *)((a4 + 0xEC))) - ((((*(int *)(((0xEC + a4) + 0x0))) >> 1) >> 1) >> 1));
        }
    }
    FUN_0c0a6688((((int)stk + 4) + 0x4), (a4 + 0x6C), (a4 + 0x48));
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
    FUN_0c01cdc2(a4);
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    nlRotateAY(0x4000);
    u111 = *(float *)((a4 + 0x24C));
    nlScale((*(float *)((a4 + 0x238))), u111, u111);
    FUN_0c0de000((*(float *)((a4 + 0x238))));
    FUN_0c0c475c((*(int *)((a4 + 0x220))), 0.699999988f);
    t118 = FUN_0c0e1830(0xC05E41C, 0x5C);
    FUN_0c0e19d0(t118);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t118 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c0e6248();
    *(unsigned int *)((t118 + 0x30)) = (*(int *)((a4 + 0x220)));
    *(unsigned int *)((t118 + 0x54)) = 0x1E;
    *(float *)((t118 + 0x34)) = (*(float *)((a4 + 0x238)));
    *(float *)((t118 + 0x38)) = (*(float *)((a4 + 0x24C)));
    *(unsigned int *)((t118 + 0x50)) = 0x400;
    return (nlPopMatrix(0x1));
}

int FUN_0c04105c(int a4)
{
    int t0;
    int t14;
    int t5;
    int t6;
    int t33;
    int t21;
    int t29;
    int t23;
    int t25;
    int t45;
    int t78;
    int t47;
    int t72;
    int t48;
    int t49;
    int t92;
    int t102;
    int t93;
    int t94;
    int t106;
    int t84;
    int t37;
    int stk[14];

    t0 = *(int *)((a4 + 0x4EC));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x48)) = *(struct mv3 *)((a4 + 0x60)); }
                *(float *)((a4 + 0x4B4)) = ((*(float *)((a4 + 0x4B4))) - 0.0272199996f);
                nlAddVector((a4 + 0x48), (0x4B0 + a4));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
                *(float *)((a4 + 0x4B0)) = 0.0f;
                *(float *)((a4 + 0x4B4)) = 0.0f;
                *(float *)((a4 + 0x4B8)) = 0.0f;
                t14 = 0x34;
                if (!((*(float *)((a4 + 0x34))) > (*(float *)((a4 + 0x390))))) {
                    t5 = *(int *)((a4 + 0x4DC));
                    t6 = *(int *)((a4 + 0x4E0));
                    *(unsigned int *)((a4 + 0x4E0)) = (t6 + 0x1);
                    if ((int)(*(short *)((((((t6 + 0x1) << 2) << 1) + (*(int *)((((((t5 - 76) << 1) + (t5 - 76)) << 2) + 0xC1F518C)))) + 0x0))) < 0) {
                        FUN_0c03f4bc(a4);
                    } else {
                        FUN_0c041dd0(a4);
                    }
                    *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                    t14 = 0x4EC;
                }
                t37 = t14;
            } else {
                t33 = t0;
                if (t0 == 3) {
                    t21 = *(int *)((a4 + 0x4E4));
                    *(unsigned int *)((a4 + 0x4E4)) = (t21 - 1);
                    t29 = 0x4E4;
                    if ((int)(t21 - 1) < 0) {
                        t23 = *(int *)((a4 + 0x2EC));
                        t25 = t23;
                        if ((t23 & 12) != 0) {
                            t25 = (FUN_0c03f4bc(a4));
                        }
                        t29 = t25;
                    }
                    t33 = t29;
                }
                t37 = t33;
            }
            t84 = t37;
        } else {
            t45 = *(int *)((a4 + 0x4E4));
            *(unsigned int *)((a4 + 0x4E4)) = (t45 - 1);
            t78 = 0x4E4;
            if ((int)(t45 - 1) >= 0) {
            } else {
                t47 = *(int *)((a4 + 0x2EC));
                t72 = t47;
                if ((t47 & 12) == 0) {
                } else {
                    t48 = *(int *)((a4 + 0x4DC));
                    t49 = *(int *)((a4 + 0x4E0));
                    *(unsigned int *)((a4 + 0x4E0)) = (t49 + 0x1);
                    if ((int)(*(short *)((((((t49 + 0x1) << 2) << 1) + (*(int *)((((((t48 - 76) << 1) + (t48 - 76)) << 2) + 0xC1F518C)))) + 0x0))) < 0) {
                        FUN_0c03f4bc(a4);
                    } else {
                        FUN_0c041dd0(a4);
                    }
                    *(unsigned int *)(((int)stk + 16)) = 0x1000;
                    nlPushMatrix(0x0);
                    nlUnitMatrix();
                    nlRotateAY((*(short *)((a4 + 0x6E))));
                    nlRotateAX((*(int *)(((int)stk + 16))));
                    *(float *)(((int)stk + 32)) = 0.0f;
                    *(float *)(((int)stk + 36)) = 0.0f;
                    *(float *)(((int)stk + 40)) = -0.25f;
                    FUN_0c0db470((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10));
                    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(float *)(((int)stk + 20)));
                    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (*(float *)(((int)stk + 24)));
                    *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((int)stk + 28)));
                    *(float *)((a4 + 0x4B0)) = (*(float *)(((int)stk + 12)));
                    *(float *)((a4 + 0x4B4)) = (*(float *)(((int)stk + 8)));
                    *(float *)((a4 + 0x4B8)) = (*(float *)(((int)stk + 4)));
                    nlPopMatrix(0x1);
                    nlAddVector((a4 + 0x48), (0x4B0 + a4));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((a4 + 0x48)); }
                    *(float *)((a4 + 0x4B0)) = 0.0f;
                    *(float *)((a4 + 0x4B4)) = 0.0f;
                    *(float *)((a4 + 0x4B8)) = 0.0f;
                    *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
                    *(unsigned int *)0xC23EDB0 = 0x0;
                    *(unsigned int *)0xC23EDB4 = 0x0;
                    t72 = 0xC23EDB4;
                }
                t78 = t72;
            }
            t84 = t78;
        }
        t106 = t84;
    } else {
        t92 = *(int *)((a4 + 0x4E4));
        *(unsigned int *)((a4 + 0x4E4)) = (t92 - 1);
        t102 = 0x4E4;
        if ((int)(t92 - 1) >= 0) {
        } else {
            t93 = *(int *)((a4 + 0x4DC));
            t94 = *(int *)((a4 + 0x4E0));
            *(unsigned int *)((a4 + 0x4E0)) = (t94 + 0x1);
            if ((int)(*(short *)((((((t94 + 0x1) << 2) << 1) + (*(int *)((((((t93 - 76) << 1) + (t93 - 76)) << 2) + 0xC1F518C)))) + 0x0))) < 0) {
                FUN_0c03f4bc(a4);
            } else {
                FUN_0c041dd0(a4);
            }
            *(unsigned int *)((a4 + 0x4EC)) = ((*(int *)((a4 + 0x4EC))) + 0x1);
            t102 = 0x4EC;
        }
        t106 = t102;
    }
    return t106;
}
