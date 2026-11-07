/* Straight-line functions with calls and guards (batch gen_ln): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c033c8c(int, int, int, float);
float FUN_0c0d9e90(int);
float FUN_0c0da410(int);
int FUN_0c033e40(int a4);

int FUN_0c033e40(int a4)
{
    int stk[155];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float t7;
    register float t9;
    register float u12;
    register float u16;
    register float u19;
    register float u23;
    register float u26;
    register float u30;
    register float u38;
    register float u45;
    register float u51;
    register float u58;
    register float u62;
    register int t63;

    t0 = *(int *)((a4 + 0x4F4));
    t2 = *(int *)(((((t0 << 1) + t0) << 2) + 0xC1F79BC));
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        t5 = t3;
        if ((int)t3 < 0) {
            t5 = (t3 + 0xF);
        }
        *(unsigned int *)(((int)stk + 4)) = ((int)t5 >> 4);
        t7 = FUN_0c0da410(((int)t5 >> 4));
        t9 = FUN_0c0d9e90((*(int *)(((int)stk + 4))));
        u12 = (*(float *)((a4 + 0x30)));
        u12 = u12 + t7 * (*(float *)(((t2 + 0x7C) + 0x0)));
        *(float *)(((t4 + (0x1A8 + ((int)stk + 4))) + 0x0)) = u12;
        *(float *)(((t4 + (0x1A8 + ((int)stk + 4))) + 0x4)) = ((*(float *)((a4 + 0x34))) + 1.0f);
        u16 = (*(float *)((a4 + 0x38)));
        u16 = u16 + t9 * (*(float *)(((t2 + 0x7C) + 0x0)));
        *(float *)(((t4 + (0x1A8 + ((int)stk + 4))) + 0x8)) = u16;
        u19 = (*(float *)((a4 + 0x30)));
        u19 = u19 + t7 * (*(float *)((t2 + 0x80)));
        *(float *)(((t4 + (0xE8 + ((int)stk + 4))) + 0x0)) = u19;
        *(float *)(((t4 + (0xE8 + ((int)stk + 4))) + 0x4)) = ((*(float *)((a4 + 0x34))) + 1.0f);
        u23 = (*(float *)((a4 + 0x38)));
        u23 = u23 + t9 * (*(float *)((t2 + 0x80)));
        *(float *)(((t4 + (0xE8 + ((int)stk + 4))) + 0x8)) = u23;
        u26 = (*(float *)((a4 + 0x30)));
        u26 = u26 + t7 * (*(float *)((t2 + 0x84)));
        *(float *)(((t4 + (((int)stk + 4) + 0x28)) + 0x0)) = u26;
        *(float *)(((t4 + (((int)stk + 4) + 0x28)) + 0x4)) = ((*(float *)((a4 + 0x34))) + 1.0f);
        u30 = (*(float *)((a4 + 0x38)));
        u30 = u30 + t9 * (*(float *)((t2 + 0x84)));
        t3 = (t3 + 0x10000);
        *(float *)(((t4 + (((int)stk + 4) + 0x28)) + 0x8)) = u30;
        t4 = (t4 + 0xC);
        if ((int)t3 >= (int)0x100000) {
            break;
        }
    }
    u38 = (*(float *)((a4 + 0x30)));
    u38 = u38 + (*(float *)(((t2 + 0x7C) + 0x0))) * (FUN_0c0da410((((*(short *)((a4 + 0x6E))) - (*(int *)((t2 + 0x74)))) + 0x8000)));
    *(float *)(((int)stk + 32)) = u38;
    *(float *)(((int)stk + 36)) = ((*(float *)((a4 + 0x34))) + 1.0f);
    u45 = (*(float *)((a4 + 0x38)));
    u45 = u45 + (*(float *)(((t2 + 0x7C) + 0x0))) * (FUN_0c0d9e90((((*(short *)((a4 + 0x6E))) - (*(int *)((t2 + 0x74)))) + 0x8000)));
    *(float *)(((int)stk + 40)) = u45;
    u51 = (*(float *)((a4 + 0x30)));
    u51 = u51 + (*(float *)(((t2 + 0x7C) + 0x0))) * (FUN_0c0da410((((*(short *)((a4 + 0x6E))) + (*(int *)((t2 + 0x78)))) + 0x8000)));
    *(float *)(((int)stk + 20)) = u51;
    *(float *)(((int)stk + 24)) = ((*(float *)((a4 + 0x34))) + 1.0f);
    u58 = (*(float *)((a4 + 0x38)));
    u58 = u58 + (*(float *)(((t2 + 0x7C) + 0x0))) * (FUN_0c0d9e90((((*(short *)((a4 + 0x6E))) + (*(int *)((t2 + 0x78)))) + 0x8000)));
    *(float *)(((int)stk + 28)) = u58;
    *(float *)(((int)stk + 8)) = (*(float *)((a4 + 0x30)));
    *(float *)(((int)stk + 12)) = ((*(float *)((a4 + 0x34))) + 1.0f);
    *(float *)(((int)stk + 16)) = (*(float *)((a4 + 0x38)));
    u62 = *(float *)0xC03412C;
    t63 = 0x0;
    for (;;) {
        FUN_0c033c8c((t63 + (0x1A8 + ((int)stk + 4))), ((t63 + (0x1A8 + ((int)stk + 4))) + 0xC), 0x3, u62);
        FUN_0c033c8c((t63 + (0xE8 + ((int)stk + 4))), ((t63 + (0xE8 + ((int)stk + 4))) + 0xC), 0x5, u62);
        FUN_0c033c8c((t63 + (((int)stk + 4) + 0x28)), ((t63 + (((int)stk + 4) + 0x28)) + 0xC), 0x1, u62);
        t63 = (t63 + 0xC);
        if ((unsigned int)t63 >= (unsigned int)0xB4) {
            break;
        }
    }
    FUN_0c033c8c(((0x1A8 + ((int)stk + 4)) + 0xB4), (0x1A8 + ((int)stk + 4)), 0x3, u62);
    FUN_0c033c8c(((0xE8 + ((int)stk + 4)) + 0xB4), (0xE8 + ((int)stk + 4)), 0x5, u62);
    FUN_0c033c8c(((((int)stk + 4) + 0x28) + 0xB4), (((int)stk + 4) + 0x28), 0x1, u62);
    FUN_0c033c8c((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x4), 0x1, u62);
    return (FUN_0c033c8c((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4), 0x3, u62));
}
