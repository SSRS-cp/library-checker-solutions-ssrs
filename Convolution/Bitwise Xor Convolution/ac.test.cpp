#define PROBLEM "https://judge.yosupo.jp/problem/bitwise_xor_convolution"
#include <iostream>
#include <vector>
const long long MOD = 998244353;
const long long HALF = 499122177;
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
        long long ax = (a[j] + a[j | (1 << i)]) % MOD;
        long long ay = (a[j] + MOD - a[j | (1 << i)]) % MOD;
        a[j] = ax;
        a[j | (1 << i)] = ay;
        long long bx = (b[j] + b[j | (1 << i)]) % MOD;
        long long by = (b[j] + MOD - b[j | (1 << i)]) % MOD;
        b[j] = bx;
        b[j | (1 << i)] = by;
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
        long long cx = (c[j] + c[j | (1 << i)]) % MOD;
        long long cy = (c[j] + MOD - c[j | (1 << i)]) % MOD;
        c[j] = cx * HALF % MOD;
        c[j | (1 << i)] = cy * HALF % MOD;
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