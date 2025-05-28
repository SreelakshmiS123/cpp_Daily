#include<iostream>
using namespace std;
class Animal
{
public:
	void make_sound()
	{
		cout << "Animal makes a sound" << endl;
    }
};
class Dog :public Animal
{
public:
	void make_sound()
	{
		cout << "Dog barks" << endl;
	}
};
class Cat :public Animal
{
public:
	void make_sound()
	{
		cout << "Cat meows" << endl;
	}
};
int main()
{
	Dog d;
	Cat c;
	d.make_sound();
	c.make_sound();

}