/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

struct o10_float { char p[0x10]; float v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c0a79fa(int, int, int);
int FUN_0c0db840(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e262a(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c093b48(int a4, int a5);

int FUN_0c093b48(int a4, int a5)
{
    int stk[13];
    register int t0;
    register int t2;
    register int t17;
    register int t18;
    register int t25;
    register int t26;
    register int t27;
    register int t28;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    t0 = *(short *)((a5 + 0x4));
    t2 = FUN_0c0e19aa(0xC093C80, 0x6C, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t2);
    *(unsigned int *)((t2 + 0x4)) = 0xC093B00;
    (((struct o5C_uint *)(t2))->v) = ((((struct oBC_int *)((*(int *)(((int)stk + 16)))))->v));
    (((struct o60_uint *)(t2))->v) = (unsigned short)(*(short *)(((*(int *)(((int)stk + 12))) + 0x6)));
    *(unsigned int *)((t2 + 0x30)) = (FUN_0c0e262a(((((unsigned short)t0 << 2) + (unsigned short)t0) << 2)));
    (((struct o64_uint *)(t2))->v) = ((unsigned short)t0 - 1);
    (((struct o68_uint *)(t2))->v) = (unsigned short)t0;
    nlPushMatrix(((((((((struct o5C_int *)(t2))->v)) << 8) + 0xC25F840) + ((((((((struct o60_int *)(t2))->v)) << 2) << 2) << 2) << 1)) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)));
    t18 = *(int *)((t2 + 0x30));
    FUN_0c0db840((((int)stk + 0) + 0x14));
    FUN_0c0a79fa(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    t17 = (unsigned short)t0;
    for (;;) {
        t17 = (t17 - 0x1);
        *(unsigned short *)((t18 + 0x0)) = (*(int *)(((int)stk + 0)));
        *(unsigned short *)((t18 + 0x2)) = (*(short *)(((int)stk + 4)));
        *(unsigned short *)((t18 + 0x4)) = (*(short *)(((int)stk + 8)));
        (((struct o8_float *)(t18))->v) = (*(float *)(((int)stk + 20)));
        (((struct oC_float *)(t18))->v) = (*(float *)(((int)stk + 24)));
        (((struct o10_float *)(t18))->v) = (*(float *)(((int)stk + 28)));
        t18 = (t18 + 0x14);
        if (t17 == 0) {
            break;
        }
    }
    t25 = (int)((int)(((unsigned short)t0 - 3) << 16) / (int)0xA);
    t26 = 0x0;
    t27 = (t2 + 0x34);
    t28 = 0xA;
    for (;;) {
        t26 = (t26 + t25);
        t28 = (t28 - 0x1);
        *(unsigned int *)((t27 + 0x0)) = t26;
        t27 = (t27 + 0x4);
        if (t28 == 0) {
            break;
        }
    }
    return (nlPopMatrix(0x1));
}
