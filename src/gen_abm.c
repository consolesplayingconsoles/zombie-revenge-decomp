/* Straight-line functions with calls and guards (batch gen_abm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c010f58(int);
int buGetFileInfo(int, int, int);
int FUN_0c015436(int a4, int a5, int a6, int a7);

int FUN_0c015436(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t6;
    register int t1;
    int t2;
    register int t14;
    register int t16;
    register int t15;

    *(unsigned int *)(((int)stk + 0)) = a4;
    (((struct o0_uint *)0xC23EB14)->v) = 0x0;
    (((struct o8_uint *)0xC23EB14)->v) = 0x0;
    t6 = a5;
    if ((int)a5 >= (int)0x6) {
        t1 = 0xC1EF4AD;
        t2 = (FUN_0c010f58((a5 - 5)));
        for (;;) {
            *(unsigned char *)((t1 + 0x0)) = ((0xF & t2) + 0x30);
            t1 = (t1 - 1);
            t2 = ((int)t2 >> 4);
            if ((unsigned int)t1 <= (unsigned int)0xC1EF4AA) {
                break;
            }
        }
        t6 = 0x6;
    }
    t14 = buGetFileInfo((*(int *)(((int)stk + 0))), ((t6 * 0xD) + 0xC1EF454), (((int)stk + 0) + 0x4));
    (((struct o10_uint *)0xC23EB14)->v) = t14;
    t16 = t14;
    if (t14 == 0) {
        t15 = *(signed char *)(((int)stk + 11));
        (((struct o14_uint *)0xC23EB14)->v) = (unsigned char)t15;
        t16 = (unsigned char)t15;
    }
    return t16;
}
