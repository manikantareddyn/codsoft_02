#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(NULL));
	int random_num=1+(rand()%1000);
	cout<<"Hello, Welcome to Number Guessing game"<<endl;
	cout<<"Number lies between 1 to 1000"<<endl;
	int guessed_num=0;
	int choices=0;
	while(guessed_num!=random_num){
		cout<<"Enter no. ";
		cin>>guessed_num;
		if(guessed_num<random_num)
		cout<<"you guesses less"<<endl;
		if(guessed_num>random_num)
		cout<<"you guesses more"<<endl;
	choices++;
}
cout<<"you guessed correct number in "<<choices<<" choices."<<endl<<"Congratulations! You WON";
}

