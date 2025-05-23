#include<iostream>
#include<string>
#include"retail.h"
using namespace std;

bool retailShop::addProduct(Product p)
{
	products[noofproduct] = p;
	noofproduct++;
	return 1;
}
bool updateProduct(int index,Product p)
{

}