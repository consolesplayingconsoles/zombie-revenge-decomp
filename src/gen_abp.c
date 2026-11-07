/* Straight-line functions with calls and guards (batch gen_abp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c0da2e0(void);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c090a38(int a4);

int FUN_0c090a38(int a4)
{
    int stk[8];
    register int t6;
    register float u9;
    register float u10;
    register int t12;
    register int t14;
    register int t17;
    register float u19;
    register float u21;
    register int t22;
    register float u24;
    register float u26;
    register int t27;
    register float u29;
    register float u31;
    float R1004;
    float R1020;
    float R1024;
    float R1028;

    R1004 = *(float *)((int)stk + 4);
    R1020 = *(float *)((int)stk + 20);
    R1024 = *(float *)((int)stk + 24);
    R1028 = *(float *)((int)stk + 28);

    R1020 = (((*(float *)((a4 + 0x30))) - (*(float *)((a4 + 0x3C)))) * 0.0899999961f);
    R1024 = (((*(float *)((a4 + 0x34))) - (*(float *)((a4 + 0x40)))) * 0.0899999961f);
    R1028 = (((*(float *)((a4 + 0x38))) - (*(float *)((a4 + 0x44)))) * 0.0899999961f);
    t6 = *(int *)((a4 + 0x1C4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((((((t6 << 1) + t6) << 2) << 2) << 2) + 0xC23F274)); }
    u9 = *(float *)((a4 + 0x30));
    *(float *)((((int)stk + 8) + 0x0)) = ((u9 - u9) + (*(float *)((((int)stk + 8) + 0x0))));
    u10 = *(float *)((a4 + 0x38));
    *(float *)((((int)stk + 8) + 0x8)) = ((u10 - u10) + (*(float *)((((int)stk + 8) + 0x8))));
    t12 = 0x14;
    for (;;) {
        t14 = FUN_0c0e19aa(0xC0914A4, 0xB4, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t14);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t14 + 0x30)) = *(struct mv3 *)(((int)stk + 8)); }
        *(float *)((t14 + 0x74)) = 1.0f;
        *(unsigned int *)((t14 + 0x78)) = 0x293;
        *(unsigned int *)(((0xA0 + t14) + 0x0)) = (((FUN_0c0da2e0()) & 0x7) + 0xA);
        t17 = FUN_0c0da2e0();
        R1004 = (float)(t17 & 0xF);
        u19 = 0.149999991f;
        u19 = u19 + 0.099999994f * (float)((FUN_0c0da2e0()) & 0xF);
        u21 = (u19 * (R1020));
        u21 = u21 + 0.0399999991f * (float)(t17 & 0xF);
        *(float *)((t14 + 0x48)) = (u21 + -0.299999982f);
        t22 = FUN_0c0da2e0();
        R1004 = (float)(t22 & 0xF);
        u24 = 0.149999991f;
        u24 = u24 + 0.099999994f * (float)((FUN_0c0da2e0()) & 0xF);
        u26 = (u24 * (R1024));
        u26 = u26 + 0.0399999991f * (float)(t22 & 0xF);
        *(float *)((t14 + 0x4C)) = (u26 + -0.399999976f);
        t27 = FUN_0c0da2e0();
        R1004 = (float)(t27 & 0xF);
        t12 = (t12 - 0x1);
        u29 = 0.149999991f;
        u29 = u29 + 0.099999994f * (float)((FUN_0c0da2e0()) & 0xF);
        u31 = (u29 * (R1028));
        u31 = u31 + 0.0399999991f * (float)(t27 & 0xF);
        *(float *)((t14 + 0x50)) = (u31 + -0.299999982f);
        if (t12 == 0) {
            break;
        }
    }
    return 0x50;
}
