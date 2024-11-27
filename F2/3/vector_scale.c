#include "vector.h"
#include <stdlib.h>

vector* vector_scale(double n, vector* v) {
    return vector_new(v->x * n, v->y * n, v->z * n);
}