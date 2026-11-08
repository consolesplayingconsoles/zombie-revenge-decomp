/* Straight-line functions with calls and guards (batch gen_lp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07d17c(int, int, int, int, int, int, int, int, int);
int FUN_0c0cbafc(int, int, int, int);
int FUN_0c0db470(int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
float FUN_0c0dcea0(int);
int FUN_0c0dd050(int);
int FUN_0c0e14c4(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlPopMatrix(int);
int nlSubVector3op(int, int, int);
int FUN_0c07d3dc(void);
struct o170_float { char p[0x170]; float v; };


int FUN_0c07d3dc(void)
{
    int stk[44];
    register int t1;
    register int t6;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t25;
    register int t30;
    register int t33;
    register int t37;
    register int t40;
    register int t47;
    register float u59;

    *(unsigned int *)(((int)stk + 28)) = 0xC10100C;
    *(unsigned int *)(((int)stk + 40)) = 0xC100F2C;
    *(unsigned int *)(((int)stk + 48)) = 0xC100FBC;
    *(unsigned int *)(((int)stk + 32)) = 0x0;
    t1 = FUN_0c0e19aa(0xC07D040, 0x178, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    FUN_0c0dc5a0();
    FUN_0c0dcca0((*(int *)(((int)stk + 28))));
    t6 = 0x0;
    for (;;) {
        *(int *)((int)stk + 20) = ((t6 << 2) + (t1 + 0x30));
        *(unsigned int *)((((t6 << 2) + (t1 + 0x30)) + 0x0)) = (FUN_0c0e14c4(0x0));
        t8 = *(int *)(((int)stk + 48));
        t9 = *(int *)(((int)stk + 40));
        t10 = *(signed char *)((t8 + 0x0));
        t11 = *(signed char *)((t8 + 0x1));
        *(unsigned int *)(((int)stk + 36)) = ((((t11 << 1) + t11) << 2) + t9);
        t12 = *(signed char *)((t8 + 0x2));
        *(unsigned int *)(((int)stk + 44)) = ((((t12 << 1) + t12) << 2) + t9);
        nlSubVector3op((((int)stk + 24) + 0x64), (*(int *)(((int)stk + 36))), ((((t10 << 1) + t10) << 2) + t9));
        nlSubVector3op((((int)stk + 24) + 0x58), (*(int *)(((int)stk + 44))), ((((t10 << 1) + t10) << 2) + t9));
        FUN_0c0dce80((((int)stk + 24) + 0x64), (((int)stk + 24) + 0x64), 0.166666657f);
        FUN_0c0dce80((((int)stk + 24) + 0x58), (((int)stk + 24) + 0x58), 0.166666657f);
        nlSubVector3op((((int)stk + 24) + 0x4C), (((int)stk + 24) + 0x58), (((int)stk + 24) + 0x64));
        nlAddVector3op((((int)stk + 24) + 0x1C), ((((t10 << 1) + t10) << 2) + t9), (*(int *)(((int)stk + 36))));
        nlAddVector((((int)stk + 24) + 0x1C), (*(int *)(((int)stk + 44))));
        FUN_0c0dd050((((int)stk + 24) + 0x1C));
        t25 = 0x0;
        for (;;) {
            FUN_0c0dce80((((int)stk + 24) + 0x40), (((int)stk + 24) + 0x64), (float)t25);
            nlAddVector((((int)stk + 24) + 0x40), ((((t10 << 1) + t10) << 2) + t9));
            nlAddVector3op((((int)stk + 24) + 0x34), (((int)stk + 24) + 0x40), (((int)stk + 24) + 0x58));
            *(unsigned int *)(((int)stk + 24)) = 0x0;
            if ((int)t25 >= 0) {
                for (;;) {
                    nlAddVector3op((((int)stk + 24) + 0x28), (((int)stk + 24) + 0x40), (((int)stk + 24) + 0x64));
                    *(int *)((int)stk + 20) = (((int)stk + 24) + 0x1C);
                    t30 = *(int *)(((int)stk + 32));
                    *(unsigned int *)(((int)stk + 32)) = (t30 + 0x1);
                    *(int *)((int)stk + 16) = (((t30 + 0x1) - 1) & 0xF);
                    *(int *)((int)stk + 12) = 0x0;
                    t33 = (*(int *)(((*(int *)(((int)stk + 28))) + 0xC)));
                    *(int *)((int)stk + 8) = t33;
                    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x38);
                    FUN_0c07d17c(t1, t6, (((int)stk + 4) + 0x54), (((int)stk + 4) + 0x48), (((int)stk + 8) + 0x38), t33, 0x0, (((t30 + 0x1) - 1) & 0xF), (((int)stk + 24) + 0x1C));
                    if ((int)(*(int *)(((int)stk + 24))) < (int)t25) {
                        nlSubVector3op((((int)stk + 24) + 0x28), (((int)stk + 24) + 0x34), (((int)stk + 24) + 0x64));
                        *(int *)((int)stk + 20) = (((int)stk + 24) + 0x1C);
                        t37 = *(int *)(((int)stk + 32));
                        *(unsigned int *)(((int)stk + 32)) = (t37 + 0x1);
                        *(int *)((int)stk + 16) = (((t37 + 0x1) - 1) & 0xF);
                        *(int *)((int)stk + 12) = 0x1;
                        t40 = (*(int *)(((*(int *)(((int)stk + 28))) + 0xC)));
                        *(int *)((int)stk + 8) = t40;
                        *(int *)((int)stk + 4) = (((int)stk + 8) + 0x38);
                        FUN_0c07d17c(t1, t6, (((int)stk + 4) + 0x54), (((int)stk + 4) + 0x48), (((int)stk + 8) + 0x38), t40, 0x1, (((t37 + 0x1) - 1) & 0xF), (((int)stk + 24) + 0x1C));
                    }
                    nlAddVector((((int)stk + 24) + 0x40), (((int)stk + 24) + 0x4C));
                    nlAddVector((((int)stk + 24) + 0x34), (((int)stk + 24) + 0x4C));
                    t47 = *(int *)(((int)stk + 24));
                    *(unsigned int *)(((int)stk + 24)) = (t47 + 0x1);
                    if ((int)(t47 + 0x1) > (int)t25) {
                        break;
                    }
                }
            }
            t25 = (t25 + 0x1);
            if ((int)t25 < (int)0x6) continue;
            break;
        }
        nlAddVector3op((((int)stk + 24) + 0x40), ((((t10 << 1) + t10) << 2) + t9), (*(int *)(((int)stk + 36))));
        nlAddVector((((int)stk + 24) + 0x40), (*(int *)(((int)stk + 44))));
        FUN_0c0dce80((((int)stk + 24) + 0x40), (((int)stk + 24) + 0x40), 0.333333313f);
        FUN_0c0db470((((int)stk + 24) + 0x40), ((((t6 << 1) + t6) << 2) + (0x80 + t1)));
        if (t6 == 0) {
            nlSubVector3op((((int)stk + 24) + 0x40), (*(int *)(((int)stk + 36))), ((((t10 << 1) + t10) << 2) + t9));
            u59 = *(float *)0xC07D6F0;
            (((struct o170_float *)(t1))->v) = ((FUN_0c0dcea0((((int)stk + 24) + 0x40))) / _builtin_sqrtf(u59));
            _builtin_sqrtf(u59);
        }
        t6 = (t6 + 0x1);
        *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((int)stk + 48))) + 0x4);
        if ((unsigned int)t6 < (unsigned int)0x14) continue;
        break;
    }
    nlPopMatrix(0x1);
    return (FUN_0c0cbafc(0x122D, 0x2, 0xC00000, 0x800000));
}
