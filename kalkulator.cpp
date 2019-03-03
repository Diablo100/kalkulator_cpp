#include <stdio.h>
#include<iostream>>

using namespace std;


int dodaj(int a, int b)
{
	return a+b;
	
}

int odejmij(int a, int b)
{
	return a-b;
	
}

int pomnoz (int a, int b)
{
	
	return a*b;
}

double podziel (int a, int b)
{
	
	return a/b;
	
}
int main()
{
	int a,b;
	float wynik;
	int wybor;
	
	cout<<"[1]Dodawanie"<<endl;
    cout<<"[2]Odejmowanie"<<endl;
    cout<<"[3]Mnozenie"<<endl;
    cout<<"[4]Dzielenie"<<endl;
   
    cout<<"Co chcesz zrobic?"<<endl;
    cin>>wybor;
    
    cout<<"podaj 2 liczby: \n"<<endl;
    cin>>a;
    cin>>b;
    
    if(wybor==1)
    {
    	wynik = dodaj(a,b);
    	cout<<wynik<<endl;
	}
	else if(wybor==2)
    {
    	wynik = odejmij(a,b);
    	cout<<wynik<<endl;
	}
	else if(wybor==3)
    {
    	wynik = pomnoz(a,b);
    	cout<<wynik<<endl;
	}
	else if(wybor==4)
    {
    	wynik = podziel(a,b);
    	cout<<wynik<<endl;
	}
	return 0;
}




