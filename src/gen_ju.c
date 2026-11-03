/* Straight-line functions with calls and guards (batch gen_ju): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c4684(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0df4c0(int);
int FUN_0c0e19f2(int, int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlUnitMatrix(void);
int FUN_0c01a8dc(int a4, int a5, int a6, int a7);
int FUN_0c0671d0(int a4, int a5, int a6, int a7);

int FUN_0c01a8dc(int a4, int a5, int a6, int a7)
{
    int t7;
    register int t8;
    register int t9;
    register int t19;
    register int t22;
    int t12;
    int t16;

    if (((*(int *)0xC23ED5C) & 0x10000) != 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    t7 = *(int *)0xC23ED5C;
    t8 = *(int *)0xC23ED9C;
    t9 = *(int *)0xC23ECF8;
    if (t8 == 4) {
        if (((0x200 & t7) != 0) && (((0x800 & t7) != 0) && (t12 = *(int *)((t9 + 0x34)), (int)t12 > (int)0x653))) {
            *(unsigned int *)((t9 + 0x34)) = 0x653;
        }
        t22 = 0x200;
    } else {
        t19 = t8;
        if (t8 == 7) {
            if (((0x400 & t7) != 0) && (((0x800 & t7) != 0) && (t16 = *(int *)((t9 + 0x38)), (int)t16 > (int)0x653))) {
                *(unsigned int *)((t9 + 0x38)) = 0x653;
            }
            t19 = 0x400;
        }
        t22 = t19;
    }
    return t22;
}

int FUN_0c0671d0(int a4, int a5, int a6, int a7)
{
    register int t5;

    if (((*(int *)0xC23ED5C) & 32) != 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    t5 = *(int *)0xC23ED9C;
    if (((int)t5 >= (int)0xB) && ((int)t5 <= (int)0xE)) {
        return 0xE;
    }
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dcc70(0.0f, 0.0f, (*(float *)0xC067294));
    FUN_0c0df4c0(0x1);
    FUN_0c0c4684(0x63);
    FUN_0c0df4c0(0x2);
    return nlPopMatrix(0x1);
}
