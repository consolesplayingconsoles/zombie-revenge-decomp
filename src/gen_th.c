/* Straight-line functions with calls and guards (batch gen_th): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[14]; } Stk14;
int FUN_0c0c0340(int, Stk14, float);
int FUN_0c0c475c(int, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int, int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c0ae7b0(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0ae7b0(int a4, int a5, int a6, int a7, float f4)
{
    int stk[15];
    register int t0;
    register int t38;
    register float u97;

    { struct mv14 { int w[14]; }; *(struct mv14 *)(((int)stk + 4)) = *(struct mv14 *)(0xC10F8E0); }
    t0 = *(int *)((a4 + 0x80));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                if ((*(int *)0xC23A1A0) == 0) {
                    *(unsigned int *)(((int)stk + 4)) = 0x2072;
                } else {
                    *(unsigned int *)(((int)stk + 4)) = 0x2076;
                }
                if ((((unsigned int)(*(int *)0xC23A258) >> 2) & 1) != 0) {
                    FUN_0c0c0340(((int)stk + 4), *(Stk14 *)(((int)stk + 4)), f4);
                }
                *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + 0.00016666665f);
                *(unsigned short *)((a4 + 0x62)) = ((*(short *)((a4 + 0x62))) + 0x100);
                if ((*(float *)0xC0AE9B0) > (*(float *)((a4 + 0x90)))) {
                    *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) + 0.00999999978f);
                }
            }
        } else {
            *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) - (((float)(*(int *)(((0x88 + a4) + 0x0))) * 0.00166666647f)));
            *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + 0.00016666665f);
            t38 = *(int *)((a4 + 0xA0));
            *(unsigned int *)((a4 + 0xA0)) = (t38 - 1);
            if ((int)(t38 - 1) <= 0) {
                if ((*(int *)((a4 + 0x88))) != 0) {
                    FUN_0c0e19f2(a4, a5, a6, a7);
                } else {
                    *(float *)((a4 + 0x34)) = 0.0f;
                    *(float *)((a4 + 0x74)) = (*(float *)0xC0AE99C);
                    *(unsigned int *)((a4 + 0x78)) = 0xA6;
                    *(float *)((a4 + 0x90)) = (*(float *)0xC0AE9A0);
                    *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
                }
            }
        }
    } else {
        *(unsigned short *)((a4 + 0x62)) = ((*(short *)((a4 + 0x62))) + 0x100);
        if ((*(int *)(((*(int *)0xC24FA6C) + 0x80))) != 3) {
        } else {
            *(unsigned int *)((a4 + 0xA0)) = 0x3C;
            *(unsigned int *)((a4 + 0x88)) = ((*(int *)((a4 + 0x88))) - 1);
            *(unsigned int *)((a4 + 0x80)) = ((*(int *)((a4 + 0x80))) + 0x1);
        }
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAX(0x1000);
    nlRotateAY((*(short *)((a4 + 0x62))));
    u97 = *(float *)((a4 + 0x74));
    nlScale(u97, u97, u97);
    FUN_0c0de000((*(float *)((a4 + 0x74))));
    FUN_0c0c475c((*(int *)((a4 + 0x78))), (*(float *)((a4 + 0x90))));
    return (nlPopMatrix(0x1));
}
