#include <iostream>
using namespace std;

// S に c が含まれるかを判定する関数
bool c_is_in_s(string S, char c) {
  int N = S.size();
  bool flag = false;
  for (int i=0; i<N; ++i) {
    if (S[i] == c) {
      flag = true;
    }
  }
  return flag;
}

int main() {
  // データを受け取る
  string S;
  cin >> S;

  // 配列の全探索
  int count = 0;
  for (char c='a'; c<='z'; ++c) {
    //  S に c が含まれるならば 1 を足す
    if (c_is_in_s(S, c)) count++;
  }

  // 答えを出力する
  cout << count << endl;
  return 0;
}
