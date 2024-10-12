#include <stdio.h>
int main()
{
    int n, search, i, count = 0;
    printf("Enter the number of elements in the array :\n");
    scanf("%d", &n);
    int array[n];
    printf("Enter the element in array:\n ");
    for (i = 00; i < n; i++)
        scanf("%d", &array[i]);

    printf("Enter the element for search :\n");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (array[i] == search)
        {
            printf("%d is present at location %d.\n", search, i + 1);
            count++;
        }
    }
    if (count == 0)
        printf("%d is not present in the array.\n", search);
    else
        printf("%d is present %d times in the array.", search, count);

    return 0;
}