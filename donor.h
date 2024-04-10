#ifndef DONOR_H
#define DONOR_H

#include <string>

class Donor {
public:
    std::string name;
    double amount;
    Donor* next;

    Donor(std::string donorName, double donationAmount);
};

#endif
