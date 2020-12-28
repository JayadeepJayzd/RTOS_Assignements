// Program to concat any 2 two strings given.
#include<stdio.h>
#include<stdlib.h>
char concat1(char array1[],char array2[]);
char main()
{
 char arr1[10] = "jasonstat";
 char arr2[5] = "bad";
 concat1(arr1,arr2);
}
char concat1(char array1[],char array2[])
{
        char buffer[20];
        int i ,j=0;
        for(i=0;i<15;i++)
        {
                if(i<10)
                {
                        buffer[i]=array1[i];
                }
                else if(i>=10 && i<15)
                {
                buffer[i]=array2[j];
                j++;
                }
        }
        printf("the concatenated string is\t");
        for(i=0;i<15;i++)
        {
        printf("%c",buffer[i]);
        }
}