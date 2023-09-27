---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/convolution_mod
    links:
    - https://judge.yosupo.jp/problem/convolution_mod
  bundledCode: "#line 1 \"Convolution/Convolution/ac.test.cpp\"\n#define PROBLEM \"\
    https://judge.yosupo.jp/problem/convolution_mod\"\n#include <iostream>\n#include\
    \ <vector>\n#include <utility>\nconst long long MOD = 998244353;\nconst long long\
    \ HALF = 499122177;\nconst std::vector<long long> ntt_root = {1, 998244352, 911660635,\
    \ 372528824, 929031873, 452798380, 922799308, 781712469, 476477967, 166035806,\
    \ 258648936, 584193783, 63912897, 350007156, 666702199, 968855178, 629671588,\
    \ 24514907, 996173970, 363395222, 565042129, 733596141, 267099868, 15311432};\n\
    const std::vector<long long> ntt_iroot = {1, 998244352, 86583718, 509520358, 337190230,\
    \ 87557064, 609441965, 135236158, 304459705, 685443576, 381598368, 335559352,\
    \ 129292727, 358024708, 814576206, 708402881, 283043518, 3707709, 121392023, 704923114,\
    \ 950391366, 428961804, 382752275, 469870224};\nstd::vector<long long> ntt(std::vector<long\
    \ long> A, bool inv){\n  int N = A.size();\n  int M = __builtin_ctz(N);\n  std::vector<long\
    \ long> B(N);\n  for (int i = M - 1; i >= 0; i--){\n    long long z = 1;\n   \
    \ for (int j = 0; j < N; j += (1 << i) * 2){\n      for (int k = 0; k < (1 <<\
    \ i); k++){\n        A[(1 << i) + j + k] *= z;\n        A[(1 << i) + j + k] %=\
    \ MOD;\n        B[(j >> 1) + k] = (A[j + k] + A[(1 << i) + j + k]) % MOD;\n  \
    \      B[(N >> 1) + (j >> 1) + k] = (A[j + k] - A[(1 << i) + j + k] + MOD) % MOD;\n\
    \      }\n      z *= inv ? ntt_iroot[M - i] : ntt_root[M - i];\n      z %= MOD;\n\
    \    }\n    std::swap(A, B);\n  }\n  if (inv){\n    long long Ninv = 1;\n    for\
    \ (int i = 0; i < M; i++){\n      Ninv *= HALF;\n      Ninv %= MOD;\n    }\n \
    \   for (int i = 0; i < N; i++){\n      A[i] = A[i] * Ninv % MOD;\n    }\n  }\n\
    \  return A;\n}\nstd::vector<long long> convolution(std::vector<long long> A,\
    \ std::vector<long long> B){\n  int deg = A.size() + B.size() - 1;\n  int N =\
    \ deg == 1 ? 1 : 1 << (32 - __builtin_clz(deg - 1));\n  A.resize(N);\n  B.resize(N);\n\
    \  A = ntt(A, false);\n  B = ntt(B, false);\n  std::vector<long long> ans(N);\n\
    \  for (int i = 0; i < N; i++){\n    ans[i] = A[i] * B[i] % MOD;\n  }\n  ans =\
    \ ntt(ans, true);\n  ans.resize(deg);\n  return ans;\n}\nint main(){\n  std::ios_base::sync_with_stdio(false);\n\
    \  std::cin.tie(nullptr);\n  int N, M;\n  std::cin >> N >> M;\n  std::vector<long\
    \ long> a(N);\n  for (int i = 0; i < N; i++){\n    std::cin >> a[i];\n  }\n  std::vector<long\
    \ long> b(M);\n  for (int i = 0; i < M; i++){\n    std::cin >> b[i];\n  }\n  std::vector<long\
    \ long> c = convolution(a, b);\n  for (int i = 0; i < N + M - 1; i++){\n    std::cout\
    \ << c[i];\n    if (i < N + M - 2){\n      std::cout << ' ';\n    }\n  }\n  std::cout\
    \ << std::endl;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/convolution_mod\"\n#include\
    \ <iostream>\n#include <vector>\n#include <utility>\nconst long long MOD = 998244353;\n\
    const long long HALF = 499122177;\nconst std::vector<long long> ntt_root = {1,\
    \ 998244352, 911660635, 372528824, 929031873, 452798380, 922799308, 781712469,\
    \ 476477967, 166035806, 258648936, 584193783, 63912897, 350007156, 666702199,\
    \ 968855178, 629671588, 24514907, 996173970, 363395222, 565042129, 733596141,\
    \ 267099868, 15311432};\nconst std::vector<long long> ntt_iroot = {1, 998244352,\
    \ 86583718, 509520358, 337190230, 87557064, 609441965, 135236158, 304459705, 685443576,\
    \ 381598368, 335559352, 129292727, 358024708, 814576206, 708402881, 283043518,\
    \ 3707709, 121392023, 704923114, 950391366, 428961804, 382752275, 469870224};\n\
    std::vector<long long> ntt(std::vector<long long> A, bool inv){\n  int N = A.size();\n\
    \  int M = __builtin_ctz(N);\n  std::vector<long long> B(N);\n  for (int i = M\
    \ - 1; i >= 0; i--){\n    long long z = 1;\n    for (int j = 0; j < N; j += (1\
    \ << i) * 2){\n      for (int k = 0; k < (1 << i); k++){\n        A[(1 << i) +\
    \ j + k] *= z;\n        A[(1 << i) + j + k] %= MOD;\n        B[(j >> 1) + k] =\
    \ (A[j + k] + A[(1 << i) + j + k]) % MOD;\n        B[(N >> 1) + (j >> 1) + k]\
    \ = (A[j + k] - A[(1 << i) + j + k] + MOD) % MOD;\n      }\n      z *= inv ? ntt_iroot[M\
    \ - i] : ntt_root[M - i];\n      z %= MOD;\n    }\n    std::swap(A, B);\n  }\n\
    \  if (inv){\n    long long Ninv = 1;\n    for (int i = 0; i < M; i++){\n    \
    \  Ninv *= HALF;\n      Ninv %= MOD;\n    }\n    for (int i = 0; i < N; i++){\n\
    \      A[i] = A[i] * Ninv % MOD;\n    }\n  }\n  return A;\n}\nstd::vector<long\
    \ long> convolution(std::vector<long long> A, std::vector<long long> B){\n  int\
    \ deg = A.size() + B.size() - 1;\n  int N = deg == 1 ? 1 : 1 << (32 - __builtin_clz(deg\
    \ - 1));\n  A.resize(N);\n  B.resize(N);\n  A = ntt(A, false);\n  B = ntt(B, false);\n\
    \  std::vector<long long> ans(N);\n  for (int i = 0; i < N; i++){\n    ans[i]\
    \ = A[i] * B[i] % MOD;\n  }\n  ans = ntt(ans, true);\n  ans.resize(deg);\n  return\
    \ ans;\n}\nint main(){\n  std::ios_base::sync_with_stdio(false);\n  std::cin.tie(nullptr);\n\
    \  int N, M;\n  std::cin >> N >> M;\n  std::vector<long long> a(N);\n  for (int\
    \ i = 0; i < N; i++){\n    std::cin >> a[i];\n  }\n  std::vector<long long> b(M);\n\
    \  for (int i = 0; i < M; i++){\n    std::cin >> b[i];\n  }\n  std::vector<long\
    \ long> c = convolution(a, b);\n  for (int i = 0; i < N + M - 1; i++){\n    std::cout\
    \ << c[i];\n    if (i < N + M - 2){\n      std::cout << ' ';\n    }\n  }\n  std::cout\
    \ << std::endl;\n}"
  dependsOn: []
  isVerificationFile: true
  path: Convolution/Convolution/ac.test.cpp
  requiredBy: []
  timestamp: '2023-09-27 01:54:04+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Convolution/Convolution/ac.test.cpp
layout: document
redirect_from:
- /verify/Convolution/Convolution/ac.test.cpp
- /verify/Convolution/Convolution/ac.test.cpp.html
title: Convolution/Convolution/ac.test.cpp
---
