#define PROBLEM "https://judge.yosupo.jp/problem/tree_diameter"
#include <iostream>
#include <vector>
#include <queue>
int main(){
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int N;
  std::cin >> N;
  std::vector<std::vector<std::pair<int, int>>> E(N);
  for (int i = 0; i < N - 1; i++){
    int a, b, c;
    std::cin >> a >> b >> c;
    E[a].push_back(std::make_pair(c, b));
    E[b].push_back(std::make_pair(c, a));
  }
  std::vector<long long> d1(N, -1);
  d1[0] = 0;
  std::queue<int> Q1;
  Q1.push(0);
  while (!Q1.empty()){
    int v = Q1.front();
    Q1.pop();
    for (std::pair<int, int> e : E[v]){
      int w = e.second;
      if (d1[w] == -1){
        d1[w] = d1[v] + e.first;
        Q1.push(w);
      }
    }
  }
  int s = 0;
  for (int i = 1; i < N; i++){
    if (d1[i] > d1[s]){
      s = i;
    }
  }
  std::vector<long long> d2(N, -1);
  d2[s] = 0;
  std::vector<int> p(N, -1);
  std::queue<int> Q2;
  Q2.push(s);
  while (!Q2.empty()){
    int v = Q2.front();
    Q2.pop();
    for (std::pair<int, int> e:  E[v]){
      int w = e.second;
      if (d2[w] == -1){
        p[w] = v;
        d2[w] = d2[v] + e.first;
        Q2.push(w);
      }
    }
  }
  int t = 0;
  for (int i = 0; i < N; i++){
    if (d2[i] > d2[t]){
      t = i;
    }
  }
  std::vector<int> ans;
  for (int i = t; i != s; i = p[i]){
    ans.push_back(i);
  }
  ans.push_back(s);
  long long X = d2[t];
  int Y = ans.size();
  std::cout << X << ' ' << Y << std::endl;
  for (int i = 0; i < Y; i++){
    std::cout << ans[i];
    if (i < Y - 1){
      std::cout << ' ';
    }
  }
  std::cout << std::endl;
}