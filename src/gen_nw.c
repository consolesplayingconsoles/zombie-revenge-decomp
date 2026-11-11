/* Straight-line functions with calls and guards (batch gen_nw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o48_float { char p[0x48]; float v; };
struct o4C_uchar { char p[0x4C]; unsigned char v; };
struct o54_uint { char p[0x54]; unsigned int v; };
int FUN_0c0cc3f8(int);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c0abd54(void);

int FUN_0c0abd54(void)
{
    int stk[1];
    register int t1;
    register int t2;
    register int t4;
    register int t7;
    register float u17;
    register int t22;

    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 0)) = 0xE;
    t1 = 0xC10E470;
    for (;;) {
        t2 = FUN_0c0da2e0();
        t4 = FUN_0c0da2e0();
        t7 = FUN_0c0e19aa(0xC0ABE80, 0x5C, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t7);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0x34)) = *(struct mv3 *)(t1); }
        (((struct o4C_uchar *)(t7))->v) = (*(signed char *)(((t1 + 0xC) + 0x0)));
        *(unsigned char *)(((t7 + 0x4C) + 0x1)) = (*(signed char *)(((t1 + 0xC) + 0x1)));
        *(unsigned char *)(((t7 + 0x4C) + 0x2)) = (*(signed char *)(((t1 + 0xC) + 0x2)));
        *(unsigned char *)(((t7 + 0x4C) + 0x3)) = (*(signed char *)(((t1 + 0xC) + 0x3)));
        *(unsigned char *)(((t7 + 0x4C) + 0x4)) = (*(signed char *)(((t1 + 0xC) + 0x4)));
        *(unsigned char *)(((t7 + 0x4C) + 0x5)) = (*(signed char *)(((t1 + 0xC) + 0x5)));
        (((struct o54_uint *)(t7))->v) = (unsigned short)(*(short *)((t1 + 0x12)));
        u17 = 2.5f;
        u17 = u17 + 4.99999987e-05f * (float)(FUN_0c0da2e0());
        (((struct o48_float *)(t7))->v) = u17;
        nlUnitMatrix();
        nlRotateAY((((t2 & 0x1FFF) - 4096) << 1));
        nlRotateAX(((((t4 & 0x1FFF) - 4096) << 1) - 3640));
        FUN_0c0db470((t7 + 0x40), (t7 + 0x40));
        t22 = *(int *)(((int)stk + 0));
        t1 = (t1 + 0x14);
        *(unsigned int *)(((int)stk + 0)) = (t22 - 1);
        if ((t22 - 1) == 0) {
            break;
        }
    }
    nlPopMatrix(0x1);
    return FUN_0c0cc3f8(0xD28A9);
}
