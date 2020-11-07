/*
* Bu program, 1 ile 10 arasında bir sayı tutar
* kullanıcıdan tamsayı ister
* Değerler eşitse, ekrana, "tebrikler!" yazar
* Değer farklıysa "Tekrar deneyin!" yazar
*/
#include <iostream>
<<<<<<< HEAD
#include <string>
=======
>>>>>>> b8ab5bb... İlk hafta odevi yapildi

int main()
{
    // sayı tut
<<<<<<< HEAD
    int tut = 7;
    int tahmin = 0;
=======
    int sayi = 7;
    int tahmin;
>>>>>>> b8ab5bb... İlk hafta odevi yapildi

    // kullanıcıya bilgi ver -> bu program şu işe yarar...
    // kullanıcıdan 1 ile 10 arası sayı girmsini iste
    // sayıyı oku ve tahmin değişkenine ata
    // değerler eşitse tebrik et --> if
    // değilse, tekrar deneyin yaz --> else

<<<<<<< HEAD
=======
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

>>>>>>> b8ab5bb... İlk hafta odevi yapildi
    return 0;
}
