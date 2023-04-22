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

/**
 * @brief area of a [parallelogram](https://en.wikipedia.org/wiki/Parallelogram)
 * (b * h)
 * @param base is the length of the bottom side of the parallelogram
 * @param height is the length of the tallest point in the parallelogram
 * @returns area of the parallelogram
 */
template <typename T>
T parallelogram_area(T base, T height) {
    return base * height;
}

/**
 * @brief surface area of a [cube](https://en.wikipedia.org/wiki/Cube) ( 6 * (l
 * * l))
 * @param length is the length of the cube
 * @returns surface area of the cube
 */
template <typename T>
T cube_surface_area(T length) {
    return 6 * length * length;
}

/**
 * @brief area of a [circle](https://en.wikipedia.org/wiki/Area_of_a_circle) (pi
 * * r^2)
 * @param radius is the radius of the circle
 * @returns area of the circle
 */
template <typename T>
T circle_area(T radius) {
    return M_PI * pow(radius, 2);
}

/**
 * @brief surface area of a [sphere](https://en.wikipedia.org/wiki/Sphere) ( 4 *
 * pi * r^2)
 * @param radius is the radius of the sphere
 * @returns surface area of the sphere
 */
template <typename T>
T sphere_surface_area(T radius) {
    return 4 * M_PI * pow(radius, 2);
}

/**
 * @brief surface area of a [cylinder](https://en.wikipedia.org/wiki/Cylinder)
 * (2 * pi * r * h + 2 * pi * r^2)
 * @param radius is the radius of the cylinder
 * @param height is the height of the cylinder
 * @returns surface area of the cylinder
 */
template <typename T>
T cylinder_surface_area(T radius, T height) {
    return 2 * M_PI * radius * height + 2 * M_PI * pow(radius, 2);
}
}  // namespace math
