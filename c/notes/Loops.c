//AZG Loops Notes

//While loops


#include <stdio.h>
// includes to get a random number
//Example 1.1 counting to ten
#include <stdlib.h>
#include <time.h>
int main(){
    int i = 1;
 while (i <= 10){
    printf("%d\n", i);
    i++;
 }
 //Example 1.2
//generate random number
srand(time(NULL));
printf("%d\n", rand() % 10); //random between 0 and 10
printf("%d\n", (rand() % 4) +1);//number between 0 and four, plus one. (number between 1 and five)
printf("%d\n", rand() % 20);

//Example 2 duck duck goose
int goose = (rand() % 9)+1;
int count  = 1;
while (count < goose){
    printf("Duck!\n");
    count++; //Increase by 1
}
printf("GOOSE!\n");

//example 3 counting backwards by twos
int timer = 30;
while (timer >= 0){
    printf("%d\n", timer);
    timer= timer-2;
}
printf("Times up!");
    return 0;
}