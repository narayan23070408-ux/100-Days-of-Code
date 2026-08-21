#include <stdio.h>
int main (){
    float percentage;
    float cp, sp;
    printf("Enter the Cost price :\n");
    scanf("%f",& cp); 
    printf("Enter the selling price :\n");
    scanf("%f", & sp);
    if(cp<=0){
        printf("Cost price is not valid");
    }
    else if(sp>cp)
    {
        percentage= ((sp-cp)/cp) * 100;
        printf("Profit percentage = %.2f", percentage);
    }
    else if(sp<cp)
    {
        percentage =((cp - sp)/cp)* 100;
        printf("Loss percentage = %.2f",percentage);
    }
    else{
        printf("Invalid details");
        
    }
    return 0;
}