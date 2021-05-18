#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t,x,y,z;
	cin>>t;
	while(t--) {
		
		cin>>x>>y>>z;
		if(x==y+z || y==x+z || z==x+y)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		}
	return 0;
	}
