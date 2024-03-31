#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <vector>


int main() {


    using namespace std;
    setlocale(LC_ALL, "RUS");

    float kilometrs;
    float temp;
    float secs = 60;
    float tempResul = 0;
    float tempResulsec = 0;

    cout << "Привет, Сэм! Сколько километров ты сегодня пробежал? "; cin >> kilometrs;
    for (float counter = 1; counter <= kilometrs; counter++) {
        cout << "Какой у тебя был темп на километре " << counter << " ?"; cin >> temp;
        tempResul += temp;
        cout << tempResul << "\n";
        if (counter == kilometrs) {
            int mediumTempo = tempResul / kilometrs;
            int minutes = mediumTempo / secs;
            float seconds = mediumTempo % 60;

            cout << "Вывод:\n" << "Твой средний темп за тренировку: " << minutes << " минуты и " << ceil(seconds) << " секунд";
            break;
        }
    }


}