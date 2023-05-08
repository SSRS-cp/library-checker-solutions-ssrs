#define PROBLEM "https://judge.yosupo.jp/problem/associative_array"
#include <iostream>
#include <map>
int main(){
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int Q;
  std::cin >> Q;
  std::map<long long, long long> a;
  for (int i = 0; i < Q; i++){
    int t;
    std::cin >> t;
    if (t == 0){
      long long k, v;
      std::cin >> k >> v;
      a[k] = v;
    }
    if (t == 1){
      long long k;
      std::cin >> k;
      std::cout << a[k] << '\n';
    }
  }
}