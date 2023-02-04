#include <iostream>

void wypiszTablice( int tablica[], int ile )
{
    for( int indeks = 0; indeks < ile; indeks++ )
        std::cout << tablica[ indeks ] << std::endl;

}

int main()
{
    int dane[ 5 ];
    dane[ 0 ] = 123;
    dane[ 1 ] = 321;
    dane[ 2 ] = 333;
    dane[ 3 ] = 222;
    dane[ 4 ] = 111;
    wypiszTablice( dane, 5 );
    return 0;
}