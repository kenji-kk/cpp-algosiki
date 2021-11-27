#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s ;
	for(int i = 0; i < n; i++){
		string d;
		cin >> d;
		s += d;
	}
	cout << s.length() << endl;
}
