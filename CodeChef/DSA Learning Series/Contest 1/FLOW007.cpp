    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
     
    int main() {
        ios_base::sync_with_stdio(false); cin.tie(0);
        int t,n,rem,digit;
        cin>>t;
        while(t--) {
            cin>>n;
            digit=0;
            while(n) {
              rem=n%10;
              digit=digit*10+rem;
              n/=10;
            }
            cout<<digit<<endl;

        }
        return 0;
        }
