#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t,min,max,flag=0;
	int s[3],e[3];
	cin>>t;
	while(t--) {

    for(int i=0;i<3;i++)
      cin>>s[i]>>e[i];
    
    min=e[0];
    max=s[0];

    for(int i=1;i<3;i++) {

        if(s[i]>max)
          max=s[i];
        if(e[i]<min)
          min=e[i];
    }
  if(max<=min)
    cout<<"WIN"<<endl;
  else
    cout<<"LOSE"<<endl;



	}
  	return 0;
}
