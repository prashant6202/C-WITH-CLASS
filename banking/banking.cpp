#include <iostream>
using namespace std;

class Account {
protected:
    double balance;
    int number_of_deposits_this_month;
    int number_of_withdrawals;
    double annual_interest_rate;
    double monthly_service_charges;

public:
    Account(double balance, double annual_interest_rate)
        : balance(balance), annual_interest_rate(annual_interest_rate) {
        number_of_deposits_this_month = 0;
       number_of_withdrawals = 0;
        monthly_service_charges = 0.0;
    }

    virtual void make_deposit(double amount_of_the_deposit) {
        balance = balance + amount_of_the_deposit;
       number_of_deposits_this_month++;
    }

    virtual void make_withdrawal(double amount_of_the_withdrawal) {
        balance =balance - amount_of_the_withdrawal;
       number_of_withdrawals++;
    }

    virtual void calc_interest() {
        double monthly_interest_rate = annual_interest_rate / 12;
        double monthly_interest = balance * monthly_interest_rate;
        balance =balance+ monthly_interest;
    }

    virtual void monthly_proc() {
        balance = balance - monthly_service_charges;
        calc_interest();
        number_of_deposits_this_month = 0;
        number_of_withdrawals = 0;
        monthly_service_charges = 0.0;
    }
};

class SavingsAccount : public Account {
private:
    string status;

public:
    SavingsAccount(double balance, double annual_interest_rate)
        : Account(balance, annual_interest_rate), status("active") {}

    void make_withdrawal(double amount_of_the_withdrawal) override {
        if (status == "active") {
            Account::make_withdrawal(amount_of_the_withdrawal);
            if (balance < 25) {
                status = "inactive";
            }
        }
    }

    void make_deposit(double amount_of_the_withdrawal) override {
        if (status == "inactive" && balance + amount_of_the_withdrawal >= 25) {
            status = "active";
        }
        Account::make_deposit(amount_of_the_withdrawal);
    }

    void monthly_proc() override {
        if (number_of_withdrawals > 4) {
            monthly_service_charges += (number_of_withdrawals - 4) * 1;
        }
        Account::monthly_proc();
        if (balance < 25) {
            status = "inactive";
        }
    }
};

class CheckingAccount : public Account {
public:
    CheckingAccount(double balance, double annual_interest_rate)
        : Account(balance, annual_interest_rate) {}

    void make_withdrawal(double amount_of_the_withdrawal) override {
        if (balance - amount_of_the_withdrawal < 0) {
            balance =balance - 15;
        }
        Account::make_withdrawal(amount_of_the_withdrawal);
    }

    void monthly_proc() override {
        monthly_service_charges =monthly_service_charges 5 + (number_of_withdrawals * 0.1);
        Account::monthly_proc();
    }
};

int main() {
    SavingsAccount savings(1000, 0.05);
    CheckingAccount checking(500, 0.03);

    return 0;
}
