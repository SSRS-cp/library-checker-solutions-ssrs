#define PROBLEM "https://judge.yosupo.jp/problem/bitwise_and_convolution"
#include <iostream>
#include <vector>
const long long MOD = 998244353;
int main(){
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int N;
  std::cin >> N;
  std::vector<long long> a(1 << N);
  for (int i = 0; i < (1 << N); i++){
    std::cin >> a[i];
  }
  std::vector<long long> b(1 << N);
  for (int i = 0; i < (1 << N); i++){
    std::cin >> b[i];
  }
  for (int i = 0; i < N; i++){
    for (int j = 0; j < (1 << N); j++){
      if ((j >> i & 1) == 0){
        a[j] += a[j | (1 << i)];
        a[j] %= MOD;
        b[j] += b[j | (1 << i)];
        b[j] %= MOD;
      }
    }
  }
  std::vector<long long> c(1 << N);
  for (int i = 0; i < (1 << N); i++){
    c[i] = a[i] * b[i] % MOD;
  }
  for (int i = 0; i < N; i++){
    for (int j = 0; j < (1 << N); j++){
      if ((j >> i & 1) == 0){
        c[j] += MOD - c[j | (1 << i)];
        c[j] %= MOD;
      }
    }
  }
  for (int i = 0; i < (1 << N); i++){
    std::cout << c[i];
    if (i < (1 << N) - 1){
      std::cout << ' ';
    }
  }
  std::cout << std::endl;
}