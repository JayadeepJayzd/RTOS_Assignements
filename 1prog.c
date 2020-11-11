#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
  int t,n1,n2,r,i;
  int s = 0;
  if(argc > 3)
  {
    printf("usage:bin file n1 n2 \n");
  }
  else
  {
    n1=atoi(argv[1]);
    n2=atoi(argv[2]);
    for(i=n1;i<=n2;i++)
     {
       t=i;
       while(s!=8 && t>0)
        {
         r=t%10;
         s=s+r;
         t=t/10;
          if(s==8)
          {
            printf("%d %d\n",i,s);
          }
          else
          {
           exit(0);
          }
        }

     }
   }
        return 0;
}