//import library
#include <iostream>
#include <string>

//header code
void lineSpacing()
{
    std::cout << "==============================\n";
}
void header()
{
    std::cout << "Program menghitung bangun datar \n";
}

//persegi
double kelilingPersegi(double a)
{
    double keliling=a*4;
    return keliling;
}
void printKelPersegi (double a)
{
    std::cout << "Keliling adalah: " << kelilingPersegi(a) << "\n";
}
double luasPersegi(double a)
{
    double luas=a*a;
    return luas;
}
void printLuasPersegi (double a)
{
    std::cout << "Luas adalah: " << luasPersegi(a) << "\n";
}

//Persegi Panjang
double kelilingPersegiPanjang(double a, double b)
{
    double keliling=2*(a+b);
    return keliling;
}
void printKelPerPan(double a, double b)
{
    std::cout << "Keliling adalah: " << kelilingPersegiPanjang(a,b) << "\n";
}
double luasPersegiPanjang(double a,double b)
{
    double luas=a*b;
    return luas;
}
void printLuasPerPan(double a, double b)
{
    std::cout << "Luas adalah: " << luasPersegiPanjang(a,b) << "\n";
}

//Lingkaran
double kelilingLingkaran1(double diameter,const double phi=3.1415)
{
    double keliling;
    keliling=phi*diameter;
    return keliling;
}
void printKelLing1(double diameter,const double phi=3.1415)
{
    std::cout << "Keliling adalah: " << kelilingLingkaran1(diameter,phi) << "\n";
}
double kelilingLingkaran2(double jarijari, const double phi=3.1415)
{
    double keliling;
    keliling=phi*2*jarijari;
    return keliling;
}
void printKelLing2(double jarijari, const double phi=3.1415)
{
    std::cout << "Keliling adalah: " << kelilingLingkaran2(jarijari,phi) << "\n";
}

double luasLingkaran1(double diameter,const double phi=3.1415)
{
    double luas;
    luas=phi*diameter*0.25;
    return luas;
}
void printLuaslLing1(double diameter,const double phi=3.1415)
{
    std::cout << "Keliling adalah: " << luasLingkaran1(diameter,phi) << "\n";
}
double luasLingkaran2(double jarijari, const double phi=3.1415)
{
    double luas;
    luas=phi*jarijari*jarijari;
    return luas;
}
void printLuasLing2(double jarijari, const double phi=3.1415)
{
    std::cout << "Luas adalah: " << luasLingkaran2(jarijari,phi) << "\n";
}

//Segitiga
double luasSegitiga(double alas, double tinggi)
{
    double luas;
    luas=alas*tinggi/2;
    return luas;
}
void printLuasSegi3(double alas, double tinggi)
{
    std::cout << "Luas adalah: " << luasSegitiga(alas,tinggi) << "\n";
}
double kelilingSegitiga(double sisi1, double sisi2, double sisi3)
{
    double keliling;
    keliling=sisi1+sisi2+sisi3;
    return keliling;
}
void printKelSegi3(double sisi1, double sisi2, double sisi3)
{
    std::cout << "Keliling adalah: " << kelilingSegitiga(sisi1,sisi2,sisi3) << "\n";
}

//Jajar Genjang
double luasJarGen(double alas, double tinggi)
{
    double luas;
    luas=alas*tinggi;
    return luas;
}
void printLuasJarGen(double alas, double tinggi)
{
    std::cout << "Luas adalah: " << luasSegitiga(alas,tinggi) << "\n";
}
double kelJarGen(double a, double b)
{
    double keliling;
    keliling=2*(a+b);
    return keliling;
}
void printkelJarGen(double a, double b)
{
    std::cout << "Keliling adalah: " << kelJarGen(a,b) << "\n";
}

