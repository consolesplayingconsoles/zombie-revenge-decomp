/* Straight-line functions with calls and guards (batch gen_aq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
extern int FUN_0c022aa6();
int FUN_0c026dbc(int);
int FUN_0c02a19a(int, int, int, int);
int FUN_0c032394(int);
int FUN_0c03242c(int, float, float);
int FUN_0c0328e4(int);
int FUN_0c0329ae(int, int);
int FUN_0c0340a0(int, float);
int FUN_0c035280(int, int, int);
int FUN_0c0376f4(int);
int FUN_0c037954(int);
int FUN_0c037ee8(int);
int FUN_0c038188(int);
int FUN_0c03f4bc(int);
int FUN_0c041dd0(int);
int FUN_0c054c8a(int);
int FUN_0c05a98a(int);
int FUN_0c0a6688(int, int, int);
int FUN_0c0a68ec(int, float, float);
int FUN_0c0c475c(int, float);
int FUN_0c0d9d20(float);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
float nlTan(int);
int FUN_0c0db470(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int nlUnitMatrix(void);
int nlAddVector(int, int);
int FUN_0c0de000(float);
int nl_set_cnv_proj_pers(void);
int FUN_0c0e1830(int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
extern int _quick_odd_mvn();
int FUN_0c0e6248(void);
int FUN_0c05e158(int a4);
int FUN_0c0dd2f0(int a4, float f4, float f5, float f6);
int FUN_0c026ddc(int a4, int a5, int a6);
int FUN_0c04105c(int a4);
int FUN_0c0381b6(int a4);
struct o18_float { char p[0x18]; float v; };
struct o220_float { char p[0x220]; float v; };
struct o220_short { char p[0x220]; short v; };
struct o222_short { char p[0x222]; short v; };
struct o224_float { char p[0x224]; float v; };
struct o226_short { char p[0x226]; short v; };
struct o228_float { char p[0x228]; float v; };
struct o228_short { char p[0x228]; short v; };
struct o22A_short { char p[0x22A]; short v; };
struct o22C_float { char p[0x22C]; float v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o230_float { char p[0x230]; float v; };
struct o230_uint { char p[0x230]; unsigned int v; };
struct o234_float { char p[0x234]; float v; };
struct o234_uint { char p[0x234]; unsigned int v; };
struct o274_float { char p[0x274]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o27C_float { char p[0x27C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o418_int { char p[0x418]; int v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6C_ushort { char p[0x6C]; unsigned short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_short { char p[0x70]; short v; };
struct o70_ushort { char p[0x70]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct o0_int { int v; };
struct oC_int { char p[0xC]; int v; };







int FUN_0c0381b6(int a4)
{
    int stk[9];
    register int t14;
    int t2;
    register int t3;
    register int t4;
    register int t88;

    if (((*(short *)(((((((((struct o418_int *)(a4))->v)) << 2) << 2) + 0xC246394) + 0x4))) != 0) && (t2 = (((struct o418_int *)(a4))->v), t3 = *(int *)(((((t2 << 2) << 2) + 0xC246394) + 0x0)), t4 = (((struct oC0_int *)(t3))->v), t4 == 8)) {
        t14 = *(short *)(((((((((struct o418_int *)(a4))->v)) << 2) << 2) + 0xC246394) + 0x4));
        t88 = (unsigned short)t14;
        if ((unsigned short)t14 == 1) {
        } else {
            if ((((((struct o0_int *)0xC246304)->v)) & 1) == 0) {
                t88 = (FUN_0c038188(a4));
            } else {
                if ((((((struct oC_int *)0xC246304)->v)) & 8) == 0) {
                } else {
                    nlPushMatrix(0x0);
                    nlUnitMatrix();
                    FUN_0c0dcc70(((((struct o22C_float *)(t3))->v)), ((((struct o230_float *)(t3))->v)), ((((struct o234_float *)(t3))->v)));
                    nlRotateAZ(((((struct o22A_short *)(t3))->v)));
                    nlRotateAY((((((struct o222_short *)(t3))->v)) + ((((struct o228_short *)(t3))->v))));
                    nlRotateAX((((((struct o220_short *)(t3))->v)) + ((((struct o226_short *)(t3))->v))));
                    *(float *)(((int)stk + 12)) = (((((struct o274_float *)(t3))->v)) * 0.0f);
                    *(float *)(((int)stk + 16)) = (-(((((struct o278_float *)(t3))->v)) * 0.899999976f));
                    *(float *)(((int)stk + 20)) = (-(((((struct o27C_float *)(t3))->v)) * 4.5f));
                    FUN_0c0db470((((int)stk + 0) + 0xC), ((int)stk + 0));
                    (((struct o18_float *)(((int)stk + 0)))->v) = (*(float *)(((int)stk + 0)));
                    (((struct o4_float *)((((int)stk + 0) + 0x18)))->v) = (*(float *)(((int)stk + 4)));
                    (((struct o8_float *)((((int)stk + 0) + 0x18)))->v) = (*(float *)(((int)stk + 8)));
                    nlPopMatrix(0x1);
                    (((struct o220_float *)(a4))->v) = (((((struct o18_float *)(((int)stk + 0)))->v)) - ((((struct o30_float *)(a4))->v)));
                    (((struct o224_float *)(a4))->v) = (((((struct o4_float *)((((int)stk + 0) + 0x18)))->v)) - ((((struct o34_float *)(a4))->v)));
                    (((struct o228_float *)(a4))->v) = (((((struct o8_float *)((((int)stk + 0) + 0x18)))->v)) - ((((struct o38_float *)(a4))->v)));
                    (((struct o22C_uint *)(a4))->v) = (short)((((((struct o220_short *)(t3))->v)) + ((((struct o226_short *)(t3))->v))) - ((((struct o6C_short *)(a4))->v)));
                    (((struct o230_uint *)(a4))->v) = (short)((((((struct o222_short *)(t3))->v)) + ((((struct o228_short *)(t3))->v))) - ((((struct o6E_short *)(a4))->v)));
                    (((struct o234_uint *)(a4))->v) = (short)(((((struct o22A_short *)(t3))->v)) - ((((struct o70_short *)(a4))->v)));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x30)) = *(struct mv3 *)((((int)stk + 0) + 0x18)); }
                    (((struct o6C_ushort *)(a4))->v) = (((((struct o220_short *)(t3))->v)) + ((((struct o226_short *)(t3))->v)));
                    (((struct o6E_ushort *)(a4))->v) = (((((struct o222_short *)(t3))->v)) + ((((struct o228_short *)(t3))->v)));
                    (((struct o70_ushort *)(a4))->v) = ((((struct o22A_short *)(t3))->v));
                    FUN_0c0376f4(a4);
                    FUN_0c037954(a4);
                }
                if ((((((struct oC_int *)0xC246304)->v)) & 16) != 0) {
                    FUN_0c038188(a4);
                }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3B8 + a4)) = *(struct mv3 *)((0x370 + a4)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3C4 + a4)) = *(struct mv3 *)((0x37C + a4)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x3D0 + a4)) = *(struct mv3 *)((0x388 + a4)); }
                t88 = (FUN_0c037ee8(a4));
            }
        }
    } else {
        t88 = (FUN_0c038188(a4));
    }
    return t88;
}
