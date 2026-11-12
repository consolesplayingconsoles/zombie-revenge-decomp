/* Straight-line functions with calls and guards (batch gen_pc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o240_int { char p[0x240]; int v; };
struct o254_float { char p[0x254]; float v; };
struct o260_int { char p[0x260]; int v; };
struct o260_uint { char p[0x260]; unsigned int v; };
struct o26C_float { char p[0x26C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_short { char p[0x70]; short v; };
int FUN_0c0c475c(int, float);
int FUN_0c0cf3b0(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c057824(int a4);

int FUN_0c057824(int a4)
{
    int t0;
    register int t1;
    register float u0;

    if ((((*(int *)0xC23A1A8) & 0x100) != 0) && (t0 = (((struct o260_int *)(a4))->v), t0 == 0)) {
        FUN_0c0cf3b0(a4);
    } else {
        t0 = a4;
    }
    t1 = (((struct o260_int *)(a4))->v);
    (((struct o260_uint *)(a4))->v) = (t1 + 0x1);
    if ((int)t1 > (int)0x37) {
        FUN_0c0e19f2();
    }
    if ((int)((((struct o260_int *)(a4))->v)) < (int)0x1E) {
        (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + 0.699999988f);
        t0 = 0x254;
        u0 = (((((struct o254_float *)(a4))->v)) + 0.0799999982f);
    } else {
        (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) + 0.099999994f);
        t0 = 0x26C;
        u0 = (((((struct o26C_float *)(a4))->v)) - 0.0299999993f);
    }
    *(float *)((a4 + t0)) = u0;
    (((struct o6E_ushort *)(a4))->v) = (((((struct o6E_short *)(a4))->v)) + 0x600);
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAZ(((((struct o70_short *)(a4))->v)));
    nlRotateAY(((((struct o6E_short *)(a4))->v)));
    nlRotateAX(((((struct o6C_short *)(a4))->v)));
    u0 = (((struct o254_float *)(a4))->v);
    nlScale(u0, u0, u0);
    FUN_0c0de000(((((struct o254_float *)(a4))->v)));
    FUN_0c0c475c(((((struct o240_int *)(a4))->v)), ((((struct o26C_float *)(a4))->v)));
    return nlPopMatrix(0x1);
}
