void insertar(
    int arreglo [],
    int numero,
    int posicion

){

    if ( arreglo [ posicion ] != 0 )
        arreglo [posicion] = numero;

    else
        std:: cout << " Est� ocupada " << std::endl;

}
