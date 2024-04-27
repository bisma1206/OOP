// BITF21M549
// BISMA TANVEER MIRZA
// LAB 09
#include "iostream"
#include "string"
using namespace std;

template <class T>

class Array
{
private:
    T *data;

    int size;

public:
    // Default constructor

    Array()
    {
        size = 5;

        data = new T[size];

        for (int i = 0; i < size; i++)
        {
            data[i] = T();//yeh is liyeh kiya takeh her element ko default value sy initialize kiya ja saky
        }
    }

    // Constructor

    Array(int t)
    {
        size = t;

        data = new T[size];

        for (int i = 0; i < size; i++)
        {
            data[i] = T();
        }
    }

    // Copy constructor

    Array(const Array &obj)
    {
        size = obj.size;

        data = new T[size];

        for (int i = 0; i < size; i++)
        {
            data[i] = obj.data[i];
        }
    }

    // Destructor

    ~Array()
    {
        delete[] data;
    }

    // function of getSize

    int getSize() const
    {
        return size;
    }

    // Function to SetElement AT given index

    void setElement(int index, T k)
    {
        if (index >= 0 || index < size)
        {
            data[index] = k;
        }

        else
        {
            cout << "Invalid index out of bond!" << endl;
        }
    }

    // Counts the total elements in Array
    int countElement(T key) const
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

    // Assignment operator

    Array &operator=(const Array &obj)
    {
        if (this != &obj)
        {
            delete[] data;
            size = obj.size;
            data = new T[size];
            for (int i = 0; i < size; i++)
            {
                data[i] = obj.data[i];
            }
        }
        return *this;
    }

    // Function sub_Array

    Array<T> getSubArray(int start_index, int end_index) const
    {
        if (start_index < 0 || end_index >= size || start_index > end_index)
        {
            cout << "Invalid Sub_Array!" << endl;

            return Array<T>();
        }
        else
        {
            int sub_size = end_index - start_index + 1;

            Array<T> sub_array(sub_size);

            for (int i = 0; i < sub_size; i++)
            {
                sub_array.setElement(i, data[start_index + i]);
            }
            return sub_array;
        }
    }

    // Arithmetic operator

    Array<T> operator+(const Array<T> &obj) const
    {
        Array<T> result(size + obj.size);

        for (int i = 0; i < size; i++)
        {
            for (int i = 0; i < size; i++)
            {
                result.data[i] = data[i];
            }

            for (int i = 0; i < obj.size; i++)
            {
                result.data[size + i] = obj.data[i];
            }

            return result;
        }
    }

    // comparison operator

    bool operator==(const Array<T> &obj) const
    {
        if (size != obj.size)
        {
            return false;
        }
        for (int i = 0; i < size; i++)
        {
            if (data[i] != obj.data[i])
            {
                return false;
            }
        }
        return true;
    }

    // Subscript for non-constant objects
   
    T& operator[](int index)
    {
       if (index >= 0 && index < size)
        {

            return data[index];
        }
       
       
        cout << "Index is out of bounds!";

       
         return data[index]=-1;
       
    }

    // Subscript for constant objects
    
     T operator[](int index) const
    {
        if (index >= 0 && index < size)
        {
        

            return data[index];
        }
         cout << "Index is out of bounds! ";
        return data[index]=-1;
    }

    // Stream extraction operator
    template <class T1>
    friend istream &operator>>(istream &input, Array<T1> &obj);

    // Stream insertion  operator
    template <class T2>

    friend ostream &operator<<(ostream &print, const Array<T2> &obj);
};

template <class T1>
istream &operator>>(istream &input, Array<T1> &obj)
{
    for (int i = 0; i < obj.size; i++)
    {
        input >> obj.data[i];
    }
    return input;
}

template <class T2>

// Stream insertion  operator
ostream &operator<<(ostream &print, const Array<T2> &obj)
{
    for (int i = 0; i < obj.size; i++)
    {
        print << obj.data[i] << " ";
    }
    print << endl;

    return print;
}

int main()
{

    // Create an Array object using constructor with size argument

    Array<double> a2(3);
    cout << "Size of arr2: " << a2.getSize() << endl;
    cout << "Elements of arr2: " << a2 << endl;

    // Set elements of arr2
    a2.setElement(0, 1.2);
    a2.setElement(1, 2.3);
    a2.setElement(2, 3.4);
    cout << "Elements of arr2 after setElement: " << a2 << endl;

    // Copy constructor
    Array<double> a3(a2);
    cout << "Size of arr3: " << a3.getSize() << endl;
    cout << "Elements of arr3: " << a3 << endl;

    // Assignment operator
    Array<double> a4;
    a4 = a2;
    cout << "Size of arr4: " << a4.getSize() << endl;
    cout << "Elements of arr4: " << a4 << endl;

    // getSubArray
    Array<double> arr5 = a2.getSubArray(1, 2);
    cout << "Size of arr5: " << arr5.getSize() << endl;
    cout << "Elements of arr5: " << arr5 << endl;

    // add two arrays
    Array<double> a6 = a2 + a3;
    cout << "Size of arr6: " << a6.getSize() << endl;
    cout << "Elements of arr6: " << a6 << endl;

    // Create an Array object using default constructor

    Array<int> a1;
    cout << "Size of a1: " << a1.getSize() << endl;
    cout << "Elements of a1: " << a1 << endl;

    // Comparison operator
    cout << "arr2 == arr3: " << (a2 == a3) << endl;
    cout << "arr2 == arr4: " << (a2 == a4) << endl;

    // Subscript operator
    cout << "arr2[1]: " << a2[1] << endl;
    cout << "arr2[5]: " << a2[5] << endl;
    return 0;
}
