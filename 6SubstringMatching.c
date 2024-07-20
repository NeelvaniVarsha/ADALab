#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    char a[1000];
    char b[1000];
    printf("Enter main string: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter string to search: ");
    fgets(b, sizeof(b), stdin);
    a[strcspn(a, "\n")] = 0;
    b[strcspn(b, "\n")] = 0;
    for(int i = 0; i < strlen(a) - strlen(b) + 1; i++){
        for(int j = 0; j < strlen(b); j++){
            if(a[i+j] != b[j]){
                break;
            }
            if(j == strlen(b) - 1){
                printf("String matches from position %d", i + 1);
                return 0;
            }
        }
    }
    printf("String doesn't match");
    return 0;
}