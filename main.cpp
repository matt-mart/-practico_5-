#include <iostream>

using namespace std;

constexpr int largo = 10;
#include "./lib/mostrar.hpp"
int main()
{

    int arreglo [ largo ];
    arreglo [ largo ];
    for ( int i = 0; i<largo; i+=1){
      std::cout << "Ingrese un numero" << std::endl;
      std::cin >> arreglo [ i ];
    }
    mostrar( arreglo );

}

