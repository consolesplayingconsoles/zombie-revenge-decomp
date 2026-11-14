/* Straight-line functions with calls and guards (batch gen_abv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int syRtcDateToCount(int, int);
int FUN_0c0161aa(int a4);
int syRtcCompareDate(int a4, int a5);

int FUN_0c0161aa(int a4)
{
    int stk[4];

    *(unsigned short *)(((int)stk + 4)) = (*(short *)((a4 + 0x0)));
    *(unsigned char *)(((int)stk + 6)) = (*(signed char *)((a4 + 0x2)));
    *(unsigned char *)(((int)stk + 7)) = (*(signed char *)((a4 + 0x3)));
    *(unsigned char *)(((int)stk + 8)) = (*(signed char *)((a4 + 0x4)));
    *(unsigned char *)(((int)stk + 9)) = (*(signed char *)((a4 + 0x5)));
    *(unsigned char *)(((int)stk + 10)) = (*(signed char *)((a4 + 0x6)));
    *(unsigned char *)(((int)stk + 11)) = (*(signed char *)((a4 + 0x7)));
    *(unsigned char *)(((int)stk + 12)) = 0x0;
    syRtcDateToCount(((int)stk + 4), ((int)stk + 0));
    return (*(int *)(((int)stk + 0)));
}

int syRtcCompareDate(int a4, int a5)
{
    int stk[3];
    register int t4;
    register int t10;

    *(unsigned int *)(((int)stk + 8)) = a5;
    syRtcDateToCount(a4, ((int)stk + 4));
    syRtcDateToCount((*(int *)(((int)stk + 8))), ((int)stk + 0));
    t4 = *(int *)(((int)stk + 0));
    t10 = 0x0;
    if ((*(int *)(((int)stk + 4))) == t4) {
    } else {
        t10 = 0xFFFFFFFF;
        if ((unsigned int)(*(int *)(((int)stk + 4))) > (unsigned int)t4) {
            t10 = 0x1;
        }
    }
    return t10;
}
