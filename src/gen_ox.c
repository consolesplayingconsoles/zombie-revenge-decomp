/* Straight-line functions with calls and guards (batch gen_ox): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int, int, int);
int FUN_0c0911b8(int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c465c(int);
float FUN_0c0da410(int);
int FUN_0c0db800(int, int, int, int, int);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
extern int FUN_0c0e19f2();
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c05bcd0(int a4, int a5, int a6, int a7);

int FUN_0c05bcd0(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t3;
    register int t18;
    register int t24;
    register int t25;
    register float u55;
    register int t110;
    register float u67;
    register float u71;
    register int t73;
    register float u75;
    register float u76;
    register float u77;
    register float t78;
    register int t90;
    register int t96;
    register float u100;
    register float u101;

    if ((*(int *)((a4 + 0xD8))) != 0) {
        FUN_0c05a98a(a4, a5, a6);
        if ((int)(*(int *)((a4 + 0xBC))) < (int)0x2) {
            t3 = *(int *)((a4 + 0xBC));
            *(unsigned int *)(((((t3 << 2) << 2) << 1) + 0xC247548)) = ((*(int *)(((((t3 << 2) << 2) << 1) + 0xC247548))) + 0x1);
        }
        if ((*(int *)((a4 + 0xD8))) == 1) {
            FUN_0c054c8a(a4);
        }
        if ((*(int *)((a4 + 0x21C))) != 0) {
            *(unsigned int *)((a4 + 0xD8)) = 0x0;
        } else {
            t18 = ((int (*)(void))(FUN_0c0e19f2))();
        }
    } else {
        t24 = *(int *)((a4 + 0x22C));
        *(unsigned int *)((a4 + 0x22C)) = (t24 - 1);
        if ((int)(t24 - 1) <= 0) {
            t25 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
        }
    }
    if ((*(int *)((a4 + 0x23C))) == 0) {
        *(unsigned int *)((a4 + 0x23C)) = 0x1;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    }
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
    FUN_0c01cdc2(a4);
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((a4 + 0x6E))));
    nlRotateAX((*(short *)((a4 + 0x6C))));
    u55 = *(float *)((a4 + 0x24C));
    nlScale(u55, u55, (*(float *)((a4 + 0x238))));
    FUN_0c0de000((*(float *)((a4 + 0x250))));
    FUN_0c0c465c((*(int *)((a4 + 0x220))));
    nlPopMatrix(0x1);
    t110 = 0x21C;
    if ((*(int *)((a4 + 0x21C))) == 0) {
    } else {
        FUN_0c0911b8((a4 + 0x30), (a4 + 0x48));
        u67 = (*(float *)((a4 + 0x254)));
        u67 = u67 + 0.399999976f * (((-(*(float *)(((0x254 + a4) + 0x0)))) + 1.0f));
        *(float *)((a4 + 0x254)) = u67;
        u71 = (*(float *)((a4 + 0x258)));
        u71 = u71 + 0.399999976f * (((-(*(float *)(((0x258 + a4) + 0x0)))) + 9102.0f));
        *(float *)((a4 + 0x258)) = u71;
        nlPushMatrix(0x0);
        t73 = *(short *)((a4 + 0x70));
        *(unsigned short *)((a4 + 0x70)) = (t73 + 0x1888);
        *(unsigned int *)(((int)stk + 16)) = (short)(t73 + 0x1888);
        u75 = *(float *)((a4 + 0x254));
        u76 = (u75 * 1.0f);
        u77 = (u75 * 1.0f);
        t78 = FUN_0c0da410((int)(*(float *)((a4 + 0x258))));
        *(unsigned int *)(((int)stk + 12)) = 0x8;
        FUN_0c0dcca0((a4 + 0x30));
        FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), (-(*(float *)((a4 + 0x48)))), (-(*(float *)((a4 + 0x4C)))), (-(*(float *)((a4 + 0x50)))));
        nlRotateAY((*(int *)(((int)stk + 8))));
        nlRotateAX((*(int *)(((int)stk + 4))));
        nlPushMatrix(0x0);
        for (;;) {
            FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
            t90 = *(int *)(((int)stk + 16));
            *(unsigned int *)(((int)stk + 16)) = (t90 + 0x1FFF);
            nlRotateAZ((t90 + 0x1FFF));
            nlRotateAY(0xAAA);
            nlScale((u76 * 0.0199999996f), (u76 * 0.0199999996f), (u77 * 0.049999997f));
            FUN_0c0de000((u77 * 0.049999997f));
            FUN_0c0c465c(0x3C9);
            t96 = *(int *)(((int)stk + 12));
            *(unsigned int *)(((int)stk + 12)) = (t96 - 1);
            if ((t96 - 1) == 0) {
                break;
            }
        }
        nlPopMatrix(0x1);
        nlRotateAX(0x3FFF);
        nlScale((u75 * 1.0f), (t78 * 2.5f), (u75 * 1.0f));
        u100 = (u75 * 1.0f);
        u101 = (t78 * 2.5f);
        FUN_0c0de000((u100 + u101));
        FUN_0c0c465c((0x410 + ((*(int *)0xC23A258) & 0xF)));
        nlRotateAY(0x3FFF);
        FUN_0c0de000((u100 + u101));
        FUN_0c0c465c((0x410 + ((*(int *)0xC23A258) & 0xF)));
        t110 = (nlPopMatrix(0x1));
    }
    return t110;
}
