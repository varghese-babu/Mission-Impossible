    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
     
    int main() {
        ios_base::sync_with_stdio(false); cin.tie(0);
        int t;
        char str[1000];
        cin>>t;
        while(t--) {
          int flag=0;
           int count1[26] = {0};
           int count2[26] = {0};

           cin>>str;
           int l=strlen(str);
           for(int i=0,j=l-1;i<j;i++,j--) {
              if(l%2==1)
                if(i==l/2)
                  continue;
              count1[str[i]-'a']++;
              count2[str[j]-'a']++;
           }
           for (int i = 0; i<26; i++)
        if (count1[i] != count2[i]) {
          cout<<"NO"<<endl;
          flag=1;
          break;
        }
        if(flag==0)
          cout<<"YES"<<endl;
            

        }
        return 0;
        }
