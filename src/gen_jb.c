/* Straight-line functions with calls and guards (batch gen_jb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cdc2(int);
int FUN_0c054c8a(int);
int FUN_0c0c465c(int);
float FUN_0c0da410(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0dce80(int, int, float);
int FUN_0c0de000(float);
int FUN_0c0e19f2(void);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int FUN_0c05ee68(int a4);
int FUN_0c089b50(int a4);
int FUN_0c08bed4(int a4);
struct o220_int { char p[0x220]; int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o23C_int { char p[0x23C]; int v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3CC_short { char p[0x3CC]; short v; };
struct o3CE_short { char p[0x3CE]; short v; };
struct o3D0_short { char p[0x3D0]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o64_int { char p[0x64]; int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct oD8_int { char p[0xD8]; int v; };


int FUN_0c05ee68(int a4)
{
    register int t0;
    register float u0;

    t0 = *(int *)0xC247CAC;
    nlPushMatrix(0x0);
    FUN_0c0dcc70(((((struct o30_float *)(a4))->v)), ((((struct o34_float *)(a4))->v)), ((((struct o38_float *)(a4))->v)));
    nlRotateAY(((((struct o3CE_short *)(t0))->v)));
    nlRotateAX(((((struct o3CC_short *)(t0))->v)));
    u0 = *(float *)0xC05EF9C;
    nlScale(u0, u0, u0);
    FUN_0c0de000(u0);
    FUN_0c0c465c(((((struct o220_int *)(a4))->v)));
    nlPopMatrix(0x1);
    if (((((struct oD8_int *)(a4))->v)) == 1) {
        FUN_0c054c8a(a4);
    }
    if (((*(int *)0xC23A258) & 1) == 0) {
        t0 = (((struct o220_int *)(a4))->v);
        (((struct o220_uint *)(a4))->v) = (t0 + 0x1);
        if ((int)(t0 + 0x1) > (int)0x34D) {
            FUN_0c0e19f2();
        }
    }
    t0 = (((struct o23C_int *)(a4))->v);
    (((struct o23C_uint *)(a4))->v) = (t0 + 0x1);
    if (t0 == 0) {
        return FUN_0c01cdc2(a4);
    }
    return 0x23C;
}

int FUN_0c089b50(int a4)
{
    register int t0;
    register float u0;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    u0 = 1.0f;
    u0 = u0 + (*(float *)0xC089CB8) * (FUN_0c0da410((((((((struct o64_int *)(a4))->v)) << 8) << 2) << 2)));
    (((struct o58_float *)(a4))->v) = u0;
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(((((struct o3CE_short *)(t0))->v)));
    nlRotateAX(((((struct o3CC_short *)(t0))->v)));
    nlRotateAZ(((((struct o3D0_short *)(t0))->v)));
    u0 = (((struct o58_float *)(a4))->v);
    nlScale(u0, u0, u0);
    FUN_0c0de000(((((struct o58_float *)(a4))->v)));
    FUN_0c0c465c(0x291);
    nlPopMatrix(0x1);
    t0 = (((struct o64_int *)(a4))->v);
    (((struct o64_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        return FUN_0c0e19f2();
    }
    return 0x64;
}

int FUN_0c08bed4(int a4)
{
    register int t0;
    register float u0;

    t0 = *(int *)((((*(int *)0xC247CF8) << 2) + 0xC247CAC));
    nlPushMatrix(0x0);
    FUN_0c0dcca0((a4 + 0x30));
    nlRotateAY(((((struct o3CE_short *)(t0))->v)));
    nlRotateAX(((((struct o3CC_short *)(t0))->v)));
    u0 = (((struct o48_float *)(a4))->v);
    nlScale(u0, u0, u0);
    FUN_0c0de000(((((struct o48_float *)(a4))->v)));
    FUN_0c0c465c(((((struct o50_int *)(a4))->v)));
    nlPopMatrix(0x1);
    t0 = (((struct o54_int *)(a4))->v);
    (((struct o54_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c0e19f2();
    }
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.083166644f);
    FUN_0c0dce80((a4 + 0x3C), (a4 + 0x3C), (*(float *)0xC08C004));
    return nlAddVector((a4 + 0x30), (a4 + 0x3C));
}
