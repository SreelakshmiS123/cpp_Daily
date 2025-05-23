#include<iostream>
#include<string>
#include "product.h"
using namespace std;
void Product::setName(string name)
{
	productname = name;
}
void Product::setPrice(float p)
{
	price = p;
}
void Product::setQuant(int q)
{
	quantity = q;
}
void Product::setdateofManfacture(string d)
{
	dateofManfacture = d;
}
void Product::setdateofExp(string d)
{
	dateofExp = d;
}
void Product::setproductcode(int c)
{
	productcode = c;
}
string Product:: getName()
{
	return productname;
}
float Product::getPrice()
{
	return price;
}
int Product::getQuant()
{
	return quantity;
}
string Product::getdateofManfacture()
{
	return dateofManfacture;
}
string Product::getdateofExp()
{
	return dateofExp;
}
int Product::getproductcode()
{
	return productcode;
}