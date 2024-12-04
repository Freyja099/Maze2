#ifndef UTILITY_H
#define UTILITY_H

float Clamp(float value, float min, float max) {
    if (value < min) return min;
    if (value > max) return max;
    return value;
}

#endif // UTILITY_H
