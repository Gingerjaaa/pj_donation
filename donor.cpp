#include "donor.h"

Donor::Donor(std::string donorName, double donationAmount){
    name = donorName;
    amount = donationAmount;
    next = NULL;
}
