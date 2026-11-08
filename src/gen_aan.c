/* Straight-line functions with calls and guards (batch gen_aan): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01ce8a(int, float);
int FUN_0c01d2c2(int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0db470(int, int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e07b4(int, float, float, float, float, float, float);
int FUN_0c0e2d6c(int, float, float, float, float);
int nlInvertMatrix(int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int FUN_0c01cb94(int a4, int a5);
struct o1BC_uint { char p[0x1BC]; unsigned int v; };
struct o1C0_uint { char p[0x1C0]; unsigned int v; };
struct o1C4_int { char p[0x1C4]; int v; };
struct o1C4_uint { char p[0x1C4]; unsigned int v; };
struct o1CC_uint { char p[0x1CC]; unsigned int v; };
struct o1D0_uint { char p[0x1D0]; unsigned int v; };
struct o1D4_float { char p[0x1D4]; float v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_int { char p[0x1E8]; int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F4_int { char p[0x1F4]; int v; };
struct o1F8_int { char p[0x1F8]; int v; };
struct o1FC_int { char p[0x1FC]; int v; };
struct o200_int { char p[0x200]; int v; };
struct o208_uint { char p[0x208]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o6C_short { char p[0x6C]; short v; };
struct o6E_short { char p[0x6E]; short v; };
struct o70_short { char p[0x70]; short v; };
struct o88_int { char p[0x88]; int v; };
struct o90_int { char p[0x90]; int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };


int FUN_0c01cb94(int a4, int a5)
{
    int stk[7];
    register int t0;
    register int t2;
    register int t91;
    register float t4;
    register int t47;
    int t51;
    int t54;
    register int t62;
    int t63;

    t0 = (((struct o88_int *)(a4))->v);
    t2 = FUN_0c01ce8a((a4 + 0x30), ((((struct oC_float *)(t0))->v)));
    t91 = 0x0;
    if (t2 != 0) {
        nlPushMatrix(0x0);
        t4 = nlLength((a5 + 0x30), (a5 + 0x3C));
        if (t4 > ((((struct o1E4_float *)(a5))->v))) {
            nlUnitMatrix();
            FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
            nlRotateAY(((((struct o6E_short *)(a4))->v)));
            nlRotateAX(((((struct o6C_short *)(a4))->v)));
            nlRotateAZ(((((struct o70_short *)(a4))->v)));
            nlInvertMatrix(0x0);
            FUN_0c0db470((a5 + 0x30), ((int)stk + 4));
            FUN_0c0db470((a5 + 0x3C), (((int)stk + 4) + 0xC));
            t47 = (FUN_0c0e07b4(((((struct o90_int *)(t0))->v)), (*(float *)(((int)stk + 4))), (*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 16))), (*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24)))));
        } else {
            nlUnitMatrix();
            FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
            nlRotateAY(((((struct o6E_short *)(a4))->v)));
            nlRotateAX(((((struct o6C_short *)(a4))->v)));
            nlRotateAZ(((((struct o70_short *)(a4))->v)));
            nlInvertMatrix(0x0);
            FUN_0c0db470((a5 + 0x30), ((int)stk + 4));
            t47 = (FUN_0c0e2d6c(((((struct o90_int *)(t0))->v)), (*(float *)(((int)stk + 4))), (*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 12))), ((((struct o1E4_float *)(a5))->v))));
        }
        nlPopMatrix(0x1);
        if ((((*(int *)0xC23A1A8) & 0x101) != 0) && (t51 = (((struct o200_int *)(a5))->v), t51 == -1)) {
            (((struct o1BC_uint *)(a5))->v) = 0xFFFFFFFF;
            t91 = 0x0;
        } else {
            t91 = 0x0;
            if ((t47 != 0) && (t54 = (((struct o200_int *)(a5))->v), t54 != 0)) {
                (((struct o1C0_uint *)(a4))->v) = ((((struct o200_int *)(a5))->v));
                (((struct o1BC_uint *)(a4))->v) = ((((struct o1F8_int *)(a5))->v));
                (((struct o1D0_uint *)(a4))->v) = ((((struct o1FC_int *)(a5))->v));
                (((struct o1C4_uint *)(a4))->v) = ((((struct oBC_int *)(a5))->v));
                (((struct o208_uint *)(a4))->v) = ((((struct o1E8_int *)(a5))->v));
                (((struct o1CC_uint *)(a4))->v) = ((((struct o1F4_int *)(a5))->v));
                if ((((*(int *)0xC23A1A8) & 0x100) != 0) && ((t62 = (((struct oBC_int *)(a5))->v), (int)t62 < (int)0x2) && (((int)t62 < (int)0x2) && (t63 = *(int *)0xC23A1A8, (0x100 & t63) != 0)))) {
                    FUN_0c01d2c2(a4, a5);
                }
                (((struct o1D4_float *)(a4))->v) = (nlLength((a5 + 0x30), (a5 + 0x3C)));
                FUN_0c0a7714((0x1D8 + a4), (0x1DC + a4), (((((struct o30_float *)(a5))->v)) - ((((struct o3C_float *)(a5))->v))), (((((struct o34_float *)(a5))->v)) - ((((struct o40_float *)(a5))->v))), (((((struct o38_float *)(a5))->v)) - ((((struct o44_float *)(a5))->v))));
                (((struct o1C4_uint *)(a5))->v) = ((((struct oBC_int *)(a4))->v));
                (((struct o208_uint *)(a5))->v) = 0x0;
                (((struct oD8_uint *)(a5))->v) = 0x4;
                (((struct o1EC_uint *)(a5))->v) = (((((struct o1EC_int *)(a5))->v)) | ((int)0x1 << (int)((((struct o1C4_int *)(a5))->v))));
                t91 = 0xFFFFFFFF;
            }
        }
    }
    return t91;
}
