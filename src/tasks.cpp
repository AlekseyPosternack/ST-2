// Copyright 2025 UNN-CS Team
#include <cmath>
#include <stdexcept>
#include <utility>
#include "tasks.h"
#include "circle.h"

double EarthAndCordTask() {
    Circle planet;
    planet.setRadius(6378000.0);
    double ropeLength = planet.getFerence();
    double extendedRope = ropeLength + 1.0;
    double gapRadius = extendedRope / (2.0 * M_PI);
    double groundRadius = planet.getRadius();
    double liftHeight = gapRadius - groundRadius;
    return liftHeight;
}

std::pair<double, double> PoolTask() {
    const double waterRadius = 3.0;
    const double pathThickness = 1.0;
    const double concretePricePerSquare = 1000.0;
    const double fencePricePerMeter = 2000.0;
    Circle waterSurface;
    waterSurface.setRadius(waterRadius);
    double waterArea = waterSurface.getArea();
    Circle wholeStructure;
    wholeStructure.setRadius(waterRadius + pathThickness);
    double totalArea = wholeStructure.getArea();
    double ringArea = totalArea - waterArea;
    double materialBill = ringArea * concretePricePerSquare;
    double perimeter = 2.0 * M_PI * wholeStructure.getRadius();
    double fenceBill = perimeter * fencePricePerMeter;
    return std::make_pair(materialBill, fenceBill);
}
