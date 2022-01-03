#include <bits/stdc++.h>
using namespace std;

int main() {
  int l,r;
	cin >> l >> r;
	vector<int> a(r-l+1);
	for(int i=0; i<=r-l; ++i){
	  a[i] = l + i;
	}
	int count = 0;
	for(int i=0; i<=r-l; ++i){
		string b = to_string(a[i]);
		int blen = b.length();
		for(int j=i+1; j<=r-l; j++){
			string c = to_string(a[j]);
			int clen = c.length();
			if(b[blen-1] == c[clen-1]) count++;
	  }
	}
	cout << count << endl;
}
