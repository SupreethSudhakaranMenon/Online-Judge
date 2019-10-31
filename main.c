#include<stdio.h>
#include<math.h>

int main (void)
{
    long long int T,x1,x2,x3,x4,y1,y2,y3,y4,i;
    double m1,m2,Y,X;
    scanf("%lld", &T);
    for(i=0;i<T;i++)
    {
    scanf("%lld %lld %lld %lld %lld %lld %lld %lld", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    
    if (x1==x2 && x3!=x4)
    {
        printf("*");
        m2 = (y4-y3)/(x4-x3);
        Y = y3 + m2*(x1-x3);
        
        if (fmax(y1,y2)>=Y && Y>=fmin(y1,y2) && fmax(y3,y4)>=Y && Y>=fmin(y3,y4))
            printf("Yes\n");
        else printf("No\n");
    }
    
    else if (x1!=x2 && x3==x4)
        {
            
            printf("**");
        
        m1 = (y2-y1)/(x2-x1);
        Y = y1 + m1*(x3-x1);
        
        if (fmax(y3,y4)>=Y && Y>=fmin(y3,y4) && fmax(y1,y2)>=Y && Y>=fmin(y1,y2))
            printf("Yes\n");
        else printf("No\n");
    }
    
    else if (x1==x2 && x3==x4)
     {
        
         printf("***");
         if (x1!=x3)
         {
              printf("****");
             printf("No\n");
         }
         else if (x1==x3)
         {
              printf("*****");
            if (fmax(y1,y2)>=y3 && y3>=fmin(y1,y2))
                printf("Yes\n");
            else if (fmax(y1,y2)>=y4 && y4>=fmin(y1,y2))
                printf("Yes\n");
            else if (fmax(y3,y4)>=y1 && y1>=fmin(y3,y4))
                printf("Yes\n");
            else if (fmax(y3,y4)>=y2 && y2>=fmin(y3,y4))
                printf("Yes\n");
            else printf("No\n");
         }
     }
    else
    {
       
      printf("******");
        if(fabs(m1-m2)!=0)
        {
        X= ((y3-y1)+(m1*x1-m2*x2))/(m1-m2);
            if (fmax(x1,x2)>=X && X>=fmin(x1,x2) && fmax(x3,x4)>=X && X>=fmin(x3,x4) )
                printf("Yes\n");
            else printf("No\n");
        }
        else if (fabs(m1-m2)==0)
        {
             printf("*******");
            if (fmax(y1,y2)>=y3 && y3>=fmin(y1,y2))
                printf("Yes\n");
            else if (fmax(y1,y2)>=y4 && y4>=fmin(y1,y2))
                printf("Yes\n");
            else if (fmax(y3,y4)>=y1 && y1>=fmin(y3,y4))
                printf("Yes\n");
            else if (fmax(y3,y4)>=y2 && y2>=fmin(y3,y4))
                printf("Yes\n");
            else printf("No\n");
        }
        
    }
    }
     return 0;
}
