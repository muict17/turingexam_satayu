#include<stdio.h>

int add(int a, int b)
{
    int sum=a+b;
    return sum;
}

int main()
{
    int n, i, j, temp;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(array[i]>array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    int sum=0, count=0;
    for(i=0;i<n;i++)
    {
        if(array[i]>=0)
        {
            sum = add(sum, array[i]);
            count++;
        }
    }
    if(count>=3 || n<3)
    {
        printf("%d\n",sum);
    }
    else
    {
        for(i=count-1;i<3;i++)
        {
            sum = add(sum, array[i]);
        }
        printf("%d\n",sum);
    }
    return 0;
}
    
