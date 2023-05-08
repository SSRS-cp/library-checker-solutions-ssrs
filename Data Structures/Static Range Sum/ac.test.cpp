#define PROBLEM 'https://judge.yosupo.jp/problem/static_range_sum'
#include <iostream>
#include <vector>
int main(){
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int N, Q;
  std::cin >> N >> Q;
  std::vector<int> A(N);
  for (int i = 0; i < N; i++){
    std::cin >> A[i];
  }
  std::vector<long long> S(N + 1);
  S[0] = 0;
  for (int i = 0; i < N; i++){
    S[i + 1] = S[i] + A[i];
  }
  for (int i = 0; i < Q; i++){
    int L, R;
    std::cin >> L >> R;
    std::cout << S[R] - S[L] << '\n';
  }
}