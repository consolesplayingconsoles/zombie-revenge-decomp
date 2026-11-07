/* Straight-line functions with calls and guards (batch gen_px): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0d9d20(float);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int nlMultiMatrix(int);
float nlTan(int);
int nl_set_cnv_proj_pers(void);
int FUN_0c0dd2f0(int a4, float f4, float f5, float f6);

int FUN_0c0dd2f0(int a4, float f4, float f5, float f6)
{
    int stk[23];
    register int t0;
    register float t2;
    register float u3;
    register int t5;
    register float t6;
    register int t8;
    register int t10;
    register int t21;
    register float t17;
    register float t25;
    register float u26;
    register float u27;
    register float u28;
    register float u30;
    register float u32;
    register float u35;
    register float u36;
    register float u37;
    register float t39;
    register float u42;
    register float t43;
    register float t45;
    register float t46;
    register float t47;
    register float u50;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(float *)(((int)stk + 12)) = f4;
    t0 = *(int *)(((int)stk + 8));
    t2 = nlTan((t0 >> 1));
    *(float *)(((int)stk + 4)) = (1.0f / t2);
    u3 = *(float *)(((int)stk + 12));
    if ((*(float *)0xC20CE2C) != 0.0f) {
        t5 = FUN_0c0d9d20((u3 / (1.0f / t2)));
        *(unsigned int *)(((int)stk + 8)) = t5;
        t6 = nlTan(t5);
        t8 = FUN_0c0d9d20((t6 * ((*(float *)0xC20CE2C) + 1.0f)));
        *(float *)(((int)stk + 24)) = (1.0f / (FUN_0c0d9e90(t8)));
    } else {
        t10 = FUN_0c0d9d20((u3 / (1.0f / t2)));
        *(float *)(((int)stk + 24)) = (1.0f / (FUN_0c0d9e90(t10)));
    }
    t21 = (t0 >> 1);
    if ((*(float *)0xC20CE30) != 0.0f) {
        t17 = nlTan((t0 >> 1));
        t21 = (FUN_0c0d9d20((t17 * ((*(float *)0xC20CE30) + 1.0f))));
    }
    t25 = FUN_0c0d9e90(t21);
    *(float *)0xC20CE2C = 0.0f;
    *(float *)0xC20CE30 = 0.0f;
    u26 = *(float *)0xC0DD66C;
    u27 = *(float *)(((int)stk + 4));
    u28 = *(float *)(((int)stk + 12));
    *(float *)(((int)stk + 20)) = (u27 / u28);
    u30 = ((u27 / u28) * (*(float *)(((int)stk + 24))));
    *(float *)0xC20CE20 = (u30 * u26);
    u32 = ((*(float *)(((int)stk + 4))) * (1.0f / t25));
    *(float *)0xC20CE24 = (u32 * u26);
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
    *(float *)(((int)stk + 16)) = (float)(FUN_0c0d9d20((t39 * (*(float *)(((int)stk + 12))))));
    *(float *)0xC94853C = 0.0f;
    *(float *)0xC94852C = 0.0f;
    *(float *)0xC948558 = 0.0f;
    *(float *)0xC948548 = 0.0f;
    u42 = *(float *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 8)) = (int)u42;
    t43 = FUN_0c0d9e90((int)u42);
    *(float *)0xC948528 = t43;
    *(float *)0xC948538 = (-t43);
    t45 = FUN_0c0da410((*(int *)(((int)stk + 8))));
    *(float *)0xC948540 = t45;
    *(float *)0xC948530 = t45;
    t46 = FUN_0c0d9e90((t0 >> 1));
    *(float *)0xC94854C = t46;
    *(float *)0xC94855C = (-t46);
    t47 = FUN_0c0da410((t0 >> 1));
    *(float *)0xC948560 = t47;
    *(float *)0xC948550 = t47;
    *(float *)0xC948544 = 0.0f;
    *(float *)0xC948534 = 0.0f;
    *(float *)0xC948564 = 0.0f;
    *(float *)0xC948554 = 0.0f;
    *(float *)(((int)stk + 28)) = (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 4)));
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)(((int)stk + 68)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 72)) = -1.0f;
    *(float *)(((int)stk + 76)) = 0.0f;
    *(float *)(((int)stk + 80)) = 0.0f;
    u50 = (f5 * f6);
    *(float *)(((int)stk + 84)) = ((u50 * (1.0f + 1.0f)) / (f5 - f6));
    *(float *)(((int)stk + 88)) = 0.0f;
    *(float *)0xC990E9C = f5;
    *(float *)0xC990EA0 = f6;
    *(float *)0xC990EA4 = (1.0f / f5);
    *(float *)0xC94825C = f5;
    *(float *)0xC948244 = (-f5);
    *(float *)0xC948260 = f6;
    *(float *)0xC948258 = (1.0f / f5);
    nlMultiMatrix((((int)stk + 4) + 0x18));
    return (nl_set_cnv_proj_pers());
}
