#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <time.h>
#include <iomanip>  // чтобы работал precision
#include <math.h>  // функции модуля числа, синуса, косинуса и прочее здесь
#include <cmath>  
#include <string>  // для считывания строк

using namespace std; // чтобы запомнить, какие команды и типы работают через std
using std::cout;
using std::cin;
using std::endl;


//Задача 1
/*
int main() {
	cout << "           AiP       " << endl
		<< "  Homework 21/03/2020" << endl
		<< "      Kozevnikov Ilya" << endl
		<< "                  #7 " << endl
		<< "                     " << endl;





	cout << "Task 1 \n \n";


	float num;
	cout << "Enter num: ";
	cin >> num;
	cout << "\n";

		for (int i = 0; i < num; i++) {
			for (int j = 0; j <= i; j++)
				cout << 0;
			cout << endl;
		}

		cout << endl;

		getchar();  // ожидание ввода, чтобы прога
		getchar();  // не закрывалась после выполнения

	return 0;
}
*/

//Задача 2e

/*
int main()
{
    float dx, xmin, xmax;
    const float eps = 0.000001;  

    std::cout << "Enter [xmin, xmax]: ";
    std::cin >> xmin >> xmax;

    std::cout << "Enter dx: ";
    std::cin >> dx;

    std::cout << "\tx\t\ty" << std::endl;

    std::cout.precision(5);
    float f;
    float x = xmin; 
    while (x < xmax) {
        if (fabs(x - 2) < eps)
            std::cout << "\t"
            << x
            << "\t\t Divide on zero"
            << std::endl;
        else {
            f = (x + 2) * (x + 2) + (x *3);

            std::cout << "\t"
                << x
                << "\t\t"
                << f
                << std::endl;
        }
        x += dx;
    }

    return 0;
}*/

//Задача 2l
/*
int main()
{
    float dx, xmin, xmax;
    const float eps = 0.000001;

    std::cout << "Enter [xmin, xmax]: ";
    std::cin >> xmin >> xmax;

    std::cout << "Enter dx: ";
    std::cin >> dx;

    std::cout << "\tx\t\ty" << std::endl;

    std::cout.precision(5);
    float f;
    float x = xmin;
    double u, k;
    u = (5 * x) + (4 * x) * (4 * x) * (4 * x);
    k = sqrt(x);

    while (x < xmax) {
        if (fabs(x - 2) < eps)
            std::cout << "\t"
            << x
            << "\t\t Divide on zero"
            << std::endl;
        else {
            f = k+(4*x)+3/sin(9*x+71);

            std::cout << "\t"
                << x
                << "\t\t"
                << f
                << std::endl;
        }
        x += dx;
    }

    return 0;
}*/

//Задача 4e
/*
using namespace std; // используем именное пространство std

int main()
{
    setlocale(LC_ALL, "Rus"); // включаем русский язык
    int x, y;

    cout << "Введите число x : "; cin >> x;

    if (x > 2) {
        y = 2*x - 15;
        cout << "y = x -2 = " << y << endl;
    }
    else {
        if (x == 2) {
            y = 5;
            cout << "y = " << y << endl;
        }
        else {
            y = 3*abs(x-1)-8;
            cout << "y = |x| = " << y << endl;
        }
    }
    system("PAUSE");  
    return 0; 

}*/

//Задача 3e
/*
int main() {

    using namespace std;
    std::ofstream outFile;
    outFile.open("results1.txt");

    float x, c, y, i;

    std::cout << "Enter x:";
    std::cin >> x;
    std::cout << "Enter predel:";
    std::cin >> c;
    i = 1;
    y = 0;

    double sum = 0;

    for (int i = 7; i <= c; i++) {

        if (i % 2 == 0) {
            y = 1 / (x * i);
            sum =sum+ y;
        }
        else
        {
            y =1/( x * i);
            sum = sum - y;
        }
    }
    std::cout << sum << " ";

    std::cout << std::endl;
    outFile << sum << std::endl;

    return 0;

    outFile.close();
}*/

//Задача 3i

int main() {

    using namespace std;
    std::ofstream outFile;
    outFile.open("results2.txt");

    float x, c, y, i;
    int fact(int c);
   
    std::cout << "Enter x:";
    std::cin >> x;
    std::cout << "Enter predel:";
    std::cin >> c;
    int c, i = 1;;
    y = 0;

    double sum = 1;

    for (int i = 1; i <= c; i++) {

        for (i = 1; i <= c; i++) {
            if (i % 2 == 1) {
                y = pow(x, 2 * i) / fact(i * 2);
                sum = sum - y;
            }
            else {
                y = pow(x, 2 * i) / fact(i * 2);
                sum = sum + y;
            }
        }
        std::cout << sum << " ";

        std::cout << std::endl;
        outFile << sum << std::endl;

        return 0;

        int fact(int c) {
            if (c < 0)
                return 0;

            if (c == 0)
                return 1;

            else
                return c * fact(c-1);

        }
    }
    outFile.close();
}