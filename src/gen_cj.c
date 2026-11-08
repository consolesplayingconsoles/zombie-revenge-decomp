/* Straight-line functions with calls and guards (batch gen_cj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c465c(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int FUN_0c0893ba(int a4);
struct o220_short { char p[0x220]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };


int FUN_0c0893ba(int a4)
{
    int t0;
    float u10;
    int t17;
    int t19;

    t0 = *(int *)((a4 + 0x30));
    nlPushMatrix(0x0);
    FUN_0c0dcca0(((*(int *)((a4 + 0x30))) + 0x22C));
    nlRotateAZ((*(short *)(((t0 + 0x220) + 0x4))));
    nlRotateAY((*(short *)(((t0 + 0x220) + 0x2))));
    nlRotateAX(((((struct o220_short *)(t0))->v)));
    u10 = (((struct o40_float *)(a4))->v);
    nlScale(u10, u10, u10);
    FUN_0c0de000(((((struct o40_float *)(a4))->v)));
    FUN_0c0c465c(((((struct o50_int *)(a4))->v)));
    nlPopMatrix(0x1);
    t17 = (((struct o54_int *)(a4))->v);
    (((struct o54_uint *)(a4))->v) = (t17 + 0x1);
    if ((int)(t17 + 0x1) > (int)0x2) {
        (((struct o50_uint *)(a4))->v) = (((((struct o50_int *)(a4))->v)) + 0x1);
        t19 = (((struct o5C_int *)(a4))->v);
        (((struct o5C_uint *)(a4))->v) = (t19 - 1);
        if ((int)(t19 - 1) < 0) {
            return FUN_0c0e19f2();
        }
        return 0x5C;
    }
    return 0x54;
}
