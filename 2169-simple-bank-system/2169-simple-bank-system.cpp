#include <vector>
using namespace std;

class Bank {
public:
    vector<long long> bal;  // store balances of all accounts

    Bank(vector<long long>& balance) {
        bal = balance;
    }

    bool transfer(int account1, int account2, long long money) {
        // check if account numbers are valid and if account1 has enough balance
        if (account1 < 1 || account1 > bal.size() ||
            account2 < 1 || account2 > bal.size() ||
            bal[account1 - 1] < money)
            return false;

        // perform transfer
        bal[account1 - 1] -= money;
        bal[account2 - 1] += money;
        return true;
    }

    bool deposit(int account, long long money) {
        // check if account number is valid
        if (account < 1 || account > bal.size())
            return false;

        bal[account - 1] += money;
        return true;
    }

    bool withdraw(int account, long long money) {
        // check if account number is valid and has enough balance
        if (account < 1 || account > bal.size() || bal[account - 1] < money)
            return false;

        bal[account - 1] -= money;
        return true;
    }
};
