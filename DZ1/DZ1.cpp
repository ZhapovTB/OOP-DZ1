#include <math.h>
#include <iostream>
#include <limits>
float f(float x, int n) {
    float s1=0, s2=1;
    for (int k = 1; k <= n; k++)
    {
        s1 += 1 / k;
        s2 *= (k + x) / (k + 1);

    }
    s1 *= x;
    return s1 + s2;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    float x;
    int n;
    std::cout << "Введите x,n" << std::endl;
    std::cin >> x >> n;
    while (std::cin.fail() || n<0)
    {
        std::cin.clear();
        std::cout << "Введите числа x,n верно!(n не может быть ниже 0)" << std::endl;
        std::cin.ignore(std::numeric_limits < std::streamsize >::max(), '\n');
        std::cin >> x >> n;
    }
   
   
    std::cout <<"Ответ: " << f(x, n) << std::endl;


    
}

