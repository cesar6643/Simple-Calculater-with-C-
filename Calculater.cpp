#include <iostream>
using namespace std;

void displayMenu() {
    cout << "=======================" << endl;
    cout << "     آلة حاسبة بسيطة   " << endl;
    cout << "=======================" << endl;
    cout << "اختر العملية التي تريد تنفيذها:" << endl;
    cout << "1. الجمع (+)" << endl;
    cout << "2. الطرح (-)" << endl;
    cout << "3. الضرب (*)" << endl;
    cout << "4. القسمة (/)" << endl;
    cout << "5. الخروج" << endl;
    cout << "=======================" << endl;
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        displayMenu();
        cout << "أدخل اختيارك: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "أدخل الرقم الأول: ";
            cin >> num1;
            cout << "أدخل الرقم الثاني: ";
            cin >> num2;
        }

        switch (choice) {
            case 1:  // الجمع
                result = num1 + num2;
                cout << "النتيجة: " << result << endl;
                break;

            case 2:  // الطرح
                result = num1 - num2;
                cout << "النتيجة: " << result << endl;
                break;

            case 3:  // الضرب
                result = num1 * num2;
                cout << "النتيجة: " << result << endl;
                break;

            case 4:  // القسمة
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "النتيجة: " << result << endl;
                } else {
                    cout << "خطأ: لا يمكن القسمة على صفر!" << endl;
                }
                break;

            case 5:  // الخروج
                cout << "تم إنهاء البرنامج. وداعاً!" << endl;
                break;

            default:  // اختيار غير صحيح
                cout << "اختيار غير صحيح. حاول مرة أخرى." << endl;
        }

        cout << "-----------------------" << endl;
    } while (choice != 5);

    return 0;
}
