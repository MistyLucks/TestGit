#ifndef DEF_ADMIN
#define DEF_ADMIN 

#include <iostream>
#include <string>

class Admin
{
public:
	Admin();
	~Admin();
	void CreeCompte();
    void SuppCompte();
    void ModifierCompte();	
private:
	int m_credit;
	
};

#endif
