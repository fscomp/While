#include <stdlib.h>

#include <iostream>
using std::cout;
using std::cin;

int main(int argc, char **argv)
{
	int count = 0;
    int nValor;
    double valor;
    double soma;
    
    cout<< "\n\nDigite o numero de valores a serem somados: \n";
    cin>>nValor;
        
    
    while (count < nValor)
    {
     cout <<"Digite um valor positivo (Se negativo sera paedido para digitar novamente): " << '\n';   
     cin >> valor;
     
     if (valor <0)
         continue;
         soma += valor;
         count++;
    }
    if (count > 0)
        cout << " A media eh: " << soma/count<< '\n';
        
        cout << "\n\n digite valores positivos a serem somados ou qualquer valor negativo para parar:\n";
        
        count=0;
        soma=0;
    while (true)
    {
        cout << " digite o valor: "<<'\n';
        cin>> valor;
        
        if (valor <0)
            break;
    }
     
    
 return (0);

}
