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
    PROBLEM: https://judge.yosupo.jp/problem/associative_array
    links:
    - https://judge.yosupo.jp/problem/associative_array
  bundledCode: "#line 1 \"Data Structures/Associative Array/map.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/associative_array\"\n#include <iostream>\n\
    #include <map>\nint main(){\n  std::ios_base::sync_with_stdio(false);\n  std::cin.tie(nullptr);\n\
    \  int Q;\n  std::cin >> Q;\n  std::map<long long, long long> a;\n  for (int i\
    \ = 0; i < Q; i++){\n    int t;\n    std::cin >> t;\n    if (t == 0){\n      long\
    \ long k, v;\n      std::cin >> k >> v;\n      a[k] = v;\n    }\n    if (t ==\
    \ 1){\n      long long k;\n      std::cin >> k;\n      std::cout << a[k] << '\\\
    n';\n    }\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/associative_array\"\n#include\
    \ <iostream>\n#include <map>\nint main(){\n  std::ios_base::sync_with_stdio(false);\n\
    \  std::cin.tie(nullptr);\n  int Q;\n  std::cin >> Q;\n  std::map<long long, long\
    \ long> a;\n  for (int i = 0; i < Q; i++){\n    int t;\n    std::cin >> t;\n \
    \   if (t == 0){\n      long long k, v;\n      std::cin >> k >> v;\n      a[k]\
    \ = v;\n    }\n    if (t == 1){\n      long long k;\n      std::cin >> k;\n  \
    \    std::cout << a[k] << '\\n';\n    }\n  }\n}"
  dependsOn: []
  isVerificationFile: true
  path: Data Structures/Associative Array/map.test.cpp
  requiredBy: []
  timestamp: '2023-05-08 12:25:09+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Data Structures/Associative Array/map.test.cpp
layout: document
redirect_from:
- /verify/Data Structures/Associative Array/map.test.cpp
- /verify/Data Structures/Associative Array/map.test.cpp.html
title: Data Structures/Associative Array/map.test.cpp
---
