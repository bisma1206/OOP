#include <iostream>
#include <string>

using namespace std;

class Package
{
private:
    string senderName;
    string senderAddress;
    string senderCity;
    string receiverName;
    string receiverAddress;
    string receiverCity;
    float weight;
    float costPerOunce;

public:
    Package(string senderName, string senderAddress, string senderCity,
            string receiverName, string receiverAddress, string receiverCity,
            float weight, float costPerOunce)
    {
        this->senderName = senderName;
        this->senderAddress = senderAddress;
        this->senderCity = senderCity;
        this->receiverName = receiverName;
        this->receiverAddress = receiverAddress;
        this->receiverCity = receiverCity;

        // Ensure weight and costPerOunce are positive values
        if (weight > 0)
        {
            this->weight = weight;
        }
        else
        {
            this->weight = 0;
        }

        if (costPerOunce > 0)
        {
            this->costPerOunce = costPerOunce;
        }
        else
        {
            this->costPerOunce = 0;
        }
    }

    float calculateCost()
    {
        return weight * costPerOunce;
    }
};

class TwoDayPackage : public Package
{
private:
    float flatFee;

public:
    TwoDayPackage(string senderName, string senderAddress, string senderCity,
                  string receiverName, string receiverAddress, string receiverCity,
                  float weight, float costPerOunce, float flatFee)
        : Package(senderName, senderAddress, senderCity, receiverName, receiverAddress,
                  receiverCity, weight, costPerOunce)
    {
        // Ensure flatFee is a positive value

        if (flatFee > 0)
        {
            this->flatFee = flatFee;
        }
        else
        {
            this->flatFee = 0;
        }
    }

    float calculateCost()
    {
        float weightBasedCost = Package ::calculateCost();
        return weightBasedCost + flatFee;
    }
};

class OvernightPackage : public Package
{
private:
    float feePerOunce;

public:
    OvernightPackage(string senderName, string senderAddress, string senderCity,
                     string receiverName, string receiverAddress, string receiverCity,
                     float weight, float costPerOunce, float feePerOunce)
        : Package(senderName, senderAddress, senderCity, receiverName, receiverAddress,
                  receiverCity, weight, costPerOunce)
    {
        // Ensure feePerOunce is a positive value
        if (feePerOunce > 0)
        {
            this->feePerOunce = feePerOunce;
        }
        else
        {
            this->feePerOunce = 0;
        }
    }

    // float calculateCost()
    // {

    //  float modifiedCostPerOunce =  modifiedCostPerOunce + feePerOunce;
    //    return   weight * modifiedCostPerOunce;
    // }
};

int main()
{
    Package package("Sender", "Sender Address", "Sender City",
                    "Receiver", "Receiver Address", "Receiver City",
                    10.6, 10.88);

    TwoDayPackage twoDayPackage("Sender", "Sender Address", "Sender City",
                                "Receiver", "Receiver Address", "Receiver City",
                                10.88, 55.55, 5.0);

    OvernightPackage overnightPackage("Sender", "Sender Address", "Sender City",
                                      "Receiver", "Receiver Address", "Receiver City",
                                      10.5, 1.5, 2.0);

    cout << "Package Cost: " << package.calculateCost() << endl;
    cout << "Two-Day Package Cost: " << twoDayPackage.calculateCost() << endl;
    cout << "Overnight Package Cost: " << overnightPackage.calculateCost() << endl;

    return 0;
}