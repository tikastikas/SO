#include "vector.h"

double vector_sprod(vector* v1, vector* v2) {
    return ((v1->x*v2->x)+(v1->y*v2->y)+(v1->z*v2->z));
}