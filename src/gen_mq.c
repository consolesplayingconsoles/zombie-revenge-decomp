/* Straight-line functions with calls and guards (batch gen_mq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c089bec(int a4, int a5);

int FUN_0c089bec(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0xC10AAFC;
    for (;;) {
        t1 = FUN_0c0e19aa(0xC08C4D8, 0xA4, (*(int *)0xC23ECF0));
        FUN_0c0e19d0(t1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x70)) = *(struct mv3 *)(a4); }
        t2 = *(short *)((t0 + 0x0));
        t0 = (t0 + 0x2);
        *(unsigned short *)((t1 + 0x8A)) = (a5 + t2);
        *(float *)((t1 + 0x90)) = 0.599999964f;
        *(unsigned short *)((t1 + 0x9A)) = 0x271;
        *(unsigned short *)((t1 + 0xA0)) = 0x10;
        if ((unsigned int)t0 >= (unsigned int)0xC10AB02) {
            break;
        }
    }
    t0 = FUN_0c0e19aa(0xC08C1AA, 0xA4, (*(int *)0xC23ECF0));
    FUN_0c0e19d0(t0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x70)) = *(struct mv3 *)(a4); }
    *(float *)((t0 + 0x90)) = 10.0f;
    *(unsigned short *)((t0 + 0x9A)) = 0x394;
    *(unsigned short *)((t0 + 0xA0)) = 0xF;
    return 0xA0;
}
