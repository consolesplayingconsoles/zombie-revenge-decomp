/* Straight-line functions with calls and guards (batch gen_ba): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c08b2d0(int, int);
int FUN_0c0c465c(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcca0(int);
int FUN_0c0e5dc0(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAZ(int);
int FUN_0c06c01c(int a4, int a5, int a6, int a7);
struct o64_short { char p[0x64]; short v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o78_int { char p[0x78]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };


int FUN_0c06c01c(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t18;
    register int t60;
    register int t69;

    FUN_0c0685a4(a4, a5, a6, a7);
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAZ(((((struct o64_short *)(a4))->v)));
    FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
    nlPopMatrix(0x1);
    t60 = (((struct o80_int *)(a4))->v);
    if (t60 != 0) {
        if (t60 != 1) {
            if (t60 != 2) {
                if (t60 == 3) {
                    (((struct o64_ushort *)(a4))->v) = (((((struct o64_short *)(a4))->v)) + ((((struct o98_int *)(a4))->v)));
                    (((struct o98_uint *)(a4))->v) = (((((struct o98_int *)(a4))->v)) - 4);
                    t69 = 0x64;
                    if ((int)((((struct o64_short *)(a4))->v)) < (int)0xFFFFE93F) {
                        FUN_0c0cc3f8(0x628A9, 0x0, 0x0, 0x0);
                        (((struct o64_ushort *)(a4))->v) = 0xFFFFE93F;
                        *(volatile int *)((a4 + 0x98));
                        (((struct o98_uint *)(a4))->v) = (-(FUN_0c0e5dc0()));
                        t18 = (((struct oA0_int *)(a4))->v);
                        (((struct oA0_uint *)(a4))->v) = (t18 + 0x1);
                        t69 = 0xA0;
                        if ((int)(t18 + 0x1) >= (int)0x3) {
                            (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
                            t69 = 0x80;
                        }
                    }
                } else {
                    (((struct o64_ushort *)(a4))->v) = 0xFFFFE93F;
                    t69 = 0x64;
                }
            } else {
                (((struct o64_ushort *)(a4))->v) = (((((struct o64_short *)(a4))->v)) + ((((struct o98_int *)(a4))->v)));
                (((struct o98_uint *)(a4))->v) = (((((struct o98_int *)(a4))->v)) - 4);
                t69 = 0x64;
                if ((int)((((struct o64_short *)(a4))->v)) < (int)0xFFFFE93F) {
                    FUN_0c0cc3f8(0xF2BA9, 0x0, 0x0, 0x0);
                    FUN_0c0dc5a0();
                    *(float *)(((int)stk + 4)) = 50.0f;
                    *(float *)(((int)stk + 8)) = 0.0f;
                    *(float *)(((int)stk + 12)) = 0.0f;
                    FUN_0c0dcca0((a4 + 0x30));
                    nlRotateAZ(((((struct o64_short *)(a4))->v)));
                    FUN_0c0db470(((int)stk + 4), (((int)stk + 4) + 0xC));
                    FUN_0c08b2d0((((int)stk + 4) + 0xC), 0x4000);
                    nlPopMatrix(0x1);
                    (((struct o64_ushort *)(a4))->v) = 0xFFFFE93F;
                    *(volatile int *)((a4 + 0x98));
                    (((struct o98_uint *)(a4))->v) = (-(FUN_0c0e5dc0()));
                    (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
                    (((struct oA0_uint *)(a4))->v) = 0x0;
                    t69 = 0xA0;
                }
            }
        } else {
            if (((*(int *)0xC23ED88) & 0x200) != 0) {
                (((struct o98_uint *)(a4))->v) = 0x0;
                (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
                t60 = 0x80;
            }
            t69 = t60;
        }
    } else {
        (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        t69 = 0x80;
    }
    return t69;
}
