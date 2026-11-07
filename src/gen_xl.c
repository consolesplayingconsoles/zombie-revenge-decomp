/* Straight-line functions with calls and guards (batch gen_xl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e5f1c(int);
void FUN_0c058e7c(int a4, int a5);

void FUN_0c058e7c(int a4, int a5)
{
    register int t0;
    register int t1;

    t1 = *(int *)0xC20499C;
    if ((a4 != 22) && ((a4 != 23) && (a4 != 24))) {
        if ((a4 != 25) && ((a4 != 26) && (a4 != 27))) {
            if (a4 != 28) {
            } else {
                FUN_0c0e5f1c(a4);
            }
        } else {
            if ((*(int *)0xC1FF88C) != 0) {
            } else {
                if (t1 == 0) {
                    FUN_0c0e5f1c(a4);
                } else {
                    t1 = FUN_0c0e5f1c(a4);
                    if ((int)(t1 + 0xB) < (int)0xC) {
                        *(volatile int *)0xC23EDC0;
                        
                    }
                }
            }
        }
    } else {
        t1 = FUN_0c0e5f1c(a4);
        if (t1 != 0) {
        } else {
            if (t0 != 0) {
                *(volatile int *)0xC23EDC0;
            }
        }
    }
}
