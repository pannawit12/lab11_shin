#include<iostream>
using namespace std;

int main(){
	int count[5] = {},n; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		n++;
		cout << "Student [" << n << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=='A') // if grade is A
			count[0]+=1;//Do something
		else if(grade=='B') // if grade is B
			count[1]+=1;//Do something
		else if(grade=='C')
			count[2]+=1;
		else if(grade=='D')
			count[3]+=1;
		else if(grade=='F')
			count[4]+=1;
		else if(grade=='0')
			break;
		//and so on ... for grade = C, D, F	
		else{ // grade is wrong input
			cout<<"Wrong input. Please input again.\n";
			n--;//Do something
		}
	}while(true);
	
	
	cout << "In total " << n-1 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] ;	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
