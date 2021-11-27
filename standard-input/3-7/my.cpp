#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a = 1001;
	for(int i = 0; i < n; i++){
		int d;
		cin >> d;
		if(a > d){
			a = d;
		}
	}
	cout << a << endl;
}
