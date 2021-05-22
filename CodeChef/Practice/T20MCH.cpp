#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
  int r,o,c;
  cin>>r>>o>>c;
  if(((20-o)*6*6+c)>r)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  return 0;



}
