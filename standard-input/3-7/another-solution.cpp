#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N; // 入力を整数型として受け取る  
  vector<int> A(N);
  for (int i=0; i<N; i++) {
    cin >> A[i]; // 入力を整数型動的配列 として受け取る 

  }
  
  int ans = *min_element(A.begin(), A.end()); // 配列の最小値を求める  
  cout << ans << endl;
  return 0;
}
