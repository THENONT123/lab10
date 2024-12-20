#include<iostream>
using namespace std;

int main(){
	int count[5] = {} , i = 0; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	char grade;
	do{
		cout << "Student ["<<i+1<<"]: ";
		cin>>grade;
		if(grade == '0')break;
		else if(grade == 'A'){
			count[0] += 1;
			i++;
		}
		else if(grade == 'B'){
			count[1] += 1;
			i++;
		}
		else if(grade == 'C'){
			count[2] += 1;
			i++;
		}
		else if(grade == 'D'){
			count[3] += 1;
			i++;
		}
		else if(grade == 'F'){
			count[4] += 1;
			i++;
		}
		else{
			cout<<"Wrong input. Please input again.\n";
		}
	}while(1);
	
	
	cout << "In total "<<i<<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];	

	
	return 0;
}