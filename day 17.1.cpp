#include<iostream>

using namespace std;

int main(){
	
	int a = 10;
	int b = 0;
	int ans;
	
	char error[50] = "Cannot Divide by Zero";
	
 try{
 	if(b==0){
 		
 		throw error;
	 }
	else{
		ans = a/b;
		cout<<ans;
	} 
 }	
    catch(char n[]){
    	cout<<n;
	}
	
	return 0;
}
