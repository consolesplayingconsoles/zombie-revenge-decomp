/* Straight-line functions with calls and guards (batch gen_vj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0848bc(float, float, float);
int FUN_0c0c47ae(int);
int FUN_0c0db840(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c096428(int a4, int a5, int a6, int a7, int a8);

int FUN_0c096428(int a4, int a5, int a6, int a7, int a8)
{
    int stk[7];
    register int t1;
    register float u18;
    register float u2;
    register float u6;
    register int t58;
    register int t23;
    register int t44;
    register float u12;

    t1 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    u18 = 0.0f;
    if ((int)a4 >= (int)a5) {
        if ((int)a4 >= (int)a7) {
            u2 = 0.0f;
            if ((int)(a4 - a7) < (int)a8) {
                u2 = (1.0f - ((float)(a4 - a7) / (float)a8));
            }
            u12 = u2;
        } else {
            u6 = 1.0f;
            if ((int)(a4 - a5) < (int)a6) {
                u6 = ((float)(a4 - a5) / (float)a6);
            }
            u12 = u6;
        }
        u18 = u12;
    }
    t58 = 0xC247CAC;
    if (u18 != 0.0f) {
        t23 = *(int *)0xC23A258;
        t44 = t23;
        if ((t23 & 1) != 0) {
            nlPushMatrix(0x0);
            FUN_0c0db840(((int)stk + 4));
            *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(float *)(((int)stk + 4)));
            *(float *)((((((int)stk + 4) + 0xC) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
            *(float *)((((((int)stk + 4) + 0xC) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
            nlUnitMatrix();
            FUN_0c0dcc70((*(float *)(((((int)stk + 4) + 0xC) + 0x0))), (*(float *)(((((int)stk + 4) + 0xC) + 0x4))), (*(float *)(((((int)stk + 4) + 0xC) + 0x8))));
            FUN_0c0848bc((u18 * 0.199999988f), (u18 * 0.199999988f), (u18 * 0.5f));
            nlRotateAY((*(short *)((t1 + 0x3CE))));
            nlRotateAX((*(short *)((t1 + 0x3CC))));
            FUN_0c0dcc70(0.0f, 0.0f, 10.0f);
            nlScale(10.0f, 17.0f, 1.0f);
            FUN_0c0de000(17.0f);
            FUN_0c0c47ae(0x295);
            t44 = (nlPopMatrix(0x1));
        }
        t58 = t44;
    }
    return t58;
}
