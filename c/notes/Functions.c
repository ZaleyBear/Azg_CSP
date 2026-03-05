#include <stdio.h>

//Example 1
int add(int num_one, int num_two){
return num_one + num_two;

}

//Example 2 (no return)
void greeting(char* name){
    printf("Hello %s. Welcome to my program.\n", name);
}

//Example 3 
float area(int length, int width){
    return (float) length * width;
}


int main(){
//Example 1 Continued
int total = add(40,2);
printf("%d\n", total);
 
 //Example 2 Continued (Call the same function many times)
 greeting("Zee");
 greeting("Sawyer"); 

 // Example 3 continued (call function directly in print statements)
 float rectangle = area(10, 5);
 printf("the area is %.2f\n", rectangle);
 printf("The area is: %.2f\n", area (4,6));
   
   
    return 0;
}