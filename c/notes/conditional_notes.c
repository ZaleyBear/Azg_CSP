//Azg conditionals (code structure)

#include <stdio.h>
#include <string.h>

int note(){

    //boolean is a true or false statement

if("boolean"){
    //code that happens when statement is true goes here;
    }
else if ("condition"){
    //code that happens when {if} is false and when {else if} is true;
    }
else{
    //code that happens if everything above is false;
    }
    return 0;


    //"and" in c is "&" or "||". "not" in c is "!"
}

int main(){
    int grade = 97;
    if (grade >= 90){
        if (grade > 93){
        printf("you have a %d percent! That is an A!\n");}
        else{printf("You have a %d percent. That is an A-!");}
}else if (grade >= 80){
        printf("you have a %d percent! That is an B!\n");
}else if (grade >= 70){
        printf("you have a %d percent! That is an C!\n");
}else if (grade >= 60){
        printf("you have a %d percent! That is an D!\n");
}else {printf("Oh no! you ave a %d, that is failing!\n");}
};

int num = 4;
    if (num%2 == 0 && (num <10 && num > -10)){
    printf("%d is a single didgit even number\n")
}else if (num%2 != 0 && (num<10 && num > -10)){
    printf("%d is not a single didgit even number\n")
} else{print f ("%d is not a single didgit number!\n")}



char name[]= "Cora";
    if (strcmp(name, "Cora")==0){
    printf("Welcome, Admin");
}else{
    printf("Hello %s\n", name)

    return 0;
}