/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/xilinx/alu/alu.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {10U, 0U};
static unsigned int ng12[] = {11U, 0U};
static unsigned int ng13[] = {12U, 0U};
static unsigned int ng14[] = {13U, 0U};
static unsigned int ng15[] = {14U, 0U};
static unsigned int ng16[] = {15U, 0U};
static unsigned int ng17[] = {16U, 0U};
static unsigned int ng18[] = {17U, 0U};
static unsigned int ng19[] = {18U, 0U};
static unsigned int ng20[] = {19U, 0U};
static unsigned int ng21[] = {20U, 0U};
static unsigned int ng22[] = {21U, 0U};
static unsigned int ng23[] = {22U, 0U};
static unsigned int ng24[] = {23U, 0U};
static unsigned int ng25[] = {24U, 0U};
static unsigned int ng26[] = {25U, 0U};
static unsigned int ng27[] = {26U, 0U};
static unsigned int ng28[] = {27U, 0U};
static unsigned int ng29[] = {28U, 0U};
static unsigned int ng30[] = {29U, 0U};
static unsigned int ng31[] = {30U, 0U};
static unsigned int ng32[] = {31U, 0U};



static void Cont_29_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4360);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 4232);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_30_1(char *t0)
{
    char t3[8];
    char t5[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 9, 9, 2U, t2, 1, t4, 8);
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng1)));
    xsi_vlogtype_concat(t5, 9, 9, 2U, t6, 1, t7, 8);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 9, t3, 9, t5, 9);
    t9 = (t0 + 4424);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t13, 0, 8);
    t14 = 511U;
    t15 = t14;
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t8);
    t14 = (t14 & t17);
    t18 = *((unsigned int *)t16);
    t15 = (t15 & t18);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 | t14);
    t21 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t21 | t15);
    xsi_driver_vfirst_trans(t9, 0, 8);
    t22 = (t0 + 4248);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Cont_31_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 3664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 8);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 8);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 4488);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 4264);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_32_3(char *t0)
{
    char t10[8];
    char t19[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;

LAB0:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4280);
    *((int *)t2) = 1;
    t3 = (t0 + 3944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng29)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng30)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng31)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng32)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 5);
    if (t6 == 1)
        goto LAB67;

LAB68:
LAB70:
LAB69:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB71:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 16, t8, 8, t9, 8);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB71;

LAB9:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 16, t4, 8, t7, 8);
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 16);
    goto LAB71;

LAB11:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_multiply(t10, 16, t4, 8, t7, 8);
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 16);
    goto LAB71;

LAB13:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 8, t3, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB71;

LAB15:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 8, t3, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB71;

LAB17:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    *((unsigned int *)t10) = t12;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB73;

LAB72:    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 65535U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 65535U);
    t8 = ((char*)((ng2)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 16, t10, 16, t8, 16);
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t19, 0, 0, 16);
    goto LAB71;

LAB19:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    *((unsigned int *)t10) = t12;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB75;

LAB74:    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 65535U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 65535U);
    t8 = ((char*)((ng2)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 16, t10, 16, t8, 16);
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t19, 0, 0, 16);
    goto LAB71;

LAB21:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memcpy(t10, t4, 8);
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 16);
    goto LAB71;

LAB23:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memcpy(t10, t4, 8);
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 16);
    goto LAB71;

LAB25:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 16, t4, 8, t3, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB71;

LAB27:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 16, t4, 8, t3, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB71;

LAB29:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_arith_lshift(t10, 16, t4, 8, t3, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB71;

LAB31:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t10, 16, t4, 8, t3, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB71;

LAB33:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 16, t4, 8, t3, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB71;

LAB35:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 16, t4, 8, t3, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB71;

LAB37:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_arith_lshift(t10, 16, t4, 8, t3, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB71;

LAB39:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t10, 16, t4, 8, t3, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB71;

LAB41:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t19, 0, 8);
    t3 = (t19 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t19) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 7);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    memset(t20, 0, 8);
    t8 = (t20 + 4);
    t21 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 0);
    *((unsigned int *)t20) = t18;
    t22 = *((unsigned int *)t21);
    t23 = (t22 >> 0);
    *((unsigned int *)t8) = t23;
    t24 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t24 & 127U);
    t25 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t25 & 127U);
    xsi_vlogtype_concat(t10, 16, 8, 2U, t20, 7, t19, 1);
    t26 = (t0 + 2248);
    xsi_vlogvar_assign_value(t26, t10, 0, 0, 16);
    goto LAB71;

LAB43:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t19, 0, 8);
    t3 = (t19 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    *((unsigned int *)t19) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 1);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t15 & 127U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 127U);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    memset(t20, 0, 8);
    t8 = (t20 + 4);
    t21 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 0);
    t22 = (t18 & 1);
    *((unsigned int *)t20) = t22;
    t23 = *((unsigned int *)t21);
    t24 = (t23 >> 0);
    t25 = (t24 & 1);
    *((unsigned int *)t8) = t25;
    xsi_vlogtype_concat(t10, 16, 8, 2U, t20, 1, t19, 7);
    t26 = (t0 + 2248);
    xsi_vlogvar_assign_value(t26, t10, 0, 0, 16);
    goto LAB71;

