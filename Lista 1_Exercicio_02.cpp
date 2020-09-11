#include <iostream>
#include <clocale> // setlocale
#include <cstdlib> // system
#include <string> // Textos em geral

using namespace std;


int main() {
	setlocale(LC_ALL, "Portuguese");

    int a,b,c;

    cout << "Informe o valor do primeiro lado do triângulo: ";
    cin >> a;

    cout << "Informe o valor do segundo lado do triângulo: ";
    cin >> b;

    cout << "Informe o valor do terceiro lado do triângulo: ";
    cin >> c;   

    if ((a==0||b==0 ||c==0) || (a+b<c)||a+c<b||b+c<a){
        cout << "Os valores não formam um triângulo";
    }
    else
    {
        cout << "Os valores informados formam um triângulo" << endl;

        if ((a==b)&&(b==c))
        cout << "Triângulo equilatero" << endl;
        else
        {
            if ((a!=b)&& (b!=c) && (c!=a))
            cout << "Triângulo escaleno" << endl;

            else
            {
                cout << "Triângulo isósceles" << endl;
            }
            
        }
        
    }
     
	system("pause");
	return 0;
}
