/* Straight-line functions with calls and guards (batch gen_zx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c47ae(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int FUN_0c058308(int a4, int a5, int a6, int a7);
struct o220_short { char p[0x220]; short v; };
struct o222_short { char p[0x222]; short v; };
struct o226_short { char p[0x226]; short v; };
struct o228_short { char p[0x228]; short v; };
struct o22A_short { char p[0x22A]; short v; };
struct o22C_float { char p[0x22C]; float v; };
struct o230_float { char p[0x230]; float v; };
struct o234_float { char p[0x234]; float v; };
struct o84_int { char p[0x84]; int v; };
struct o88_int { char p[0x88]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };


int FUN_0c058308(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(int *)(((((((struct o88_int *)(a4))->v)) << 2) + 0xC246FF0));
    t1 = (((struct oA0_int *)(a4))->v);
    (((struct oA0_uint *)(a4))->v) = (t1 - 1);
    if ((int)(t1 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    if ((int)((((struct oA0_int *)(a4))->v)) < (int)0x3C) {
        t1 = *(int *)0xC23A258;
        if ((t1 & 1) == 0) {
            if (t0 != 0) {
                nlPushMatrix(0x0);
                nlUnitMatrix();
                FUN_0c0dcc70(((((struct o22C_float *)(t0))->v)), ((((struct o230_float *)(t0))->v)), ((((struct o234_float *)(t0))->v)));
                nlRotateAY((((((struct o222_short *)(t0))->v)) + ((((struct o228_short *)(t0))->v))));
                nlRotateAX((((((struct o220_short *)(t0))->v)) + ((((struct o226_short *)(t0))->v))));
                nlRotateAZ(((((struct o22A_short *)(t0))->v)));
                u0 = *(float *)0xC058450;
                if (((((struct o84_int *)(a4))->v)) == 0) {
                    FUN_0c0dcc70(0.0f, u0, (*(float *)0xC058454));
                    nlRotateAY(0x8000);
                } else {
                    FUN_0c0dcc70(0.0f, u0, 1.0f);
                }
                FUN_0c0c47ae(0x125E);
                return nlPopMatrix(0x1);
            }
            return t1;
        }
        return t1;
    }
    if (t0 != 0) {
        nlPushMatrix(0x0);
        nlUnitMatrix();
        FUN_0c0dcc70(((((struct o22C_float *)(t0))->v)), ((((struct o230_float *)(t0))->v)), ((((struct o234_float *)(t0))->v)));
        nlRotateAY((((((struct o222_short *)(t0))->v)) + ((((struct o228_short *)(t0))->v))));
        nlRotateAX((((((struct o220_short *)(t0))->v)) + ((((struct o226_short *)(t0))->v))));
        nlRotateAZ(((((struct o22A_short *)(t0))->v)));
        u0 = *(float *)0xC058450;
        if (((((struct o84_int *)(a4))->v)) == 0) {
            FUN_0c0dcc70(0.0f, u0, (*(float *)0xC058454));
            nlRotateAY(0x8000);
        } else {
            FUN_0c0dcc70(0.0f, u0, 1.0f);
        }
        FUN_0c0c47ae(0x125E);
        return nlPopMatrix(0x1);
    }
    return 0xA0;
}
