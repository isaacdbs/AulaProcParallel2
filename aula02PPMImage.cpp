// aula02PPMImage.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream> // tela e teclado
#include <fstream>  //arquivos read e write
using namespace std;
int main()
{
    
    
    //Write
    ofstream Image_01;

    //Open

    Image_01.open("images/Image_01.ppm");

    if (Image_01.is_open()) {
        Image_01 << "P3" << endl;
        Image_01 << "255 255" << endl;
        Image_01 << "255" << endl;

     //   Image_01 << "255 0 0" << endl;
     //   Image_01 << "0 255 0" << endl;
     //   Image_01 << "0 0 255" << endl;
     //   Image_01 << "255 255 0" << endl;
     //   Image_01 << "255 255 255" << endl;
     //   Image_01 << "0 0 0" << endl;
        for (int y = 0; y < 250; y++) {
            for (int x = 0; x < 200; x++) {
                Image_01 << x << " " << x << " " << x << endl;
            }
        }
    }

    Image_01.close();

 

   
    int numero;
    std::cout << "Hello PPM Header!!" << std::endl;
    cout << "Hello PPM Header!!" << endl;
    cout << "Antonio me de um numero ";
    cin >> numero;
    cout << "O numero do Antonio: " << numero << endl;

    return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
