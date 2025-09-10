#include <stdio.h>

int main() {
   int day;
   printf("day=");
   scanf("%d",&day);
   if (0 <= day <= 50){
   switch (day){
       case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Invalid");
        return 1;
   }
   }

    return 0;
}
