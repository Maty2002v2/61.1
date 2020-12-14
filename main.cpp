#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class ciagi{
	public:
		fstream plik;  
		string napis;
		vector<int> liczby;
		
		ciagi();
		~ciagi();
		void wczytajLiczby();
		void zapiszDoPliku();
		
	private:
		void oblicz_roznice();
};

ciagi::ciagi(){
	if(plik.good())
		plik.open("c:\\ciagi.txt", ios::in);  
	else
		cout<<"Cos poszlo nie tak przy otwieraniu pliku.";
};

ciagi::~ciagi(){
	plik.close();  
}

void ciagi::wczytajLiczby()
{
	while(!plik.eof())  
    {
        getline(plik, napis); 
        cout<<napis;
        cout<<endl;
                   
    }
}

int main(int argc, char** argv) {
	ciagi b;
	
	b.wczytajLiczby(); 
	return 0;
}
