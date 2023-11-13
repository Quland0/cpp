задание 1
#include <iostream>
#include <string>

using namespace std;

int countOccurrence(const string& text, const string& pattern) {
    int count = 0;
    size_t pos = 0;

    while ((pos = text.find(pattern, pos)) != string::npos) {
        count++;
        pos += pattern.length();
    }

    return count;
}

int main() {
    string text;
    cout << "Введите текст: ";
    getline(cin, text);

    string pattern = "=";

    int occurrenceCount = countOccurrence(text, pattern);

    cout << "Символ '=' встречается " << occurrenceCount << " раз(а) в тексте." << endl;

    return 0;
}

задание 2

#include <iostream>
#include <string>
using namespace std;


int main() {
    string word1, word2,word3;
    cout<<"Введите первое слово ";
    cin>>word1;
        cout<<"Введите второе слово: ";
    cin>>word2;
        cout<<"Введите третее слово: ";
    cin>>word3;
    
    string combinedWords = word1 + " " + word2 + " " + word3;

    cout << "Объединенные слова: " << combinedWords << std::endl;

    return 0;
}
задание 3

#include <iostream>
#include <string>
using namespace std;

int main() {
   string text, result;
   cout<<"Введите текст: ";
   cin>>text;

    for (char c : text) {
        if (isdigit(c) || c == '+' || c == '-' || c == '*' || c == '/') {
            result += c;
        }
    }

    cout << "Исходный текст: " << text <<:endl;
    cout << "Результат: " << result <::endl;

    return 0;
}

задание 4 
    #include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin, text); 

    bool foundFirst = false; 
    int firstIndex = -1;
    int secondIndex = -1; 

 
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == '=') {
            if (!foundFirst) {
                foundFirst = true;
                firstIndex = i;
            } else {
                secondIndex = i;
                break;
            }
        }
    }

    if (firstIndex != -1 && secondIndex != -1) {
        for (int i = firstIndex + 1; i < secondIndex; i++) {
            cout << text[i];
        }
    }

    cout << endl;

    return 0;
}
