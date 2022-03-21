//
// Created by Administrator on 2022/3/4.
//

#ifndef CPP__4_H
#define CPP__4_H

#include <math.h>

#endif //CPP__4_H


class point {
public:

    double x;
    double y;

    double calLineDistance(point point1, point point2);
};

double calLineDistance(point point1, point point2) {
    return sqrt(pow(point1.x - point2.x, 2) + pow(point1.y - point2.y, 2));
}