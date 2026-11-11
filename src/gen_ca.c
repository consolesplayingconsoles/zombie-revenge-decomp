/* Straight-line functions with calls and guards (batch gen_ca): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c0685a4(int, int, int, int);
int FUN_0c084800(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0c475c(int, float);
int FUN_0c0da2e0(void);
int FUN_0c0db4d0(int, int);
int FUN_0c0db840(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c0add8c(int a4, int a5, int a6, int a7);

int FUN_0c0add8c(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t2;
    register int t3;
    register float u8;
    register float u9;
    register int t22;
    register int t35;
    register float u36;
    register float u39;
    register int t41;
    register float u42;
    register float u45;
    register int t47;
    register float u48;
    register float u51;
    register int t55;
    register int t57;
    int t83;
    register int t86;
    register int t87;
    register int t23;
    register int t24;
    register float u25;
    register int t84;
    register int t85;
    register float u88;
    register float u89;
    register float u90;
    register float u91;
    register int t113;
    register float u114;
    register int t134;
    register float u135;
    register float u136;

    *(unsigned int *)(((int)stk + 12)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    t2 = *(int *)((a4 + 0x30));
    t3 = FUN_0c0685a4(a4, a5, a6, a7);
    if ((int)(*(int *)((a4 + 0x38))) > 0) {
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 1);
        return t3;
    }
    *(unsigned int *)(((int)stk + 16)) = (int)(((((struct o34_float *)(a4))->v)) * ((((struct o8_float *)(t2))->v)));
    u8 = (((struct o4_float *)(t2))->v);
    u9 = (((struct o34_float *)(a4))->v);
    (((struct o34_float *)(a4))->v) = (u9 + u8);
    if (!((u9 + u8) > 0.0f)) {
        FUN_0c0e19f2();
    }
    if ((int)((((struct o40_int *)(a4))->v)) > 0) {
        (((struct o40_uint *)(a4))->v) = (((((struct o40_int *)(a4))->v)) - 1);
    } else {
        (((struct o40_uint *)(a4))->v) = (*(int *)((t2 + 0x34)));
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        t22 = 0xC0ADE38;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 8))) >= (int)(*(int *)((t2 + 0x30)))) {
                break;
            }
            t24 = (*(int *)((a4 + 0x3C)));
            t24 = (t24 + 0x1);
            *(unsigned int *)((a4 + 0x3C)) = t24;
            t24 = (t24 - 1);
            t24 = (t24 << 2);
            t23 = (*(int *)((a4 + 0x3C)));
            t24 = (t24 << 2);
            t24 = (t24 << 1);
            t24 = (t24 + (a4 + 0x44));
            if ((unsigned int)t23 >= (unsigned int)0x100) {
                *(unsigned int *)((a4 + 0x3C)) = 0x0;
            }
            t23 = 0xC0DCCC0;
            t22 = (nlUnitMatrix());
            t22 = (FUN_0c0da2e0());
            t22 = (t22 & 0xFFF);
            t35 = t22;
            t22 = 0x78;
            u36 = *(float *)((t2 + t22));
            t22 = 0x54;
            u25 = (float)t35;
            u39 = (*(float *)((t2 + t22)));
            u39 = u39 + ((u36 / 4095.0f)) * u25;
            *(float *)(((int)stk + 4)) = u39;
            t22 = (FUN_0c0da2e0());
            t22 = (t22 & 0xFFF);
            t41 = t22;
            t22 = 0x74;
            u42 = *(float *)((t2 + t22));
            t22 = 0x50;
            u25 = (float)t41;
            u45 = (*(float *)((t2 + t22)));
            u45 = u45 + ((u42 / 4095.0f)) * u25;
            *(float *)(((int)stk + 0)) = u45;
            t22 = (FUN_0c0da2e0());
            t22 = (t22 & 0xFFF);
            t47 = t22;
            t22 = 0x70;
            u48 = *(float *)((t2 + t22));
            t22 = 0x4C;
            u25 = (float)t47;
            u51 = (*(float *)((t2 + t22)));
            u51 = u51 + ((u48 / 4095.0f)) * u25;
            t22 = (FUN_0c0dcc70(u51, u45, u39));
            t22 = (FUN_0c0da2e0());
            t23 = 0xC0E5DC0;
            t22 = (t22 & 0xFFF);
            t55 = t22;
            t22 = 0xFFF;
            t22 = ((int)((int)((((struct o44_int *)(t2))->v)) / (int)t22));
            t57 = (t55 * t22);
            t22 = 0x48;
            t23 = (*(int *)((t2 + t22)));
            t22 = 0x40;
            t22 = (nlRotateAY(((*(int *)((t2 + t22))) + (t57 * t23))));
            t23 = 0xC0DCCA0;
            t22 = (FUN_0c0dcca0((t2 + 0x64)));
            t22 = (FUN_0c0db840(t24));
            t23 = 0xC0DB4D0;
            t22 = (FUN_0c0db4d0((t2 + 0x58), (t24 + 0xC)));
            t22 = 0xC;
            u25 = (*(float *)((t2 + t22)));
            t22 = 0x18;
            *(float *)((t24 + t22)) = u25;
            t22 = 0x34;
            u25 = (*(float *)((a4 + t22)));
            *(unsigned int *)((t24 + 0x1C)) = (int)u25;
            t23 = (*(int *)(((int)stk + 8)));
            t23 = (t23 + 0x1);
            *(unsigned int *)(((int)stk + 8)) = t23;
        }
        nlPopMatrix(0x1);
    }
    t83 = (FUN_0c084800(((((struct o14_float *)(t2))->v)), ((((struct o18_float *)(t2))->v)), ((((struct o1C_float *)(t2))->v))));
    t86 = 0x0;
    t87 = (a4 + 0x44);
    for (;;) {
        if ((*(int *)((t87 + 0x1C))) == 0) {
        } else {
            t83 = 0x10;
            u89 = 0.0f;
            u88 = (*(float *)((t87 + t83)));
            u91 = 1.0f;
            if (u88 != u89) {
                t84 = 0x24;
                t84 = (t84 + t2);
                u88 = (*(float *)((t84 + 0x0)));
                *(float *)((t87 + t83)) = ((*(float *)((t87 + t83))) + u88);
            }
            t85 = (*(int *)(((int)stk + 16)));
            if ((int)(*(int *)((t87 + 0x1C))) < (int)t85) {
                t85 = (*(int *)((t87 + 0x1C)));
                t84 = 0x2C;
                t84 = (t84 + t2);
                t83 = 0xC;
                u89 = (float)t85;
                u88 = (float)(*(int *)(((int)stk + 16)));
                u91 = u89;
                u89 = (*(float *)((t84 + 0x0)));
                t84 = 0x2C;
                t84 = (t84 + t2);
                u91 = (u91 / u88);
                u88 = (*(float *)((t87 + t83)));
                u88 = (u88 * u89);
                *(float *)((t87 + t83)) = u88;
                t83 = 0x14;
                u88 = (*(float *)((t87 + t83)));
                u89 = (*(float *)((t84 + 0x0)));
                u88 = (u88 * u89);
                *(float *)((t87 + t83)) = u88;
            }
            t85 = 0xC0DCD10;
            t83 = (nlAddVector(t87, (t87 + 0xC)));
            t83 = 0x28;
            u89 = (*(float *)((t2 + t83)));
            t83 = 0x4;
            u88 = (*(float *)((t87 + t83)));
            if ((u89 > u88) && (t83 = 0x10, t113 = (u89 > u88), u89 = 0.0f, u114 = *(float *)((t87 + t83)), u88 = u114, u89 > u88)) {
                t83 = 0x28;
                u89 = (*(float *)((t2 + t83)));
                t83 = 0x4;
                *(float *)((t87 + t83)) = u89;
                t83 = 0x10;
                *(float *)((t87 + t83)) = 0.0f;
            }
            t84 = 0x10;
            t84 = (t84 + t2);
            t83 = 0x18;
            u89 = (*(float *)((t84 + 0x0)));
            u88 = (*(float *)((t87 + t83)));
            u88 = (u88 + u89);
            u89 = 0.0f;
            *(float *)((t87 + t83)) = u88;
            if (u91 > u89) {
                t83 = (nlPushMatrix(0x0));
                t85 = 0xC0DCCA0;
                t83 = (FUN_0c0dcca0(t87));
                t85 = 0xC0DC890;
                t83 = 0x3CE;
                t83 = (nlRotateAY((*(short *)(((*(int *)(((int)stk + 12))) + t83)))));
                t85 = 0xC0DC6E0;
                t83 = 0x3CC;
                t83 = (nlRotateAX((*(short *)(((*(int *)(((int)stk + 12))) + t83)))));
                t83 = (nlRotateAZ((t86 * 0x3723)));
                t83 = 0x18;
                t85 = 0xC0DCB80;
                u90 = (*(float *)((t87 + t83)));
                t83 = (nlScale(u90, u90, 1.0f));
                t85 = 0xC0DE000;
                t83 = 0x18;
                t83 = (FUN_0c0de000((*(float *)((t87 + t83)))));
                t83 = 0x20;
                u89 = (*(float *)((t2 + t83)));
                t85 = 0xC0C475C;
                t83 = (FUN_0c0c475c(0x2F1, (u91 * u89)));
                t83 = (nlPopMatrix(0x1));
            } else {
                t134 = t84;
                u135 = u88;
                u136 = u89;
            }
            u88 = u135;
            u89 = u136;
            t84 = t134;
            t85 = (*(int *)((t87 + 0x1C)));
            t85 = (t85 - 1);
            *(unsigned int *)((t87 + 0x1C)) = t85;
        }
        t86 = (t86 + 0x1);
        t87 = (t87 + 0x20);
        if ((unsigned int)t86 < (unsigned int)0x100) continue;
        break;
    }
    return FUN_0c0849da();
}
