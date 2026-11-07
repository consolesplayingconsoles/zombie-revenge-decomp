/* Straight-line functions with calls and guards (batch gen_aeu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0e14c4(int);
int FUN_0c0e19d0(int);
int FUN_0c06f1cc(int a4, int a5);
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o80_float { char p[0x80]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_float { char p[0xA4]; float v; };
struct oA8_float { char p[0xA8]; float v; };
struct oAC_float { char p[0xAC]; float v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC0_float { char p[0xC0]; float v; };
struct oC4_uint { char p[0xC4]; unsigned int v; };


int FUN_0c06f1cc(int a4, int a5)
{
    register float u2;

    FUN_0c0e19d0(a4);
    (((struct oC4_uint *)(a4))->v) = a5;
    *(unsigned int *)(((0x84 + a4) + 0x0)) = (FUN_0c0e14c4(0x0));
    u2 = *(float *)0xC06F318;
    (((struct o38_float *)(a4))->v) = u2;
    (((struct o3C_float *)(a4))->v) = 1.0f;
    (((struct o40_uint *)(a4))->v) = 0x0;
    (((struct o44_uint *)(a4))->v) = 0x1;
    (((struct o48_float *)(a4))->v) = u2;
    (((struct o4C_float *)(a4))->v) = 1.0f;
    (((struct o50_uint *)(a4))->v) = 0x6100;
    (((struct o54_uint *)(a4))->v) = 0x2;
    (((struct o58_float *)(a4))->v) = u2;
    (((struct o5C_float *)(a4))->v) = 1.0f;
    (((struct o60_uint *)(a4))->v) = 0xB000;
    (((struct o64_uint *)(a4))->v) = 0x3;
    (((struct o68_float *)(a4))->v) = 0.0f;
    (((struct o6C_float *)(a4))->v) = (*(float *)0xC06F320);
    (((struct o70_uint *)(a4))->v) = 0x0;
    (((struct o74_uint *)(a4))->v) = 0x1;
    (((struct o78_float *)(a4))->v) = (*(float *)0xC06F324);
    (((struct o7C_float *)(a4))->v) = 1.0f;
    (((struct o80_float *)(a4))->v) = (1.0f + 1.0f);
    (((struct o88_float *)(a4))->v) = (*(float *)0xC06F328);
    (((struct o8C_float *)(a4))->v) = (*(float *)0xC06F32C);
    (((struct o94_float *)(a4))->v) = (*(float *)0xC06F330);
    (((struct o98_float *)(a4))->v) = (*(float *)0xC06F334);
    (((struct oC0_float *)(a4))->v) = (*(float *)0xC06F338);
    (((struct o9C_float *)(a4))->v) = (*(float *)0xC06F33C);
    (((struct oA4_float *)(a4))->v) = (*(float *)0xC06F340);
    (((struct oA8_float *)(a4))->v) = (*(float *)0xC06F344);
    (((struct oB0_float *)(a4))->v) = (*(float *)0xC06F348);
    (((struct oA0_float *)(a4))->v) = (*(float *)0xC06F34C);
    (((struct oAC_float *)(a4))->v) = (*(float *)0xC06F350);
    return 0xAC;
}
