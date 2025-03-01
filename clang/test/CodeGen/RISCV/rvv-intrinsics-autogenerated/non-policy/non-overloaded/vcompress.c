// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

// CHECK-RV64-LABEL: @test_vcompress_vm_f16mf4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x half> @llvm.riscv.vcompress.nxv1f16.i64(<vscale x 1 x half> poison, <vscale x 1 x half> [[SRC:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x half> [[TMP0]]
//
vfloat16mf4_t test_vcompress_vm_f16mf4(vfloat16mf4_t src, vbool64_t mask, size_t vl) {
  return vcompress_vm_f16mf4(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_f16mf2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x half> @llvm.riscv.vcompress.nxv2f16.i64(<vscale x 2 x half> poison, <vscale x 2 x half> [[SRC:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x half> [[TMP0]]
//
vfloat16mf2_t test_vcompress_vm_f16mf2(vfloat16mf2_t src, vbool32_t mask, size_t vl) {
  return vcompress_vm_f16mf2(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_f16m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x half> @llvm.riscv.vcompress.nxv4f16.i64(<vscale x 4 x half> poison, <vscale x 4 x half> [[SRC:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x half> [[TMP0]]
//
vfloat16m1_t test_vcompress_vm_f16m1(vfloat16m1_t src, vbool16_t mask, size_t vl) {
  return vcompress_vm_f16m1(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_f16m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x half> @llvm.riscv.vcompress.nxv8f16.i64(<vscale x 8 x half> poison, <vscale x 8 x half> [[SRC:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x half> [[TMP0]]
//
vfloat16m2_t test_vcompress_vm_f16m2(vfloat16m2_t src, vbool8_t mask, size_t vl) {
  return vcompress_vm_f16m2(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_f16m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x half> @llvm.riscv.vcompress.nxv16f16.i64(<vscale x 16 x half> poison, <vscale x 16 x half> [[SRC:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x half> [[TMP0]]
//
vfloat16m4_t test_vcompress_vm_f16m4(vfloat16m4_t src, vbool4_t mask, size_t vl) {
  return vcompress_vm_f16m4(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_f16m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x half> @llvm.riscv.vcompress.nxv32f16.i64(<vscale x 32 x half> poison, <vscale x 32 x half> [[SRC:%.*]], <vscale x 32 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x half> [[TMP0]]
//
vfloat16m8_t test_vcompress_vm_f16m8(vfloat16m8_t src, vbool2_t mask, size_t vl) {
  return vcompress_vm_f16m8(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_f32mf2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x float> @llvm.riscv.vcompress.nxv1f32.i64(<vscale x 1 x float> poison, <vscale x 1 x float> [[SRC:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x float> [[TMP0]]
//
vfloat32mf2_t test_vcompress_vm_f32mf2(vfloat32mf2_t src, vbool64_t mask, size_t vl) {
  return vcompress_vm_f32mf2(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_f32m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x float> @llvm.riscv.vcompress.nxv2f32.i64(<vscale x 2 x float> poison, <vscale x 2 x float> [[SRC:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x float> [[TMP0]]
//
vfloat32m1_t test_vcompress_vm_f32m1(vfloat32m1_t src, vbool32_t mask, size_t vl) {
  return vcompress_vm_f32m1(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_f32m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x float> @llvm.riscv.vcompress.nxv4f32.i64(<vscale x 4 x float> poison, <vscale x 4 x float> [[SRC:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
vfloat32m2_t test_vcompress_vm_f32m2(vfloat32m2_t src, vbool16_t mask, size_t vl) {
  return vcompress_vm_f32m2(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_f32m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x float> @llvm.riscv.vcompress.nxv8f32.i64(<vscale x 8 x float> poison, <vscale x 8 x float> [[SRC:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x float> [[TMP0]]
//
vfloat32m4_t test_vcompress_vm_f32m4(vfloat32m4_t src, vbool8_t mask, size_t vl) {
  return vcompress_vm_f32m4(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_f32m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x float> @llvm.riscv.vcompress.nxv16f32.i64(<vscale x 16 x float> poison, <vscale x 16 x float> [[SRC:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x float> [[TMP0]]
//
vfloat32m8_t test_vcompress_vm_f32m8(vfloat32m8_t src, vbool4_t mask, size_t vl) {
  return vcompress_vm_f32m8(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_f64m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vcompress.nxv1f64.i64(<vscale x 1 x double> poison, <vscale x 1 x double> [[SRC:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
vfloat64m1_t test_vcompress_vm_f64m1(vfloat64m1_t src, vbool64_t mask, size_t vl) {
  return vcompress_vm_f64m1(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_f64m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x double> @llvm.riscv.vcompress.nxv2f64.i64(<vscale x 2 x double> poison, <vscale x 2 x double> [[SRC:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x double> [[TMP0]]
//
vfloat64m2_t test_vcompress_vm_f64m2(vfloat64m2_t src, vbool32_t mask, size_t vl) {
  return vcompress_vm_f64m2(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_f64m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x double> @llvm.riscv.vcompress.nxv4f64.i64(<vscale x 4 x double> poison, <vscale x 4 x double> [[SRC:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x double> [[TMP0]]
//
vfloat64m4_t test_vcompress_vm_f64m4(vfloat64m4_t src, vbool16_t mask, size_t vl) {
  return vcompress_vm_f64m4(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_f64m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x double> @llvm.riscv.vcompress.nxv8f64.i64(<vscale x 8 x double> poison, <vscale x 8 x double> [[SRC:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x double> [[TMP0]]
//
vfloat64m8_t test_vcompress_vm_f64m8(vfloat64m8_t src, vbool8_t mask, size_t vl) {
  return vcompress_vm_f64m8(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i8mf8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i8> @llvm.riscv.vcompress.nxv1i8.i64(<vscale x 1 x i8> poison, <vscale x 1 x i8> [[SRC:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x i8> [[TMP0]]
//
vint8mf8_t test_vcompress_vm_i8mf8(vint8mf8_t src, vbool64_t mask, size_t vl) {
  return vcompress_vm_i8mf8(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i8mf4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i8> @llvm.riscv.vcompress.nxv2i8.i64(<vscale x 2 x i8> poison, <vscale x 2 x i8> [[SRC:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i8> [[TMP0]]
//
vint8mf4_t test_vcompress_vm_i8mf4(vint8mf4_t src, vbool32_t mask, size_t vl) {
  return vcompress_vm_i8mf4(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i8mf2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i8> @llvm.riscv.vcompress.nxv4i8.i64(<vscale x 4 x i8> poison, <vscale x 4 x i8> [[SRC:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i8> [[TMP0]]
//
vint8mf2_t test_vcompress_vm_i8mf2(vint8mf2_t src, vbool16_t mask, size_t vl) {
  return vcompress_vm_i8mf2(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i8m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i8> @llvm.riscv.vcompress.nxv8i8.i64(<vscale x 8 x i8> poison, <vscale x 8 x i8> [[SRC:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i8> [[TMP0]]
//
vint8m1_t test_vcompress_vm_i8m1(vint8m1_t src, vbool8_t mask, size_t vl) {
  return vcompress_vm_i8m1(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i8m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i8> @llvm.riscv.vcompress.nxv16i8.i64(<vscale x 16 x i8> poison, <vscale x 16 x i8> [[SRC:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x i8> [[TMP0]]
//
vint8m2_t test_vcompress_vm_i8m2(vint8m2_t src, vbool4_t mask, size_t vl) {
  return vcompress_vm_i8m2(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i8m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x i8> @llvm.riscv.vcompress.nxv32i8.i64(<vscale x 32 x i8> poison, <vscale x 32 x i8> [[SRC:%.*]], <vscale x 32 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x i8> [[TMP0]]
//
vint8m4_t test_vcompress_vm_i8m4(vint8m4_t src, vbool2_t mask, size_t vl) {
  return vcompress_vm_i8m4(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i8m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 64 x i8> @llvm.riscv.vcompress.nxv64i8.i64(<vscale x 64 x i8> poison, <vscale x 64 x i8> [[SRC:%.*]], <vscale x 64 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 64 x i8> [[TMP0]]
//
vint8m8_t test_vcompress_vm_i8m8(vint8m8_t src, vbool1_t mask, size_t vl) {
  return vcompress_vm_i8m8(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i16mf4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i16> @llvm.riscv.vcompress.nxv1i16.i64(<vscale x 1 x i16> poison, <vscale x 1 x i16> [[SRC:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x i16> [[TMP0]]
//
vint16mf4_t test_vcompress_vm_i16mf4(vint16mf4_t src, vbool64_t mask, size_t vl) {
  return vcompress_vm_i16mf4(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i16mf2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i16> @llvm.riscv.vcompress.nxv2i16.i64(<vscale x 2 x i16> poison, <vscale x 2 x i16> [[SRC:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i16> [[TMP0]]
//
vint16mf2_t test_vcompress_vm_i16mf2(vint16mf2_t src, vbool32_t mask, size_t vl) {
  return vcompress_vm_i16mf2(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i16m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i16> @llvm.riscv.vcompress.nxv4i16.i64(<vscale x 4 x i16> poison, <vscale x 4 x i16> [[SRC:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i16> [[TMP0]]
//
vint16m1_t test_vcompress_vm_i16m1(vint16m1_t src, vbool16_t mask, size_t vl) {
  return vcompress_vm_i16m1(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i16m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i16> @llvm.riscv.vcompress.nxv8i16.i64(<vscale x 8 x i16> poison, <vscale x 8 x i16> [[SRC:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i16> [[TMP0]]
//
vint16m2_t test_vcompress_vm_i16m2(vint16m2_t src, vbool8_t mask, size_t vl) {
  return vcompress_vm_i16m2(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i16m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i16> @llvm.riscv.vcompress.nxv16i16.i64(<vscale x 16 x i16> poison, <vscale x 16 x i16> [[SRC:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x i16> [[TMP0]]
//
vint16m4_t test_vcompress_vm_i16m4(vint16m4_t src, vbool4_t mask, size_t vl) {
  return vcompress_vm_i16m4(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i16m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x i16> @llvm.riscv.vcompress.nxv32i16.i64(<vscale x 32 x i16> poison, <vscale x 32 x i16> [[SRC:%.*]], <vscale x 32 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x i16> [[TMP0]]
//
vint16m8_t test_vcompress_vm_i16m8(vint16m8_t src, vbool2_t mask, size_t vl) {
  return vcompress_vm_i16m8(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i32mf2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i32> @llvm.riscv.vcompress.nxv1i32.i64(<vscale x 1 x i32> poison, <vscale x 1 x i32> [[SRC:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x i32> [[TMP0]]
//
vint32mf2_t test_vcompress_vm_i32mf2(vint32mf2_t src, vbool64_t mask, size_t vl) {
  return vcompress_vm_i32mf2(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i32m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i32> @llvm.riscv.vcompress.nxv2i32.i64(<vscale x 2 x i32> poison, <vscale x 2 x i32> [[SRC:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i32> [[TMP0]]
//
vint32m1_t test_vcompress_vm_i32m1(vint32m1_t src, vbool32_t mask, size_t vl) {
  return vcompress_vm_i32m1(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i32m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i32> @llvm.riscv.vcompress.nxv4i32.i64(<vscale x 4 x i32> poison, <vscale x 4 x i32> [[SRC:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
vint32m2_t test_vcompress_vm_i32m2(vint32m2_t src, vbool16_t mask, size_t vl) {
  return vcompress_vm_i32m2(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i32m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i32> @llvm.riscv.vcompress.nxv8i32.i64(<vscale x 8 x i32> poison, <vscale x 8 x i32> [[SRC:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i32> [[TMP0]]
//
vint32m4_t test_vcompress_vm_i32m4(vint32m4_t src, vbool8_t mask, size_t vl) {
  return vcompress_vm_i32m4(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i32m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i32> @llvm.riscv.vcompress.nxv16i32.i64(<vscale x 16 x i32> poison, <vscale x 16 x i32> [[SRC:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x i32> [[TMP0]]
//
vint32m8_t test_vcompress_vm_i32m8(vint32m8_t src, vbool4_t mask, size_t vl) {
  return vcompress_vm_i32m8(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i64m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i64> @llvm.riscv.vcompress.nxv1i64.i64(<vscale x 1 x i64> poison, <vscale x 1 x i64> [[SRC:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x i64> [[TMP0]]
//
vint64m1_t test_vcompress_vm_i64m1(vint64m1_t src, vbool64_t mask, size_t vl) {
  return vcompress_vm_i64m1(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i64m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i64> @llvm.riscv.vcompress.nxv2i64.i64(<vscale x 2 x i64> poison, <vscale x 2 x i64> [[SRC:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i64> [[TMP0]]
//
vint64m2_t test_vcompress_vm_i64m2(vint64m2_t src, vbool32_t mask, size_t vl) {
  return vcompress_vm_i64m2(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i64m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i64> @llvm.riscv.vcompress.nxv4i64.i64(<vscale x 4 x i64> poison, <vscale x 4 x i64> [[SRC:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i64> [[TMP0]]
//
vint64m4_t test_vcompress_vm_i64m4(vint64m4_t src, vbool16_t mask, size_t vl) {
  return vcompress_vm_i64m4(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_i64m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i64> @llvm.riscv.vcompress.nxv8i64.i64(<vscale x 8 x i64> poison, <vscale x 8 x i64> [[SRC:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i64> [[TMP0]]
//
vint64m8_t test_vcompress_vm_i64m8(vint64m8_t src, vbool8_t mask, size_t vl) {
  return vcompress_vm_i64m8(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u8mf8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i8> @llvm.riscv.vcompress.nxv1i8.i64(<vscale x 1 x i8> poison, <vscale x 1 x i8> [[SRC:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x i8> [[TMP0]]
//
vuint8mf8_t test_vcompress_vm_u8mf8(vuint8mf8_t src, vbool64_t mask, size_t vl) {
  return vcompress_vm_u8mf8(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u8mf4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i8> @llvm.riscv.vcompress.nxv2i8.i64(<vscale x 2 x i8> poison, <vscale x 2 x i8> [[SRC:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i8> [[TMP0]]
//
vuint8mf4_t test_vcompress_vm_u8mf4(vuint8mf4_t src, vbool32_t mask, size_t vl) {
  return vcompress_vm_u8mf4(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u8mf2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i8> @llvm.riscv.vcompress.nxv4i8.i64(<vscale x 4 x i8> poison, <vscale x 4 x i8> [[SRC:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i8> [[TMP0]]
//
vuint8mf2_t test_vcompress_vm_u8mf2(vuint8mf2_t src, vbool16_t mask, size_t vl) {
  return vcompress_vm_u8mf2(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u8m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i8> @llvm.riscv.vcompress.nxv8i8.i64(<vscale x 8 x i8> poison, <vscale x 8 x i8> [[SRC:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i8> [[TMP0]]
//
vuint8m1_t test_vcompress_vm_u8m1(vuint8m1_t src, vbool8_t mask, size_t vl) {
  return vcompress_vm_u8m1(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u8m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i8> @llvm.riscv.vcompress.nxv16i8.i64(<vscale x 16 x i8> poison, <vscale x 16 x i8> [[SRC:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x i8> [[TMP0]]
//
vuint8m2_t test_vcompress_vm_u8m2(vuint8m2_t src, vbool4_t mask, size_t vl) {
  return vcompress_vm_u8m2(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u8m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x i8> @llvm.riscv.vcompress.nxv32i8.i64(<vscale x 32 x i8> poison, <vscale x 32 x i8> [[SRC:%.*]], <vscale x 32 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x i8> [[TMP0]]
//
vuint8m4_t test_vcompress_vm_u8m4(vuint8m4_t src, vbool2_t mask, size_t vl) {
  return vcompress_vm_u8m4(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u8m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 64 x i8> @llvm.riscv.vcompress.nxv64i8.i64(<vscale x 64 x i8> poison, <vscale x 64 x i8> [[SRC:%.*]], <vscale x 64 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 64 x i8> [[TMP0]]
//
vuint8m8_t test_vcompress_vm_u8m8(vuint8m8_t src, vbool1_t mask, size_t vl) {
  return vcompress_vm_u8m8(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u16mf4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i16> @llvm.riscv.vcompress.nxv1i16.i64(<vscale x 1 x i16> poison, <vscale x 1 x i16> [[SRC:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x i16> [[TMP0]]
//
vuint16mf4_t test_vcompress_vm_u16mf4(vuint16mf4_t src, vbool64_t mask, size_t vl) {
  return vcompress_vm_u16mf4(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u16mf2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i16> @llvm.riscv.vcompress.nxv2i16.i64(<vscale x 2 x i16> poison, <vscale x 2 x i16> [[SRC:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i16> [[TMP0]]
//
vuint16mf2_t test_vcompress_vm_u16mf2(vuint16mf2_t src, vbool32_t mask, size_t vl) {
  return vcompress_vm_u16mf2(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u16m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i16> @llvm.riscv.vcompress.nxv4i16.i64(<vscale x 4 x i16> poison, <vscale x 4 x i16> [[SRC:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i16> [[TMP0]]
//
vuint16m1_t test_vcompress_vm_u16m1(vuint16m1_t src, vbool16_t mask, size_t vl) {
  return vcompress_vm_u16m1(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u16m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i16> @llvm.riscv.vcompress.nxv8i16.i64(<vscale x 8 x i16> poison, <vscale x 8 x i16> [[SRC:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i16> [[TMP0]]
//
vuint16m2_t test_vcompress_vm_u16m2(vuint16m2_t src, vbool8_t mask, size_t vl) {
  return vcompress_vm_u16m2(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u16m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i16> @llvm.riscv.vcompress.nxv16i16.i64(<vscale x 16 x i16> poison, <vscale x 16 x i16> [[SRC:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x i16> [[TMP0]]
//
vuint16m4_t test_vcompress_vm_u16m4(vuint16m4_t src, vbool4_t mask, size_t vl) {
  return vcompress_vm_u16m4(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u16m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x i16> @llvm.riscv.vcompress.nxv32i16.i64(<vscale x 32 x i16> poison, <vscale x 32 x i16> [[SRC:%.*]], <vscale x 32 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x i16> [[TMP0]]
//
vuint16m8_t test_vcompress_vm_u16m8(vuint16m8_t src, vbool2_t mask, size_t vl) {
  return vcompress_vm_u16m8(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u32mf2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i32> @llvm.riscv.vcompress.nxv1i32.i64(<vscale x 1 x i32> poison, <vscale x 1 x i32> [[SRC:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x i32> [[TMP0]]
//
vuint32mf2_t test_vcompress_vm_u32mf2(vuint32mf2_t src, vbool64_t mask, size_t vl) {
  return vcompress_vm_u32mf2(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u32m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i32> @llvm.riscv.vcompress.nxv2i32.i64(<vscale x 2 x i32> poison, <vscale x 2 x i32> [[SRC:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i32> [[TMP0]]
//
vuint32m1_t test_vcompress_vm_u32m1(vuint32m1_t src, vbool32_t mask, size_t vl) {
  return vcompress_vm_u32m1(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u32m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i32> @llvm.riscv.vcompress.nxv4i32.i64(<vscale x 4 x i32> poison, <vscale x 4 x i32> [[SRC:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
vuint32m2_t test_vcompress_vm_u32m2(vuint32m2_t src, vbool16_t mask, size_t vl) {
  return vcompress_vm_u32m2(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u32m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i32> @llvm.riscv.vcompress.nxv8i32.i64(<vscale x 8 x i32> poison, <vscale x 8 x i32> [[SRC:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i32> [[TMP0]]
//
vuint32m4_t test_vcompress_vm_u32m4(vuint32m4_t src, vbool8_t mask, size_t vl) {
  return vcompress_vm_u32m4(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u32m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i32> @llvm.riscv.vcompress.nxv16i32.i64(<vscale x 16 x i32> poison, <vscale x 16 x i32> [[SRC:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x i32> [[TMP0]]
//
vuint32m8_t test_vcompress_vm_u32m8(vuint32m8_t src, vbool4_t mask, size_t vl) {
  return vcompress_vm_u32m8(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u64m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i64> @llvm.riscv.vcompress.nxv1i64.i64(<vscale x 1 x i64> poison, <vscale x 1 x i64> [[SRC:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x i64> [[TMP0]]
//
vuint64m1_t test_vcompress_vm_u64m1(vuint64m1_t src, vbool64_t mask, size_t vl) {
  return vcompress_vm_u64m1(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u64m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i64> @llvm.riscv.vcompress.nxv2i64.i64(<vscale x 2 x i64> poison, <vscale x 2 x i64> [[SRC:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i64> [[TMP0]]
//
vuint64m2_t test_vcompress_vm_u64m2(vuint64m2_t src, vbool32_t mask, size_t vl) {
  return vcompress_vm_u64m2(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u64m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i64> @llvm.riscv.vcompress.nxv4i64.i64(<vscale x 4 x i64> poison, <vscale x 4 x i64> [[SRC:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i64> [[TMP0]]
//
vuint64m4_t test_vcompress_vm_u64m4(vuint64m4_t src, vbool16_t mask, size_t vl) {
  return vcompress_vm_u64m4(src, mask, vl);
}

// CHECK-RV64-LABEL: @test_vcompress_vm_u64m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i64> @llvm.riscv.vcompress.nxv8i64.i64(<vscale x 8 x i64> poison, <vscale x 8 x i64> [[SRC:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i64> [[TMP0]]
//
vuint64m8_t test_vcompress_vm_u64m8(vuint64m8_t src, vbool8_t mask, size_t vl) {
  return vcompress_vm_u64m8(src, mask, vl);
}

