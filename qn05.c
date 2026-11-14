/*count Even and Odd Numbers in Array
Write a C program to count the number of 
even and odd elements in an array.*/

#include <stdio.h>
int main() {
    int n,a[100];
    int even =0,odd=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if (a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even = %d\nOdd = %d",even,odd);
    return 0;
}