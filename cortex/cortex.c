#include <stdint.h>
#include "cortex.h"

#ifndef CORTEX_INTERRUPT_MAX
#define CORTEX_INTERRUPT_MAX 256
#endif

extern uint8_t __text_end__, __data_beg__, __data_end__, __bss_beg__, __bss_end__, STACK_TOP;

extern int main(int argc, char *argv[]);

static void crt0(void);

static void __attribute__((interrupt)) CORTEX_Default_Handler(void){
}

static void crt_empty(void){
}

void __attribute__((weak, alias("crt_empty"))) crt1(void);
void __attribute__((weak, alias("crt_empty"))) crt2(void);
void __attribute__((weak, alias("crt_empty"))) crt3(void);
void __attribute__((weak, alias("crt_empty"))) crt4(void);
void __attribute__((weak, alias("crt_empty"))) crt5(void);

void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_NMI_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_HardFault_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_MemManage_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_BusFault_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_UsageFault_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_SVC_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_DebugMon_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_PendSV_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_SysTick_Handler(void);

void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_0_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_1_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_2_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_3_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_4_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_5_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_6_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_7_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_8_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_9_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_10_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_11_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_12_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_13_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_14_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_15_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_16_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_17_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_18_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_19_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_20_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_21_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_22_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_23_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_24_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_25_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_26_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_27_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_28_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_29_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_30_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_31_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_32_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_33_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_34_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_35_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_36_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_37_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_38_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_39_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_40_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_41_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_42_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_43_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_44_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_45_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_46_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_47_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_48_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_49_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_50_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_51_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_52_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_53_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_54_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_55_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_56_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_57_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_58_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_59_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_60_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_61_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_62_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_63_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_64_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_65_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_66_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_67_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_68_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_69_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_70_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_71_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_72_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_73_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_74_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_75_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_76_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_77_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_78_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_79_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_80_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_81_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_82_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_83_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_84_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_85_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_86_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_87_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_88_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_89_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_90_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_91_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_92_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_93_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_94_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_95_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_96_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_97_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_98_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_99_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_100_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_101_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_102_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_103_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_104_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_105_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_106_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_107_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_108_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_109_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_110_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_111_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_112_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_113_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_114_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_115_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_116_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_117_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_118_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_119_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_120_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_121_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_122_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_123_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_124_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_125_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_126_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_127_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_128_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_129_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_130_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_131_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_132_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_133_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_134_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_135_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_136_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_137_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_138_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_139_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_140_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_141_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_142_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_143_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_144_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_145_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_146_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_147_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_148_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_149_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_150_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_151_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_152_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_153_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_154_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_155_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_156_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_157_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_158_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_159_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_160_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_161_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_162_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_163_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_164_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_165_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_166_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_167_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_168_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_169_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_170_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_171_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_172_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_173_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_174_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_175_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_176_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_177_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_178_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_179_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_180_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_181_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_182_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_183_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_184_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_185_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_186_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_187_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_188_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_189_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_190_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_191_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_192_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_193_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_194_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_195_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_196_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_197_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_198_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_199_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_200_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_201_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_202_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_203_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_204_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_205_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_206_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_207_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_208_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_209_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_210_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_211_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_212_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_213_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_214_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_215_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_216_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_217_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_218_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_219_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_220_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_221_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_222_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_223_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_224_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_225_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_226_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_227_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_228_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_229_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_230_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_231_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_232_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_233_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_234_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_235_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_236_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_237_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_238_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_239_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_240_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_241_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_242_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_243_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_244_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_245_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_246_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_247_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_248_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_249_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_250_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_251_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_252_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_253_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_254_Handler(void);
void __attribute__((weak, alias("CORTEX_Default_Handler"))) CORTEX_INTERRUPT_255_Handler(void);

