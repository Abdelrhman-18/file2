#include <iostream>
using namespace std;

class Car {
private:
    string brand, model;

public:

    Car(string brand, string model) {
        this->brand = brand;
        this->model = model;
    }


    ~Car() {
        cout << "Car object destroyed" << endl;
    }


    void display() {
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }
};

class Animal {
public:

    Animal() {
        cout << "I'm in Animal Object!!" << endl;
    }


    virtual ~Animal() {
        cout << "end of Animal Object!!" << endl;
    }


    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:

    Dog() {
        cout << "I'm in Dog Object!!" << endl;
    }


    ~Dog() {
        cout << "end of Dog Object!!" << endl;
    }


    void speak() override {
        cout << "Dog barks" << endl;
    }
};

class BankAccount {
private:
    string accountNumber;
    double balance;

public:

    void setAccountNumber(string accNum) {
        accountNumber = accNum;
    }


    void setBalance(double bal) {
        balance = bal;
    }


    string getAccountNumber() {
        return accountNumber;
    }


    double getBalance() {
        return balance;
    }
};

class Circle {
private:
    const double pi = 3.1415;
    double radius;

public:

    Circle(double r) : radius(r) {}


    double calculateArea() {
        return this->pi * radius * radius;
    }
};

class Counter {
private:
    static int count;

public:

    void increment() {
        count++;
    }


    int getCount() {
        return count;
    }
};


int Counter::count = 0;

int main() {
    // Car object
    Car car1("Toyota", "Corolla");
    car1.display();

    // Dog object
    Dog dog1;
    dog1.speak();

    // BankAccount object
    BankAccount account;
    account.setAccountNumber("1234567890");
    account.setBalance(5000);
    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Balance: " << account.getBalance() << endl;

    // Circle object
    Circle circle(5);
    cout << "Area of the circle: " << circle.calculateArea() << endl;

    // Counter objects
    Counter counter1, counter2;
    counter1.increment();
    counter2.increment();
    cout << "Current count: " << counter1.getCount() << endl;

    return 0;
}
