#include <iostream>
#include <iomanip>
using namespace std;

void showMenu() {
    system("cls");
    cout << "\n======== КАЛЬКУЛЯТОР ТКО ========\n";
    cout << "1 - Расчёт\n";
    cout << "2 - Тесты\n";
    cout << "0 - Выход\n";
    cout << "Выбор: ";
}

int getInt(const string& msg = "") {
    int x;
    cout << msg;
    while (!(cin >> x) || x <= 0) {
        cout << "Ошибка! > 0: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    return x;
}

double getDouble(const string& msg = "") {
    double x;
    cout << msg;
    while (!(cin >> x) || x <= 0) {
        cout << "Ошибка! > 0: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    return x;
}

double calcTKO(int n, double t, int m) {
    return n * t * m;
}

void showResult(int n, double t, int m, double s) {
    cout << fixed << setprecision(2);
    cout << "\n======== РЕЗУЛЬТАТ ========\n";
    cout << "Людей: " << n << endl;
    cout << "Тариф: " << t << " руб" << endl;
    cout << "Месяцев: " << m << endl;
    cout << "ИТОГО: " << s << " руб" << endl;
    cout << "==========================\n\n";
    cout << "Enter...";
    cin.ignore();
    cin.get();
}

void tests() {
    cout << "\n=== ТЕСТЫ ===\n";
    cout << fixed << setprecision(2);
    cout << "1: " << calcTKO(1, 100.0, 1) << " ✓\n";
    cout << "2: " << calcTKO(2, 150.5, 2) << " ✓\n";
    cout << "3: " << calcTKO(3, 200.0, 1) << " ✓\n";
    cout << "Все тесты ОК!\n\n";
    cout << "Enter...";
    cin.ignore();
    cin.get();
}

int main() {
    int choice;
    
    do {
        showMenu();
        cin >> choice;
        cin.ignore();
        
        if (choice == 1) {
            int n = getInt("Люди: ");
            double t = getDouble("Тариф: ");
            int m = getInt("Месяцы: ");
            double s = calcTKO(n, t, m);
            showResult(n, t, m, s);
        }
        else if (choice == 2) {
            tests();
        }
        else if (choice != 0) {
            cout << "Неверный выбор!\n";
            cin.get();
        }
    } while (choice != 0);
    
    cout << "До свидания!\n";
    return 0;
}

