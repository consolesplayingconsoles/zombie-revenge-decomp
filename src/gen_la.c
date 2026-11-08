/* Straight-line functions with calls and guards (batch gen_la): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0da2e0(void);
int FUN_0c0db470(int, int);
int FUN_0c0dcca0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e262a(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c0870f6(int a4, int a5, int a6, float f4);
struct o38_float { char p[0x38]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };


int FUN_0c0870f6(int a4, int a5, int a6, float f4)
{
    int stk[18];
    register int t1;
    register int t9;
    register int t11;
    register int t12;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t21;
    register float u25;
    register float u28;
    register int t29;
    register int t31;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);

    R1012 = a4;
    R1008 = a6;
    t1 = FUN_0c0e19aa(0xC087290, 0x54, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x4)) = 0xC086FE0;
    (((struct o50_uint *)(t1))->v) = a5;
    *(unsigned int *)((t1 + 0x3C)) = (FUN_0c0e262a(((a5 << 2) << 2)));
    (((struct o40_uint *)(t1))->v) = (FUN_0c0e262a((a5 << 2)));
    (((struct o44_uint *)(t1))->v) = (FUN_0c0e262a((a5 << 2)));
    (((struct o48_uint *)(t1))->v) = (FUN_0c0e262a((a5 << 2)));
    (((struct o4C_uint *)(t1))->v) = (FUN_0c0e262a((a5 << 2)));
    t9 = *(int *)((t1 + 0x3C));
    R1016 = (((((struct o40_int *)(t1))->v)) + (a5 << 2));
    R1020 = (((((struct o44_int *)(t1))->v)) + (a5 << 2));
    t11 = (((struct o48_int *)(t1))->v);
    t12 = (((struct o4C_int *)(t1))->v);
    nlPushMatrix(0x0);
    t14 = (t11 + (a5 << 2));
    t15 = (t12 + (a5 << 2));
    t16 = a5;
    t17 = t9;
    for (;;) {
        nlUnitMatrix();
        FUN_0c0dcca0((R1012));
        t21 = FUN_0c0da2e0();
        nlRotateAY(((R1008) + t21));
        u25 = (f4 * (float)(FUN_0c0da2e0()));
        (((struct o38_float *)(t1))->v) = (u25 * 3.05185094e-05f);
        FUN_0c0db470((t1 + 0x30), t17);
        u28 = 0.5f;
        u28 = u28 + 6.10370189e-05f * (float)(FUN_0c0da2e0());
        (((struct oC_float *)(t17))->v) = u28;
        t29 = R1016;
        R1016 = (t29 - 4);
        R1004 = (t29 - 4);
        *(unsigned int *)(((t29 - 4) + 0x0)) = ((FUN_0c0da2e0()) << 1);
        t31 = R1020;
        R1020 = (t31 - 4);
        R1004 = (t31 - 4);
        *(unsigned int *)(((t31 - 4) + 0x0)) = ((FUN_0c0da2e0()) << 1);
        *(unsigned int *)(((t14 - 0x4) + 0x0)) = ((FUN_0c0da2e0()) << 1);
        t14 = (t14 - 0x4);
        t16 = (t16 - 0x1);
        *(unsigned int *)(((t15 - 0x4) + 0x0)) = (((FUN_0c0da2e0()) << 2) << 2);
        t15 = (t15 - 0x4);
        t17 = (t17 + 0x10);
        if (t16 == 0) {
            break;
        }
    }
    return nlPopMatrix(0x1);
}

