#include "ultra64.h"


// rodata





#ifdef NONMATCHING
void sub_GAME_7F05ACB0(void) {

}
#else
GLOBAL_ASM(
.late_rodata
glabel D_80053720
.word 0x46fffe00 /*32767.0*/
glabel D_80053724
.word 0x40490fdb /*3.1415927*/
glabel D_80053728
.word 0x477fff00 /*65535.0*/
.text
glabel sub_GAME_7F05ACB0
/* 08F7E0 7F05ACB0 3C013F80 */  li    $at, 0x3F800000 # 1.000000
/* 08F7E4 7F05ACB4 44812000 */  mtc1  $at, $f4
/* 08F7E8 7F05ACB8 27BDFFE8 */  addiu $sp, $sp, -0x18
/* 08F7EC 7F05ACBC AFBF0014 */  sw    $ra, 0x14($sp)
/* 08F7F0 7F05ACC0 460C203E */  c.le.s $f4, $f12
/* 08F7F4 7F05ACC4 3C01BF80 */  li    $at, 0xBF800000 # -1.000000
/* 08F7F8 7F05ACC8 45020004 */  bc1fl .L7F05ACDC
/* 08F7FC 7F05ACCC 44813000 */   mtc1  $at, $f6
/* 08F800 7F05ACD0 10000010 */  b     .L7F05AD14
/* 08F804 7F05ACD4 24047FFF */   li    $a0, 32767
/* 08F808 7F05ACD8 44813000 */  mtc1  $at, $f6
.L7F05ACDC:
/* 08F80C 7F05ACDC 3C018005 */  lui   $at, %hi(D_80053720)
/* 08F810 7F05ACE0 4606603E */  c.le.s $f12, $f6
/* 08F814 7F05ACE4 00000000 */  nop   
/* 08F818 7F05ACE8 45000003 */  bc1f  .L7F05ACF8
/* 08F81C 7F05ACEC 00000000 */   nop   
/* 08F820 7F05ACF0 10000008 */  b     .L7F05AD14
/* 08F824 7F05ACF4 24048001 */   li    $a0, -32767
.L7F05ACF8:
/* 08F828 7F05ACF8 C4283720 */  lwc1  $f8, %lo(D_80053720)($at)
/* 08F82C 7F05ACFC 46086282 */  mul.s $f10, $f12, $f8
/* 08F830 7F05AD00 4600540D */  trunc.w.s $f16, $f10
/* 08F834 7F05AD04 44048000 */  mfc1  $a0, $f16
/* 08F838 7F05AD08 00000000 */  nop   
/* 08F83C 7F05AD0C 00047C00 */  sll   $t7, $a0, 0x10
/* 08F840 7F05AD10 000F2403 */  sra   $a0, $t7, 0x10
.L7F05AD14:
/* 08F844 7F05AD14 0FC16AFC */  jal   sub_GAME_7F05ABF0
/* 08F848 7F05AD18 00000000 */   nop   
/* 08F84C 7F05AD1C 44829000 */  mtc1  $v0, $f18
/* 08F850 7F05AD20 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 08F854 7F05AD24 04410004 */  bgez  $v0, .L7F05AD38
/* 08F858 7F05AD28 46809120 */   cvt.s.w $f4, $f18
/* 08F85C 7F05AD2C 44813000 */  mtc1  $at, $f6
/* 08F860 7F05AD30 00000000 */  nop   
/* 08F864 7F05AD34 46062100 */  add.s $f4, $f4, $f6
.L7F05AD38:
/* 08F868 7F05AD38 3C018005 */  lui   $at, %hi(D_80053724)
/* 08F86C 7F05AD3C C4283724 */  lwc1  $f8, %lo(D_80053724)($at)
/* 08F870 7F05AD40 8FBF0014 */  lw    $ra, 0x14($sp)
/* 08F874 7F05AD44 3C018005 */  lui   $at, %hi(D_80053728)
/* 08F878 7F05AD48 46082282 */  mul.s $f10, $f4, $f8
/* 08F87C 7F05AD4C C4303728 */  lwc1  $f16, %lo(D_80053728)($at)
/* 08F880 7F05AD50 27BD0018 */  addiu $sp, $sp, 0x18
/* 08F884 7F05AD54 03E00008 */  jr    $ra
/* 08F888 7F05AD58 46105003 */   div.s $f0, $f10, $f16
)
#endif





