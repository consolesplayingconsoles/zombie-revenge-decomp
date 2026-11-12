/* Straight-line functions with calls and guards (batch gen_tl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[63]; } Stk63;
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_int { char p[0x74]; int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oF0_uint { char p[0xF0]; unsigned int v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
int FUN_0c220360(Stk63);
int kmiInitNTSC(void);
int syCalloc(void);
int FUN_0c2103bc(void);
int FUN_0c21045c(void);
int FUN_0c210336(void);
int gdFsReinit(void);
int FUN_0c21038e(void);
int FUN_0c210378(void);
void FUN_0c210400(void);
void FUN_0c210416(void);
int realloc(void);
int syMalloc(void);
int malloc(void);
int syFree(void);
int free(void);
int syRealloc(void);
int calloc(void);
int FUN_0c232610(int a4, int a5, int a6);
int FUN_0c232624(int a4, int a5, int a6);
int FUN_0c232638(int a4, int a5, int a6);
int FUN_0c23264c(int a4, int a5, int a6);

int kmiInitNTSC(void)
{
    int stk[126];
    register int t58;
    register int t65;
    register int t66;
    register int t67;
    register int t1;
    register int t7;
    register int t15;
    register int t21;
    register int t27;
    register int t68;

    *(unsigned int *)((((int)stk + 252) + 0x8)) = 0x359;
    if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t1 = (((struct o20_int *)0xC9522FC)->v), (t1 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 252) + 0x14)) = 0x20C;
    } else {
        *(unsigned int *)((((int)stk + 252) + 0x14)) = 0x106;
    }
    *(unsigned int *)((((int)stk + 252) + 0x0)) = 0x7E;
    *(unsigned int *)((((int)stk + 252) + 0x4)) = 0x345;
    if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t7 = (((struct o20_int *)0xC9522FC)->v), (t7 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 252) + 0xC)) = 0x24;
        *(unsigned int *)((((int)stk + 252) + 0x10)) = 0x204;
    } else {
        *(unsigned int *)((((int)stk + 252) + 0xC)) = 0x12;
        *(unsigned int *)((((int)stk + 252) + 0x10)) = 0x102;
    }
    *(unsigned int *)((((int)stk + 252) + 0x18)) = 0x3F;
    if ((((((struct o20_int *)0xC9522FC)->v)) & 32) != 0) {
        (((struct o74_uint *)(((int)stk + 252)))->v) = 0x104;
    } else {
        (((struct o74_uint *)(((int)stk + 252)))->v) = 0x102;
    }
    (((struct o78_uint *)(((int)stk + 252)))->v) = 0x15;
    if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t15 = (((struct o20_int *)0xC9522FC)->v), (t15 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 252) + 0x1C)) = 0x6;
    } else {
        *(unsigned int *)((((int)stk + 252) + 0x1C)) = 0x3;
    }
    if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t21 = (((struct o20_int *)0xC9522FC)->v), (t21 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 252) + 0x20)) = 0x16C;
    } else {
        *(unsigned int *)((((int)stk + 252) + 0x20)) = 0x319;
    }
    if (((((((struct o20_int *)0xC9522FC)->v)) & 0x1) != 1) && ((t27 = (((struct o20_int *)0xC9522FC)->v), (t27 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 252) + 0x24)) = 0x1F;
    } else {
        *(unsigned int *)((((int)stk + 252) + 0x24)) = 0xF;
    }
    *(unsigned int *)((((int)stk + 252) + 0x28)) = 0x1;
    *(unsigned int *)((((int)stk + 252) + 0x2C)) = 0x0;
    if ((((((struct o20_int *)0xC9522FC)->v)) & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)((((int)stk + 252) + 0x30)) = 0x1;
        } else {
            *(unsigned int *)((((int)stk + 252) + 0x30)) = 0x0;
        }
    } else {
        if ((((((struct o20_int *)0xC9522FC)->v)) & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)((((int)stk + 252) + 0x30)) = 0x1;
            } else {
                *(unsigned int *)((((int)stk + 252) + 0x30)) = 0x0;
            }
        } else {
            if (0x0 != 0) {
                *(unsigned int *)((((int)stk + 252) + 0x30)) = 0x1;
            } else {
                *(unsigned int *)((((int)stk + 252) + 0x30)) = 0x0;
            }
        }
    }
    *(unsigned int *)((((int)stk + 252) + 0x34)) = 0x0;
    *(unsigned int *)((((int)stk + 252) + 0x38)) = 0x0;
    *(unsigned int *)((((int)stk + 252) + 0x3C)) = 0x0;
    (((struct o40_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o44_uint *)(((int)stk + 252)))->v) = 0x0;
    if (((((struct o0_int *)0xC9522FC)->v)) == 6) {
        (((struct o70_uint *)(((int)stk + 252)))->v) = 0x16;
    } else {
        (((struct o70_uint *)(((int)stk + 252)))->v) = 0x1F;
    }
    if ((((((struct o20_int *)0xC9522FC)->v)) & 16) != 0) {
        (((struct o6C_uint *)(((int)stk + 252)))->v) = 0x0;
    } else {
        (((struct o6C_uint *)(((int)stk + 252)))->v) = 0x1;
    }
    (((struct o48_uint *)(((int)stk + 252)))->v) = 0x1;
    (((struct o4C_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o50_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o54_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o58_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o5C_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o68_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct oF8_uint *)(((int)stk + 252)))->v) = 0xA4;
    (((struct o64_uint *)(((int)stk + 252)))->v) = 0x1E0;
    (((struct o60_uint *)(((int)stk + 252)))->v) = 0x0;
    if ((((((struct o20_int *)0xC9522FC)->v)) & 0x1) == 1) {
        if (0x0 != 0) {
            (((struct oF0_uint *)(((int)stk + 252)))->v) = 0x12;
        } else {
            (((struct oF0_uint *)(((int)stk + 252)))->v) = 0x11;
        }
    } else {
        if ((((((struct o20_int *)0xC9522FC)->v)) & 44) != 0) {
            if (0x1 != 0) {
                (((struct oF0_uint *)(((int)stk + 252)))->v) = 0x12;
            } else {
                (((struct oF0_uint *)(((int)stk + 252)))->v) = 0x11;
            }
        } else {
            if (0x0 != 0) {
                (((struct oF0_uint *)(((int)stk + 252)))->v) = 0x12;
            } else {
                (((struct oF0_uint *)(((int)stk + 252)))->v) = 0x11;
            }
        }
    }
    (((struct oF4_uint *)(((int)stk + 252)))->v) = 0x12;
    (((struct o8_uint *)0xC952614)->v) = 0xF0;
    t58 = *(int *)((((int)stk + 252) + 0xC));
    (((struct o0_uint *)0xC952614)->v) = ((((int)((unsigned int)((int)((unsigned int)t58 + (unsigned int)0x0)) + ((((int)0x0 > (int)t58)) ? 1u : 0u))) >> 1) + ((((struct o8_int *)0xC952614)->v)));
    (((struct o4_uint *)0xC952614)->v) = (*(int *)((((int)stk + 252) + 0xC)));
    t65 = ((int)stk + 252);
    t66 = (((int)stk + 252) + 252);
    t67 = ((int)stk + 0);
    for (;;) { t68 = *(int *)t65; t65 = (t65 + 4); if ((unsigned int)t66 < (unsigned int)t65) break; *(unsigned int *)t67 = t68; t67 = (t67 + 4); }
    return (FUN_0c220360(*(Stk63 *)((int)stk + 0)));
}

int syCalloc(void)
{
    register int t1;

    t1 = *(int *)(((*(int *)0xC94DF78) + 0x8));
    return ((int (*)(void))(t1))();
}

int FUN_0c2103bc(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC2393D0;
    if (t0 != 0) {
        t1 = (((struct o44_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int FUN_0c21045c(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC2393D0;
    if (t0 != 0) {
        t1 = (((struct o58_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int FUN_0c210336(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC2393D0;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x20));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsReinit(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC2393D0;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x10));
        return ((int (*)(void))(t1))();
    }
    return 0xFFFFFFFF;
}

int FUN_0c21038e(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC2393D0;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x3C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int FUN_0c210378(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC2393D0;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x2C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

void FUN_0c210400(void)
{
    register int t0;

    t0 = *(int *)0xC2393D0;
    if (t0 != 0) {
        ((int (*)(void))(((((struct o48_int *)(t0))->v))))();
    return;
    }
}

void FUN_0c210416(void)
{
    register int t0;

    t0 = *(int *)0xC2393D0;
    if (t0 != 0) {
        ((int (*)(void))(((((struct o74_int *)(t0))->v))))();
    return;
    }
}

int realloc(void)
{
    register int t1;

    t1 = *(int *)(((*(int *)0xC94DF78) + 0xC));
    return ((int (*)(void))(t1))();
}

int syMalloc(void)
{
    register int t1;

    t1 = *(int *)(((*(int *)0xC94DF78) + 0x0));
    return ((int (*)(void))(t1))();
}

int malloc(void)
{
    register int t1;

    t1 = *(int *)(((*(int *)0xC94DF78) + 0x0));
    return ((int (*)(void))(t1))();
}

int syFree(void)
{
    register int t1;

    t1 = *(int *)(((*(int *)0xC94DF78) + 0x4));
    return ((int (*)(void))(t1))();
}

int free(void)
{
    register int t1;

    t1 = *(int *)(((*(int *)0xC94DF78) + 0x4));
    return ((int (*)(void))(t1))();
}

int syRealloc(void)
{
    register int t1;

    t1 = *(int *)(((*(int *)0xC94DF78) + 0xC));
    return ((int (*)(void))(t1))();
}

int calloc(void)
{
    register int t1;

    t1 = *(int *)(((*(int *)0xC94DF78) + 0x8));
    return ((int (*)(void))(t1))();
}

int FUN_0c232610(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x0);
}

int FUN_0c232624(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x1);
}

int FUN_0c232638(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x2);
}

int FUN_0c23264c(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x3);
}
