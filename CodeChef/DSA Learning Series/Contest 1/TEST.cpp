    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    int main() {
        ios_base::sync_with_stdio(false); cin.tie(0);
        int x,flag=0;
        while(scanf("%d",&x)==1) {
            if(x==42){
                flag=1;
                continue;
            }
            if(flag==0){
                cout<<x<<endl;
            }
        }
        return 0;
        }
