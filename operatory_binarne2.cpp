#include <iostream>
#include <bitset>

using namespace std;

int zerujBit(int liczba, int bit) {
	cout<<bitset<8>(liczba).to_string()<<"\n";
	cout<<bitset<8>(liczba= liczba&~bit).to_string()<<"\n";
	return bitset<8>(liczba&=~bit).to_ulong();
}

int main(int argc, char** argv) {
	cout<<zerujBit(2,1)<<"\n\n";
	cout<<zerujBit(1,1)<<"\n\n";
	cout<<zerujBit(3,2)<<"\n\n";
	cout<<zerujBit(5,1)<<"\n\n";
	return 0;
}
