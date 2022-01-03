#include <iostream>
using namespace std;

int main() {
  // データを受け取る
  int L, R;
  cin >> L >> R;

  int count = 0;
  // 変数 i の全探索
  for (int i=L; i<=R; ++i) {
    // 変数 j の全探索
    for (int j=i+1; j<=R; ++j) {
      if (i%10==j%10) {
        count++;
      }
    }
  }

  // 答えを出力する
  cout << count << endl;
  return 0;
}
