#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N; // 入力を整数型として受け取る  
  vector<string> A(N); 
  for (int i=0; i<N; i++) {
    cin >> A[i]; // 入力を整数型動的配列として受け取る 
  }

  string ans = ""; // 答え 
  for (string item: A) { // A の各要素の長さを足し合わせる   
    ans += item[0];   
  }

  cout << ans << endl;  
  return 0;
}
