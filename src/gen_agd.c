/* Straight-line functions with calls and guards (batch gen_agd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01c230(void);
int FUN_0c01c24e(void);
int FUN_0c01d3c6(void);
int FUN_0c0498ce(void);
int FUN_0c054d8e(void);
int FUN_0c07e1e8(void);
int FUN_0c084104(void);
int FUN_0c0bf940(void);
int FUN_0c0bfa90(void);
int FUN_0c0c4290(int);
int FUN_0c0c4464(int, int, int);
int FUN_0c0c45d0(void);
int FUN_0c0e14c4(int);
int FUN_0c0e2400(int, ...);
int FUN_0c0c25a4(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int FUN_0c0c25a4(void)
{
    int stk[3];
    register int t0;
    register int t17;

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int R14;
    register int T_;
    int R1008;
    R1008 = *(int *)((int)stk + 8);
    t0 = R14;
    R1008 = t0;
    (((struct o0_uint *)0xC23ED50)->v) = 0x0;
    (((struct o0_uint *)0xC23ED9C)->v) = 0x4;
    (((struct o4_uint *)0xC23ED9C)->v) = 0x0;
    (((struct o14_uint *)0xC23ED50)->v) = 0x0;
    (((struct oC_uint *)0xC23ED50)->v) = 0x0;
    (((struct o4_uint *)0xC23A190)->v) = 0x0;
    FUN_0c0bfa90();
    FUN_0c0e2400(t0);
    FUN_0c0c45d0();
    FUN_0c0bf940();
    FUN_0c0c4290(0x0);
    FUN_0c0c4464(0x3, 0x4, 0x0);
    FUN_0c0498ce();
    FUN_0c054d8e();
    FUN_0c01c230();
    FUN_0c07e1e8();
    FUN_0c084104();
    FUN_0c01d3c6();
    FUN_0c01c24e();
    (((struct o0_uint *)0xC23ECE0)->v) = (FUN_0c0e14c4(0xC0C252A));
    (((struct o4_uint *)0xC23ECE0)->v) = (FUN_0c0e14c4(0xC0C2530));
    (((struct oC_uint *)0xC23ECE0)->v) = (FUN_0c0e14c4(0xC0C2534));
    t17 = FUN_0c0e14c4(0xC0C2538);
    (((struct o10_uint *)0xC23ECE0)->v) = t17;
    (((struct o0_uint *)0xC23A190)->v) = (((((struct o0_int *)0xC23A190)->v)) + 0x1);
    return t17;
}
