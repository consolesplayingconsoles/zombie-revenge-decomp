/* Straight-line functions with calls and guards (batch gen_ul): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a7ed4(int, int, int, int);
int FUN_0c0dbda0(int);
int FUN_0c0dcc70(float, float, float);
int nlGetMatrix(int);
int nlInvertMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c0b2262(int a4);
struct o24C_int { char p[0x24C]; int v; };
struct o24C_uint { char p[0x24C]; unsigned int v; };
struct o254_float { char p[0x254]; float v; };
struct o258_float { char p[0x258]; float v; };
struct o25C_float { char p[0x25C]; float v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CC_ushort { char p[0x3CC]; unsigned short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o3CE_ushort { char p[0x3CE]; unsigned short v; };
struct o3D4_short { char p[0x3D4]; short v; };
struct o3D8_short { char p[0x3D8]; short v; };
struct o400_int { char p[0x400]; int v; };
struct o400_uint { char p[0x400]; unsigned int v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o420_int { char p[0x420]; int v; };
struct o420_uint { char p[0x420]; unsigned int v; };


int FUN_0c0b2262(int a4)
{
    int stk[1];

    register int R2;
    register int R3;
    int R7;
    register int R8;
    register int R9;
    register int R12;
    register float F4;
    register float F5;
    register float F6;
    register float F13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_3 = a4;
    nlUnitMatrix();
    v0_4 = (((struct o24C_int *)(v0_3))->v);
    v0_5 = (v0_4);
    v0_1 = (0xC23ED88);
    v0_0 = (v0_3);
    v0_3 = (0x10000);
    v0_6 = (0x4);
    v0_2 = (0xC202CA0);
    R7 = (0xFFFFFFFB);
    if ((v0_4 == 0)) goto L_C0B2290;
    if ((v0_5 == 1)) goto L_C0B22A8;
    if ((v0_5 == 2)) goto L_C0B22FC;
    if ((v0_5 == 3)) goto L_C0B2334;
    L_C0B2372:;
    (((struct o3CC_ushort *)(v0_0))->v) = ((((struct o3D4_short *)(v0_0))->v));
    (((struct o3CE_ushort *)(v0_0))->v) = ((((struct o3D8_short *)(v0_0))->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x254 + v0_0)) = *(struct mv3 *)((0x260 + v0_0)); }
    nlRotateAX((-((((struct o3CC_short *)(v0_0))->v))));
    nlRotateAY((-((((struct o3CE_short *)(v0_0))->v))));
    FUN_0c0dcc70((-((((struct o254_float *)(v0_0))->v))), (-((((struct o258_float *)(v0_0))->v))), (-((((struct o25C_float *)(v0_0))->v))));
    nlGetMatrix((0x2AC + v0_0));
    nlInvertMatrix(0x0);
    nlGetMatrix((0x2EC + v0_0));
    return FUN_0c0dbda0((0x2AC + v0_0));
    L_C0B2334:;
    if (((v0_6 & (*(int *)((v0_1 + 0x0)))) == 0)) goto L_C0B2372;
    *(unsigned int *)((v0_1 + 0x0)) = ((*(int *)((v0_1 + 0x0))) & R7);
    (((struct o420_uint *)(v0_0))->v) = v0_3;
    v0_1 = (((struct o400_int *)(v0_0))->v);
    (((struct o400_uint *)(v0_0))->v) = (v0_1 + 0x1);
    (((struct o41C_uint *)(v0_0))->v) = (*(int *)((v0_2 + ((v0_1 + 0x1) << 2))));
    (((struct o24C_uint *)(v0_0))->v) = 0x2;
    FUN_0c0a7ed4(((((struct o41C_int *)(v0_0))->v)), ((((struct o420_int *)(v0_0))->v)), (0x260 + v0_0), (0x3D4 + v0_0));
    goto L_C0B2372;
    L_C0B22FC:;
    FUN_0c0a7ed4(((((struct o41C_int *)(v0_0))->v)), ((((struct o420_int *)(v0_0))->v)), (0x260 + v0_0), (0x3D4 + v0_0));
    (((struct o420_uint *)(v0_0))->v) = (((((struct o420_int *)(v0_0))->v)) + 0x444);
    if ((((*(int *)((v0_1 + 0x0))) & 8) == 0)) goto L_C0B2372;
    v0_2 = (((*(int *)((v0_1 + 0x0))) & 0xFFFFFFF7));
    L_C0B2328:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    (((struct o24C_uint *)(v0_0))->v) = (((((struct o24C_int *)(v0_0))->v)) + 0x1);
    goto L_C0B2372;
    L_C0B22A8:;
    if (((v0_6 & (*(int *)((v0_1 + 0x0)))) == 0)) goto L_C0B2372;
    v0_2 = (((*(int *)((v0_1 + 0x0))) & R7));
    goto L_C0B2328;
    L_C0B2290:;
    (((struct o41C_uint *)(v0_0))->v) = (*(int *)((v0_2 + (((((struct o400_int *)(v0_0))->v)) << 2))));
    (((struct o420_uint *)(v0_0))->v) = v0_3;
    (((struct o24C_uint *)(v0_0))->v) = (((((struct o24C_int *)(v0_0))->v)) + 0x1);
    goto L_C0B22A8;
}
