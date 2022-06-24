//
// Created by shawm on 20-06-2022.
//
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n = 3;
    int arr[n];
    for (int i = 0; i < 3; ++i) {
        scanf("%d",&arr[i]);
    }
    int count = 1;
    for (int i = 0; i < 3; ++i) {
        if(arr[0] == arr[i+1])
        {
            count++;
        }
    }
    if(count ==2)
    {
        puts("Good tuple");
    }
    else
        puts("Not a good tuple");
}