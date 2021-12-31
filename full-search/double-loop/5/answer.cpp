#include <iostream>
#include <vector>
using namespace std;

int main() {
  // データを受け取る
  int N; 
  cin >> N;
  vector<string> S(N);
  for (int i=0; i<N; i++) cin >> S[i];

  // 配列の全探索
  int count = 0;
  for (int i=0; i<N; ++i) {
    // S[i] が回文かを調べる
    bool flag = true;
    int N = S[i].size();
    for (int j=0; j<N; ++j) {
      if (S[i][j] != S[i][(N-1)-j]) {
        flag = false;
      }
    }
    //  S[i] が回文ならば 1 を足す
    if (flag) count++;
  }

  // 答えを出力する
  cout << count << endl;
  return 0;
}
