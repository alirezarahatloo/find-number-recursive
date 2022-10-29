#include <stdio.h>
#include <stdlib.h>

#define FIND_NUMBER 4
#define SIZE_ARRAY  20
typedef unsigned char uint8_t;

uint8_t count_one (uint8_t *arr,uint8_t i,uint8_t size)
{
    uint8_t cnt = 0;
    if(i == size )
         return 0;
    if(arr[i] == FIND_NUMBER)
    {
        cnt++;
    }
    cnt += count_one(arr,i+1,size);
    return cnt;
}


int main()
{
    uint8_t array[SIZE_ARRAY];
    for (int i=0;i < SIZE_ARRAY;i++)
    {
        array[i] = rand() % (FIND_NUMBER+1);
        printf("%d\n",array[i]);
    }
    uint8_t found = 0 ;
    found = count_one(array,0,sizeof(array));
    printf("found nuber:%d\n",found);

    return 0;
}
