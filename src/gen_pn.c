/* Straight-line functions with calls and guards (batch gen_pn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c084800(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0c47ae(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c0a1e7e(int a4, int a5, int a6, int a7);

int FUN_0c0a1e7e(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t1;
    register int t2;
    register int t16;
    register int t21;
    register int t25;
    register int t33;
    register int t35;
    register float u45;
    register float u46;
    register float u51;
    register float u52;
    register float u54;
    register float u55;
    register float u58;
    register float u59;
    register int t84;
    register int t85;
    register int t89;
    register int t87;
    register int t94;
    int t15;
    register int t34;
    register float u36;
    register float u37;
    register float u38;
    register float u39;
    int t80;

    t1 = *(int *)((a4 + 0x30));
    t2 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    FUN_0c0685a4(a4, a5, a6, a7);
    if (((*(int *)((t1 + 0x2EC))) & 15) != 0) {
        *(unsigned int *)((a4 + 0x34)) = 0x1;
    }
    if ((*(int *)((((*(int *)((t1 + 0xBC))) << 2) + 0xC247030))) == 0) {
        t94 = (FUN_0c0e19f2());
    } else {
        nlPushMatrix(0x0);
        FUN_0c0dbda0((((((*(int *)((a4 + 0x44))) << 2) << 2) << 2) + (*(int *)((t1 + 0x3E4)))));
        FUN_0c0db470(0xC10CEAC, (((int)stk + 4) + 0x14));
        if (((*(int *)((a4 + 0x34))) == 0) && (t15 = *(int *)((a4 + 0x4C)), t15 != 1)) {
            t16 = *(int *)((a4 + 0x50));
            *(unsigned int *)((((t16 * 0x1C) + (a4 + 0x54)) + 0x10)) = (*(int *)((a4 + 0x48)));
            *(float *)((((t16 * 0x1C) + (a4 + 0x54)) + 0xC)) = 0.0f;
            FUN_0c0dbda0((((((*(int *)((a4 + 0x44))) << 2) << 2) << 2) + (*(int *)((t1 + 0x3E4)))));
            t21 = FUN_0c0da2e0();
            nlRotateAY((t21 << 1));
            FUN_0c0db470(0xC10CEB8, ((t16 * 0x1C) + (a4 + 0x54)));
            t25 = *(int *)((a4 + 0x50));
            *(unsigned int *)((a4 + 0x50)) = (t25 + 0x1);
            if ((int)(t25 + 0x1) >= (int)0x10) {
                *(unsigned int *)((a4 + 0x50)) = 0x0;
            }
        }
        nlPopMatrix(0x1);
        *(unsigned int *)(((int)stk + 20)) = 0x0;
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t33 = 0xC0A2070;
        t35 = (a4 + 0x54);
        for (;;) {
            if ((*(int *)((t35 + 0x10))) == 0) {
            } else {
                t33 = 0xC0A2074;
                *(unsigned int *)(((int)stk + 20)) = 0x1;
                u37 = (*(float *)((t33 + 0x0)));
                t33 = 0xC;
                u36 = (*(float *)((t35 + t33)));
                u36 = (u36 * u37);
                t33 = 0xC0A207C;
                u37 = 1.0f;
                u39 = (FUN_0c0da410((int)u36));
                u37 = (u37 - u39);
                u36 = (*(float *)((t33 + 0x0)));
                t33 = 0xC0A2080;
                u45 = *(float *)((t33 + 0x0));
                t33 = 0x278;
                u46 = u36;
                u46 = u46 + u45 * u37;
                u36 = u46;
                u37 = (*(float *)((t1 + t33)));
                u38 = u36;
                u38 = (u38 * u37);
                t33 = (nlUnitMatrix());
                t33 = 0x8;
                u37 = (*(float *)((t35 + t33)));
                t33 = 0x4;
                *(float *)((((int)stk + 4) + t33)) = u37;
                t33 = 0x1C;
                u36 = (*(float *)((((int)stk + 4) + t33)));
                t33 = 0x4;
                u36 = (u36 - u37);
                u51 = *(float *)((t35 + t33));
                t33 = 0x8;
                *(float *)((((int)stk + 4) + t33)) = u51;
                t33 = 0x18;
                u52 = u37;
                u52 = u52 + u39 * u36;
                u37 = u52;
                u54 = u37;
                u37 = (*(float *)((((int)stk + 4) + t33)));
                t33 = 0xC;
                u37 = (u37 - u51);
                u55 = u51;
                u55 = u55 + u39 * u37;
                u37 = (*(float *)((t35 + 0x0)));
                *(float *)((((int)stk + 4) + t33)) = u37;
                t33 = 0x14;
                u36 = u37;
                u58 = u37;
                u37 = (*(float *)((((int)stk + 4) + t33)));
                u37 = (u37 - u58);
                u59 = u36;
                u59 = u59 + u39 * u37;
                u36 = u59;
                t33 = (FUN_0c0dcc70(u36, u55, u54));
                t33 = 0x3CE;
                t33 = (nlRotateAY((*(short *)((t2 + t33)))));
                t33 = 0x3CC;
                t33 = (nlRotateAX((*(short *)((t2 + t33)))));
                t34 = 0xC0DC950;
                t33 = (nlRotateAZ((*(int *)((t35 + 0x18)))));
                t33 = (nlScale(u38, u38, u38));
                t34 = 0xC0DE000;
                t33 = (FUN_0c0de000(u38));
                t33 = (FUN_0c084800(u39, u39, u39));
                t34 = 0xC0C47AE;
                t33 = (FUN_0c0c47ae((*(int *)((t35 + 0x10)))));
                t33 = 0xC;
                u37 = (*(float *)((t35 + t33)));
                u37 = (u37 + 0.0625f);
                u36 = u37;
                *(float *)((t35 + t33)) = u37;
                if (u36 > 1.0f) {
                    *(unsigned int *)((t35 + 0x10)) = 0x0;
                }
            }
            t34 = (*(int *)(((int)stk + 4)));
            t34 = (t34 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = t34;
            t35 = (t35 + 0x1C);
            if ((int)t34 < (int)0x10) continue;
            break;
        }
        nlPopMatrix(0x1);
        if (((*(int *)((a4 + 0x34))) != 0) && (t80 = *(int *)(((int)stk + 20)), t80 == 0)) {
            FUN_0c0e19f2();
        }
        t84 = FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
        t85 = *(int *)((a4 + 0x3C));
        *(unsigned int *)((a4 + 0x3C)) = (t85 - 1);
        t89 = t84;
        if ((int)(t85 - 1) < 0) {
            *(unsigned int *)((a4 + 0x3C)) = (*(int *)((a4 + 0x40)));
            t87 = *(int *)((a4 + 0x38));
            *(unsigned int *)((a4 + 0x38)) = (t87 - 1);
            if ((int)(t87 - 1) < 0) {
                *(unsigned int *)((a4 + 0x34)) = 0x1;
            }
            t89 = 0x40;
        }
        t94 = t89;
    }
    return t94;
}
