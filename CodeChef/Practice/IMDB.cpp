#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
  int t;
  cin>>t;
  int n,x;
  while(t--) {
    cin>>n>>x;
    int s[n],r[n],max=0,index=0;
    for(int i=0;i<n;i++) {
        cin>>s[i]>>r[i];
        if(r[i]>max && s[i]<=x) {
            index=i;
            max=r[i];
        }
    }
    cout<<max<<endl;
  }
  return 0;
}
