#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
int main(){
	fast;
	int t; cin >> t;
	while(t--){
	ll n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n;i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		int b; cin >> b;
		if (b == 0){
			continue;
		}
		string s;
		cin >> s;
		for (int j = 0; j < b; j++){
			if (s[j] == 'U'){
				a[i]--;
			}else if (s[j] == 'D'){
				a[i]++;
			}
			if (a[i] < 0){
				a[i] += 10;
			}
			if (a[i] > 9){
				a[i] -= 10;
			}
		}
	}
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << "\n";
	}
	return 0;
}

