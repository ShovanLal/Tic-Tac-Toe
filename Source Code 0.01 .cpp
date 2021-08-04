#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
char a[3][3];
void display(){
    system("cls");
    cout<<"\n\n\n";
	for(int i=0;i<3;i++){
		cout<<"\t\t\t";
		for(int j=0;j<3;j++){
			cout<<"["<<a[i][j]<<"]";
		}
		cout<<endl;
	}
}
void store_val(){
	char cnt='0';
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			a[i][j]=++cnt;
		}
	}
}
bool harjit(){
	if(a[0][0]==a[0][1] and a[0][1]==a[0][2]){//horizontal
		a[0][0]='-',a[0][1]='-',a[0][2]='-';
		return true;
	}else if(a[1][0]==a[1][1] and a[1][1]==a[1][2]){//horizontal
		a[1][0]='-',a[1][1]='-',a[1][2]='-';
		return true;
	}else if(a[2][0]==a[2][1] and a[2][1]==a[2][2]){//horizontal
		a[2][0]='-',a[2][1]='-',a[2][2]='-';
		return true;
	}else if(a[0][0]==a[1][0] and a[1][0]==a[2][0]){//vertical
		a[0][0]='|',a[1][0]='|',a[2][0]='|';
		return true;
	}else if(a[0][1]==a[1][1] and a[1][1]==a[2][1]){//vertical
		a[0][1]='|',a[1][1]='|',a[2][1]='|';
		return true;
	}else if(a[0][2]==a[1][2] and a[1][2]==a[2][2]){//vertical
		a[0][2]='|',a[1][2]='|',a[2][2]='|';
		return true;
	}else if(a[0][0]==a[1][1] and a[1][1]==a[2][2]){//diagonal
		a[0][0]='/',a[1][1]='/',a[2][2]='/';
		return true;
	}else if(a[0][2]==a[1][1] and a[1][1]==a[2][0]){//diagonal
		a[0][2]='/',a[1][2]='/',a[2][2]='/';
		return true;
	}
	return false;
}

int main() {
	store_val();
	cout<<"\n\n\n----------- WELCOME TO THE GAME 'TIC-TAC-TOE' ------------\n";
	display();
	string s1,s2;
	cout<<"Enter Player-1 name: ";
	cin>>s1;
	cout<<"Enter Player-2 name: ";
	cin>>s2;
	int chk=1;
	while(chk!=0){
		if(chk%2!=0){
			cout<<"It is "<<s1<<"'s turn, Please Enter for 'O':";
		}else{
			cout<<"It is "<<s2<<"'s turn, Please Enter for 'X':";
		}
		int trn;
		cin>>trn;
		trn-=1;
		if(chk%2==0){
			a[trn/3][trn%3]='X';
		}else{
			a[trn/3][trn%3]='O';
		}
		display();
		if(harjit()==true){
			display();
			if(chk%2!=0){
				cout<<"------------- XD XD XD XD ------------- \n";
				cout<<"----- WINNER WINNER CHICKEN DINNER ---- \n";
				cout<<"------------- "<<s1<<" Wins -----------\n";
				cout<<"------------- :) :D :P XD ------------- \n\n";
				break;
			}else{
				cout<<"------------- XD XD XD XD ------------- \n";
				cout<<"----- WINNER WINNER CHICKEN DINNER ---- \n";
				cout<<"------------ "<<s2<<" Wins ------------\n";
				cout<<"------------- :) :D :P XD ------------- \n\n";
				break;
			}
			
		}
		if(chk==9){
			cout<<"------------- No One wins\n:( :( :( -------------\n";
			cout<<"----- BETTER LUCK NEXT TIME for both of you -----\n\n";
		}
		chk++;
	}
	return 0;
}
