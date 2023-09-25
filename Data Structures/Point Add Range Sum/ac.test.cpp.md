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
    PROBLEM: https://judge.yosupo.jp/problem/point_add_range_sum
    links:
    - https://judge.yosupo.jp/problem/point_add_range_sum
  bundledCode: "#line 1 \"Data Structures/Point Add Range Sum/ac.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n#include <iostream>\n\
    #include <vector>\nstruct binary_indexed_tree{\n  int N;\n  std::vector<long long>\
    \ BIT;\n  binary_indexed_tree(int N): N(N), BIT(N + 1, 0){\n  }\n  binary_indexed_tree(const\
    \ std::vector<int> A){\n    N = A.size();\n    BIT.resize(N + 1, 0);\n    for\
    \ (int i = 0; i < N; i++){\n      BIT[i + 1] = A[i];\n    }\n    for (int i =\
    \ 1; i < N; i++){\n      if (i + (i & -i) <= N){\n        BIT[i + (i & -i)] +=\
    \ BIT[i];\n      }\n    }\n  }\n  void add(int i, int x){\n    i++;\n    while\
    \ (i <= N){\n      BIT[i] += x;\n      i += i & -i;\n    }\n  }\n  long long sum(int\
    \ i){\n    long long ans = 0;\n    while (i > 0){\n      ans += BIT[i];\n    \
    \  i -= i & -i;\n    }\n    return ans;\n  }\n  long long sum(int L, int R){\n\
    \    return sum(R) - sum(L);\n  }\n};\nint main(){\n  std::ios_base::sync_with_stdio(false);\n\
    \  std::cin.tie(nullptr);\n  int N, Q;\n  std::cin >> N >> Q;\n  std::vector<int>\
    \ a(N);\n  for (int i = 0; i < N; i++){\n    std::cin >> a[i];\n  }\n  binary_indexed_tree\
    \ BIT(a);\n  for (int i = 0; i < Q; i++){\n    int t;\n    std::cin >> t;\n  \
    \  if (t == 0){\n      int p, x;\n      std::cin >> p >> x;\n      BIT.add(p,\
    \ x);\n    }\n    if (t == 1){\n      int l, r;\n      std::cin >> l >> r;\n \
    \     std::cout << BIT.sum(l, r) << '\\n';\n    }\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n\
    #include <iostream>\n#include <vector>\nstruct binary_indexed_tree{\n  int N;\n\
    \  std::vector<long long> BIT;\n  binary_indexed_tree(int N): N(N), BIT(N + 1,\
    \ 0){\n  }\n  binary_indexed_tree(const std::vector<int> A){\n    N = A.size();\n\
    \    BIT.resize(N + 1, 0);\n    for (int i = 0; i < N; i++){\n      BIT[i + 1]\
    \ = A[i];\n    }\n    for (int i = 1; i < N; i++){\n      if (i + (i & -i) <=\
    \ N){\n        BIT[i + (i & -i)] += BIT[i];\n      }\n    }\n  }\n  void add(int\
    \ i, int x){\n    i++;\n    while (i <= N){\n      BIT[i] += x;\n      i += i\
    \ & -i;\n    }\n  }\n  long long sum(int i){\n    long long ans = 0;\n    while\
    \ (i > 0){\n      ans += BIT[i];\n      i -= i & -i;\n    }\n    return ans;\n\
    \  }\n  long long sum(int L, int R){\n    return sum(R) - sum(L);\n  }\n};\nint\
    \ main(){\n  std::ios_base::sync_with_stdio(false);\n  std::cin.tie(nullptr);\n\
    \  int N, Q;\n  std::cin >> N >> Q;\n  std::vector<int> a(N);\n  for (int i =\
    \ 0; i < N; i++){\n    std::cin >> a[i];\n  }\n  binary_indexed_tree BIT(a);\n\
    \  for (int i = 0; i < Q; i++){\n    int t;\n    std::cin >> t;\n    if (t ==\
    \ 0){\n      int p, x;\n      std::cin >> p >> x;\n      BIT.add(p, x);\n    }\n\
    \    if (t == 1){\n      int l, r;\n      std::cin >> l >> r;\n      std::cout\
    \ << BIT.sum(l, r) << '\\n';\n    }\n  }\n}"
  dependsOn: []
  isVerificationFile: true
  path: Data Structures/Point Add Range Sum/ac.test.cpp
  requiredBy: []
  timestamp: '2023-09-24 05:52:34+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Data Structures/Point Add Range Sum/ac.test.cpp
layout: document
redirect_from:
- /verify/Data Structures/Point Add Range Sum/ac.test.cpp
- /verify/Data Structures/Point Add Range Sum/ac.test.cpp.html
title: Data Structures/Point Add Range Sum/ac.test.cpp
---
