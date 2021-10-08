#include "../include/func.h"
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
double z1(double a, double b){
	return (pow((cos(a)-cos(b)), 2))-pow((sin(a) - sin(b)), 2);}
double z2(double a, double b){
	return (-4*pow(sin(a/2-b/2), 2)*cos(a+b));}
bool f(bool bl_a, bool bl_b, bool bl_c){
	return (bl_a*(!(bl_b)+bl_c));}
bool g(bool bl_a, bool bl_b, bool bl_c){
	return (bl_a*(!(bl_b))+bl_a*bl_c);}
double fx(double x, double R){
	if(x<=-7){
		return 0;}
	if(x>=4){
		return 0;}
	if((x>-7)*(x<-3)){
		return (x*R/4);}
	if((x>=2)*(x<4)){
		return ((-1)*x*R/2);}
	if((x>-2)*(x<2)){
		return (R/4*pow(x, 2));}
	if((x>=-3)*(x<=2)){
		return R;}}
int inside(double ix, double iy, double iR){
	if((ix<=0)*(iy<=0)*((pow(ix, 2)+pow(iy, 2)<=pow(iR, 2)))){
		return 1;}
	else if((pow(ix, 2)+pow(iy, 2)<=pow(iR, 2))*(iy>pow(ix-1, 2))*(ix>=0)){
		return 1;}
	else if(iR!=0){
		return 0;}}
