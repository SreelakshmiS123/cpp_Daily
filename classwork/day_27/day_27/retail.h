#pragma once
#include<string>
#include"product.h"
using namespace std;
#define MAX 100


class retailShop
{
	int noofproduct;
	Product products[MAX];
	float calcTax(float);
public:
	bool addProduct(Product);
	bool updateProduct(int,Product);
	int searchbyName(string);
	bool deleteProduct(int);
	void printBill(Product[]);
};