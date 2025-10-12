#include <stdio.h>                        //Problem A2070 fizzbuzz

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int l,r;
    for(int i=0;i<n;i++){
        int count1=0;
        l=arr[i]/15;
        r=arr[i]%15;
        count1=l*3;
        if(r>=2)
        count1+=3;
        else
        count1+=1+r;
        printf("%d\n",count1);
    }

        return 0;
}
