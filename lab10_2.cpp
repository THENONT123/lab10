#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	dest<<"-------------------- BOOM ---------------------\n";
	string s;
	while(getline(source,s)){
		dest<<s<<"\n";
	}
	dest<<"-------------------- HA!! ---------------------";

    source.close();
    dest.close();
	return 0;
}
