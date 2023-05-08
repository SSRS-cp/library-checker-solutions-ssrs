#define PROBLEM "https://judge.yosupo.jp/problem/predecessor_problem"
#include <iostream>
#include <vector>
#include <string>
#include <set>
int main(){
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int N, Q;
  std::cin >> N >> Q;
  std::string T;
  std::cin >> T;
  std::vector<int> A;
  for (int i = 0; i < N; i++){
    if (T[i] == '1'){
      A.push_back(i);
    }
  }
  std::set<int> S(A.begin(), A.end());
  for (int i = 0; i < Q; i++){
    int t, k;
    std::cin >> t >> k;
    if (t == 0){
      S.insert(k);
    }
    if (t == 1){
      S.erase(k);
    }
    if (t == 2){
      std::cout << S.count(k) << '\n';
    }
    if (t == 3){
      std::set<int>::iterator itr = S.lower_bound(k);
      if (itr == S.end()){
        std::cout << -1 << '\n';
      } else {
        std::cout << *itr << '\n';
      }
    }
    if (t == 4){
      std::set<int>::iterator itr = S.upper_bound(k);
      if (itr == S.begin()){
        std::cout << -1 << '\n';
      } else {
        std::cout << *std::prev(itr) << '\n';
      }
    }
  }
}