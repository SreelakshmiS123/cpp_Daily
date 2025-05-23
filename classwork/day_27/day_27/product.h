#include<string>
using namespace std;
class Product
{
	string productname;
	float price;
	int quantity;
	string dateofManfacture;
	string dateofExp;
	int productcode;
public:
	void setName(string);
	void setPrice(float);
	void setQuant(int);
	void setdateofManfacture(string);
	void setdateofExp(string);
	void setproductcode(int);
	string getName();
	float getPrice();
	int getQuant();
	string getdateofManfacture();
	string getdateofExp();
	int getproductcode();

};