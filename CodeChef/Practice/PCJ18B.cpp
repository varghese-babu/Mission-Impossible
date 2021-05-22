#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
  int t,n,sum;
  cin>>t;
  while(t--) {
    sum=0;
    cin>>n;
    while(n>0) {

        sum+=(n*n);
        n-=2;
    }
    cout<<sum<<endl;
  }



  return 0;
}
