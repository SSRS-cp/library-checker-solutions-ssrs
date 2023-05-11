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
    PROBLEM: https://judge.yosupo.jp/problem/static_range_sum
    links:
    - https://judge.yosupo.jp/problem/static_range_sum
  bundledCode: "#line 1 \"Data Structures/Static Range Sum/ac.test.cpp\"\n#define\
    \ PROBLEM 'https://judge.yosupo.jp/problem/static_range_sum'\n#include <iostream>\n\
    #include <vector>\nint main(){\n  std::ios_base::sync_with_stdio(false);\n  std::cin.tie(nullptr);\n\
    \  int N, Q;\n  std::cin >> N >> Q;\n  std::vector<int> A(N);\n  for (int i =\
    \ 0; i < N; i++){\n    std::cin >> A[i];\n  }\n  std::vector<long long> S(N +\
    \ 1);\n  S[0] = 0;\n  for (int i = 0; i < N; i++){\n    S[i + 1] = S[i] + A[i];\n\
    \  }\n  for (int i = 0; i < Q; i++){\n    int L, R;\n    std::cin >> L >> R;\n\
    \    std::cout << S[R] - S[L] << '\\n';\n  }\n}\n"
  code: "#define PROBLEM 'https://judge.yosupo.jp/problem/static_range_sum'\n#include\
    \ <iostream>\n#include <vector>\nint main(){\n  std::ios_base::sync_with_stdio(false);\n\
    \  std::cin.tie(nullptr);\n  int N, Q;\n  std::cin >> N >> Q;\n  std::vector<int>\
    \ A(N);\n  for (int i = 0; i < N; i++){\n    std::cin >> A[i];\n  }\n  std::vector<long\
    \ long> S(N + 1);\n  S[0] = 0;\n  for (int i = 0; i < N; i++){\n    S[i + 1] =\
    \ S[i] + A[i];\n  }\n  for (int i = 0; i < Q; i++){\n    int L, R;\n    std::cin\
    \ >> L >> R;\n    std::cout << S[R] - S[L] << '\\n';\n  }\n}"
  dependsOn: []
  isVerificationFile: true
  path: Data Structures/Static Range Sum/ac.test.cpp
  requiredBy: []
  timestamp: '2023-05-08 12:41:46+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Data Structures/Static Range Sum/ac.test.cpp
layout: document
redirect_from:
- /verify/Data Structures/Static Range Sum/ac.test.cpp
- /verify/Data Structures/Static Range Sum/ac.test.cpp.html
title: Data Structures/Static Range Sum/ac.test.cpp
---
