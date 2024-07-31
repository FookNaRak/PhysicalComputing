#include<stdio.h>
int main()
{
    int sit1=0, sit2=0, sit3=0, sit4=0, i;
    float age, height, weight,avg_height, avg_weight, avg_age;

    for(i=1; i<=50;i++){
        scanf("%f %f %f", &age, &height, &weight);
        avg_age += age;
        avg_weight += weight;
        avg_height += height;
        if(age >= 20 && height >=160){
            sit1 +=1;
        }
        if(age < 20 && (height <= 180 || weight >= 60)){
            sit2 += 1;
        }
        if(age >= 30 && weight >= 40 && weight <= 80){
            sit3 += 1;
        }
        if(age < 40 && (weight < 85 || height <= 200)){
            sit4 += 1;
        }
    }
    
    printf("Age >= 20 and Height >= 160: %d\n", sit1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", sit2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", sit3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", sit4);
    printf("Average Age: %.0f\n", avg_age/50);
    printf("Average Height: %.2f\n", avg_height/50);
    printf("Average Weight: %.2f", avg_weight/50);
    return 0;
}