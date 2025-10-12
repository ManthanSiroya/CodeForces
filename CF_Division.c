#include <stdio.h>                         //problem-Division 1669A

int main(){
    int p,i;
      scanf("%d", &p);
      
      for ( i = 0; i < p; i++)
    {
        int rating;
        scanf("%d", &rating);

        if(rating<=1399)
        printf("Division 4\n");
        else if(rating>=1400 && rating<=1599)
        printf("Division 3\n");
        else if(rating>=1600 && rating<=1899)
        printf("Division 2\n");
        else 
        printf("Division 1\n");
    }
}
