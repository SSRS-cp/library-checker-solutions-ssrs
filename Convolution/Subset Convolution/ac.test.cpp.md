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
    PROBLEM: https://judge.yosupo.jp/problem/subset_convolution
    links:
    - https://judge.yosupo.jp/problem/subset_convolution
  bundledCode: "#line 1 \"Convolution/Subset Convolution/ac.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/subset_convolution\"\n#include <iostream>\n\
    #include <vector>\nconst long long MOD = 998244353;\nint main(){\n  std::ios_base::sync_with_stdio(false);\n\
    \  std::cin.tie(nullptr);\n  int N;\n  std::cin >> N;\n  std::vector<long long>\
    \ a(1 << N);\n  for (int i = 0; i < (1 << N); i++){\n    std::cin >> a[i];\n \
    \ }\n  std::vector<long long> b(1 << N);\n  for (int i = 0; i < (1 << N); i++){\n\
    \    std::cin >> b[i];\n  }\n  std::vector<std::vector<long long>> A(N + 1, std::vector<long\
    \ long>(1 << N, 0));\n  std::vector<std::vector<long long>> B(N + 1, std::vector<long\
    \ long>(1 << N, 0));\n  for (int i = 0; i < (1 << N); i++){\n    int p = __builtin_popcount(i);\n\
    \    A[p][i] = a[i];\n    B[p][i] = b[i];\n  }\n  for (int i = 0; i <= N; i++){\n\
    \    for (int j = 0; j < N; j++){\n      for (int k = 0; k < (1 << N); k++){\n\
    \        if ((k >> j & 1) == 1){\n          A[i][k] += A[i][k ^ (1 << j)];\n \
    \         A[i][k] %= MOD;\n          B[i][k] += B[i][k ^ (1 << j)];\n        \
    \  B[i][k] %= MOD;\n        }\n      }\n    }\n  }\n  std::vector<std::vector<long\
    \ long>> C(N + 1, std::vector<long long>(1 << N, 0));\n  for (int i = 0; i < (1\
    \ << N); i++){\n    for (int j = 0; j <= N; j++){\n      for (int k = 0; k <=\
    \ N - j; k++){\n        C[j + k][i] += A[j][i] * B[k][i];\n        C[j + k][i]\
    \ %= MOD;\n      }\n    }\n  }\n  for (int i = 0; i <= N; i++){\n    for (int\
    \ j = 0; j < N; j++){\n      for (int k = 0; k < (1 << N); k++){\n        if ((k\
    \ >> j & 1) == 1){\n          C[i][k] += MOD - C[i][k ^ (1 << j)];\n         \
    \ C[i][k] %= MOD;\n        }\n      }\n    }\n  }\n  std::vector<long long> c(1\
    \ << N);\n  for (int i = 0; i < (1 << N); i++){\n    int p = __builtin_popcount(i);\n\
    \    c[i] = C[p][i];\n  }\n  for (int i = 0; i < (1 << N); i++){\n    std::cout\
    \ << c[i];\n    if (i < (1 << N) - 1){\n      std::cout << ' ';\n    }\n  }\n\
    \  std::cout << std::endl;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/subset_convolution\"\n\
    #include <iostream>\n#include <vector>\nconst long long MOD = 998244353;\nint\
    \ main(){\n  std::ios_base::sync_with_stdio(false);\n  std::cin.tie(nullptr);\n\
    \  int N;\n  std::cin >> N;\n  std::vector<long long> a(1 << N);\n  for (int i\
    \ = 0; i < (1 << N); i++){\n    std::cin >> a[i];\n  }\n  std::vector<long long>\
    \ b(1 << N);\n  for (int i = 0; i < (1 << N); i++){\n    std::cin >> b[i];\n \
    \ }\n  std::vector<std::vector<long long>> A(N + 1, std::vector<long long>(1 <<\
    \ N, 0));\n  std::vector<std::vector<long long>> B(N + 1, std::vector<long long>(1\
    \ << N, 0));\n  for (int i = 0; i < (1 << N); i++){\n    int p = __builtin_popcount(i);\n\
    \    A[p][i] = a[i];\n    B[p][i] = b[i];\n  }\n  for (int i = 0; i <= N; i++){\n\
    \    for (int j = 0; j < N; j++){\n      for (int k = 0; k < (1 << N); k++){\n\
    \        if ((k >> j & 1) == 1){\n          A[i][k] += A[i][k ^ (1 << j)];\n \
    \         A[i][k] %= MOD;\n          B[i][k] += B[i][k ^ (1 << j)];\n        \
    \  B[i][k] %= MOD;\n        }\n      }\n    }\n  }\n  std::vector<std::vector<long\
    \ long>> C(N + 1, std::vector<long long>(1 << N, 0));\n  for (int i = 0; i < (1\
    \ << N); i++){\n    for (int j = 0; j <= N; j++){\n      for (int k = 0; k <=\
    \ N - j; k++){\n        C[j + k][i] += A[j][i] * B[k][i];\n        C[j + k][i]\
    \ %= MOD;\n      }\n    }\n  }\n  for (int i = 0; i <= N; i++){\n    for (int\
    \ j = 0; j < N; j++){\n      for (int k = 0; k < (1 << N); k++){\n        if ((k\
    \ >> j & 1) == 1){\n          C[i][k] += MOD - C[i][k ^ (1 << j)];\n         \
    \ C[i][k] %= MOD;\n        }\n      }\n    }\n  }\n  std::vector<long long> c(1\
    \ << N);\n  for (int i = 0; i < (1 << N); i++){\n    int p = __builtin_popcount(i);\n\
    \    c[i] = C[p][i];\n  }\n  for (int i = 0; i < (1 << N); i++){\n    std::cout\
    \ << c[i];\n    if (i < (1 << N) - 1){\n      std::cout << ' ';\n    }\n  }\n\
    \  std::cout << std::endl;\n}"
  dependsOn: []
  isVerificationFile: true
  path: Convolution/Subset Convolution/ac.test.cpp
  requiredBy: []
  timestamp: '2023-09-24 05:52:34+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Convolution/Subset Convolution/ac.test.cpp
layout: document
redirect_from:
- /verify/Convolution/Subset Convolution/ac.test.cpp
- /verify/Convolution/Subset Convolution/ac.test.cpp.html
title: Convolution/Subset Convolution/ac.test.cpp
---
