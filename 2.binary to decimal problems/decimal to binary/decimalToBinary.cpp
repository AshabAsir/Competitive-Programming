#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int answer=0,i=0;
    while(n!=0){
        int bit=n&1;
        n=n>>1;
        answer=(pow(10,i)*bit)+answer;
        i++;
    }
    cout<<answer;
    return 0;

}
