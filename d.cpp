/*Write a complete program that prompts the user for the radius of a sphere, and calculates and prints
the volume of that sphere. Use an inline function sphereVolume that returns the result of the following
expression: (4.0 / 3.0 * 3.14159 * pow(radius, 3)). */
//#include <iostream>using namespace std;inline double sphereVolume(double radius){return ((4.0 / 3.0) * 3.14159 * pow(radius, 3));}int main(){double rad;cout << "Please input the radius of the sphere: ";cin >> rad;cout << "The volume of the sphere is " << sphereVolume(rad) <<endl;system("pause");return 0;}
#include <iostream>
#include<math.h>
using namespace std;
inline double Volume(double radius)
{
    return ((4.0 / 3.0) * 3.14159 * pow(radius, 3));
}
int main()
{
    double rad;
    cout << "Please input the radius of the sphere: ";
    cin >> rad;
    cout << "The volume of the sphere is " <<Volume(rad) <<endl;
    return 0;
}

