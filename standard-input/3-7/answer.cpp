#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N; // 入力を整数型として受け取る  
  vector<int> A(N);
  for (int i=0; i<N; i++) {
    cin >> A[i]; // 入力を整数型動的配列 として受け取る 
  }
  
  int ans = 10000000; // 配列の最小値を求める はじめは大きな値をセットする
  for (int i=0; i<N; i++) {
    if (A[i]<ans) { // 今見ている値が ans より小さければ
      ans = A[i]; // 最小値を更新する 
    }
  }
  cout << ans << endl;
  return 0;
}
