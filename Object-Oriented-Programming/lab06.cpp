#include "iostream"
#include "string"
using namespace std;
class Item
{
private:
    int id;
    string name;
    int quantity;
    float cost;

public:
    // constructor
    Item(int ID, string Name, int Quan, float C)
    {
        setI(ID);
        setN(Name);
        setQ(Quan);
        setC(C);
    }

    Item(int ID, string Name, int Quan)
    {

        setI(ID);
        setN(Name);
        setQ(Quan);
        cost = 0;
    }

    Item(int ID, string Name, float C)
    {
        setI(ID);
        setN(Name);
        quantity = 0;
        setC(C);
    }

    // copy constructor
    Item(const Item &obj)
    {
        id = obj.id;
        name = obj.name;
        quantity = obj.quantity;
        cost = obj.cost;
    }

    // destructor
    ~Item()
    {
        cout << "DESTRUCTOR EXECUTED..." << endl;
    }
    // MUTATORS
    void setI(int ID)
    {
        if (ID > 0)
            id = ID;
        else
            id = 0;
    }

    void setQ(int Q)
    {
        if (Q > 0)
            quantity = Q;
        else
            quantity = 0;
    }

    void setN(string N)
    {

        name = N;
    }

    void setC(float C)
    {
        if (C > 0)
            cost = C;
        else
            cost = 0;
    }

    int getID()
    {
        return id;
    }

    string getName()
    {
        return name;
    }

    int getQ()
    {
        return quantity;
    }

    float getC()
    {
        return cost;
    }
    void setItem(int I, string N, int Q, float C)
    {
        setI(I);
        setN(N);
        setQ(Q);
        setC(C);
    }

    void getItem()
    {
        cout << "Enter Id:";
        cin >> id;
        cout << endl;
        cout << "Enter name:";
        cin >> name;
        cout << endl;
        cout << "Enter quantity:";
        cin >> quantity;
        cout << endl;
        cout << "Enter cost:";
        cin >> cost;
        cout << endl;
        setI(id);
        setN(name);
        setQ(quantity);
        setC(cost);
    }
    // Display Information
    void putItem()
    {

        cout << id << "\t";
        cout << name << "\t";
        cout << quantity << "\t";
        cout << "\t" << cost;
        cout << endl;
    }
    float getTotalCost()
    {
        float totalCost = 0;
        if (totalCost >= 1)
        {
            totalCost = totalCost + cost;
            return totalCost;
        }
        else
            return 0;
    }

    bool isEqual(const Item &obj) const
    {
        return (id == obj.id) && (name == obj.name) && (quantity == obj.quantity) && (cost == obj.cost);
    }

    void updateName(Item array[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            if (id == array[i].id)
            {
                name = array[i].name;
            }
        }
    }

    float getMinimumCostItem(Item AR[], int size)
    {
        int minimum = AR[0].cost;
        for (int i = 0; i < size; i++)
        {
            if (minimum > AR[i].cost)
            {
                minimum = AR[i].cost;
            }
        }
        return minimum;
    }

    float getAveragePrice(Item Arr[], int size)
    {
        float Avg = 0;
        for (int i = 0; i < size; i++)
        {
            Avg = Avg + Arr[i].cost;
        }
        return Avg / size;
    }
};
int main()
{
    Item obj1(0, " ", 0, 0.0), obj2(0, " ", 0, 0.0), obj3(0, " ", 0, 0.0);
    obj1.setItem(549, "BISMA", 5, 5.4);
    cout << "Id"
            "\t"
         << "Name"
            "\t"
         << "Quantity\t"
         << "cost"
         << endl;
    obj1.putItem();
    obj3 = obj1;
    obj3.putItem();

    obj1.getItem();
    obj2.getItem();

    
    Item o1(1, "Bisma ", 5, 9.0), o2(0, " ", 0, 0.0), o3(23, "Sania ", 6, 6.7), o4[2] = {Item(24, "Sameeha", 4, 7.8), Item(25, "Ayeza", 4, 7.8)};
    cout << "Minimum Cost:" << o3.getMinimumCostItem(o4, 2) << endl;
    cout << "Average :" << o2.getAveragePrice(o4, 2) << endl;
    cout << "Total :" << o1.getTotalCost() << endl;
    if (obj1.isEqual(obj2))
    {
        cout << "SAME" << endl;
    }
    else
    {
        cout << "NOT SAME" << endl;
    }

    return 0;
}