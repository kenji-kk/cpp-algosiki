#include <iostream>
using namespace std;

// 約数の個数を求める関数
int count_yaku(int x) {
  int yaku = 0;
  for (int i=1; i<=x; ++i) {
    if (x%i==0) {
      yaku++;
    }
  }
  return yaku;
}

int main() {
  // データを受け取る
  int N, K; 
  cin >> N >> K;

  // 数字の全探索
  int count = 0;
  for (int x=1; x<=N; ++x) {
    // 約数の個数が $K$ 個ならば 1 を足す
    if (count_yaku(x)==K) count++;
  }

  // 答えを出力する
  cout << count << endl;
  return 0;
}
