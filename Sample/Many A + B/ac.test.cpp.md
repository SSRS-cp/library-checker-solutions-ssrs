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
    PROBLEM: https://judge.yosupo.jp/problem/many_aplusb
    links:
    - https://judge.yosupo.jp/problem/many_aplusb
  bundledCode: "#line 1 \"Sample/Many A + B/ac.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/many_aplusb\"\
    \n#include <iostream>\n#include <iomanip>\nint main(){\n  std::ios_base::sync_with_stdio(false);\n\
    \  std::cin.tie(0);\n  int T;\n  std::cin >> T;\n  for (int i = 0; i < T; i++){\n\
    \    long long A, B;\n    std::cin >> A >> B;\n    std::cout << A + B << '\\n';\n\
    \  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/many_aplusb\"\n#include\
    \ <iostream>\n#include <iomanip>\nint main(){\n  std::ios_base::sync_with_stdio(false);\n\
    \  std::cin.tie(0);\n  int T;\n  std::cin >> T;\n  for (int i = 0; i < T; i++){\n\
    \    long long A, B;\n    std::cin >> A >> B;\n    std::cout << A + B << '\\n';\n\
    \  }\n}"
  dependsOn: []
  isVerificationFile: true
  path: Sample/Many A + B/ac.test.cpp
  requiredBy: []
  timestamp: '2023-05-08 08:17:27+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Sample/Many A + B/ac.test.cpp
layout: document
redirect_from:
- /verify/Sample/Many A + B/ac.test.cpp
- /verify/Sample/Many A + B/ac.test.cpp.html
title: Sample/Many A + B/ac.test.cpp
---