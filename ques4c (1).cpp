#include <iostream>
using namespace std;
int main() 
{
    char str[50];
    char result[50];
    cout << "Enter a string: ";
    cin.getline(str, 50);
    int i = 0, j = 0;
    while (str[i] != '\0') 
    {
        char ch = str[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result[j] = ch; 
            j++;
        }
        i++;
    }
    result[j] = '\0';
    cout << "String without vowels: " << result << endl;
    return 0;
}
