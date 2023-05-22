#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int input;
    scanf("%d",&input);
    
    char* str[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    char* gtn = "Greater than 9";
    
    if(input<=9){
        printf("%s\n",str[input]);
    } else{
        printf("%s\n",gtn);
    }

    return 0;
}

