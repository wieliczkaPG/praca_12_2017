#include <stdio.h>
#include <ctype.h>
#define tekst 33
int m;// male litery. Zmienne globalne odnoszą sie do calego programu
int d;//duze litery. zarowno funkcji main jak i do pozostalych
const char tab[tekst] = "ALA ma 2 Koty i 3 Psy.\n";
void info(void)
{
    puts("Program liczy ilosc malych i duzych liter w tablicy");

}
void wyswietl_tablice (void)
{
    printf("%s", tab);
}
void male () //funkcja "male" liczy ilosc malych liter w tablicy za pomoca petli for
{
       for (int i = 0; i < tekst; ++i)
       {
            if (islower(tab[i]))
            {
                m+= 1;
            }
       }
    printf("%i malych liter\n",m );
}
void duze () //funkcja "duze" liczy ilosc duzych liter w tablicy za pomoca petli for
{
    for (int i= 0; i <tekst; ++i)
    {
        if (isupper (tab[i]))
        {
            d+= 1;
        }
    }
    printf("%i duzych liter\n",d );
}
int main ()
{
    info(); //informacja o programie
    wyswietl_tablice();//wyswietla zawartosc tablicy
    printf("\nW tekscie jest:\n");
    male();
    duze();
      return 0;
}
