/* Straight-line functions with calls and guards (batch gen_kb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c465c(int);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c091be4(int a4);

int FUN_0c091be4(int a4)
{
    register float u8;
    register int t14;
    register int t15;

    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAX((*(short *)((a4 + 0x48))));
    nlRotateAZ((*(short *)((a4 + 0x4C))));
    nlRotateAY((*(short *)((a4 + 0x4A))));
    u8 = *(float *)0xC091CE4;
    nlScale(1.0f, u8, 1.0f);
    FUN_0c0de000(u8);
    FUN_0c0c465c(((*(int *)((a4 + 0x60))) + 0x394));
    nlPopMatrix(0x1);
    t14 = *(int *)0xC23A258;
    if ((t14 & 1) != 0) {
        t15 = *(int *)((a4 + 0x60));
        *(unsigned int *)((a4 + 0x60)) = (t15 + 0x1);
        if ((int)(t15 + 0x1) >= (int)0xF) {
            return FUN_0c0e19f2();
        }
        return 0x60;
    }
    return t14;
}
