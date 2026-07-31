
//Build a student grade system by combining the core C concepts learned so far.

#include <stdio.h>
#include <string.h>
char name[50];
float midTermScore;
float elatScore;

void getInfo (void){
    printf("Hi , Welcome to Student's Score Check System!\nEnter Your Full Name: ");
    fgets (name , 50 , stdin );
    name[strcspn( name , "\n")] = '\0';
    printf("Welcome Back , %s!\nPlease Enter Your Mid-Term Grade: " , name);
    scanf("%f" , &midTermScore);
        printf("Score is Saved!\nPlease Enter Your E.L.A.T. Grade: ");
    scanf("%f" , &elatScore);
}

float getAverage (float x , float y){
    return ((x*0.4) + (y*0.6));
}

char letter[3];
void getLetter (float z ){
if (z >= 90){
    strcpy (letter , "AA");
}
else if (z >= 80 ){
    strcpy (letter , "BA");
}
else if (z >= 70 ){
    strcpy (letter , "BB");
}
else if (z >= 60 ){
    strcpy (letter , "CB");
}
else if (z >= 50 ){
    strcpy (letter , "CC");
}
else {
        strcpy (letter , "FF");
}}



int main(void){ 
    getInfo();
    getLetter (getAverage (midTermScore , elatScore));
    
printf ("Your Result As Follows:\n\nName: %s\nMidterm: %.2f\nFinal: %.2f\nAverage: %.2f\nLetter Grade: %s\n",name , midTermScore , elatScore , getAverage (midTermScore , elatScore), letter);
return 0 ;}
