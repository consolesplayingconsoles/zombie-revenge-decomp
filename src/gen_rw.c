/* Straight-line functions with calls and guards (batch gen_rw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7064(int, int, int, int, int, int, int, int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c056588(int a4);
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };


int FUN_0c056588(int a4)
{
    int stk[11];
    register float u0;
    register float u1;
    register float u2;

    *(int *)((int)stk + 28) = (a4 + 0x68);
    *(int *)((int)stk + 24) = (a4 + 0x64);
    *(float *)(((int)stk + 20)) = 0.049999997f;
    u0 = (((struct o38_float *)(a4))->v);
    *(float *)(((int)stk + 16)) = u0;
    u1 = (((struct o34_float *)(a4))->v);
    *(float *)(((int)stk + 12)) = u1;
    u2 = (((struct o30_float *)(a4))->v);
    *(float *)(((int)stk + 8)) = u2;
    *(float *)(((int)stk + 4)) = (u0 + ((((struct o5C_float *)(a4))->v)));
    FUN_0c0a7064(((int)stk + 32), (((int)stk + 32) + 0x4), (((int)stk + 32) + 0x8), (a4 + 0x60), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), (a4 + 0x64), (a4 + 0x68), ((((struct o98_float *)(a4))->v)), ((((struct o9C_float *)(a4))->v)), ((((struct oA0_float *)(a4))->v)), ((((struct o8C_float *)(a4))->v)), ((((struct o90_float *)(a4))->v)), ((((struct o94_float *)(a4))->v)), (u2 + ((((struct o54_float *)(a4))->v))), (u1 + ((((struct o58_float *)(a4))->v))));
    (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) * 0.5f);
    return 0x64;
}
