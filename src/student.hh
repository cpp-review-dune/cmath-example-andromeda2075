#pragma once // prevents multiple definitions
//#include<iostream>
#include<cmath>
#include <numbers>
// Test for exercise 1
double result_1a = std::pow(5-19./7+std::pow(2.5,3),2); // TODO: Complete
double result_1b = 7*3.1+std::sqrt(120)/5-std::pow(15,5./3); // TODO: Complete
double result_1c = std::pow((1/std::sqrt(75)+73./std::pow(3.1,3)),1./4)+55*0.41;; // TODO: Complete

// Test for exercise 2
constexpr double PI = std::numbers::pi;

double result_2a = std::sin(0.2*PI)/std::cos(PI/6)+std::tan(PI/180 * 72); // TODO: Complete


double result_2b = std::pow(std::tan(PI/180*64)*std::cos(PI/180*15),2)+std::pow(std::sin(PI/180*37),2)/std::pow(std::cos(PI/180*20),2); // TODO: Complete


// Test for exercise 3
float x = 6.5, y = 3.8;

auto expr1 = [](float x, float y)
{ 
  return pow((pow(x,2)+pow(y,2)),2./3)+x*y/(y-x); // TODO: Complete
};

auto expr2 = [](float x, float y)
{

  return sqrt(x+y)/pow((x-y),2)+2*pow(x,2)-x*pow(y,2); // TODO: Complete
};