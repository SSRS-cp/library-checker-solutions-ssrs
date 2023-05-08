#define PROBLEM "https://judge.yosupo.jp/problem/double_ended_priority_queue"
#include <iostream>
#include <set>
int main(){
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int N, Q;
  std::cin >> N >> Q;
  std::multiset<int> S;
  for (int i = 0; i < N; i++){
    int s;
    std::cin >> s;
    S.insert(s);
  }
  for (int i = 0; i < Q; i++){
    int t;
    std::cin >> t;
    if (t == 0){
      int x;
      std::cin >> x;
      S.insert(x);
    }
    if (t == 1){
      std::cout << *S.begin() << '\n';
      S.erase(S.begin());
    }
    if (t == 2){
      std::cout << *prev(S.end()) << '\n';
      S.erase(prev(S.end()));
    }
  }
}