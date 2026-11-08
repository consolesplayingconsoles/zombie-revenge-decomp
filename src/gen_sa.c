/* Straight-line functions with calls and guards (batch gen_sa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int copy_device(void);
int kdRecvFrame(void);
extern int mpdrv_frame_send();
int kdSendFrame(int a4, int a5);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int kdSendFrame(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = 0x0;
    if (((((struct o0_int *)0xC9542AC)->v)) == 0) {
    } else {
        (((struct o14_uint *)0xC9542AC)->v) = (((((struct o18_int *)0xC9542AC)->v)) - 1);
        (((struct o18_uint *)0xC9542AC)->v) = 0x0;
        if (((((struct o10_int *)0xC9542AC)->v)) != 0) {
            (((struct o1C_uint *)0xC9542AC)->v) = (((((struct o0_int *)0xA05F80C4)->v)) & 0x3FF);
            (((struct o20_uint *)0xC9542AC)->v) = ((short)((unsigned int)((((struct o0_int *)0xA05F80C4)->v)) >> 16) & 0x3FF);
        }
        (((struct o10_uint *)0xC9542AC)->v) = 0x0;
        if (((((struct oC_int *)0xC9542AC)->v)) != 0) {
            *(unsigned int *)0xA05F8040 = ((((struct o8_int *)0xC9542AC)->v));
            (((struct o24_uint *)0xA05F80C4)->v) = (((((struct o24_int *)0xA05F80C4)->v)) & 0xFFFFFFF7);
            (((struct oC_uint *)0xC9542AC)->v) = 0x0;
        }
        if (((*(int *)0xA05F6908) & 0xF00) != 0) {
            if (((*(int *)0xA05F6908) & 0x800) != 0) {
                (((struct o1C_uint *)0xC95402C)->v) = (((((struct o1C_int *)0xC95402C)->v)) + 0x1);
                if (((((struct o38_int *)0xC95402C)->v)) != 0) {
                    t1 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC95402C)->v))))(0x1, 0xFFFFFFFE, ((((struct o8_int *)0xC95402C)->v)), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x400) != 0) {
                (((struct o20_uint *)0xC95402C)->v) = (((((struct o20_int *)0xC95402C)->v)) + 0x1);
                if (((((struct o38_int *)0xC95402C)->v)) != 0) {
                    t1 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC95402C)->v))))(0x1, 0xFFFFFFFD, ((((struct o8_int *)0xC95402C)->v)), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x200) != 0) {
                (((struct o24_uint *)0xC95402C)->v) = (((((struct o24_int *)0xC95402C)->v)) + 0x1);
                if (((((struct o38_int *)0xC95402C)->v)) != 0) {
                    t1 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC95402C)->v))))(0x1, 0xFFFFFFFC, ((((struct o8_int *)0xC95402C)->v)), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x100) != 0) {
                (((struct o28_uint *)0xC95402C)->v) = (((((struct o28_int *)0xC95402C)->v)) + 0x1);
                if (((((struct o38_int *)0xC95402C)->v)) != 0) {
                    t1 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC95402C)->v))))(0x1, 0xFFFFFFFB, ((((struct o8_int *)0xC95402C)->v)), (*(int *)0xA05F6908));
                }
            }
            *(unsigned int *)0xA05F6908 = 0xF00;
            kdRecvFrame();
            t1 = ((int (*)(void))(mpdrv_frame_send))();
            if ((int)t1 >= 0) {
                copy_device();
            } else {
                if (((((struct o38_int *)0xC95402C)->v)) != 0) {
                    t0 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC95402C)->v))))(0x1, 0xFFFFFFFA, ((((struct o8_int *)0xC95402C)->v)), t1);
                }
            }
            t0 = t1;
        } else {
            t1 = ((int (*)(int))(mpdrv_frame_send))(0xC9542B8);
            if ((int)t1 >= 0) {
                (((struct o30_uint *)0xC9542AC)->v) = 0x0;
                *(unsigned short *)((((((((struct o4_int *)0xC9542AC)->v)) << 1) + 0xC954060) + 0x0)) = 0x0;
                *(unsigned short *)((((((((struct o4_int *)0xC9542AC)->v)) << 1) + 0xC954058) + 0x0)) = ((*(int *)0xA05F810C) & 0x3FF);
                copy_device();
                (((struct o0_uint *)0xC95402C)->v) = (((((struct o0_int *)0xC95402C)->v)) + 0x1);
            } else {
                kdRecvFrame();
                (((struct o10_uint *)0xC95402C)->v) = (((((struct o10_int *)0xC95402C)->v)) + 0x1);
                if (((((struct o38_int *)0xC95402C)->v)) != 0) {
                    t3 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC95402C)->v))))(0x1, 0xFFFFFFF9, ((((struct o8_int *)0xC95402C)->v)), t1);
                }
            }
            t0 = t1;
        }
    }
    return t0;
}
