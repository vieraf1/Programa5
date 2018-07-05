#include "iostream"
#include "cstdlib"
#include "math.h"
#include "string.h"
#include "conio.h"
#include "windows.h" 
#include <iomanip>
using namespace std;

int main() {
	setlocale (LC_ALL, "portuguese");
	double Pres, tempo, taxa, valor;
	float A, B, C, D, E;
	float W, X, Y, Z;
	float ad, mul;
	char tecla = '0';
	float Vol, Comp, Alt, Lar;
	
	while (tecla != 27) 
	
	{	
	            system("cls");
                cout << "\n1 - Calcular Presta��o em Atraso\
                         \n2 - Trocar Valores\
                         \n3 - Propriedade Distributiva\
                         \n4 - Volume da Caixa Retangular\
                         \n5 - Quadrado do N�mero\
                         \nESC - Sair\n\n\n";  
                tecla = getch();
    
      switch(tecla) {
                   case '1':
		          {
			       system("cls");
			       cout << "\nDigite o valor da presta��o em atraso: "; cin >> valor;
			       cout << "\nDigite o tempo de atraso, em dias: "; cin >> tempo;
			       cout << "\nDigite a taxa por atraso: "; cin >> taxa;
			       cout << "\n\n";
			       
			       Pres = valor + (valor * (taxa/100) * tempo);
			       
			       cout << "Calculando...";
				   Sleep(2000);
				   
				   cout << "\n\nO valor da presta��o em atraso � de: " << Pres << endl;
				   system("pause");
			       break;
				  }	
				  
				  case '2':
		          {
			       system("cls");
			       cout << "\nDigite o valor do primeiro n�mero: "; cin >> A;
			       cout << "\nDigite o valor do segundo n�mero: "; cin >> B;
			       
			       C = A;
			       A = B;
			       B = C;
			       
			       cout << "\n";
			       cout << "Trocando Valores...";
				   Sleep(2000);
				   
				   cout << "\n\nO valor do primeiro n�mero agora �: " << A;
				   cout << "\n\nO valor do segundo n�mero agora �: " << B << endl;
				   system("pause");
			       break;
				  }
				  
				  case '3':
		          {
			       system("cls");
			       cout << "\nDigite o valor do primeiro n�mero: "; cin >> W;
			       cout << "\nDigite o valor do segundo n�mero: "; cin >> X;
			       cout << "\nDigite o valor do terceiro n�mero: "; cin >> Y;
			       cout << "\nDigite o valor do quarto n�mero: "; cin >> Z;
			       
			       ad = (W+X) + (W+Y) + (W+Z) + (X+Y) + (X+Z) + (Y+Z);	
				   mul = (W*X) + (W*Y) + (W*Z) + (X*Y) + (X*Z) + (Y*Z); 
				   		       
			       cout << "\n";
			       cout << "Calculando...";
				   Sleep(2000);
				   
				   cout << "\n\nO valor da propriedade da soma �: " << ad;
				   cout << "\n\nO valor da proriedade de multiplica��o �: " << mul << endl;
				   system("pause");
			       break;
				  }
				  
				  case '4':
		          {
			       system("cls");
			       cout << "\nDigite o comprimento da caixa: "; cin >> Comp;
			       cout << "\nDigite a largura da caixa: "; cin >> Lar;
			       cout << "\nDigite a altura da caixa: "; cin >> Alt;
			       
			       Vol = Comp * Lar * Alt; 
				   		       
			       cout << "\n";
			       cout << "Calculando...";
				   Sleep(2000);
				   
				   cout << "\n\nO valor do volume da caixa �: " << Vol << endl;
				   system("pause");
			       break;
				  }
				  
				  case '5':
		          {
			       system("cls");
			       cout << "\nDigite o valor do n�mero: "; cin >> D;
			       
			       E = D * D; 
				   		       
			       cout << "\n";
			       cout << "Calculando...";
				   Sleep(2000);
				   
				   cout << "\n\nO quadrado do valor digitado �: " << E << endl;
				   system("pause");
			       break;
				  }
	}
	
	}
	return 0; }
