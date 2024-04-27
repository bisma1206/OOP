#include "iostream"
#include "string"
using namespace std;
class package
{
private:
    string senderName;
    string recieverName;
    string senderAddress;
    string recieverAddress;
    string senderCity;
    string recieverCity;
    float weight;
    float CostPerOunce;

public:
    package(string SN, string RN, string SA, string RA, string SC, string RC, float W, float CPO)
    {
        this->senderName = SN;
        this->recieverName = RN;
        this->senderAddress = SA;
        this->recieverAddress = RA;
        this->senderCity = SC;
        this->recieverCity = RC;
        this->weight = W;
        this->CostPerOunce = CPO;

        if (weight > 0)
        {
            weight = W;
        }
        else
        {
            weight = 0;
        }

        if (CostPerOunce > 0)
        {
            CostPerOunce = CPO;
        }
        else
        {
            CostPerOunce = 0;
        }

        float calculateCost()
        {
            return weight * CostPerOunce;
        }
    }
};

class TowDayPackage
{
private:
    float FlatFree;

public:
    TowDayPackage(string SN, string RN, string SA, string RA, string SC, string RC, float W, float CPO, float FF) :  public package
    {
        this->FlatFree = FF;

        if (FlatFree > 0)
        {
            FlatFree = FF;
        }
        else
        {
            FlatFree = 0;
        }
    }
};

class OverNightPackage
{
};