#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N; // 入力を整数型として受け取る  
  vector<int> A(N);
  for (int i=0; i<N; i++) {
    cin >> A[i]; // 入力を整数型動的配列 として受け取る
  }
  
  int sum = 0;
  for (int item: A) { // A の各要素に対して処理を行う  
    sum += item;   
  }
  

  int ans = sum / N; // 配列の平均値を求める 
  cout << ans << endl;
  return 0;
}
