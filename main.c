#include <stdio.h>

void Swap(int*a,int*b)
{
    int temp;
    temp=*a;*a=*b;*b=temp;
}

void ShowArray(int*data,int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("%d",data[i]);
        if(i==n-1)
            putchar('\n');
        else
            putchar(' ');
    }
}
int main(int argc, char *argv[]) 
{
    char str[7];
    int data[100];
    int i,j,count=0;
    
    while(fgets(str, sizeof(str), stdin)){
        data[count]=atoi(str);
        count++;
    }
    
    ShowArray(data,count);
    
    for(i=0;i<count;i++){
        for(j=count-1;j>0;j--){
            if(data[j]<data[j-1]){
                Swap(&data[j],&data[j-1]);
                ShowArray(data,count);
            }
        }
    }

    return 0;
}
