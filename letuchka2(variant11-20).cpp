#include <iostream>

// Ошибки по стилю кода:
// Правлю первый и последний раз
// 1. Необходимо использовать camelCase либо under_score -> но не namefunc everywhere -> nameFunc
// 2. Необходимо использовать const там, где это возможно
// 3. Добавляйте в .gitignore файлы, которые не должны попадать в репозиторий к примеру файлы сборки
// 4. Необходимо использовать пространства имен
// 5. cmake-build-debug - не должен попадать в репозиторий
// 6. Необходимо использовать assert() для тестирования

// Ошибки по логике:
// Можем собраться и подумать
// yap - название функции не соответствует ее действию -> правильно getIntLength
// Нужна ли нам эта функция вообще
// Максимальное int число 2147483647 -> 10 символов, следовательно мы можем выделить 11 + 3 символов
// 10 для числа 1 для знака два для 0x и один для \0
// Зато сложность нашего алгоритма будет O(n) где n - длина числа
// Мы же проходим по числу дважды, следовательно сложность O(2n), что конечно в глобальном смысле роли не играет
// Но все же
// Необходимо добавить в .gitignore файлы сборки
// Необходимо написать тесты используя assert()

// хау ту юз ассерт ?
// #include <cassert>
// assert(1 == 2);

/// название для функции не очень подходящее
/// лучше было бы написать int count_digits(int num)
int yap(int num) {
    if (num == 0) {
        return 1;
    }
    int result = 0;
    while (num != 0) {
        result += 1;
        num /= 10;
    }
    return result;
}

/// название для функции не очень подходящее
/// лучше было бы написать char* int_to_string(int num)
char *qwe(int num) {
    // ost ? neg ? - не очень подходящие названия
    int ost;
    bool neg;
    if (num < 0) {
        ost = 2;
        neg = true;
        num = -num;
    } else {
        ost = 1;
        neg = false;
    }
    int total_lenght = 3;
    if (neg) {
        total_lenght += 1;
    }
    total_lenght += yap(num);
    char *result = new char[total_lenght];
    for (int index = total_lenght - 2; index > ost; --index) {
        /// asd - не очень подходящее название
        ///zxc - тоже
        /// jkl - тоже
        /// названия переменных должны быть осмысленными
        int asd = num % 10;
        char symbol = asd + '0';
        result[index] = symbol;
    }
    if (neg) {
        result[0] = '-';
        result[1] = '0';
        result[2] = 'd';
    } else {
        result[0] = '0';
        result[1] = 'd';
    }
    result[total_lenght - 1] = '\0';

    return result;
}

int main() {
    using namespace std;
    int n;
    std::cin >> n;
    std::cout << qwe(n) << std::endl;
}