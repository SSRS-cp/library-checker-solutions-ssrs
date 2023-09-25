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
    PROBLEM: https://judge.yosupo.jp/problem/bitwise_xor_convolution
    links:
    - https://judge.yosupo.jp/problem/bitwise_xor_convolution
  bundledCode: "#line 1 \"Convolution/Bitwise Xor Convolution/ac.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/bitwise_xor_convolution\"\n#include\
    \ <iostream>\n#include <vector>\nconst long long MOD = 998244353;\nconst long\
    \ long HALF = 499122177;\nint main(){\n  std::ios_base::sync_with_stdio(false);\n\
    \  std::cin.tie(nullptr);\n  int N;\n  std::cin >> N;\n  std::vector<long long>\
    \ a(1 << N);\n  for (int i = 0; i < (1 << N); i++){\n    std::cin >> a[i];\n \
    \ }\n  std::vector<long long> b(1 << N);\n  for (int i = 0; i < (1 << N); i++){\n\
    \    std::cin >> b[i];\n  }\n  for (int i = 0; i < N; i++){\n    for (int j =\
    \ 0; j < (1 << N); j++){\n      if ((j >> i & 1) == 0){\n        long long ax\
    \ = (a[j] + a[j | (1 << i)]) % MOD;\n        long long ay = (a[j] + MOD - a[j\
    \ | (1 << i)]) % MOD;\n        a[j] = ax;\n        a[j | (1 << i)] = ay;\n   \
    \     long long bx = (b[j] + b[j | (1 << i)]) % MOD;\n        long long by = (b[j]\
    \ + MOD - b[j | (1 << i)]) % MOD;\n        b[j] = bx;\n        b[j | (1 << i)]\
    \ = by;\n      }\n    }\n  }\n  std::vector<long long> c(1 << N);\n  for (int\
    \ i = 0; i < (1 << N); i++){\n    c[i] = a[i] * b[i] % MOD;\n  }\n  for (int i\
    \ = 0; i < N; i++){\n    for (int j = 0; j < (1 << N); j++){\n      if ((j >>\
    \ i & 1) == 0){\n        long long cx = (c[j] + c[j | (1 << i)]) % MOD;\n    \
    \    long long cy = (c[j] + MOD - c[j | (1 << i)]) % MOD;\n        c[j] = cx *\
    \ HALF % MOD;\n        c[j | (1 << i)] = cy * HALF % MOD;\n      }\n    }\n  }\n\
    \  for (int i = 0; i < (1 << N); i++){\n    std::cout << c[i];\n    if (i < (1\
    \ << N) - 1){\n      std::cout << ' ';\n    }\n  }\n  std::cout << std::endl;\n\
    }\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/bitwise_xor_convolution\"\
    \n#include <iostream>\n#include <vector>\nconst long long MOD = 998244353;\nconst\
    \ long long HALF = 499122177;\nint main(){\n  std::ios_base::sync_with_stdio(false);\n\
    \  std::cin.tie(nullptr);\n  int N;\n  std::cin >> N;\n  std::vector<long long>\
    \ a(1 << N);\n  for (int i = 0; i < (1 << N); i++){\n    std::cin >> a[i];\n \
    \ }\n  std::vector<long long> b(1 << N);\n  for (int i = 0; i < (1 << N); i++){\n\
    \    std::cin >> b[i];\n  }\n  for (int i = 0; i < N; i++){\n    for (int j =\
    \ 0; j < (1 << N); j++){\n      if ((j >> i & 1) == 0){\n        long long ax\
    \ = (a[j] + a[j | (1 << i)]) % MOD;\n        long long ay = (a[j] + MOD - a[j\
    \ | (1 << i)]) % MOD;\n        a[j] = ax;\n        a[j | (1 << i)] = ay;\n   \
    \     long long bx = (b[j] + b[j | (1 << i)]) % MOD;\n        long long by = (b[j]\
    \ + MOD - b[j | (1 << i)]) % MOD;\n        b[j] = bx;\n        b[j | (1 << i)]\
    \ = by;\n      }\n    }\n  }\n  std::vector<long long> c(1 << N);\n  for (int\
    \ i = 0; i < (1 << N); i++){\n    c[i] = a[i] * b[i] % MOD;\n  }\n  for (int i\
    \ = 0; i < N; i++){\n    for (int j = 0; j < (1 << N); j++){\n      if ((j >>\
    \ i & 1) == 0){\n        long long cx = (c[j] + c[j | (1 << i)]) % MOD;\n    \
    \    long long cy = (c[j] + MOD - c[j | (1 << i)]) % MOD;\n        c[j] = cx *\
    \ HALF % MOD;\n        c[j | (1 << i)] = cy * HALF % MOD;\n      }\n    }\n  }\n\
    \  for (int i = 0; i < (1 << N); i++){\n    std::cout << c[i];\n    if (i < (1\
    \ << N) - 1){\n      std::cout << ' ';\n    }\n  }\n  std::cout << std::endl;\n\
    }"
  dependsOn: []
  isVerificationFile: true
  path: Convolution/Bitwise Xor Convolution/ac.test.cpp
  requiredBy: []
  timestamp: '2023-09-24 05:52:34+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Convolution/Bitwise Xor Convolution/ac.test.cpp
layout: document
redirect_from:
- /verify/Convolution/Bitwise Xor Convolution/ac.test.cpp
- /verify/Convolution/Bitwise Xor Convolution/ac.test.cpp.html
title: Convolution/Bitwise Xor Convolution/ac.test.cpp
---