uint32_t *cortex_vectors[] __attribute__((section(".vectors"))) = {
	(uint32_t *)&STACK_TOP,
	(uint32_t *)crt0,
	(uint32_t *)CORTEX_NMI_Handler,
	(uint32_t *)CORTEX_HardFault_Handler,
	(uint32_t *)CORTEX_MemManage_Handler,
	(uint32_t *)CORTEX_BusFault_Handler,
	(uint32_t *)CORTEX_UsageFault_Handler,
	(uint32_t *)0,
	(uint32_t *)0,
	(uint32_t *)0,
	(uint32_t *)0,
	(uint32_t *)CORTEX_SVC_Handler,
	(uint32_t *)CORTEX_DebugMon_Handler,
	(uint32_t *)0,
	(uint32_t *)CORTEX_PendSV_Handler,
	(uint32_t *)CORTEX_SysTick_Handler,
#if (CORTEX_INTERRUPT_MAX > 0)
	(uint32_t *)CORTEX_INTERRUPT_0_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 1)
	(uint32_t *)CORTEX_INTERRUPT_1_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 2)
	(uint32_t *)CORTEX_INTERRUPT_2_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 3)
	(uint32_t *)CORTEX_INTERRUPT_3_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 4)
	(uint32_t *)CORTEX_INTERRUPT_4_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 5)
	(uint32_t *)CORTEX_INTERRUPT_5_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 6)
	(uint32_t *)CORTEX_INTERRUPT_6_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 7)
	(uint32_t *)CORTEX_INTERRUPT_7_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 8)
	(uint32_t *)CORTEX_INTERRUPT_8_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 9)
	(uint32_t *)CORTEX_INTERRUPT_9_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 10)
	(uint32_t *)CORTEX_INTERRUPT_10_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 11)
	(uint32_t *)CORTEX_INTERRUPT_11_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 12)
	(uint32_t *)CORTEX_INTERRUPT_12_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 13)
	(uint32_t *)CORTEX_INTERRUPT_13_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 14)
	(uint32_t *)CORTEX_INTERRUPT_14_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 15)
	(uint32_t *)CORTEX_INTERRUPT_15_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 16)
	(uint32_t *)CORTEX_INTERRUPT_16_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 17)
	(uint32_t *)CORTEX_INTERRUPT_17_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 18)
	(uint32_t *)CORTEX_INTERRUPT_18_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 19)
	(uint32_t *)CORTEX_INTERRUPT_19_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 20)
	(uint32_t *)CORTEX_INTERRUPT_20_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 21)
	(uint32_t *)CORTEX_INTERRUPT_21_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 22)
	(uint32_t *)CORTEX_INTERRUPT_22_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 23)
	(uint32_t *)CORTEX_INTERRUPT_23_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 24)
	(uint32_t *)CORTEX_INTERRUPT_24_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 25)
	(uint32_t *)CORTEX_INTERRUPT_25_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 26)
	(uint32_t *)CORTEX_INTERRUPT_26_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 27)
	(uint32_t *)CORTEX_INTERRUPT_27_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 28)
	(uint32_t *)CORTEX_INTERRUPT_28_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 29)
	(uint32_t *)CORTEX_INTERRUPT_29_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 30)
	(uint32_t *)CORTEX_INTERRUPT_30_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 31)
	(uint32_t *)CORTEX_INTERRUPT_31_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 32)
	(uint32_t *)CORTEX_INTERRUPT_32_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 33)
	(uint32_t *)CORTEX_INTERRUPT_33_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 34)
	(uint32_t *)CORTEX_INTERRUPT_34_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 35)
	(uint32_t *)CORTEX_INTERRUPT_35_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 36)
	(uint32_t *)CORTEX_INTERRUPT_36_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 37)
	(uint32_t *)CORTEX_INTERRUPT_37_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 38)
	(uint32_t *)CORTEX_INTERRUPT_38_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 39)
	(uint32_t *)CORTEX_INTERRUPT_39_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 40)
	(uint32_t *)CORTEX_INTERRUPT_40_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 41)
	(uint32_t *)CORTEX_INTERRUPT_41_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 42)
	(uint32_t *)CORTEX_INTERRUPT_42_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 43)
	(uint32_t *)CORTEX_INTERRUPT_43_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 44)
	(uint32_t *)CORTEX_INTERRUPT_44_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 45)
	(uint32_t *)CORTEX_INTERRUPT_45_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 46)
	(uint32_t *)CORTEX_INTERRUPT_46_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 47)
	(uint32_t *)CORTEX_INTERRUPT_47_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 48)
	(uint32_t *)CORTEX_INTERRUPT_48_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 49)
	(uint32_t *)CORTEX_INTERRUPT_49_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 50)
	(uint32_t *)CORTEX_INTERRUPT_50_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 51)
	(uint32_t *)CORTEX_INTERRUPT_51_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 52)
	(uint32_t *)CORTEX_INTERRUPT_52_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 53)
	(uint32_t *)CORTEX_INTERRUPT_53_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 54)
	(uint32_t *)CORTEX_INTERRUPT_54_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 55)
	(uint32_t *)CORTEX_INTERRUPT_55_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 56)
	(uint32_t *)CORTEX_INTERRUPT_56_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 57)
	(uint32_t *)CORTEX_INTERRUPT_57_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 58)
	(uint32_t *)CORTEX_INTERRUPT_58_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 59)
	(uint32_t *)CORTEX_INTERRUPT_59_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 60)
	(uint32_t *)CORTEX_INTERRUPT_60_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 61)
	(uint32_t *)CORTEX_INTERRUPT_61_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 62)
	(uint32_t *)CORTEX_INTERRUPT_62_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 63)
	(uint32_t *)CORTEX_INTERRUPT_63_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 64)
	(uint32_t *)CORTEX_INTERRUPT_64_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 65)
	(uint32_t *)CORTEX_INTERRUPT_65_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 66)
	(uint32_t *)CORTEX_INTERRUPT_66_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 67)
	(uint32_t *)CORTEX_INTERRUPT_67_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 68)
	(uint32_t *)CORTEX_INTERRUPT_68_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 69)
	(uint32_t *)CORTEX_INTERRUPT_69_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 70)
	(uint32_t *)CORTEX_INTERRUPT_70_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 71)
	(uint32_t *)CORTEX_INTERRUPT_71_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 72)
	(uint32_t *)CORTEX_INTERRUPT_72_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 73)
	(uint32_t *)CORTEX_INTERRUPT_73_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 74)
	(uint32_t *)CORTEX_INTERRUPT_74_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 75)
	(uint32_t *)CORTEX_INTERRUPT_75_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 76)
	(uint32_t *)CORTEX_INTERRUPT_76_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 77)
	(uint32_t *)CORTEX_INTERRUPT_77_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 78)
	(uint32_t *)CORTEX_INTERRUPT_78_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 79)
	(uint32_t *)CORTEX_INTERRUPT_79_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 80)
	(uint32_t *)CORTEX_INTERRUPT_80_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 81)
	(uint32_t *)CORTEX_INTERRUPT_81_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 82)
	(uint32_t *)CORTEX_INTERRUPT_82_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 83)
	(uint32_t *)CORTEX_INTERRUPT_83_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 84)
	(uint32_t *)CORTEX_INTERRUPT_84_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 85)
	(uint32_t *)CORTEX_INTERRUPT_85_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 86)
	(uint32_t *)CORTEX_INTERRUPT_86_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 87)
	(uint32_t *)CORTEX_INTERRUPT_87_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 88)
	(uint32_t *)CORTEX_INTERRUPT_88_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 89)
	(uint32_t *)CORTEX_INTERRUPT_89_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 90)
	(uint32_t *)CORTEX_INTERRUPT_90_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 91)
	(uint32_t *)CORTEX_INTERRUPT_91_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 92)
	(uint32_t *)CORTEX_INTERRUPT_92_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 93)
	(uint32_t *)CORTEX_INTERRUPT_93_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 94)
	(uint32_t *)CORTEX_INTERRUPT_94_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 95)
	(uint32_t *)CORTEX_INTERRUPT_95_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 96)
	(uint32_t *)CORTEX_INTERRUPT_96_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 97)
	(uint32_t *)CORTEX_INTERRUPT_97_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 98)
	(uint32_t *)CORTEX_INTERRUPT_98_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 99)
	(uint32_t *)CORTEX_INTERRUPT_99_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 100)
	(uint32_t *)CORTEX_INTERRUPT_100_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 101)
	(uint32_t *)CORTEX_INTERRUPT_101_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 102)
	(uint32_t *)CORTEX_INTERRUPT_102_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 103)
	(uint32_t *)CORTEX_INTERRUPT_103_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 104)
	(uint32_t *)CORTEX_INTERRUPT_104_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 105)
	(uint32_t *)CORTEX_INTERRUPT_105_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 106)
	(uint32_t *)CORTEX_INTERRUPT_106_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 107)
	(uint32_t *)CORTEX_INTERRUPT_107_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 108)
	(uint32_t *)CORTEX_INTERRUPT_108_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 109)
	(uint32_t *)CORTEX_INTERRUPT_109_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 110)
	(uint32_t *)CORTEX_INTERRUPT_110_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 111)
	(uint32_t *)CORTEX_INTERRUPT_111_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 112)
	(uint32_t *)CORTEX_INTERRUPT_112_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 113)
	(uint32_t *)CORTEX_INTERRUPT_113_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 114)
	(uint32_t *)CORTEX_INTERRUPT_114_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 115)
	(uint32_t *)CORTEX_INTERRUPT_115_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 116)
	(uint32_t *)CORTEX_INTERRUPT_116_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 117)
	(uint32_t *)CORTEX_INTERRUPT_117_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 118)
	(uint32_t *)CORTEX_INTERRUPT_118_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 119)
	(uint32_t *)CORTEX_INTERRUPT_119_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 120)
	(uint32_t *)CORTEX_INTERRUPT_120_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 121)
	(uint32_t *)CORTEX_INTERRUPT_121_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 122)
	(uint32_t *)CORTEX_INTERRUPT_122_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 123)
	(uint32_t *)CORTEX_INTERRUPT_123_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 124)
	(uint32_t *)CORTEX_INTERRUPT_124_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 125)
	(uint32_t *)CORTEX_INTERRUPT_125_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 126)
	(uint32_t *)CORTEX_INTERRUPT_126_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 127)
	(uint32_t *)CORTEX_INTERRUPT_127_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 128)
	(uint32_t *)CORTEX_INTERRUPT_128_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 129)
	(uint32_t *)CORTEX_INTERRUPT_129_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 130)
	(uint32_t *)CORTEX_INTERRUPT_130_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 131)
	(uint32_t *)CORTEX_INTERRUPT_131_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 132)
	(uint32_t *)CORTEX_INTERRUPT_132_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 133)
	(uint32_t *)CORTEX_INTERRUPT_133_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 134)
	(uint32_t *)CORTEX_INTERRUPT_134_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 135)
	(uint32_t *)CORTEX_INTERRUPT_135_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 136)
	(uint32_t *)CORTEX_INTERRUPT_136_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 137)
	(uint32_t *)CORTEX_INTERRUPT_137_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 138)
	(uint32_t *)CORTEX_INTERRUPT_138_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 139)
	(uint32_t *)CORTEX_INTERRUPT_139_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 140)
	(uint32_t *)CORTEX_INTERRUPT_140_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 141)
	(uint32_t *)CORTEX_INTERRUPT_141_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 142)
	(uint32_t *)CORTEX_INTERRUPT_142_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 143)
	(uint32_t *)CORTEX_INTERRUPT_143_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 144)
	(uint32_t *)CORTEX_INTERRUPT_144_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 145)
	(uint32_t *)CORTEX_INTERRUPT_145_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 146)
	(uint32_t *)CORTEX_INTERRUPT_146_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 147)
	(uint32_t *)CORTEX_INTERRUPT_147_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 148)
	(uint32_t *)CORTEX_INTERRUPT_148_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 149)
	(uint32_t *)CORTEX_INTERRUPT_149_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 150)
	(uint32_t *)CORTEX_INTERRUPT_150_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 151)
	(uint32_t *)CORTEX_INTERRUPT_151_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 152)
	(uint32_t *)CORTEX_INTERRUPT_152_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 153)
	(uint32_t *)CORTEX_INTERRUPT_153_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 154)
	(uint32_t *)CORTEX_INTERRUPT_154_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 155)
	(uint32_t *)CORTEX_INTERRUPT_155_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 156)
	(uint32_t *)CORTEX_INTERRUPT_156_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 157)
	(uint32_t *)CORTEX_INTERRUPT_157_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 158)
	(uint32_t *)CORTEX_INTERRUPT_158_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 159)
	(uint32_t *)CORTEX_INTERRUPT_159_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 160)
	(uint32_t *)CORTEX_INTERRUPT_160_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 161)
	(uint32_t *)CORTEX_INTERRUPT_161_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 162)
	(uint32_t *)CORTEX_INTERRUPT_162_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 163)
	(uint32_t *)CORTEX_INTERRUPT_163_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 164)
	(uint32_t *)CORTEX_INTERRUPT_164_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 165)
	(uint32_t *)CORTEX_INTERRUPT_165_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 166)
	(uint32_t *)CORTEX_INTERRUPT_166_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 167)
	(uint32_t *)CORTEX_INTERRUPT_167_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 168)
	(uint32_t *)CORTEX_INTERRUPT_168_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 169)
	(uint32_t *)CORTEX_INTERRUPT_169_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 170)
	(uint32_t *)CORTEX_INTERRUPT_170_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 171)
	(uint32_t *)CORTEX_INTERRUPT_171_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 172)
	(uint32_t *)CORTEX_INTERRUPT_172_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 173)
	(uint32_t *)CORTEX_INTERRUPT_173_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 174)
	(uint32_t *)CORTEX_INTERRUPT_174_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 175)
	(uint32_t *)CORTEX_INTERRUPT_175_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 176)
	(uint32_t *)CORTEX_INTERRUPT_176_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 177)
	(uint32_t *)CORTEX_INTERRUPT_177_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 178)
	(uint32_t *)CORTEX_INTERRUPT_178_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 179)
	(uint32_t *)CORTEX_INTERRUPT_179_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 180)
	(uint32_t *)CORTEX_INTERRUPT_180_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 181)
	(uint32_t *)CORTEX_INTERRUPT_181_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 182)
	(uint32_t *)CORTEX_INTERRUPT_182_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 183)
	(uint32_t *)CORTEX_INTERRUPT_183_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 184)
	(uint32_t *)CORTEX_INTERRUPT_184_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 185)
	(uint32_t *)CORTEX_INTERRUPT_185_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 186)
	(uint32_t *)CORTEX_INTERRUPT_186_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 187)
	(uint32_t *)CORTEX_INTERRUPT_187_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 188)
	(uint32_t *)CORTEX_INTERRUPT_188_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 189)
	(uint32_t *)CORTEX_INTERRUPT_189_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 190)
	(uint32_t *)CORTEX_INTERRUPT_190_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 191)
	(uint32_t *)CORTEX_INTERRUPT_191_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 192)
	(uint32_t *)CORTEX_INTERRUPT_192_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 193)
	(uint32_t *)CORTEX_INTERRUPT_193_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 194)
	(uint32_t *)CORTEX_INTERRUPT_194_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 195)
	(uint32_t *)CORTEX_INTERRUPT_195_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 196)
	(uint32_t *)CORTEX_INTERRUPT_196_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 197)
	(uint32_t *)CORTEX_INTERRUPT_197_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 198)
	(uint32_t *)CORTEX_INTERRUPT_198_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 199)
	(uint32_t *)CORTEX_INTERRUPT_199_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 200)
	(uint32_t *)CORTEX_INTERRUPT_200_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 201)
	(uint32_t *)CORTEX_INTERRUPT_201_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 202)
	(uint32_t *)CORTEX_INTERRUPT_202_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 203)
	(uint32_t *)CORTEX_INTERRUPT_203_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 204)
	(uint32_t *)CORTEX_INTERRUPT_204_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 205)
	(uint32_t *)CORTEX_INTERRUPT_205_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 206)
	(uint32_t *)CORTEX_INTERRUPT_206_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 207)
	(uint32_t *)CORTEX_INTERRUPT_207_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 208)
	(uint32_t *)CORTEX_INTERRUPT_208_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 209)
	(uint32_t *)CORTEX_INTERRUPT_209_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 210)
	(uint32_t *)CORTEX_INTERRUPT_210_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 211)
	(uint32_t *)CORTEX_INTERRUPT_211_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 212)
	(uint32_t *)CORTEX_INTERRUPT_212_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 213)
	(uint32_t *)CORTEX_INTERRUPT_213_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 214)
	(uint32_t *)CORTEX_INTERRUPT_214_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 215)
	(uint32_t *)CORTEX_INTERRUPT_215_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 216)
	(uint32_t *)CORTEX_INTERRUPT_216_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 217)
	(uint32_t *)CORTEX_INTERRUPT_217_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 218)
	(uint32_t *)CORTEX_INTERRUPT_218_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 219)
	(uint32_t *)CORTEX_INTERRUPT_219_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 220)
	(uint32_t *)CORTEX_INTERRUPT_220_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 221)
	(uint32_t *)CORTEX_INTERRUPT_221_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 222)
	(uint32_t *)CORTEX_INTERRUPT_222_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 223)
	(uint32_t *)CORTEX_INTERRUPT_223_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 224)
	(uint32_t *)CORTEX_INTERRUPT_224_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 225)
	(uint32_t *)CORTEX_INTERRUPT_225_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 226)
	(uint32_t *)CORTEX_INTERRUPT_226_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 227)
	(uint32_t *)CORTEX_INTERRUPT_227_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 228)
	(uint32_t *)CORTEX_INTERRUPT_228_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 229)
	(uint32_t *)CORTEX_INTERRUPT_229_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 230)
	(uint32_t *)CORTEX_INTERRUPT_230_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 231)
	(uint32_t *)CORTEX_INTERRUPT_231_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 232)
	(uint32_t *)CORTEX_INTERRUPT_232_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 233)
	(uint32_t *)CORTEX_INTERRUPT_233_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 234)
	(uint32_t *)CORTEX_INTERRUPT_234_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 235)
	(uint32_t *)CORTEX_INTERRUPT_235_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 236)
	(uint32_t *)CORTEX_INTERRUPT_236_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 237)
	(uint32_t *)CORTEX_INTERRUPT_237_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 238)
	(uint32_t *)CORTEX_INTERRUPT_238_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 239)
	(uint32_t *)CORTEX_INTERRUPT_239_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 240)
	(uint32_t *)CORTEX_INTERRUPT_240_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 241)
	(uint32_t *)CORTEX_INTERRUPT_241_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 242)
	(uint32_t *)CORTEX_INTERRUPT_242_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 243)
	(uint32_t *)CORTEX_INTERRUPT_243_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 244)
	(uint32_t *)CORTEX_INTERRUPT_244_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 245)
	(uint32_t *)CORTEX_INTERRUPT_245_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 246)
	(uint32_t *)CORTEX_INTERRUPT_246_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 247)
	(uint32_t *)CORTEX_INTERRUPT_247_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 248)
	(uint32_t *)CORTEX_INTERRUPT_248_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 249)
	(uint32_t *)CORTEX_INTERRUPT_249_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 250)
	(uint32_t *)CORTEX_INTERRUPT_250_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 251)
	(uint32_t *)CORTEX_INTERRUPT_251_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 252)
	(uint32_t *)CORTEX_INTERRUPT_252_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 253)
	(uint32_t *)CORTEX_INTERRUPT_253_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 254)
	(uint32_t *)CORTEX_INTERRUPT_254_Handler,
