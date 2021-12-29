#include <iostream>
#include <vector>
using namespace std;

int main() {
  // データを受け取る
  int N;
  cin >> N; 
  vector<int> A(N); 
  for (int i=0; i<N; ++i) cin >> A[i];

  // 線形探索
  vector<int> count(9);  
  for (int i=0; i<N; ++i) {   
    count[A[i]-1]++;
  }
  
  // 答えを出力する
  for (int i=0; i<9; ++i) {
    cout << count[i] << endl;
  }
  return 0;
}
