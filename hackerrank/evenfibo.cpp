    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
     
    int main() {
        ios_base::sync_with_stdio(false); cin.tie(0);
        ll t;
        char str[1000];
        cin>>t;
        while(t--) {
          
          ll sum=0;
          ll a=1,b=2,c;
          ll value;
          cin>>value;
          while(b<=value) {  
            if(b%2==0)
              sum+=b;
            c=a+b;
            a=b;
            b=c;
          
          
          }

        cout<<sum<<endl;

        }


        return 0;
        }
