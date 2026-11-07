/* Straight-line functions with calls and guards (batch gen_acs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0d8960(int);
int kmSetVertex(int, int, int, int);
int kmSetVertexRenderState(int);
int kmStartVertexStrip(int);
int FUN_0c0d7d50(int a4, int a5, int a6);

int FUN_0c0d7d50(int a4, int a5, int a6)
{
    int stk[18];
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u17;
    register float u18;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((*(int *)0xC9480B0) + 0x6C)) = ((a6 * 0x3C) + (*(int *)0xC947AA8));
    FUN_0c0d8960(0x12);
    kmSetVertexRenderState((*(int *)0xC9480B0));
    t6 = *(int *)(((int)stk + 4));
    t7 = (kmStartVertexStrip(0xC944450));
    t8 = t6;
    t9 = a5;
    for (;;) {
        t8 = (t8 - 0x1);
        if (t8 == 0) {
            break;
        }
        t7 = 0x8;
        *(unsigned int *)(((int)stk + 8)) = 0xE0000000;
        *(float *)((((int)stk + 4) + t7)) = (*(float *)((t9 + 0x0)));
        t7 = 0x4;
        u11 = *(float *)((t9 + t7));
        t7 = 0xC;
        *(float *)((((int)stk + 4) + t7)) = u11;
        t7 = 0x8;
        u12 = *(float *)((t9 + t7));
        t7 = 0x10;
        *(float *)((((int)stk + 4) + t7)) = u12;
        t7 = 0xC;
        u13 = *(float *)((t9 + t7));
        t7 = 0x14;
        *(float *)((((int)stk + 4) + t7)) = u13;
        t7 = 0x10;
        u14 = *(float *)((t9 + t7));
        t7 = 0x18;
        *(float *)((((int)stk + 4) + t7)) = u14;
        t7 = 0xC;
        *(unsigned int *)(((int)stk + 40)) = (*(int *)((t9 + 0x14)));
        *(unsigned int *)(((int)stk + 48)) = (*(int *)((t9 + 0x18)));
        u17 = *(float *)((t9 + t7));
        t7 = 0x1C;
        *(float *)((((int)stk + 4) + t7)) = u17;
        t7 = 0x10;
        u18 = *(float *)((t9 + t7));
        t7 = 0x20;
        *(float *)((((int)stk + 4) + t7)) = u18;
        *(unsigned int *)(((int)stk + 44)) = (*(int *)((t9 + 0x24)));
        *(unsigned int *)(((int)stk + 52)) = (*(int *)((t9 + 0x18)));
        t7 = (kmSetVertex(0xC944450, (((int)stk + 4) + 0x4), 0xB, 0x40));
        t9 = (t9 + 0x2C);
    }
    *(unsigned int *)(((int)stk + 8)) = 0xF0000000;
    *(float *)(((int)stk + 12)) = (*(float *)((t9 + 0x0)));
    *(float *)(((int)stk + 16)) = (*(float *)((t9 + 0x4)));
    *(float *)(((int)stk + 20)) = (*(float *)((t9 + 0x8)));
    *(float *)(((int)stk + 24)) = (*(float *)((t9 + 0xC)));
    *(float *)(((int)stk + 28)) = (*(float *)((t9 + 0x10)));
    *(unsigned int *)(((int)stk + 40)) = (*(int *)((t9 + 0x14)));
    *(unsigned int *)(((int)stk + 48)) = (*(int *)((t9 + 0x18)));
    *(float *)(((int)stk + 32)) = (*(float *)((t9 + 0xC)));
    *(float *)(((int)stk + 36)) = (*(float *)((t9 + 0x10)));
    *(unsigned int *)(((int)stk + 44)) = (*(int *)((t9 + 0x14)));
    *(unsigned int *)(((int)stk + 52)) = (*(int *)((t9 + 0x18)));
    return (kmSetVertex(0xC944450, (((int)stk + 4) + 0x4), 0xB, 0x40));
}
