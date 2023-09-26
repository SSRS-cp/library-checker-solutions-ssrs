#include <iostream>
#include <vector>
#include <utility>
const long long MOD = 998244353;
const long long HALF = 499122177;
const std::vector<long long> ntt_root = {1, 998244352, 911660635, 372528824, 929031873, 452798380, 922799308, 781712469, 476477967, 166035806, 258648936, 584193783, 63912897, 350007156, 666702199, 968855178, 629671588, 24514907, 996173970, 363395222, 565042129, 733596141, 267099868, 15311432};
const std::vector<long long> ntt_iroot = {1, 998244352, 86583718, 509520358, 337190230, 87557064, 609441965, 135236158, 304459705, 685443576, 381598368, 335559352, 129292727, 358024708, 814576206, 708402881, 283043518, 3707709, 121392023, 704923114, 950391366, 428961804, 382752275, 469870224};
std::vector<long long> ntt(std::vector<long long> A, bool inv){
  int N = A.size();
  int M = __builtin_ctz(N);
  std::vector<long long> B(N);
  for (int i = M - 1; i >= 0; i--){
    long long z = 1;
    for (int j = 0; j < N; j += (1 << i) * 2){
      for (int k = 0; k < (1 << i); k++){
        A[(1 << i) + j + k] *= z;
        A[(1 << i) + j + k] %= MOD;
        B[(j >> 1) + k] = (A[j + k] + A[(1 << i) + j + k]) % MOD;
        B[(N >> 1) + (j >> 1) + k] = (A[j + k] - A[(1 << i) + j + k] + MOD) % MOD;
      }
      z *= inv ? ntt_iroot[M - i] : ntt_root[M - i];
      z %= MOD;
    }
    std::swap(A, B);
  }
  if (inv){
    long long Ninv = 1;
    for (int i = 0; i < M; i++){
      Ninv *= HALF;
      Ninv %= MOD;
    }
    for (int i = 0; i < N; i++){
      A[i] = A[i] * Ninv % MOD;
    }
  }
  return A;
}
std::vector<long long> convolution(std::vector<long long> A, std::vector<long long> B){
  int deg = A.size() + B.size() - 1;
  int N = deg == 1 ? 1 : 1 << (32 - __builtin_clz(deg - 1));
  A.resize(N);
  B.resize(N);
  A = ntt(A, false);
  B = ntt(B, false);
  std::vector<long long> ans(N);
  for (int i = 0; i < N; i++){
    ans[i] = A[i] * B[i] % MOD;
  }
  ans = ntt(ans, true);
  ans.resize(deg);
  return ans;
}
int main(){
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int N, M;
  std::cin >> N >> M;
  std::vector<long long> a(N);
  for (int i = 0; i < N; i++){
    std::cin >> a[i];
  }
  std::vector<long long> b(M);
  for (int i = 0; i < M; i++){
    std::cin >> b[i];
  }
  std::vector<long long> c = convolution(a, b);
  for (int i = 0; i < N + M - 1; i++){
    std::cout << c[i];
    if (i < N + M - 2){
      std::cout << ' ';
    }
  }
  std::cout << std::endl;
}