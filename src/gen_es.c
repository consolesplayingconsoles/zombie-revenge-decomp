/* Straight-line functions with calls and guards (batch gen_es): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0bdb70(int, int, int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcca0(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int nlPopMatrix(int);
void FUN_0c0ac8a2(int a4, float f4);
struct o4_float { char p[0x4]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };


void FUN_0c0ac8a2(int a4, float f4)
{
    int t1;
    int t7;
    int t8;
    int t9;

    t1 = FUN_0c0e19aa(0xC0AC990, 0x34C, (*(int *)0xC23ECE0));
    FUN_0c0e19d0(t1);
    *(unsigned int *)0xC24FA64 = t1;
    *(unsigned int *)((t1 + 0x4)) = 0xC0AC898;
    (((struct o78_uint *)(t1))->v) = 0xC0AC848;
    (((struct o4C_float *)(t1))->v) = f4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x58)) = *(struct mv3 *)(a4); }
    FUN_0c0dc5a0();
    FUN_0c0dcca0(0xC10E70C);
    FUN_0c0bdb70(0xE76, 0xE76, (t1 + 0x30));
    nlPopMatrix(0x1);
    t7 = ((t1 + 0x58) + 0x24);
    t8 = (t1 + 0x58);
    t9 = 0x14;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t7) = *(struct mv3 *)(t8); }
        (((struct o4_float *)(t7))->v) = (((((struct o4_float *)(t7))->v)) - 5.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t7 + 0xC)) = *(struct mv3 *)(t7); }
        t9 = (t9 - 0x1);
        *(unsigned int *)((t7 + 0x20)) = 0xC0651AC;
        t8 = (t8 + 0x24);
        t7 = (t7 + 0x24);
        if (t9 == 0) {
            break;
        }
    }
}
