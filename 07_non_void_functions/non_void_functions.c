/*
    Practice with non-void functions.
*/ 

#include <stdio.h>

// Function prototypes
// Function takes nothing and return an integer
int getFive(void);

// Function that converts the given number of kilometers into miles and
// returns the result
double milesToKms(int miles);

// Function print weather condition based on the given temperature
void describeWeather(int temp);

int getTemperature(void);

int main(void) {
    // Call getFive function
    int n = getFive();
    printf("%d\n", n);

    // Convert miles
    int miles = 100;
    printf("%d miles is %.2lf\n", miles, milesToKms(miles));
    
    // Call describe weather function

    int temp = getTemperature();
    describeWeather(temp);

    return 0;
}

int getFive(void) {
    return 5;
}

double milesToKms(int miles){
    //return miles * 1.609;
    double kms = miles * 1.609;

    return kms;
}

void describeWeather(int temp) {
    if (temp >= 120) {
        puts("GREAT BALLS OF FIRE!!!");
    }
    else if (temp >= 90) {
        puts("HOT!");
    }
    else if (temp >= 70) {
        puts("MODERATE");
    }
    else if (temp >= 40) {
        puts("COLD!");
    }
    else {
        puts("IT'S FREEZING!!!");
    }
}

int getTemperature(void) {
    puts("Enter the temperature");
    int temp;
    scanf("%d", &temp);

    return temp; 
}