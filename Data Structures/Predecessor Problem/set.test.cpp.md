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
    PROBLEM: https://judge.yosupo.jp/problem/predecessor_problem
    links:
    - https://judge.yosupo.jp/problem/predecessor_problem
  bundledCode: "#line 1 \"Data Structures/Predecessor Problem/set.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/predecessor_problem\"\n#include <iostream>\n\
    #include <vector>\n#include <string>\n#include <set>\nint main(){\n  std::ios_base::sync_with_stdio(false);\n\
    \  std::cin.tie(nullptr);\n  int N, Q;\n  std::cin >> N >> Q;\n  std::string T;\n\
    \  std::cin >> T;\n  std::vector<int> A;\n  for (int i = 0; i < N; i++){\n   \
    \ if (T[i] == '1'){\n      A.push_back(i);\n    }\n  }\n  std::set<int> S(A.begin(),\
    \ A.end());\n  for (int i = 0; i < Q; i++){\n    int t, k;\n    std::cin >> t\
    \ >> k;\n    if (t == 0){\n      S.insert(k);\n    }\n    if (t == 1){\n     \
    \ S.erase(k);\n    }\n    if (t == 2){\n      std::cout << S.count(k) << '\\n';\n\
    \    }\n    if (t == 3){\n      std::set<int>::iterator itr = S.lower_bound(k);\n\
    \      if (itr == S.end()){\n        std::cout << -1 << '\\n';\n      } else {\n\
    \        std::cout << *itr << '\\n';\n      }\n    }\n    if (t == 4){\n     \
    \ std::set<int>::iterator itr = S.upper_bound(k);\n      if (itr == S.begin()){\n\
    \        std::cout << -1 << '\\n';\n      } else {\n        std::cout << *std::prev(itr)\
    \ << '\\n';\n      }\n    }\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/predecessor_problem\"\n\
    #include <iostream>\n#include <vector>\n#include <string>\n#include <set>\nint\
    \ main(){\n  std::ios_base::sync_with_stdio(false);\n  std::cin.tie(nullptr);\n\
    \  int N, Q;\n  std::cin >> N >> Q;\n  std::string T;\n  std::cin >> T;\n  std::vector<int>\
    \ A;\n  for (int i = 0; i < N; i++){\n    if (T[i] == '1'){\n      A.push_back(i);\n\
    \    }\n  }\n  std::set<int> S(A.begin(), A.end());\n  for (int i = 0; i < Q;\
    \ i++){\n    int t, k;\n    std::cin >> t >> k;\n    if (t == 0){\n      S.insert(k);\n\
    \    }\n    if (t == 1){\n      S.erase(k);\n    }\n    if (t == 2){\n      std::cout\
    \ << S.count(k) << '\\n';\n    }\n    if (t == 3){\n      std::set<int>::iterator\
    \ itr = S.lower_bound(k);\n      if (itr == S.end()){\n        std::cout << -1\
    \ << '\\n';\n      } else {\n        std::cout << *itr << '\\n';\n      }\n  \
    \  }\n    if (t == 4){\n      std::set<int>::iterator itr = S.upper_bound(k);\n\
    \      if (itr == S.begin()){\n        std::cout << -1 << '\\n';\n      } else\
    \ {\n        std::cout << *std::prev(itr) << '\\n';\n      }\n    }\n  }\n}"
  dependsOn: []
  isVerificationFile: true
  path: Data Structures/Predecessor Problem/set.test.cpp
  requiredBy: []
  timestamp: '2023-05-08 13:07:25+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Data Structures/Predecessor Problem/set.test.cpp
layout: document
redirect_from:
- /verify/Data Structures/Predecessor Problem/set.test.cpp
- /verify/Data Structures/Predecessor Problem/set.test.cpp.html
title: Data Structures/Predecessor Problem/set.test.cpp
---
