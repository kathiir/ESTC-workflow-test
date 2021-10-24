#ifndef VECTOR3D_H
#define VECTOR3D_H


typedef struct vector3d_s
{
    float x;
    float y;
    float z;
} vector3d_t;


vector3d_t vector3d_sum(vector3d_t first_vector, vector3d_t second_vector);
vector3d_t vector3d_sub(vector3d_t first_vector, vector3d_t second_vector);
float vector3d_dot_product(vector3d_t first_vector, vector3d_t second_vector);
vector3d_t vector3d_cross_product(vector3d_t first_vector, vector3d_t second_vector);




#endif