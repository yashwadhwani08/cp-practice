#include <iostream>
using namespace std;

int main()
{
    string input, output = "";
    cin >> input;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == 'A' || input[i] == 'O' || input[i] == 'Y' || input[i] == 'E' || input[i] == 'U' || input[i] == 'I' || input[i] == 'a' || input[i] == 'o' || input[i] == 'y' || input[i] == 'e' || input[i] == 'u' || input[i] == 'i')
            continue;

        else if (97 <= int(input[i]) && int(input[i]) <= 122)
        {
            output.push_back('.');
            output.push_back(input[i]);
        }
        else if (65 <= int(input[i]) && int(input[i]) <= 90)
        {
            output[output.length()] = '.';
            output.push_back('.');
            char s1;
            s1 = (char)(input[i] + 32);
            output.push_back(s1);
        }
    }
    cout << output << endl;
    return 0;
}