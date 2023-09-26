1.
#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите второе число: ";
    cin >> num2;

    cout << "Введите третье число: ";
    cin >> num3;
    
    int product = num1 * num2 * num3;
    std::cout << "Произведение: " << product << endl;

    return 0;
}

2.
#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Введите ваш возраст: ";
    std::cin >> age;
    
    std::string result = (age >= 18) ? "Совершеннолетний" : "Несовершеннолетний";
    cout << "Вы " << result << std::endl;

    return 0;
}

3.
#include <iostream>
using namespace std;

int main() {
    int num, first_max, second_max;

    cout << "Введите первое число: ";
    cin >> first_max;
    cout << "Введите второе число: ";
    cin >> second_max;

    if (second_max > first_max) {
        swap(first_max, second_max);
    }

    while (true) {
        cout << "Введите следующее число (0 = завершение): ";
        cin >> num;

        if (num == 0) {
            break;
        }

        if (num > first_max) {
            second_max = first_max;
            first_max = num;
        } else if (num > second_max && num != first_max) {
            second_max = num;
        }
    }

    cout << "Второе по величине число: " << second_max << endl;

    return 0;
}
4.
#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    bool foundCube = false;

    cout << "Введите слова (введите 'СТОП' для завершения ввода):\n";

    while (true) {
        cin >> word;

        if (word == "СТОП") {
            break;
        }

        if (word == "Куб") {
            foundCube = true;
        }
    }

    if (foundCube) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
5.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int a, b;
    cin >> a >> b;

    if (a >= 1 && a <= n && b >= 1 && b <= n) {
        
        swap(arr[a - 1], arr[b - 1]);

        for (int i = 0; i < n; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Индексы выходят за границы массива." << endl;
    }

    return 0;
}

6.
#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Введите количество строк: ";
    cin >> n;
    cout << "Введите количество столбцов: ";
    cin >> m;

    int original[n][m], rotated[m][n];

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> original[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            rotated[i][j] = original[j][m - 1 - i];
        }
    }

    cout << "Повернутый массив:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
  
