#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t,n,x,k;
    cin>>t;
    while(t--) {
    	
    	cin>>n>>x>>k;
    	if(x>n+1) 
    		cout<<"NO"<<endl;
    	else if(x%k==0)
    		cout<<"YES"<<endl;
    	else if((n+1-x)%k==0)
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;
    	}
    return 0;
    }
