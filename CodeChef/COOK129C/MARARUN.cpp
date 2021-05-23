#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	int D,d,a,b,c;
	while(t--) {
		
		cin>>D>>d>>a>>b>>c;
		if(D*d<10)
			cout<<0<<endl;
		else if(D*d<21)
			cout<<a<<endl;
		else if(D*d<42)
			cout<<b<<endl;
		else
			cout<<c<<endl;
		}
	return 0;
	}
