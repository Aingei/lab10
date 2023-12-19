#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;
int main()
{
        int count = 0; 
        double mean,std,sum,sum_of_square;
        string textline;
        ifstream source("score.txt");
        while (getline(source,textline))
        {
                sum += atof(textline.c_str());
                sum_of_square += pow((atof(textline.c_str())),2);
                count++;
        }
        mean = sum/count;
        std = sqrt(sum_of_square/count-pow(mean,2));
        cout << "Number of data = " << count << "\n";
        cout << setprecision(3);
        cout << "Mean = " << mean << "\n";
        cout << "Standard deviation = " << std;
}