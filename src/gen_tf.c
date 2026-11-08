/* Straight-line functions with calls and guards (batch gen_tf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0cc3f8(int);
int FUN_0c0db840(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int nlPopMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0603d0(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7);
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_int { char p[0x1E8]; int v; };
struct o1E8_uint { char p[0x1E8]; unsigned int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F4_uint { char p[0x1F4]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o1FC_uint { char p[0x1FC]; unsigned int v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o244_uint { char p[0x244]; unsigned int v; };
struct o248_uint { char p[0x248]; unsigned int v; };
struct o24C_float { char p[0x24C]; float v; };
struct o250_float { char p[0x250]; float v; };
struct o254_float { char p[0x254]; float v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6C_ushort { char p[0x6C]; unsigned short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o6E_ushort { char p[0x6E]; unsigned short v; };
struct o70_short { char p[0x70]; short v; };
struct o70_ushort { char p[0x70]; unsigned short v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oE8_short { char p[0xE8]; short v; };


int FUN_0c0603d0(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0e19aa(0xC06078C, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t0);
    (((struct oBC_uint *)(t0))->v) = ((((struct oBC_int *)(a4))->v));
    (((struct o200_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    if ((int)((((struct oE8_short *)(a4))->v)) < (int)0x4) {
        t1 = 0x0;
        if ((*(signed char *)((a5 + 0x4))) != 0) {
            t1 = ((((struct o1EC_int *)(a4))->v));
        }
        t2 = t1;
    } else {
        t2 = ((int)0x1 << (int)((((struct oBC_int *)(a4))->v)));
    }
    (((struct o1EC_uint *)(t0))->v) = t2;
    (((struct o1E8_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    (((struct o1F4_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    (((struct o204_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    (((struct o1E4_float *)(t0))->v) = ((((struct oC_float *)(a5))->v));
    (((struct o1FC_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    (((struct o1F8_uint *)(t0))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    t1 = *(short *)((a5 + 0x8));
    (((struct o22C_uint *)(t0))->v) = (((unsigned short)t1 << 1) + (unsigned short)t1);
    t1 = (((struct oBC_int *)(a4))->v);
    t2 = (((struct o1E8_int *)(t0))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC23F268) + (((t2 << 1) + t2) << 2))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x3C)) = *(struct mv3 *)((t0 + 0x30)); }
    (((struct o220_uint *)(t0))->v) = 0x291;
    (((struct o244_uint *)(t0))->v) = 0x0;
    (((struct o24C_float *)(t0))->v) = f5;
    (((struct o250_float *)(t0))->v) = f6;
    (((struct o254_float *)(t0))->v) = f7;
    (((struct o248_uint *)(t0))->v) = a8;
    if ((int)a8 > (int)0x8) {
        (((struct o248_uint *)(t0))->v) = 0x8;
    }
    (((struct o6C_ushort *)(t0))->v) = a6;
    (((struct o6E_ushort *)(t0))->v) = (a7 + ((((struct o6E_short *)(a4))->v)));
    (((struct o70_ushort *)(t0))->v) = 0x0;
    FUN_0c0dc5a0();
    nlRotateAY(((((struct o6E_short *)(t0))->v)));
    nlRotateAX(((((struct o6C_short *)(t0))->v)));
    nlRotateAZ(((((struct o70_short *)(t0))->v)));
    FUN_0c0dcc70(0.0f, 0.0f, (-f4));
    FUN_0c0db840((t0 + 0x48));
    nlPopMatrix(0x1);
    FUN_0c0cbafc(0x291, 0x2, 0xFC007000, 0x84002000);
    return FUN_0c0cc3f8(0x432A9);
}
