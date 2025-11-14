#include <iostream>            //1814A
using namespace std;

int main(){
    int t,j;
    cin>>t;
    for ( j = 0; j < t;j++)
    {
        long long n,k;
        cin>>n>>k;
        if(n%2==0)
        printf("YES\n");
        else
            if(k%2==0)
            {
                printf("NO\n");
            }
            else
            printf("YES\n");
    }
    return 0;
}