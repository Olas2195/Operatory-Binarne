#include <iostream>
#include <bitset>

using namespace std;

int main(int argc, char** argv) {
	int a;
	int b;
	
	cin>>a;
	cin>>b;
	
	cout<<"a= "<<bitset<8>(a).to_string()<<"\n";
	cout<<"b= "<<bitset<8>(b).to_string()<<"\n";

	cout<<"OR a|b: "<<bitset<8>(a|b).to_string()<<"\n";
	cout<<"AND a&b: "<<bitset<8>(a&b).to_string()<<"\n";
	cout<<"XOR a^b: "<<bitset<8>(a^b).to_string()<<"\n";
	cout<<"Negacja bitowa a  ~a: "<<bitset<8>(~a).to_string()<<"\n";
	cout<<"Negacja bitowa b  ~b: "<<bitset<8>(~b).to_string()<<"\n";
	cout<<"Przesuniêcie bitowe a o 1 w prawo a>>=1 "<<bitset<8>(a>>=1).to_string()<<"\n";
	cout<<"Przesuniêcie bitowe b o 4 w lewo b<<=4 "<<bitset<8>(b<<=4).to_string()<<"\n";
	return 0;
}
