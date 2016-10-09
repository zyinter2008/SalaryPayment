#ifndef MAILMETHOD_H_
#define MAILMETHOD_H_

#include <PayMethod.h>
#include <string>

using namespace std;

class MailMethod: public PayMehod {
public:
	MailMethod();
	virtual ~MailMethod();

	void pay();

private:
	string address;
};

#endif /* MAILMETHOD_H_ */
