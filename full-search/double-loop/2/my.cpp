#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin >> n >> k;
	int ans = 0;
	for(int i=i; i<=n; i++){
		int counter = 0;
		for(int j=1; j<=i; j++){
			if(i%j == 0){
				counter++;
			}
		}
		if(k == counter){
			ans++;
		}
	}
	cout << ans << endl;
}
