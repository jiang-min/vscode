#include <stdio.h>
#include <pthread.h>
#include <math.h>
#include <stdlib.h>


/***** Begin *****/
void sort(int arr[])
{
    int n = 0;
    while(arr[n])n++;
    int temp;
    for(int i = 0;i < n-1;i++)
    {
        int min = i;
        for(int j = i + 1;j < n;j++)
        {
            if(arr[min] > arr[j])
                min = j;  
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void print(int nums[])
{
    int i = 0;
    while(nums[i])printf("%d",nums[i]);
}
int main()
{
    pthread_t th1, th2;
    int ret1, ret2;
    int n, *nums = NULL;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &nums[i]);
    }
    ret1 = pthread_create(&th1, NULL, sort, (void *)&nums);
    ret2 = pthread_create(&th2, NULL, print, (void *)&nums);

    if(ret1 != 0 || ret2 != 0)return -1;
    
    pthread_join(th1,NULL);
    pthread_join(th2,NULL);


	return 0;
}
/***** End *****/
