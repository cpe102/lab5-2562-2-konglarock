#include<iostream>
#include<string>
using namespace std;



string mixText(string x,string y){
	string S="";
	int st1=x.size(),st2=y.size(),count=0;

	if (st1==st2)
	{
		while (count<=y.size()-1)
		{
			S=S+x[count]  + y[count] ;
			count=count+1;
		}
		
		return S;
	}
	else
	{
		return "E";
	}

}






int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
