/* Straight-line functions with calls and guards (batch gen_al): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c010c0c(void);
int FUN_0c010c14(void);
int FUN_0c010c40(int);
int FUN_0c010cb6(void);
int FUN_0c0112b0(int);
int FUN_0c012570(int);
int FUN_0c0146f0(int, int, int, int);
int FUN_0c015436(int, int);
int FUN_0c0154a4(void);
int FUN_0c0156ea(int, int, int, int);
int FUN_0c0159a2(int, int);
int FUN_0c016280(void);
int FUN_0c01e720(int);
int FUN_0c01e770(int);
int FUN_0c01e79a(int, int);
float FUN_0c01f1b8(int, int);
int FUN_0c0376f4(int);
int FUN_0c037954(int);
int FUN_0c037c66(int);
int FUN_0c037e44(int);
int FUN_0c037ee8(int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c086bda(int, float);
int FUN_0c0a6800(int, int, float, float, float);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0a6928(int, int, int, int, float, float, float, float, float, float, float, float, float, float, float, float, float);
int FUN_0c0a7714(int, int, float, float, float);
extern int FUN_0c0be6ee();
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0cec9a(int);
float FUN_0c0d9e90(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int nlAddVector(int, int);
int FUN_0c0dce80(int, int, float);
int nlSubVector(int, int);
int FUN_0c0de000(float);
int FUN_0c0de3c0(int, int);
extern int FUN_0c0e19f2();
int FUN_0c0e2a4c(int);
extern int _quick_odd_mvn();
int FUN_0c0e631c(int, int, int);
extern float _builtin_sqrtf(float);
int buStat(int);
int FUN_0c09da24(int, int, int);
int FUN_0c014c4c(void);
int FUN_0c088fcc(int a4);
int FUN_0c09c02a(int a4);
int FUN_0c01e32e(int a4, int a5);
int FUN_0c03840e(int a4, int a5, int a6, int a7);
int FUN_0c02c6ee(int a4, float f4);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o30_int { char p[0x30]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o4_int { char p[0x4]; int v; };



int FUN_0c014c4c(void)
{
    int t16;
    int t17;
    int t18;
    int t33;
    int t34;
    int t41;
    int t42;
    int t50;
    int t51;
    int t102;
    int t131;
    int t143;
    int t56;
    int stk[14];

    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F409C);
    FUN_0c0c465c(0x1436);
    FUN_0c0c465c(0x1440);
    FUN_0c0c465c(0x13B0);
    (((struct o0_uint *)0xC23EAC8)->v) = (FUN_0c0146f0(((((struct o0_int *)0xC23EAC8)->v)), 0xC23EB5B, (((int)stk + 8) + 0x4), 0x0));
    nlPushMatrix(0x0);
    nlPushMatrix(0x0);
    FUN_0c0dcca0(0xC0F461C);
    FUN_0c0c475c(0x1427, ((((struct o38_float *)0xC23EAC8)->v)));
    FUN_0c0c475c(0x1425, ((((struct o38_float *)0xC23EAC8)->v)));
    nlPopMatrix(0x1);
    FUN_0c0dcca0(0xC0F45C8);
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 8) + 0x4) + 0x3);
    t16 = 0xC014D1C;
    t17 = (((int)stk + 8) + 0x4);
    t18 = ((((int)stk + 8) + 0x4) + 0x3);
    for (;;) {
        if ((unsigned int)t17 >= (unsigned int)(*(int *)(((int)stk + 8)))) {
            break;
        }
        t18 = (*(signed char *)((t17 + 0x0)));
        t17 = (t17 + 0x1);
        if ((int)t18 >= 0) {
            t16 = 0xC0F4568;
            t16 = (FUN_0c0c465c((*(int *)(((t18 << 2) + t16)))));
            t16 = t18;
            t18 = (*(signed char *)((0xC23EB5B + t16)));
            t16 = (FUN_0c0c465c(0x1417));
            t16 = 0xC0F4540;
            t16 = (FUN_0c0c465c((*(int *)(((t18 << 2) + t16)))));
        }
        t16 = (FUN_0c0dcc70(0.0f, -0.699999988f, 0.0f));
    }
    nlPopMatrix(0x1);
    t33 = (((struct o24_int *)0xC23EAC8)->v);
    t34 = (((struct o18_int *)0xC23EB08)->v);
    switch (t33) {
    case 0:
        if ((*(int *)0xC52314C) != 0) {
            t143 = (((struct o30_int *)0xC23EB08)->v);
            (((struct o18_uint *)0xC23EB08)->v) = t143;
            FUN_0c0cec9a(t143);
            *(unsigned int *)0xC52314C = 0x0;
            (((struct o24_uint *)0xC23EAC8)->v) = (((((struct o24_int *)0xC23EAC8)->v)) + 0x1);
        } else {
            (((struct o24_uint *)0xC23EAC8)->v) = 0x2;
        }
        break;
    case 1:
        t131 = buStat(t34);
        if (t131 != 0) {
        } else {
            (((struct o24_uint *)0xC23EAC8)->v) = (((((struct o24_int *)0xC23EAC8)->v)) + 0x1);
        }
        break;
    case 2:
        nlPushMatrix(0x0);
        FUN_0c0dcca0(0xC0F4628);
        FUN_0c0c465c(0x1441);
        nlPopMatrix(0x1);
        nlScale(0.444999993f, 0.444999993f, 0.444999993f);
        FUN_0c0dcca0(0xC0F45D4);
        t102 = FUN_0c010cb6();
        if (t102 != 0) {
            if (t102 != 1) {
            } else {
                *(unsigned int *)0xC23A260 = 0x3;
            }
        } else {
            FUN_0c015436(((((struct o18_int *)0xC23EB08)->v)), 0x0);
            FUN_0c010c0c();
            (((struct o24_uint *)0xC23EAC8)->v) = (((((struct o24_int *)0xC23EAC8)->v)) + 0x1);
        }
        if (((*(int *)0xC2498F4) & 2) != 0) {
            FUN_0c010c40(0xD);
            (((struct o24_uint *)0xC23EAC8)->v) = 0x3;
        }
        if ((*(int *)0xC52314C) == 0) {
        } else {
            *(unsigned int *)0xC23A260 = 0x3;
        }
        break;
    case 3:
        FUN_0c0159a2(t34, 0xC1EF454);
        if (((((struct o14_int *)0xC23EB08)->v)) == 9) {
            (((struct o24_uint *)0xC23EAC8)->v) = (((((struct o24_int *)0xC23EAC8)->v)) + 0x1);
        }
        break;
    case 4:
        t41 = *(signed char *)0xC23EBD7;
        *(unsigned int *)(((int)stk + 8)) = t41;
        t42 = FUN_0c012570(t41);
        FUN_0c0112b0((signed char)t42);
        *(unsigned char *)0xC23EB81 = (FUN_0c016280());
        FUN_0c0e631c((((((struct o4_int *)0xC23EB08)->v)) + 0xD801), 0xC23EB5B, 0xE0);
        FUN_0c015436(((((struct o18_int *)0xC23EB08)->v)), 0x0);
        (((struct o24_uint *)0xC23EAC8)->v) = (((((struct o24_int *)0xC23EAC8)->v)) + 0x1);
        break;
    case 5:
        t50 = (((struct o14_int *)0xC23EB08)->v);
        if (t50 != 3) {
            t51 = 0xC0F4604;
            if (t50 != 10) {
                t51 = 0xC0F45F8;
            }
            t56 = t51;
        } else {
            nlScale(0.379999995f, 0.379999995f, 0.379999995f);
            t56 = 0xC0F4610;
        }
        FUN_0c0dcca0(t56);
        FUN_0c010c14();
        FUN_0c0156ea(((((struct o18_int *)0xC23EB08)->v)), ((((struct o4_int *)0xC23EB08)->v)), 0xDC00, 0x0);
        if (((((struct o14_int *)0xC23EB08)->v)) == 9) {
            FUN_0c0e2a4c(((((struct o0_int *)0xC23EB08)->v)));
            FUN_0c0154a4();
            (((struct o24_uint *)0xC23EAC8)->v) = (((((struct o24_int *)0xC23EAC8)->v)) + 0x1);
        }
        break;
    case 6:
        *(unsigned int *)0xC23A260 = 0x3;
        break;
    }
    return (nlPopMatrix(0x1));
}





