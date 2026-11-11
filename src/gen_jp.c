/* Straight-line functions with calls and guards (batch gen_jp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02286c(int, int, int, int, float, float);
int FUN_0c0240e0(int);
int FUN_0c024324(int);
int FUN_0c0cc3f8(int, int, int, int);
int FUN_0c0e19f2(void);
int _modls(int);
int FUN_0c082118(int a4, int a5, int a6, int a7);
int FUN_0c027736(int a4, int a5, int a6, int a7);
int FUN_0c028efc(int a4, int a5, int a6, int a7);
int FUN_0c02e9a8(int a4);
int FUN_0c02e9ce(int a4);
struct o2C4_uint { char p[0x2C4]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o4C8_uint { char p[0x4C8]; unsigned int v; };
struct o4F8_int { char p[0x4F8]; int v; };
struct o4F8_uint { char p[0x4F8]; unsigned int v; };


int FUN_0c082118(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t9;
    register int t4;
    register int t7;

    t0 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t0 + 0x1);
    if ((int)(t0 + 0x1) >= (int)(*(int *)((a4 + 0x38)))) {
        *(unsigned int *)((a4 + 0x30)) = 0x0;
        t4 = (FUN_0c0cc3f8((*(int *)((a4 + 0x3C))), a5, a6, a7));
    } else {
        t7 = a4;
    }
    t9 = *(int *)((a4 + 0x34));
    *(unsigned int *)((a4 + 0x34)) = (t9 - 1);
    if ((int)(t9 - 1) <= 0) {
        return FUN_0c0e19f2();
    }
    return t4;
}

int FUN_0c027736(int a4, int a5, int a6, int a7)
{
    (((struct o2C4_uint *)(a4))->v) = 0x2D5;
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o4C8_uint *)(a4))->v) = 0x3;
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return FUN_0c02286c(a4, 0x28, a6, a7, 0.0f, (*(float *)0xC0277B8));
}

int FUN_0c028efc(int a4, int a5, int a6, int a7)
{
    (((struct o2C4_uint *)(a4))->v) = 0x2D5;
    (((struct o2CC_uint *)(a4))->v) = 0x1;
    (((struct o4C8_uint *)(a4))->v) = 0x3;
    (((struct o4F8_uint *)(a4))->v) = (((((struct o4F8_int *)(a4))->v)) + 0x1);
    return FUN_0c02286c(a4, 0x28, a6, a7, 0.0f, (*(float *)0xC028FAC));
}


