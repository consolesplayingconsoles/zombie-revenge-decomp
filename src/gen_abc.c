/* Straight-line functions with calls and guards (batch gen_abc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c4684(int);
float FUN_0c0d9e90(int);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0df4c0(int);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int thunk_kmSetCheapShadowMode(int);
int FUN_0c06d9fc(int a4);
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4E_short { char p[0x4E]; short v; };
struct o50_short { char p[0x50]; short v; };
struct o52_short { char p[0x52]; short v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o62_short { char p[0x62]; short v; };
struct o68_int { char p[0x68]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o98_int { char p[0x98]; int v; };


int FUN_0c06d9fc(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = *(int *)((a4 + 0x30));
    if (((*(int *)0xC23ED5C) & 6) != 0) {
        thunk_kmSetCheapShadowMode(0x80);
        FUN_0c0e19f2();
    }
    if ((*(int *)0xC23ED50) != ((((struct o80_int *)(t0))->v))) {
        return 0x80;
    }
    t1 = (((struct o54_int *)(a4))->v);
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
    } else {
        if ((int)((((struct o98_int *)(t0))->v)) <= (int)0x1) {
            return 0x98;
        }
        (((struct o54_uint *)(a4))->v) = (((((struct o54_int *)(a4))->v)) + 0x1);
    }
    u0 = FUN_0c0d9e90((((((struct o62_short *)(t0))->v)) - ((((struct o68_int *)(t0))->v))));
    (((struct o48_float *)(a4))->v) = ((((-u0) + 1.0f) * 13.0f) / 10.0f);
    if (((((-u0) + 1.0f) * 13.0f) / 10.0f) > 0.0f) {
        nlPushMatrix(0x0);
        FUN_0c0dcca0((a4 + 0x34));
        nlRotateAY(((((struct o4E_short *)(a4))->v)));
        nlRotateAZ(((((struct o50_short *)(a4))->v)));
        nlScale(((((struct o40_float *)(a4))->v)), ((((struct o44_float *)(a4))->v)), ((((struct o48_float *)(a4))->v)));
        u0 = (((struct o40_float *)(a4))->v);
        u1 = (((struct o44_float *)(a4))->v);
        u2 = (((struct o48_float *)(a4))->v);
        u3 = (u1 / 0.625f);
        if ((u2 / 10.0f) > (u1 / 0.625f)) {
            u3 = (u2 / 10.0f);
        }
        u4 = (u0 / 0.625f);
        if (u3 > (u0 / 0.625f)) {
            u0 = (u1 / 0.625f);
            if ((u2 / 10.0f) > (u1 / 0.625f)) {
                u0 = (u2 / 10.0f);
            }
            u4 = u0;
        }
        FUN_0c0de000(u4);
        FUN_0c0df4c0(0x2);
        FUN_0c0c4684(((((struct o52_short *)(a4))->v)));
        return nlPopMatrix(0x1);
    }
    return 0x48;
}
