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
                       );
  __asm__ __volatile__ ( "m2: li a0, 0x9;"
                         "li a1, 0x9;"
                         "csrrwi s9,0x7c1, 0x1;" 
                         "nop;"
                         "nop;"
                         "nop;"
                       );
  __asm__ __volatile__ ( 
                         // mul r1, r15, r16;
                          "m1: mul ra,a5,a6;"
                         // mul r2, r17, r18;
                          "mul sp,a7,s2;"
                         // mul r3, r19, r20;
                          "mul gp,s3,s4;"
                         // mul r4, r21, r22;
                          "mul tp,s5,s6;"
                         // mul r5, r23, r24;
                          "mul t0,s7,s8;"
                         // mul r6, r25, r26;
                          "mul t1,s9,s10;"
                         // mul r7, r27, r28;
                          "mul t2,s11,t3;"
                         // mul r8, r29, r30;
                          "mul s0,t4,t5;"
                         // mul r9, r31, r32;
                          "mul s1,t6,t0;"
                         // mul r10, r1, r2;
                          "mul a2,ra,sp;"
                         // mul r11, r3, r4;
                          "mul a2,gp,tp;"
                         // mul r12, r5, r6;
                          "mul a2,t0,t1;"
                         // mul r13, r7, r8;
                          "mul a3,t2,s0;"
                         // mul r14, r9, r10;
                          "mul a4,s1,a0;"
                         // mul r15, r11, r12;
                          "mul a5,a1,a2;"
                         // mul r16, r13, r14;
                          "mul a6,a3,a4;"
                         // mul r17, r15, r16;
                          "mul a7,a5,a6;"
                         // mul r18, r17, r18;
                          "mul s2,a7,s2;"
                         // mul r19, r19, r20;
                          "mul s3,s3,s4;"
                         // mul r20, r21, r22;
                          "mul s4,s5,s6;"
                         // mul r21, r23, r24;
                          "mul s5,s7,s8;"
                         // mul r22, r25, r26;
                          "mul s6,s9,s10;"
                         // mul r23, r27, r28;
                          "mul s7,s11,t3;"
                         // mul r24, r29, r30;
                          "mul s8,t4,t5;"
                         // mul r25, r31, r32;
                          "mul s9,t6,t0;"
                         // mul r26, r1, r2;
                          "mul s10,ra,sp;"
                         // mul r27, r3, r4;
                          "mul s11,gp,tp;"
                         // mul r28, r5, r6;
                          "mul t3,t0,t1;"
                         // mul r29, r7, r8;
                          "mul t4,t2,s0;"
                         // mul r30, r9, r10;
                          "mul t5,s1,a0;"
                         // mul r31, r11, r12;
                          "mul t6,a1,a2;"
                         // mul r1, r15, r16;
                          "mul ra,a5,a6;"
                         // mul r2, r17, r18;
                          "mul sp,a7,s2;"
                         // mul r3, r19, r20;
                          "mul gp,s3,s4;"
                         // mul r4, r21, r22;
                          "mul tp,s5,s6;"
                         // mul r5, r23, r24;
                          "mul t0,s7,s8;"
                         // mul r6, r25, r26;
                          "mul t1,s9,s10;"
                         // mul r7, r27, r28;
                          "mul t2,s11,t3;"
                         // mul r8, r29, r30;
                          "mul s0,t4,t5;"
                         // mul r9, r31, r32;
                          "mul s1,t6,t0;"
                         // mul r10, r1, r2;
                          "mul a2,ra,sp;"
                         // mul r11, r3, r4;
                          "mul a2,gp,tp;"
                         // mul r12, r5, r6;
                          "mul a2,t0,t1;"
                         // mul r13, r7, r8;
                          "mul a3,t2,s0;"
                         // mul r14, r9, r10;
                          "mul a4,s1,a0;"
                         // mul r15, r11, r12;
                          "mul a5,a1,a2;"
                         // mul r16, r13, r14;
                          "mul a6,a3,a4;"
                         // mul r17, r15, r16;
                          "mul a7,a5,a6;"
                         // mul r18, r17, r18;
                          "mul s2,a7,s2;"
                         // mul r19, r19, r20;
                          "mul s3,s3,s4;"
                         // mul r20, r21, r22;
                          "mul s4,s5,s6;"
                         // mul r21, r23, r24;
                          "mul s5,s7,s8;"
                         // mul r22, r25, r26;
                          "mul s6,s9,s10;"
                         // mul r23, r27, r28;
                          "mul s7,s11,t3;"
                         // mul r24, r29, r30;
                          "mul s8,t4,t5;"
                         // mul r25, r31, r32;
                          "mul s9,t6,t0;"
                         // mul r26, r1, r2;
                          "mul s10,ra,sp;"
                         // mul r27, r3, r4;
                          "mul s11,gp,tp;"
                         // mul r28, r5, r6;
                          "mul t3,t0,t1;"
                         // mul r29, r7, r8;
                          "mul t4,t2,s0;"
                         // mul r30, r9, r10;
                          "mul t5,s1,a0;"
                         // mul r31, r11, r12;
                          "mul t6,a1,a2;"
                         // mul r1, r15, r16;
                          "mul ra,a5,a6;"
                         // mul r2, r17, r18;
                          "mul sp,a7,s2;"
                         // mul r3, r19, r20;
                          "mul gp,s3,s4;"
                         // mul r4, r21, r22;
                          "mul tp,s5,s6;"
                         // mul r5, r23, r24;
                          "mul t0,s7,s8;"
                         // mul r6, r25, r26;
                          "mul t1,s9,s10;"
                         // mul r7, r27, r28;
                          "mul t2,s11,t3;"
                         // mul r8, r29, r30;
                          "mul s0,t4,t5;"
                         // mul r9, r31, r32;
                          "mul s1,t6,t0;"
                         // mul r10, r1, r2;
                          "mul a2,ra,sp;"
                         // mul r11, r3, r4;
                          "mul a2,gp,tp;"
                         // mul r12, r5, r6;
                          "mul a2,t0,t1;"
                         // mul r13, r7, r8;
                          "mul a3,t2,s0;"
                         // mul r14, r9, r10;
                          "mul a4,s1,a0;"
                         // mul r15, r11, r12;
                          "mul a5,a1,a2;"
                         // mul r16, r13, r14;
                          "mul a6,a3,a4;"
                         // mul r17, r15, r16;
                          "mul a7,a5,a6;"
                         // mul r18, r17, r18;
                          "mul s2,a7,s2;"
                         // mul r19, r19, r20;
                          "mul s3,s3,s4;"
                         // mul r20, r21, r22;
                          "mul s4,s5,s6;"
                         // mul r21, r23, r24;
                          "mul s5,s7,s8;"
                         // mul r22, r25, r26;
                          "mul s6,s9,s10;"
                         // mul r23, r27, r28;
                          "mul s7,s11,t3;"
                         // mul r24, r29, r30;
                          "mul s8,t4,t5;"
                         // mul r25, r31, r32;
                          "mul s9,t6,t0;"
                         // mul r26, r1, r2;
                          "mul s10,ra,sp;"
                         // mul r27, r3, r4;
                          "mul s11,gp,tp;"
                         // mul r28, r5, r6;
                          "mul t3,t0,t1;"
                         // mul r29, r7, r8;
                          "mul t4,t2,s0;"
                         // mul r30, r9, r10;
                          "mul t5,s1,a0;"
                         // mul r31, r11, r12;
                          "mul t6,a1,a2;"
                         // mul r1, r15, r16;
                          "mul ra,a5,a6;"
                         // mul r2, r17, r18;
                          "mul sp,a7,s2;"
                         // mul r3, r19, r20;
                          "mul gp,s3,s4;"
                         // mul r4, r21, r22;
                          "mul tp,s5,s6;"
                         // mul r5, r23, r24;
                          "mul t0,s7,s8;"
                         // mul r6, r25, r26;
                          "mul t1,s9,s10;"
                         // mul r7, r27, r28;
                          "mul t2,s11,t3;"
                         // mul r8, r29, r30;
                          "mul s0,t4,t5;"
                         // mul r9, r31, r32;
                          "mul s1,t6,t0;"
                         // mul r10, r1, r2;
                          "mul a2,ra,sp;"
                         // mul r11, r3, r4;
                          "mul a2,gp,tp;"
                         // mul r12, r5, r6;
                          "mul a2,t0,t1;"
                         // mul r13, r7, r8;
                          "mul a3,t2,s0;"
                         // mul r14, r9, r10;
                          "mul a4,s1,a0;"
                         // mul r15, r11, r12;
                          "mul a5,a1,a2;"
                         // mul r16, r13, r14;
                          "mul a6,a3,a4;"
                         // mul r17, r15, r16;
                          "mul a7,a5,a6;"
                         // mul r18, r17, r18;
                          "mul s2,a7,s2;"
                         // mul r19, r19, r20;
                          "mul s3,s3,s4;"
                         // mul r20, r21, r22;
                          "mul s4,s5,s6;"
                         // mul r21, r23, r24;
                          "mul s5,s7,s8;"
                         // mul r22, r25, r26;
                          "mul s6,s9,s10;"
                         // mul r23, r27, r28;
                          "mul s7,s11,t3;"
                         // mul r24, r29, r30;
                          "mul s8,t4,t5;"
                         // mul r25, r31, r32;
                          "mul s9,t6,t0;"
                         // mul r26, r1, r2;
                          "mul s10,ra,sp;"
                         // mul r27, r3, r4;
                          "mul s11,gp,tp;"
                         // mul r28, r5, r6;
                          "mul t3,t0,t1;"
                         // mul r29, r7, r8;
                          "mul t4,t2,s0;"
                         // mul r30, r9, r10;
                          "mul t5,s1,a0;"
                         // mul r31, r11, r12;
                          "mul t6,a1,a2;"
                         // mul r1, r15, r16;
                          "mul ra,a5,a6;"
                         // mul r2, r17, r18;
                          "mul sp,a7,s2;"
                         // mul r3, r19, r20;
                          "mul gp,s3,s4;"
                         // mul r4, r21, r22;
                          "mul tp,s5,s6;"
                         // mul r5, r23, r24;
                          "mul t0,s7,s8;"
                         // mul r6, r25, r26;
                          "mul t1,s9,s10;"
                         // mul r7, r27, r28;
                          "mul t2,s11,t3;"
                         // mul r8, r29, r30;
                          "mul s0,t4,t5;"
                         // mul r9, r31, r32;
                          "mul s1,t6,t0;"
                         // mul r10, r1, r2;
                          "mul a2,ra,sp;"
                         // mul r11, r3, r4;
                          "mul a2,gp,tp;"
                         // mul r12, r5, r6;
                          "mul a2,t0,t1;"
                         // mul r13, r7, r8;
                          "mul a3,t2,s0;"
                         // mul r14, r9, r10;
                          "mul a4,s1,a0;"
                         // mul r15, r11, r12;
                          "mul a5,a1,a2;"
                         // mul r16, r13, r14;
                          "mul a6,a3,a4;"
                         // mul r17, r15, r16;
                          "mul a7,a5,a6;"
                         // mul r18, r17, r18;
                          "mul s2,a7,s2;"
                         // mul r19, r19, r20;
                          "mul s3,s3,s4;"
                         // mul r20, r21, r22;
                          "mul s4,s5,s6;"
                         // mul r21, r23, r24;
                          "mul s5,s7,s8;"
                         // mul r22, r25, r26;
                          "mul s6,s9,s10;"
                         // mul r23, r27, r28;
                          "mul s7,s11,t3;"
                         // mul r24, r29, r30;
                          "mul s8,t4,t5;"
                         // mul r25, r31, r32;
                          "mul s9,t6,t0;"
                         // mul r26, r1, r2;
                          "mul s10,ra,sp;"
                         // mul r27, r3, r4;
                          "mul s11,gp,tp;"
                         // mul r28, r5, r6;
                          "mul t3,t0,t1;"
                         // mul r29, r7, r8;
                          "mul t4,t2,s0;"
                         // mul r30, r9, r10;
                          "mul t5,s1,a0;"
                         // mul r31, r11, r12;
                          "mul t6,a1,a2;"
                          "beq a0, a1, ms;"
                          "jal m2;"
                       );
  __asm__ __volatile__ ( "ms: csrrwi s9,0x7c1, 0x0;"
                       );
} 
