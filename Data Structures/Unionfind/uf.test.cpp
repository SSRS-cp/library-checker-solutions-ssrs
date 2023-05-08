#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"
#include <iostream>
#include <vector>
#include <utility>
struct unionfind{
  std::vector<int> p;
  unionfind(int N): p(N, -1){
  }
  int root(int x){
    if (p[x] < 0){
      return x;
    } else {
      p[x] = root(p[x]);
      return p[x];
    }
  }
  bool same(int x, int y){
    return root(x) == root(y);
  }
  void unite(int x, int y){
    x = root(x);
    y = root(y);
    if (x != y){
      if (p[x] < p[y]){
        std::swap(x, y);
      }
      p[y] += p[x];
      p[x] = y;
    }
  }
};
int main(){
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int N, Q;
  std::cin >> N >> Q;
  unionfind UF(N);
  for (int i = 0; i < Q; i++){
    int t, u, v;
    std::cin >> t >> u >> v;
    if (t == 0){
      UF.unite(u, v);
    }
    if (t == 1){
      if (UF.same(u, v)){
        std::cout << 1 << '\n';
      } else {
        std::cout << 0 << '\n';
      }
    }
  }
}