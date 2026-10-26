/* Straight-line functions with calls and guards (batch gen_ep): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c3d90(int, int, int, int);
int FUN_0c0cf88c(int, int, int, int);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e1dc4(int);
int FUN_0c0e5dc0(void);
int FUN_0c233800(int, int, int);
int kmfSetVertexBufferBaseAddress(int, int);
int nlMultiMatrixRevOrder(int);
int nlObjPutTrnsl(int, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c2333cc(int a4, int a5);
int FUN_0c0c452c(int a4);
int FUN_0c0c4844(int a4, float f4);
int FUN_0c0d1230(void);
int FUN_0c0d93f0(int a4);
int FUN_0c0e17dc(int a4, int a5);
int FUN_0c214c44(void);

int FUN_0c2333cc(int a4, int a5)
{
    int t0;

    t0 = FUN_0c233800(a4, 0x5, 0x0);
    if ((int)t0 <= 0) {
        *(unsigned int *)((a5 + 0x0)) = 0xFFFFFC41;
    } else {
        if ((int)t0 >= (int)0x7F) {
            *(unsigned int *)((a5 + 0x0)) = 0x0;
        } else {
            *(unsigned int *)((a5 + 0x0)) = (FUN_0c0e5dc0());
        }
    }
    *(unsigned int *)((a4 + 0x30)) = (*(int *)((a5 + 0x0)));
    return 0x0;
}

int FUN_0c0c452c(int a4)
{
    int t0;
    int t20;
    int t2;
    int t15;
    int t3;
    int t12;
    int t4;
    int t5;
    int t9;

    t0 = *(int *)0xC209CB4;
    t20 = t0;
    if (t0 != 1) {
        t2 = *(int *)0xC23A180;
        t15 = t2;
        if (t2 == 2) {
            *(unsigned int *)0xC209CB4 = 0x1;
            t3 = *(signed char *)((((((a4 << 1) + a4) << 2) << 1) + 0xC1A3611));
            t12 = 0xC1A3611;
            if (0xC151F3C != 0) {
                t4 = 0xC1A3611;
                t5 = 0xC151F3C;
                for (;;) {
                    if ((*(int *)((t5 + 0x0))) == 0) {
                        break;
                    }
                    t4 = (*(short *)((t5 + 0x6)));
                    t9 = (unsigned short)t4;
                    t4 = (*(short *)((t5 + 0x4)));
                    t4 = (FUN_0c0c3d90((*(int *)((t5 + 0x0))), (unsigned short)t4, t9, (short)(unsigned char)t3));
                    t5 = (t5 + 0x8);
                }
                t12 = t4;
            }
            t15 = t12;
        }
        t20 = t15;
    }
    return t20;
}

int FUN_0c0c4844(int a4, float f4)
{
    if (((*(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0))) != 0) && (a4 != 0)) {
        nlPushMatrix(0x0);
        nlMultiMatrixRevOrder(((*(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC))) + 0x2AC));
        nlObjPutTrnsl((*(int *)(((((a4 << 1) + a4) << 2) + 0xC2623A0))), f4);
        return nlPopMatrix(0x1);
    }
    return 0xC2623A0;
}

int FUN_0c0d1230(void)
{
    int t0;

    t0 = FUN_0c0e1830(0xC0D1284, 0x48);
    *(unsigned int *)0xC9433DC = t0;
    FUN_0c0e19d0(t0);
    *(unsigned int *)0xC23A1A8 = ((*(int *)0xC23A1A8) & 0xFFFFFFFB);
    *(unsigned int *)((t0 + 0x34)) = (FUN_0c0cf88c((*(int *)0xC9433C4), (*(int *)0xC23A1AC), (*(int *)0xC23A1B0), (*(int *)((((*(int *)0xC23A1BC) << 2) + 0xC23EDC0)))));
    *(unsigned int *)0xC24FA14 = 0x0;
    *(unsigned int *)((t0 + 0x38)) = 0x24;
    *(unsigned int *)((t0 + 0x44)) = 0x78;
    return 0x44;
}

int FUN_0c0d93f0(int a4)
{
    int t0;

    t0 = *(int *)0xC943E38;
    if (t0 == 1) {
        *(unsigned int *)0xC943DEC = (0xA0000000 | a4);
        return t0;
    }
    return kmfSetVertexBufferBaseAddress((0xA0000000 | a4), 0x0);
}

int FUN_0c0e17dc(int a4, int a5)
{
    int t8;
    int t9;

    *(unsigned int *)((a5 + 0x10)) = (*(int *)0xC94C798);
    *(unsigned int *)((a5 + 0x14)) = (*(int *)(((*(int *)0xC94C798) + 0x14)));
    *(unsigned int *)((a5 + 0x18)) = (*(int *)0xC94C798);
    *(unsigned int *)(((*(int *)(((*(int *)0xC94C798) + 0x14))) + 0x18)) = a5;
    *(unsigned int *)(((*(int *)0xC94C798) + 0x14)) = a5;
    *(unsigned int *)((a5 + 0x0)) = a4;
    *(unsigned int *)((a5 + 0x1C)) = (*(int *)0xC94C790);
    *(unsigned short *)((a5 + 0x2E)) = 0x0;
    *(unsigned int *)((a5 + 0x4)) = 0xC0E17A4;
    t8 = *(int *)0xC94C79C;
    *(unsigned int *)0xC94C79C = (t8 + 0x1);
    *(unsigned int *)((a5 + 0x8)) = ((t8 + 0x1) - 1);
    *(unsigned int *)((a5 + 0xC)) = 0x80018691;
    t9 = FUN_0c0e1dc4(a5);
    *(unsigned int *)0xC94C7A0 = ((*(int *)0xC94C7A0) + 0x1);
    return t9;
}

int FUN_0c214c44(void)
{
    return ((int (*)(int, int, int))(0xC214BF8))(0xC2373E0, 0x8C008300, 0x1);
}
