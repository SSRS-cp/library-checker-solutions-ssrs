#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"
#include <iostream>
#include <vector>
struct binary_indexed_tree{
  int N;
  std::vector<long long> BIT;
  binary_indexed_tree(int N): N(N), BIT(N + 1, 0){
  }
  binary_indexed_tree(const std::vector<int> A){
    N = A.size();
    BIT.resize(N + 1, 0);
    for (int i = 0; i < N; i++){
      BIT[i + 1] = A[i];
    }
    for (int i = 1; i < N; i++){
      if (i + (i & -i) <= N){
        BIT[i + (i & -i)] += BIT[i];
      }
    }
  }
  void add(int i, int x){
    i++;
    while (i <= N){
      BIT[i] += x;
      i += i & -i;
    }
  }
  long long sum(int i){
    long long ans = 0;
    while (i > 0){
      ans += BIT[i];
      i -= i & -i;
    }
    return ans;
  }
  long long sum(int L, int R){
    return sum(R) - sum(L);
  }
};
int main(){
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int N, Q;
  std::cin >> N >> Q;
  std::vector<int> a(N);
  for (int i = 0; i < N; i++){
    std::cin >> a[i];
  }
  binary_indexed_tree BIT(a);
  for (int i = 0; i < Q; i++){
    int t;
    std::cin >> t;
    if (t == 0){
      int p, x;
      std::cin >> p >> x;
      BIT.add(p, x);
    }
    if (t == 1){
      int l, r;
      std::cin >> l >> r;
      std::cout << BIT.sum(l, r) << '\n';
    }
  }
}