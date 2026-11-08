/* Straight-line functions with calls and guards (batch gen_ov): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0a79fa(int, int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dccf0(void);
int FUN_0c0de000(float);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0bc798(int a4, int a5, int a6);
struct o20C_int { char p[0x20C]; int v; };
struct o220_short { char p[0x220]; short v; };
struct o220_ushort { char p[0x220]; unsigned short v; };
struct o222_short { char p[0x222]; short v; };
struct o222_ushort { char p[0x222]; unsigned short v; };
struct o226_short { char p[0x226]; short v; };
struct o226_ushort { char p[0x226]; unsigned short v; };
struct o228_short { char p[0x228]; short v; };
struct o228_ushort { char p[0x228]; unsigned short v; };
struct o22A_short { char p[0x22A]; short v; };
struct o22A_ushort { char p[0x22A]; unsigned short v; };
struct o22C_float { char p[0x22C]; float v; };
struct o230_float { char p[0x230]; float v; };
struct o234_float { char p[0x234]; float v; };
struct o238_short { char p[0x238]; short v; };
struct o238_ushort { char p[0x238]; unsigned short v; };
struct o274_float { char p[0x274]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o27C_float { char p[0x27C]; float v; };
struct o280_float { char p[0x280]; float v; };
struct o454_short { char p[0x454]; short v; };
struct o458_float { char p[0x458]; float v; };
struct o6E_short { char p[0x6E]; short v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oE8_short { char p[0xE8]; short v; };


int FUN_0c0bc798(int a4, int a5, int a6)
{
    int stk[15];
    register int t1;
    register int t2;
    register int t61;
    register int t75;
    register int t76;
    register int t99;
    register int t100;
    register int t101;
    register int t103;
    register int t116;
    register int t117;
    register int t118;
    register int t121;
    register int t167;
    register int t174;
    register int t39;
    register int t40;
    register int t41;
    register int t42;
    register int t43;
    int t44;
    int t54;
    register int t59;

    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 20)) = 0x1000;
    t1 = 0x100;
    t2 = 0x1000;
    if ((0x100 & (*(int *)0xC23A1A8)) != 0) {
        t1 = 0x200;
        t2 = 0x2800;
    }
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x18) + 0x8);
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x18) + 0x4);
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x18);
    FUN_0c0a79fa((((int)stk + 4) + 0x18), ((((int)stk + 4) + 0x18) + 0x4), ((((int)stk + 4) + 0x18) + 0x8));
    (((struct o226_ushort *)(a4))->v) = (*(int *)(((*(int *)(((int)stk + 12))) + 0x0)));
    (((struct o228_ushort *)(a4))->v) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)));
    (((struct o22A_ushort *)(a4))->v) = (*(int *)(((*(int *)(((int)stk + 4))) + 0x0)));
    FUN_0c0dc5a0();
    nlRotateAY((((((struct o222_short *)(a4))->v)) + ((((struct o228_short *)(a4))->v))));
    nlRotateAX((((((struct o220_short *)(a4))->v)) + ((((struct o226_short *)(a4))->v))));
    nlRotateAZ(((((struct o22A_short *)(a4))->v)));
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x24) + 0x4);
    *(unsigned int *)(((int)stk + 24)) = (((int)stk + 4) + 0x24);
    FUN_0c0a79fa((((int)stk + 4) + 0x24), ((((int)stk + 4) + 0x24) + 0x4), ((((int)stk + 4) + 0x24) + 0x8));
    nlPopMatrix(0x1);
    if (((((struct oC0_int *)(a4))->v)) == 50) {
    } else {
        if (((((((struct o20C_int *)(a4))->v)) & 0x10015) != 0) && ((t39 = (((struct oBC_int *)(a4))->v), t40 = *(int *)((0xC247484 + (t39 << 2))), t40 != -1) && ((t41 = (((struct oBC_int *)(a4))->v), t42 = *(int *)((0xC247484 + (t41 << 2))), t43 = *(int *)(((t42 << 2) + 0xC247030)), t43 != 0) && (t44 = (((struct oC8_int *)(a4))->v), (t44 & 0x2F5) != 0)))) {
            if (((int)((((struct oBC_int *)(a4))->v)) < (int)0x2) && (t54 = (((struct oE8_short *)(a4))->v), (int)t54 >= 0)) {
                t59 = ((((struct oE8_short *)(a4))->v));
            } else {
                t59 = (*(int *)((((((((struct oBC_int *)(a4))->v)) << 2) + 0xC247484) + 0x0)));
            }
            t61 = *(int *)((((t59 << 2) + 0xC246FF0) + 0x0));
            if (t61 != 0) {
                FUN_0c0a7714((((int)stk + 4) + 0x30), ((((int)stk + 4) + 0x30) + 0x4), (((((struct o22C_float *)(a4))->v)) - ((((struct o22C_float *)(t61))->v))), (((((struct o230_float *)(a4))->v)) - ((((struct o230_float *)(t61))->v))), (((((struct o234_float *)(a4))->v)) - ((((struct o234_float *)(t61))->v))));
            }
            t75 = *(int *)(((((int)stk + 4) + 0x30) + 0x4));
            t76 = (((struct o6E_short *)(a4))->v);
            if (_builtin_fabsf((float)(short)(t76 - t75)) > 16384.0f) {
                *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(int *)(((*(int *)(((int)stk + 12))) + 0x0)));
                *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x4)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)));
            }
            _builtin_fabsf((float)(short)(t76 - t75));
        } else {
            *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(int *)(((*(int *)(((int)stk + 12))) + 0x0)));
            *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x4)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)));
        }
        t99 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
        t100 = *(int *)(((((int)stk + 4) + 0x30) + 0x4));
        if (_builtin_fabsf((float)(short)(t100 - t99)) > (float)t1) {
            if (((int)(short)(t100 - t99) < (int)0x8000) && ((int)(short)(t100 - t99) > 0)) {
                t101 = (((struct o222_short *)(a4))->v);
                (((struct o222_ushort *)(a4))->v) = (t101 + t1);
                if ((int)(short)(t101 + t1) > (int)t2) {
                    (((struct o222_ushort *)(a4))->v) = t2;
                }
            } else {
                t103 = (((struct o222_short *)(a4))->v);
                (((struct o222_ushort *)(a4))->v) = (t103 - t1);
                if ((int)(short)(t103 - t1) < (int)(-t2)) {
                    (((struct o222_ushort *)(a4))->v) = (-t2);
                }
            }
        }
        t116 = *(int *)(((((int)stk + 4) + 0x30) + 0x0));
        t117 = *(int *)(((*(int *)(((int)stk + 24))) + 0x0));
        if (_builtin_fabsf((float)(short)(t116 - t117)) > (float)t1) {
            if (((int)(short)(t116 - t117) < (int)0x8000) && ((int)(short)(t116 - t117) > 0)) {
                t118 = (((struct o220_short *)(a4))->v);
                (((struct o220_ushort *)(a4))->v) = (t118 + 0x100);
                if ((int)(short)(t118 + 0x100) > (int)(*(int *)(((int)stk + 20)))) {
                    (((struct o220_ushort *)(a4))->v) = 0x1000;
                }
            } else {
                t121 = (((struct o220_short *)(a4))->v);
                (((struct o220_ushort *)(a4))->v) = (t121 - 0x100);
                if ((int)(short)(t121 - 0x100) < (int)0xFFFFF000) {
                    (((struct o220_ushort *)(a4))->v) = 0xFFFFF000;
                }
            }
        }
        _builtin_fabsf((float)(short)(t100 - t99));
        _builtin_fabsf((float)(short)(t116 - t117));
    }
    nlPushMatrix(0x0);
    FUN_0c0dccf0();
    nlRotateAY((((((struct o222_short *)(a4))->v)) + ((((struct o228_short *)(a4))->v))));
    nlRotateAX((((((struct o220_short *)(a4))->v)) + ((((struct o226_short *)(a4))->v))));
    nlRotateAZ(((((struct o22A_short *)(a4))->v)));
    nlScale(((((struct o274_float *)(a4))->v)), ((((struct o278_float *)(a4))->v)), ((((struct o27C_float *)(a4))->v)));
    if (((((struct o238_short *)(a4))->v)) == 0) {
        FUN_0c0de000(((((struct o280_float *)(a4))->v)));
        t167 = ((int (*)(int, float))((*(int *)((((unsigned short)((((struct o454_short *)(a4))->v)) << 2) + 0xC195F38)))))((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), ((((struct o458_float *)(a4))->v)));
    } else {
        (((struct o238_ushort *)(a4))->v) = ((*(short *)0xC247CF8) + 0x1);
    }
    if ((*(int *)0xC260868) != 0) {
        t174 = *(int *)0xC260868;
        *(unsigned int *)0xC260868 = (t174 + 0x40);
        nlGetMatrix(((t174 + 0x40) - 64));
    }
    return (nlPopMatrix(0x1));
}
