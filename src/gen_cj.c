/* Straight-line functions with calls and guards (batch gen_cj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c465c(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int FUN_0c0893ba(int a4);

int FUN_0c0893ba(int a4)
{
    int t0;
    float u10;
    int t17;
    int t19;

    t0 = *(int *)((a4 + 0x30));
    nlPushMatrix(0x0);
    FUN_0c0dcca0(((*(int *)((a4 + 0x30))) + 0x22C));
    nlRotateAZ((*(short *)(((t0 + 0x220) + 0x4))));
    nlRotateAY((*(short *)(((t0 + 0x220) + 0x2))));
    nlRotateAX((*(short *)(((t0 + 0x220) + 0x0))));
    u10 = *(float *)((a4 + 0x40));
    nlScale(u10, u10, u10);
    FUN_0c0de000((*(float *)((a4 + 0x40))));
    FUN_0c0c465c((*(int *)((a4 + 0x50))));
    nlPopMatrix(0x1);
    t17 = *(int *)((a4 + 0x54));
    *(unsigned int *)((a4 + 0x54)) = (t17 + 0x1);
    if ((int)(t17 + 0x1) > (int)0x2) {
        *(unsigned int *)((a4 + 0x50)) = ((*(int *)((a4 + 0x50))) + 0x1);
        t19 = *(int *)((a4 + 0x5C));
        *(unsigned int *)((a4 + 0x5C)) = (t19 - 1);
        if ((int)(t19 - 1) < 0) {
            return FUN_0c0e19f2();
        }
        return 0x5C;
    }
    return 0x54;
}
