#include <stdio.h>
#include <string.h>

int main(){
    int time;
    printf("What time is it in milatary time to the nearest hour?: ");
    scanf("%d", &time);
if (time >= 0){
    printf("sleeping... zzz\n");
}else if (time >= 5){
    printf("Good Morning!\n");
}else if (time >= 12){
    printf("Good Afternoon!\n");
}else if (time >= 16){
    printf("Good Evening!\n");
}else if (time >= 20){
    printf("Goodnight!\n");
}else{
    printf("Sorry...! I don't understand.\n");
}

return 0;
}


