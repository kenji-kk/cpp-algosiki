#include <iostream>
using namespace std;

// 回文数か判定する関数
bool is_palindrome(int x) {
  string S = to_string(x);
  bool flag = true;
  int N = S.size();
  for (int i=0; i<N; ++i) {
    if (S[i] != S[(N-1)-i]) {
      flag = false;
    }
  }
  return flag;
}

int main() {
  // データを受け取る
  int L, R; 
  cin >> L >> R;

  // 配列の全探索
  int count = 0;
  for (int x=L; x<=R; ++x) {
    //  x が回文数ならば 1 を足す
    if (is_palindrome(x)) count++;
  }

  // 答えを出力する
  cout << count << endl;
  return 0;
}
