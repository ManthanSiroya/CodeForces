#include <iostream>          //1873A
using namespace std;
 
int main(){
    int t,k;
    cin>>t;
    for ( k = 0; k < t; k++)
    {
        int i,j,pts=0;
        char arr[10][10];
        for ( i = 0; i < 10; i++)
        {
            for ( j = 0; j < 10; j++)
            {
                cin>>arr[i][j];
            }
        } 
    
    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
                if (arr[i][j]=='x' || arr[i][j]=='X'){
                    if (i==0 || i==9 || j==0 || j==9)
                    pts+=1;
                    else if (i==1 || i==8 || j==1 || j==8)
                    pts+=2;
                    else if (i==2 || i==7 || j==2 || j==7)
                    pts+=3;
                    else if (i==3 || i==6 || j==3 || j==6)
                    pts+=4;
                    else
                    pts+=5;
            }
        }
    }
        cout<<pts<<endl;  
}
    return 0;
}
