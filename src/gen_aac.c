/* Straight-line functions with calls and guards (batch gen_aac): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSubVector(int, int);
int nlUnitMatrix(void);
int FUN_0c0a009c(int a4, int a5, int a6, int a7);
struct o20_float { char p[0x20]; float v; };
struct o290_int { char p[0x290]; int v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };


int FUN_0c0a009c(int a4, int a5, int a6, int a7)
{
    int stk[19];
    register int t2;
    register int t13;
    register int t144;
    register int t25;
    register int t34;
    register float u36;
    register float u37;
    register float u38;
    register float u39;
    register float u40;
    register int t54;
    register int t65;
    register int t75;
    register int t78;
    register int t83;
    register int t86;
    register int t88;
    register float u89;
    register float u103;
    register float u107;
    register float u108;
    register float u127;
    register float u131;
    register int t142;
    register int t15;
    register int t16;
    register int t17;
    register float u18;
    register float u19;
    register int t87;

    *(unsigned int *)(((int)stk + 8)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    t2 = *(int *)((a4 + 0x30));
    *(unsigned int *)(((int)stk + 12)) = t2;
    if ((((((struct o290_int *)(t2))->v)) & 0x40000000) != 0) {
        FUN_0c0e19f2();
    }
    t13 = *(int *)((0xC247030 + (((((struct oBC_int *)((*(int *)(((int)stk + 12)))))->v)) << 2)));
    t144 = t13;
    if (t13 == 8) {
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        for (;;) {
            if (((*(int *)0xC23A258) & 1) != 0) {
                t16 = (*(int *)(((int)stk + 0)));
                t16 = (t16 << 2);
                t16 = (*(int *)((t16 + 0xC2010FC)));
                t16 = (t16 << 2);
                t16 = (t16 << 2);
                t16 = (t16 << 2);
                t25 = (((((struct o3E4_int *)((*(int *)(((int)stk + 12)))))->v)) + t16);
                t16 = 0xC0DBDA0;
                FUN_0c0dbda0(t25);
                FUN_0c0db470(0xC10CCE8, (((int)stk + 0) + 0x34));
                FUN_0c0dbda0(((*(int *)(((int)stk + 8))) + 0x2EC));
                FUN_0c0db4d0(0xC10CCF4, (((int)stk + 0) + 0x40));
                t16 = 0xC0DCD10;
                nlAddVector((((int)stk + 0) + 0x34), (((int)stk + 0) + 0x40));
                t16 = (*(int *)(((int)stk + 0)));
                t15 = ((int)stk + 0);
                t15 = (t15 + 0x28);
                t34 = t16;
                t16 = (t16 << 1);
                t16 = (t16 + t34);
                t16 = (t16 << 2);
                *(unsigned int *)(((int)stk + 4)) = t16;
                t16 = (t16 + (0x2850 + a4));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t15) = *(struct mv3 *)(t16); }
                t16 = 0xC0DCED0;
                nlSubVector((((int)stk + 0) + 0x28), (((int)stk + 0) + 0x34));
                u36 = *(float *)(((int)stk + 40));
                u37 = *(float *)(((int)stk + 44));
                u18 = u37;
                u18 = (u18 * u37);
                u38 = *(float *)(((int)stk + 48));
                u39 = u18;
                u39 = u39 + u36 * u36;
                u18 = u39;
                u40 = u18;
                u40 = u40 + u38 * u38;
                u18 = u40;
                u18 = _builtin_sqrtf(u18);
                u19 = u18;
                if (u19 > 40.0f) {
                    u19 = 40.0f;
                }
                FUN_0c0a7714((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x14), (*(float *)(((int)stk + 40))), (*(float *)(((int)stk + 44))), (*(float *)(((int)stk + 48))));
                t16 = 0xC0DCCC0;
                nlUnitMatrix();
                FUN_0c0dcca0(((0x2850 + a4) + (*(int *)(((int)stk + 4)))));
                nlRotateAY((*(int *)(((int)stk + 20))));
                nlRotateAX((*(int *)(((int)stk + 16))));
                for (;;) {
                    t17 = ((((struct o4C_int *)(a4))->v));
                    t17 = (t17 + 0x1);
                    t16 = a4;
                    (((struct o4C_uint *)(a4))->v) = t17;
                    t17 = (t17 - 1);
                    t54 = t17;
                    t17 = (t17 << 2);
                    t17 = (t17 + t54);
                    t17 = (t17 << 2);
                    t16 = (t16 + 0x50);
                    t17 = (t17 << 1);
                    t17 = (t17 + t16);
                    if ((unsigned int)((((struct o4C_int *)(a4))->v)) >= (unsigned int)0x100) {
                        (((struct o4C_uint *)(a4))->v) = 0x0;
                    }
                    FUN_0c0dcc70(0.0f, 0.0f, -0.609999955f);
                    t16 = 0xC0DB840;
                    FUN_0c0db840(t17);
                    t16 = 0xC249760;
                    t15 = t17;
                    t15 = (t15 + 0xC);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t15) = *(struct mv3 *)(t16); }
                    t15 = 0x20;
                    *(unsigned int *)((t17 + 0x24)) = t15;
                    u18 = 4.57999992f;
                    *(float *)((t17 + t15)) = u18;
                    u18 = 0.609999955f;
                    u19 = (u19 - u18);
                    if (!(u19 > 0.0f)) {
                        break;
                    }
                }
                t15 = 0x2850;
                t16 = ((int)stk + 0);
                t16 = (t16 + 0x34);
                t15 = (t15 + a4);
                t15 = (t15 + (*(int *)(((int)stk + 4))));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t15) = *(struct mv3 *)(t16); }
            }
            t16 = (*(int *)(((int)stk + 0)));
            t15 = 0x2;
            t16 = (t16 << 2);
            t16 = (t16 + 0xC2010FC);
            *(unsigned int *)(((int)stk + 24)) = t16;
            *(unsigned int *)(((int)stk + 4)) = t15;
            for (;;) {
                t16 = a4;
                t17 = ((((struct o4C_int *)(a4))->v));
                t16 = (t16 + 0x50);
                t17 = (t17 + 0x1);
                (((struct o4C_uint *)(a4))->v) = t17;
                t17 = (t17 - 1);
                t65 = t17;
                t17 = (t17 << 2);
                t17 = (t17 + t65);
                t17 = (t17 << 2);
                t17 = (t17 << 1);
                t17 = (t17 + t16);
                if ((unsigned int)((((struct o4C_int *)(a4))->v)) >= (unsigned int)0x100) {
                    (((struct o4C_uint *)(a4))->v) = 0x0;
                }
                t16 = (*(int *)(((*(int *)(((int)stk + 24))) + 0x0)));
                t16 = (t16 << 2);
                t16 = (t16 << 2);
                t16 = (t16 << 2);
                FUN_0c0dbda0((((((struct o3E4_int *)((*(int *)(((int)stk + 12)))))->v)) + t16));
                FUN_0c0dcca0(0xC10CCE8);
                t16 = 0xC0DA2E0;
                t75 = FUN_0c0da2e0();
                nlRotateAY((t75 << 1));
                t78 = FUN_0c0da2e0();
                nlRotateAX((t78 << 1));
                t16 = 0xC0DB470;
                FUN_0c0db470(0xC10CD00, t17);
                FUN_0c0db4d0(0xC10CD0C, (t17 + 0xC));
                t16 = 0xFFFFFFE0;
                *(unsigned int *)((t17 + 0x24)) = t16;
                u18 = 1.23999989f;
                (((struct o20_float *)(t17))->v) = u18;
                t83 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t83 - 1);
                if ((t83 - 1) == 0) {
                    break;
                }
            }
            t15 = (*(int *)(((int)stk + 0)));
            t15 = (t15 + 0x1);
            *(unsigned int *)(((int)stk + 0)) = t15;
            if ((int)t15 < (int)0x2) continue;
            break;
        }
        nlPopMatrix(0x1);
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        t86 = 0xC0A03D4;
        t88 = (a4 + 0x50);
        u89 = 0.0f;
        for (;;) {
            if ((int)(*(int *)((t88 + 0x24))) > 0) {
                t86 = 0x20;
                *(float *)((t88 + t86)) = ((*(float *)((t88 + t86))) + -0.173999995f);
                u89 = (float)(*(int *)((t88 + 0x24)));
                u89 = (u89 * 0.03125f);
                t86 = (nlAddVector(t88, (t88 + 0xC)));
                t87 = 0xC0DC510;
                t86 = (nlPushMatrix(0x0));
                t86 = (FUN_0c0dcca0(t88));
                t86 = 0x3CE;
                t86 = (nlRotateAY((*(short *)(((*(int *)(((int)stk + 8))) + t86)))));
                t86 = 0x3CC;
                t86 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 8))) + t86)))));
                t86 = 0x20;
                u103 = *(float *)((t88 + t86));
                t86 = 0x1C;
                *(float *)((((int)stk + 0) + t86)) = u103;
                t86 = (nlScale(u103, u103, 1.0f));
                t86 = 0x20;
                t86 = (FUN_0c0de000((*(float *)((t88 + t86)))));
                t86 = 0xC0A0520;
                u107 = *(float *)((t86 + 0x0));
                t86 = 0xC0A0524;
                u108 = *(float *)((t86 + 0x0));
                t86 = 0xC0A0528;
                t86 = (FUN_0c0848bc((u89 * (*(float *)((t86 + 0x0)))), (u89 * u108), (u89 * u107)));
                t87 = 0xC0C465C;
                t86 = (FUN_0c0c465c(0x295));
                t86 = (nlPopMatrix(0x1));
                t87 = (*(int *)((t88 + 0x24)));
                t87 = (t87 - 1);
                *(unsigned int *)((t88 + 0x24)) = t87;
            } else {
                if ((int)(*(int *)((t88 + 0x24))) < 0) {
                    t86 = 0x20;
                    *(float *)((t88 + t86)) = ((*(float *)((t88 + t86))) + -0.0729999989f);
                    t86 = 0x10;
                    u89 = ((float)(*(int *)((t88 + 0x24))) * 0.03125f);
                    u89 = (-u89);
                    *(float *)((t88 + t86)) = ((*(float *)((t88 + t86))) + -0.0f);
                    t86 = (nlAddVector(t88, (t88 + 0xC)));
                    t87 = 0xC0DC510;
                    t86 = (nlPushMatrix(0x0));
                    t86 = (FUN_0c0dcca0(t88));
                    t86 = 0x3CE;
                    t86 = (nlRotateAY((*(short *)(((*(int *)(((int)stk + 8))) + t86)))));
                    t86 = 0x3CC;
                    t86 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 8))) + t86)))));
                    t86 = 0x20;
                    u127 = *(float *)((t88 + t86));
                    t86 = 0x20;
                    *(float *)((((int)stk + 0) + t86)) = u127;
                    t86 = (nlScale(u127, u127, 1.0f));
                    t86 = 0x20;
                    t86 = (FUN_0c0de000((*(float *)((t88 + t86)))));
                    t86 = 0xC0A0540;
                    u131 = *(float *)((t86 + 0x0));
                    t86 = 0x24;
                    *(float *)((((int)stk + 0) + t86)) = (u89 * u131);
                    t86 = (FUN_0c0848bc((u89 * 0.119999997f), (u89 * u131), (u89 * u131)));
                    t87 = 0xC0C465C;
                    t86 = (FUN_0c0c465c(0x295));
                    t86 = (nlPopMatrix(0x1));
                    t87 = (*(int *)((t88 + 0x24)));
                    t87 = (t87 + 0x1);
                    *(unsigned int *)((t88 + 0x24)) = t87;
                }
            }
            t142 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = (t142 + 0x1);
            t88 = (t88 + 0x28);
            if ((unsigned int)(t142 + 0x1) < (unsigned int)0x100) continue;
            break;
        }
        t144 = (FUN_0c0849da());
    }
    return t144;
}
