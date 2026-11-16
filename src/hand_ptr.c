/* Functions reached only through the handler table at 0C101400 (entries 9 and 10). They sit after FUN_0c07fc50 and were not
   listed: the movable build left those two table words at their original addresses, inside other functions. Written by hand from
   the original's code, proven by tools/equiv.py on the cases in tests/hand_ptr/. */

int FUN_0c07e5c8(int);
int FUN_0c0dc5a0(void);
int FUN_0c0dcca0(int);
int nlRotateAY(int);
int FUN_0c0db470(int, int);
int nlPopMatrix(int);
int FUN_0c07e636(int, int);
int FUN_0c07e2b0(int);
int FUN_0c07fdbc(int a4);

int FUN_0c07fdbc(int a4)
{
    int node;
    int v;
    float f;

    node = *(int *)(0xC246FF0 + ((*(int *)(a4 + 0x3B4)) << 2));
    FUN_0c07e5c8(a4);
    FUN_0c0dc5a0();
    FUN_0c0dcca0((*(int *)(a4 + 0x3B4)) * 192 + 0xC23F268 + 12);
    nlRotateAY(*(short *)(node + 110));
    FUN_0c0db470(0xC1013F4, a4 + 0x284);
    nlPopMatrix(1);
    f = (float)FUN_0c07e636(*(int *)(a4 + 0x3D8), *(short *)(node + 110));
    v = *(int *)(a4 + 0x3D4);
    *(int *)(a4 + 0x3D4) = (int)((float)v + (float)(-4551 - v) * 0.099999994f);
    *(float *)(a4 + 0x29C) = _builtin_fabsf(f) * 20.0f / 32767.0f + 25.0f;
    if (_builtin_fabsf(f) > 384.0f) {
        if (f > 0.0f) {
            *(int *)(a4 + 0x3D8) = *(int *)(a4 + 0x3D8) + 0x180;
        } else {
            *(int *)(a4 + 0x3D8) = *(int *)(a4 + 0x3D8) - 0x180;
        }
    } else {
        *(int *)(a4 + 0x3D8) = (int)((float)(*(int *)(a4 + 0x3D8)) + f * 0.099999994f);
    }
    return FUN_0c07e2b0(a4);
}

int FUN_0c07fef0(int a4, float f4);

int FUN_0c07fef0(int a4, float f4)
{
    int base;
    int state;
    int n;
    float t;

    base = 0xC206A24 + ((*(short *)((*(int *)0xC23ECFC) + 2)) << 6);
    state = *(int *)0xC247D00;
    t = f4;                                             /* states past 2 leave fr4 as the caller passed it */
    if (state == 0 || state == 1) {
        t = state == 0 ? 5.0f : 15.0f;
        *(int *)(a4 + 0x3DC) = 0x1C71;
        *(int *)(a4 + 0x3E0) = *(int *)(base + 60) + (state == 0 ? 0x671C : 0x71C7);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x284) = *(struct mv3 *)0xC23F4B4; }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x278) = *(struct mv3 *)0xC23F4B4; }
        n = *(int *)(a4 + 0x3FC) + 1;
        *(int *)(a4 + 0x3FC) = n;
        if (n > (state == 0 ? 95 : 161)) {
            *(int *)0xC247D00 = *(int *)0xC247D00 + 1;
            *(int *)(a4 + 0x3FC) = 0;
        }
    } else if (state == 2) {
        t = 60.0f;
        *(int *)(a4 + 0x3DC) = -5461;
        *(int *)(a4 + 0x3E0) = *(int *)(base + 60) + 32767;
        *(float *)(a4 + 0x284) = ((((*(float *)base) + (*(float *)(base + 16))) + (*(float *)(base + 32))) + (*(float *)(base + 48))) * 0.25f;
        *(float *)(a4 + 0x288) = (*(float *)(base + 52)) * 0.799999952f;
        *(float *)(a4 + 0x28C) = ((((*(float *)(base + 8)) + (*(float *)(base + 24))) + (*(float *)(base + 40))) + (*(float *)(base + 56))) * 0.25f;
    }
    if (*(int *)(a4 + 0x3F4) != 0) {
        *(float *)(a4 + 0x29C) = t;
        *(int *)(a4 + 0x3D4) = *(int *)(a4 + 0x3DC);
        *(int *)(a4 + 0x3D8) = *(int *)(a4 + 0x3E0);
    } else {
        *(float *)(a4 + 0x29C) = 0.049999997f * (t - *(float *)(a4 + 0x29C)) + *(float *)(a4 + 0x29C);
        n = FUN_0c07e636(*(int *)(a4 + 0x3D4), *(int *)(a4 + 0x3DC));
        *(int *)(a4 + 0x3D4) = (int)((float)(*(int *)(a4 + 0x3D4)) + (float)n * 0.04f);
        n = FUN_0c07e636(*(int *)(a4 + 0x3D8), *(int *)(a4 + 0x3E0));
        *(int *)(a4 + 0x3D8) = (int)((float)(*(int *)(a4 + 0x3D8)) + (float)n * 0.04f);
    }
    return FUN_0c07e2b0(a4);
}

/* Object type 79's setup (gen_di.c dispatches types 77-80 by address): code in the gap after FUN_0c041e90, not listed, so the
   movable build put a data copy (zeros) where it is called and the object ran 0x0000. */
void FUN_0c088ec4(int a4, int a5);
void FUN_0c041ee8(int a4);

void FUN_0c041ee8(int a4)
{
    *(int *)(a4 + 0x2C4) = *(int *)(a4 + 0x2BC);
    *(int *)(a4 + 0x4E4) = 0xB4;
    FUN_0c088ec4(a4, *(int *)(a4 + 0x4E4));
}

/* An entry of the episode 2 start list (0C1A422C), after FUN_0c070b90 and not listed: the build's kept copy loaded its position table
   from past the copy (FUN_0c0685a4's address in place of 0C200414), and FUN_0c070b90 copied the object's position from code: an
   address error on the console at the start of episode 2. Its five neighbours (FUN_0c070c3a ...) are the same call with other tables. */
int FUN_0c070b90(int, int);
int FUN_0c070c34(void);

int FUN_0c070c34(void)
{
    return FUN_0c070b90(0xC200414, 0x0);
}
