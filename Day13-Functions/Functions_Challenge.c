#include <stdio.h>
#include <string.h>
char consOrder[50] ;
int quantity ;
float total;
float unitPrice;

char CheckStatus (float j){
    if (j<100){
        return 'B';
    }
    else {
        return 'A';
    }
}

void getOrder (){
printf ("Please Enter Your Order: ");
fgets (consOrder , 50 , stdin );
consOrder [strcspn (consOrder , "\n")] = '\0';
}

float detailOrder (int x , float y){
    total = x*y;
    return total ;
}

void printOrder (char a[] ,int b , float c, float d, char e  ){
    printf("Product : %s\n\nQuantity : %d\n\nUnit Price : %.2f\n\nTotal : %.2f\n\nStatus : %c" , a , b , c , d , e );

}

int main (){    
    getOrder();
    printf ("Please Enter How Many Do You Want: ");
    scanf ("%d" , &quantity);
     printf ("Please Enter The Unit Price Of Your Order: ");
    scanf ("%f" , &unitPrice);
    detailOrder (quantity , unitPrice);
    printOrder(consOrder ,quantity , unitPrice , total , CheckStatus(total) );
    return 0 ;

}

