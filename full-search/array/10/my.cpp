#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	vector<int> count(9);
	for(int i = 0; i < n; i++){
		count[v[i] - 1]++;
	}
	int pre = count[0];
	int index = 0;
	for(int i = 1; i < 9; i++){
		if(pre < count[i]){
		 pre = count[i];
		 index = i + 1;
		 }
	}
	cout << index << endl;
}
