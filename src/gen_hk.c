/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
int FUN_0c0db840(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c0e262a(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c093f48(int a4, int a5);

int FUN_0c093f48(int a4, int a5)
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

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = *(short *)((a5 + 0x4));
    t2 = FUN_0c0e19aa(0xC09406C, 0x94, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t2);
    *(unsigned int *)((t2 + 0x4)) = 0xC093F14;
    (((struct o84_uint *)(t2))->v) = ((((struct oBC_int *)((*(int *)(((int)stk + 4)))))->v));
    (((struct o88_uint *)(t2))->v) = (unsigned short)(*(short *)(((*(int *)(((int)stk + 0))) + 0x6)));
    *(unsigned int *)((t2 + 0x30)) = (FUN_0c0e262a(((((unsigned short)t0 << 1) + (unsigned short)t0) << 2)));
    (((struct o8C_uint *)(t2))->v) = ((unsigned short)t0 - 1);
    (((struct o90_uint *)(t2))->v) = (unsigned short)t0;
    nlPushMatrix(((((((((struct o84_int *)(t2))->v)) << 8) + 0xC25F840) + ((((((((struct o88_int *)(t2))->v)) << 2) << 2) << 2) << 1)) + (((((*(int *)0xC23A258) & 0x1) << 2) << 2) << 2)));
    t18 = *(int *)((t2 + 0x30));
    t16 = (int)((int)(((unsigned short)t0 - 3) << 16) / (int)0x14);
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
    t21 = (t2 + 0x34);
    t22 = 0x14;
    t23 = 0x0;
    for (;;) {
        t23 = (t23 + t16);
        t22 = (t22 - 0x1);
        *(unsigned int *)((t21 + 0x0)) = t23;
        t21 = (t21 + 0x4);
        if (t22 == 0) {
            break;
        }
    }
    return (nlPopMatrix(0x1));
}
