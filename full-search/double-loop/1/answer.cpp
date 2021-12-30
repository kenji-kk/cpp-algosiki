#include <iostream>
#include <vector>
using namespace std;

int main() {
  // データを受け取る
  int N; 
  cin >> N;  
  vector<int> A(N);
  for (int i=0; i<N; i++) cin >> A[i];


  // 配列の全探索
  int counter = 0;
  for (int i=0; i<N; ++i) {
    // 素数判定 (数字の全探索)
    bool is_prime = true;
    if (A[i]==1) is_prime = false;
    else {
      for (int j=2; j<=A[i]-1; ++j) { 
        if (A[i]%j==0) is_prime = false; 
      }
    }
    // 素数ならば 1 を足す
    if (is_prime) counter++;
  }

  // 答えを出力する
  cout << counter << endl;
  return 0;
}
