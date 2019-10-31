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
                         // or r1, r15, r16;
                          "m1: or ra,a5,a6;"
                         // or r2, r17, r18;
                          "or sp,a7,s2;"
                         // or r3, r19, r20;
                          "or gp,s3,s4;"
                         // or r4, r21, r22;
                          "or tp,s5,s6;"
                         // or r5, r23, r24;
                          "or t0,s7,s8;"
                         // or r6, r25, r26;
                          "or t1,s9,s10;"
                         // or r7, r27, r28;
                          "or t2,s11,t3;"
                         // or r8, r29, r30;
                          "or s0,t4,t5;"
                         // or r9, r31, r32;
                          "or s1,t6,t0;"
                         // or r10, r1, r2;
                          "or a2,ra,sp;"
                         // or r11, r3, r4;
                          "or a2,gp,tp;"
                         // or r12, r5, r6;
                          "or a2,t0,t1;"
                         // or r13, r7, r8;
                          "or a3,t2,s0;"
                         // or r14, r9, r10;
                          "or a4,s1,a0;"
                         // or r15, r11, r12;
                          "or a5,a1,a2;"
                         // or r16, r13, r14;
                          "or a6,a3,a4;"
                         // or r17, r15, r16;
                          "or a7,a5,a6;"
                         // or r18, r17, r18;
                          "or s2,a7,s2;"
                         // or r19, r19, r20;
                          "or s3,s3,s4;"
                         // or r20, r21, r22;
                          "or s4,s5,s6;"
                         // or r21, r23, r24;
                          "or s5,s7,s8;"
                         // or r22, r25, r26;
                          "or s6,s9,s10;"
                         // or r23, r27, r28;
                          "or s7,s11,t3;"
                         // or r24, r29, r30;
                          "or s8,t4,t5;"
                         // or r25, r31, r32;
                          "or s9,t6,t0;"
                         // or r26, r1, r2;
                          "or s10,ra,sp;"
                         // or r27, r3, r4;
                          "or s11,gp,tp;"
                         // or r28, r5, r6;
                          "or t3,t0,t1;"
                         // or r29, r7, r8;
                          "or t4,t2,s0;"
                         // or r30, r9, r10;
                          "or t5,s1,a0;"
                         // or r31, r11, r12;
                          "or t6,a1,a2;"
                         // or r1, r15, r16;
                          "or ra,a5,a6;"
                         // or r2, r17, r18;
                          "or sp,a7,s2;"
                         // or r3, r19, r20;
                          "or gp,s3,s4;"
                         // or r4, r21, r22;
                          "or tp,s5,s6;"
                         // or r5, r23, r24;
                          "or t0,s7,s8;"
                         // or r6, r25, r26;
                          "or t1,s9,s10;"
                         // or r7, r27, r28;
                          "or t2,s11,t3;"
                         // or r8, r29, r30;
                          "or s0,t4,t5;"
                         // or r9, r31, r32;
                          "or s1,t6,t0;"
                         // or r10, r1, r2;
                          "or a2,ra,sp;"
                         // or r11, r3, r4;
                          "or a2,gp,tp;"
                         // or r12, r5, r6;
                          "or a2,t0,t1;"
                         // or r13, r7, r8;
                          "or a3,t2,s0;"
                         // or r14, r9, r10;
                          "or a4,s1,a0;"
                         // or r15, r11, r12;
                          "or a5,a1,a2;"
                         // or r16, r13, r14;
                          "or a6,a3,a4;"
                         // or r17, r15, r16;
                          "or a7,a5,a6;"
                         // or r18, r17, r18;
                          "or s2,a7,s2;"
                         // or r19, r19, r20;
                          "or s3,s3,s4;"
                         // or r20, r21, r22;
                          "or s4,s5,s6;"
                         // or r21, r23, r24;
                          "or s5,s7,s8;"
                         // or r22, r25, r26;
                          "or s6,s9,s10;"
                         // or r23, r27, r28;
                          "or s7,s11,t3;"
                         // or r24, r29, r30;
                          "or s8,t4,t5;"
                         // or r25, r31, r32;
                          "or s9,t6,t0;"
                         // or r26, r1, r2;
                          "or s10,ra,sp;"
                         // or r27, r3, r4;
                          "or s11,gp,tp;"
                         // or r28, r5, r6;
                          "or t3,t0,t1;"
                         // or r29, r7, r8;
                          "or t4,t2,s0;"
                         // or r30, r9, r10;
                          "or t5,s1,a0;"
                         // or r31, r11, r12;
                          "or t6,a1,a2;"
                         // or r1, r15, r16;
                          "or ra,a5,a6;"
                         // or r2, r17, r18;
                          "or sp,a7,s2;"
                         // or r3, r19, r20;
                          "or gp,s3,s4;"
                         // or r4, r21, r22;
                          "or tp,s5,s6;"
                         // or r5, r23, r24;
                          "or t0,s7,s8;"
                         // or r6, r25, r26;
                          "or t1,s9,s10;"
                         // or r7, r27, r28;
                          "or t2,s11,t3;"
                         // or r8, r29, r30;
                          "or s0,t4,t5;"
                         // or r9, r31, r32;
                          "or s1,t6,t0;"
                         // or r10, r1, r2;
                          "or a2,ra,sp;"
                         // or r11, r3, r4;
                          "or a2,gp,tp;"
                         // or r12, r5, r6;
                          "or a2,t0,t1;"
                         // or r13, r7, r8;
                          "or a3,t2,s0;"
                         // or r14, r9, r10;
                          "or a4,s1,a0;"
                         // or r15, r11, r12;
                          "or a5,a1,a2;"
                         // or r16, r13, r14;
                          "or a6,a3,a4;"
                         // or r17, r15, r16;
                          "or a7,a5,a6;"
                         // or r18, r17, r18;
                          "or s2,a7,s2;"
                         // or r19, r19, r20;
                          "or s3,s3,s4;"
                         // or r20, r21, r22;
                          "or s4,s5,s6;"
                         // or r21, r23, r24;
                          "or s5,s7,s8;"
                         // or r22, r25, r26;
                          "or s6,s9,s10;"
                         // or r23, r27, r28;
                          "or s7,s11,t3;"
                         // or r24, r29, r30;
                          "or s8,t4,t5;"
                         // or r25, r31, r32;
                          "or s9,t6,t0;"
                         // or r26, r1, r2;
                          "or s10,ra,sp;"
                         // or r27, r3, r4;
                          "or s11,gp,tp;"
                         // or r28, r5, r6;
                          "or t3,t0,t1;"
                         // or r29, r7, r8;
                          "or t4,t2,s0;"
                         // or r30, r9, r10;
                          "or t5,s1,a0;"
                         // or r31, r11, r12;
                          "or t6,a1,a2;"
                         // or r1, r15, r16;
                          "or ra,a5,a6;"
                         // or r2, r17, r18;
                          "or sp,a7,s2;"
                         // or r3, r19, r20;
                          "or gp,s3,s4;"
                         // or r4, r21, r22;
                          "or tp,s5,s6;"
                         // or r5, r23, r24;
                          "or t0,s7,s8;"
                         // or r6, r25, r26;
                          "or t1,s9,s10;"
                         // or r7, r27, r28;
                          "or t2,s11,t3;"
                          "beq a0, a1, ms;"
                          "jal m2;"
                        /* // or r8, r29, r30;
                          "or s0,t4,t5;"
                         // or r9, r31, r32;
                          "or s1,t6,t0;"
                         // or r10, r1, r2;
                          "or a0,ra,sp;"
                         // or r11, r3, r4;
                          "or a1,gp,tp;"
                         // or r12, r5, r6;
                          "or a2,t0,t1;"
                         // or r13, r7, r8;
                          "or a3,t2,s0;"
                         // or r14, r9, r10;
                          "or a4,s1,a0;"
                         // or r15, r11, r12;
                          "or a5,a1,a2;"
                         // or r16, r13, r14;
                          "or a6,a3,a4;"
                         // or r17, r15, r16;
                          "or a7,a5,a6;"
                         // or r18, r17, r18;
                          "or s2,a7,s2;"
                         // or r19, r19, r20;
                          "or s3,s3,s4;"
                         // or r20, r21, r22;
                          "or s4,s5,s6;"
                         // or r21, r23, r24;
                          "or s5,s7,s8;"
                         // or r22, r25, r26;
                          "or s6,s9,s10;"
                         // or r23, r27, r28;
                          "or s7,s11,t3;"
                         // or r24, r29, r30;
                          "or s8,t4,t5;"
                         // or r25, r31, r32;
                          "or s9,t6,t0;"
                         // or r26, r1, r2;
                          "or s10,ra,sp;"
                         // or r27, r3, r4;
                          "or s11,gp,tp;"
                         // or r28, r5, r6;
                          "or t3,t0,t1;"
                         // or r29, r7, r8;
                          "or t4,t2,s0;"
                         // or r30, r9, r10;
                          "or t5,s1,a0;"
                         // or r31, r11, r12;
                          "or t6,a1,a2;"
                         // or r1, r15, r16;
                          "or ra,a5,a6;"
                         // or r2, r17, r18;
                          "or sp,a7,s2;"
                         // or r3, r19, r20;
                          "or gp,s3,s4;"
                         // or r4, r21, r22;
                          "or tp,s5,s6;"
                         // or r5, r23, r24;
                          "or t0,s7,s8;"
                         // or r6, r25, r26;
                          "or t1,s9,s10;"
                         // or r7, r27, r28;
                          "or t2,s11,t3;"
                         // or r8, r29, r30;
                          "or s0,t4,t5;"
                         // or r9, r31, r32;
                          "or s1,t6,t0;"
                         // or r10, r1, r2;
                          "or a0,ra,sp;"
                         // or r11, r3, r4;
                          "or a1,gp,tp;"
                         // or r12, r5, r6;
                          "or a2,t0,t1;"
                         // or r13, r7, r8;
                          "or a3,t2,s0;"
                         // or r14, r9, r10;
                          "or a4,s1,a0;"
                         // or r15, r11, r12;
                          "or a5,a1,a2;"
                         // or r16, r13, r14;
                          "or a6,a3,a4;"
                         // or r17, r15, r16;
                          "or a7,a5,a6;"
                         // or r18, r17, r18;
                          "or s2,a7,s2;"
                         // or r19, r19, r20;
                          "or s3,s3,s4;"
                         // or r20, r21, r22;
                          "or s4,s5,s6;"
                         // or r21, r23, r24;
                          "or s5,s7,s8;"
                         // or r22, r25, r26;
                          "or s6,s9,s10;"
                         // or r23, r27, r28;
                          "or s7,s11,t3;"
                         // or r24, r29, r30;
                          "or s8,t4,t5;"
                         // or r25, r31, r32;
                          "or s9,t6,t0;"
                         // or r26, r1, r2;
                          "or s10,ra,sp;"
                         // or r27, r3, r4;
                          "or s11,gp,tp;"
                         // or r28, r5, r6;
                          "or t3,t0,t1;"
                         // or r29, r7, r8;
                          "or t4,t2,s0;"
                         // or r30, r9, r10;
                          "or t5,s1,a0;"
                         // or r31, r11, r12;
                          "or t6,a1,a2;"*/
                       );
  __asm__ __volatile__ ( "ms: csrrwi s9,0x7c1, 0x0;"
                       );
} 
