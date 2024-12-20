#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    int n;
    string num;
    double sum = 0,mean , sd;
    ifstream in;
    ofstream out;
    in.open("score.txt");
    while(getline(in,num)){
        sum += atof(num.c_str());
        n++;
    }
    mean = sum/n;
    in.close();

    sum = 0;
    in.open("score.txt");
    while(getline(in,num)){
        sum += pow(atof(num.c_str()),2);
    }
    sd = sqrt((sum/n) - pow(mean,2));
    in.close();

    cout << "Number of data = "<<n;
    cout << setprecision(3);
    cout << "\nMean = "<<mean;
    cout << "\nStandard deviation = "<<sd;
}