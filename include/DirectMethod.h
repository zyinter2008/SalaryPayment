#ifndef DIRECTMETHOD_H_
#define DIRECTMETHOD_H_

#include <PayMethod.h>
#include <string>

using namespace std;

class DirectMethod: public PayMehod {
public:
	DirectMethod();
	virtual ~DirectMethod();

	void pay();

private:
	string bank;
	string account;
};

#endif /* DIRECTMETHOD_H_ */
