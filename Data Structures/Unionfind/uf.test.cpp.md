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
    PROBLEM: https://judge.yosupo.jp/problem/unionfind
    links:
    - https://judge.yosupo.jp/problem/unionfind
  bundledCode: "#line 1 \"Data Structures/Unionfind/uf.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/unionfind\"\n#include <iostream>\n#include\
    \ <vector>\n#include <utility>\nstruct unionfind{\n  std::vector<int> p;\n  unionfind(int\
    \ N): p(N, -1){\n  }\n  int root(int x){\n    if (p[x] < 0){\n      return x;\n\
    \    } else {\n      p[x] = root(p[x]);\n      return p[x];\n    }\n  }\n  bool\
    \ same(int x, int y){\n    return root(x) == root(y);\n  }\n  void unite(int x,\
    \ int y){\n    x = root(x);\n    y = root(y);\n    if (x != y){\n      if (p[x]\
    \ < p[y]){\n        std::swap(x, y);\n      }\n      p[y] += p[x];\n      p[x]\
    \ = y;\n    }\n  }\n};\nint main(){\n  std::ios_base::sync_with_stdio(false);\n\
    \  std::cin.tie(nullptr);\n  int N, Q;\n  std::cin >> N >> Q;\n  unionfind UF(N);\n\
    \  for (int i = 0; i < Q; i++){\n    int t, u, v;\n    std::cin >> t >> u >> v;\n\
    \    if (t == 0){\n      UF.unite(u, v);\n    }\n    if (t == 1){\n      if (UF.same(u,\
    \ v)){\n        std::cout << 1 << '\\n';\n      } else {\n        std::cout <<\
    \ 0 << '\\n';\n      }\n    }\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n#include <iostream>\n\
    #include <vector>\n#include <utility>\nstruct unionfind{\n  std::vector<int> p;\n\
    \  unionfind(int N): p(N, -1){\n  }\n  int root(int x){\n    if (p[x] < 0){\n\
    \      return x;\n    } else {\n      p[x] = root(p[x]);\n      return p[x];\n\
    \    }\n  }\n  bool same(int x, int y){\n    return root(x) == root(y);\n  }\n\
    \  void unite(int x, int y){\n    x = root(x);\n    y = root(y);\n    if (x !=\
    \ y){\n      if (p[x] < p[y]){\n        std::swap(x, y);\n      }\n      p[y]\
    \ += p[x];\n      p[x] = y;\n    }\n  }\n};\nint main(){\n  std::ios_base::sync_with_stdio(false);\n\
    \  std::cin.tie(nullptr);\n  int N, Q;\n  std::cin >> N >> Q;\n  unionfind UF(N);\n\
    \  for (int i = 0; i < Q; i++){\n    int t, u, v;\n    std::cin >> t >> u >> v;\n\
    \    if (t == 0){\n      UF.unite(u, v);\n    }\n    if (t == 1){\n      if (UF.same(u,\
    \ v)){\n        std::cout << 1 << '\\n';\n      } else {\n        std::cout <<\
    \ 0 << '\\n';\n      }\n    }\n  }\n}"
  dependsOn: []
  isVerificationFile: true
  path: Data Structures/Unionfind/uf.test.cpp
  requiredBy: []
  timestamp: '2023-05-08 12:36:19+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Data Structures/Unionfind/uf.test.cpp
layout: document
redirect_from:
- /verify/Data Structures/Unionfind/uf.test.cpp
- /verify/Data Structures/Unionfind/uf.test.cpp.html
title: Data Structures/Unionfind/uf.test.cpp
---
