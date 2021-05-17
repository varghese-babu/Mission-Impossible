#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t,num,count,rem;
	cin>>t;
	while(t--) {
		
		cin>>num;
		count=0;
		while(num) {
			
			rem=num%10;
			if(rem==4)
				count++;
			num/=10;
			}
		cout<<count<<endl;
		}
	return 0;
	}
