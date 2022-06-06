#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int answer=0,i=0;

    while(n!=0){
        int digit=n%10;
        answer=(pow(2,i)*digit)+answer;
        n=n/10;
        i++;
    }
    cout<<answer;
    return 0;

}
