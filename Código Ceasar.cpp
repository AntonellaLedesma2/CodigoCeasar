#include <bits/stdc++.h>
using namespace std;
string ConvertirCeasar(string f);
int main(){
	string frase;
	cout<<"ingrese una frase"<<endl;
	getline(cin,frase);
	cout<<ConvertirCeasar(frase)<<endl;
	
	return 0;
}

string ConvertirCeasar(string f){
	string abc="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for(int i=0 ; i<f.size() ; i++ ){
		if(f[i]=f[i]+3){
			abc+=f;
		}
	}
	return f;
}