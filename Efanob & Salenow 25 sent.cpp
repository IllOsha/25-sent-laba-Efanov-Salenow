//laba №25 сентября
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//#include <cmath>
//#include <iomanip>
//#define stop do{ } while(0)
//#include <windows.h>
//using namespace std;
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int A, B;
//	cout << "введите число А в диапозоне от [10,1000]" << endl;
//	cin >> A;
//	cout << "введите число B в диапозоне от [10,1000]" << endl;
//	cin >> B;
//	if (A < 10 || A>1000 || B < 10 || B>1000) {
//		cout << "выходит из условий" << endl;
//	}
//	int summa_A = 0;
//	for (int i = 1; i <= A; i++) {
//		if (A % i == 0) {
//			summa_A += i;
//		}
//	}
//	int summa_B = 0;
//	for (int i = 1; i <= B; i++) {
//		if (B % i == 0) {
//			summa_B += i;
//		}
//	}
//	cout << "сумма делителей A = " << summa_A << endl;
//	cout << "сумма делителей B = " << summa_B << endl;
//	cout << " сумма делителей А + B = " << summa_A + summa_B << endl;
//
//
//
//
//	return 0;
//}
// 
// 
// №2
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//#include <cmath>
//#include <iomanip>
//#define stop do{ } while(0)
//#include <windows.h>
//using namespace std;
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int A, B;
//	cout << "введите число А в диапозоне от [10,1000]" << endl;
//	cin >> A;
//	cout << "введите число B в диапозоне от [10,1000]" << endl;
//	cin >> B;
//	if (A < 10 || A>1000 || B < 10 || B>1000) {
//		cout << "выходит из условий" << endl;
//	}
//	int kol_del_A = 0;
//	for (int i = 1; i <= A; i++) {
//		if (A % i == 0) {
//			kol_del_A++;
//		}
//	}
//	int kol_del_B = 0;
//	for (int i = 1; i <= B; i++) {
//		if (B % i == 0) {
//			kol_del_B++;
//		}
//	}
//	cout << "сумма делителей A = " << kol_del_A << endl;
//	cout << "сумма делителей B = " << kol_del_B << endl;
//	cout << " сумма делителей А + B = " << kol_del_A * kol_del_B << endl;
//
//
//
//
//	return 0;
//}

//№3
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//#include <cmath>
//#include <iomanip>
//#define stop do{ } while(0)
//#include <windows.h>
//using namespace std;
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int A, B;
//	cout << "введите число А в диапозоне от [10,1000]" << endl;
//	cin >> A;
//	cout << "введите число B в диапозоне от [10,1000]" << endl;
//	cin >> B;
//	if (A < 10 || A>1000 || B < 10 || B>1000) {
//		cout << "выходит из условий" << endl;
//	}
//	int sum_del_A = 0;
//	for (int i = 1; i <= A; i++) {
//		if (A % i == 0) {
//			if (i % 2 != 0) {
//				sum_del_A += i;
//			}
//		}
//	}
//	int prod_del_B = 0;
//	for (int i = 1; i <= B; i++) {
//		if (B % i == 0) {
//			if (i % 2 == 0) {
//				prod_del_B += i;
//
//			}
//
//		}
//	}
//	cout << "сумма делителей A = " << sum_del_A << endl;
//	cout << "сумма делителей B = " << prod_del_B << endl;
//	cout << " сумма делителей А + B = " << sum_del_A + prod_del_B << endl;
//
//
//
//
//	return 0;
//}
//№4
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//#include <cmath>
//#include <iomanip>
//#define stop do{ } while(0)
//#include <windows.h>
//using namespace std;
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int A, B;
//	cout << "введите число А в диапозоне от [10,1000]" << endl;
//	cin >> A;
//	cout << "введите число B в диапозоне от [10,1000]" << endl;
//	cin >> B;
//	if (A < 10 || A>1000 || B < 10 || B>1000) {
//		cout << "выходит из условий" << endl;
//	}
//	int big_del = 0;
//	for (int i = 1; i <= A && i <= B; i++) {
//		if (A % i == 0 && B % i == 0) {
//			big_del = i;
//		}
//		if (big_del == 1)
//			cout << "числа простые вместе" << endl;
//
//	}
//	cout << "наибольший общий делитель = " << big_del << endl;
//
//
//
//
//	return 0;
//}


