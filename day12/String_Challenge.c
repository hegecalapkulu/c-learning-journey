#include <stdio.h>
#include <string.h>
int main (){
    char city[30];
    char nickname[20];
    char candn [50];
    char inpc ;
    char inps [50] ;
    int length;
    
    printf ("Please Enter City Name: ");
    fgets (city , 30 , stdin);
    city [strcspn ( city , "\n")]= '\0';
    strcat (city ," ");
    strcpy(candn , city);

    printf ("Enter Your Name: ");
    fgets (nickname , 20 , stdin);
    nickname [strcspn ( nickname , "\n")]= '\0';
    strcat (candn , nickname);
    
    length=strlen(candn);

    for (int i = 0 ; candn [i] != '\0' ; i++){
if (candn[i] == ' '){
    length -- ;
}
    }

    printf("Length :%d\n" , length);

     printf ("\nPlease Enter Letter: ");
     scanf (" %c" , &inpc);
    if (strchr (candn , inpc) != NULL){
        printf("Character Found !");
    }
    else {
                printf("Character Not Found !");

    }

    getchar();

    
     printf ("\nPlease Enter Word: ");
     fgets (inps , 50 , stdin);
     inps [strcspn (inps , "\n")] = '\0';
    if (strstr (candn , inps) != NULL){
        printf("Word Found !");
    }
    else {
                printf("Word Not Found !");
    }
    
    return 0 ; 
}
