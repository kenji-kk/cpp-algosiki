#include <bits/stdc++.h>
using namespace std;

int main() {
	int l,r;
	cin >> l >> r;
	int counter = 0;
	for(int i=l; i<=r; i++){
		bool flag = true;
		string s = to_string(i);
        int slen = s.length();
		for(int j = 0; j < slen; j++){
		if(s[j] != s[slen-1-j]) flag = false;
		}
		if(flag) counter++;
	}
	cout << counter << endl;
}
