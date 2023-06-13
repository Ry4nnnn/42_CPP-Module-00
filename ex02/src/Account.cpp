#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_displayTimestamp();
	std::cout << "index:" << BLUE << _accountIndex << RESET << ";";
	std::cout << "amount:" << BLUE << _amount << RESET << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << BLUE << _accountIndex << RESET << ";";
	std::cout << "amount:" << BLUE << _amount << RESET << ";";
	std::cout << "closed" << std::endl;
	_totalAmount -= _amount;
	_nbAccounts--;
}

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return _totalAmount;
}

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << BLUE << _nbAccounts << RESET<< ";";
	std::cout << "total:" << BLUE << _totalAmount << RESET << ";";
	std::cout << "deposits:" << BLUE << _totalNbDeposits << RESET << ";";
	std::cout << "withdrawals:" << BLUE << _totalNbWithdrawals << RESET << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << BLUE << _accountIndex << RESET << ";";
	std::cout << "p_amount:" << BLUE << _amount << RESET << ";";
	std::cout << "deposits:" << BLUE << deposit << RESET << ";";
	_amount += deposit;
	std::cout << "amount:" << BLUE << _amount << RESET << ";";
	_nbDeposits++;
	std::cout << "nb_deposits:" << BLUE << _nbDeposits << RESET << std::endl;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << BLUE << _accountIndex << RESET << ";";
	std::cout << "p_amount:" << BLUE << _amount << RESET << ";";
	std::cout << "withdrawal:";
	_amount -= withdrawal;
	if (!checkAmount()) {
		_amount += withdrawal;
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout << withdrawal << ";";
	std::cout << "amount:" << _amount << ';';
	_nbWithdrawals++;
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}

int	Account::checkAmount(void) const {
	return (_amount >= 0);
}

void	Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << BLUE << _accountIndex << RESET << ';';
	std::cout << "amount:" << BLUE << _amount << RESET << ';';
	std::cout << "deposits:" << BLUE << _nbDeposits << RESET<< ';';
	std::cout << "withdrawals:" << BLUE << _nbWithdrawals << RESET << std::endl;
}

void	Account::_displayTimestamp(void) {
		std::time_t rawtime;
		char timestamp[16];

		std::time(&rawtime);
		std::strftime(timestamp, 16, "%Y%m%d_%H%M%S", localtime(&rawtime));
		std::cout << "[" << timestamp << "] ";
}