/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c093ac8(int, int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0a81ac(int, int, int, int);
int FUN_0c0c475c(int, float);
float FUN_0c0da410(int);
int FUN_0c0db840(int);
int FUN_0c0dbda0(int);
int FUN_0c0dcca0(int);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c094e80(int a4);

int FUN_0c094e80(int a4)
{
    int stk[17];
    register int t7;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t24;
    register int t26;
    register int t28;
    register int t29;
    register float t30;
    register int t31;
    register int t46;
    register int t47;
    register int t50;
    register int t51;
    register int t54;
    int t55;
    register int t56;
    register int t58;

    *(unsigned int *)(((int)stk + 16)) = (*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC)));
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((a4 + 0x30)));
    *(unsigned int *)(((int)stk + 8)) = (a4 + 0x34);
    *(unsigned int *)(((int)stk + 40)) = (*(int *)((a4 + 0xDC)));
    *(unsigned int *)(((int)stk + 36)) = (a4 + 0x74);
    *(unsigned int *)(((int)stk + 32)) = (*(int *)((a4 + 0xE0)));
    nlPushMatrix(0x0);
    for (;;) {
        t7 = *(int *)(((*(int *)(((int)stk + 8))) + 0x0));
        t9 = (t7 + 0x14);
        t10 = (*(int *)((a4 + 0xE8)));
        t11 = t7;
        for (;;) {
            t12 = t9;
            t9 = (t9 + 0x14);
            t13 = t11;
            t11 = (t11 + 0x14);
            { struct mv5 { int w[5]; }; *(struct mv5 *)(t13) = *(struct mv5 *)(t12); }
            t10 = (t10 - 0x1);
            if (t10 == 0) {
                break;
            }
        }
        t14 = *(int *)(((int)stk + 40));
        t15 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 40)) = (t14 + 0x1);
        FUN_0c0dbda0(((*(int *)((t15 + 0x3E4))) + ((((unsigned char)(*(signed char *)((((t14 + 0x1) - 1) + 0x0))) << 2) << 2) << 2)));
        FUN_0c0db840((t11 + 0x8));
        FUN_0c0a79fa((((int)stk + 4) + 0x34), ((((int)stk + 4) + 0x34) + 0x4), ((((int)stk + 4) + 0x34) + 0x8));
        *(unsigned short *)((t11 + 0x0)) = (*(int *)(((((int)stk + 4) + 0x34) + 0x0)));
        *(unsigned short *)((t11 + 0x2)) = (*(int *)((((((int)stk + 4) + 0x34) + 0x4) + 0x0)));
        *(unsigned short *)((t11 + 0x4)) = (*(int *)((((((int)stk + 4) + 0x34) + 0x8) + 0x0)));
        t24 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t24 + 0x4);
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)((((t24 + 0x4) - 4) + 0x0))) + 0x14);
        *(unsigned int *)(((int)stk + 28)) = 0x0;
        t26 = *(int *)(((int)stk + 36));
        *(unsigned int *)(((int)stk + 36)) = (t26 + 0x4);
        *(unsigned int *)(((int)stk + 24)) = (*(int *)((((t26 + 0x4) - 4) + 0x0)));
        *(unsigned int *)(((int)stk + 20)) = 0x5;
        t28 = (0xB4 + a4);
        for (;;) {
            t29 = *(int *)(((int)stk + 28));
            *(unsigned int *)(((int)stk + 28)) = (t29 + 0xCCC);
            t30 = FUN_0c0da410((t29 + 0xCCC));
            t31 = *(int *)((t28 + 0x0));
            t28 = (t28 + 0x4);
            FUN_0c0a81ac((*(int *)(((int)stk + 4))), t31, (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x34));
            FUN_0c0dbda0(((*(int *)(((int)stk + 16))) + 0x2AC));
            FUN_0c0dcca0((((int)stk + 4) + 0x28));
            nlRotateAY((*(int *)((((((int)stk + 4) + 0x34) + 0x4) + 0x0))));
            nlRotateAX((*(int *)(((((int)stk + 4) + 0x34) + 0x0))));
            nlRotateAZ((*(int *)((((((int)stk + 4) + 0x34) + 0x8) + 0x0))));
            FUN_0c0848d6(t30, t30, 1.0f);
            FUN_0c0c475c((*(int *)(((int)stk + 24))), (t30 * 0.399999976f));
            t46 = *(int *)(((int)stk + 20));
            *(unsigned int *)(((int)stk + 20)) = (t46 - 1);
            if ((t46 - 1) == 0) {
                break;
            }
        }
        t47 = *(int *)(((int)stk + 32));
        *(unsigned int *)(((int)stk + 32)) = (t47 - 1);
        if ((t47 - 1) == 0) {
            break;
        }
    }
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    nlPopMatrix(0x1);
    t50 = *(int *)((a4 + 0xEC));
    t51 = *(int *)((a4 + 0xE8));
    *(unsigned int *)(((int)stk + 4)) = t51;
    FUN_0c093ac8(((0xB4 + a4) + 0x14), ((0xC8 + a4) + 0x14), 0x5, (float)(((*(int *)(((int)stk + 4))) - 3) << 16), (float)(t51 + 0x1), (float)t50);
    t54 = *(int *)((a4 + 0xEC));
    *(unsigned int *)((a4 + 0xEC)) = (t54 - 1);
    if (((int)(t54 - 1) > 0) && (t55 = *(int *)(((int)stk + 12)), t56 = *(int *)((0x2EC + t55)), (t56 & 15) == 0)) {
        t58 = t56;
    } else {
        t58 = (FUN_0c0e19f2());
    }
    return t58;
}
