/*
 * Kullanıcıya bilgi ver
 * Kullanıcıdan sayı iste (örneğin X olsun)
 * Sayı tekse "X sayısı tektir", çiftse "X sayısı çifttir" yazdır
 * Bunu bir döngü içinde yap ve kullanıcı 0 (sıfır) girene kadar devam et
 * Döngüden çıktıktan sonra kullanıcıyı bir mesajla uğurla
 */
#include <iostream> // Girdi-çıktı işlemleri için
#include <string> // Dizge (std::string) sınıfını kullanabilmek için

using namespace std; // Standart sınıfları doğrudan kullanabilmek için ("std::string" yerine sadece "string" gibi)

bool isOdd(int num) { return (num % 2) == 1; }

bool isEven(int num) { return (num % 2) == 0; }

int main()
{
    // Kullanıcıyı karşıla
    cout << "Bu program sizden bir sayı girmenizi ister ve daha sonra bu sayının çift mi ya da tek "
            "mi olduğuna dair bilgiyi ekrana yazdırır. (Programdan çıkmak için 0' a basın.)"
         << endl;
    // 0 girene kadar tam sayı isteyip tek mi çift mi olduğunu yaz
    int sayi = 0;
    do
    {
        cout << "Bir sayı girin: ";
        cin >> sayi;

        if (isEven(sayi))
            cout << sayi << " çifttir" << endl;
        else
            cout << sayi << " tektir" << endl;

    } while (sayi != 0);

    // Kullanıcıyı uğurla
    cout << "Güle güle :)" << endl;

    return 0;
}