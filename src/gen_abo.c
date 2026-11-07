/* Straight-line functions with calls and guards (batch gen_abo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0db470(int, int);
extern float _builtin_sqrtf(float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int thunk_FUN_0c0546fe(int, int, int, int);
int FUN_0c031a4c(int a4);

int FUN_0c031a4c(int a4)
{
    int stk[16];
    register int t1;
    register int t4;
    register float u6;
    register float u7;
    register float u31;
    register float u32;
    register float u33;
    register float u34;
    register float u37;
    register float u40;
    register float u43;
    register float u46;
    register float u49;
    register int t52;

    t1 = *(int *)((((*(int *)((a4 + 0xCC))) << 2) + 0xC246FF0));
    thunk_FUN_0c0546fe(t1, (*(short *)((a4 + 0x6E))), 0x800, 0x1);
    t4 = *(int *)((a4 + 0x558));
    u6 = *(float *)(((((t4 << 2) << 1) + 0xC1EFDD8) + 0x4));
    u7 = *(float *)(((((t4 << 2) << 1) + 0xC1EFDD8) + 0x0));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY((-(*(short *)((a4 + 0x6E)))));
    *(float *)(((int)stk + 16)) = (-u7);
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = (-u6);
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)((((((int)stk + 4) + 0x30) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((((int)stk + 4) + 0x30) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 16)) = ((-(*(float *)((t1 + 0x30)))) + (*(float *)((a4 + 0x30))));
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = ((-(*(float *)((t1 + 0x38)))) + (*(float *)((a4 + 0x38))));
    FUN_0c0db470((((int)stk + 4) + 0xC), ((int)stk + 4));
    *(float *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(float *)(((int)stk + 4)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x4) + 0x0)) = (*(float *)(((int)stk + 8)));
    *(float *)((((((int)stk + 4) + 0x24) + 0x8) + 0x0)) = (*(float *)(((int)stk + 12)));
    nlPopMatrix(0x1);
    *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x30) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x24) + 0x0))));
    *(float *)(((((int)stk + 4) + 0x18) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x30) + 0x4))) - (*(float *)(((((int)stk + 4) + 0x24) + 0x4))));
    *(float *)(((((int)stk + 4) + 0x18) + 0x8)) = ((*(float *)(((((int)stk + 4) + 0x30) + 0x8))) - (*(float *)(((((int)stk + 4) + 0x24) + 0x8))));
    u31 = *(float *)(((((int)stk + 4) + 0x24) + 0x8));
    u32 = *(float *)(((((int)stk + 4) + 0x30) + 0x8));
    u33 = *(float *)(((((int)stk + 4) + 0x30) + 0x0));
    u34 = *(float *)(((((int)stk + 4) + 0x24) + 0x0));
    u37 = ((u32 - u31) * (u32 - u31));
    u37 = u37 + ((u33 - u34)) * ((u33 - u34));
    u40 = (*(float *)((t1 + 0x48)));
    u40 = u40 + 0.5f * (*(float *)(((((int)stk + 4) + 0x18) + 0x0)));
    *(float *)((t1 + 0x48)) = u40;
    u43 = (*(float *)((t1 + 0x50)));
    u43 = u43 + 0.5f * (*(float *)(((0x8 + (((int)stk + 4) + 0x18)) + 0x0)));
    *(float *)((t1 + 0x50)) = u43;
    if (1.0f > _builtin_sqrtf(u37)) {
        *(unsigned int *)((a4 + 0x210)) = 0x3E;
        u46 = (*(float *)((t1 + 0x48)));
        u46 = u46 + 0.5f * (*(float *)(((((int)stk + 4) + 0x18) + 0x0)));
        *(float *)((t1 + 0x48)) = u46;
        u49 = (*(float *)((t1 + 0x50)));
        u49 = u49 + 0.5f * (*(float *)(((0x8 + (((int)stk + 4) + 0x18)) + 0x0)));
        *(float *)((t1 + 0x50)) = u49;
        t52 = (thunk_FUN_0c0546fe(t1, (*(short *)((a4 + 0x6E))), 0x800, 0x0));
    } else {
        *(unsigned int *)((a4 + 0x2B4)) = 0x0;
        *(unsigned int *)((t1 + 0x2B4)) = 0x0;
        t52 = 0x2B4;
        _builtin_sqrtf(u37);
    }
    return t52;
}
