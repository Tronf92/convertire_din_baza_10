#include <iostream>
using namespace std;

void transformare(int nr,int b){
	int n[100],i=0;
	while(nr!=0){
		n[i]=nr%b;
		nr=nr/b;
		i++;
	}
	i--;
	for(i;i>=0;i--){
		cout << n[i];
	}
	cout << endl;
}

int main(){
	int b,nr;
	cout << "Introduceti un nr in baza 10:" << endl;
	cin >> nr;
	cout << "Introduceti baza in care doriti sa convertiti acest numar" << endl;
	cin >> b;
	cout << "Numarul in baza:" << b << endl;
	transformare(nr,b);

	system("pause");
	return 0;
}