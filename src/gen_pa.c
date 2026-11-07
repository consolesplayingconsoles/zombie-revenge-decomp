/* Straight-line functions with calls and guards (batch gen_pa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01f8a0(int, int, int);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0db470(int, int);
int FUN_0c0db4d0(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcc80(int);
int FUN_0c0dce80(int, int, float);
int nlAddVector(int, int);
int nlInvertMatrix(int);
int nlPopMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int FUN_0c07e670(int a4);

int FUN_0c07e670(int a4)
{
    int stk[22];
    register float u13;
    register float u14;
    register float u15;
    register float u19;
    register float u27;
    register float u28;
    register float u30;
    register float u37;
    register float u38;
    register float u47;
    register float u42;
    register float u56;
    register float u52;
    register float u82;
    register float u86;
    register float u87;
    register float u89;
    register float u98;
    register float u99;
    register float u107;
    register float u103;
    register float u116;
    register float u112;
    register int t147;
    register float u63;
    register float u121;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x6C)) = *(struct mv3 *)((0x284 + a4)); }
    FUN_0c0dc5a0();
    nlSubVector3op((((int)stk + 4) + 0x48), (0x260 + a4), (0x284 + a4));
    FUN_0c0a7714((((int)stk + 4) + 0x8), (((int)stk + 4) + 0xC), (*(float *)(((int)stk + 76))), (*(float *)(((int)stk + 80))), (*(float *)(((int)stk + 84))));
    nlRotateAX((-(*(int *)(((int)stk + 12)))));
    nlRotateAY((-(*(int *)(((int)stk + 16)))));
    FUN_0c0dcc80((0x260 + a4));
    FUN_0c0db470((0x338 + a4), (((int)stk + 4) + 0x3C));
    FUN_0c0db470(0xC247D24, (((int)stk + 4) + 0x30));
    u13 = *(float *)(((int)stk + 72));
    u14 = *(float *)0xC247D0C;
    u15 = *(float *)(((int)stk + 64));
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 68))) / ((*(float *)0xC247D10) * u13));
    u19 = *(float *)(((int)stk + 60));
    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 52))) / ((*(float *)0xC247D0C) * u19));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 56))) / ((*(float *)0xC247D10) * u19));
    nlInvertMatrix(0x0);
    FUN_0c0db4d0(0xC1013D0, (((int)stk + 4) + 0x24));
    FUN_0c0db4d0(0xC1013DC, (((int)stk + 4) + 0x18));
    if (!(1.0f > _builtin_fabsf((u15 / (u14 * u13))))) {
        u27 = *(float *)0xC247D0C;
        u28 = *(float *)(((int)stk + 72));
        u30 = (u27 * u28);
        if (!(0.0f > (*(float *)(((int)stk + 64))))) {
            u30 = (-(u27 * u28));
        }
        FUN_0c0dce80((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x24), (u30 + (*(float *)(((int)stk + 64)))));
        nlAddVector((0x284 + a4), (((int)stk + 4) + 0x24));
        nlAddVector((0x260 + a4), (((int)stk + 4) + 0x24));
    } else {
        if ((*(int *)0xC247D20) != 0) {
            u37 = *(float *)(((int)stk + 64));
            u38 = *(float *)(((int)stk + 52));
            *(float *)(((int)stk + 4)) = u38;
            if (u37 > u38) {
                u47 = 0.0f;
                if ((1.0f + 1.0f) > (((u15 / (u14 * u13))) - (*(float *)(((int)stk + 24))))) {
                    u42 = ((*(float *)(((int)stk + 72))) * (u37 - u38));
                    u47 = (u37 - ((u42 * (1.0f / (u13 + u19)))));
                }
                u63 = u47;
            } else {
                u56 = 0.0f;
                if ((1.0f + 1.0f) > ((*(float *)(((int)stk + 24))) - ((u15 / (u14 * u13))))) {
                    *(float *)(((int)stk + 4)) = u38;
                    u52 = ((*(float *)(((int)stk + 60))) * (u38 - u37));
                    u56 = (u38 - ((u52 * (1.0f / (u13 + u19)))));
                }
                u63 = u56;
            }
            FUN_0c0dce80((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x24), u63);
            nlAddVector((0x284 + a4), (((int)stk + 4) + 0x24));
            nlAddVector((0x260 + a4), (((int)stk + 4) + 0x24));
        } else {
            _builtin_fabsf((u15 / (u14 * u13)));
        }
    }
    u82 = *(float *)(((int)stk + 8));
    if (!(1.0f > _builtin_fabsf(u82))) {
        u86 = *(float *)0xC247D10;
        u87 = *(float *)(((int)stk + 72));
        u89 = (u86 * u87);
        if (0.0f > (*(float *)(((int)stk + 68)))) {
            u89 = (-(u86 * u87));
        }
        FUN_0c0dce80((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x18), (u89 - (*(float *)(((int)stk + 68)))));
        nlAddVector((0x284 + a4), (((int)stk + 4) + 0x18));
        nlAddVector((0x260 + a4), (((int)stk + 4) + 0x18));
    } else {
        if ((*(int *)0xC247D20) != 0) {
            u98 = *(float *)(((int)stk + 68));
            u99 = *(float *)(((int)stk + 56));
            if (u98 > u99) {
                u107 = 0.0f;
                if ((1.0f + 1.0f) > ((*(float *)(((int)stk + 8))) - (*(float *)(((int)stk + 20))))) {
                    u103 = ((*(float *)(((int)stk + 72))) * (u98 - u99));
                    u107 = (u98 - ((u103 * (1.0f / (u13 + u19)))));
                }
                u121 = u107;
            } else {
                u116 = 0.0f;
                if ((1.0f + 1.0f) > ((*(float *)(((int)stk + 20))) - (*(float *)(((int)stk + 8))))) {
                    u112 = ((*(float *)(((int)stk + 60))) * (u99 - u98));
                    u116 = (u99 - ((u112 * (1.0f / (u13 + u19)))));
                }
                u121 = u116;
            }
            FUN_0c0dce80((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x18), u121);
            nlAddVector((0x284 + a4), (((int)stk + 4) + 0x18));
            nlAddVector((0x260 + a4), (((int)stk + 4) + 0x18));
        } else {
            _builtin_fabsf(u82);
        }
    }
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x60)) = *(struct mv3 *)((0x284 + a4)); }
    FUN_0c01f8a0((a4 + 0x30), 0x80, 0xFFFFFFFF);
    t147 = 0xD8;
    if ((*(int *)((a4 + 0xD8))) != 0) {
        nlSubVector3op((((int)stk + 4) + 0x48), (0xBC + a4), (a4 + 0x60));
        nlSubVector((0x284 + a4), (((int)stk + 4) + 0x48));
        t147 = (nlSubVector((0x260 + a4), (((int)stk + 4) + 0x48)));
    }
    return t147;
}
