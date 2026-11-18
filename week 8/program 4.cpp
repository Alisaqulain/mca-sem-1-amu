//week 8 program 4
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string sentence, word, temp;
    int count = 0;

    cout << "Enter a line of text: ";
    getline(cin, sentence);

    cout << "Enter the word to count: ";
    cin >> word;

    stringstream ss(sentence);

    while (ss >> temp)
    {
        if (temp == word)
            count++;
    }

    cout << "The word \"" << word << "\" occurs "
         << count << " time(s)." << endl;

    return 0;
}

