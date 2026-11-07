/* Straight-line functions with calls and guards (batch gen_uz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c063098(int);
int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
extern int FUN_0c0e19f2();
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c06348e(int a4, int a5, int a6, int a7);
struct o228_uint { char p[0x228]; unsigned int v; };
struct o258_float { char p[0x258]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct oBC_int { char p[0xBC]; int v; };
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };



int FUN_0c06348e(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t2;
    register int t62;
    register int t36;
    int t31;
    register int t55;
    register int t48;
    register int t41;

    if ((*(int *)((0xC247030 + (((((struct oBC_int *)(a4))->v)) << 2)))) != 4) {
        t2 = ((int (*)(int, int, int, int))(FUN_0c0e19f2))(a4, a5, a6, a7);
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = -0.0772199929f;
    FUN_0c0db470((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
    *(float *)(((0x2B0 + a4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)(((0x2B4 + a4) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)(((0x2B8 + a4) + 0x0)) = (*(float *)(((int)stk + 16)));
    nlPopMatrix(0x1);
    *(unsigned int *)(((int)stk + 4)) = (0x25C + a4);
    nlAddVector(((*(int *)(((int)stk + 4))) + 0x48), ((0x25C + a4) + 0x54));
    nlAddVector((a4 + 0x30), ((0x25C + a4) + 0x48));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c063098(a4);
    t62 = 0x34;
    if (!((((((struct o258_float *)(a4))->v)) + 50.0f) > ((((struct o34_float *)(a4))->v)))) {
        if ((((((struct o0_int *)0xC247030)->v)) == 4) && (t31 = (((struct o4_int *)0xC247030)->v), t31 == 4)) {
            t36 = FUN_0c0da2e0();
            *(unsigned int *)(((0x228 + a4) + 0x0)) = (t36 & 0x1);
            t55 = (t36 & 0x1);
        } else {
            if (((((struct o0_int *)0xC247030)->v)) == 4) {
                (((struct o228_uint *)(a4))->v) = 0x0;
                t48 = 0x228;
            } else {
                if (((((struct o4_int *)0xC247030)->v)) == 4) {
                    (((struct o228_uint *)(a4))->v) = 0x1;
                    t41 = 0x228;
                } else {
                    t41 = (((int (*)(int))(FUN_0c0e19f2))(0xC247030));
                }
                t48 = t41;
            }
            t55 = t48;
        }
        *(unsigned int *)((a4 + 0x0)) = 0xC0632D4;
        t62 = t55;
    }
    return t62;
}
