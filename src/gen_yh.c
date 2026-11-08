/* Straight-line functions with calls and guards (batch gen_yh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c0909fc(int);
int FUN_0c09d320(void);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0e19f2(void);
int FUN_0c0e6248(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c063a90(int a4);
struct o1C4_int { char p[0x1C4]; int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o220_int { char p[0x220]; int v; };
struct o22C_int { char p[0x22C]; int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o2BC_int { char p[0x2BC]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };


int FUN_0c063a90(int a4)
{
    int stk[7];
    register int t1;
    register int t2;

    t1 = *(int *)(((((((struct oBC_int *)(a4))->v)) << 2) + 0xC246FF0));
    t2 = (((struct o22C_int *)(a4))->v);
    (((struct o22C_uint *)(a4))->v) = (t2 - 1);
    if ((int)(t2 - 1) < 0) {
        FUN_0c09d320();
        FUN_0c0e19f2();
    }
    if (((((struct o2BC_int *)(t1))->v)) != ((((struct o220_int *)(a4))->v))) {
        FUN_0c09d320();
        FUN_0c0e19f2();
    }
    if (((((struct oD8_int *)(a4))->v)) != 0) {
        if (((((struct oD8_int *)(a4))->v)) == 1) {
            FUN_0c0909fc(a4);
        }
        (((struct o1EC_uint *)(a4))->v) = (((((struct o1EC_int *)(a4))->v)) & (~((((struct o1C4_int *)(a4))->v))));
        (((struct oD8_uint *)(a4))->v) = 0x0;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    nlPushMatrix(0x0);
    FUN_0c0dbda0((((((struct o3E4_int *)(t1))->v)) + 0x1C0));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = -10.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    (((struct o30_float *)(a4))->v) = (*(float *)(((int)stk + 4)));
    (((struct o34_float *)(a4))->v) = (*(float *)(((int)stk + 8)));
    (((struct o38_float *)(a4))->v) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    FUN_0c0e6248();
    return (FUN_0c01cdc2(a4));
}
