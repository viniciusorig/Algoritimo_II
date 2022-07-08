#include <stdio.h>
#include "geometria.h"

float areaSquare(Square square)
{
    return square.side * square.side;
}
float areaRectangle(Rectangle rectangle)
{
    return rectangle.width * rectangle.height;
}
void ifarea(Square square, Rectangle rectangle)
{
    if (rectangle.width == rectangle.height){
        square.side = rectangle.height;
        printf("%f", areaSquare(square));
    }else{
        areaRectangle(rectangle);
        printf("%f", areaRectangle(rectangle));
    }
}