/* Straight-line functions with calls and guards (batch gen_ol): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[5]; } Stk5;
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0db470(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c0a6e8c(int a4, int a5, int a6, Stk5 s, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c0a6928(int a4, int a5, int a6, Stk5 s, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int FUN_0c0a6e8c(int a4, int a5, int a6, Stk5 s, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int stk[28];
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    stk[16] = s.w[0];
    stk[17] = s.w[1];
    stk[18] = s.w[2];
    stk[19] = s.w[3];
    (((struct o38_float *)(((int)stk + 4)))->v) = f10;
    (((struct o34_float *)(((int)stk + 4)))->v) = f11;
    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(float *)(((int)stk + 24)) = *(float *)&s.w[2];
    *(float *)(((int)stk + 28)) = *(float *)&s.w[3];
    *(float *)(((int)stk + 60)) = ((*(float *)(((int)stk + 60))) - f7);
    *(float *)(((int)stk + 56)) = ((*(float *)(((int)stk + 56))) - f8);
    u2 = (*(float *)&s.w[0] - f9);
    *(float *)(((int)stk + 64)) = u2;
    u3 = (*(float *)&s.w[1] - f7);
    *(float *)(((int)stk + 68)) = u3;
    u4 = (*(float *)&s.w[2] - f8);
    *(float *)(((int)stk + 72)) = u4;
    u5 = (*(float *)&s.w[3] - f9);
    *(float *)(((int)stk + 76)) = u5;
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), f4, f5, f6);
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAX((-(*(int *)(((int)stk + 4)))));
    nlRotateAY((-(*(int *)(((int)stk + 8)))));
    *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 60)));
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 56)));
    *(float *)(((int)stk + 52)) = u2;
    FUN_0c0db470((((int)stk + 4) + 0x28), (((int)stk + 4) + 0x1C));
    (((struct o38_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 32)));
    (((struct o34_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 36)));
    (((struct o54_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 40)));
    *(float *)(((int)stk + 44)) = u3;
    *(float *)(((int)stk + 48)) = u4;
    *(float *)(((int)stk + 52)) = u5;
    FUN_0c0db470((((int)stk + 4) + 0x28), (((int)stk + 4) + 0x1C));
    (((struct o58_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 32)));
    (((struct o5C_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 36)));
    (((struct o60_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 40)));
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    u2 = *(float *)&s.w[4];
    *(float *)(((int)stk + 64)) = u2;
    *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 60)));
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 56)));
    *(float *)(((int)stk + 52)) = u2;
    FUN_0c0db470((((int)stk + 4) + 0x28), (((int)stk + 4) + 0x1C));
    (((struct o38_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 32)));
    (((struct o34_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 36)));
    (((struct o54_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 40)));
    nlPopMatrix(0x1);
    *(float *)(((*(int *)(((int)stk + 20))) + 0x0)) = ((f7 + (*(float *)(((int)stk + 60)))) - *(float *)&s.w[1]);
    *(float *)(((*(int *)(((int)stk + 16))) + 0x0)) = ((f8 + (*(float *)(((int)stk + 56)))) - (*(float *)(((int)stk + 24))));
    *(float *)(((*(int *)(((int)stk + 12))) + 0x0)) = ((f9 + u2) - (*(float *)(((int)stk + 28))));
    return 0x18;
}

int FUN_0c0a6928(int a4, int a5, int a6, Stk5 s, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int stk[26];
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    stk[14] = s.w[0];
    stk[15] = s.w[1];
    stk[16] = s.w[2];
    stk[17] = s.w[3];
    (((struct o30_float *)(((int)stk + 4)))->v) = f10;
    (((struct o2C_float *)(((int)stk + 4)))->v) = f11;
    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(float *)(((int)stk + 52)) = ((*(float *)(((int)stk + 52))) - f7);
    *(float *)(((int)stk + 48)) = ((*(float *)(((int)stk + 48))) - f8);
    u2 = (*(float *)&s.w[0] - f9);
    *(float *)(((int)stk + 56)) = u2;
    u3 = (*(float *)&s.w[1] - f7);
    *(float *)(((int)stk + 60)) = u3;
    u4 = (*(float *)&s.w[2] - f8);
    *(float *)(((int)stk + 64)) = u4;
    u5 = (*(float *)&s.w[3] - f9);
    *(float *)(((int)stk + 68)) = u5;
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), f4, f5, f6);
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAX((-(*(int *)(((int)stk + 4)))));
    nlRotateAY((-(*(int *)(((int)stk + 8)))));
    *(float *)(((int)stk + 36)) = (*(float *)(((int)stk + 52)));
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 48)));
    *(float *)(((int)stk + 44)) = u2;
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    (((struct o30_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 24)));
    (((struct o2C_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 28)));
    (((struct o48_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 32)));
    *(float *)(((int)stk + 36)) = u3;
    *(float *)(((int)stk + 40)) = u4;
    *(float *)(((int)stk + 44)) = u5;
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    (((struct o4C_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 24)));
    (((struct o50_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 28)));
    (((struct o54_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 32)));
    nlUnitMatrix();
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAX((*(int *)(((int)stk + 4))));
    if (*(float *)&s.w[4] > u2) {
        u2 = *(float *)&s.w[4];
        *(float *)(((int)stk + 56)) = u2;
    }
    *(float *)(((int)stk + 36)) = (*(float *)(((int)stk + 52)));
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 48)));
    *(float *)(((int)stk + 44)) = u2;
    FUN_0c0db470((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
    (((struct o30_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 24)));
    (((struct o2C_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 28)));
    (((struct o48_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 32)));
    nlPopMatrix(0x1);
    *(float *)(((*(int *)(((int)stk + 20))) + 0x0)) = (f7 + (*(float *)(((int)stk + 52))));
    *(float *)(((*(int *)(((int)stk + 16))) + 0x0)) = (f8 + (*(float *)(((int)stk + 48))));
    *(float *)(((*(int *)(((int)stk + 12))) + 0x0)) = (f9 + u2);
    return 0x48;
}