//задание 2
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//#include <cmath>
//#include <iomanip>
//#define stop do{ } while(0)
//#include <windows.h>
//using namespace std;
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int  digit, choice, number, max_digit = 0, min_digit = 9, chetchik = 0, sum = 0, reservednum = 0, product = 0;
//	char Continue = 'Y';
//
//	do {
//		cout << "введите число [1000, 9999.... ну типо много девяток] ";
//		cin >> number;
//		if (number < 1000 || number > 999999999) {
//			cout << "условия для кого написанны?" << endl;
//		}
//		while (number > 1000 || number < 999999999 && Continue == 'Y') {
//			cout << " меню для любителей остренького" << endl;
//			cout << "введите пж циферки 1 = " << endl;
//			cout << "ввести произведение цифр 2 = " << endl;
//			cout << "ввести количество четных цифр 3 = " << endl;
//			cout << "ввести количество нечетных цифр 4 = " << endl;
//			cout << "введите наибольшую цифру 5 = " << endl;
//			cout << "ввести наименьшую цифру 6 = " << endl;
//			cout << "bye bye" << endl;
//			cout << "номер операции" << endl;
//			cin >> choice;
//
//			switch (choice) {
//			case 1:
//				cout << "Цифры числа: ";
//				digit = number % 10;
//				while (number > 0) {
//					cout << digit << ", ";
//					number /= 10;
//					digit = number % 10;
//				}
//				cout << endl;
//				break;
//			case 2:
//				while (number > 0) {
//					number /= 10;
//					chetchik++;
//				}
//				cout << "кол-во цифр в числе" << chetchik << endl;
//				break;
//			case 3:
//				digit = number % 10;
//				while (number > 0) {
//					if (digit > max_digit) {
//						max_digit = digit;
//					}
//					if (digit < min_digit) {
//						min_digit = digit;
//					}
//					number /= 10;
//					digit = number % 10;
//				}
//				cout << "наибольшая цифра = " << max_digit << endl;
//				cout << "наименьшая цифра = " << min_digit << endl;
//				break;
//			case 4:
//				while (number > 0) {
//					digit = number % 10;
//					sum += digit;
//					number /= 10;
//				}
//				cout << "сумма цифр = " << sum << endl;
//				break;
//			case 5:
//				while (number > 0) {
//					digit = number % 10;
//					if (digit % 2 != 0) {
//						product = digit;
//					}
//				}
//				number /= 10;
//				cout << "произведение нечетных цифр = " << product << endl;
//			case 6:
//				while (number > 0) {
//					digit = number % 10;
//					reservednum = reservednum * 10 + digit % 10;
//					number /= 10;
//				}
//				cout << "перевернутое число " << reservednum << endl;
//				break;
//
//
//			default:
//				cout << "невернный выбор попробуй еще раз" << endl;
//			}
//			cout << "хотите попробовать еще раз?" << endl;
//			cin >> Continue;
//		}
//	}
//	while (Continue == 'Y' || Continue == 'N');
//	
//
//	cout << "я устал я ухожу" << endl;
//
//	return 0;
//}



//задание 2
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#define stop do{ } while(0)
#include <windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int number, digit, choice, chetchik = 0, sum = 0, product = 1, reversedNumber = 0, minDigit = 9, maxDigit = 0;
	char continueChoice;

	do {
		cout << "Введите число в диапазоне от 1000 до 9999.. типо много девяток: ";
		cin >> number;
		if (number < 1000 || number > 999999999) {
			cout << " условия кому написали?" << endl;
		}
	} while (number < 1000 || number > 999999999);

	do {
		cout << " меню для любителей остренького" << endl;
		cout << "введите пж циферки 1 = " << endl;
		cout << "ввести произведение цифр 2 = " << endl;
		cout << "ввести количество четных цифр 3 = " << endl;
		cout << "ввести количество нечетных цифр 4 = " << endl;
		cout << "введите наибольшую цифру 5 = " << endl;
		cout << "ввести наименьшую цифру 6 = " << endl;
		cout << "bye bye" << endl;
		cout << "номер операции" << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Цифры числа: ";
			digit = number % 10;
			while (number > 0) {
				cout << digit << ", ";
				number /= 10;
				digit = number % 10;
			}
			cout << endl;
			break;
		case 2:
			while (number > 0) {
				number /= 10;
				chetchik++;
			}
			cout << "Количество цифр в числе: " << chetchik << endl;
			break;
		case 3:
			digit = number % 10;
			while (number > 0) {
				if (digit > maxDigit) {
					maxDigit = digit;
				}
				if (digit < minDigit) {
					minDigit = digit;
				}
				number /= 10;
				digit = number % 10;
			}
			cout << "Наибольшая цифра: " << maxDigit << endl;
			cout << "Наименьшая цифра: " << minDigit << endl;
			break;
		case 4:
			while (number > 0) {
				digit = number % 10;
				sum += digit;
				number /= 10;
			}
			cout << "Сумма цифр числа: " << sum << endl;
			break;
		case 5:
			while (number > 0) {
				digit = number % 10;
				if (digit % 2 != 0) {
					product = digit;
				}
				number /= 10;
			}
			cout << "Произведение нечетных цифр числа: " << product << endl;
			break;
		case 6:

			while (number > 0) {
				digit = number % 10;
				reversedNumber = reversedNumber * 10 + digit % 10;
				number /= 10;
			}
			cout << "Перевернутое число: " << reversedNumber << endl;
			break;
		default:
			cout << "Неверный выбор. Попробуйте еще раз.\n";
		}

		cout << "Хотите продолжить [Y|N]? ";
		cin >> continueChoice;
	} while (continueChoice == 'Y' || continueChoice == 'y');

	cout << "Программа завершена.\n";

	return 0;
}




