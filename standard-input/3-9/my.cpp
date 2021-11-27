#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	for(int i = 0; i < n; i++){
		string d;
		cin >> d;
		s += d[0];
	}
	cout << s << endl;
}
