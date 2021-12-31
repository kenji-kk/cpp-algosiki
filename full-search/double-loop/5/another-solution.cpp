#include <iostream>
#include <vector>
using namespace std;

// 回文数か判定する関数
bool is_palindrome(string x) {
  bool flag = true;
  int N = x.size();
  for (int i=0; i<N; ++i) {
    if (x[i] != x[(N-1)-i]) {
      flag = false;
    }
  }
  return flag;
}

int main() {
  // データを受け取る
  int N;
  cin >> N;
  vector<string> S(N);
  for (int i=0; i<N; i++) cin >> S[i];

  // 配列の全探索
  int count = 0;
  for (int i=0; i<N; ++i) {
    //  S[i] が回文数ならば 1 を足す
    if (is_palindrome(S[i])) count++;
  }

  // 答えを出力する
  cout << count << endl;
  return 0;
}
