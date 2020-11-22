#include <stdio.h>
// Declaring function
float ohms_law(float v, float i, float r);
// Initializing variable
float result;
int main(){
    float x;
    // For finding any one value of ohms law pass 0 to its position
    // i pass 10volts and 5ohm and give 0 to current in order to find out
    x = ohms_law(10, 0, 5);
    printf("%f", x);
}
// Defining function
float ohms_law(float v, float i, float r){
    if(v == 0){
        result = (i*r);
        return result;
    }
    else if(i == 0){
        result = (v/r);
        return result;
    }
    else if(r == 0){
        result = (v/i);
        return result;
    }
    // if user give some unwanted inputs function just return 0
    else {
        return 0;
    }
}