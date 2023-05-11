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
    PROBLEM: https://judge.yosupo.jp/problem/double_ended_priority_queue
    links:
    - https://judge.yosupo.jp/problem/double_ended_priority_queue
  bundledCode: "#line 1 \"Data Structures/Double-Ended Priority Queue/multiset.test.cpp\"\
    \n#define PROBLEM \"https://judge.yosupo.jp/problem/double_ended_priority_queue\"\
    \n#include <iostream>\n#include <set>\nint main(){\n  std::ios_base::sync_with_stdio(false);\n\
    \  std::cin.tie(nullptr);\n  int N, Q;\n  std::cin >> N >> Q;\n  std::multiset<int>\
    \ S;\n  for (int i = 0; i < N; i++){\n    int s;\n    std::cin >> s;\n    S.insert(s);\n\
    \  }\n  for (int i = 0; i < Q; i++){\n    int t;\n    std::cin >> t;\n    if (t\
    \ == 0){\n      int x;\n      std::cin >> x;\n      S.insert(x);\n    }\n    if\
    \ (t == 1){\n      std::cout << *S.begin() << '\\n';\n      S.erase(S.begin());\n\
    \    }\n    if (t == 2){\n      std::cout << *prev(S.end()) << '\\n';\n      S.erase(prev(S.end()));\n\
    \    }\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/double_ended_priority_queue\"\
    \n#include <iostream>\n#include <set>\nint main(){\n  std::ios_base::sync_with_stdio(false);\n\
    \  std::cin.tie(nullptr);\n  int N, Q;\n  std::cin >> N >> Q;\n  std::multiset<int>\
    \ S;\n  for (int i = 0; i < N; i++){\n    int s;\n    std::cin >> s;\n    S.insert(s);\n\
    \  }\n  for (int i = 0; i < Q; i++){\n    int t;\n    std::cin >> t;\n    if (t\
    \ == 0){\n      int x;\n      std::cin >> x;\n      S.insert(x);\n    }\n    if\
    \ (t == 1){\n      std::cout << *S.begin() << '\\n';\n      S.erase(S.begin());\n\
    \    }\n    if (t == 2){\n      std::cout << *prev(S.end()) << '\\n';\n      S.erase(prev(S.end()));\n\
    \    }\n  }\n}"
  dependsOn: []
  isVerificationFile: true
  path: Data Structures/Double-Ended Priority Queue/multiset.test.cpp
  requiredBy: []
  timestamp: '2023-05-08 13:07:25+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Data Structures/Double-Ended Priority Queue/multiset.test.cpp
layout: document
redirect_from:
- /verify/Data Structures/Double-Ended Priority Queue/multiset.test.cpp
- /verify/Data Structures/Double-Ended Priority Queue/multiset.test.cpp.html
title: Data Structures/Double-Ended Priority Queue/multiset.test.cpp
---
