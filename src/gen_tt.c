/* Straight-line functions with calls and guards (batch gen_tt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7714(int, int, float, float, float);
int FUN_0c0db470(int, int);
int FUN_0c0dbda0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlUnitMatrix(void);
int FUN_0c035458(int a4, int a5);
struct o30_float { char p[0x30]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3E4_int { char p[0x3E4]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o8_float { char p[0x8]; float v; };


int FUN_0c035458(int a4, int a5)
{
    int stk[22];
    int t34;
    register int t69;
    int t49;
    int t56;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c0dbda0((((((struct o3E4_int *)((*(int *)(((int)stk + 24)))))->v)) + ((((*(int *)(((int)stk + 20))) << 2) << 2) << 2)));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 1.0f;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    (((struct o30_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 28)));
    (((struct o4_float *)((((int)stk + 4) + 0x30)))->v) = (*(float *)(((int)stk + 32)));
    (((struct o8_float *)((((int)stk + 4) + 0x30)))->v) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 1.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    (((struct o3C_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 28)));
    (((struct o4_float *)((((int)stk + 4) + 0x3C)))->v) = (*(float *)(((int)stk + 32)));
    (((struct o8_float *)((((int)stk + 4) + 0x3C)))->v) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    FUN_0c0db470((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18));
    (((struct o48_float *)(((int)stk + 4)))->v) = (*(float *)(((int)stk + 28)));
    (((struct o4_float *)((((int)stk + 4) + 0x48)))->v) = (*(float *)(((int)stk + 32)));
    (((struct o8_float *)((((int)stk + 4) + 0x48)))->v) = (*(float *)(((int)stk + 36)));
    nlPopMatrix(0x1);
    FUN_0c0a7714(((int)stk + 4), (((int)stk + 4) + 0x8), (((((struct o30_float *)(((int)stk + 4)))->v)) - ((((struct o48_float *)(((int)stk + 4)))->v))), (((((struct o4_float *)((((int)stk + 4) + 0x30)))->v)) - ((((struct o4_float *)((((int)stk + 4) + 0x48)))->v))), (((((struct o8_float *)((((int)stk + 4) + 0x30)))->v)) - ((((struct o8_float *)((((int)stk + 4) + 0x48)))->v))));
    FUN_0c0a7714((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x4), (((((struct o3C_float *)(((int)stk + 4)))->v)) - ((((struct o48_float *)(((int)stk + 4)))->v))), (((((struct o4_float *)((((int)stk + 4) + 0x3C)))->v)) - ((((struct o4_float *)((((int)stk + 4) + 0x48)))->v))), (((((struct o8_float *)((((int)stk + 4) + 0x3C)))->v)) - ((((struct o8_float *)((((int)stk + 4) + 0x48)))->v))));
    if (((int)(*(int *)(((int)stk + 4))) > (int)0x1000) && (t34 = *(int *)(((int)stk + 4)), (int)t34 < (int)0x7000)) {
        t69 = (*(int *)(((int)stk + 8)));
    } else {
        if (((int)(*(int *)(((int)stk + 4))) > (int)0x9000) && (t49 = *(int *)(((int)stk + 4)), (int)t49 < (int)0xF000)) {
            t69 = ((*(int *)(((int)stk + 8))) + 0x8000);
        } else {
            if (((int)(*(int *)(((int)stk + 4))) > (int)0x4000) && (t56 = *(int *)(((int)stk + 4)), (int)t56 < (int)0xC000)) {
                t69 = ((*(int *)(((int)stk + 12))) + 0x8000);
            } else {
                t69 = (*(int *)(((int)stk + 12)));
            }
        }
    }
    return t69;
}
