#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

/* Problem 1.2
int main() {
    int sum1 = 0;
    for (int i = 1; i <= 100; i++) {
        sum1 += i;
    }
    cout << "Sum: " << sum1 << endl;

    return 0;
} */

/* Problem 1.2
int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum2 = 0, i = 1;
    while (i <= n) {
        sum2 += i;
        i++;
    }
    cout << "Sum: " << sum2 << endl;
} */

/* Problem 2.1
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    cout << "First 10 prime numbers: ";

    int num = 2, count = 0;

    for (int i = 0; count < 10; i++) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }

    cout << endl;
    return 0;
} */

/* Problem 2.2
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "First " << n << " prime numbers: ";

    int num = 2, count = 0;

    while (count < n) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }

    cout << endl;
    return 0;
} */

/* Problem 3
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Enter a positive integer." << endl;
        return 1;
    }

    cout << "Collatz sequence: " << n << " ";

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        cout << n << " ";
    }

    cout << endl;
    return 0;
} */

/*
int main() {
    int num, count = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 0) {
        cout << "Enter a positive integer." << endl;
        return 1;
    }

    int temp = num;

    while (num > 0) {
        num /= 10;
        count++;
    }

    cout << count<< endl;

    return 0;
} */

/* Problem 5
int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 0) {
        cout << "Enter a positive integer." << endl;
        return 1;
    }

    cout << "Digits from right to left: ";

    while (num > 0) {
        int digit = num % 10;
        cout << digit << " ";
        num /= 10;
    }

    cout << endl;
    return 0;
} */

/* Problem 6
int main() {
    int a, b;

    cout << "Enter two positive integers: ";
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "Enter positive integers only." << endl;
        return 1;
    }

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "The GCD is: " << a << endl;

    return 0;
} */

/* Problem 7
int main() {
    int sum = 0, count = 0, num;

    while (sum <= 100) {
        cout << "Enter a number: ";
        cin >> num;

        sum += num;
        count++;

        if (sum > 100) {
            break;
        }
    }

    cout << "Sum exceeded 100! Total sum: " << sum << endl;
    cout << "Total numbers entered: " << count << endl;

    return 0;
} */

/* Problem 8
int main() {
    int balance = 500, withdrawal;

    cout << "Your balance: $" << balance << endl;

    while (balance > 0) {
        cout << "Enter withdrawal amount: ";
        cin >> withdrawal;

        if (withdrawal == 0) {
            cout << "Transaction canceled. Final balance: $" << balance << endl;
            break;
        }

        if (withdrawal > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            balance -= withdrawal;
            cout << "Remaining balance: $" << balance << endl;
        }
    }

    if (balance == 0) {
        cout << "Your balance is zero. No more withdrawals possible." << endl;
    }

    return 0;
} */

/* Problem 9
int main() {
    char response;

    do {
        cout << "Enter 'Y' or 'N': ";
        cin >> response;

        response = toupper(response);

    } while (response != 'Y' && response != 'N');

    cout << "You entered a valid response: " << response << endl;

    return 0;
} */

/* Problem 10
int main() {
    int choice;
    double balance = 1000.00, amount;

    do {
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your current balance: $" << balance << endl;
                break;
            case 2:
                cout << "Enter deposit amount: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful! New balance: $" << balance << endl;
                } else {
                    cout << "Invalid deposit amount!" << endl;
                }
                break;
            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal successful! New balance: $" << balance << endl;
                } else if (amount > balance) {
                    cout << "Insufficient funds!" << endl;
                } else {
                    cout << "Invalid withdrawal amount!" << endl;
                }
                break;
            case 4:
                cout << "Exiting ATM. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice! Please select a valid option." << endl;
        }
    } while (choice != 4);

    return 0;
} */

/* Problem 11
int main() {
    int choice;
    double num1, num2, result;

    do {
        cout << "\nCalculator Menu:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error! Division by zero is not allowed." << endl;
                }
                break;
            case 5:
                cout << "Exiting Calculator. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice! Please select a valid option." << endl;
        }
    } while (choice != 5);

    return 0;
} */

/* Problem 12
int main() {
    string correctPassword = "12345";
    string inputPassword;
    int attempts = 0, maxAttempts = 3;

    while (attempts < maxAttempts) {
        cout << "Enter password: ";
        cin >> inputPassword;

        if (inputPassword == correctPassword) {
            cout << "Access granted!" << endl;
            return 0;
        } else {
            attempts++;
            if (attempts < maxAttempts) {
                cout << "Incorrect password! Attempts left: " << (maxAttempts - attempts) << endl;
            }
        }
    }

    cout << "Access denied! Too many failed attempts." << endl;
    return 1;
} */

/* Problem 13
int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;

    cout << "Guess the number (between 1 and 100): ";

    while (true) {
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too high! Try again: ";
        } else if (guess < secretNumber) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Congratulations! You guessed the correct number: " << secretNumber << endl;
            break;
        }
    }

    return 0;
} */














