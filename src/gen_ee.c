/* Straight-line functions with calls and guards (batch gen_ee): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c0c465c(int);
int FUN_0c0c8d06(int);
int FUN_0c0dcca0(int);
int FUN_0c0e18ce(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c06ece4(int a4);
struct o34_float { char p[0x34]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o90_float { char p[0x90]; float v; };
struct o9A_ushort { char p[0x9A]; unsigned short v; };
struct oA0_ushort { char p[0xA0]; unsigned short v; };


int FUN_0c06ece4(int a4)
{
    int t2;
    int t8;
    int stk[7];

    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + (*(float *)(((0x90 + a4) + 0x0))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0x30)); }
    t2 = FUN_0c0c8d06(((int)stk + 4));
    if ((int)t2 >= 0) {
        if ((*(float *)(((int)stk + 8))) > ((((struct o34_float *)(a4))->v))) {
            t8 = FUN_0c0e18ce(0xC08C1AA, 0xA4);
            FUN_0c0e19d0(t8);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t8 + 0x70)) = *(struct mv3 *)(((int)stk + 4)); }
            (((struct o90_float *)(t8))->v) = 0.5f;
            (((struct o9A_ushort *)(t8))->v) = 0x3B7;
            (((struct oA0_ushort *)(t8))->v) = 0xF;
            FUN_0c0e19f2();
        }
    } else {
        if (0.0f > ((((struct o34_float *)(a4))->v))) {
            FUN_0c0e19f2();
        }
    }
    (((struct o90_float *)(a4))->v) = (((((struct o90_float *)(a4))->v)) * (*(float *)(((0x94 + a4) + 0x0))));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    FUN_0c0c465c(((((struct o78_int *)(a4))->v)));
    return (nlPopMatrix(0x1));
}