#endif
#if (CORTEX_INTERRUPT_MAX > 255)
	(uint32_t *)CORTEX_INTERRUPT_255_Handler,
#endif
};

static void crt0(void){
	uint8_t *m, *n;
	uint32_t i;
	crt1();
	// disable all interrupts
	cortex_interrupts_disable();
	for(i = 0; i < CORTEX_INTERRUPT_MAX; i++)cortex_interrupt_disable(i);
	crt2();
//#ifndef __ARM_ARCH_6M__ // if not cortex m0
	// locate interrupt vectors
	SCB->VTOR = (uint32_t)&cortex_vectors[0];
//#endif
	// http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.dui0553a/ch01s01s04.html
	// kuidagi oleks vaja detektida, et mitte-FPU puhul seda ei teeks: http://stackoverflow.com/questions/2224334/gcc-dump-preprocessor-defines
	SCB->CPACR |= ((((uint32_t)0x03) << 20) | (((uint32_t)0x03) << 22));  /* set CP10 and CP11 Full Access */
	__asm__("dsb"); // wait for store to complete
	__asm__("isb"); // reset pipeline
	crt3();
	for(m = &__data_beg__, n = &__text_end__; m < &__data_end__; m++, n++){
		*m = *n;
	}
	crt4();
	for(m = &__bss_beg__; m < &__bss_end__; m++){
		*m = 0;
	}
	crt5();
	// set stack pointer back to cortex_vectors[0]
	__asm__("mov r2, %0": : "r" (cortex_vectors));
	__asm__("ldr r3, [r2, #0]");
	__asm__("mov sp, r3");
	// jump to main
	__asm__("mov r3, %0": : "r" (main));
	__asm__("bx r3");
}

void cortex_bootstrap(void *start){
	uint32_t i;
	cortex_interrupts_disable();
	for(i = 0; i < CORTEX_INTERRUPT_MAX; i++)cortex_interrupt_disable(i);
	// set stack pointer to ((uint32_t *)start)[0]
	__asm__("mov r2, %0": : "r" (start));
	__asm__("ldr r3, [r2, #0]");
	__asm__("mov sp, r3");
	// jump to ((uint32_t *)start)[1]
	__asm__("ldr r3, [r2, #4]");
	__asm__("bx r3");
	while(1);
}

void cortex_reboot(){
	SCB->AIRCR = (SCB->AIRCR & (((uint32_t)0x07) << 8)) | (((uint32_t)0x05FA) << 16) | SCB_AIRCR_SYSRESETREQ;
	while(1);
}

