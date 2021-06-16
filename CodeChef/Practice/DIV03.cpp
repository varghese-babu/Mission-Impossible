#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t,sum=0,k;
	int a[10];
	cin>>t;
	while(t--) {
		sum=0;
		for(int i=0;i<10;i++)
			cin>>a[i];
		cin>>k;
		for(int i=9;i>=0;i--) {
			
			sum+=a[i];
			if(sum>k) {
				cout<<i+1<<endl;
				break;
				}
			}
		}
	return 0;
	
	}
