// BITF21M549
// BISMA TANVEER MIRZA
// HOME WORK 05
#include "iostream"
#include "string"
using namespace std;

class IntegerSet
{
private:
    int *set;
    const int size;

public:
    // constructor

    IntegerSet(int S) : size(S)
    {

        set = new int[size];

        for (int i = 0; i <= size - 1; i++)
        {
            set[i] = 0;
        }
    }

    // copy constructor

    IntegerSet(const IntegerSet &obj) : size(obj.size)
    {
        set = new int[size];

        for (int i = 0; i <= size - 1; i++)
        {
            set[i] = obj.set[i];
        }
    }

    // Destructor

    ~IntegerSet()
    {
        delete[] set;
    }

    // Function Overloading

    // Strem-insertion operator

    friend ostream &operator<<(ostream &output, const IntegerSet &set);

    // Assignment operator

    IntegerSet &operator=(const IntegerSet &obj)
    {
        if (this != &obj)
        {
            if (size != obj.size)
            {
                cout << "Invalid Size." << endl;
            }
            else
            {
                for (int i = 0; i <= size - 1; i++)
                {
                    set[i] = obj.set[i];
                }
            }
        }
        return *this;
    }

    // Equal operator

    bool operator==(const IntegerSet &obj) const
    {
        int Count = 0;

        for (int i = 0; i <= size - 1; i++)
        {
            if (set[i] == obj.set[i])
            {

                Count++;
            }

            if (Count == size)
            {

                return true;
            }
            else
            {

                return false;
            }
        }
    }

    // Logical not(!) operator

    IntegerSet operator!() const
    {
        IntegerSet result(size); // new set

        for (int i = 0; i <= size - 1; i++)
        {
            if (set[i] == 1)
            {

                result.set[i] = 0;
            }

            else

            {
                result.set[i] = 1;
            }
        }
    }

    // Function to insert element in to the set

    void insertElement(int k)
    {
        if (k >= 0 && k < size)
        {
            set[k] = 1;
        }
        else
        {
            cout << "Invalid." << endl;
        }
    }

    // Function to delete  element from the set

    void deleteElement(int k)
    {
        if (k >= 0 && k < size)
        {
            set[k] = 0;
        }
        else
        {
            cout << "Invalid." << endl;
        }
    }

    // Function union of two sets

    IntegerSet unionOfSets(const IntegerSet &obj) const
    {
        if (size != obj.size)
        {
            cout << "Sets have different size." << endl;

            return IntegerSet(0);
        }
        IntegerSet result(size);

        for (int i = 0; i <= size - 1; i++)
        {
            if (set[i] == 1 || obj.set[i] == 1)
            {
                result.set[i] = 1;
            }
        }

        return result;
    }

    // Function intersection of two sets

    IntegerSet intersectionOfSets(const IntegerSet &obj) const
    {
        if (size != obj.size)
        {
            cout << "Sets have different size." << endl;

            return IntegerSet(0);
        }
        IntegerSet result(size);

        for (int i = 0; i <= size - 1; i++)
        {
            if (set[i] == 1 && obj.set[i] == 1)
            {
                result.set[i] = 1;
            }
        }
        return result;
    }

    // To find an element in the set

    bool findElement(int key) const
    {
        if (key >= 0 && key < size)
        {
            return set[key] == 1;
        }
        else
        {
            cout << "Element " << key << " is invalid." << endl;

            return false;
        }
    }
};
// stream - insertion operator

ostream &operator<<(ostream &print, const IntegerSet &set)
{
    bool empty = true;

    for (int i = 0; i < set.size; i++)
    {
        if (set.set[i] == 1)
        {
            print << i << " ";

            empty = false;
        }
    }
    if (empty)
    {
        print << "--- ";
    }

    return print;
}

int main()
{
    // Two Sets

    IntegerSet s1(20);

    IntegerSet s2(20);

    // elements of the set1

    s1.insertElement(10);

    s1.insertElement(1);

    s1.insertElement(3);

    s1.insertElement(5);

    s1.insertElement(18);

    s1.insertElement(4);

    s1.insertElement(2);

    // elements of the  set2

    s2.insertElement(11);

    s2.insertElement(7);

    s2.insertElement(5);

    s2.insertElement(9);

    s2.insertElement(7);

    s2.insertElement(5);

    s2.insertElement(2);

    // display elements of set 1 and set 2

    cout << "Set 1: " << s1 << endl;

    cout << "Set 2: " << s2 << endl;

    // display the union of  set 1 and set 2

    IntegerSet unionSet = s1.unionOfSets(s2);

    cout << "Union of Set 1 and Set 2: " << unionSet << endl;

    // dispaly the intersection of set 1 and set 2

    IntegerSet intersectionSet = s1.intersectionOfSets(s2);

    cout << "Intersection of Set 1 and Set 2: " << intersectionSet << endl;

    // Findelement in Set 1

    int key = 5;

    if (s1.findElement(key))
    {
        cout << key << " is in Set 1." << endl;
    }
    else
    {

        cout << key << " It is not in Set 1!" << endl;
    }

    return 0;
}