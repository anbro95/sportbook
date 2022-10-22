#include <stdio.h>

int  defineType(int weight) {
    if (weight > 120 && weight < 280) {
       printf("Medium\n");
        
    }
    else if (weight > 280 && weight < 412) {
        printf("Heavy\n");
    }
    else {
        printf("Light\n");
        return 0;
    }
}


int  definePlane (int weight) {
 
    if (weight < 120) {
        printf("AN-124\n");
    }
    else if (weight > 120 && weight < 280) {
        printf("MD-11\n");
    }
    else if (weight > 280 && weight < 412) {
        printf("Boeing 747-400\n");
    }
    else {
        printf("Weight not provided\n");
        return 0;
    }
}

int  fuelCost(int hours, int consumption) {
    int cost = 180;
    int result = ((consumption * hours) / 100) * cost;
  
    return result;
    
}
