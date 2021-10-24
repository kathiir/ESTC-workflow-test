#include "vector3d.h"

vector3d_t vector3d_sum(vector3d_t first_vector, vector3d_t second_vector)
{
    vector3d_t result;
    result.x = first_vector.x + second_vector.x;
    result.y = first_vector.y + second_vector.y;
    result.z = first_vector.z + second_vector.z;
    return result;
}

vector3d_t vector3d_sub(vector3d_t first_vector, vector3d_t second_vector)
{
    vector3d_t result;
    result.x = first_vector.x - second_vector.x;
    result.y = first_vector.y - second_vector.y;
    result.z = first_vector.z - second_vector.z;
    return result;
}

float vector3d_dot_product(vector3d_t first_vector, vector3d_t second_vector)
{
    float result;
    result = first_vector.x * second_vector.x +
             first_vector.y * second_vector.y +
             first_vector.z * second_vector.z;
    return result;
}

vector3d_t vector3d_cross_product(vector3d_t first_vector, vector3d_t second_vector)
{
    vector3d_t result;
    result.x = first_vector.y * second_vector.z - first_vector.z * second_vector.y;
    result.y = first_vector.z * second_vector.x - first_vector.x * second_vector.z;
    result.z = first_vector.x * second_vector.y - first_vector.y * second_vector.x;

    return result;
}