/* Straight-line functions with calls and guards (batch gen_bs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c08a220(int, int);
int FUN_0c09134c(int, int, int, int);
int FUN_0c0c0340(int);
int FUN_0c0db470(int, int);
int nlPopMatrix(int);
int FUN_0c0dc5a0(void);
int nlRotateAX(int);
int nlRotateAY(int);
int FUN_0c0e19f2(int, int, int, int);
int _quick_odd_mvn(int);
int FUN_0c0a30f0(int a4, int a5, int a6, int a7);
int FUN_0c095d14(int a4);
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_int { char p[0x74]; int v; };
struct o74_uint { char p[0x74]; unsigned int v; };


int FUN_0c0a30f0(int a4, int a5, int a6, int a7)
{
    int t0;
    int t7;
    int t9;
    int t12;

    t0 = (((struct o74_int *)(a4))->v);
    (((struct o74_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    *(unsigned int *)((a4 + 0x30)) = (((((struct o70_int *)(a4))->v)) + 0x203C);
    t7 = (((struct o6C_int *)(a4))->v);
    (((struct o6C_uint *)(a4))->v) = (t7 + 0x1);
    if ((int)(t7 + 0x1) >= (int)0x1) {
        (((struct o6C_uint *)(a4))->v) = 0x0;
        if (((((struct o68_int *)(a4))->v)) != 0) {
            t9 = (((struct o70_int *)(a4))->v);
            (((struct o70_uint *)(a4))->v) = (t9 - 1);
            if ((t9 - 1) == 0) {
                (((struct o68_uint *)(a4))->v) = 0x0;
            }
        } else {
            t12 = (((struct o70_int *)(a4))->v);
            (((struct o70_uint *)(a4))->v) = (t12 + 0x1);
            if ((t12 + 0x1) == 2) {
                (((struct o68_uint *)(a4))->v) = 0x1;
            }
        }
    }
    return FUN_0c0c0340((a4 + 0x30));
}

