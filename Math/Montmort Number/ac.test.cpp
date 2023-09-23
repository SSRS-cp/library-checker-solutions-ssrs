#define PROBLEM "https://judge.yosupo.jp/problem/montmort_number_mod"
#include <iostream>
#include <vector>
int main(){
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int N, M;
  std::cin >> N >> M;
  std::vector<long long> b(N + 1);
  b[0] = 1;
  b[1] = 0;
  for (int i = 2; i <= N; i++){
    b[i] = (b[i - 2] + b[i - 1]) * (i - 1) % M;
  }
  for (int i = 1; i <= N; i++){
    std::cout << b[i];
    if (i < N){
      std::cout << ' ';
    }
  }
  std::cout << std::endl;
}