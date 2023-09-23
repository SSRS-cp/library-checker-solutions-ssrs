#define PROBLEM "https://judge.yosupo.jp/problem/subset_convolution"
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
  std::vector<std::vector<long long>> A(N + 1, std::vector<long long>(1 << N, 0));
  std::vector<std::vector<long long>> B(N + 1, std::vector<long long>(1 << N, 0));
  for (int i = 0; i < (1 << N); i++){
    int p = __builtin_popcount(i);
    A[p][i] = a[i];
    B[p][i] = b[i];
  }
  for (int i = 0; i <= N; i++){
    for (int j = 0; j < N; j++){
      for (int k = 0; k < (1 << N); k++){
        if ((k >> j & 1) == 1){
          A[i][k] += A[i][k ^ (1 << j)];
          A[i][k] %= MOD;
          B[i][k] += B[i][k ^ (1 << j)];
          B[i][k] %= MOD;
        }
      }
    }
  }
  std::vector<std::vector<long long>> C(N + 1, std::vector<long long>(1 << N, 0));
  for (int i = 0; i < (1 << N); i++){
    for (int j = 0; j <= N; j++){
      for (int k = 0; k <= N - j; k++){
        C[j + k][i] += A[j][i] * B[k][i];
        C[j + k][i] %= MOD;
      }
    }
  }
  for (int i = 0; i <= N; i++){
    for (int j = 0; j < N; j++){
      for (int k = 0; k < (1 << N); k++){
        if ((k >> j & 1) == 1){
          C[i][k] += MOD - C[i][k ^ (1 << j)];
          C[i][k] %= MOD;
        }
      }
    }
  }
  std::vector<long long> c(1 << N);
  for (int i = 0; i < (1 << N); i++){
    int p = __builtin_popcount(i);
    c[i] = C[p][i];
  }
  for (int i = 0; i < (1 << N); i++){
    std::cout << c[i];
    if (i < (1 << N) - 1){
      std::cout << ' ';
    }
  }
  std::cout << std::endl;
}