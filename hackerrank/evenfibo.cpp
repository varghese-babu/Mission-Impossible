    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
     
    int main() {
        ios_base::sync_with_stdio(false); cin.tie(0);
        int t;
        char str[1000];
        cin>>t;
        while(t--) {
          
          int sum=0;
          int a=1,b=2,c;
          int value;
          cin>>value;
          while(b<=value) {  
            if(b%2==0)
              sum+=a;
            c=a+b;
            a=b;
            b=c;
          
          
          }

        cout<<sum<<endl;

        }


        return 0;
        }
