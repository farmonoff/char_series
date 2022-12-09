#include<stdio.h>

int multiply(char text[]){
    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] == 'a' || text[i] == 'e' || text[i] == 'o' || text[i] == 'i' || text[i] == 'u' ){
            return 1;
        } else {
            return 0;
        }
    }
    
}

int main() {

    char text[20];
    printf("So'z kiriting:"); scanf("%s", text);
    
    if(multiply(text)){
        printf("%s%s", text, text);
    } else {
        printf("%s", text);
    }

return 0;    
}