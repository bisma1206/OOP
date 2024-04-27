// BITF21M549
// BISMA TANVEER MIRZA
// LAB 08

#include "iostream"
#include "string"
using namespace std;

class Collection
{
private:
    int *data;
    int size;

public:
    // Constructor 01

    Collection(int size)
    {

        this->size = size;

        data = new int[this->size];

        for (int i = 0; i < this->size; i++)
        {
            data[i] = 0;
        }
    }
    // Constructor 02

    Collection(int Array[], int size)
    {
        this->size = size;

        data = new int[this->size];

        for (int i = 0; i < this->size; i++)
        {
            data[i] = Array[i];
        }
    }

    // Deep Copy constructor

    Collection(const Collection &obj)
    {
        size = obj.size;

       this-> data = new int[size];

        for (int i = 0; i < size; i++)
        {
            data[i] = obj.data[i];
        }
    }

    // Destructor

    ~Collection()
    {
        delete[] data;
    }

    // Function to getsize

    int getSize() const
    {
        return size;
    }

    // Function to setElement at a specified index

    void setElement(int i, int k)
    {
        if (i >= 0 && i < size)
        {
            data[i] = k;
        }
        else
        {
            cout << "Element not Inserted.Invalid Index" << endl;
        }
       
    }

    // Function to countElement

    int countElement(int key) const
    {
        int count = 0;

        for (int i = 0; i < size; i++)
        {
            if (data[i] == key)
            {
                count++;
            }
        }
        return count;
    }
    // Function to Assignment Operator

    Collection operator=(const Collection &obj)
    {
        if (this != &obj)
        {
            delete[] data;
            size = obj.size;
            data = new int[size];
            for (int i = 0; i < size; i++)
            {
                data[i] = obj.data[i];
            }
        }
        return *this;
    }

    // Member function to get a sub-collection

    Collection getSubCollection(int start_index, int end_index) const
    {
        if (start_index < 0 || end_index >= size || start_index > end_index)
        {
            cout << "Invalid range." << endl;
        }
        else
        {
            int subSize = end_index - start_index + 1;

            int *subData = new int[subSize];

            for (int i = 0; i < subSize; i++)
            {
                subData[i] = data[start_index + i];
            }
            return Collection(subData, subSize);
        }
    }
    // overload stream-insertion operator

    friend ostream &operator<<(ostream &print, Collection &obj);

    // overload stream-extraction operator

    friend istream &operator>>(istream &input, Collection &obj);

    // Addition operator

    Collection operator+(const Collection &obj) const
    {
        Collection result(this->size);

        for (int i = 0; i < size; i++)
        {
            if (size == obj.size)
            {
                result.data[i] = data[i] + obj.data[i];
            }

            else
            {
                result.size = 0;
                result.data = NULL;
            }
        }
        return result;
    }
    // Subscript for non-constant objects

    int &operator[](int index)
    {
        if (index >= 0 && index < size)
        {

            return data[index];
        }
       
        int value=99;

        int *b=&value;

        cout << "Index is out of bounds!";

        return *b;
       
       
    }

    // Subscript for constant objects

    int operator[](int index) const
    {
        if (index >= 0 && index < size)
        {
            cout << "Index is out of bounds! ";

            return 99;
        }
        return data[index];
    }
    // Unary minus operator

    bool operator-() const
    {
        int a = 0;
        for (int i = 0; i < size; i++)
        {
            if (data[i] <= 0)
            {
                a++;
            }
        }
        if (a == size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
istream &operator>>(istream &input, Collection &obj)
{
    for (int i = 0; i < obj.size; i++)
    {
        cout << "\nENTER ARRAY :";
        cin >> obj.data[i];
    }
    return input;
}
ostream &operator<<(ostream &print, Collection &obj)
{
    for (int i = 0; i < obj.size; i++)
    {
        print << " " << obj.data[i];
    }
    return print;
}

int main()

{
    int ARRAY[10] = {1, 3, 4, 5, 6, 7, 12};

    int ARRAY1[10] = {1, -6, -9, 4, -7, 11, 4};

    Collection C1(ARRAY, 5);

    Collection C2(ARRAY1, 6);

    cout << "c1: " << C1 << endl;

    cout << "c2: " << C2 << endl;

    // Chk setElement and countElement

    C1.setElement(2, 10);

    cout << "c1 after setElement: " << C1 << endl;

    cout << "Count of 2 in C1: " << C1.countElement(2) << endl;

    cout << "Count of 10 in C1: " << C1.countElement(10) << endl;

    // Chk getSubCollection

    Collection sub = C2.getSubCollection(2, 4);

    cout << "Sub-collection of C2: " << sub << endl;

    // Chk assignment operator and subscript operator
    C1 = C2;

    cout << "c1 after Assignment: " << C1 << endl;

    cout << "c1[2]: " << C1[2] << endl;

    // Chk addition operator

    Collection sum = C1 + C2;

    cout << "Sum of c1 and c2: " << sum << endl;

    // Chk unary minus operator

   Collection c9(10);

    cin>>c9;

   cout<<c9.operator-();

    return 0;
}