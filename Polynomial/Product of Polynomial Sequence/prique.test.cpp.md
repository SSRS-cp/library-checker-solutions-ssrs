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
    PROBLEM: https://judge.yosupo.jp/problem/product_of_polynomial_sequence
    links:
    - https://judge.yosupo.jp/problem/product_of_polynomial_sequence
  bundledCode: "#line 1 \"Polynomial/Product of Polynomial Sequence/prique.test.cpp\"\
    \n#define PROBLEM \"https://judge.yosupo.jp/problem/product_of_polynomial_sequence\"\
    \n#include <iostream>\n#include <vector>\n#include <queue>\n#include <utility>\n\
    const long long MOD = 998244353;\nconst long long HALF = 499122177;\nconst std::vector<long\
    \ long> ntt_root = {1, 998244352, 911660635, 372528824, 929031873, 452798380,\
    \ 922799308, 781712469, 476477967, 166035806, 258648936, 584193783, 63912897,\
    \ 350007156, 666702199, 968855178, 629671588, 24514907, 996173970, 363395222,\
    \ 565042129, 733596141, 267099868, 15311432};\nconst std::vector<long long> ntt_iroot\
    \ = {1, 998244352, 86583718, 509520358, 337190230, 87557064, 609441965, 135236158,\
    \ 304459705, 685443576, 381598368, 335559352, 129292727, 358024708, 814576206,\
    \ 708402881, 283043518, 3707709, 121392023, 704923114, 950391366, 428961804, 382752275,\
    \ 469870224};\nstd::vector<long long> ntt(std::vector<long long> A, bool inv){\n\
    \  int N = A.size();\n  int M = __builtin_ctz(N);\n  std::vector<long long> B(N);\n\
    \  for (int i = M - 1; i >= 0; i--){\n    long long z = 1;\n    for (int j = 0;\
    \ j < N; j += (1 << i) * 2){\n      for (int k = 0; k < (1 << i); k++){\n    \
    \    A[(1 << i) + j + k] *= z;\n        A[(1 << i) + j + k] %= MOD;\n        B[(j\
    \ >> 1) + k] = (A[j + k] + A[(1 << i) + j + k]) % MOD;\n        B[(N >> 1) + (j\
    \ >> 1) + k] = (A[j + k] - A[(1 << i) + j + k] + MOD) % MOD;\n      }\n      z\
    \ *= inv ? ntt_iroot[M - i] : ntt_root[M - i];\n      z %= MOD;\n    }\n    std::swap(A,\
    \ B);\n  }\n  if (inv){\n    long long Ninv = 1;\n    for (int i = 0; i < M; i++){\n\
    \      Ninv *= HALF;\n      Ninv %= MOD;\n    }\n    for (int i = 0; i < N; i++){\n\
    \      A[i] = A[i] * Ninv % MOD;\n    }\n  }\n  return A;\n}\nstd::vector<long\
    \ long> convolution(std::vector<long long> A, std::vector<long long> B){\n  int\
    \ deg = A.size() + B.size() - 1;\n  int N = deg == 1 ? 1 : 1 << (32 - __builtin_clz(deg\
    \ - 1));\n  A.resize(N);\n  B.resize(N);\n  A = ntt(A, false);\n  B = ntt(B, false);\n\
    \  std::vector<long long> ans(N);\n  for (int i = 0; i < N; i++){\n    ans[i]\
    \ = A[i] * B[i] % MOD;\n  }\n  ans = ntt(ans, true);\n  ans.resize(deg);\n  return\
    \ ans;\n}\nint main(){\n  std::ios_base::sync_with_stdio(false);\n  std::cin.tie(nullptr);\n\
    \  int N;\n  std::cin >> N;\n  if (N == 0){\n    std::cout << 1 << std::endl;\n\
    \  } else {\n    std::vector<std::vector<long long>> a(N);\n    for (int i = 0;\
    \ i < N; i++){\n      int d;\n      std::cin >> d;\n      a[i].resize(d + 1);\n\
    \      for (int j = 0; j <= d; j++){\n        std::cin >> a[i][j];\n      }\n\
    \    }\n    auto comp = [&](int i, int j){\n      return a[i].size() > a[j].size();\n\
    \    };\n    std::priority_queue<int, std::vector<int>, decltype(comp)> pq(comp);\n\
    \    for (int i = 0; i < N; i++){\n      pq.push(i);\n    }\n    for (int i =\
    \ 0; i < N - 1; i++){\n      int x = pq.top();\n      pq.pop();\n      int y =\
    \ pq.top();\n      pq.pop();\n      a[x] = convolution(a[x], a[y]);\n      pq.push(x);\n\
    \    }\n    std::vector<long long> ans = a[pq.top()];\n    int D = ans.size()\
    \ - 1;\n    for (int i = 0; i <= D; i++){\n      std::cout << ans[i];\n      if\
    \ (i < D){\n        std::cout << ' ';\n      }\n    }\n    std::cout << std::endl;\n\
    \  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/product_of_polynomial_sequence\"\
    \n#include <iostream>\n#include <vector>\n#include <queue>\n#include <utility>\n\
    const long long MOD = 998244353;\nconst long long HALF = 499122177;\nconst std::vector<long\
    \ long> ntt_root = {1, 998244352, 911660635, 372528824, 929031873, 452798380,\
    \ 922799308, 781712469, 476477967, 166035806, 258648936, 584193783, 63912897,\
    \ 350007156, 666702199, 968855178, 629671588, 24514907, 996173970, 363395222,\
    \ 565042129, 733596141, 267099868, 15311432};\nconst std::vector<long long> ntt_iroot\
    \ = {1, 998244352, 86583718, 509520358, 337190230, 87557064, 609441965, 135236158,\
    \ 304459705, 685443576, 381598368, 335559352, 129292727, 358024708, 814576206,\
    \ 708402881, 283043518, 3707709, 121392023, 704923114, 950391366, 428961804, 382752275,\
    \ 469870224};\nstd::vector<long long> ntt(std::vector<long long> A, bool inv){\n\
    \  int N = A.size();\n  int M = __builtin_ctz(N);\n  std::vector<long long> B(N);\n\
    \  for (int i = M - 1; i >= 0; i--){\n    long long z = 1;\n    for (int j = 0;\
    \ j < N; j += (1 << i) * 2){\n      for (int k = 0; k < (1 << i); k++){\n    \
    \    A[(1 << i) + j + k] *= z;\n        A[(1 << i) + j + k] %= MOD;\n        B[(j\
    \ >> 1) + k] = (A[j + k] + A[(1 << i) + j + k]) % MOD;\n        B[(N >> 1) + (j\
    \ >> 1) + k] = (A[j + k] - A[(1 << i) + j + k] + MOD) % MOD;\n      }\n      z\
    \ *= inv ? ntt_iroot[M - i] : ntt_root[M - i];\n      z %= MOD;\n    }\n    std::swap(A,\
    \ B);\n  }\n  if (inv){\n    long long Ninv = 1;\n    for (int i = 0; i < M; i++){\n\
    \      Ninv *= HALF;\n      Ninv %= MOD;\n    }\n    for (int i = 0; i < N; i++){\n\
    \      A[i] = A[i] * Ninv % MOD;\n    }\n  }\n  return A;\n}\nstd::vector<long\
    \ long> convolution(std::vector<long long> A, std::vector<long long> B){\n  int\
    \ deg = A.size() + B.size() - 1;\n  int N = deg == 1 ? 1 : 1 << (32 - __builtin_clz(deg\
    \ - 1));\n  A.resize(N);\n  B.resize(N);\n  A = ntt(A, false);\n  B = ntt(B, false);\n\
    \  std::vector<long long> ans(N);\n  for (int i = 0; i < N; i++){\n    ans[i]\
    \ = A[i] * B[i] % MOD;\n  }\n  ans = ntt(ans, true);\n  ans.resize(deg);\n  return\
    \ ans;\n}\nint main(){\n  std::ios_base::sync_with_stdio(false);\n  std::cin.tie(nullptr);\n\
    \  int N;\n  std::cin >> N;\n  if (N == 0){\n    std::cout << 1 << std::endl;\n\
    \  } else {\n    std::vector<std::vector<long long>> a(N);\n    for (int i = 0;\
    \ i < N; i++){\n      int d;\n      std::cin >> d;\n      a[i].resize(d + 1);\n\
    \      for (int j = 0; j <= d; j++){\n        std::cin >> a[i][j];\n      }\n\
    \    }\n    auto comp = [&](int i, int j){\n      return a[i].size() > a[j].size();\n\
    \    };\n    std::priority_queue<int, std::vector<int>, decltype(comp)> pq(comp);\n\
    \    for (int i = 0; i < N; i++){\n      pq.push(i);\n    }\n    for (int i =\
    \ 0; i < N - 1; i++){\n      int x = pq.top();\n      pq.pop();\n      int y =\
    \ pq.top();\n      pq.pop();\n      a[x] = convolution(a[x], a[y]);\n      pq.push(x);\n\
    \    }\n    std::vector<long long> ans = a[pq.top()];\n    int D = ans.size()\
    \ - 1;\n    for (int i = 0; i <= D; i++){\n      std::cout << ans[i];\n      if\
    \ (i < D){\n        std::cout << ' ';\n      }\n    }\n    std::cout << std::endl;\n\
    \  }\n}"
  dependsOn: []
  isVerificationFile: true
  path: Polynomial/Product of Polynomial Sequence/prique.test.cpp
  requiredBy: []
  timestamp: '2023-09-27 01:54:04+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Polynomial/Product of Polynomial Sequence/prique.test.cpp
layout: document
redirect_from:
- /verify/Polynomial/Product of Polynomial Sequence/prique.test.cpp
- /verify/Polynomial/Product of Polynomial Sequence/prique.test.cpp.html
title: Polynomial/Product of Polynomial Sequence/prique.test.cpp
---
