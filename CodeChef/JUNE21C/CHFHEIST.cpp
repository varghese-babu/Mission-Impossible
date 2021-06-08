
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	while(t--) {
    ll x,sum,D,d,P,Q;
    cin>>D>>d>>P>>Q;
    x=D/d;
    sum= (x*(2*P+(x-1)*Q)*d)/2+(D-x*d)*(x*Q+P);
    cout<<sum<<endl;
		}
	}
