#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int counter = 0;
	for(int i=0; i<n; ++i){
		bool flag = true;
		string s;
		cin >> s;
		int len = s.length();
		for(int j=0; j<len; ++j){
			if(s[j] != s[len-1-j]) flag = false;
		}
		if(flag) counter++;
	}
	cout << counter << endl;
}
