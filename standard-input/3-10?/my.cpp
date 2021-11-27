#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int left = 0;
	int right = 0;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		if(s == "left"){
			left++;
		}else{
			right++;
		}
	}
	if(left == right){
		cout << "same" << endl;
	}else if(left < right){
		cout << "right" << endl;
	}else{
		cout << "left" << endl;
	}
}
