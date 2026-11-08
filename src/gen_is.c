/* Straight-line functions with calls and guards (batch gen_is): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01d9c2(int);
int FUN_0c07a352(int, float);
int FUN_0c0c465c(int);
int FUN_0c0da2e0(void);
int FUN_0c0db4d0(int, int);
int FUN_0c0db800(int, int, int, int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0e19f2(void);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c079de4(int a4);
void FUN_0c09517c(int a4);
struct o226_short { char p[0x226]; short v; };
struct o228_short { char p[0x228]; short v; };
struct o22A_short { char p[0x22A]; short v; };
struct o238_ushort { char p[0x238]; unsigned short v; };
struct o23A_short { char p[0x23A]; short v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3E_short { char p[0x3E]; short v; };
struct o4A_short { char p[0x4A]; short v; };
struct o62_short { char p[0x62]; short v; };
struct o64_short { char p[0x64]; short v; };
struct o68_short { char p[0x68]; short v; };
struct o68_ushort { char p[0x68]; unsigned short v; };



void FUN_0c09517c(int a4)
{
    int stk[9];
    register int t0;
    register int t1;
    register int t35;
    register int t36;
    register int t37;
    register int t38;

    t0 = *(int *)((a4 + 0x1C));
    t1 = *(int *)((a4 + 0x38));
    if (t0 != 0) {
        nlPushMatrix(0x0);
        FUN_0c0dcca0((0x22C + t0));
        nlRotateAY(((((struct o228_short *)(t0))->v)));
        nlRotateAX(((((struct o226_short *)(t0))->v)));
        nlRotateAZ(((((struct o22A_short *)(t0))->v)));
        FUN_0c0c465c((*(short *)((t1 + 0x0))));
        FUN_0c0c465c(((((struct o64_short *)(a4))->v)));
        FUN_0c0c465c(((((struct o62_short *)(a4))->v)));
        nlPushMatrix(0x0);
        FUN_0c0dcca0((t1 + 0x44));
        nlRotateAY(((((struct o3E_short *)(a4))->v)));
        nlRotateAX(((((struct o3C_short *)(a4))->v)));
        FUN_0c0c465c((*(short *)((t1 + 0x6))));
        FUN_0c0db800(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
        FUN_0c0dcca0((t1 + 0x50));
        nlRotateAY(((((struct o3E_short *)(a4))->v)));
        nlRotateAX(((((struct o3C_short *)(a4))->v)));
        FUN_0c0c465c((*(short *)((t1 + 0x8))));
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        t35 = ((int (*)(int))((*(int *)((a4 + 0x30)))))(a4);
        t36 = (((struct o68_short *)(a4))->v);
        (((struct o68_ushort *)(a4))->v) = (t36 - 1);
        if (((int)(short)(t36 - 1) >= 0) && (t37 = (((struct o23A_short *)(t0))->v), t38 = (((struct o4A_short *)(a4))->v), t37 == t38)) {
            return;
        }
        (((struct o238_ushort *)(t0))->v) = 0x0;
        FUN_0c0e19f2();
    return;
    }
}


