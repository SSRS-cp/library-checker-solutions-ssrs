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
    PROBLEM: https://judge.yosupo.jp/problem/montmort_number_mod
    links:
    - https://judge.yosupo.jp/problem/montmort_number_mod
  bundledCode: "#line 1 \"Math/Montmort Number/ac.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/montmort_number_mod\"\
    \n#include <iostream>\n#include <vector>\nint main(){\n  std::ios_base::sync_with_stdio(false);\n\
    \  std::cin.tie(nullptr);\n  int N, M;\n  std::cin >> N >> M;\n  std::vector<long\
    \ long> b(N + 1);\n  b[0] = 1;\n  b[1] = 0;\n  for (int i = 2; i <= N; i++){\n\
    \    b[i] = (b[i - 2] + b[i - 1]) * (i - 1) % M;\n  }\n  for (int i = 1; i <=\
    \ N; i++){\n    std::cout << b[i];\n    if (i < N){\n      std::cout << ' ';\n\
    \    }\n  }\n  std::cout << std::endl;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/montmort_number_mod\"\n\
    #include <iostream>\n#include <vector>\nint main(){\n  std::ios_base::sync_with_stdio(false);\n\
    \  std::cin.tie(nullptr);\n  int N, M;\n  std::cin >> N >> M;\n  std::vector<long\
    \ long> b(N + 1);\n  b[0] = 1;\n  b[1] = 0;\n  for (int i = 2; i <= N; i++){\n\
    \    b[i] = (b[i - 2] + b[i - 1]) * (i - 1) % M;\n  }\n  for (int i = 1; i <=\
    \ N; i++){\n    std::cout << b[i];\n    if (i < N){\n      std::cout << ' ';\n\
    \    }\n  }\n  std::cout << std::endl;\n}"
  dependsOn: []
  isVerificationFile: true
  path: Math/Montmort Number/ac.test.cpp
  requiredBy: []
  timestamp: '2023-09-24 05:52:34+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Math/Montmort Number/ac.test.cpp
layout: document
redirect_from:
- /verify/Math/Montmort Number/ac.test.cpp
- /verify/Math/Montmort Number/ac.test.cpp.html
title: Math/Montmort Number/ac.test.cpp
---
