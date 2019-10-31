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
                         // slt r1, r15, r16;
                          "m1: slt ra,a5,a6;"
                         // slt r2, r17, r18;
                          "slt sp,a7,s2;"
                         // slt r3, r19, r20;
                          "slt gp,s3,s4;"
                         // slt r4, r21, r22;
                          "slt tp,s5,s6;"
                         // slt r5, r23, r24;
                          "slt t0,s7,s8;"
                         // slt r6, r25, r26;
                          "slt t1,s9,s10;"
                         // slt r7, r27, r28;
                          "slt t2,s11,t3;"
                         // slt r8, r29, r30;
                          "slt s0,t4,t5;"
                         // slt r9, r31, r32;
                          "slt s1,t6,t0;"
                         // slt r10, r1, r2;
                          "slt a2,ra,sp;"
                         // slt r11, r3, r4;
                          "slt a2,gp,tp;"
                         // slt r12, r5, r6;
                          "slt a2,t0,t1;"
                         // slt r13, r7, r8;
                          "slt a3,t2,s0;"
                         // slt r14, r9, r10;
                          "slt a4,s1,a0;"
                         // slt r15, r11, r12;
                          "slt a5,a1,a2;"
                         // slt r16, r13, r14;
                          "slt a6,a3,a4;"
                         // slt r17, r15, r16;
                          "slt a7,a5,a6;"
                         // slt r18, r17, r18;
                          "slt s2,a7,s2;"
                         // slt r19, r19, r20;
                          "slt s3,s3,s4;"
                         // slt r20, r21, r22;
                          "slt s4,s5,s6;"
                         // slt r21, r23, r24;
                          "slt s5,s7,s8;"
                         // slt r22, r25, r26;
                          "slt s6,s9,s10;"
                         // slt r23, r27, r28;
                          "slt s7,s11,t3;"
                         // slt r24, r29, r30;
                          "slt s8,t4,t5;"
                         // slt r25, r31, r32;
                          "slt s9,t6,t0;"
                         // slt r26, r1, r2;
                          "slt s10,ra,sp;"
                         // slt r27, r3, r4;
                          "slt s11,gp,tp;"
                         // slt r28, r5, r6;
                          "slt t3,t0,t1;"
                         // slt r29, r7, r8;
                          "slt t4,t2,s0;"
                         // slt r30, r9, r10;
                          "slt t5,s1,a0;"
                         // slt r31, r11, r12;
                          "slt t6,a1,a2;"
                         // slt r1, r15, r16;
                          "slt ra,a5,a6;"
                         // slt r2, r17, r18;
                          "slt sp,a7,s2;"
                         // slt r3, r19, r20;
                          "slt gp,s3,s4;"
                         // slt r4, r21, r22;
                          "slt tp,s5,s6;"
                         // slt r5, r23, r24;
                          "slt t0,s7,s8;"
                         // slt r6, r25, r26;
                          "slt t1,s9,s10;"
                         // slt r7, r27, r28;
                          "slt t2,s11,t3;"
                         // slt r8, r29, r30;
                          "slt s0,t4,t5;"
                         // slt r9, r31, r32;
                          "slt s1,t6,t0;"
                         // slt r10, r1, r2;
                          "slt a2,ra,sp;"
                         // slt r11, r3, r4;
                          "slt a2,gp,tp;"
                         // slt r12, r5, r6;
                          "slt a2,t0,t1;"
                         // slt r13, r7, r8;
                          "slt a3,t2,s0;"
                         // slt r14, r9, r10;
                          "slt a4,s1,a0;"
                         // slt r15, r11, r12;
                          "slt a5,a1,a2;"
                         // slt r16, r13, r14;
                          "slt a6,a3,a4;"
                         // slt r17, r15, r16;
                          "slt a7,a5,a6;"
                         // slt r18, r17, r18;
                          "slt s2,a7,s2;"
                         // slt r19, r19, r20;
                          "slt s3,s3,s4;"
                         // slt r20, r21, r22;
                          "slt s4,s5,s6;"
                         // slt r21, r23, r24;
                          "slt s5,s7,s8;"
                         // slt r22, r25, r26;
                          "slt s6,s9,s10;"
                         // slt r23, r27, r28;
                          "slt s7,s11,t3;"
                         // slt r24, r29, r30;
                          "slt s8,t4,t5;"
                         // slt r25, r31, r32;
                          "slt s9,t6,t0;"
                         // slt r26, r1, r2;
                          "slt s10,ra,sp;"
                         // slt r27, r3, r4;
                          "slt s11,gp,tp;"
                         // slt r28, r5, r6;
                          "slt t3,t0,t1;"
                         // slt r29, r7, r8;
                          "slt t4,t2,s0;"
                         // slt r30, r9, r10;
                          "slt t5,s1,a0;"
                         // slt r31, r11, r12;
                          "slt t6,a1,a2;"
                         // slt r1, r15, r16;
                          "slt ra,a5,a6;"
                         // slt r2, r17, r18;
                          "slt sp,a7,s2;"
                         // slt r3, r19, r20;
                          "slt gp,s3,s4;"
                         // slt r4, r21, r22;
                          "slt tp,s5,s6;"
                         // slt r5, r23, r24;
                          "slt t0,s7,s8;"
                         // slt r6, r25, r26;
                          "slt t1,s9,s10;"
                         // slt r7, r27, r28;
                          "slt t2,s11,t3;"
                         // slt r8, r29, r30;
                          "slt s0,t4,t5;"
                         // slt r9, r31, r32;
                          "slt s1,t6,t0;"
                         // slt r10, r1, r2;
                          "slt a2,ra,sp;"
                         // slt r11, r3, r4;
                          "slt a2,gp,tp;"
                         // slt r12, r5, r6;
                          "slt a2,t0,t1;"
                         // slt r13, r7, r8;
                          "slt a3,t2,s0;"
                         // slt r14, r9, r10;
                          "slt a4,s1,a0;"
                         // slt r15, r11, r12;
                          "slt a5,a1,a2;"
                         // slt r16, r13, r14;
                          "slt a6,a3,a4;"
                         // slt r17, r15, r16;
                          "slt a7,a5,a6;"
                         // slt r18, r17, r18;
                          "slt s2,a7,s2;"
                         // slt r19, r19, r20;
                          "slt s3,s3,s4;"
                         // slt r20, r21, r22;
                          "slt s4,s5,s6;"
                         // slt r21, r23, r24;
                          "slt s5,s7,s8;"
                         // slt r22, r25, r26;
                          "slt s6,s9,s10;"
                         // slt r23, r27, r28;
                          "slt s7,s11,t3;"
                         // slt r24, r29, r30;
                          "slt s8,t4,t5;"
                         // slt r25, r31, r32;
                          "slt s9,t6,t0;"
                         // slt r26, r1, r2;
                          "slt s10,ra,sp;"
                         // slt r27, r3, r4;
                          "slt s11,gp,tp;"
                         // slt r28, r5, r6;
                          "slt t3,t0,t1;"
                         // slt r29, r7, r8;
                          "slt t4,t2,s0;"
                         // slt r30, r9, r10;
                          "slt t5,s1,a0;"
                         // slt r31, r11, r12;
                          "slt t6,a1,a2;"
                         // slt r1, r15, r16;
                          "slt ra,a5,a6;"
                         // slt r2, r17, r18;
                          "slt sp,a7,s2;"
                         // slt r3, r19, r20;
                          "slt gp,s3,s4;"
                         // slt r4, r21, r22;
                          "slt tp,s5,s6;"
                         // slt r5, r23, r24;
                          "slt t0,s7,s8;"
                         // slt r6, r25, r26;
                          "slt t1,s9,s10;"
                         // slt r7, r27, r28;
                          "slt t2,s11,t3;"
                         // slt r8, r29, r30;
                          "slt s0,t4,t5;"
                         // slt r9, r31, r32;
                          "slt s1,t6,t0;"
                         // slt r10, r1, r2;
                          "slt a2,ra,sp;"
                         // slt r11, r3, r4;
                          "slt a2,gp,tp;"
                         // slt r12, r5, r6;
                          "slt a2,t0,t1;"
                         // slt r13, r7, r8;
                          "slt a3,t2,s0;"
                         // slt r14, r9, r10;
                          "slt a4,s1,a0;"
                         // slt r15, r11, r12;
                          "slt a5,a1,a2;"
                         // slt r16, r13, r14;
                          "slt a6,a3,a4;"
                         // slt r17, r15, r16;
                          "slt a7,a5,a6;"
                         // slt r18, r17, r18;
                          "slt s2,a7,s2;"
                         // slt r19, r19, r20;
                          "slt s3,s3,s4;"
                         // slt r20, r21, r22;
                          "slt s4,s5,s6;"
                         // slt r21, r23, r24;
                          "slt s5,s7,s8;"
                         // slt r22, r25, r26;
                          "slt s6,s9,s10;"
                         // slt r23, r27, r28;
                          "slt s7,s11,t3;"
                         // slt r24, r29, r30;
                          "slt s8,t4,t5;"
                         // slt r25, r31, r32;
                          "slt s9,t6,t0;"
                         // slt r26, r1, r2;
                          "slt s10,ra,sp;"
                         // slt r27, r3, r4;
                          "slt s11,gp,tp;"
                         // slt r28, r5, r6;
                          "slt t3,t0,t1;"
                         // slt r29, r7, r8;
                          "slt t4,t2,s0;"
                         // slt r30, r9, r10;
                          "slt t5,s1,a0;"
                         // slt r31, r11, r12;
                          "slt t6,a1,a2;"
                         // slt r1, r15, r16;
                          "slt ra,a5,a6;"
                         // slt r2, r17, r18;
                          "slt sp,a7,s2;"
                         // slt r3, r19, r20;
                          "slt gp,s3,s4;"
                         // slt r4, r21, r22;
                          "slt tp,s5,s6;"
                         // slt r5, r23, r24;
                          "slt t0,s7,s8;"
                         // slt r6, r25, r26;
                          "slt t1,s9,s10;"
                         // slt r7, r27, r28;
                          "slt t2,s11,t3;"
                         // slt r8, r29, r30;
                          "slt s0,t4,t5;"
                         // slt r9, r31, r32;
                          "slt s1,t6,t0;"
                         // slt r10, r1, r2;
                          "slt a2,ra,sp;"
                         // slt r11, r3, r4;
                          "slt a2,gp,tp;"
                         // slt r12, r5, r6;
                          "slt a2,t0,t1;"
                         // slt r13, r7, r8;
                          "slt a3,t2,s0;"
                         // slt r14, r9, r10;
                          "slt a4,s1,a0;"
                         // slt r15, r11, r12;
                          "slt a5,a1,a2;"
                         // slt r16, r13, r14;
                          "slt a6,a3,a4;"
                         // slt r17, r15, r16;
                          "slt a7,a5,a6;"
                         // slt r18, r17, r18;
                          "slt s2,a7,s2;"
                         // slt r19, r19, r20;
                          "slt s3,s3,s4;"
                         // slt r20, r21, r22;
                          "slt s4,s5,s6;"
                         // slt r21, r23, r24;
                          "slt s5,s7,s8;"
                         // slt r22, r25, r26;
                          "slt s6,s9,s10;"
                         // slt r23, r27, r28;
                          "slt s7,s11,t3;"
                         // slt r24, r29, r30;
                          "slt s8,t4,t5;"
                         // slt r25, r31, r32;
                          "slt s9,t6,t0;"
                         // slt r26, r1, r2;
                          "slt s10,ra,sp;"
                         // slt r27, r3, r4;
                          "slt s11,gp,tp;"
                         // slt r28, r5, r6;
                          "slt t3,t0,t1;"
                         // slt r29, r7, r8;
                          "slt t4,t2,s0;"
                         // slt r30, r9, r10;
                          "slt t5,s1,a0;"
                         // slt r31, r11, r12;
                          "slt t6,a1,a2;"
                          "beq a0, a1, ms;"
                          "jal m2;"
                       );
  __asm__ __volatile__ ( "ms: csrrwi s9,0x7c1, 0x0;"
                       );
} 
