#include<stdio.h>
int main(){
    int n , i , search , low , high , mid;
    printf("Enter the number of element : \n");
    scanf("%d" , &n);
    int array[n];
    printf("Enter the element in sorted order :\n");
    for ( i = 0; i < n; i++)
      scanf("%d" , &array[i]);
    printf("Enter the value to find :\n");
    scanf("%d" , &search);

    low =0;
    high = n-1;
    mid = (low + high)/2;

    while(low<=high){
        if(array[mid]<search)
          low = mid + 1;
        else if (array[mid] == search)
        {
            printf("%d found at the location %d . " , search , mid+1);
            break;
        }
        else
          high = mid - 1;
          mid = (low + high)/2;
    }
    if(low>high)
      printf("%d is not present in array." , search);
      
    return 0;
}