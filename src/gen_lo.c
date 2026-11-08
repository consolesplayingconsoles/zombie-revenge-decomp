/* Straight-line functions with calls and guards (batch gen_lo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0a81ac(int, int, int, int);
int FUN_0c0be6ee(int, int);
int FUN_0c0c475c(int, float);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc80(int);
int FUN_0c0dcca0(int);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int FUN_0c093c80(int a4);
struct o10_float { char p[0x10]; float v; };
struct o5C_int { char p[0x5C]; int v; };
struct o60_int { char p[0x60]; int v; };
struct o64_int { char p[0x64]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };


int FUN_0c093c80(int a4)
{
    int stk[40];
    register int t6;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t15;
    register int t16;
    register float u25;
    register int t26;
    register float t27;
    register float u47;
    register int t69;
    register int t72;
    register int t74;
    int R1004;
    int R1008;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    nlPushMatrix(((((((((struct o5C_int *)(a4))->v)) << 8) + 0xC25F840) + ((((((((struct o60_int *)(a4))->v)) << 2) << 2) << 2) << 1)) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    *(unsigned int *)(((int)stk + 28)) = 0x0;
    R1004 = (a4 + 0x34);
    *(unsigned int *)(((int)stk + 44)) = 0x9;
    t6 = *(int *)((a4 + 0x30));
    t8 = t6;
    t9 = ((((struct o64_int *)(a4))->v));
    t10 = (t6 + 0x14);
    for (;;) {
        t11 = t10;
        t10 = (t10 + 0x14);
        t12 = t8;
        t8 = (t8 + 0x14);
        { struct mv5 { int w[5]; }; *(struct mv5 *)(t12) = *(struct mv5 *)(t11); }
        t9 = (t9 - 0x1);
        if (t9 == 0) {
            break;
        }
    }
    FUN_0c0db840((((int)stk + 4) + 0x30));
    FUN_0c0a79fa((((int)stk + 4) + 0x8), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x10));
    t15 = *(int *)((a4 + 0x30));
    t16 = (((struct o64_int *)(a4))->v);
    (((struct o8_float *)(((((t16 << 2) + t16) << 2) + t15)))->v) = (*(float *)(((int)stk + 52)));
    (((struct oC_float *)(((((t16 << 2) + t16) << 2) + t15)))->v) = (*(float *)(((int)stk + 56)));
    (((struct o10_float *)(((((t16 << 2) + t16) << 2) + t15)))->v) = (*(float *)(((int)stk + 60)));
    *(unsigned short *)((((((t16 << 2) + t16) << 2) + t15) + 0x0)) = (*(int *)(((int)stk + 12)));
    *(unsigned short *)((((((t16 << 2) + t16) << 2) + t15) + 0x2)) = (*(short *)(((int)stk + 16)));
    *(unsigned short *)((((((t16 << 2) + t16) << 2) + t15) + 0x4)) = (*(short *)(((int)stk + 20)));
    FUN_0c0a81ac(((*(int *)((a4 + 0x30))) + 0x14), 0x0, (((int)stk + 4) + 0x60), (((int)stk + 4) + 0x48));
    *(unsigned int *)(((int)stk + 32)) = 0xC200B18;
    R1008 = 0xC200B30;
    *(unsigned int *)(((int)stk + 36)) = 0xC200B00;
    *(unsigned int *)(((int)stk + 40)) = 0xC200B0C;
    u25 = 1.0f;
    for (;;) {
        t26 = *(int *)(((int)stk + 28));
        *(unsigned int *)(((int)stk + 28)) = (t26 + 0xC71);
        t27 = FUN_0c0da410((t26 + 0xC71));
        *(float *)(((int)stk + 48)) = (t27 * 0.5f);
        FUN_0c0a81ac(((*(int *)((a4 + 0x30))) + 0x14), (*(int *)(((R1004) + 0x0))), (((int)stk + 4) + 0x54), (((int)stk + 4) + 0x3C));
        nlUnitMatrix();
        nlRotateAZ((-(*(int *)(((int)stk + 72)))));
        nlRotateAX((-(*(int *)(((int)stk + 64)))));
        nlRotateAY((-(*(int *)(((int)stk + 68)))));
        FUN_0c0dcc80((((int)stk + 4) + 0x54));
        FUN_0c0dcca0((((int)stk + 4) + 0x60));
        nlRotateAY((*(int *)(((int)stk + 80))));
        nlRotateAX((*(int *)(((int)stk + 76))));
        nlRotateAZ((*(int *)(((int)stk + 84))));
        u47 = (t27 * t27);
        u25 = (u25 * 10.0f);
        (((struct o8_float *)((*(int *)(((int)stk + 32)))))->v) = (u47 * 10.0f);
        (((struct o8_float *)((R1008)))->v) = u25;
        FUN_0c0db470((R1008), (*(int *)(((int)stk + 36))));
        FUN_0c0db470(0xC200B3C, (*(int *)(((int)stk + 40))));
        FUN_0c0be6ee(0x3C7, 0xC200B00);
        FUN_0c0dbda0(((*(int *)(((int)stk + 24))) + 0x2AC));
        FUN_0c0dcca0((((int)stk + 4) + 0x54));
        nlRotateAY((*(int *)(((int)stk + 68))));
        nlRotateAX((*(int *)(((int)stk + 64))));
        nlRotateAZ((*(int *)(((int)stk + 72))));
        FUN_0c0848d6((t27 * t27), (t27 * t27), 1.0f);
        FUN_0c0c475c(0x3C7, (*(float *)(((int)stk + 48))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x60)) = *(struct mv3 *)((((int)stk + 4) + 0x54)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x48)) = *(struct mv3 *)((((int)stk + 4) + 0x3C)); }
        u25 = (t27 * t27);
        R1004 = ((R1004) + 0x4);
        t69 = *(int *)(((int)stk + 44));
        *(unsigned int *)(((int)stk + 44)) = (t69 - 1);
        if ((t69 - 1) != 0) continue;
        break;
    }
    FUN_0c0849da();
    nlPopMatrix(0x1);
    t72 = (((struct o68_int *)(a4))->v);
    (((struct o68_uint *)(a4))->v) = (t72 - 1);
    t74 = 0x68;
    if ((int)(t72 - 1) <= 0) {
        t74 = (FUN_0c0e19f2());
    }
    return t74;
}
