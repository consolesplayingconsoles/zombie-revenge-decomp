/* Straight-line functions with calls and guards (batch gen_ll): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0685a4(int, int, int, int);
int FUN_0c0847a2(int, float);
int FUN_0c0847b8(int);
int FUN_0c0847de(int);
int FUN_0c0847f4(float, float);
int FUN_0c0848bc(float, float, float);
int FUN_0c0849da(void);
int FUN_0c0c465c(int);
int FUN_0c0cacde(int, float, float);
int FUN_0c0dcca0(int);
int FUN_0c0de000(float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c07c21c(int a4, int a5, int a6, int a7);
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };


int FUN_0c07c21c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    FUN_0c0685a4(a4, a5, a6, a7);
    t0 = (((struct o18_int *)0xC247C7C)->v);
    (((struct o18_uint *)0xC247C7C)->v) = (t0 + 0x1);
    if ((int)(t0 + 0x1) >= (int)0x1A4) {
        (((struct o18_uint *)0xC247C7C)->v) = 0x0;
        (((struct o1C_uint *)0xC247C7C)->v) = 0xB4;
        t0 = (((struct o20_int *)0xC247C7C)->v);
        (((struct o20_uint *)0xC247C7C)->v) = (t0 + 0x1);
        if ((unsigned int)(t0 + 0x1) >= (unsigned int)0x7) {
            (((struct o20_uint *)0xC247C7C)->v) = 0x0;
        }
    }
    u0 = (((struct o10_float *)0xC247C7C)->v);
    (((struct o10_float *)0xC247C7C)->v) = (u0 + 0.000999999931f);
    u1 = 0.0f;
    if (!(1.0f > (u0 + 0.000999999931f))) {
        (((struct o10_float *)0xC247C7C)->v) = (((((struct o10_float *)0xC247C7C)->v)) - 1.0f);
        u1 = -1.0f;
    }
    u0 = (((struct o14_float *)0xC247C7C)->v);
    (((struct o14_float *)0xC247C7C)->v) = (u0 + 0.00919999927f);
    u2 = 0.0f;
    if (!(1.0f > (u0 + 0.00919999927f))) {
        (((struct o14_float *)0xC247C7C)->v) = (((((struct o14_float *)0xC247C7C)->v)) - 1.0f);
        u2 = -1.0f;
    }
    FUN_0c0cacde(0x11F7, (u1 + 0.000999999931f), (u2 + 0.00919999927f));
    if (((((struct o1C_int *)0xC247C7C)->v)) != 0) {
        (((struct o1C_uint *)0xC247C7C)->v) = (((((struct o1C_int *)0xC247C7C)->v)) - 1);
    }
    t0 = (((struct o1C_int *)0xC247C7C)->v);
    t1 = (((struct o20_int *)0xC247C7C)->v);
    t2 = (t1 - 1);
    if ((int)(t1 - 1) < 0) {
        t2 = 0x6;
    }
    t3 = *(int *)((((((t1 << 1) + t1) << 2) + 0xC200940) + 0x0));
    t4 = *(int *)((((((t1 << 1) + t1) << 2) + 0xC200940) + 0x4));
    u0 = ((float)t0 * 0.00555555522f);
    u1 = (float)t3;
    u1 = u1 + u0 * ((float)((*(int *)((((((t2 << 1) + t2) << 2) + 0xC200940) + 0x0))) - t3));
    u0 = ((float)t0 * 0.00555555522f);
    u2 = (float)t4;
    u2 = u2 + u0 * ((float)((*(int *)((((((t2 << 1) + t2) << 2) + 0xC200940) + 0x4))) - t4));
    t3 = *(int *)((((((t1 << 1) + t1) << 2) + 0xC200940) + 0x8));
    u0 = ((float)t0 * 0.00555555522f);
    u3 = (float)t3;
    u3 = u3 + u0 * ((float)((*(int *)((((((t2 << 1) + t2) << 2) + 0xC200940) + 0x8))) - t3));
    FUN_0c0848bc(u1, u2, u3);
    if (((*(int *)0xC23ED88) & 32) != 0) {
        nlPushMatrix(0x0);
        nlUnitMatrix();
        FUN_0c0dcca0(0xC100DD0);
        nlRotateAY(0x8000);
        nlRotateAZ((((*(int *)0xC23A258) << 2) << 1));
        u0 = (((struct o0_float *)0xC07C4A0)->v);
        nlScale(u0, u0, u0);
        FUN_0c0de000(((((struct o8_float *)0xC07C4A0)->v)));
        FUN_0c0c465c(0x11F7);
        nlPopMatrix(0x1);
        u0 = *(float *)0xC20079C;
        u4 = u0;
        u4 = u4 + ((1.0f - u0)) * u1;
        (((struct o0_float *)0xC247C7C)->v) = u4;
        u1 = (*(float *)0xC20079C);
        u1 = u1 + ((1.0f - u0)) * u2;
        (((struct o4_float *)0xC247C7C)->v) = u1;
        u1 = (*(float *)0xC20079C);
        u1 = u1 + ((1.0f - u0)) * u3;
        (((struct o8_float *)0xC247C7C)->v) = u1;
        FUN_0c0847a2(0x1, (1.0f - u0));
        FUN_0c0847f4(1.0f, 0.0f);
        FUN_0c0847b8(0xC247C7C);
        return FUN_0c0847de(0xC247C7C);
    }
    return FUN_0c0849da();
}
