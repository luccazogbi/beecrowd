#include <iostream>
#include <cstring>

using namespace std;

int main()
{   setlocale(LC_ALL,"Portuguese");
    char invert_ou_verteb[20]; 
    char classes_animais[20]; 
    char alimentacao_animais[20];
    //Entrada dos dados
    cin.getline(invert_ou_verteb, 20);
    cin.getline(classes_animais, 20);
    cin.getline(alimentacao_animais, 20);
    //Análise das entradas para identificar o animal
    if(strcmp(invert_ou_verteb, "vertebrado") == 0)
    {
        if(strcmp(classes_animais, "ave") == 0)
        {
            if(strcmp(alimentacao_animais, "carnivoro") == 0)
            {
                cout << "aguia" << endl;
            }
            else
            {
                cout << "pomba" << endl;
            }
        }
        else
        {
            if(strcmp(alimentacao_animais, "onivoro") == 0)
            {
                cout << "homem" << endl;
            }
            else
            {
                cout << "vaca" << endl;
            }
        }
    }

    else
    {
        if(strcmp(classes_animais, "inseto") == 0) //se calsse_animais for "igual" a inseto, então a condição dentro é verdadeira e portanto entra-se na estrutura de repetição
        {
            if(strcmp(alimentacao_animais, "hematofago") == 0)
            {
                cout << "pulga" << endl;
            }
            else
            {
                cout << "lagarta" << endl;
            }
        }
        else
        {
            if(strcmp(alimentacao_animais, "hematofago") == 0)
            {
                cout << "sanguessuga" << endl;
            }
            else
            {
                cout << "minhoca" << endl;
            }
        }
    }
    return 0;
}