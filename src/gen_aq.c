/* Straight-line functions with calls and guards (batch gen_aq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
extern int FUN_0c022aa6();
int FUN_0c026dbc(int);
int FUN_0c02a19a(int, int, int, int);
int FUN_0c032394(int);
int FUN_0c03242c(int, float, float);
int FUN_0c0328e4(int);
int FUN_0c0329ae(int, int);
int FUN_0c0340a0(int, float);
int FUN_0c035280(int, int, int);
int FUN_0c0376f4(int);
int FUN_0c037954(int);
int FUN_0c037ee8(int);
int FUN_0c038188(int);
int FUN_0c03f4bc(int);
int FUN_0c041dd0(int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int);
int FUN_0c0a6688(int, int, int);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0c475c(int, float);
int FUN_0c0d9d20(float);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
float nlTan(int);
int FUN_0c0db470(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int nlAddVector(int, int);
int FUN_0c0de000(float);
int nl_set_cnv_proj_pers(void);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
extern int _quick_odd_mvn();
int FUN_0c0e6248(void);
int FUN_0c05e158(int a4);
int FUN_0c0dd2f0(int a4, float f4, float f5, float f6);
int FUN_0c026ddc(int a4, int a5, int a6);
int FUN_0c04105c(int a4);
int FUN_0c0381b6(int a4);





int FUN_0c0381b6(int a4)
{
    int t14;
    int t85;
    int t55;
    int t56;
    int t57;
    int t78;
    int t79;
    int t80;
    int t2;
    int t3;
    int t4;
    int t92;
    int t82;
    int t69;
    int t76;
    int stk[14];

    if (((*(short *)((((((*(int *)((a4 + 0x418))) << 2) << 2) + 0xC246394) + 0x4))) != 0) && (t2 = *(int *)((a4 + 0x418)), t3 = *(int *)(((((t2 << 2) << 2) + 0xC246394) + 0x0)), t4 = *(int *)((t3 + 0xC0)), t4 == 8)) {
        t14 = *(short *)((((((*(int *)((a4 + 0x418))) << 2) << 2) + 0xC246394) + 0x4));
        t85 = (unsigned short)t14;
        if ((unsigned short)t14 == 1) {
        } else {
            if (((*(int *)0xC246304) & 1) == 0) {
                t82 = (FUN_0c038188(a4));
            } else {
                if (((*(int *)0xC246310) & 8) == 0) {
                    t69 = 0xC246314;
                } else {
                    nlPushMatrix(0x0);
                    nlUnitMatrix();
                    FUN_0c0dcc70((*(float *)((t3 + 0x22C))), (*(float *)((t3 + 0x230))), (*(float *)((t3 + 0x234))));
                    nlRotateAZ((*(short *)((t3 + 0x22A))));
                    nlRotateAY(((*(short *)((t3 + 0x222))) + (*(short *)((t3 + 0x228)))));
                    nlRotateAX(((*(short *)((t3 + 0x220))) + (*(short *)((t3 + 0x226)))));
                    *(float *)(((int)stk + 16)) = ((*(float *)((t3 + 0x274))) * 0.0f);
                    *(float *)(((int)stk + 20)) = (-((*(float *)((t3 + 0x278))) * 0.899999976f));
                    *(float *)(((int)stk + 24)) = (-((*(float *)((t3 + 0x27C))) * 4.5f));
                    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
                    *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(float *)(((int)stk + 4)));
                    *(float *)((((((int)stk + 4) + 0x18) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
                    *(float *)((((((int)stk + 4) + 0x18) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
                    nlPopMatrix(0x1);
                    *(float *)((a4 + 0x220)) = ((*(float *)(((((int)stk + 4) + 0x18) + 0x0))) - (*(float *)((a4 + 0x30))));
                    *(float *)((a4 + 0x224)) = ((*(float *)(((((int)stk + 4) + 0x18) + 0x4))) - (*(float *)((a4 + 0x34))));
                    *(float *)((a4 + 0x228)) = ((*(float *)(((((int)stk + 4) + 0x18) + 0x8))) - (*(float *)((a4 + 0x38))));
                    *(unsigned int *)((a4 + 0x22C)) = (short)(((*(short *)((t3 + 0x220))) + (*(short *)((t3 + 0x226)))) - (*(short *)((a4 + 0x6C))));
                    *(unsigned int *)((a4 + 0x230)) = (short)(((*(short *)((t3 + 0x222))) + (*(short *)((t3 + 0x228)))) - (*(short *)((a4 + 0x6E))));
                    t55 = *(short *)((t3 + 0x22A));
                    t56 = *(short *)((a4 + 0x70));
                    *(unsigned int *)((a4 + 0x234)) = (short)(t55 - t56);
                    t57 = ((int (*)(int, int, int))(_quick_odd_mvn))((t55 - t56), t56, (short)(t55 - t56));
                    *(unsigned short *)((a4 + 0x6C)) = ((*(short *)((t3 + 0x220))) + (*(short *)((t3 + 0x226))));
                    *(unsigned short *)((a4 + 0x6E)) = ((*(short *)((t3 + 0x222))) + (*(short *)((t3 + 0x228))));
                    *(unsigned short *)((a4 + 0x70)) = (*(short *)((t3 + 0x22A)));
                    FUN_0c0376f4(a4);
                    FUN_0c037954(a4);
                }
                if (((*(int *)0xC246310) & 16) != 0) {
                    FUN_0c038188(a4);
                } else {
                    t76 = t69;
                }
                t78 = ((int (*)(int))(_quick_odd_mvn))(t76);
                t79 = ((int (*)(void))(_quick_odd_mvn))();
                t80 = ((int (*)(void))(_quick_odd_mvn))();
                t82 = (FUN_0c037ee8(a4));
            }
            t85 = t82;
        }
        t92 = t85;
    } else {
        t92 = (FUN_0c038188(a4));
    }
    return t92;
}
