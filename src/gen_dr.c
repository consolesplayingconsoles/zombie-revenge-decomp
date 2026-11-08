/* Straight-line functions with calls and guards (batch gen_dr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07c570(int, float, float, float);
int FUN_0c0c47ae(int);
int FUN_0c0c4898(int, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int FUN_0c07c664(int a4, int a5, int a6, int a7);
struct o32_short { char p[0x32]; short v; };
struct o32_ushort { char p[0x32]; unsigned short v; };
struct o34_short { char p[0x34]; short v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o80_short { char p[0x80]; short v; };
struct o80_ushort { char p[0x80]; unsigned short v; };
struct o82_short { char p[0x82]; short v; };
struct o82_ushort { char p[0x82]; unsigned short v; };
struct o86_short { char p[0x86]; short v; };
struct o86_ushort { char p[0x86]; unsigned short v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA0_ushort { char p[0xA0]; unsigned short v; };
struct oA2_ushort { char p[0xA2]; unsigned short v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_int { char p[0xA8]; int v; };


int FUN_0c07c664(int a4, int a5, int a6, int a7)
{
    int st;
    int t;
    int i;
    int n;
    int off;

    st = (((struct o32_short *)(a4))->v);
    if (st == 0) {
        if ((((struct oA4_int *)(a4))->v) != 0) {
            if ((int)((((struct o32_short *)((((struct oA4_int *)(a4))->v)))->v)) >= (int)0x2) {
                (((struct o86_ushort *)(a4))->v) = 0xA;
                (((struct oA2_ushort *)(a4))->v) = 0x4B;
                (((struct o32_ushort *)(a4))->v) = (((struct o32_short *)(a4))->v) + 0x1;
            }
        } else {
            (((struct o86_ushort *)(a4))->v) = 0x4B;
            if ((((struct oA8_int *)(a4))->v) != 0) {
                (((struct oA0_ushort *)(a4))->v) = 0x4B;
            }
            (((struct o32_ushort *)(a4))->v) = (((struct o32_short *)(a4))->v) + 0x2;
        }
        nlPushMatrix(a4 + 0x38);
        FUN_0c0c47ae((((struct o34_short *)(a4))->v));
        return nlPopMatrix(0x1);
    }
    if (st == 1) {
        t = (((struct o86_short *)(a4))->v);
        (((struct o86_ushort *)(a4))->v) = t - 1;
        if ((int)(short)(t - 1) <= 0) {
            (((struct o86_ushort *)(a4))->v) = 0x4B;
            if ((((struct oA8_int *)(a4))->v) != 0) {
                (((struct oA0_ushort *)(a4))->v) = 0x4B;
            }
            (((struct o32_ushort *)(a4))->v) = (((struct o32_short *)(a4))->v) + 0x1;
        }
        nlPushMatrix(a4 + 0x38);
        FUN_0c0c47ae((((struct o34_short *)(a4))->v));
        n = 1;
    } else if (st == 2 || st == 3) {
        (((struct o7C_float *)(a4))->v) = (((struct o7C_float *)(a4))->v) - 0.049999997f;
        (((struct o78_float *)(a4))->v) = (((struct o78_float *)(a4))->v) + (((struct o7C_float *)(a4))->v);
        (((struct o80_ushort *)(a4))->v) = (((struct o80_short *)(a4))->v) + 0x40;
        (((struct o82_ushort *)(a4))->v) = (((struct o82_short *)(a4))->v) + 0x80;
        if (st == 3) {
            (((struct o88_float *)(a4))->v) = (((struct o88_float *)(a4))->v) - (((struct o8C_float *)(a4))->v);
        }
        t = (((struct o86_short *)(a4))->v);
        (((struct o86_ushort *)(a4))->v) = t - 1;
        if ((int)(short)(t - 1) <= 0) {
            if (st == 3) {
                if ((((struct oA8_int *)(a4))->v) != 0) {
                    (((struct oA4_int *)((((struct oA8_int *)(a4))->v)))->v) = 0x0;
                }
                FUN_0c0e19f2();
            } else {
                (((struct o86_ushort *)(a4))->v) = 0x19;
                (((struct o8C_float *)(a4))->v) = 0.0399999991f;
                (((struct o32_ushort *)(a4))->v) = (((struct o32_short *)(a4))->v) + 0x1;
            }
        }
        nlPushMatrix(a4 + 0x38);
        FUN_0c0dcc70(0.0f, (((struct o78_float *)(a4))->v), 0.0f);
        nlRotateAY((((struct o82_short *)(a4))->v));
        nlRotateAX((((struct o80_short *)(a4))->v));
        if (st == 3) {
            FUN_0c0c4898((((struct o34_short *)(a4))->v), (((struct o88_float *)(a4))->v));
        } else {
            FUN_0c0c47ae((((struct o34_short *)(a4))->v));
        }
        n = 2;
    } else {
        return st;
    }
    for (i = 0; i < n; i++) {
        off = 0xA2 - i * 2;
        t = *(short *)(a4 + off);
        *(unsigned short *)(a4 + off) = t - 1;
        if ((int)(short)(t - 1) > 0) {
            FUN_0c07c570(i, *(float *)(a4 + 0x9C - i * 4), *(float *)(a4 + 0x94 - i * 4), (float)(*(short *)(a4 + off)) / 75.0f);
        }
    }
    return nlPopMatrix(0x1);
}
