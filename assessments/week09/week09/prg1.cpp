#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<unordered_map>
using namespace std;

unordered_map<string, string> user;
bool signup()
{
	string username, password;
	cout << "For signup: Enter username: ";
	cin >> username;
	if (user.find(username) != user.end())
	{
		cout << "Username already exist";
		return false;
	}
	cout << "Enter password"<<endl;
	cin >> password;
	user[username] = password;
	cout << "Signup is done";
	return true;

}
bool login()
{
	string username, password;
	cout << "For login: Enter username: "<<endl;
	cin >> username;
	cout << "Enetr password: " << endl;
	cin >> password;
	auto it = user.find(username);
	if (it == user.end())
	{
		cout << "User not found....Try to signup";
		return false;
	}
	if (it->second != password)
	{
		cout << "Entered wrong password " << endl;
		return false;
	}
	cout << username << "logged in successfully" << endl;
	return true;
}
class CDR
{
public:
	string msisdn;
	string b_name;
	string mmc;
	string type;
	int duration;
	int download;
	int upload;
	string t_msisdn;
    string t_mmc;

	//CDR(int msisdn, int mmc, string type, int dur, int down, int upload, string t_msi, string t_mmc) :msisdn(msisdn), mmc(mmc), type(type), duration(dur), download(down), upload(upload), t_msisdn(t_msi), t_mmc(t_mmc) {}
	CDR(string& line)
	{
		stringstream ss(line);
		string portion;
		getline(ss, msisdn, '|');
		getline(ss, b_name, '|');
		getline(ss, mmc, '|');
		getline(ss, type, '|');
		
		getline(ss, portion, '|');
		duration = stoi(portion);

		getline(ss, portion, '|');
		download = stoi(portion);

		getline(ss, portion, '|');
		upload = stoi(portion);

		getline(ss, t_msisdn, '|');
		getline(ss, t_mmc, '|');
	}
	string getMsisdn()
	{
		return msisdn;
	}
	string getBrand()
	{
		return b_name;
	}
	string getMmc()
	{
		return mmc;
	}
	string getType()
	{
		return type;
	}
	int getDuration()
	{
		return duration;
	}
	int getDownload()
	{
		return download;
	}
	int getUpload()
	{
		return upload;
	}
	string getTmsisdn()
	{
		return t_msisdn;
	}
	string getTmmc()
	{
		return t_mmc;
	}

	

};
class customer
{
public:
	string b_name;
	int invoice, outvoice;
	int insms, outsms;
	int out_invoice, out_outvoice;
	int out_insms, out_outsms;
	int download, upload;

	customer()
	{
		invoice = 0;
		outvoice=0;
		insms = 0;
		outsms=0;
		out_invoice = 0;
		out_outvoice=0;
		out_insms = 0; 
		out_outsms=0;
		download = 0;
		upload=0;
	}
	
	void printCustomer(const string& msisdn)
	{
		cout << "Customer ID: " << msisdn << "(" << b_name << ")"<<endl;
		cout << "*Services within the mobile operator*"<<endl;
		cout << "Incoming voice call duration: " << invoice << endl;
		cout << "Outgoing voice call duration: " << outvoice << endl;
		cout << "Incoming SMS messages: " << insms << endl;
		cout << "Outgoing SMS messages: " << outsms << endl;
		cout << "*Services outside the mobile operator*" << endl;
		cout << "Incoming voice call duration: " << out_invoice << endl;
		cout << "Outgoing voice call duration: " << out_outvoice << endl;
		cout << "Incoming SMS messages: " << out_insms << endl;
		cout << "Outgoing SMS messages: " << out_outsms << endl;
		cout << "*Internet use*" << endl;
		cout << "MB downloaded: " << download << "|" << "MB uploaded: " << upload << endl;
	}
};
class interOperator
{
public:
	string b_name;
	int invoice, outvoice, insms, outsms, download, upload;


	interOperator()
	{
		invoice = 0;
		outvoice = 0;
		insms = 0;
		outsms = 0;
		download = 0;
		upload = 0;
	}

	void printInter(string& mmc)
	{
		cout << "Operator brand: " << b_name << "(" << mmc << ")" << endl;
		cout << "Incoming voice call duration: " << invoice << endl;
		cout << "Outgoing voice call duration: " << outvoice << endl;
		cout << "Incoming SMS messages: " << insms << endl;
		cout << "Outgoing SMS messages: " << outsms << endl;
		cout << "MB downloaded: " << download << "|" << "MB uploaded: " << upload << endl;

	}
};
class CDRRecord
{
public:
	unordered_map<string, customer> Customer_m;
	unordered_map<string, interOperator> interOperator_m;

	void loadFromfile(const string& filename)
	{
		ifstream file(filename);
		string line;

		if (!file.is_open())
		{
			cerr << "Error in opening the file" << endl;
			return;
		}
		//getline(file, line);
		//string line;
		while (getline(file, line))
		{
			CDR r(line);

			string type = r.getType();
			string msisdn = r.getMsisdn();
			string mmc = r.getMmc();
			//string t_msisdn = r.getTmsisdn();
			string t_mmc = r.getMmc();
			
			customer c = Customer_m[msisdn];
			

			if (type == "MOC")
			{
				if (mmc == t_mmc)
					c.outvoice += r.getDuration();
				else
				c. out_outvoice += r.getDuration();
			}
			else if (type == "MTC")
			{
				if (mmc == t_mmc)
					c.invoice += r.getDuration();
				else
					c.out_invoice += r.getDuration();
			}
			else if (type == "SMS-MO")
			{
				if (mmc == t_mmc)
					c.outsms ++;
				else
					c.out_outsms++;
			}
			else if (type == "SMS-MT")
			{
				if (mmc == t_mmc)
					c.insms++;
				else
				c.	out_insms++;
			}
			else if (type == "GPRS")
			{
				c.download += r.getDownload();
			    c.upload += r.getUpload();
			}
			
		}
		file.close();
		
	}	
	void print()
	{
		cout << "#Customers Data Base: " << endl;
		for (auto i : Customer_m)
			i.second.printCustomer(i.first);
	}
	
};

int main()
{
	string choice;
	cout << "Enter signup/login: " << endl;
	cin >> choice;
	if (choice == "signup")
		signup();
	else if (choice == "login")
		login();
	CDRRecord c;
	c.loadFromfile("input.txt");
	c.print();
}