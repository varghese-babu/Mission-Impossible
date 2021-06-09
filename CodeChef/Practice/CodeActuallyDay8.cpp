#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--) {
            
        char a[1000],b[1000];
        cin>>a>>b;
        int change,flag=0;
        if(a[0]-b[0]<b[0]-a[0])
            change = b[0]-a[0];
        else
            change = a[0]-b[0];
        for(int i=1;i<strlen(a);i++) {
                
            if(a[i]-b[i]==change || b[i]-a[i]==change)
                continue;
            else    {
                    flag=1;
                break;
            }
        }
    if (flag==1)
        cout<<-1<<endl;
    else    
        cout<<change<<endl;
    }
    return 0;
}
