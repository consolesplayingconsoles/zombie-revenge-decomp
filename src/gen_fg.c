/* Straight-line functions with calls and guards (batch gen_fg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0cc3f8(int);
int FUN_0c0e19aa(int, int, int);
int FUN_0c0e19d0(int);
int FUN_0c05ef0c(int a4, int a5);
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_int { char p[0x1E8]; int v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1EC_uint { char p[0x1EC]; unsigned int v; };
struct o1F8_uint { char p[0x1F8]; unsigned int v; };
struct o21C_int { char p[0x21C]; int v; };
struct o21C_uint { char p[0x21C]; unsigned int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o23C_uint { char p[0x23C]; unsigned int v; };
struct o248_uint { char p[0x248]; unsigned int v; };
struct o348_int { char p[0x348]; int v; };
struct o350_int { char p[0x350]; int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };


int FUN_0c05ef0c(int a4, int a5)
{
    int t1;
    int t3;
    int t5;
    int t12;
    int t20;
    int t21;

    t1 = *(int *)(((((((struct o350_int *)(a4))->v)) << 2) + 0xC2475D4));
    if (((((struct o348_int *)(a4))->v)) == 0) {
        return 0x348;
    }
    t3 = (((struct o21C_int *)(t1))->v);
    (((struct o21C_uint *)(t1))->v) = (t3 - 1);
    if ((int)t3 <= 0) {
        return 0x21C;
    }
    t5 = FUN_0c0e19aa(0xC05F07C, 0x2BC, (*(int *)0xC23ECE4));
    FUN_0c0e19d0(t5);
    (((struct oBC_uint *)(t5))->v) = ((((struct oBC_int *)(a4))->v));
    *(unsigned int *)(((0x200 + t5) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x2)));
    t12 = 0x0;
    if ((*(signed char *)((a5 + 0x4))) != 0) {
        t12 = ((((struct o1EC_int *)(a4))->v));
    }
    (((struct o1EC_uint *)(t5))->v) = t12;
    *(unsigned int *)(((0x1E8 + t5) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x3)));
    *(unsigned int *)(((0x1F4 + t5) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x4)));
    *(unsigned int *)(((0x204 + t5) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x5)));
    (((struct o1E4_float *)(t5))->v) = ((((struct oC_float *)(a5))->v));
    *(unsigned int *)(((0x1FC + t5) + 0x0)) = (unsigned char)(*(signed char *)((a5 + 0x1)));
    (((struct o1F8_uint *)(t5))->v) = (unsigned char)(*(signed char *)((a5 + 0x0)));
    (((struct o22C_uint *)(t5))->v) = 0x14;
    t20 = (((struct oBC_int *)(a4))->v);
    t21 = (((struct o1E8_int *)(t5))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t5 + 0x30)) = *(struct mv3 *)((((((((t20 << 1) + t20) << 2) << 2) << 2) + 0xC23F268) + (((t21 << 1) + t21) << 2))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t5 + 0x3C)) = *(struct mv3 *)((t5 + 0x30)); }
    (((struct o220_uint *)(t5))->v) = 0x125B;
    (((struct o23C_uint *)(t5))->v) = 0x100;
    (((struct o248_uint *)(t5))->v) = 0xC8;
    return FUN_0c0cc3f8(0xA30A9);
}
