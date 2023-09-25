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
    PROBLEM: https://judge.yosupo.jp/problem/tree_diameter
    links:
    - https://judge.yosupo.jp/problem/tree_diameter
  bundledCode: "#line 1 \"Tree/Tree Diameter/ac.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/tree_diameter\"\
    \n#include <iostream>\n#include <vector>\n#include <queue>\nint main(){\n  std::ios_base::sync_with_stdio(false);\n\
    \  std::cin.tie(nullptr);\n  int N;\n  std::cin >> N;\n  std::vector<std::vector<std::pair<int,\
    \ int>>> E(N);\n  for (int i = 0; i < N - 1; i++){\n    int a, b, c;\n    std::cin\
    \ >> a >> b >> c;\n    E[a].push_back(std::make_pair(c, b));\n    E[b].push_back(std::make_pair(c,\
    \ a));\n  }\n  std::vector<long long> d1(N, -1);\n  d1[0] = 0;\n  std::queue<int>\
    \ Q1;\n  Q1.push(0);\n  while (!Q1.empty()){\n    int v = Q1.front();\n    Q1.pop();\n\
    \    for (std::pair<int, int> e : E[v]){\n      int w = e.second;\n      if (d1[w]\
    \ == -1){\n        d1[w] = d1[v] + e.first;\n        Q1.push(w);\n      }\n  \
    \  }\n  }\n  int s = 0;\n  for (int i = 1; i < N; i++){\n    if (d1[i] > d1[s]){\n\
    \      s = i;\n    }\n  }\n  std::vector<long long> d2(N, -1);\n  d2[s] = 0;\n\
    \  std::vector<int> p(N, -1);\n  std::queue<int> Q2;\n  Q2.push(s);\n  while (!Q2.empty()){\n\
    \    int v = Q2.front();\n    Q2.pop();\n    for (std::pair<int, int> e:  E[v]){\n\
    \      int w = e.second;\n      if (d2[w] == -1){\n        p[w] = v;\n       \
    \ d2[w] = d2[v] + e.first;\n        Q2.push(w);\n      }\n    }\n  }\n  int t\
    \ = 0;\n  for (int i = 0; i < N; i++){\n    if (d2[i] > d2[t]){\n      t = i;\n\
    \    }\n  }\n  std::vector<int> ans;\n  for (int i = t; i != s; i = p[i]){\n \
    \   ans.push_back(i);\n  }\n  ans.push_back(s);\n  long long X = d2[t];\n  int\
    \ Y = ans.size();\n  std::cout << X << ' ' << Y << std::endl;\n  for (int i =\
    \ 0; i < Y; i++){\n    std::cout << ans[i];\n    if (i < Y - 1){\n      std::cout\
    \ << ' ';\n    }\n  }\n  std::cout << std::endl;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/tree_diameter\"\n#include\
    \ <iostream>\n#include <vector>\n#include <queue>\nint main(){\n  std::ios_base::sync_with_stdio(false);\n\
    \  std::cin.tie(nullptr);\n  int N;\n  std::cin >> N;\n  std::vector<std::vector<std::pair<int,\
    \ int>>> E(N);\n  for (int i = 0; i < N - 1; i++){\n    int a, b, c;\n    std::cin\
    \ >> a >> b >> c;\n    E[a].push_back(std::make_pair(c, b));\n    E[b].push_back(std::make_pair(c,\
    \ a));\n  }\n  std::vector<long long> d1(N, -1);\n  d1[0] = 0;\n  std::queue<int>\
    \ Q1;\n  Q1.push(0);\n  while (!Q1.empty()){\n    int v = Q1.front();\n    Q1.pop();\n\
    \    for (std::pair<int, int> e : E[v]){\n      int w = e.second;\n      if (d1[w]\
    \ == -1){\n        d1[w] = d1[v] + e.first;\n        Q1.push(w);\n      }\n  \
    \  }\n  }\n  int s = 0;\n  for (int i = 1; i < N; i++){\n    if (d1[i] > d1[s]){\n\
    \      s = i;\n    }\n  }\n  std::vector<long long> d2(N, -1);\n  d2[s] = 0;\n\
    \  std::vector<int> p(N, -1);\n  std::queue<int> Q2;\n  Q2.push(s);\n  while (!Q2.empty()){\n\
    \    int v = Q2.front();\n    Q2.pop();\n    for (std::pair<int, int> e:  E[v]){\n\
    \      int w = e.second;\n      if (d2[w] == -1){\n        p[w] = v;\n       \
    \ d2[w] = d2[v] + e.first;\n        Q2.push(w);\n      }\n    }\n  }\n  int t\
    \ = 0;\n  for (int i = 0; i < N; i++){\n    if (d2[i] > d2[t]){\n      t = i;\n\
    \    }\n  }\n  std::vector<int> ans;\n  for (int i = t; i != s; i = p[i]){\n \
    \   ans.push_back(i);\n  }\n  ans.push_back(s);\n  long long X = d2[t];\n  int\
    \ Y = ans.size();\n  std::cout << X << ' ' << Y << std::endl;\n  for (int i =\
    \ 0; i < Y; i++){\n    std::cout << ans[i];\n    if (i < Y - 1){\n      std::cout\
    \ << ' ';\n    }\n  }\n  std::cout << std::endl;\n}"
  dependsOn: []
  isVerificationFile: true
  path: Tree/Tree Diameter/ac.test.cpp
  requiredBy: []
  timestamp: '2023-09-24 05:52:34+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Tree/Tree Diameter/ac.test.cpp
layout: document
redirect_from:
- /verify/Tree/Tree Diameter/ac.test.cpp
- /verify/Tree/Tree Diameter/ac.test.cpp.html
title: Tree/Tree Diameter/ac.test.cpp
---
