/* Straight-line functions with calls and guards (batch gen_mo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o226_short { char p[0x226]; short v; };
struct o228_short { char p[0x228]; short v; };
struct o22A_short { char p[0x22A]; short v; };
struct o238_short { char p[0x238]; short v; };
struct o274_float { char p[0x274]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o27C_float { char p[0x27C]; float v; };
struct o284_float { char p[0x284]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o45C_float { char p[0x45C]; float v; };
struct o468_float { char p[0x468]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
int FUN_0c0855ba(int);
int FUN_0c085638(int);
int FUN_0c0955c0(int);
int FUN_0c0abd54(void);
int FUN_0c0b359e(int, int);
int FUN_0c0ba6e8(int);
int FUN_0c0ba776(int);
int FUN_0c0bb0f4(int);
int FUN_0c0c475c(int, float);
int FUN_0c0dcca0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e19f2(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c0abc14(int a4, int a5, int a6, int a7);
int FUN_0c0abb34(void);

int FUN_0c0abc14(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(int *)((a4 + 0x30));
    if (((*(int *)0xC23ED5C) & 0x20000) != 0) {
        *(unsigned int *)(((*(int *)((a4 + 0x30))) + 0x0)) = 0xC0E19F2;
        FUN_0c0e19f2();
    }
    t1 = *(int *)((a4 + 0x34));
    if (t1 != 0) {
        if (t1 != 1) {
        } else {
            u0 = (((struct o3C_float *)(a4))->v);
            (((struct o3C_float *)(a4))->v) = (u0 - 0.0166666657f);
            if (!((u0 - 0.0166666657f) > 0.0f)) {
                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
                (((struct o3C_float *)(a4))->v) = 0.0f;
            }
        }
    } else {
        t1 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t1 - 1);
        if ((int)(t1 - 1) <= 0) {
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
            *(unsigned int *)0xC24703C = 0x0;
        }
    }
    if (((((struct o238_short *)(t0))->v)) == 0) {
        nlPushMatrix(0x0);
        FUN_0c0dcca0((0x22C + t0));
        nlRotateAY(((((struct o228_short *)(t0))->v)));
        nlRotateAX(((((struct o226_short *)(t0))->v)));
        nlRotateAZ(((((struct o22A_short *)(t0))->v)));
        FUN_0c0c475c(0xADB, ((((struct o3C_float *)(a4))->v)));
        return nlPopMatrix(0x1);
    }
    return 0x238;
}

int FUN_0c0abb34(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC10E46C;
    t1 = FUN_0c0e19aa(0xC0B35E4, 0x474, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t1);
    *(unsigned int *)((t1 + 0x4)) = 0xC0A8D2C;
    (((struct oBC_uint *)(t1))->v) = (*(signed char *)0xC10E458);
    (((struct oC0_uint *)(t1))->v) = (*(signed char *)0xC10E459);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x30)) = *(struct mv3 *)(0xC10E460); }
    (((struct o8_float *)((0x468 + t1)))->v) = 1.0f;
    (((struct o4_float *)((0x468 + t1)))->v) = 1.0f;
    (((struct o468_float *)(t1))->v) = 1.0f;
    (((struct o8_float *)((0x45C + t1)))->v) = 1.0f;
    (((struct o4_float *)((0x45C + t1)))->v) = 1.0f;
    (((struct o45C_float *)(t1))->v) = 1.0f;
    (((struct o284_float *)(t1))->v) = 1.0f;
    (((struct o27C_float *)(t1))->v) = 1.0f;
    (((struct o278_float *)(t1))->v) = 1.0f;
    (((struct o274_float *)(t1))->v) = 1.0f;
    *(unsigned int *)((((((((struct oBC_int *)(t1))->v)) << 2) + 0xC246FF0) + 0x0)) = t1;
    *(unsigned int *)((((((((struct oBC_int *)(t1))->v)) << 2) + 0xC247030) + 0x0)) = 0x4;
    FUN_0c0855ba(t1);
    FUN_0c085638(t1);
    FUN_0c0ba6e8(t1);
    FUN_0c0ba776(t1);
    FUN_0c0bb0f4(t1);
    FUN_0c0955c0(t1);
    FUN_0c0b359e(t1, t0);
    t0 = FUN_0c0e19aa(0xC0ABC14, 0x40, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t0);
    *(unsigned int *)((t0 + 0x30)) = t1;
    *(unsigned int *)((t0 + 0x38)) = 0x25A;
    (((struct o3C_float *)(t0))->v) = 1.0f;
    return FUN_0c0abd54();
}
