//AZG Lists notes

#include <stdio.h>
// array = list
int main(){
//Example 1
int grades[] = {74, 88, 95, 87, 98};
printf("%d\n", grades[2]);
//would print 95

//Example 2
float sizes[] = {3.57, 24.95, 36.1, 5.99};
//change an item in my list
printf("%.2f\n", sizes[0]);
sizes[0] = 10.45;
printf("%.2f\n", sizes[0]);

//Example 3 - strings
char names[][20]={"Atticus", "Sawyer," "Brinkly", "Zee", "Morticia", "Buffy", "Mylo", "Alyiah"}; 
//first bracket is for number of items in the array, second bracket is for number of letters allowed in each string
 printf("%s\n", names[5]);



    return 0;
}