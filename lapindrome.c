#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[1005];
        scanf("%s",s);
         int len,b[strlen(s)],z;
         int i,j,count =0;
         len=strlen(s);
         for(z=0;z<len;z++)
         {
                b[z] =1;
         }
        if(len%2 !=0)
        {
            for(i=0;i<len/2;i++)
            {
                for(j=(len/2)+1;j<len;j++)
                {
                    if(s[i] == s[j])
                    {
                        if(b[i] && b[j] )
                        {
                            b[i]=0;
                            b[j]=0;
                            count+=1;
                        }
                    }
                }
            }
        }
         else if(len%2 ==0)
        {
            for(i=0;i<len/2;i++)
            {
                for(j=(len/2);j<len;j++)
                {
                    if(s[i] == s[j])
                    {
                        if(b[i] && b[j] )
                        {
                            b[i]=0;
                            b[j]=0;
                            count+=1;
                        }
                    }
                }
            }
        }
        if(count==len/2)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
    }
}
