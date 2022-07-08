#ifndef _LIBEX1_H
#define _LIBEX1_H

typedef struct{
    float side;
}Square;

typedef struct{
    float width, height;
}Rectangle;

float areaSquare(Square square);
float areaRectangle(Rectangle rectangle);
void ifarea(Square square, Rectangle rectangle);


#endif