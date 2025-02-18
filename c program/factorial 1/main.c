

#include <stdio.h>


int main()


{
    int n1,n2,n3,sum;
    n1=0;
    n2=1;
    n3=n1+n2;
    printf("%d\n %d\n %d\n",n1,n2,n3);
    while(n3<=8)
    {
        sum=n2+n3;
        n2=n3;
        n3=sum;
        printf("%d\n",sum);

    }
    return 0;
}


