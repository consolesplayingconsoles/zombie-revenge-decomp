/* Straight-line functions with calls and guards (batch gen_zx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c47ae(int);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19f2(int, int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int FUN_0c058308(int a4, int a5, int a6, int a7);

int FUN_0c058308(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(int *)((((*(int *)((a4 + 0x88))) << 2) + 0xC246FF0));
    t1 = *(int *)((a4 + 0xA0));
    *(unsigned int *)((a4 + 0xA0)) = (t1 - 1);
    if ((int)(t1 - 1) <= 0) {
        FUN_0c0e19f2(a4, a5, a6, a7);
    }
    if ((int)(*(int *)((a4 + 0xA0))) < (int)0x3C) {
        t1 = *(int *)0xC23A258;
        if ((t1 & 1) == 0) {
            if (t0 != 0) {
                nlPushMatrix(0x0);
                nlUnitMatrix();
                FUN_0c0dcc70((*(float *)((t0 + 0x22C))), (*(float *)((t0 + 0x230))), (*(float *)((t0 + 0x234))));
                nlRotateAY(((*(short *)((t0 + 0x222))) + (*(short *)((t0 + 0x228)))));
                nlRotateAX(((*(short *)((t0 + 0x220))) + (*(short *)((t0 + 0x226)))));
                nlRotateAZ((*(short *)((t0 + 0x22A))));
                u0 = *(float *)0xC058450;
                if ((*(int *)((a4 + 0x84))) == 0) {
                    FUN_0c0dcc70(0.0f, u0, (*(float *)0xC058454));
                    nlRotateAY(0x8000);
                } else {
                    FUN_0c0dcc70(0.0f, u0, 1.0f);
                }
                FUN_0c0c47ae(0x125E);
                return nlPopMatrix(0x1);
            }
            return t1;
        }
        return t1;
    }
    if (t0 != 0) {
        nlPushMatrix(0x0);
        nlUnitMatrix();
        FUN_0c0dcc70((*(float *)((t0 + 0x22C))), (*(float *)((t0 + 0x230))), (*(float *)((t0 + 0x234))));
        nlRotateAY(((*(short *)((t0 + 0x222))) + (*(short *)((t0 + 0x228)))));
        nlRotateAX(((*(short *)((t0 + 0x220))) + (*(short *)((t0 + 0x226)))));
        nlRotateAZ((*(short *)((t0 + 0x22A))));
        u0 = *(float *)0xC058450;
        if ((*(int *)((a4 + 0x84))) == 0) {
            FUN_0c0dcc70(0.0f, u0, (*(float *)0xC058454));
            nlRotateAY(0x8000);
        } else {
            FUN_0c0dcc70(0.0f, u0, 1.0f);
        }
        FUN_0c0c47ae(0x125E);
        return nlPopMatrix(0x1);
    }
    return 0xA0;
}
