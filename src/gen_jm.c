/* Straight-line functions with calls and guards (batch gen_jm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0dcca0(int);
int FUN_0c0e19f2(void);
int FUN_0c078c68(int a4, int a5, int a6, int a7);
int FUN_0c078cb6(int a4, int a5, int a6, int a7);
int FUN_0c0acbee(int a4, int a5, int a6, int a7);
int FUN_0c08c0f4(int a4, int a5, int a6, int a7);
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };


int FUN_0c078c68(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = (((struct o80_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | 0x4);
            return FUN_0c0e19f2();
        }
        return 0xA0;
    }
    *(unsigned int *)0xC23ED88 = (((*(int *)0xC23ED88) & 0xFFFFFFFB) | 0x2);
    (((struct oA0_uint *)(a4))->v) = 0x78;
    (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
    return 0x80;
}

int FUN_0c078cb6(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = (((struct o80_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = (((struct oA0_int *)(a4))->v);
        (((struct oA0_uint *)(a4))->v) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            *(unsigned int *)0xC23ED88 = ((*(int *)0xC23ED88) | 0x10);
            return FUN_0c0e19f2();
        }
        return 0xA0;
    }
    *(unsigned int *)0xC23ED88 = (((*(int *)0xC23ED88) & 0xFFFFFFEF) | 0x8);
    (((struct oA0_uint *)(a4))->v) = 0x78;
    (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
    return 0x80;
}

int FUN_0c0acbee(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)0xC24FA38;
    if (t0 == 0x168) {
        return FUN_0c0e19f2();
    }
    if ((int)t0 < (int)0xB4) {
        return FUN_0c0dcca0(0xC10EF08);
    }
    FUN_0c0dcca0((a4 + 0x30));
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + 6.0f);
    return 0x38;
}

int FUN_0c08c0f4(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    *(unsigned int *)(((*(int *)((a4 + 0x30))) + 0x0)) = (unsigned short)(*(short *)((((*(int *)((a4 + 0x34))) << 1) + 0xC10AA34)));
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
    t1 = *(int *)((a4 + 0x38));
    *(unsigned int *)((a4 + 0x38)) = (t1 - 1);
    if (((int)(t1 - 1) <= 0) && (t0 = *(int *)((a4 + 0x34)), (int)t0 > (int)0x11)) {
        if ((int)(*(int *)((a4 + 0x34))) > (int)0x1A) {
            return FUN_0c0e19f2();
        }
        return 0xC10AA34;
    }
    t0 = *(int *)((a4 + 0x34));
    if ((int)t0 > (int)0x11) {
        *(unsigned int *)((a4 + 0x34)) = 0xA;
    }
    return t0;
}
