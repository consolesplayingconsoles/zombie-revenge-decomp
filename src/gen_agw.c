/* Straight-line functions with calls and guards (batch gen_agw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int FUN_0c01993e(int, int, int, int);
int FUN_0c0de310(float, float, float);
int FUN_0c01b3b8(int a4, int a5, int a6, int a7);

int FUN_0c01b3b8(int a4, int a5, int a6, int a7)
{
    if ((*(int *)0xC204998) != 0) {
        *(unsigned int *)0xC1FF890 = 0x0;
    }
    if ((((((struct o18_int *)0xC23ED44)->v)) & 32) != 0) {
        *(unsigned int *)0xC23ED9C = 0x6;
        (((struct o4_uint *)0xC23ED44)->v) = 0x5;
        (((struct o0_uint *)0xC23ED44)->v) = 0x1;
        (((struct o18_uint *)0xC23ED44)->v) = (((((struct o18_int *)0xC23ED44)->v)) | 0x7);
        return FUN_0c0de310(0.0f, 0.0f, 0.0f);
    }
    return FUN_0c01993e(a4, 0xC23ED5C, a6, a7);
}
