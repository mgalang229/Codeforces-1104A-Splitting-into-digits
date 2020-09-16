#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	if(n==1) {
		cout << "1\n1\n";
		return 0;
	}
	int tmp=0;
	for(int i=1; i<=9; ++i)
		if(n%i==0&&n!=i)
			tmp=i;
	vector<int> v;
	int tmp2=0;
	while(tmp2!=n) {
		tmp2+=tmp;
		v.push_back(tmp);
	}
	cout << v.size() << "\n";
	for(auto x : v)
		cout << x << " ";
	cout << "\n";
}
