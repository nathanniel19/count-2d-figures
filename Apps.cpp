//import library
#include <iostream>
#include <string>

//header code
void lineSpacing()
{
    std::cout << "\t\t\t-------------------------\n";
}
void header()
{
    std::cout << "\t\tProgram menghitung bangun datar \n";
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
    std::cout << "Luas adalah: " << kelilingLingkaran2(jarijari,phi) << "\n";
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
                    if (pilihanLingkaran == 2)
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
                // default:
                //     break;
                }
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
        std::cout << "\t\t\tnProgram Selesai\n";
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