#ifdef NONMATCHING
void sub_GAME_7F05AD5C(void) {

}
#else
GLOBAL_ASM(
.late_rodata
glabel D_8005372C
.word 0x46fffe00 /*32767.0*/
glabel D_80053730
.word 0x40490fdb /*3.1415927*/
glabel D_80053734
.word 0x477fff00 /*65535.0*/
.text
glabel sub_GAME_7F05AD5C
/* 08F88C 7F05AD5C 3C013F80 */  li    $at, 0x3F800000 # 1.000000
/* 08F890 7F05AD60 44812000 */  mtc1  $at, $f4
/* 08F894 7F05AD64 27BDFFE8 */  addiu $sp, $sp, -0x18
/* 08F898 7F05AD68 AFBF0014 */  sw    $ra, 0x14($sp)
/* 08F89C 7F05AD6C 460C203E */  c.le.s $f4, $f12
/* 08F8A0 7F05AD70 3C01BF80 */  li    $at, 0xBF800000 # -1.000000
/* 08F8A4 7F05AD74 45020004 */  bc1fl .L7F05AD88
/* 08F8A8 7F05AD78 44813000 */   mtc1  $at, $f6
/* 08F8AC 7F05AD7C 10000010 */  b     .L7F05ADC0
/* 08F8B0 7F05AD80 24047FFF */   li    $a0, 32767
/* 08F8B4 7F05AD84 44813000 */  mtc1  $at, $f6
.L7F05AD88:
/* 08F8B8 7F05AD88 3C018005 */  lui   $at, %hi(D_8005372C)
/* 08F8BC 7F05AD8C 4606603E */  c.le.s $f12, $f6
/* 08F8C0 7F05AD90 00000000 */  nop   
/* 08F8C4 7F05AD94 45000003 */  bc1f  .L7F05ADA4
/* 08F8C8 7F05AD98 00000000 */   nop   
/* 08F8CC 7F05AD9C 10000008 */  b     .L7F05ADC0
/* 08F8D0 7F05ADA0 24048001 */   li    $a0, -32767
.L7F05ADA4:
/* 08F8D4 7F05ADA4 C428372C */  lwc1  $f8, %lo(D_8005372C)($at)
/* 08F8D8 7F05ADA8 46086282 */  mul.s $f10, $f12, $f8
/* 08F8DC 7F05ADAC 4600540D */  trunc.w.s $f16, $f10
/* 08F8E0 7F05ADB0 44048000 */  mfc1  $a0, $f16
/* 08F8E4 7F05ADB4 00000000 */  nop   
/* 08F8E8 7F05ADB8 00047C00 */  sll   $t7, $a0, 0x10
/* 08F8EC 7F05ADBC 000F2403 */  sra   $a0, $t7, 0x10
.L7F05ADC0:
/* 08F8F0 7F05ADC0 0FC16B11 */  jal   sub_GAME_7F05AC44
/* 08F8F4 7F05ADC4 00000000 */   nop   
/* 08F8F8 7F05ADC8 44829000 */  mtc1  $v0, $f18
/* 08F8FC 7F05ADCC 3C018005 */  lui   $at, %hi(D_80053730)
/* 08F900 7F05ADD0 C4263730 */  lwc1  $f6, %lo(D_80053730)($at)
/* 08F904 7F05ADD4 46809120 */  cvt.s.w $f4, $f18
/* 08F908 7F05ADD8 8FBF0014 */  lw    $ra, 0x14($sp)
/* 08F90C 7F05ADDC 3C018005 */  lui   $at, %hi(D_80053734)
/* 08F910 7F05ADE0 C42A3734 */  lwc1  $f10, %lo(D_80053734)($at)
/* 08F914 7F05ADE4 27BD0018 */  addiu $sp, $sp, 0x18
/* 08F918 7F05ADE8 46062202 */  mul.s $f8, $f4, $f6
/* 08F91C 7F05ADEC 03E00008 */  jr    $ra
/* 08F920 7F05ADF0 460A4003 */   div.s $f0, $f8, $f10
)
#endif



