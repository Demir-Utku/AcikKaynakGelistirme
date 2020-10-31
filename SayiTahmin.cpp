/*
* Bu program, 1 ile 10 arasında bir sayı tutar
* kullanıcıdan tamsayı ister
* Değerler eşitse, ekrana, "tebrikler!" yazar
* Değer farklıysa "Tekrar deneyin!" yazar
*/
#include <iostream>

int main()
{
    // sayı tut
    int sayi = 7;
    int tahmin;

    // kullanıcıya bilgi ver -> bu program şu işe yarar...
    // kullanıcıdan 1 ile 10 arası sayı girmsini iste
    // sayıyı oku ve tahmin değişkenine ata
    // değerler eşitse tebrik et --> if
    // değilse, tekrar deneyin yaz --> else

    std::cout << "Bu program, 1 ile 10 arasında bir sayı tutar, kullanıcıdan tamsayı ister." << std::endl;
    std::cout << "Değerler eşitse, ekrana, 'tebrikler!' yazar" << std::endl;
    std::cout << "Değer farklıysa 'Tekrar deneyin!' yazar" << std::endl;

    std::cout << "Lütfen 1 ile 10 arasında bir sayı giriniz: ";
    std::cin >> tahmin;

    if(sayi == tahmin) {
        std::cout << "Tebrikler!" << std::endl;
    }
    else {
        std::cout << "Tekrar deneyin!" << std::endl;
    }

    return 0;
}
