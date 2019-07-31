// Copyright 2018 Regan Willis
#include "comp_geo.h"
double GetCircumference(double xc, double yc, double xe, double ye) {
  // returns floating point representing circumference of a circle
  double radius = GetDistance(xc, yc, xe, ye);
  double cir = (M_PI)*(2*radius);
  return cir;
}
double GetArea(double xc, double yc, double xe, double ye) {
  // returns floating point value representing the area of the circle
  double radius_sq = GetDistanceSquared(xc, yc, xe, ye);
  double area = M_PI*radius_sq;
  return area;
}
double GetPerimeter(double xu, double yu, double xur, double yur) {
  // returns floating point value representing the perimeter of the rectancle
  double length = xur - xu;
  double height = yur - yu;
  bool neg_length = length < 0;
  bool neg_height = height < 0;
  if (neg_length)
    length = fabs(length);
  if (neg_height)
    height = fabs(height);
  double perim = (length * 2) + (height * 2);
  return perim;
}
double GetDistanceSquared(double x1, double y1, double x2, double y2) {
  // returns floating point value representing the squared distance between
  // points 1 and 2
  double dist_sq = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
  return dist_sq;
}
double GetDistance(double x1, double y1, double x2, double y2) {
  // returns the floating point value representing the distance between
  // points 1 and 2
  double dist_sq = GetDistanceSquared(x1, y1, x2, y2);
  double dist = sqrt(dist_sq);
  return dist;
}
