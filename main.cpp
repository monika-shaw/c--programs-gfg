#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n = 3;
    int arr[n];
    int count = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 1; j < 3; ++j) {
            if(arr[i]== arr[j])
            {
                count++;
            }
        }
    }
    if(count ==2)
    {
        puts("Good tuple");
    }
    else
        puts("Not a good tuple");
}