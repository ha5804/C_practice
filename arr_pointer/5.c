#include <stdio.h>
typedef struct{
    char name[50];
    char color[50];
    int year;
 } Car;

void printCar(struct car){
    printf("Car is %s\n", car.name);
    printf("Car is %s\n", car.color);
    printf("Car is %d\n", car.year);

}
int main(){
    Car car = {"electro cal", "red", 2022}
    printCar(car);
    return 0;
}