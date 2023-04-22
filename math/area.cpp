/**
 * @file
 * @brief Implementations for the area of various shapes.
 * Reference: https://en.wikipedia.org/wiki/Area
 * @details The area of a shape is the amount of 2D space it takes up.
 * All shapes have a formula to get the area of any given shape.
 * These implementations support multiple return types.
 */
#define _USE_MATH_DEFINES
#include <cassert>  /// for assert
#include <cmath>    /// for M_PI definition and pow()
#include <cmath>
#include <cstdint>   /// for uint16_t datatype
#include <iostream>  /// for IO operations

/**
 * @namespace math
 * @brief Mathematical algorithms
 */
namespace math {
/**
 * @brief area of a [square](https://en.wikipedia.org/wiki/Square) (l * l)
 * @param length is the length of the square
 * @returns area of square
 */
template <typename T>
T square_area(T length) {
    return length * length;
}

/**
 * @brief area of a [rectangle](https://en.wikipedia.org/wiki/Rectangle) (l * w)
 * @param length is the length of the rectangle
 * @param width is the width of the rectangle
 * @returns area of the rectangle
 */
template <typename T>
T rect_area(T length, T width) {
    return length * width;
}

/**
 * @brief area of a [triangle](https://en.wikipedia.org/wiki/Triangle) (b * h /
 * 2)
 * @param base is the length of the bottom side of the triangle
 * @param height is the length of the tallest point in the triangle
 * @returns area of the triangle
 */
template <typename T>
T triangle_area(T base, T height) {
    return base * height / 2;
}
}  // namespace math