LAB45:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t19, 0, 8);
    t3 = (t19 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t19) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 7);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    t8 = (t0 + 1208U);
    t9 = *((char **)t8);
    memset(t20, 0, 8);
    t8 = (t20 + 4);
    t21 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 0);
    *((unsigned int *)t20) = t18;
    t22 = *((unsigned int *)t21);
    t23 = (t22 >> 0);
    *((unsigned int *)t8) = t23;
    t24 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t24 & 127U);
    t25 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t25 & 127U);
    xsi_vlogtype_concat(t10, 16, 8, 2U, t20, 7, t19, 1);
    t26 = (t0 + 2248);
    xsi_vlogvar_assign_value(t26, t10, 0, 0, 16);
    goto LAB71;

LAB47:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t19, 0, 8);
    t3 = (t19 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    *((unsigned int *)t19) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 1);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t15 & 127U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 127U);
    t8 = (t0 + 1208U);
    t9 = *((char **)t8);
    memset(t20, 0, 8);
    t8 = (t20 + 4);
    t21 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 0);
    t22 = (t18 & 1);
    *((unsigned int *)t20) = t22;
    t23 = *((unsigned int *)t21);
    t24 = (t23 >> 0);
    t25 = (t24 & 1);
    *((unsigned int *)t8) = t25;
    xsi_vlogtype_concat(t10, 16, 8, 2U, t20, 1, t19, 7);
    t26 = (t0 + 2248);
    xsi_vlogvar_assign_value(t26, t10, 0, 0, 16);
    goto LAB71;

LAB49:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    *((unsigned int *)t10) = t12;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB77;

LAB76:    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 65535U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 65535U);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 16);
    goto LAB71;

LAB51:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    *((unsigned int *)t10) = t12;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB79;

LAB78:    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 65535U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 65535U);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 16);
    goto LAB71;

LAB53:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB80;

LAB81:
LAB82:    t41 = (t0 + 2248);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 16);
    goto LAB71;

LAB55:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB83;

LAB84:
LAB85:    t41 = (t0 + 2248);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 16);
    goto LAB71;

LAB57:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB86;

LAB87:
LAB88:    t21 = (t0 + 2248);
    xsi_vlogvar_assign_value(t21, t10, 0, 0, 16);
    goto LAB71;

LAB59:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t19) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t19 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB89;

LAB90:
LAB91:    memset(t10, 0, 8);
    t41 = (t10 + 4);
    t42 = (t19 + 4);
    t37 = *((unsigned int *)t19);
    t38 = (~(t37));
    *((unsigned int *)t10) = t38;
    *((unsigned int *)t41) = 0;
    if (*((unsigned int *)t42) != 0)
        goto LAB93;

LAB92:    t45 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t45 & 65535U);
    t46 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t46 & 65535U);
    t47 = (t0 + 2248);
    xsi_vlogvar_assign_value(t47, t10, 0, 0, 16);
    goto LAB71;

LAB61:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t19) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t19 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB94;

LAB95:
LAB96:    memset(t10, 0, 8);
    t41 = (t10 + 4);
    t42 = (t19 + 4);
    t43 = *((unsigned int *)t19);
    t44 = (~(t43));
    *((unsigned int *)t10) = t44;
    *((unsigned int *)t41) = 0;
    if (*((unsigned int *)t42) != 0)
        goto LAB98;

LAB97:    t50 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t50 & 65535U);
    t51 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t51 & 65535U);
    t47 = (t0 + 2248);
    xsi_vlogvar_assign_value(t47, t10, 0, 0, 16);
    goto LAB71;

LAB63:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t19) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t19 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB99;

LAB100:
LAB101:    memset(t10, 0, 8);
    t21 = (t10 + 4);
    t26 = (t19 + 4);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    *((unsigned int *)t10) = t25;
    *((unsigned int *)t21) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB103;

LAB102:    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & 65535U);
    t32 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t32 & 65535U);
    t41 = (t0 + 2248);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 16);
    goto LAB71;

LAB65:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t20, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB105;

LAB104:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB105;

LAB108:    if (*((unsigned int *)t4) > *((unsigned int *)t7))
        goto LAB106;

LAB107:    memset(t19, 0, 8);
    t21 = (t20 + 4);
    t11 = *((unsigned int *)t21);
    t12 = (~(t11));
    t13 = *((unsigned int *)t20);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB109;

LAB110:    if (*((unsigned int *)t21) != 0)
        goto LAB111;

LAB112:    t41 = (t19 + 4);
    t16 = *((unsigned int *)t19);
    t17 = *((unsigned int *)t41);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB113;

LAB114:    t22 = *((unsigned int *)t19);
    t23 = (~(t22));
    t24 = *((unsigned int *)t41);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t41) > 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t19) > 0)
        goto LAB119;

LAB120:    memcpy(t10, t47, 8);

LAB121:    t52 = (t0 + 2248);
    xsi_vlogvar_assign_value(t52, t10, 0, 0, 16);
    goto LAB71;

