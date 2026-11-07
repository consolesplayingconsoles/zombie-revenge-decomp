/* Straight-line functions with calls and guards (batch gen_mz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c06ca54(int a4);

int FUN_0c06ca54(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(int *)0xC247C5C;
    *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + (*(float *)(((0x54 + a4) + 0x0))));
    if ((*(float *)((a4 + 0x30))) > (*(float *)((t0 + 0x1278)))) {
        *(float *)((a4 + 0x30)) = (*(float *)((t0 + 0x1278)));
        u0 = (*(float *)((a4 + 0x54)));
        u0 *= -1.0f;
        *(float *)((a4 + 0x54)) = u0;
    } else {
        if (!((*(float *)((a4 + 0x30))) > (*(float *)((t0 + 0x126C))))) {
            *(float *)((a4 + 0x30)) = (*(float *)((t0 + 0x126C)));
            u0 = (*(float *)((a4 + 0x54)));
            u0 *= -1.0f;
            *(float *)((a4 + 0x54)) = u0;
        }
    }
    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x58 + a4) + 0x0))));
    *(unsigned int *)((a4 + 0x84)) = 0x0;
    if ((*(float *)((a4 + 0x34))) > (*(float *)((t0 + 0x127C)))) {
        *(float *)((a4 + 0x34)) = (*(float *)((t0 + 0x127C)));
        *(float *)((a4 + 0x58)) = 0.0f;
    } else {
        if (!((*(float *)((a4 + 0x34))) > (*(float *)((t0 + 0x1270))))) {
            *(float *)((a4 + 0x34)) = (*(float *)((t0 + 0x1270)));
            *(float *)((a4 + 0x58)) = 0.0f;
            *(unsigned int *)((a4 + 0x84)) = 0x1;
        }
    }
    *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) + (*(float *)(((0x5C + a4) + 0x0))));
    if ((*(float *)((a4 + 0x38))) > (*(float *)((t0 + 0x1280)))) {
        *(float *)((a4 + 0x38)) = (*(float *)((t0 + 0x1280)));
        u0 = (*(float *)((a4 + 0x5C)));
        u0 *= -1.0f;
        *(float *)((a4 + 0x5C)) = u0;
        t1 = 0x5C;
    } else {
        t2 = 0x38;
        if (!((*(float *)((a4 + 0x38))) > (*(float *)((t0 + 0x1274))))) {
            *(float *)((a4 + 0x38)) = (*(float *)((t0 + 0x1274)));
            u0 = (*(float *)((a4 + 0x5C)));
            u0 *= -1.0f;
            *(float *)((a4 + 0x5C)) = u0;
            t2 = 0x5C;
        }
        t1 = t2;
    }
    return t1;
}
