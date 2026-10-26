/* Straight-line functions with calls and guards (batch gen_dr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07c570(int, float, float, float);
int FUN_0c0c47ae(int);
int FUN_0c0c4898(int, float);
int FUN_0c0dcc70(float, float, float);
int FUN_0c0e19f2(int, int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int FUN_0c07c664(int a4, int a5, int a6, int a7);

int FUN_0c07c664(int a4, int a5, int a6, int a7)
{
    int t0;
    int t11;
    int t40;
    int t48;
    int t61;
    int t76;
    int t84;
    int t92;
    int t103;

    t0 = *(short *)((a4 + 0x32));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    *(float *)((a4 + 0x7C)) = ((*(float *)((a4 + 0x7C))) - 0.049999997f);
                    *(float *)((a4 + 0x78)) = ((*(float *)((a4 + 0x78))) + (*(float *)(((0x7C + a4) + 0x0))));
                    *(unsigned short *)((a4 + 0x80)) = ((*(short *)((a4 + 0x80))) + 0x40);
                    *(unsigned short *)((a4 + 0x82)) = ((*(short *)((a4 + 0x82))) + 0x80);
                    *(float *)((a4 + 0x88)) = ((*(float *)((a4 + 0x88))) - (*(float *)(((0x8C + a4) + 0x0))));
                    t11 = *(short *)((a4 + 0x86));
                    *(unsigned short *)((a4 + 0x86)) = (t11 - 1);
                    if ((int)(short)(t11 - 1) <= 0) {
                        if ((*(int *)((a4 + 0xA8))) != 0) {
                            *(unsigned int *)(((*(int *)((a4 + 0xA8))) + 0xA4)) = 0x0;
                        }
                        FUN_0c0e19f2(0x4B, 0x80, a6, a7);
                    }
                    nlPushMatrix((a4 + 0x38));
                    FUN_0c0dcc70(0.0f, (*(float *)((a4 + 0x78))), 0.0f);
                    nlRotateAY((*(short *)((a4 + 0x82))));
                    nlRotateAX((*(short *)((a4 + 0x80))));
                    FUN_0c0c4898((*(short *)((a4 + 0x34))), (*(float *)((a4 + 0x88))));
                    t40 = *(short *)((a4 + 0xA2));
                    *(unsigned short *)((a4 + 0xA2)) = (t40 - 1);
                    if ((int)(short)(t40 - 1) > 0) {
                        FUN_0c07c570(0x0, (*(float *)((a4 + 0x9C))), (*(float *)((a4 + 0x94))), ((float)(*(short *)((a4 + 0xA2))) / 75.0f));
                    }
                    t48 = *(short *)((a4 + 0xA0));
                    *(unsigned short *)((a4 + 0xA0)) = (t48 - 1);
                    if ((int)(short)(t48 - 1) > 0) {
                        FUN_0c07c570(0x1, (*(float *)((a4 + 0x98))), (*(float *)((a4 + 0x90))), ((float)(*(short *)((a4 + 0xA0))) / 75.0f));
                    }
                    return nlPopMatrix(0x1);
                }
                return t0;
            }
            *(float *)((a4 + 0x7C)) = ((*(float *)((a4 + 0x7C))) - 0.049999997f);
            *(float *)((a4 + 0x78)) = ((*(float *)((a4 + 0x78))) + (*(float *)(((0x7C + a4) + 0x0))));
            *(unsigned short *)((a4 + 0x80)) = ((*(short *)((a4 + 0x80))) + 0x40);
            *(unsigned short *)((a4 + 0x82)) = ((*(short *)((a4 + 0x82))) + 0x80);
            t61 = *(short *)((a4 + 0x86));
            *(unsigned short *)((a4 + 0x86)) = (t61 - 1);
            if ((int)(short)(t61 - 1) <= 0) {
                *(unsigned short *)((a4 + 0x86)) = 0x19;
                *(float *)((a4 + 0x8C)) = 0.0399999991f;
                *(unsigned short *)((a4 + 0x32)) = ((*(short *)((a4 + 0x32))) + 0x1);
            }
            nlPushMatrix((a4 + 0x38));
            FUN_0c0dcc70(0.0f, (*(float *)((a4 + 0x78))), 0.0f);
            nlRotateAY((*(short *)((a4 + 0x82))));
            nlRotateAX((*(short *)((a4 + 0x80))));
            FUN_0c0c47ae((*(short *)((a4 + 0x34))));
            t76 = *(short *)((a4 + 0xA2));
            *(unsigned short *)((a4 + 0xA2)) = (t76 - 1);
            if ((int)(short)(t76 - 1) > 0) {
                FUN_0c07c570(0x0, (*(float *)((a4 + 0x9C))), (*(float *)((a4 + 0x94))), ((float)(*(short *)((a4 + 0xA2))) / 75.0f));
            }
            t84 = *(short *)((a4 + 0xA0));
            *(unsigned short *)((a4 + 0xA0)) = (t84 - 1);
            if ((int)(short)(t84 - 1) > 0) {
                FUN_0c07c570(0x1, (*(float *)((a4 + 0x98))), (*(float *)((a4 + 0x90))), ((float)(*(short *)((a4 + 0xA0))) / 75.0f));
            }
            return nlPopMatrix(0x1);
        }
        t92 = *(short *)((a4 + 0x86));
        *(unsigned short *)((a4 + 0x86)) = (t92 - 1);
        if ((int)(short)(t92 - 1) <= 0) {
            *(unsigned short *)((a4 + 0x86)) = 0x4B;
            if ((*(int *)((a4 + 0xA8))) != 0) {
                *(unsigned short *)((a4 + 0xA0)) = 0x4B;
            }
            *(unsigned short *)((a4 + 0x32)) = ((*(short *)((a4 + 0x32))) + 0x1);
        }
        nlPushMatrix((a4 + 0x38));
        FUN_0c0c47ae((*(short *)((a4 + 0x34))));
        t103 = *(short *)((a4 + 0xA2));
        *(unsigned short *)((a4 + 0xA2)) = (t103 - 1);
        if ((int)(short)(t103 - 1) <= 0) {
        } else {
            FUN_0c07c570(0x0, (*(float *)((a4 + 0x9C))), (*(float *)((a4 + 0x94))), ((float)(*(short *)((a4 + 0xA2))) / 75.0f));
        }
        return nlPopMatrix(0x1);
    }
    if ((*(int *)((a4 + 0xA4))) != 0) {
        if ((int)(*(short *)(((*(int *)((a4 + 0xA4))) + 0x32))) >= (int)0x2) {
            *(unsigned short *)((a4 + 0x86)) = 0xA;
            *(unsigned short *)((a4 + 0xA2)) = 0x4B;
            *(unsigned short *)((a4 + 0x32)) = ((*(short *)((a4 + 0x32))) + 0x1);
        }
    } else {
        *(unsigned short *)((a4 + 0x86)) = 0x4B;
        if ((*(int *)((a4 + 0xA8))) != 0) {
            *(unsigned short *)((a4 + 0xA0)) = 0x4B;
        }
        *(unsigned short *)((a4 + 0x32)) = ((*(short *)((a4 + 0x32))) + 0x2);
    }
    nlPushMatrix((a4 + 0x38));
    FUN_0c0c47ae((*(short *)((a4 + 0x34))));
    return nlPopMatrix(0x1);
}
