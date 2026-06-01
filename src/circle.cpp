// Copyright 2025 UNN-CS Team
#include "circle.h"
#include <cmath>
#include <stdexcept>

Circle::Circle() {
    radius = 0.0;
    area = 0.0;
    ference = 0.0;
}

double Circle::getArea() const {
    return area;
}

double Circle::getFerence() const {
    return ference;
}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double newRadius) {
    if (newRadius < 0.0) {
        throw std::invalid_argument("Negative radius not allowed");
    }
    radius = newRadius;
    double circleDiameter = 2.0 * radius;
    ference = M_PI * circleDiameter;
    area = M_PI * radius * radius;
}

void Circle::setArea(double newArea) {
    if (newArea < 0.0) {
        throw std::invalid_argument("Negative area not allowed");
    }
    area = newArea;
    double radiusSquared = area / M_PI;
    radius = sqrt(radiusSquared);
    double circleDiameter = 2.0 * radius;
    ference = M_PI * circleDiameter;
}

void Circle::setFerence(double newFerence) {
    if (newFerence < 0.0) {
        throw std::invalid_argument("Negative ference not allowed");
    }
    ference = newFerence;
    double circleDiameter = ference / M_PI;
    radius = circleDiameter / 2.0;
    double radiusSquared = radius * radius;
    area = M_PI * radiusSquared;
}
