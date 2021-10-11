#include<bits/stdc++.h>
using namespace std;

int main()
{

    int *arr,size,count=0,id;
    scanf("%d",&size);    
    
    arr=(int*)malloc(size*sizeof(int));
    for(int i=0;i<size;i++)
    {

        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i+1]<arr[i])
        {  
            if(i==0)
            {
                break;
            }else{
            count=1;
            id=i+1;
            break;
            }
        }
    }
    if(count==1)
    {
        for(int i=id;i<(size-1);i++)
        {
            if(arr[i+1]>arr[i])
            {
                count=0;
                break;
            }
        }
    }
    if(count==1)
    printf("TRUE");
    else
    {
        printf("FALSE");
    }
    
    return 0;
}