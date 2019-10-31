int main() 
{ 
  __asm__ __volatile__ ( 
                         "lui ra,0xb4c1f;"
                         "lui sp,0xb26ed;"
                         "lui gp,0xc9eac;"
                         "lui tp,0x34ed6;"
                         "lui t0,0xe39c;"
                         "lui t1,0x95e93;"
                         "lui t2,0x896f8;"
                         "lui s0,0x55f11;"
                         "lui s1,0xe2161;"
                         "lui a0,0x8813b;"
                         "lui a1,0xb5c8b;"
                         "lui a2,0xedcb2;"
                         "lui a3,0x144dd;"
                         "lui a4,0x72316;"
                         "lui a5,0x2b181;"
                         "lui a6,0x5e89a;"
                         "lui a7,0xf0591;"
                         "lui s2,0x687f;"
                         "lui s3,0x976;"
                         "lui s4,0x12cd3;"
                         "lui s5,0x6233c;"
                         "lui s6,0x6ebd9;"
                         "lui s7,0xcf00;"
                         "lui s8,0xf49fb;"
                         "lui s9,0xe10b6;"
                         "lui s10,0x2288f;"
                         "lui s11,0xcfa37;"
                         "lui t3,0xd7341;"
                         "lui t4,0xcca30;"
                         "lui t5,0xfd95d;"
                         "lui t6,0x7c8e3;"
                         "jal m1;"
                         "m2: li a0, 0x9;"
                         "li a1, 0x9;"
                       );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x1;" 
                         "nop;"
                         "nop;"
                         "nop;"
                       );
  __asm__ __volatile__ ( 
                         // sra r1, r15, r16;
                          "m1: sra ra,a5,a6;"
                         // sra r2, r17, r18;
                          "sra sp,a7,s2;"
                         // sra r3, r19, r20;
                          "sra gp,s3,s4;"
                         // sra r4, r21, r22;
                          "sra tp,s5,s6;"
                         // sra r5, r23, r24;
                          "sra t0,s7,s8;"
                         // sra r6, r25, r26;
                          "sra t1,s9,s10;"
                         // sra r7, r27, r28;
                          "sra t2,s11,t3;"
                         // sra r8, r29, r30;
                          "sra s0,t4,t5;"
                         // sra r9, r31, r32;
                          "sra s1,t6,t0;"
                         // sra r10, r1, r2;
                          "sra a2,ra,sp;"
                         // sra r11, r3, r4;
                          "sra a2,gp,tp;"
                         // sra r12, r5, r6;
                          "sra a2,t0,t1;"
                         // sra r13, r7, r8;
                          "sra a3,t2,s0;"
                         // sra r14, r9, r10;
                          "sra a4,s1,a0;"
                         // sra r15, r11, r12;
                          "sra a5,a1,a2;"
                         // sra r16, r13, r14;
                          "sra a6,a3,a4;"
                         // sra r17, r15, r16;
                          "sra a7,a5,a6;"
                         // sra r18, r17, r18;
                          "sra s2,a7,s2;"
                         // sra r19, r19, r20;
                          "sra s3,s3,s4;"
                         // sra r20, r21, r22;
                          "sra s4,s5,s6;"
                         // sra r21, r23, r24;
                          "sra s5,s7,s8;"
                         // sra r22, r25, r26;
                          "sra s6,s9,s10;"
                         // sra r23, r27, r28;
                          "sra s7,s11,t3;"
                         // sra r24, r29, r30;
                          "sra s8,t4,t5;"
                         // sra r25, r31, r32;
                          "sra s9,t6,t0;"
                         // sra r26, r1, r2;
                          "sra s10,ra,sp;"
                         // sra r27, r3, r4;
                          "sra s11,gp,tp;"
                         // sra r28, r5, r6;
                          "sra t3,t0,t1;"
                         // sra r29, r7, r8;
                          "sra t4,t2,s0;"
                         // sra r30, r9, r10;
                          "sra t5,s1,a0;"
                         // sra r31, r11, r12;
                          "sra t6,a1,a2;"
                         // sra r1, r15, r16;
                          "sra ra,a5,a6;"
                         // sra r2, r17, r18;
                          "sra sp,a7,s2;"
                         // sra r3, r19, r20;
                          "sra gp,s3,s4;"
                         // sra r4, r21, r22;
                          "sra tp,s5,s6;"
                         // sra r5, r23, r24;
                          "sra t0,s7,s8;"
                         // sra r6, r25, r26;
                          "sra t1,s9,s10;"
                         // sra r7, r27, r28;
                          "sra t2,s11,t3;"
                         // sra r8, r29, r30;
                          "sra s0,t4,t5;"
                         // sra r9, r31, r32;
                          "sra s1,t6,t0;"
                         // sra r10, r1, r2;
                          "sra a2,ra,sp;"
                         // sra r11, r3, r4;
                          "sra a2,gp,tp;"
                         // sra r12, r5, r6;
                          "sra a2,t0,t1;"
                         // sra r13, r7, r8;
                          "sra a3,t2,s0;"
                         // sra r14, r9, r10;
                          "sra a4,s1,a0;"
                         // sra r15, r11, r12;
                          "sra a5,a1,a2;"
                         // sra r16, r13, r14;
                          "sra a6,a3,a4;"
                         // sra r17, r15, r16;
                          "sra a7,a5,a6;"
                         // sra r18, r17, r18;
                          "sra s2,a7,s2;"
                         // sra r19, r19, r20;
                          "sra s3,s3,s4;"
                         // sra r20, r21, r22;
                          "sra s4,s5,s6;"
                         // sra r21, r23, r24;
                          "sra s5,s7,s8;"
                         // sra r22, r25, r26;
                          "sra s6,s9,s10;"
                         // sra r23, r27, r28;
                          "sra s7,s11,t3;"
                         // sra r24, r29, r30;
                          "sra s8,t4,t5;"
                         // sra r25, r31, r32;
                          "sra s9,t6,t0;"
                         // sra r26, r1, r2;
                          "sra s10,ra,sp;"
                         // sra r27, r3, r4;
                          "sra s11,gp,tp;"
                         // sra r28, r5, r6;
                          "sra t3,t0,t1;"
                         // sra r29, r7, r8;
                          "sra t4,t2,s0;"
                         // sra r30, r9, r10;
                          "sra t5,s1,a0;"
                         // sra r31, r11, r12;
                          "sra t6,a1,a2;"
                         // sra r1, r15, r16;
                          "sra ra,a5,a6;"
                         // sra r2, r17, r18;
                          "sra sp,a7,s2;"
                         // sra r3, r19, r20;
                          "sra gp,s3,s4;"
                         // sra r4, r21, r22;
                          "sra tp,s5,s6;"
                         // sra r5, r23, r24;
                          "sra t0,s7,s8;"
                         // sra r6, r25, r26;
                          "sra t1,s9,s10;"
                         // sra r7, r27, r28;
                          "sra t2,s11,t3;"
                         // sra r8, r29, r30;
                          "sra s0,t4,t5;"
                         // sra r9, r31, r32;
                          "sra s1,t6,t0;"
                         // sra r10, r1, r2;
                          "sra a2,ra,sp;"
                         // sra r11, r3, r4;
                          "sra a2,gp,tp;"
                         // sra r12, r5, r6;
                          "sra a2,t0,t1;"
                         // sra r13, r7, r8;
                          "sra a3,t2,s0;"
                         // sra r14, r9, r10;
                          "sra a4,s1,a0;"
                         // sra r15, r11, r12;
                          "sra a5,a1,a2;"
                         // sra r16, r13, r14;
                          "sra a6,a3,a4;"
                         // sra r17, r15, r16;
                          "sra a7,a5,a6;"
                         // sra r18, r17, r18;
                          "sra s2,a7,s2;"
                         // sra r19, r19, r20;
                          "sra s3,s3,s4;"
                         // sra r20, r21, r22;
                          "sra s4,s5,s6;"
                         // sra r21, r23, r24;
                          "sra s5,s7,s8;"
                         // sra r22, r25, r26;
                          "sra s6,s9,s10;"
                         // sra r23, r27, r28;
                          "sra s7,s11,t3;"
                         // sra r24, r29, r30;
                          "sra s8,t4,t5;"
                         // sra r25, r31, r32;
                          "sra s9,t6,t0;"
                         // sra r26, r1, r2;
                          "sra s10,ra,sp;"
                         // sra r27, r3, r4;
                          "sra s11,gp,tp;"
                         // sra r28, r5, r6;
                          "sra t3,t0,t1;"
                         // sra r29, r7, r8;
                          "sra t4,t2,s0;"
                         // sra r30, r9, r10;
                          "sra t5,s1,a0;"
                         // sra r31, r11, r12;
                          "sra t6,a1,a2;"
                         // sra r1, r15, r16;
                          "sra ra,a5,a6;"
                         // sra r2, r17, r18;
                          "sra sp,a7,s2;"
                         // sra r3, r19, r20;
                          "sra gp,s3,s4;"
                         // sra r4, r21, r22;
                          "sra tp,s5,s6;"
                         // sra r5, r23, r24;
                          "sra t0,s7,s8;"
                         // sra r6, r25, r26;
                          "sra t1,s9,s10;"
                         // sra r7, r27, r28;
                          "sra t2,s11,t3;"
                         // sra r8, r29, r30;
                          "sra s0,t4,t5;"
                         // sra r9, r31, r32;
                          "sra s1,t6,t0;"
                         // sra r10, r1, r2;
                          "sra a2,ra,sp;"
                         // sra r11, r3, r4;
                          "sra a2,gp,tp;"
                         // sra r12, r5, r6;
                          "sra a2,t0,t1;"
                         // sra r13, r7, r8;
                          "sra a3,t2,s0;"
                         // sra r14, r9, r10;
                          "sra a4,s1,a0;"
                         // sra r15, r11, r12;
                          "sra a5,a1,a2;"
                         // sra r16, r13, r14;
                          "sra a6,a3,a4;"
                         // sra r17, r15, r16;
                          "sra a7,a5,a6;"
                         // sra r18, r17, r18;
                          "sra s2,a7,s2;"
                         // sra r19, r19, r20;
                          "sra s3,s3,s4;"
                         // sra r20, r21, r22;
                          "sra s4,s5,s6;"
                         // sra r21, r23, r24;
                          "sra s5,s7,s8;"
                         // sra r22, r25, r26;
                          "sra s6,s9,s10;"
                         // sra r23, r27, r28;
                          "sra s7,s11,t3;"
                         // sra r24, r29, r30;
                          "sra s8,t4,t5;"
                         // sra r25, r31, r32;
                          "sra s9,t6,t0;"
                         // sra r26, r1, r2;
                          "sra s10,ra,sp;"
                         // sra r27, r3, r4;
                          "sra s11,gp,tp;"
                         // sra r28, r5, r6;
                          "sra t3,t0,t1;"
                         // sra r29, r7, r8;
                          "sra t4,t2,s0;"
                         // sra r30, r9, r10;
                          "sra t5,s1,a0;"
                         // sra r31, r11, r12;
                          "sra t6,a1,a2;"
                         // sra r1, r15, r16;
                          "sra ra,a5,a6;"
                         // sra r2, r17, r18;
                          "sra sp,a7,s2;"
                         // sra r3, r19, r20;
                          "sra gp,s3,s4;"
                         // sra r4, r21, r22;
                          "sra tp,s5,s6;"
                         // sra r5, r23, r24;
                          "sra t0,s7,s8;"
                         // sra r6, r25, r26;
                          "sra t1,s9,s10;"
                         // sra r7, r27, r28;
                          "sra t2,s11,t3;"
                         // sra r8, r29, r30;
                          "sra s0,t4,t5;"
                         // sra r9, r31, r32;
                          "sra s1,t6,t0;"
                         // sra r10, r1, r2;
                          "sra a2,ra,sp;"
                         // sra r11, r3, r4;
                          "sra a2,gp,tp;"
                         // sra r12, r5, r6;
                          "sra a2,t0,t1;"
                         // sra r13, r7, r8;
                          "sra a3,t2,s0;"
                         // sra r14, r9, r10;
                          "sra a4,s1,a0;"
                         // sra r15, r11, r12;
                          "sra a5,a1,a2;"
                         // sra r16, r13, r14;
                          "sra a6,a3,a4;"
                         // sra r17, r15, r16;
                          "sra a7,a5,a6;"
                         // sra r18, r17, r18;
                          "sra s2,a7,s2;"
                         // sra r19, r19, r20;
                          "sra s3,s3,s4;"
                         // sra r20, r21, r22;
                          "sra s4,s5,s6;"
                         // sra r21, r23, r24;
                          "sra s5,s7,s8;"
                         // sra r22, r25, r26;
                          "sra s6,s9,s10;"
                         // sra r23, r27, r28;
                          "sra s7,s11,t3;"
                         // sra r24, r29, r30;
                          "sra s8,t4,t5;"
                         // sra r25, r31, r32;
                          "sra s9,t6,t0;"
                         // sra r26, r1, r2;
                          "sra s10,ra,sp;"
                         // sra r27, r3, r4;
                          "sra s11,gp,tp;"
                         // sra r28, r5, r6;
                          "sra t3,t0,t1;"
                         // sra r29, r7, r8;
                          "sra t4,t2,s0;"
                         // sra r30, r9, r10;
                          "sra t5,s1,a0;"
                         // sra r31, r11, r12;
                          "sra t6,a1,a2;"
                          "beq a0, a1, ms;"
                          "jal m2;"
                       );
  __asm__ __volatile__ ( "ms: csrrwi s9,0x7c1, 0x0;"
                       );
} 
