#include <stdio.h>

int main()
{
    int flag=0;
    for(int i=3; i!=0; i++){
        for(int j=2; j<i-1; j++){
            if(i%j==0){
                flag=1;
            }
        }
        if(flag==0){
            printf("%d is prime\n",i);
        }else{flag=0;}
    }
    
}
