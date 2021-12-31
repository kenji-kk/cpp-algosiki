#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int len = s.length();
	vector<char> v(1,s[0]);
	int counter = 1;
	for(int i=1; i<len; i++){
		bool flag = true;
		for(int j=0; j<v.size(); j++){
			if(s[i] == v[j]){
				flag = false;
			}
		}
		if(flag){
			v.push_back(s[i]);
			counter++;
		}
	}
	cout << counter << endl;
}
