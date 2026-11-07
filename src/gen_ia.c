/* Straight-line functions with calls and guards (batch gen_ia): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0848d6(float, float, float);
int FUN_0c0849da(int, int, int, int, int, int, int, int);
int FUN_0c0c465c(int);
int FUN_0c0c475c(int, float);
int FUN_0c0c47ae(int);
int FUN_0c0cc3f8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0de3c0(int, int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e5f1c(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int FUN_0c08cb10(int a4, int a5, int a6, int a7);
int FUN_0c0acd48(int a4);
int FUN_0c09b4f4(int a4, int a5, int a6, int a7);
int FUN_0c05dd5c(int a4);




int FUN_0c05dd5c(int a4)
{
    int stk[8];
    register int t22;
    register int t29;
    register float u32;
    register int t45;
    register int t46;

    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((a4 + 0x62))));
    nlRotateAX((*(short *)((a4 + 0x60))));
    nlRotateAY(0x8000);
    nlScale(0.099999994f, 0.099999994f, 50.0f);
    FUN_0c0de000(100.0f);
    FUN_0c0848d6(1.0f, (*(float *)((a4 + 0x54))), 0.199999988f);
    FUN_0c0de3c0(0x1, 0x1);
    FUN_0c0c475c((*(int *)((a4 + 0x78))), (*(float *)((a4 + 0x90))));
    FUN_0c0de3c0(0x4, 0x5);
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    nlPopMatrix(0x1);
    if ((*(int *)((a4 + 0x80))) != 0) {
        *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) - 0.0349999964f);
        *(float *)((a4 + 0x54)) = ((*(float *)((a4 + 0x54))) - 0.0249999985f);
        *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) - 0.099999994f);
        t22 = *(int *)((a4 + 0xA0));
        *(unsigned int *)((a4 + 0xA0)) = (t22 - 1);
        if ((int)(t22 - 1) <= 0) {
            return FUN_0c0e19f2();
        }
        return 0xA0;
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY((*(short *)((a4 + 0x62))));
    nlRotateAX((*(short *)((a4 + 0x60))));
    t29 = *(short *)((a4 + 0x64));
    *(unsigned short *)((a4 + 0x64)) = (t29 + 0x800);
    nlRotateAZ((short)(t29 + 0x800));
    nlRotateAY(0x8000);
    u32 = *(float *)((a4 + 0x48));
    nlScale(u32, u32, 50.0f);
    FUN_0c0de000(100.0f);
    FUN_0c0848d6(1.0f, (*(float *)((a4 + 0x54))), 0.199999988f);
    FUN_0c0c475c((*(int *)((a4 + 0x78))), (*(float *)((a4 + 0x94))));
    FUN_0c0849da(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    nlPopMatrix(0x1);
    *(float *)((a4 + 0x94)) = ((*(float *)((a4 + 0x94))) - 0.0149999987f);
    *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) + 0.0899999961f);
    *(float *)((a4 + 0x54)) = ((*(float *)((a4 + 0x54))) - 0.0249999985f);
    t45 = *(int *)((a4 + 0xA0));
    *(unsigned int *)((a4 + 0xA0)) = (t45 - 1);
    t46 = 0xA0;
    if ((int)(t45 - 1) <= 0) {
        *(unsigned int *)((a4 + 0xA0)) = 0x14;
        *(unsigned int *)((a4 + 0x80)) = 0x1;
        t46 = 0x80;
    }
    return t46;
}
