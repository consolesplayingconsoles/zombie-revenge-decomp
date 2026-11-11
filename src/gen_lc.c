/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

typedef struct { int w[3]; } Stk3;
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0dcc70(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int, Stk3);
int FUN_0c010fae(int a4, int a5, int a6, float f4);

int FUN_0c010fae(int a4, int a5, int a6, float f4)
{
    int stk[3];
    register float u5;
    register int t6;
    register int t7;
    int t8;
    register int t9;
    int t10;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC0F4168); }
    nlPushMatrix(0x0, *(Stk3 *)(((int)stk + 0)));
    if ((int)a4 < 0) {
        FUN_0c0dcc70(0.399999976f, 0.0f, 0.0f);
        FUN_0c0c465c((*(int *)0xC0F4164));
    } else {
        u5 = *(float *)0xC011150;
        if ((int)(a5 - 1) >= 0) {
            t6 = a6;
            t7 = a4;
            t8 = (a5 - 1);
            for (;;) {
                t9 = *(int *)((((int)stk + 0) + (t8 << 2)));
                t10 = (int)((int)t7 / (int)t9);
                t7 = ((int)((int)t7 % (int)t9));
                if ((t6 == 1) && (t10 != 0)) {
                    t6 = 0x0;
                }
                if ((t6 != 0) && (t8 != 0)) {
                } else {
                    FUN_0c0c475c((*(int *)(((t10 << 2) + 0xC0F413C))), f4);
                }
                FUN_0c0dcc70(u5, 0.0f, 0.0f);
                t8 = (t8 - 1);
                if ((int)t8 < 0) {
                    break;
                }
            }
        }
    }
    return (nlPopMatrix(0x1));
}