//задание 3
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//#include <cmath>
//#include <iomanip>
//#define stop do{ } while(0)
//#include <windows.h>
//
//using namespace std;
//int n;
//int fact(int n) {
//    if (n < 0) {
//        return 0;
//    }
//    if (n == 0 || n == 1) {
//        return 1;
//    }
//    else {
//        return n * fact(n - 1);
//    }
//}
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    char cont;
//    do {
//        int number, option, x, cosinus, sinus;
//        double res = 0;
//        cout << "выбери число в диапозоне [2 ; 20]\n";
//        cin >> number;
//        if (number <= 2 || number >= 20) {
//            cout << "условия для кого!!" << endl;
//            break;
//        }
//
//        cout << "выбирай опцию браток" << endl;
//        cout << "[1]. Введите значение переменной «x» для оценки в функции и количество членов «n» для ряда МакЛорена." << endl;
//        cout << "[2]. Рассчитать Ряд Маклорена для показательной функции (e^x)" << endl;
//        cout << "[3]. Рассчитать Ряд Маклорена для функции натурального логарифма (ln (1 + x))" << endl;
//        cout << "[4]. Рассчитать Ряд Маклорена для синусоидальной функции (sin (x))" << endl;
//        cout << "[5]. Рассчитать Ряд Маклорена для функции косинуса (cos (x))" << endl;
//        cout << "[6]. Рассчитать Ряд Маклорена для рациональной функции" << endl;
//        cout << "опция бам бам" << endl;
//        cin >> option;
//        cout << "enter the x" << endl;
//        cin >> x;
//        switch (option) {
//        case 2:
//            for (int i = 1; i <= number; i++) {
//                res += pow(x, i) / fact(i);
//            }
//            cout << res << endl;
//        case 3:
//            for (int i = 1; i <= number; i++) {
//                if (i % 2 == 0) {
//                    res -= pow(x, i) / i;
//                }
//                else {
//                    res += pow(x, i) / i;
//                }
//            }
//            cout << res << endl;
//        case 4:
//            sinus = 1;
//            for (int i = 1; i <= number; i + 2) {
//                if (sinus % 2 == 1) {
//                    res += pow(x, i) / fact(i);
//                }
//                else {
//                    res -= pow(x, i) / fact(i);
//                }
//                sinus += 1;
//            }
//            cout << res << endl;
//        case 5:
//            cosinus = 0;
//            for (int i = 0; i <= number; i + 2) {
//                if (cosinus % 2 == 0) {
//                    res += pow(x, i) / fact(i);
//                }
//                else {
//                    res -= pow(x, i) / fact(i);
//                }
//                cosinus += 1;
//            }
//            cout << res << endl;
//        case 6:
//            if (x < 1 && x >(-1)) {
//                for (int i = 1; i <= number; i++) {
//                    res += i * pow(x, i - 1);
//                }
//            }
//            else {
//                cout << " выбери х 1 и -1" << endl;
//                break;
//            }
//        }
//        cout << "еще раз? y/n?" << endl;
//        cin >> cont;
//    } while (cont == 'y' || cont == 'Y');
//}