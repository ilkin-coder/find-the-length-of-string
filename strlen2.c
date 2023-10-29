#include <stdio.h>
int findstrlen(char *p ){
    int length=0;

    for(int i=0; *(p+i) != '\0';i++){
        length++;
    }
    return length;

}
int main (){
    char yazi[]="Hello World!";
    int a=findstrlen(yazi);

    

    printf("%d is the length of the string\n",a);

}