// RUN: %clang_analyze_cc1 -analyzer-checker=debug.DumpCFG %s 2>&1 \
// RUN:   | FileCheck %s

struct Q { int a, b, c; };
union UQ { struct Q q; };
union UQ getUQ(void) {
  union UQ u = { { 1, 2, 3 } };
  return u;
}

void test(void) {
  struct LUQ { union UQ uq; } var = { getUQ(), .uq.q.a = 100 };
  struct Q s[] = {
    [0] = (struct Q){1, 2},
    [0].c = 3
  }; 
}

// CHECK: void test(void)
// CHECK: [B1]
// CHECK:   1: getUQ
// CHECK:   2: [B1.1] (ImplicitCastExpr, FunctionToPointerDecay, union UQ (*)(void))
// CHECK:   3: [B1.2]()
// CHECK:   4: 100
// CHECK:   5: /*no init*/
// CHECK:   6: /*no init*/
// CHECK:   7: {[B1.4], [B1.5], [B1.6]}
// CHECK:   8: {[B1.7]}
// CHECK:   9: {/*base*/[B1.3], /*updater*/[B1.8]}
// CHECK:  10: {[B1.3], .uq.q.a = [B1.4]}
// CHECK:  11: struct LUQ var = {getUQ(), .uq.q.a = 100};
// CHECK:  12: 1
// CHECK:  13: 2
// CHECK:  14: {[B1.12], [B1.13]}
// CHECK:  18: /*no init*/
// CHECK:  19: /*no init*/
// CHECK:  20: 3
// CHECK:  21: {[B1.18], [B1.19], [B1.20]}
// CHECK:  22: {/*base*/[B1.17], /*updater*/[B1.21]} 
// CHECK:  24: struct Q s[] = {[0] = (struct Q){1, 2}, [0].c = 3};
