/* Straight-line functions with calls and guards (batch gen_sv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c061214(int a4, int a5);
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_int { char p[0x1E8]; int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o24C_float { char p[0x24C]; float v; };
struct o250_float { char p[0x250]; float v; };
struct o254_float { char p[0x254]; float v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oE8_short { char p[0xE8]; short v; };


int FUN_0c061214(int a4, int a5)
{
    int stk[13];
    register int t1;
    register int t10;
    register int t24;
    register int t26;
    register int t14;

    t1 = FUN_0c0e19aa(0xC060F76, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    (((struct oBC_uint *)(t1))->v) = ((((struct oBC_int *)(a4))->v));
    *(unsigned int *)(((0x200 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    if ((int)((((struct oE8_short *)(a4))->v)) < (int)0x4) {
        t10 = 0x0;
        if ((*(signed char *)((a5 + 0x4))) != 0) {
            t10 = ((((struct o1EC_int *)(a4))->v));
        }
        t14 = t10;
    } else {
        t14 = ((int)0x1 << (int)((((struct oBC_int *)(a4))->v)));
    }
    (((struct o1EC_uint *)(t1))->v) = t14;
    *(unsigned int *)(((0x1E8 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    (((struct o1E4_float *)(t1))->v) = ((((struct oC_float *)(a5))->v));
    *(unsigned int *)(((0x1FC + t1) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    (((struct o1F8_uint *)(t1))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    *(unsigned int *)(((0x22C + t1) + 0x0)) = (unsigned short)(*(short *)((a5 + 0x8)));
    t24 = (((struct oBC_int *)(a4))->v);
    t26 = (((struct o1E8_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)((((((((t24 << 1) + t24) << 2) << 2) << 2) + 0xC23F268) + (((t26 << 1) + t26) << 2))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x3C)) = *(struct mv3 *)((t1 + 0x30)); }
    (((struct o220_uint *)(t1))->v) = 0x4F;
    (((struct o24C_float *)(t1))->v) = 40.0f;
    (((struct o250_float *)(t1))->v) = 0.649999976f;
    (((struct o254_float *)(t1))->v) = 1.02499998f;
    nlPushMatrix(0x0);
    FUN_0c0dbda0((((((struct o3E4_int *)(a4))->v)) + 0x100));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = (-((((struct o250_float *)(t1))->v)));
    *(float *)(((int)stk + 24)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)((((((int)stk + 4) + 0x18) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((((int)stk + 4) + 0x18) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    (((struct o48_float *)(t1))->v) = ((*(float *)(((((int)stk + 4) + 0x18) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x24) + 0x0))));
    (((struct o4C_float *)(t1))->v) = (((((struct o4_float *)((((int)stk + 4) + 0x18)))->v)) - ((((struct o4_float *)((((int)stk + 4) + 0x24)))->v)));
    (((struct o50_float *)(t1))->v) = (((((struct o8_float *)((((int)stk + 4) + 0x18)))->v)) - ((((struct o8_float *)((((int)stk + 4) + 0x24)))->v)));
    return 0x50;
}
