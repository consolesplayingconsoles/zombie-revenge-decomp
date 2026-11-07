/* Straight-line functions with calls and guards (batch gen_lk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e631c(int, int, int);
int FUN_0c0f2ab4(int, int, int, int);
int FUN_0c0f30f8(int, int);
int FUN_0c0f3ccc(int, int, int);
int FUN_0c0f3f98(int, int);
int memset(int, int, int);
int FUN_0c0f2dcc(int a4, int a5, int a6, int a7);

int FUN_0c0f2dcc(int a4, int a5, int a6, int a7)
{
    int stk[23];
    register int t1;
    register int t7;
    register int t8;
    register int t11;
    register int t20;
    register int t35;
    register int t65;
    register int t36;
    register int t37;
    register int t38;
    register int t39;
    register int t40;
    register int t41;
    register int t42;
    register int t43;
    register int t44;
    register int t45;
    register int t46;
    int t47;
    register int t50;
    register int t55;
    register int t56;
    register int t57;
    register int t58;
    register int t59;
    register int t60;
    register int t61;
    register int t62;
    int t63;

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned short *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    memset((((int)stk + 4) + 0x2C), 0x0, 0x4);
    t1 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 4) + 0x2C) + 0x4);
    FUN_0c0e631c(((((int)stk + 4) + 0x2C) + 0x4), t1, 0x8);
    memset((((int)stk + 4) + 0x20), 0x0, 0x4);
    FUN_0c0e631c(((((int)stk + 4) + 0x20) + 0x4), (*(int *)(((int)stk + 8))), 0x8);
    memset((((int)stk + 4) + 0x10), 0x0, 0x10);
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x10) + 0xB);
    t7 = 0xC0F2E3C;
    t8 = 0x42;
    for (;;) {
        if (t8 == 0) {
            break;
        }
        t7 = (FUN_0c0f30f8((((int)stk + 4) + 0x10), 0xC));
        t7 = (FUN_0c0f2ab4(0x0, (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20), 0xC));
        if ((int)t7 >= 0) {
            t11 = *(int *)(((int)stk + 4));
            *(unsigned char *)((t11 + 0x0)) = ((*(signed char *)((t11 + 0x0))) + 0x1);
        } else {
            t7 = (FUN_0c0f3ccc((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20), 0xC));
        }
        t7 = (FUN_0c0f30f8((((int)stk + 4) + 0x2C), 0xC));
        t8 = (t8 - 1);
    }
    t20 = 0x2;
    for (;;) {
        if (t20 == 0) {
            break;
        }
        FUN_0c0f3f98((((int)stk + 4) + 0x10), 0x10);
        t20 = (t20 - 1);
    }
    t35 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x0));
    if ((t35 == 0) && ((t36 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x1)), t36 == 0) && ((t37 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x2)), t37 == 0) && ((t38 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x3)), t38 == 0) && ((t39 = *(int *)(((int)stk + 16)), t40 = *(signed char *)((t39 + 0x0)), t40 == 0) && ((t41 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x5)), t41 == 0) && ((t42 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x6)), t42 == 0) && ((t43 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x7)), t43 == 0) && ((t44 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x8)), t44 == 0) && ((t45 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0x9)), t45 == 0) && ((t46 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0xA)), t46 == 0) && (t47 = *(signed char *)(((((int)stk + 4) + 0x2C) + 0xB)), t47 == 0)))))))))))) {
        t50 = t40;
    } else {
        *(unsigned char *)(((((int)stk + 4) + 0x10) + 0xC)) = ((*(signed char *)(((((int)stk + 4) + 0x10) + 0xC))) | 0x20);
        t50 = t35;
    }
    *(unsigned short *)((a4 + 0x0)) = ((*(short *)(((int)stk + 12))) - (*(short *)((a4 + 0x0))));
    if (((*(signed char *)(((((int)stk + 4) + 0x10) + 0x4))) == 0) && ((t55 = *(signed char *)(((((int)stk + 4) + 0x10) + 0x5)), t55 == 0) && ((t56 = *(signed char *)(((((int)stk + 4) + 0x10) + 0x6)), t56 == 0) && ((t57 = *(signed char *)(((((int)stk + 4) + 0x10) + 0x7)), t57 == 0) && ((t58 = *(signed char *)(((((int)stk + 4) + 0x10) + 0x8)), t58 == 0) && ((t59 = *(signed char *)(((((int)stk + 4) + 0x10) + 0x9)), t59 == 0) && ((t60 = *(signed char *)(((((int)stk + 4) + 0x10) + 0xA)), t60 == 0) && ((t61 = *(int *)(((int)stk + 4)), t62 = *(signed char *)((t61 + 0x0)), t62 == 0) && (t63 = *(signed char *)(((((int)stk + 4) + 0x10) + 0xC)), t63 == 0))))))))) {
    } else {
        t65 = t50;
        for (;;) {
            if (((unsigned char)(*(signed char *)((((((int)stk + 4) + 0x10) + 0x4) + 0x0))) & 0x80) != 0) {
                break;
            }
            FUN_0c0f30f8(((((int)stk + 4) + 0x10) + 0x4), 0x9);
            t65 = (*(short *)((a4 + 0x0)));
            t65 = (t65 - 1);
            *(unsigned short *)((a4 + 0x0)) = t65;
        }
    }
    return (FUN_0c0e631c((*(int *)(((int)stk + 8))), ((((int)stk + 4) + 0x10) + 0x4), 0x9));
}
