/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

struct o100_int { char p[0x100]; int v; };
struct o100_uint { char p[0x100]; unsigned int v; };
struct o104_uint { char p[0x104]; unsigned int v; };
struct o108_uint { char p[0x108]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
int FUN_0c0db840(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e262a(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c094300(int a4, int a5);

int FUN_0c094300(int a4, int a5)
{
    int stk[5];
    register int t0;
    register int t2;
    register int t16;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register int t23;
    register int t24;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = *(short *)((a5 + 0x4));
    t2 = FUN_0c0e19aa(0xC09442C, 0x10C, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t2);
    *(unsigned int *)((t2 + 0x4)) = 0xC0942CE;
    *(unsigned int *)((t2 + 0x30)) = (*(int *)(((int)stk + 0)));
    (((struct o100_uint *)(t2))->v) = (unsigned short)(*(short *)(((*(int *)(((int)stk + 4))) + 0x6)));
    *(unsigned int *)((t2 + 0x34)) = (FUN_0c0e262a(((((unsigned short)t0 << 1) + (unsigned short)t0) << 2)));
    (((struct o104_uint *)(t2))->v) = (unsigned short)t0;
    (((struct o108_uint *)(t2))->v) = (unsigned short)t0;
    nlPushMatrix(((((((((struct oBC_int *)((*(int *)(((int)stk + 0)))))->v)) << 8) + 0xC25F840) + ((((((((struct o100_int *)(t2))->v)) << 2) << 2) << 2) << 1)) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)));
    t18 = *(int *)((t2 + 0x34));
    t16 = (int)((int)(((unsigned short)t0 - 3) << 16) / (int)0xA);
    FUN_0c0db840((((int)stk + 0) + 0x8));
    t19 = (unsigned short)t0;
    for (;;) {
        t20 = t18;
        t18 = (t18 + 0xC);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t20) = *(struct mv3 *)((((int)stk + 0) + 0x8)); }
        t19 = (t19 - 0x1);
        if (t19 == 0) {
            break;
        }
    }
    t21 = ((0xB0 + t2) + 0x28);
    t22 = ((0xD8 + t2) + 0x28);
    t23 = 0xA;
    t24 = (((unsigned short)t0 - 3) << 16);
    for (;;) {
        t24 = (t24 - t16);
        t23 = (t23 - 0x1);
        *(unsigned int *)(((t21 - 0x4) + 0x0)) = t24;
        t21 = (t21 - 0x4);
        *(unsigned int *)(((t22 - 0x4) + 0x0)) = t24;
        t22 = (t22 - 0x4);
        if (t23 == 0) {
            break;
        }
    }
    return (nlPopMatrix(0x1));
}
