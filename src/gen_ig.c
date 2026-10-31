/* Straight-line functions with calls and guards (batch gen_ig): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c063098(int);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0c465c(int);
int FUN_0c0da2e0(void);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int FUN_0c0e19f2(int, int, int, int);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c0632d4(int a4, int a5, int a6, int a7);
int FUN_0c0605d8(int a4, int a5, int a6, int a7);

int FUN_0c0632d4(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t12;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register float u19;
    register float u20;
    register float u21;
    register float u27;
    register float u28;
    register float u22;
    register float u23;
    register float u31;
    register float u32;
    register float u33;
    register float u39;
    register float u40;
    register float u34;
    register float u35;
    register int t72;
    register int t8;
    register int t9;

    if ((*(int *)((0xC247030 + ((*(int *)((a4 + 0xBC))) << 2)))) != 4) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    *(float *)((a4 + 0x2B0)) = 0.0f;
    *(float *)((a4 + 0x2B4)) = 0.0f;
    *(float *)((a4 + 0x2B8)) = 0.0f;
    if ((0.0f > (*(float *)((a4 + 0x2A8)))) && (t8 = *(int *)((a4 + 0x228)), t9 = *(int *)((0xC247030 + (t8 << 2))), t9 == 4)) {
        t12 = *(int *)(((((*(int *)((a4 + 0x228))) << 2) + 0xC246FF0) + 0x0));
        u14 = *(float *)((t12 + 0x38));
        u15 = *(float *)((a4 + 0x38));
        u16 = *(float *)((a4 + 0x258));
        u17 = *(float *)((a4 + 0x34));
        u19 = *(float *)((((0x25C + a4) + 0x48) + 0x0));
        u20 = (((*(float *)((((0x25C + a4) + 0x48) + 0x4))) * ((*(float *)((t12 + 0x30))) - (*(float *)((a4 + 0x30))))) / (u17 - u16));
        u20 = -u20;
        *(float *)(((0x25C + a4) + 0x54)) = (u20 - u19);
        u21 = *(float *)((a4 + 0x2B0));
        u27 = u19;
        u28 = _builtin_fabsf(u21);
        if (_builtin_fabsf(u21) > 0.0297499988f) {
            u22 = *(float *)(((0x25C + a4) + 0x54));
            u23 = *(float *)((((0x25C + a4) + 0x54) + 0x0));
            *(float *)((((0x25C + a4) + 0x54) + 0x0)) = ((u23 / _builtin_fabsf(u22)) * 0.0297499988f);
            u27 = ((u23 / _builtin_fabsf(u22)) * 0.0297499988f);
            u28 = _builtin_fabsf(u22);
        }
        u31 = *(float *)((((0x25C + a4) + 0x48) + 0x8));
        u32 = (((*(float *)((((0x25C + a4) + 0x48) + 0x4))) * (u14 - u15)) / (u17 - u16));
        u32 = -u32;
        *(float *)(((0x25C + a4) + 0x5C)) = (u32 - u31);
        u33 = *(float *)((a4 + 0x2B8));
        u39 = u31;
        u40 = _builtin_fabsf(u33);
        if (_builtin_fabsf(u33) > 0.0297499988f) {
            u34 = *(float *)(((0x25C + a4) + 0x5C));
            u35 = *(float *)((((0x25C + a4) + 0x54) + 0x8));
            *(float *)((((0x25C + a4) + 0x54) + 0x8)) = ((u35 / _builtin_fabsf(u34)) * 0.0297499988f);
            u39 = ((u35 / _builtin_fabsf(u34)) * 0.0297499988f);
            u40 = _builtin_fabsf(u34);
        }
    }
    *(float *)((a4 + 0x2B4)) = ((*(float *)((a4 + 0x2B4))) + -0.0272199996f);
    *(unsigned int *)(((int)stk + 12)) = (0x25C + a4);
    nlAddVector(((*(int *)(((int)stk + 12))) + 0x48), ((0x25C + a4) + 0x54));
    nlAddVector((a4 + 0x30), ((0x25C + a4) + 0x48));
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x4), ((*(float *)((a4 + 0x3C))) - (*(float *)((a4 + 0x30)))), ((*(float *)((a4 + 0x40))) - (*(float *)((a4 + 0x34)))), ((*(float *)((a4 + 0x44))) - (*(float *)((a4 + 0x38)))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    *(unsigned short *)((a4 + 0x6C)) = (*(int *)(((int)stk + 4)));
    *(unsigned short *)((a4 + 0x6E)) = (*(int *)(((int)stk + 8)));
    FUN_0c063098(a4);
    t72 = 0x34;
    if (!((*(float *)((a4 + 0x34))) > ((*(float *)((a4 + 0x258))) + 55.0f))) {
        if (0.0f > (*(float *)((a4 + 0x2A8)))) {
            *(unsigned int *)((a4 + 0x0)) = 0xC063160;
        }
        t72 = 0x2A8;
    }
    return t72;
}

int FUN_0c0605d8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = *(int *)((a4 + 0x244));
    t1 = *(int *)0xC247CAC;
    *(unsigned int *)((a4 + 0x244)) = (t0 + 0x1);
    if ((int)(t0 + 0x1) >= (int)(*(int *)((a4 + 0x248)))) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) - 0.0272199996f);
    t0 = *(int *)((a4 + 0x248));
    t2 = 0x3CDEFC7A;
    t3 = ((((((t0 - 1) - 1) << 1) + ((t0 - 1) - 1)) << 2) + (0x25C + a4));
    t4 = ((((((t0 - 1) << 1) + (t0 - 1)) << 2) + (0x25C + a4)) + 0xC);
    for (;;) {
        if ((unsigned int)t4 <= (unsigned int)((0x25C + a4) + 0x24)) {
            break;
        }
        t4 = (t4 - 12);
        t2 = t4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t2) = *(struct mv3 *)(t3); }
        t3 = (t3 - 12);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x274 + a4)) = *(struct mv3 *)((a4 + 0x3C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x30)); }
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x48 + a4) + 0x0))));
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x4C + a4) + 0x0))));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x50 + a4) + 0x0))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x268 + a4)) = *(struct mv3 *)((a4 + 0x3C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x25C + a4)) = *(struct mv3 *)((a4 + 0x30)); }
    FUN_0c0848bc(0.799999952f, 0.399999976f, 1.0f);
    t0 = (*(int *)((a4 + 0x244)));
    for (;;) {
        if ((int)t0 >= (int)(*(int *)((a4 + 0x248)))) {
            break;
        }
        nlPushMatrix(0x0);
        FUN_0c0dcca0(((((t0 << 1) + t0) << 2) + (0x25C + a4)));
        nlRotateAY((*(short *)((t1 + 0x3CE))));
        nlRotateAX((*(short *)((t1 + 0x3CC))));
        t2 = FUN_0c0da2e0();
        nlRotateAZ((t2 << 1));
        u0 = 8.0f;
        u0 = (u0 - (float)t0);
        nlScale(u0, u0, u0);
        FUN_0c0de000(u0);
        FUN_0c0c465c((*(int *)((a4 + 0x220))));
        nlPopMatrix(0x1);
        t0 = (t0 + 0x1);
    }
    return FUN_0c0849da();
}
