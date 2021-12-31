#include <iostream>
using namespace std;

int main() {
  // データを受け取る
  string S;
  cin >> S;
  int N = S.size(); 

  // 文字の全探索
  int count = 0;
  for (char c='a'; c<='z'; ++c) {
    // S に c が含まれるかを調べる
    bool flag = false;
    for (int i=0; i<N; ++i) {
        if (S[i] == c) {
        flag = true;
        }
    }
    //  S に c が含まれるならば 1 を足す
    if (flag) count++;
  }

  // 答えを出力する
  cout << count << endl;
  return 0;
}
