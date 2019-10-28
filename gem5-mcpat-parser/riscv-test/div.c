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
                       );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x1;" 
                         "nop;"
                         "nop;"
                         "nop;"
                       );
  __asm__ __volatile__ ( 
                         // div r1, r15, r16;
                          "div ra,a5,a6;"
                         // div r2, r17, r18;
                          "div sp,a7,s2;"
                         // div r3, r19, r20;
                          "div gp,s3,s4;"
                         // div r4, r21, r22;
                          "div tp,s5,s6;"
                         // div r5, r23, r24;
                          "div t0,s7,s8;"
                         // div r6, r25, r26;
                          "div t1,s9,s10;"
                         // div r7, r27, r28;
                          "div t2,s11,t3;"
                         // div r8, r29, r30;
                          "div s0,t4,t5;"
                         // div r9, r31, r32;
                          "div s1,t6,t0;"
                         // div r10, r1, r2;
                          "div a0,ra,sp;"
                         // div r11, r3, r4;
                          "div a1,gp,tp;"
                         // div r12, r5, r6;
                          "div a2,t0,t1;"
                         // div r13, r7, r8;
                          "div a3,t2,s0;"
                         // div r14, r9, r10;
                          "div a4,s1,a0;"
                         // div r15, r11, r12;
                          "div a5,a1,a2;"
                         // div r16, r13, r14;
                          "div a6,a3,a4;"
                         // div r17, r15, r16;
                          "div a7,a5,a6;"
                         // div r18, r17, r18;
                          "div s2,a7,s2;"
                         // div r19, r19, r20;
                          "div s3,s3,s4;"
                         // div r20, r21, r22;
                          "div s4,s5,s6;"
                         // div r21, r23, r24;
                          "div s5,s7,s8;"
                         // div r22, r25, r26;
                          "div s6,s9,s10;"
                         // div r23, r27, r28;
                          "div s7,s11,t3;"
                         // div r24, r29, r30;
                          "div s8,t4,t5;"
                         // div r25, r31, r32;
                          "div s9,t6,t0;"
                         // div r26, r1, r2;
                          "div s10,ra,sp;"
                         // div r27, r3, r4;
                          "div s11,gp,tp;"
                         // div r28, r5, r6;
                          "div t3,t0,t1;"
                         // div r29, r7, r8;
                          "div t4,t2,s0;"
                         // div r30, r9, r10;
                          "div t5,s1,a0;"
                         // div r31, r11, r12;
                          "div t6,a1,a2;"
                         // div r1, r15, r16;
                          "div ra,a5,a6;"
                         // div r2, r17, r18;
                          "div sp,a7,s2;"
                         // div r3, r19, r20;
                          "div gp,s3,s4;"
                         // div r4, r21, r22;
                          "div tp,s5,s6;"
                         // div r5, r23, r24;
                          "div t0,s7,s8;"
                         // div r6, r25, r26;
                          "div t1,s9,s10;"
                         // div r7, r27, r28;
                          "div t2,s11,t3;"
                         // div r8, r29, r30;
                          "div s0,t4,t5;"
                         // div r9, r31, r32;
                          "div s1,t6,t0;"
                         // div r10, r1, r2;
                          "div a0,ra,sp;"
                         // div r11, r3, r4;
                          "div a1,gp,tp;"
                         // div r12, r5, r6;
                          "div a2,t0,t1;"
                         // div r13, r7, r8;
                          "div a3,t2,s0;"
                         // div r14, r9, r10;
                          "div a4,s1,a0;"
                         // div r15, r11, r12;
                          "div a5,a1,a2;"
                         // div r16, r13, r14;
                          "div a6,a3,a4;"
                         // div r17, r15, r16;
                          "div a7,a5,a6;"
                         // div r18, r17, r18;
                          "div s2,a7,s2;"
                         // div r19, r19, r20;
                          "div s3,s3,s4;"
                         // div r20, r21, r22;
                          "div s4,s5,s6;"
                         // div r21, r23, r24;
                          "div s5,s7,s8;"
                         // div r22, r25, r26;
                          "div s6,s9,s10;"
                         // div r23, r27, r28;
                          "div s7,s11,t3;"
                         // div r24, r29, r30;
                          "div s8,t4,t5;"
                         // div r25, r31, r32;
                          "div s9,t6,t0;"
                         // div r26, r1, r2;
                          "div s10,ra,sp;"
                         // div r27, r3, r4;
                          "div s11,gp,tp;"
                         // div r28, r5, r6;
                          "div t3,t0,t1;"
                         // div r29, r7, r8;
                          "div t4,t2,s0;"
                         // div r30, r9, r10;
                          "div t5,s1,a0;"
                         // div r31, r11, r12;
                          "div t6,a1,a2;"
                         // div r1, r15, r16;
                          "div ra,a5,a6;"
                         // div r2, r17, r18;
                          "div sp,a7,s2;"
                         // div r3, r19, r20;
                          "div gp,s3,s4;"
                         // div r4, r21, r22;
                          "div tp,s5,s6;"
                         // div r5, r23, r24;
                          "div t0,s7,s8;"
                         // div r6, r25, r26;
                          "div t1,s9,s10;"
                         // div r7, r27, r28;
                          "div t2,s11,t3;"
                         // div r8, r29, r30;
                          "div s0,t4,t5;"
                         // div r9, r31, r32;
                          "div s1,t6,t0;"
                         // div r10, r1, r2;
                          "div a0,ra,sp;"
                         // div r11, r3, r4;
                          "div a1,gp,tp;"
                         // div r12, r5, r6;
                          "div a2,t0,t1;"
                         // div r13, r7, r8;
                          "div a3,t2,s0;"
                         // div r14, r9, r10;
                          "div a4,s1,a0;"
                         // div r15, r11, r12;
                          "div a5,a1,a2;"
                         // div r16, r13, r14;
                          "div a6,a3,a4;"
                         // div r17, r15, r16;
                          "div a7,a5,a6;"
                         // div r18, r17, r18;
                          "div s2,a7,s2;"
                         // div r19, r19, r20;
                          "div s3,s3,s4;"
                         // div r20, r21, r22;
                          "div s4,s5,s6;"
                         // div r21, r23, r24;
                          "div s5,s7,s8;"
                         // div r22, r25, r26;
                          "div s6,s9,s10;"
                         // div r23, r27, r28;
                          "div s7,s11,t3;"
                         // div r24, r29, r30;
                          "div s8,t4,t5;"
                         // div r25, r31, r32;
                          "div s9,t6,t0;"
                         // div r26, r1, r2;
                          "div s10,ra,sp;"
                         // div r27, r3, r4;
                          "div s11,gp,tp;"
                         // div r28, r5, r6;
                          "div t3,t0,t1;"
                         // div r29, r7, r8;
                          "div t4,t2,s0;"
                         // div r30, r9, r10;
                          "div t5,s1,a0;"
                         // div r31, r11, r12;
                          "div t6,a1,a2;"
                         // div r1, r15, r16;
                          "div ra,a5,a6;"
                         // div r2, r17, r18;
                          "div sp,a7,s2;"
                         // div r3, r19, r20;
                          "div gp,s3,s4;"
                         // div r4, r21, r22;
                          "div tp,s5,s6;"
                         // div r5, r23, r24;
                          "div t0,s7,s8;"
                         // div r6, r25, r26;
                          "div t1,s9,s10;"
                         // div r7, r27, r28;
                          "div t2,s11,t3;"
                         // div r8, r29, r30;
                          "div s0,t4,t5;"
                         // div r9, r31, r32;
                          "div s1,t6,t0;"
                         // div r10, r1, r2;
                          "div a0,ra,sp;"
                         // div r11, r3, r4;
                          "div a1,gp,tp;"
                         // div r12, r5, r6;
                          "div a2,t0,t1;"
                         // div r13, r7, r8;
                          "div a3,t2,s0;"
                         // div r14, r9, r10;
                          "div a4,s1,a0;"
                         // div r15, r11, r12;
                          "div a5,a1,a2;"
                         // div r16, r13, r14;
                          "div a6,a3,a4;"
                         // div r17, r15, r16;
                          "div a7,a5,a6;"
                         // div r18, r17, r18;
                          "div s2,a7,s2;"
                         // div r19, r19, r20;
                          "div s3,s3,s4;"
                         // div r20, r21, r22;
                          "div s4,s5,s6;"
                         // div r21, r23, r24;
                          "div s5,s7,s8;"
                         // div r22, r25, r26;
                          "div s6,s9,s10;"
                         // div r23, r27, r28;
                          "div s7,s11,t3;"
                         // div r24, r29, r30;
                          "div s8,t4,t5;"
                         // div r25, r31, r32;
                          "div s9,t6,t0;"
                         // div r26, r1, r2;
                          "div s10,ra,sp;"
                         // div r27, r3, r4;
                          "div s11,gp,tp;"
                         // div r28, r5, r6;
                          "div t3,t0,t1;"
                         // div r29, r7, r8;
                          "div t4,t2,s0;"
                         // div r30, r9, r10;
                          "div t5,s1,a0;"
                         // div r31, r11, r12;
                          "div t6,a1,a2;"
                         // div r1, r15, r16;
                          "div ra,a5,a6;"
                         // div r2, r17, r18;
                          "div sp,a7,s2;"
                         // div r3, r19, r20;
                          "div gp,s3,s4;"
                         // div r4, r21, r22;
                          "div tp,s5,s6;"
                         // div r5, r23, r24;
                          "div t0,s7,s8;"
                         // div r6, r25, r26;
                          "div t1,s9,s10;"
                         // div r7, r27, r28;
                          "div t2,s11,t3;"
                         // div r8, r29, r30;
                          "div s0,t4,t5;"
                         // div r9, r31, r32;
                          "div s1,t6,t0;"
                         // div r10, r1, r2;
                          "div a0,ra,sp;"
                         // div r11, r3, r4;
                          "div a1,gp,tp;"
                         // div r12, r5, r6;
                          "div a2,t0,t1;"
                         // div r13, r7, r8;
                          "div a3,t2,s0;"
                         // div r14, r9, r10;
                          "div a4,s1,a0;"
                         // div r15, r11, r12;
                          "div a5,a1,a2;"
                         // div r16, r13, r14;
                          "div a6,a3,a4;"
                         // div r17, r15, r16;
                          "div a7,a5,a6;"
                         // div r18, r17, r18;
                          "div s2,a7,s2;"
                         // div r19, r19, r20;
                          "div s3,s3,s4;"
                         // div r20, r21, r22;
                          "div s4,s5,s6;"
                         // div r21, r23, r24;
                          "div s5,s7,s8;"
                         // div r22, r25, r26;
                          "div s6,s9,s10;"
                         // div r23, r27, r28;
                          "div s7,s11,t3;"
                         // div r24, r29, r30;
                          "div s8,t4,t5;"
                         // div r25, r31, r32;
                          "div s9,t6,t0;"
                         // div r26, r1, r2;
                          "div s10,ra,sp;"
                         // div r27, r3, r4;
                          "div s11,gp,tp;"
                         // div r28, r5, r6;
                          "div t3,t0,t1;"
                         // div r29, r7, r8;
                          "div t4,t2,s0;"
                         // div r30, r9, r10;
                          "div t5,s1,a0;"
                         // div r31, r11, r12;
                          "div t6,a1,a2;"
                       );
  __asm__ __volatile__ ( "csrrwi s9,0x7c1, 0x0;"
                       );
} 
