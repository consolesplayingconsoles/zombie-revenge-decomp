/* Straight-line functions with calls and guards (batch gen_pu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0d9d20(float);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int nlMultiMatrix(int);
float nlTan(int);
int nl_set_cnv_proj_pers(void);
int FUN_0c0dd570(int a4, float f4, float f5, float f6);

int FUN_0c0dd570(int a4, float f4, float f5, float f6)
{
    int stk[23];
    register int t0;
    register float t4;
    register int t6;
    register float u14;
    register float u15;
    register float u24;
    register int t16;
    register int t26;
    register float t27;
    register float u30;
    register float u31;
    register float u32;
    register float u35;
    register float u36;
    register float u37;
    register float t39;
    register float t42;
    register float t43;
    register float u44;
    register float t45;
    register float t47;
    register float u49;
    register float u51;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(float *)(((int)stk + 16)) = f4;
    *(float *)(((int)stk + 4)) = f6;
    t0 = *(int *)(((int)stk + 8));
    *(float *)(((int)stk + 12)) = (1.0f / (nlTan((t0 >> 1))));
    if ((*(float *)0xC20CE2C) != 0.0f) {
        t4 = nlTan((t0 >> 1));
        t6 = FUN_0c0d9d20((t4 * ((*(float *)0xC20CE2C) + 1.0f)));
        *(float *)(((int)stk + 24)) = (1.0f / (FUN_0c0d9e90(t6)));
    } else {
        *(float *)(((int)stk + 24)) = (1.0f / (FUN_0c0d9e90((t0 >> 1))));
    }
    u14 = *(float *)(((int)stk + 12));
    u15 = *(float *)(((int)stk + 16));
    u24 = (1.0f / (u15 * u14));
    if ((*(float *)0xC20CE30) != 0.0f) {
        t16 = FUN_0c0d9d20((1.0f / (u15 * u14)));
        *(unsigned int *)(((int)stk + 8)) = t16;
        u24 = ((nlTan(t16)) * ((*(float *)0xC20CE30) + 1.0f));
    }
    t26 = FUN_0c0d9d20(u24);
    t27 = FUN_0c0d9e90(t26);
    *(float *)0xC20CE2C = 0.0f;
    *(float *)0xC20CE30 = 0.0f;
    u30 = (u15 * u14);
    u31 = ((*(float *)(((int)stk + 12))) * (*(float *)(((int)stk + 24))));
    u32 = (u30 * (1.0f / t27));
    *(float *)0xC20CE20 = (u31 * 0.5f);
    *(float *)0xC20CE24 = (u32 * 0.5f);
    *(float *)0xC948568 = ((*(float *)0xC20CE34) * (*(float *)0xC20CE20));
    u35 = *(float *)0xC20CE24;
    u36 = *(float *)0xC20CE38;
    *(float *)0xC94856C = (u36 * u35);
    u37 = *(float *)0xC948568;
    if (u37 > (u36 * u35)) {
        *(float *)0xC20CE28 = u37;
    } else {
        *(float *)0xC20CE28 = (u36 * u35);
    }
    t39 = nlTan((t0 >> 1));
    *(float *)(((int)stk + 20)) = (float)(FUN_0c0d9d20((t39 / (*(float *)(((int)stk + 16))))));
    *(float *)0xC94853C = 0.0f;
    *(float *)0xC94852C = 0.0f;
    *(float *)0xC948558 = 0.0f;
    *(float *)0xC948548 = 0.0f;
    t42 = FUN_0c0d9e90((t0 >> 1));
    *(float *)0xC948528 = t42;
    *(float *)0xC948538 = (-t42);
    t43 = FUN_0c0da410((t0 >> 1));
    *(float *)0xC948540 = t43;
    *(float *)0xC948530 = t43;
    u44 = *(float *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 8)) = (int)u44;
    t45 = FUN_0c0d9e90((int)u44);
    *(float *)0xC94854C = t45;
    *(float *)0xC94855C = (-t45);
    t47 = FUN_0c0da410((*(int *)(((int)stk + 8))));
    *(float *)0xC948560 = t47;
    *(float *)0xC948550 = t47;
    *(float *)0xC948544 = 0.0f;
    *(float *)0xC948534 = 0.0f;
    *(float *)0xC948564 = 0.0f;
    *(float *)0xC948554 = 0.0f;
    *(float *)(((int)stk + 28)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = (u15 * u14);
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    u49 = *(float *)(((int)stk + 4));
    *(float *)(((int)stk + 68)) = ((f5 + u49) / (f5 - u49));
    *(float *)(((int)stk + 72)) = -1.0f;
    *(float *)(((int)stk + 76)) = 0.0f;
    *(float *)(((int)stk + 80)) = 0.0f;
    u51 = (f5 * (*(float *)(((int)stk + 4))));
    *(float *)(((int)stk + 84)) = ((u51 * (1.0f + 1.0f)) / (f5 - u49));
    *(float *)(((int)stk + 88)) = 0.0f;
    *(float *)0xC990E9C = f5;
    *(float *)0xC990EA0 = (*(float *)(((int)stk + 4)));
    *(float *)0xC990EA4 = (1.0f / f5);
    *(float *)0xC94825C = f5;
    *(float *)0xC948244 = (-f5);
    *(float *)0xC948260 = (*(float *)(((int)stk + 4)));
    *(float *)0xC948258 = (1.0f / f5);
    nlMultiMatrix((((int)stk + 4) + 0x18));
    return (nl_set_cnv_proj_pers());
}
