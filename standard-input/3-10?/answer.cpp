#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N; // 入力を整数型として受け取る  
  vector<string> A(N); 
  for (int i=0; i<N; i++) {
    cin >> A[i]; // 入力を整数型動的配列として受け取る  
  }

  int count_left = 0; // "left"の個数
  int count_right = 0; // "right"の個数
  for (string item: A) { // A の各要素の長さを足し合わせる   
    if (item == "left") { 
      count_left++;   
    }
    else {
      count_right++;   
    }
  }

  if (count_left > count_right) {
    cout << "left" << endl;
  }
  else if (count_left < count_right) {
    cout << "right" << endl;
  }
  else {
    cout << "same" << endl;
  }
  return 0;
}
