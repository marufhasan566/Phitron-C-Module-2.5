#include<stdio.h>
int main()
{
    int a;
printf("Enter the amount of money : ");
scanf("%d", &a);
if(a>10000){
    printf("She will buy a Gucci bag\n");
    if(a>20000){
            printf("She will also buy a Gucci belt\n");
    }
}
else if(a>5000){
    printf("She will buy a Levis bag\n");
}
else{
    printf("She will buy a bag from New Market\n");
}

}