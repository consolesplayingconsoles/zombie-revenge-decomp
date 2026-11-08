/* Straight-line functions with calls and guards (batch gen_kx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01843e(void);
int FUN_0c0be46c(int, int);
int FUN_0c0c465c(int);
int FUN_0c0dcca0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c01860c(int a4);
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o44_short { char p[0x44]; short v; };
struct o46_short { char p[0x46]; short v; };
struct o48_short { char p[0x48]; short v; };
struct o4A_short { char p[0x4A]; short v; };
struct o50_int { char p[0x50]; int v; };


int FUN_0c01860c(int a4)
{
    register int t2;
    register int t4;
    register int t7;
    register int t3;
    register float u5;

    t2 = (*(int *)(((a4 + 0x30) + 0x4)));
    t4 = (*(int *)(((a4 + 0x30) + 0x0)));
    for (;;) {
        t7 = *(int *)((t4 + 0x0));
        if ((((((struct o50_int *)(a4))->v)) & 0x1) != 0) {
            u5 = ((((struct o1C_float *)(t4))->v));
            u5 = (-u5);
            u5 = (u5 + 1.0f);
            (((struct o18_float *)(t7))->v) = u5;
        }
        if ((((((struct o50_int *)(a4))->v)) & 0x2) != 0) {
            u5 = ((((struct o20_float *)(t4))->v));
            u5 = (-u5);
            u5 = (u5 + 1.0f);
            (((struct o1C_float *)(t7))->v) = u5;
            t3 = (*(int *)(((t7 + 0x1C) + 0x0)));
            t3 = (t3 | 0x1);
            *(unsigned int *)(((t7 + 0x1C) + 0x0)) = t3;
        }
        t2 = (t2 - 0x1);
        t4 = (t4 + 0x24);
        if (t2 == 0) {
            break;
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x38));
    nlRotateAY(((((struct o46_short *)(a4))->v)));
    nlRotateAX(((((struct o44_short *)(a4))->v)));
    nlRotateAZ(((((struct o48_short *)(a4))->v)));
    FUN_0c0c465c((unsigned short)((((struct o4A_short *)(a4))->v)));
    nlPopMatrix(0x1);
    FUN_0c0be46c((unsigned short)((((struct o4A_short *)(a4))->v)), (a4 + 0x30));
    return FUN_0c01843e();
}