LAB67:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t20, 0, 8);
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t3);
    t22 = *((unsigned int *)t8);
    t23 = (t18 | t22);
    t24 = (~(t23));
    t25 = (t17 & t24);
    if (t25 != 0)
        goto LAB125;

LAB122:    if (t23 != 0)
        goto LAB124;

LAB123:    *((unsigned int *)t20) = 1;

LAB125:    memset(t19, 0, 8);
    t21 = (t20 + 4);
    t27 = *((unsigned int *)t21);
    t28 = (~(t27));
    t29 = *((unsigned int *)t20);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB126;

LAB127:    if (*((unsigned int *)t21) != 0)
        goto LAB128;

LAB129:    t41 = (t19 + 4);
    t32 = *((unsigned int *)t19);
    t35 = *((unsigned int *)t41);
    t36 = (t32 || t35);
    if (t36 > 0)
        goto LAB130;

LAB131:    t37 = *((unsigned int *)t19);
    t38 = (~(t37));
    t39 = *((unsigned int *)t41);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t41) > 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t19) > 0)
        goto LAB136;

LAB137:    memcpy(t10, t47, 8);

LAB138:    t52 = (t0 + 2248);
    xsi_vlogvar_assign_value(t52, t10, 0, 0, 16);
    goto LAB71;

LAB73:    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t10) = (t13 | t14);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t15 | t16);
    goto LAB72;

LAB75:    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t10) = (t13 | t14);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t15 | t16);
    goto LAB74;

LAB77:    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t10) = (t13 | t14);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t15 | t16);
    goto LAB76;

LAB79:    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t10) = (t13 | t14);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t15 | t16);
    goto LAB78;

LAB80:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    t21 = (t4 + 4);
    t26 = (t7 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t27 = *((unsigned int *)t21);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (~(t29));
    t31 = *((unsigned int *)t26);
    t32 = (~(t31));
    t33 = (t25 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t35);
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t36);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    goto LAB82;

LAB83:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    t21 = (t4 + 4);
    t26 = (t7 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (~(t24));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t25);
    t28 = *((unsigned int *)t26);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB85;

LAB86:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    goto LAB88;

LAB89:    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t19) = (t22 | t23);
    t21 = (t4 + 4);
    t26 = (t7 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (~(t24));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t25);
    t28 = *((unsigned int *)t26);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB91;

LAB93:    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t42);
    *((unsigned int *)t10) = (t39 | t40);
    t43 = *((unsigned int *)t41);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t41) = (t43 | t44);
    goto LAB92;

LAB94:    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t19) = (t22 | t23);
    t21 = (t4 + 4);
    t26 = (t7 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t27 = *((unsigned int *)t21);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (~(t29));
    t31 = *((unsigned int *)t26);
    t32 = (~(t31));
    t33 = (t25 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t35);
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t36);
    t39 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t39 & t35);
    t40 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t40 & t36);
    goto LAB96;

LAB98:    t45 = *((unsigned int *)t10);
    t46 = *((unsigned int *)t42);
    *((unsigned int *)t10) = (t45 | t46);
    t48 = *((unsigned int *)t41);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t41) = (t48 | t49);
    goto LAB97;

LAB99:    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t19) = (t22 | t23);
    goto LAB101;

LAB103:    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t26);
    *((unsigned int *)t10) = (t27 | t28);
    t29 = *((unsigned int *)t21);
    t30 = *((unsigned int *)t26);
    *((unsigned int *)t21) = (t29 | t30);
    goto LAB102;

LAB105:    t9 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB107;

LAB106:    *((unsigned int *)t20) = 1;
    goto LAB107;

LAB109:    *((unsigned int *)t19) = 1;
    goto LAB112;

LAB111:    t26 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB112;

LAB113:    t42 = ((char*)((ng2)));
    goto LAB114;

LAB115:    t47 = ((char*)((ng1)));
    goto LAB116;

LAB117:    xsi_vlog_unsigned_bit_combine(t10, 16, t42, 16, t47, 16);
    goto LAB121;

LAB119:    memcpy(t10, t42, 8);
    goto LAB121;

LAB124:    t9 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB125;

LAB126:    *((unsigned int *)t19) = 1;
    goto LAB129;

LAB128:    t26 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB129;

LAB130:    t42 = ((char*)((ng2)));
    goto LAB131;

LAB132:    t47 = ((char*)((ng1)));
    goto LAB133;

LAB134:    xsi_vlog_unsigned_bit_combine(t10, 16, t42, 16, t47, 16);
    goto LAB138;

LAB136:    memcpy(t10, t42, 8);
    goto LAB138;

}


extern void work_m_00000000003218126800_0886308060_init()
{
	static char *pe[] = {(void *)Cont_29_0,(void *)Cont_30_1,(void *)Cont_31_2,(void *)Always_32_3};
	xsi_register_didat("work_m_00000000003218126800_0886308060", "isim/testbench_isim_beh.exe.sim/work/m_00000000003218126800_0886308060.didat");
	xsi_register_executes(pe);
}
