#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;
	for(int i = 0; i < n; i++){
		int d;
		cin >> d;
		if(d == 1) continue;
		bool flag = true;
		for(int j = 2; j < d; j++){
			if(d%j == 0){
				flag = false;
			}
		}
		if(flag) count++;
	}
	cout << count << endl;
}
