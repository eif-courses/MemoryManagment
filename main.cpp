#include <iostream>
using namespace std;


class Student{
private:
    int age;
    int *id;
public:
    Student(int age) : age(25) {}
    ~Student(){
        delete id;
    }
    int getAge() const {
        return age;
    }
};



int main() {
    int number = 50; // Stack memory
    char symbol = '$';
    float salary = 2.5f;
    int id = 4500;

    int *pointer = new int; // Stores the address

    cout << "Address of pointer: " << pointer << endl; // pointer address
    cout << "Pointer shows to value: " << *pointer << endl; // *pointer that means is value to which pointer points

    pointer = &number;

    cout << "Address of pointer: " << pointer << endl; // pointer address
    cout << "Pointer shows to value: " << *pointer << endl; // *pointer that means is value to which pointer points


    cout << "Number value: " << number << endl;

    *pointer = 70;

    cout << "Number value: " << number << endl;



    cout << "Pointer shows to value: " << *pointer << endl; // *pointer that means is value to which pointer points

    number = 100;


    pointer = &id;

    cout << "Pointer shows to value: " << *pointer << endl; // *pointer that means is value to which pointer points



    int array[] = {80, 200, 47, 98};
    int diff[20];

    pointer = array;


    cout << "Address of pointer: " << pointer << endl; // pointer address
    cout << "Pointer shows to value: " << *pointer << endl; // *pointer that means is value to which pointer points


    cout << "Pointer shows to value: " << *(pointer + 1)<< endl; // *pointer that means is value to which pointer points


    cout << "Address of array to pointer shows: " << pointer+2 << endl; // adddress
    cout << "Value of array to pointer shows: " << *(pointer+2) << endl; // value

    cout << "Address of array to pointer shows: " << &array[2] << endl; //address
    cout << "Value of array to pointer shows: " << array[2] << endl; // value

    delete pointer; // deallocated memory


    int *dynamicArray = new int[20]; // array or collection dynamically allocated

    dynamicArray[0] = 1;

    *dynamicArray = 5;

    *(dynamicArray + 1) = 66;


    cout << "Array items:";
    for (int i = 0; i < 5; i++) {
        cout << "" << dynamicArray[i] <<" ";
    }


    dynamicArray[1] = 77;


    cout << "Array items:";
    for (int i = 0; i < 5; i++) {
        cout << "" << dynamicArray[i] <<" ";
    }


    delete [] dynamicArray; // deallocate memory


    // OOP memory managment

    // STACK
    Student tom(35);

    cout << tom.getAge();


    // HEAP
    Student *ana = new Student(55);

    cout << ana->getAge();
    
    delete ana;



























    return 0;
}
