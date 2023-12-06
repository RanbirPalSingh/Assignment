//Write the program for change all the first letter as Caps in sentance.
#include<stdio.h>
int main(){
    char str[200];
    printf("Enter the string:\n");
    scanf("%[^\n]s",str);
    if('a'<=str[0] && str[0]<='z' && str[0]!=' '){
        str[0]=str[0]-32;
    }
    for(int i=1;str[i]!='\0';i++){
        if(str[i]==' '){
            if('a'<=str[i+1] && str[i]<='z'){
                str[i+1]=str[i+1]-32;
            }
        }
    }
    printf("The resultant string is:\n");
    printf("%s",str);
    return 0;
}