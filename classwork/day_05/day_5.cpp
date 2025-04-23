#include<iostream>
#include"switch.h"
using namespace std;
enum genre {
	Action=1,
	Comedy,
	Thriller,
	Mystery,
	SciFi
};
enum language{English=1,Hindi,Tamil,Telugu,Kannada,Marathi,Malayalam};
int main()
{
	//switchCase();
	//elseIflad();
	//stringElseif();
	int goTo();
	int inputLang;
	//char language[20];
	//char typeShows[20];
	//char genre[20];
    int inputGenre;
	cout << "Enter the language option: ";
	cin >> inputLang;
	switch (inputLang)
	{
	case English:
		cout << "You have chosen English" << endl;
		cout << "Enter the genre: " << endl;
		cin >> inputGenre;

		switch (inputGenre)
		{
		case Action:
			cout << "Choosed Genre: Action" << endl;
			break;
		case Comedy:
			cout << "Choosed Genre: Comedy" << endl;
			break;
		case Thriller:
			cout << "Choosed Genre: Thriller" << endl;
			break;
		case Mystery:
			cout << "Choosed Genre: Mystery" << endl;
			break;
		case SciFi:
			cout << "Choosed Genre: SciFi" << endl;
			break;
		default:
			cout << "No genre found" << endl;

		}
		break;
	case Hindi:
		cout << "You have chosen Hindi" << endl;
		cout << "Enter the genre: " << endl;
		cin >> inputGenre;

		switch (inputGenre)
		{
		case Action:
			cout << "Choosed Genre: Action" << endl;
			break;
		case Comedy:
			cout << "Choosed Genre: Comedy" << endl;
			break;
		case Thriller:
			cout << "Choosed Genre: Thriller" << endl;
			break;
		case Mystery:
			cout << "Choosed Genre: Mystery" << endl;
			break;
		case SciFi:
			cout << "Choosed Genre: SciFi" << endl;
			break;
		default:
			cout << "No genre found" << endl;

		}
		break;
	case Tamil:
		cout << "You have chosen Tamil" << endl;
		cout << "Enter the genre: " << endl;
		cin >> inputGenre;

		switch (inputGenre)
		{
		case Action:
			cout << "Choosed Genre: Action" << endl;
			break;
		case Comedy:
			cout << "Choosed Genre: Comedy" << endl;
			break;
		case Thriller:
			cout << "Choosed Genre: Thriller" << endl;
			break;
		case Mystery:
			cout << "Choosed Genre: Mystery" << endl;
			break;
		case SciFi:
			cout << "Choosed Genre: SciFi" << endl;
			break;
		default:
			cout << "No genre found" << endl;

		}
		break;
	case Telugu:
		cout << "You have chosen Telugu" << endl;
		cout << "Enter the genre: " << endl;
		cin >> inputGenre;

		switch (inputGenre)
		{
		case Action:
			cout << "Choosed Genre: Action" << endl;
			break;
		case Comedy:
			cout << "Choosed Genre: Comedy" << endl;
			break;
		case Thriller:
			cout << "Choosed Genre: Thriller" << endl;
			break;
		case Mystery:
			cout << "Choosed Genre: Mystery" << endl;
			break;
		case SciFi:
			cout << "Choosed Genre: SciFi" << endl;
			break;
		default:
			cout << "No genre found" << endl;

		}
		break;
	case Kannada:
		cout << "You have chosen Kannada" << endl;
		cout << "Enter the genre: " << endl;
		cin >> inputGenre;

		switch (inputGenre)
		{
		case Action:
			cout << "Choosed Genre: Action" << endl;
			break;
		case Comedy:
			cout << "Choosed Genre: Comedy" << endl;
			break;
		case Thriller:
			cout << "Choosed Genre: Thriller" << endl;
			break;
		case Mystery:
			cout << "Choosed Genre: Mystery" << endl;
			break;
		case SciFi:
			cout << "Choosed Genre: SciFi" << endl;
			break;
		default:
			cout << "No genre found" << endl;

		}
		break;
	case Malayalam:
		cout << "You have chosen Malayalam" << endl;
		cout << "Enter the genre: " << endl;
		cin >> inputGenre;

		switch (inputGenre)
		{
		case Action:
			cout << "Choosed Genre: Action" << endl;
			break;
		case Comedy:
			cout << "Choosed Genre: Comedy" << endl;
			break;
		case Thriller:
			cout << "Choosed Genre: Thriller" << endl;
			break;
		case Mystery:
			cout << "Choosed Genre: Mystery" << endl;
			break;
		case SciFi:
			cout << "Choosed Genre: SciFi" << endl;
			break;
		default:
			cout << "No genre found" << endl;

		}
		break;
	}
	
	cout << "End of filter" << endl;
	return 0;
}