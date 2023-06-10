#include <stdio.h>

struct Garage
{
    char engine[20];
    char fule_type[10];
    int fule_tank_cap;
    int seating_cap;
    float city_mileage;
};

int main()
{
    struct Garage G1 = {"toita", "petrole", 15, 7, 85.56};

    printf("%s\n", G1.engine);
    printf("%f\n", G1.city_mileage);
    printf("%s\n", G1.fule_type);
    printf("%d\n", G1.fule_tank_cap);

    return 0;
}
