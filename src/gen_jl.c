/* Straight-line functions with calls and guards (batch gen_jl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02a19a(int);
int FUN_0c0355f8(int);
int FUN_0c04685c(int, int, float, float, float, float);
int FUN_0c054e36(int);
int FUN_0c0a8362(void);
int FUN_0c0bf940(void);
int FUN_0c0bfa90(void);
int FUN_0c0c43dc(int, int);
int FUN_0c0c45d0(void);
int FUN_0c0cc3f8(int);
int FUN_0c0da2e0(void);
int FUN_0c0e19f2(void);
int FUN_0c0e2400(void);
void FUN_0c054f5c(void);
void FUN_0c074506(int a4);
int FUN_0c0a85b0(void);
int FUN_0c0248a4(int a4);
int FUN_0c04896e(int a4, float f4, float f5, float f6, float f7);
struct o1B0_uint { char p[0x1B0]; unsigned int v; };
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2C8_uint { char p[0x2C8]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o2D0_uint { char p[0x2D0]; unsigned int v; };
struct o2E8_uint { char p[0x2E8]; unsigned int v; };
struct o2F0_uint { char p[0x2F0]; unsigned int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };


void FUN_0c054f5c(void)
{
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t9;
    register int t12;

    if (((*(int *)0xC23ED5C) & 0x10000) != 0) {
        t2 = 0xC23ED5C;
        t3 = 0x0;
        t4 = 0x0;
        t5 = 0x0;
        for (;;) {
            if ((*(int *)(((0xC247030 + t5) + 0x0))) != 0) {
                t3 = 0xC246FF0;
                t3 = (t3 + t4);
                t3 = (*(int *)((t3 + 0x0)));
                FUN_0c054e36(t3);
            } else {
                t9 = t2;
                t12 = t3;
            }
            t2 = t9;
            t5 = (t5 + 0x4);
            t3 = t12;
            t4 = (t4 + 0x4);
            if ((unsigned int)t5 >= (unsigned int)0x8) {
                break;
            }
        }
        FUN_0c0e19f2();
    return;
    }
}

void FUN_0c074506(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        *(unsigned int *)(((a4 + 0x30) + 0x0)) = ((((FUN_0c0da2e0()) & 0x1F) << 1) + 0xF0);
        *(unsigned int *)0xC247D04 = ((*(int *)0xC247D04) | (*(int *)((0xC0FE360 + (((FUN_0c0da2e0()) & 0x7) << 2)))));
        FUN_0c0cc3f8(0x920A9);
    return;
    }
}

int FUN_0c0a85b0(void)
{

    if (((*(short *)(((*(int *)0xC23ECFC) + 0x6))) & 8) != 0) {
        FUN_0c0bfa90();
    }
    if (((*(short *)(((*(int *)0xC23ECFC) + 0x4))) & 0x100) != 0) {
        FUN_0c0e2400();
        FUN_0c0c45d0();
    } else {
        FUN_0c0c43dc((*(int *)0xC23ED58), 0x0);
    }
    if (((*(short *)(((*(int *)0xC23ECFC) + 0x6))) & 8) != 0) {
        FUN_0c0bf940();
    }
    return FUN_0c0a8362();
}

int FUN_0c0248a4(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x2EC));
    if ((t0 & 12) != 0) {
        FUN_0c0355f8(a4);
        *(unsigned int *)((a4 + 0x1B0)) = 0x0;
        *(unsigned int *)((a4 + 0x4C4)) = 0x0;
        *(unsigned int *)((a4 + 0x4C8)) = 0x0;
        *(unsigned int *)((a4 + 0x4CC)) = 0x0;
        *(unsigned int *)((a4 + 0x4E0)) = 0x0;
        *(unsigned int *)((a4 + 0x4E4)) = 0x0;
        *(unsigned int *)((a4 + 0x4E8)) = 0x0;
        *(unsigned int *)((a4 + 0x4EC)) = 0x0;
        return FUN_0c02a19a(a4);
    }
    return t0;
}

int FUN_0c04896e(int a4, float f4, float f5, float f6, float f7)
{
    (((struct o1B0_uint *)(a4))->v) = 0xFFFFFFFF;
    (((struct o2F0_uint *)(a4))->v) = 0x1;
    (((struct o2E8_uint *)(a4))->v) = 0x5;
    (((struct o2C8_uint *)(a4))->v) = 0x45A;
    (((struct o2C4_uint *)(a4))->v) = 0x26;
    (((struct o2D0_uint *)(a4))->v) = 0x1;
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o2E8_uint *)(a4))->v) = 0x2;
    (((struct o4C8_uint *)(a4))->v) = 0x3;
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return FUN_0c04685c(a4, 0xA, 0.0f, (*(float *)0xC048A1C), f6, f7);
}
