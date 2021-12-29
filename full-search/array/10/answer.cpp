#include <iostream>
#include <vector>
using namespace std;

int main() {
  // データを受け取る
  int N;
  cin >> N; 
  vector<int> A(N); 
  for (int i=0; i<N; ++i) cin >> A[i];

  // 線形探索 (集計) 
  vector<int> count(9);  
  for (int i=0; i<N; ++i) {   
    count[A[i]-1]++; 
  }

  // 線形探索 (最大値) 
  int index = 0; 
  for (int i=0; i<9; ++i) {
    if (count[i] > count[index]) { 
      index = i;  
    }  
  }

  // 答えを出力する
  int ans = index + 1;
  cout << ans << endl;  


  return 0;
}
