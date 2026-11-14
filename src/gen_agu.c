/* Straight-line functions with calls and guards (batch gen_agu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10A8_int { char p[0x10A8]; int v; };
struct o10A8_uint { char p[0x10A8]; unsigned int v; };
struct o10AC_uint { char p[0x10AC]; unsigned int v; };
struct o10C0_int { char p[0x10C0]; int v; };
struct o10D0_int { char p[0x10D0]; int v; };
struct o10F4_int { char p[0x10F4]; int v; };
struct o210_int { char p[0x210]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oFC0_uint { char p[0xFC0]; unsigned int v; };
struct oFC4_int { char p[0xFC4]; int v; };
struct oFC4_uint { char p[0xFC4]; unsigned int v; };
struct oFC8_int { char p[0xFC8]; int v; };
struct oFC8_uint { char p[0xFC8]; unsigned int v; };
struct oFCC_uint { char p[0xFCC]; unsigned int v; };
int FUN_0c04a258(int);
int FUN_0c04aa34(int, int, int, int);
int FUN_0c04b280(int);
int FUN_0c04b344(int, int);
int FUN_0c04b564(int, int);
int FUN_0c04b8a8(int);
int FUN_0c04b8e4(int, int);
int FUN_0c04b982(int);
int FUN_0c04ba58(int);
int FUN_0c04bae4(int, int);
int FUN_0c04bb86(int, int);
int FUN_0c04bc36(int);
int FUN_0c04bc68(int, int);
int FUN_0c04bd40(int, int);
int FUN_0c04bdb6(int, int);
int FUN_0c04bde0(int);
int FUN_0c04be14(int);
int FUN_0c04bec2(int);
int FUN_0c04bee6(int);
int FUN_0c04bf48(int, int);
int FUN_0c04bfd8(int);
int FUN_0c04c002(int);
int FUN_0c04c078(int);
int FUN_0c04c09c(int);
int FUN_0c04c0de(int);
int FUN_0c04c120(int);
int FUN_0c04c174(int);
int FUN_0c04c19e(int);
int FUN_0c04c1e0(int);
int FUN_0c04c204(int);
int FUN_0c04c236(int);
int FUN_0c04c378(int);
int FUN_0c04c41c(int);
int FUN_0c04c42e(int, int);
int FUN_0c04c514(int);
int FUN_0c04c62c(int, int);
int FUN_0c04c8d4(int);
int FUN_0c04caf8(int);
int FUN_0c04cc54(int, int);
int FUN_0c04ceca(int, int);
int FUN_0c04cf44(int);
int FUN_0c04d094(int, int);
int FUN_0c04d112(int);
int FUN_0c04d13c(int, int);
int FUN_0c04d1ce(int);
int FUN_0c04d1f8(int);
int FUN_0c04d270(int, int);
int FUN_0c04d2ec(int);
int FUN_0c04d30c(int);
int FUN_0c04d34a(int, int);
int FUN_0c04d402(int);
int FUN_0c04d448(int, int, int, int);
int FUN_0c04d812(int);
int FUN_0c04d8e0(int, int);
int FUN_0c04d9dc(int);
int FUN_0c04da18(int, int);
int FUN_0c04daec(int);
int FUN_0c04dce8(int, int);
int FUN_0c04dec8(int, int);
int FUN_0c04dfdc(int);
int FUN_0c04e03a(int);
int FUN_0c04e1cc(int);
int FUN_0c04e236(int);
int FUN_0c04e324(int, int);
int FUN_0c04e3da(int, int);
int FUN_0c04e402(int, int);
int FUN_0c04e506(int, int);
int FUN_0c04e608(int);
int FUN_0c04e670(int);
int FUN_0c04e782(int);
int FUN_0c04e80c(int);
int FUN_0c04e862(int);
int FUN_0c04e972(int);
int FUN_0c04ea16(int, int);
int FUN_0c04ebcc(int);
int FUN_0c04ec34(int);
int FUN_0c04ecba(int);
int FUN_0c04ed20(int, int);
int FUN_0c04f188(int);
int FUN_0c04f414(int, int, int);
int FUN_0c04f608(int, int, int);
int FUN_0c04fe58(int, int);
int FUN_0c04ff94(int, int);
int FUN_0c04fffe(int, int);
int FUN_0c0500dc(int);
int FUN_0c050b9e(int, int);
int FUN_0c050c78(int, int);
int FUN_0c050cd0(int);
int FUN_0c050dac(int);
int FUN_0c050df4(int);
int FUN_0c05399c(int);
int FUN_0c057ec8(int);
int FUN_0c0a5cc6(int);
int FUN_0c0a5dfa(void);
int FUN_0c0a5fdc(void);
int FUN_0c0c497c(int, float);
int FUN_0c0c49b0(int);
int FUN_0c0da2e0(void);
float FUN_0c0da410(int);
int FUN_0c0e19f2(void);
int buIsFormat(int);
int check_fat_all(int, int, int);
int get_fat(int, int);
int mpdrv_init_globals(void);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_end_ns(void);
int pdGetPeripheral(int);
int search_dir_by_startfat(int, int);
int search_fat(int, int);
int search_fat_free(int, int);
int search_fat_used(int);
int set_fat(int, int);
int vmsfs_read_retry(int, int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsfs_xfind(int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int, int, int);
int write_fat(int);
void FUN_0c04a318(int a4, int a5, float f4);
int mpdrv_init_ex(int a4, int a5, int a6, int a7);
int vmsfs_xdefrag(int a4, int a5, int a6, int a7);
int FUN_0c074112(int a4, int a5, int a6, int a7);
int FUN_0c0a6356(void);

void FUN_0c04a318(int a4, int a5, float f4)
{
    int stk[5];
    register int t2;
    register int t3;
    register int t6;
    register int t31;
    register int t134;

    *(unsigned int *)(((int)stk + 0)) = ((((struct oBC_int *)(a4))->v));
    FUN_0c05399c(a4);
    t2 = *(int *)(((int)stk + 0));
    t3 = (((struct o210_int *)(a4))->v);
    if ((unsigned int)(t3 - 1) >= (unsigned int)0x9D) {
        FUN_0c04a258(a4);
        if ((*(int *)(((t2 << 2) + 0xC246FD8))) == 0) {
            t6 = FUN_0c04bf48(a4, a5);
            if (t6 == 0) {
                FUN_0c04ed20(a4, a5);
                FUN_0c04fe58(a4, a5);
                FUN_0c04d8e0(a4, a5);
                FUN_0c04da18(a4, a5);
                FUN_0c057ec8(a4);
                FUN_0c04bc68(a4, a5);
                FUN_0c04dce8(a4, a5);
                FUN_0c04e324(a4, a5);
                FUN_0c04e782(a4);
            }
        } else {
            FUN_0c04c62c(a4, a5);
        }
        FUN_0c04c42e(a4, a5);
        FUN_0c04be14(a4);
        FUN_0c04aa34(a4, a5, 0x0, 0x0);
    } else {
        switch (((t3 - 1) << 1)) {
            case 0:
            {
                FUN_0c04d8e0(a4, a5);
                FUN_0c04da18(a4, a5);
                FUN_0c04aa34(a4, a5, 0x0, 0x0);
                FUN_0c04c62c(a4, a5);
            }
                break;
            case 2:
            case 4:
            case 10:
            case 18:
            case 22:
            case 24:
            case 26:
            case 28:
            case 30:
            case 32:
            case 34:
            case 36:
            case 38:
            case 40:
            case 42:
            case 44:
            case 46:
            case 48:
            case 50:
            case 52:
            case 54:
            case 56:
            case 58:
            case 60:
            case 62:
            case 72:
            case 74:
            case 76:
            case 78:
            case 84:
            case 86:
            case 90:
            case 96:
            case 98:
            case 100:
            case 102:
            case 104:
            case 106:
            case 108:
            case 126:
            case 128:
            case 138:
            case 142:
            case 148:
            case 150:
            case 152:
            case 186:
            case 202:
            case 206:
            case 208:
            case 216:
            case 218:
            case 220:
            case 222:
            case 234:
            case 236:
            case 240:
            case 250:
            case 254:
            case 256:
            case 258:
            case 270:
            case 272:
            case 274:
            case 276:
            case 278:
            case 280:
            case 282:
            case 284:
            case 286:
            case 288:
            case 290:
            case 292:
            case 294:
            case 296:
            case 298:
            case 300:
            case 302:
            case 304:
            {
                FUN_0c04a258(a4);
                if ((*(int *)(((t2 << 2) + 0xC246FD8))) == 0) {
                    t31 = FUN_0c04bf48(a4, a5);
                    if (t31 == 0) {
                        FUN_0c04ed20(a4, a5);
                        FUN_0c04fe58(a4, a5);
                        FUN_0c04d8e0(a4, a5);
                        FUN_0c04da18(a4, a5);
                        FUN_0c057ec8(a4);
                        FUN_0c04bc68(a4, a5);
                        FUN_0c04dce8(a4, a5);
                        FUN_0c04e324(a4, a5);
                        FUN_0c04e782(a4);
                    }
                } else {
                    FUN_0c04c62c(a4, a5);
                }
                FUN_0c04c42e(a4, a5);
                FUN_0c04be14(a4);
                FUN_0c04aa34(a4, a5, 0x0, 0x0);
            }
                break;
            case 6:
            {
                FUN_0c04e1cc(a4);
            }
                break;
            case 8:
            {
                FUN_0c04e236(a4);
            }
                break;
            case 12:
            {
                FUN_0c04c42e(a4, a5);
                FUN_0c050b9e(a4, a5);
            }
                break;
            case 14:
            {
                FUN_0c050dac(a4);
            }
                break;
            case 16:
            {
                FUN_0c050df4(a4);
            }
                break;
            case 20:
            {
                FUN_0c050c78(a4, a5);
            }
                break;
            case 64:
            {
                FUN_0c04ea16(a4, a5);
            }
                break;
            case 66:
            {
                FUN_0c04ebcc(a4);
            }
                break;
            case 68:
            {
                FUN_0c04ec34(a4);
            }
                break;
            case 70:
            {
                FUN_0c04ecba(a4);
            }
                break;
            case 80:
            {
                FUN_0c04e03a(a4);
            }
                break;
            case 82:
            {
                FUN_0c04c42e(a4, a5);
                FUN_0c04daec(a4);
            }
                break;
            case 88:
            {
                FUN_0c04e80c(a4);
            }
                break;
            case 92:
            {
                FUN_0c04e862(a4);
            }
                break;
            case 94:
            {
                FUN_0c04e972(a4);
            }
                break;
            case 110:
            {
                FUN_0c04c236(a4);
            }
                break;
            case 112:
            {
                FUN_0c04c1e0(a4);
            }
                break;
            case 114:
            {
                FUN_0c04c204(a4);
            }
                break;
            case 116:
            {
                FUN_0c04c8d4(a4);
            }
                break;
            case 118:
            {
                FUN_0c04caf8(a4);
            }
                break;
            case 120:
            {
                FUN_0c04cc54(a4, a5);
            }
                break;
            case 122:
            {
                FUN_0c04ceca(a4, a5);
            }
                break;
            case 124:
            {
                FUN_0c04cf44(a4);
            }
                break;
            case 130:
            {
                FUN_0c04d448(a4, a5, 0x0, 0x0);
            }
                break;
            case 132:
            {
                FUN_0c04d812(a4);
            }
                break;
            case 134:
            {
                FUN_0c04d094(a4, a5);
            }
                break;
            case 136:
            {
                FUN_0c04d112(a4);
            }
                break;
            case 140:
            {
                FUN_0c04d13c(a4, a5);
            }
                break;
            case 144:
            {
                FUN_0c04d1ce(a4);
            }
                break;
            case 146:
            {
                FUN_0c04d1f8(a4);
            }
                break;
            case 154:
            {
                FUN_0c04d270(a4, a5);
            }
                break;
            case 156:
            {
                FUN_0c04d2ec(a4);
            }
                break;
            case 158:
            {
                FUN_0c04d30c(a4);
            }
                break;
            case 160:
            {
                FUN_0c04d34a(a4, a5);
            }
                break;
            case 162:
            {
                FUN_0c04d402(a4);
            }
                break;
            case 164:
            {
                FUN_0c04bec2(a4);
            }
                break;
            case 166:
            {
                FUN_0c04bee6(a4);
            }
                break;
            case 168:
            {
                FUN_0c04bfd8(a4);
            }
                break;
            case 170:
            {
                FUN_0c04c078(a4);
            }
                break;
            case 172:
            {
                FUN_0c04c174(a4);
            }
                break;
            case 174:
            {
                FUN_0c04c002(a4);
            }
                break;
            case 176:
            {
                FUN_0c04c09c(a4);
            }
                break;
            case 178:
            {
                FUN_0c04c0de(a4);
            }
                break;
            case 180:
            {
                FUN_0c04c120(a4);
            }
                break;
            case 182:
            {
                FUN_0c04c19e(a4);
            }
                break;
            case 184:
            {
            }
                break;
            case 188:
            {
                FUN_0c04b344(a4, a5);
            }
                break;
            case 190:
            {
                FUN_0c04b564(a4, a5);
            }
                break;
            case 192:
            {
                FUN_0c04b8a8(a4);
            }
                break;
            case 194:
            {
                FUN_0c04b8e4(a4, a5);
            }
                break;
            case 196:
            {
                FUN_0c04b982(a4);
            }
                break;
            case 198:
            {
                FUN_0c04ba58(a4);
            }
                break;
            case 200:
            {
                FUN_0c04f608(a4, 0x0, 0x0);
            }
                break;
            case 204:
            {
                FUN_0c04f414(a4, 0x0, 0x0);
            }
                break;
            case 210:
            {
                FUN_0c04bae4(a4, a5);
            }
                break;
            case 212:
            {
                FUN_0c04bb86(a4, a5);
            }
                break;
            case 214:
            {
                FUN_0c04bc36(a4);
            }
                break;
            case 224:
            {
                FUN_0c04bd40(a4, a5);
            }
                break;
            case 226:
            {
                FUN_0c04bdb6(a4, a5);
            }
                break;
            case 228:
            {
                FUN_0c04bde0(a4);
            }
                break;
            case 230:
            {
                FUN_0c04e608(a4);
            }
                break;
            case 232:
            {
                FUN_0c04e670(a4);
            }
                break;
            case 238:
            {
                FUN_0c04b280(a4);
            }
                break;
            case 242:
            {
                FUN_0c04c42e(a4, a5);
                FUN_0c04d8e0(a4, a5);
                FUN_0c04da18(a4, a5);
                FUN_0c04e3da(a4, a5);
            }
                break;
            case 244:
            {
                FUN_0c04e402(a4, a5);
            }
                break;
            case 246:
            {
                FUN_0c04e506(a4, a5);
            }
                break;
            case 248:
            {
                FUN_0c04c42e(a4, a5);
                FUN_0c04d9dc(a4);
            }
                break;
            case 252:
            {
                FUN_0c04c514(a4);
            }
                break;
            case 260:
            {
                FUN_0c04c378(a4);
            }
                break;
            case 262:
            {
                FUN_0c04c41c(a4);
            }
                break;
            case 264:
            {
                FUN_0c04f188(a4);
            }
                break;
            case 266:
            {
                FUN_0c04be14(a4);
                FUN_0c04dec8(a4, a5);
            }
                break;
            case 268:
            {
                FUN_0c04dfdc(a4);
            }
                break;
            case 306:
            {
                FUN_0c050cd0(a4);
            }
                break;
            case 308:
            {
                FUN_0c04ff94(a4, a5);
            }
                break;
            case 310:
            {
                FUN_0c04fffe(a4, a5);
            }
                break;
            default:
            {
                FUN_0c0500dc(a4);
            }
                break;
        }
    }
    t134 = *(int *)((((t2 << 2) + 0xC246FE0) + 0x0));
    *(unsigned int *)((((t2 << 2) + 0xC246FE0) + 0x0)) = (t134 + 0x1);
    if ((int)(t134 + 0x1) > (int)0x62) {
        *(unsigned int *)((0xC246FE0 + (t2 << 2))) = 0x62;
    }
}

int mpdrv_init_ex(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t4;
    register int t6;
    register int t12;
    register int t15;
    register int t20;
    register int t22;
    register int t25;
    register int t28;
    register int t30;
    register int t31;
    register int t32;
    register int t33;
    register int t35;
    register int t36;
    register int t45;
    register int t47;
    register int t49;
    register int t51;
    register int t53;
    register int t56;
    register int t57;
    int t58;
    register int t73;
    register int t74;
    register int t75;
    register int t76;
    register int t77;
    register int t78;
    register int t99;
    register int t88;
    register int t89;
    register int t90;
    register int t91;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)0xC98E18C = 0xC98D090;
    *(unsigned int *)0xC98E054 = a6;
    (((struct oFC8_uint *)((*(int *)0xC98E18C)))->v) = (*(int *)(((int)stk + 0)));
    if ((((((struct oFC4_int *)((*(int *)0xC98E18C)))->v)) & 0x1F) != 0) {
        t4 = *(int *)0xC98E18C;
        (((struct oFC4_uint *)(t4))->v) = (((((struct oFC4_int *)(t4))->v)) + 0x20);
        t6 = *(int *)0xC98E18C;
        (((struct oFC4_uint *)(t6))->v) = (((((struct oFC4_int *)(t6))->v)) & 0xFFFFFFE0);
    }
    t12 = *(int *)0xC98E18C;
    if ((((((struct oFC8_int *)(t12))->v)) & 0x1F) != 0) {
        (((struct oFC8_uint *)(t12))->v) = (((((struct oFC8_int *)(t12))->v)) + 0x20);
        t15 = *(int *)0xC98E18C;
        (((struct oFC8_uint *)(t15))->v) = (((((struct oFC8_int *)(t15))->v)) & 0xFFFFFFE0);
    }
    t20 = *(int *)0xC98E18C;
    (((struct oFC4_uint *)(t20))->v) = (((((struct oFC4_int *)(t20))->v)) | 0xA0000000);
    t22 = *(int *)0xC98E18C;
    (((struct oFC8_uint *)(t22))->v) = (((((struct oFC8_int *)(t22))->v)) | 0xA0000000);
    mpdrv_init_globals();
    t25 = 0x0;
    for (;;) {
        *(unsigned int *)((((0xFE8 + (*(int *)0xC98E18C)) + t25) + 0x0)) = 0x0;
        t28 = ((0xFE8 + (*(int *)0xC98E18C)) + t25);
        t25 = (t25 + 0x4);
        (((struct o60_uint *)(t28))->v) = 0x0;
        if ((unsigned int)t25 >= (unsigned int)0x60) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 8)));
    if ((int)a7 > 0) {
        t30 = 0x0;
        for (;;) {
            t31 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = (t31 + 0x4);
            t32 = *(int *)((((t31 + 0x4) - 4) + 0x0));
            t33 = t32;
            if ((t32 & 0x1F) != 0) {
                t33 = ((t32 + 0x20) & 0xFFFFFFE0);
            }
            t35 = *(int *)(((int)stk + 4));
            t30 = (t30 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = (t35 + 0x4);
            t36 = *(int *)((((t35 + 0x4) - 4) + 0x0));
            *(unsigned int *)((((0xFE8 + (*(int *)0xC98E18C)) + (t36 << 2)) + 0x0)) = (t33 | 0xA0000000);
            (((struct o60_uint *)(((t36 << 2) + (0xFE8 + (*(int *)0xC98E18C)))))->v) = ((t33 | 0xA0000000) + 0x400);
            if ((int)t30 >= (int)a7) {
                break;
            }
        }
    }
    t45 = *(int *)0xC98E18C;
    (((struct o10A8_uint *)(t45))->v) = ((((struct oFC4_int *)(t45))->v));
    t47 = *(int *)0xC98E18C;
    (((struct o10AC_uint *)(t47))->v) = (((a7 << 8) << 2) + ((((struct oFC4_int *)(t47))->v)));
    t49 = *(int *)0xC98E18C;
    (((struct oFCC_uint *)(t49))->v) = ((((struct o10A8_int *)(t49))->v));
    t51 = 0x0;
    for (;;) {
        t53 = ((0xF90 + (*(int *)0xC98E18C)) + t51);
        t51 = (t51 + 0x1);
        *(unsigned char *)((t53 + 0x0)) = 0x0;
        if ((int)t51 >= (int)0x18) {
            break;
        }
    }
    t57 = *(int *)(((int)stk + 8));
    if ((int)a7 > 0) {
        t56 = 0x0;
        for (;;) {
            t58 = *(int *)((t57 + 0x0));
            t57 = (t57 + 0x4);
            if (t58 != 0) {
                if ((t58 != 6) && ((t58 != 12) && (t58 != 18))) {
                    *(unsigned char *)(((t58 + (0xF90 + (*(int *)0xC98E18C))) + 0x0)) = 0x65;
                } else {
                    *(unsigned char *)(((t58 + (0xF90 + (*(int *)0xC98E18C))) + 0x0)) = 0x72;
                }
            } else {
                *(unsigned char *)(((t58 + (0xF90 + (*(int *)0xC98E18C))) + 0x0)) = 0x72;
            }
            t56 = (t56 + 0x1);
            if ((int)t56 >= (int)a7) {
                break;
            }
        }
    }
    t73 = 0xC2382C4;
    t74 = 0xC2382C4;
    t75 = 0x72;
    t76 = 0x65;
    t77 = 0xC2382C4;
    t78 = 0xC2382C4;
    for (;;) {
        if ((*(signed char *)((((0xF90 + (*(int *)0xC98E18C)) + (*(int *)((t78 + 0x0)))) + 0x0))) != 0) {
            t73 = (*(int *)((t77 + 0x0)));
            mpdrv_set_dreq_ns(t73);
        } else {
            t88 = t73;
            t89 = t74;
            t90 = t75;
            t91 = t76;
        }
        t78 = (t78 + 0x4);
        t73 = t88;
        t74 = t89;
        t75 = t90;
        t76 = t91;
        t77 = (t77 + 0x4);
        if ((unsigned int)t78 >= (unsigned int)0xC2382D4) {
            break;
        }
    }
    mpdrv_set_end_ns();
    (((struct oFC0_uint *)((*(int *)0xC98E18C)))->v) = 0x1;
    (((struct o8C_uint *)(((((struct o10F4_int *)((*(int *)0xC98E18C)))->v))))->v) = 0x6155404F;
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC98E18C)))->v)) + 0x10)) = 0x0;
    t99 = *(int *)0xC98E18C;
    (((struct o80_uint *)(((((struct o10F4_int *)(t99))->v))))->v) = (((((struct o10C0_int *)(t99))->v)) | ((((struct o10D0_int *)(t99))->v)));
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC98E18C)))->v)) + 0x14)) = 0x1;
    return 0x0;
}

int vmsfs_xdefrag(int a4, int a5, int a6, int a7)
{
    int stk[12];

    register int R2;
    register int R3;
    register int R6;
    register int R9;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_6 = a4;
    v0_3 = a5;
    *(unsigned int *)(((int)stk + 0)) = (v0_6 * 0x148);
    v0_1 = (v0_3);
    v0_2 = (((v0_6 * 0x148) + 0xC956768));
    v0_0 = (v0_6);
    if (((*(signed char *)((((v0_6 * 0x148) + 0xC956768) + 0x2))) == 0)) goto L_C227986;
    v0_4 = (vmsio_isready(v0_0)) != 0;
    if (v0_4) goto L_C227970;
    vmsfs_unmount(v0_0);
    L_C227986:;
    v0_0 = (0xFFFFFF01);
    L_C227A8A:;
    return v0_0;
    L_C227970:;
    v0_4 = (vmsio_ismount(v0_0)) == 0;
    if (v0_4) goto L_C227986;
    if (((*(signed char *)((((*(int *)(((int)stk + 0))) + 0xC956768) + 0x8))) != 0)) goto L_C22798C;
    goto L_C227986;
    L_C22798C:;
    v0_4 = (int)(buIsFormat(v0_0)) >= 0;
    if (v0_4) goto L_C22799C;
    v0_0 = (0xFFFFFF03);
    goto L_C227A8A;
    L_C22799C:;
    if (((*(int *)(((*(int *)((v0_2 + 0x1C))) + 0x38))) == 0)) goto L_C2279BA;
    v0_4 = vmsfs_xfind(v0_0, (((int)stk + 0) + 0x4));
    v0_6 = (v0_4);
    if ((v0_4 == 0)) goto L_C2279BA;
    v0_4 = (int)(check_fat_all(v0_0, v0_3, R6)) >= 0;
    if (v0_4) goto L_C2279C0;
    L_C2279BA:;
    v0_0 = (0xFFFFFF0B);
    goto L_C227A8A;
    L_C2279C0:;
    v0_3 = search_fat_used(v0_0);
    v0_4 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C227A60;
    v0_3 = search_fat_free(v0_0, (v0_4 + 0x1));
    v0_5 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C227A60;
    v0_3 = vmsfs_read_retry(v0_0, v0_4, v0_1);
    v0_6 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C227A88;
    v0_3 = vmsfs_write_retry(v0_0, v0_5, v0_1);
    v0_6 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C227A88;
    v0_6 = search_fat(v0_0, v0_4);
    v0_3 = (v0_6);
    if (((int)v0_6 <= 0)) goto L_C227A0E;
    set_fat(v0_0, v0_3);
    L_C227A22:;
    v0_6 = get_fat(v0_0, v0_4);
    set_fat(v0_0, v0_5);
    set_fat(v0_0, v0_4);
    goto L_C2279C0;
    L_C227A0E:;
    v0_6 = search_dir_by_startfat(v0_0, v0_4);
    v0_6 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC956764) + 0x10)))))(v0_6, 0x2, v0_5, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    goto L_C227A22;
    L_C227A88:;
    v0_0 = (v0_6);
    goto L_C227A8A;
    L_C227A60:;
    v0_6 = ((v0_2 + 0x48));
    v0_3 = (0x100);
    R6 = (0x1);
    L_C227A6E:;
    if (((unsigned int)v0_6 < (unsigned int)((v0_2 + 0x48) + v0_3))) goto L_C227A6A;
    v0_1 = write_dir(v0_0, v0_3, R6);
    v0_6 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C227A88;
    v0_6 = ((write_fat(v0_0)));
    goto L_C227A88;
    L_C227A6A:;
    *(unsigned char *)((v0_6 + 0x0)) = R6;
    v0_6 = ((v0_6 + 0x1));
    goto L_C227A6E;
}

int FUN_0c074112(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)((((*(int *)((a4 + 0x30))) << 2) + 0xC195A18));
    t1 = t0;
    if (((*(int *)0xC23ED88) & ((((struct o40_int *)(a4))->v))) != 0) {
        t2 = t0;
        t0 = 0x10;
        for (;;) {
            t3 = *(short *)((t2 + 0x0));
            t2 = (t2 + 0x2);
            FUN_0c0c49b0(t3);
            t0 = (t0 - 0x1);
            if (t0 == 0) {
                break;
            }
        }
        FUN_0c0e19f2();
        t1 = t2;
    }
    (((struct o34_float *)(a4))->v) = (((((struct o34_float *)(a4))->v)) - ((((FUN_0c0da410((*(int *)((a4 + 0x3C))))) + 0.5f) * 0.00999999978f)));
    t0 = FUN_0c0da2e0();
    t2 = ((~(((~t0) + 0x1) & 0x1FFF)) + 0x1);
    if ((int)t0 >= 0) {
        t2 = (t0 & 0x1FFF);
    }
    *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + (t2 + 0x2000));
    t0 = t1;
    t1 = 0x10;
    for (;;) {
        u0 = (((struct o34_float *)(a4))->v);
        u1 = (((struct o38_float *)(a4))->v);
        t3 = *(short *)((t0 + 0x0));
        t0 = (t0 + 0x2);
        u2 = u0;
        if (u1 > u0) {
            u2 = u1;
        }
        t2 = FUN_0c0c497c(t3, u2);
        t1 = (t1 - 0x1);
        if (t1 == 0) {
            break;
        }
    }
    return t2;
}

int FUN_0c0a6356(void)
{
    int stk[2];
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t10;
    register int t29;
    int t1;
    register int t27;

    if (((*(int *)0xC23ED50) == 0) && (t1 = *(int *)0xC23A180, t1 == 2)) {
        return t1;
    }
    if (0x1 != 0) {
        t2 = 0x0;
        t3 = 0xC24990C;
        t4 = 0x1;
        t5 = 0x0;
        for (;;) {
            *(unsigned int *)(((int)stk + 4)) = (((t5 << 2) << 2) + 0xC249914);
            *(int *)((int)stk + 0) = (((t5 << 2) << 2) + 0xC249914);
            *(unsigned int *)(((((t5 << 2) << 2) + 0xC249914) + 0x0)) = (pdGetPeripheral((*(int *)(((t5 << 2) + 0xC20115C)))));
            t10 = *(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x0));
            switch (t10) {
            case 0x3F06FE:
                *(unsigned int *)((0xC24990C + (t5 << 2))) = 0x5;
                break;
            case 0xFE:
                *(unsigned int *)((0xC24990C + (t5 << 2))) = 0x4;
                break;
            case 0x7FF:
                *(unsigned int *)((0xC24990C + (t5 << 2))) = t4;
                break;
            default:
                *(unsigned int *)((t3 + 0x0)) = t2;
                break;
            }
            t5 = (t5 + 0x1);
            t2 = (t2 + 0x2);
            t3 = (t3 + 0x4);
            t4 = (t4 + 0x2);
            if ((int)t5 >= (int)0x2) {
                break;
            }
        }
    } else {
        t27 = 0x1;
    }
    FUN_0c0a5cc6(t27);
    t29 = *(int *)0xC23A180;
    if (t29 != 1) {
        FUN_0c0a5dfa();
        return FUN_0c0a5fdc();
    }
    return t29;
}