//Trapesium
double luasTrapesium(double sisiBawah, double sisiAtas, double tinggi)
{
    double luas;
    luas=0.5*(sisiAtas+sisiBawah)*tinggi;
    return luas;
}
void printluasTrapesium(double sisiBawah, double sisiAtas, double tinggi)
{
    std::cout << "Luas adalah: " << luasTrapesium(sisiBawah,sisiAtas,tinggi) << "\n";
}
double kelTrapesium (double sisi1, double sisi2, double sisi3, double sisi4)
{
    double keliling;
    keliling=sisi1+sisi2+sisi3+sisi4;
    return keliling;
}
void printKelTrapesium (double sisi1, double sisi2, double sisi3, double sisi4)
{
    std::cout << "Keliling adalah: " << kelTrapesium(sisi1,sisi2,sisi3,sisi4) << "\n";
}


//Main code
int main ()
{
    //Header
    lineSpacing();
    header();
    lineSpacing();
    
    //loop program
    while (true)
    {
        char cont;
        std::cout << "Ingin menghitung (y/n)? "; std::cin >> cont;
        
        
        if (cont=='y')
        {
            //continue condition
            int pilihan;

            std::cout << "1. Persegi\n";
            std::cout << "2. Persegi Panjang\n";
            std::cout << "3. Lingkaran\n";
            std::cout << "4. Segitiga\n";
            std::cout << "5. Jajar Genjang\n";
            std::cout << "6. Trapesium\n";

            std::cout << "Masukan pilihan:\n";
            std::cin >> pilihan;

            //Condition
            switch (pilihan)
            {
            case 1:
                lineSpacing();
                std::cout << "Persegi\n";
                lineSpacing();

                double sisi;
                std::cout << "Masukan Panjang Sisi: "; std::cin >> sisi;
                printKelPersegi(sisi);
                printLuasPersegi(sisi); 
                break;
            case 2:
                lineSpacing();
                std::cout << "Persegi Panjang\n";
                lineSpacing();

                double panjang, lebar;
                std::cout << "Masukan Panjang: "; std::cin >> panjang;
                std::cout << "Masukan Lebar: "; std::cin >> lebar;
                printKelPerPan(panjang,lebar);
                printLuasPerPan(panjang,lebar);
                break;
            case 3:
                lineSpacing();
                std::cout << "Lingkaran\n";
                lineSpacing();

                int pilihanLingkaran;
                while (true)
                {
                    std::cout << "Diameter/Jari Jari (1/2): "; std::cin >> pilihanLingkaran;
                    std::cout << "\n";
                    if (pilihanLingkaran == 1)
                    {
                        double diameter;
                        const double phi=3.1415;
                        lineSpacing();
                        std::cout << "Menggunakan Diameter\n";
                        lineSpacing();
                        std::cout << "Masukan Diameter: "; std::cin >> diameter;
                        printKelLing1(diameter,phi);
                        printLuaslLing1(diameter,phi);
                        break;
                    }
                    else if (pilihanLingkaran == 2)
                    {
                        double jarijari;
                        const double phi=3.1415;
                        lineSpacing();
                        std::cout << "Menggunakan Jari Jari\n";
                        lineSpacing();
                        std::cout << "Masukan Jari Jari: "; std::cin >>jarijari;
                        printKelLing2(jarijari,phi);
                        printLuasLing2(jarijari,phi);
                        break;
                    }
                    else
                    {
                        std::cout << "Pilih angka 1 atau 2!\n";
                        lineSpacing();
                    }   
                }
                break;
            case 4:
                lineSpacing();
                std::cout << "Segitiga\n";
                lineSpacing();

                int pilihanSegitiga;
                while (true)
                {
                    std::cout << "Luas/Keliling (1/2): "; std::cin >> pilihanSegitiga;
                    std::cout << "\n";
                    if (pilihanSegitiga == 1)
                    {
                        double alas, tinggi;
                        lineSpacing();
                        std::cout << "Menghitung Luas Segitiga\n";
                        lineSpacing();
                        std::cout << "Masukan Panjang Alas: "; std::cin >> alas;
                        std::cout << "Masukan Panjang Tinggi: "; std::cin >> tinggi;
                        printLuasSegi3(alas,tinggi);
                        break;
                    }
                    else if (pilihanSegitiga == 2)
                    {
                        double sisi1, sisi2, sisi3;
                        lineSpacing();
                        std::cout << "Menghitung Keliling Segitiga\n";
                        lineSpacing();
                        std::cout << "Masukan Sisi 1: "; std::cin >> sisi1;
                        std::cout << "Masukan Sisi 2: "; std::cin >> sisi2;
                        std::cout << "Masukan Sisi 3: "; std::cin >> sisi3;
                        printKelSegi3(sisi1,sisi2,sisi3);
                        break;
                    }
                    else
                    {
                        std::cout << "Pilih angka 1 atau 2!\n";
                        lineSpacing();
                    }
                }
                break;
            case 5:
                lineSpacing();
                std::cout << "Jajar Genjang\n";
                lineSpacing();

                int pilihanJarGen;
                while (true)
                {
                    std::cout << "Luas/Keliling (1/2): "; std::cin >> pilihanJarGen;
                    std::cout << "\n";
                    if (pilihanJarGen == 1)
                    {
                        double alas, tinggi;
                        lineSpacing();
                        std::cout << "Menghitung Luas Jajar Genjang\n";
                        lineSpacing();
                        std::cout << "Masukan Panjang Alas: "; std::cin >> alas;
                        std::cout << "Masukan Panjang Tinggi: "; std::cin >> tinggi;
                        printLuasJarGen(alas,tinggi);
                        break;
                    }
                    else if (pilihanJarGen == 2)
                    {
                        double sisiDatar,sisiMiring;
                        lineSpacing();
                        std::cout << "Menghitung Keliling Jajar Genjang\n";
                        lineSpacing();
                        std::cout << "Masukan Sisi Datar: "; std::cin >> sisiDatar;
                        std::cout << "Masukan Sisi Miring: "; std::cin >> sisiMiring;
                        printkelJarGen(sisiDatar,sisiMiring);
                        break;
                    }
                    else
                    {
                        std::cout << "Pilih angka 1 atau 2!\n";
                        lineSpacing();
                    }
                }
                break;
            case 6:
                lineSpacing();
                std::cout << "Trapesium\n";
                lineSpacing();

                int pilihanTrapesium;
                while (true)
                {
                    std::cout << "Luas/Keliling (1/2): "; std::cin >> pilihanTrapesium;
                    std::cout << "\n";
                    if (pilihanTrapesium == 1)
                    {
                        double sisiBawah, sisiAtas, tinggi;
                        lineSpacing();
                        std::cout << "Menghitung Luas Trapesium\n";
                        lineSpacing();
                        std::cout << "Masukan Panjang Sisi Bawah: "; std::cin >> sisiBawah;
                        std::cout << "Masukan Panjang Sisi Atas: "; std::cin >> sisiAtas;
                        std::cout << "Masukan Tinggi: "; std::cin >> tinggi;
                        printluasTrapesium(sisiBawah,sisiAtas,tinggi);
                        break;
                    }
                    else if (pilihanTrapesium == 2)
                    {
                        double sisi1, sisi2, sisi3, sisi4;
                        lineSpacing();
                        std::cout << "Menghitung Keliling Jajar Genjang\n";
                        lineSpacing();
                        std::cout << "Masukan Sisi 1: "; std::cin >> sisi1;
                        std::cout << "Masukan Sisi 2: "; std::cin >> sisi2;
                        std::cout << "Masukan Sisi 3: "; std::cin >> sisi3;
                        std::cout << "Masukan Sisi 4: "; std::cin >> sisi4;
                        printKelTrapesium(sisi1, sisi2, sisi3, sisi4);
                        break;
                    }
                    else
                    {
                        std::cout << "Pilih angka 1 atau 2!\n";
                        lineSpacing();
                    }
                break;
                }


            default:
                break;
                
            }
            // lineSpacing();
            // std::cout << "Program Selesai\n";
            // lineSpacing();
            // break;
        }
        if (cont=='n')
        {
        //footer
        lineSpacing();
        std::cout << "Program Selesai\n";
        lineSpacing();
        break;
        }
        else
        {
            lineSpacing();
            std::cout << "Pilih y/n\n";
            lineSpacing();
        }  
    }
        return 0;
}