#include <stdio.h>
int main()
{
int n;
printf("Enter the number of elements: ");
scanf("%d", &n);

int arr[n];

 printf("Enter %d integers:\n", n);
for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
int count = 0;
for(int i = 0; i < n; i++)
    {
        int sum = 0;

        for(int j = i; j < n; j++)
        {
            sum += arr[j];

            if(sum == 0)
            {
                count++;
         }
    }
}

    printf("Number of subarrays with sum 0 = %d\n", count);

    return 0;
}