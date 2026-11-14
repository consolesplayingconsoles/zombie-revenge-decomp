/* Straight-line functions with calls and guards (batch gen_abi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
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
int FUN_0c0e631c(int, int, int);
int FUN_0c0f29d8(int, int, int);
int FUN_0c0f2fa8(int, ...);
int FUN_0c0f30f8(int, int);
int FUN_0c0f31b8(int, int);
int FUN_0c0f3bf4(int, int, int, int, int, int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c0a6e8c(int a4, int a5, int a6, Stk4 s, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c0a6928(int a4, int a5, int a6, Stk4 s, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c0f271e(int a4, Stk3 s);
int FUN_0c0f2b70(int a4, int a5, int a6, Stk2 s);



int FUN_0c0f271e(int a4, Stk3 s)
{
    int stk[27];
    register int t0;
    register int t9;
    register int t10;
    register int t12;
    register int t34;
    register int t36;
    register int t50;
    register int t40;
    register int t17;

    stk[16] = s.w[0];
    stk[17] = s.w[1];
    stk[18] = s.w[2];
    *(int *)((int)stk + 16) = s.w[2];
    *(int *)((int)stk + 12) = s.w[1];
    t0 = FUN_0c0f2fa8(s.w[1], s.w[2]);
    if (t0 != 0) {
        if (t0 == 1) {
            *(unsigned int *)0xC94D960 = 0x4B8;
        }
        if (t0 == 2) {
            *(unsigned int *)0xC94D960 = 0x44C;
        }
        *(unsigned int *)(((((int)stk + 20) + 0x38) + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)(((((int)stk + 20) + 0x38) + 0x4)) = 0xFFFFFFFF;
        *(unsigned int *)((s.w[0] + 0x0)) = (*(int *)(((((int)stk + 20) + 0x38) + 0x0)));
        t50 = *(int *)(((((int)stk + 20) + 0x38) + 0x4));
        *(unsigned int *)((s.w[0] + 0x4)) = t50;
    } else {
        *(int *)((int)stk + 16) = s.w[2];
        *(int *)((int)stk + 12) = s.w[1];
        *(int *)((int)stk + 8) = 0x0;
        *(int *)((int)stk + 4) = 0x0;
        t9 = FUN_0c0f3bf4(t0, 0x0, 0x0, 0x0, 0x0, 0x0, s.w[1], s.w[2]);
        if (t9 == 0) {
            *(unsigned int *)((a4 + 0x0)) = 0x0;
            *(unsigned int *)((s.w[0] + 0x0)) = 0x0;
            *(unsigned int *)((s.w[0] + 0x4)) = 0x0;
            t40 = 0x0;
        } else {
            *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 20) + 0x38) + 0x6);
            t10 = *(short *)((((((int)stk + 20) + 0x38) + 0x6) + 0x0));
            *(unsigned int *)((a4 + 0x0)) = ((((unsigned int)((unsigned int)(unsigned short)t10 >> 2) >> 2) & 0x7FF) - 1022);
            if ((((((unsigned int)((unsigned int)(unsigned short)t10 >> 2) >> 2) & 0x7FF) - 1022) + 0x3FE) == 0) {
                *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) + 0x1);
                t12 = *(int *)(((int)stk + 20));
                *(unsigned short *)((t12 + 0x0)) = ((*(short *)((t12 + 0x0))) & 0x800F);
                *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 20) + 0x38) + 0x4);
                FUN_0c0f31b8((((int)stk + 20) + 0xC), ((((int)stk + 20) + 0x38) + 0x4));
                FUN_0c0f31b8(((((int)stk + 20) + 0xC) + 0x4), (((int)stk + 20) + 0x38));
                for (;;) {
                    if (((unsigned char)(*(signed char *)((((((int)stk + 20) + 0xC) + 0x1) + 0x0))) & 0x10) != 0) {
                        break;
                    }
                    FUN_0c0f30f8(((((int)stk + 20) + 0xC) + 0x1), 0x7);
                    t17 = (*(int *)((a4 + 0x0)));
                    t17 = (t17 - 1);
                    *(unsigned int *)((a4 + 0x0)) = t17;
                }
                *(unsigned int *)(((int)stk + 28)) = (((int)stk + 20) + 0xC);
                FUN_0c0f31b8((*(int *)(((int)stk + 24))), (((int)stk + 20) + 0xC));
                FUN_0c0f31b8((((int)stk + 20) + 0x38), ((*(int *)(((int)stk + 28))) + 0x4));
            }
            t34 = *(int *)(((int)stk + 20));
            *(unsigned short *)((t34 + 0x0)) = ((*(short *)((t34 + 0x0))) & 0x800F);
            t36 = *(int *)(((int)stk + 20));
            *(unsigned short *)((t36 + 0x0)) = ((*(short *)((t36 + 0x0))) | 0x3FE0);
            *(unsigned int *)((s.w[0] + 0x0)) = (*(int *)(((((int)stk + 20) + 0x38) + 0x0)));
            *(unsigned int *)((s.w[0] + 0x4)) = (*(int *)(((((int)stk + 20) + 0x38) + 0x4)));
            t40 = s.w[0];
        }
        t50 = t40;
    }
    return t50;
}


