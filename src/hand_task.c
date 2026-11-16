/* Two functions that end in a jump to the task loop FUN_0c0e16c0 with registers the loop's callees read: the original leaves a table
   address in r5 (the first also in r6 when its first test passes; and, in the second, the search's limit and key in r6 and r7, or its own r6 and r7 when it does not search),
   which the calls here pass as written. Written by
   hand from the original's code, proven by tools/equiv.py on the cases in tests/hand_task/. */

int FUN_0c084218(int);
int FUN_0c0e14c4(int);
int FUN_0c0e15d4(int, int, int, int);
int FUN_0c0e16c0();
int FUN_0c0e19f2(void);

int FUN_0c0b9da0(int a4)
{
    int t1;

    t1 = 0xC23EDE0;
    FUN_0c084218(a4);
    if ((*(int *)0xC23EDE0) != 0 && (*(int *)0xC247548) != 0) {
        if ((*(int *)0xC23EDE4) != 0 && (*(int *)0xC247568) != 0) {
            t1 = 0xC247564;
        }
        return ((int (*)(int, int, int))FUN_0c0e16c0)((*(int *)0xC23ECE0), t1, 0xC247544);
    }
    if ((*(int *)0xC23EDE4) != 0 && (*(int *)0xC247568) != 0) {
        t1 = 0xC247564;
    }
    return ((int (*)(int, int))FUN_0c0e16c0)((*(int *)0xC23ECE0), t1);
}

int FUN_0c0c69f6(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((*(int *)0xC23ED5C) & 6) != 0) {
        if ((*(int *)(a4 + 0x30)) != 0) {
            FUN_0c0e15d4((*(int *)(a4 + 0x30)), a5, a6, a7);
        }
        FUN_0c0e19f2();
    }
    if ((*(int *)(a4 + 0x30)) == 0) {
        *(int *)(a4 + 0x30) = FUN_0c0e14c4(0xC0C69B6);
    }
    if ((*(int *)(a4 + 0x3C)) < 0) {
        for (t0 = 0; t0 < 4; t0++) {
            if ((*(int *)(0xC246074 + (t0 << 5))) == (*(int *)0xC23ED50)) {
                *(int *)(a4 + 0x3C) = t0;
                break;
            }
        }
        if ((*(int *)(a4 + 0x3C)) >= 0) {
            *(int *)(a4 + 0x38) = ((*(int *)(0xC246074 + ((*(int *)(a4 + 0x3C)) << 5) + 0xC)) + (*(int *)0xC247074)) - (*(int *)0xC2462F4);
        }
        return ((int (*)(int, int, int, int))FUN_0c0e16c0)((*(int *)(a4 + 0x30)), 0xC246074, 0x4, 0xC23ED50);
    }
    *(int *)(a4 + 0x38) = ((*(int *)(0xC246074 + ((*(int *)(a4 + 0x3C)) << 5) + 0xC)) + (*(int *)0xC247074)) - (*(int *)0xC2462F4);
    return ((int (*)(int, int, int, int))FUN_0c0e16c0)((*(int *)(a4 + 0x30)), 0xC246074, a6, a7);
}
