#include <iostream>
using namespace std;

class Bank {
protected:
    float balance;

public:
    Bank(float initialBalance) : balance(initialBalance) {}
    virtual float calculateInterest() = 0;
    void deposit(float amount)
    {
        balance += amount;
    }
    float getBalance() const
    {
        return balance;
    }
};

class BankB; // Forward declaration

class BankA : public Bank {
private:
    float interestRate;

public:
    BankA(float initialBalance, float rate) : Bank(initialBalance), interestRate(rate) {}
    float calculateInterest() override
    {
        return balance * (interestRate / 100);
    }

    void transferFrom(BankB& bankB); // Forward declaration
};

class BankB : public Bank {
private:
    float interestRate;

public:
    BankB(float initialBalance, float rate) : Bank(initialBalance), interestRate(rate) {}
    float calculateInterest() override
    {
        return balance * (interestRate / 100);
    }
    void withdraw(float amount)
    {
        balance -= amount;
    }

    friend void BankA::transferFrom(BankB& bankB); // Allowing BankA to access BankB's private members
};

void BankA::transferFrom(BankB& bankB)
{
    float transferAmount = bankB.getBalance();
    deposit(transferAmount);
    bankB.withdraw(transferAmount);
}

int main()
{
    float salary = 10000;
    float bankBInterestRate = 0.05;
    BankA bankA(salary, 0.06);
    BankB bankB(salary, bankBInterestRate);
    bankA.transferFrom(bankB);
    bankA.deposit(bankA.calculateInterest());
    bankB.deposit(bankB.calculateInterest());
    cout << "BankA - Final balance: " << bankA.getBalance() << endl;
    cout << "BankB - Final balance: " << bankB.getBalance() << endl;
    return 0;
}
