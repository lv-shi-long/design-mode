#include "MediatorConstructure.h"
#include "HouseOwner.h"
#include "Tenant.h"

void MediatorConstructure::Contact(string message, Person* p)
{
	if (p == (Person*) ho)
	{
		te->GetMessage(message);
	}
	else if (p == (Person*)te)
	{
		ho->GetMessage(message);
	}
	else
	{
		cout << "uknown perso" << endl;
	}
}

void MediatorConstructure::SetHouseOwner(HouseOwner* h)
{
	ho = h;
}

void MediatorConstructure::SetTenant(Tenant* t)
{
	te = t;
}
