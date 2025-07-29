#include <stdio.h>
int main(){
 int n;
 printf("Enter size of your array");
 scanf("%d",&n);
 
 char arr[n];

    scanf("%s",&arr);

    char rev[n];

    for(int i=0;i<n;i++)
    {
        rev[n-i-1] = arr[i];
    }

    printf("%s",rev);


}