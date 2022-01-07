#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;
    if(n==0) n = 1;
    else n = 2 << n-1;
    cout << n << endl;
}
