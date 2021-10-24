#include <stdio.h>

#include "vector3d/vector3d.h"


int main(int argc, char* argv[]) {
    
    vector3d_t first_vector;
    vector3d_t second_vector;

    printf("Enter values of first vector: x y z \n");
    while (!scanf("%f %f %f", &first_vector.x, &first_vector.y, &first_vector.z))
    {
        printf("Invalid data. Please, try again. \n");
    }

    printf("Enter values of second vector: x y z \n");
    while (!scanf("%f %f %f", &second_vector.x, &second_vector.y, &second_vector.z))
    {
        printf("Invalid data. Please, try again. \n");
    }


    vector3d_t v_sum = vector3d_sum(first_vector, second_vector);
    vector3d_t v_sub = vector3d_sub(first_vector, second_vector);
    float v_dot = vector3d_dot_product(first_vector, second_vector);
    vector3d_t v_cross = vector3d_cross_product(first_vector, second_vector);


    printf("Sum: [%f %f %f] \n", v_sum.x, v_sum.y, v_sum.z);
    printf("Sub: [%f %f %f] \n", v_sub.x, v_sub.y, v_sub.z);
    printf("Dot product: %f \n", v_dot);
    printf("Cross product: [%f %f %f] \n", v_cross.x, v_cross.y, v_cross.z);   

    return 0;
}