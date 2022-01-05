#include <bits/stdc++.h>
using namespace std;
//文字列の連結
int main() {
	int n;
	cin >> n ;
	string s = "1";
	for(int i=1; i<=n; i++){
		s += "0";
	}
	cout << s << endl;
}
