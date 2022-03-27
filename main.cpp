#include <iostream>
#include <fstream>

int main()
{
    int num;
    std::ifstream in1 ("in1.txt");
    std::ifstream in2 ("in2.txt");
    std::ofstream out ("output.txt");
    while (!in1.eof())
    {
        in1 >> num;
        if (num < 0)
        {
            out << num << " ";
        }
    }
    while (!in2.eof())
    {
        in2 >> num;
        if (num > 0)
        {
            out << num << " ";
        }
    }
    in1.close();
    in2.close();
    out.close();
    return 0;
}
