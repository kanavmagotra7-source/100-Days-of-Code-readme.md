#include <stdio.h>
int main(){
    int a ;
    printf(" marks:");
    scanf("%d",&a);
    if (0 <= a <= 100){
        if (a >= 90){
            printf("Grade A");
        }
        else if (a >= 70){
            printf("Grade B");
        }
        else if (a >= 50){
            printf("Grade C");
        }
        else if (a >= 35){
            printf("Grade D");
        }
        else {
            printf("Fail");
        }

    }
    return 0;
}
