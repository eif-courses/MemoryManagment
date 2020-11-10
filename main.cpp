#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Memory{
private:
    int size;
    std::string type;
public:

    explicit Memory(int size) : size(size) {}

    void printInfo(){

    }

    virtual ~Memory() {
        std::cout << "OBJECT DESTROYED!"<<std::endl;
    }

    void setType(const string &type) {
        Memory::type = type;
    }

    int getSize() const {
        return size;
    }
    const string &getType() const {
        return type;
    }
};
class Computer{

public:
    static std::string name;

     void addMemory(const Memory& memory){
         std::cout <<"ADDED MEMORY: "<< memory.getSize() << "GB" << std::endl;
     }

    void setName(const string &name) {
        Computer::name = name;
    }

};

std::string Computer::name = "My COMPUTER";







class Student{
private:
    int age;
public:
    Student(int age) : age(age) {}

    static void printInfo(const Student& student){
        std::cout << "\nSTUDENT AGE: " <<  student.getAge() << std::endl;
    }
    int getAge() const {
        return age;
    }
};

class Admin{
private:
    std::string name;
    std::vector<Student> students;
public:
    void registerStudent(const Student& student){
        students.emplace_back(student);
    }
};

void a(){
    // C++11 added smart pointers auto deallocate / freed up memory
    std::unique_ptr<Memory> memory(new Memory(8));
    std::unique_ptr<Memory> secondMemory = std::make_unique<Memory>(16);

    memory->setType("SO-DIMM");
    memory->printInfo();



    memory.reset();

    std::cout << "WORKING.........";



}
void b(){
    std::unique_ptr<Memory> secondMemory = std::make_unique<Memory>(16);
    secondMemory->printInfo();
}
void c(){
    std::weak_ptr<Memory> sharedPtrA = std::make_shared<Memory>(5);
    std::weak_ptr<Memory> sharedPtrB = std::make_shared<Memory>(5);
    std::weak_ptr<Memory> sharedPtrC = std::make_shared<Memory>(5);

    sharedPtrA = sharedPtrB;
    sharedPtrB = sharedPtrC;
    sharedPtrC = sharedPtrA;


}


// a b = 2 -1 -1 0



int main() {



    a(); // free up memory
    b();
    c();

    Computer ibm;
    Computer lenovo;
    /// Computer::addMemory(); using static method call
            ibm.setName("LENOVO");
            std::cout << Computer::name << std::endl;
            std::cout << Computer::name << std::endl;


       // SMART POINTERS SECTION


//       Memory *memory1 = new Memory(2);
//       delete memory1;








































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
    Student *ana2 = new Student(55);
    Student *ana3 = new Student(55);


    Student *a = nullptr; // NULL -> nullptr


    delete a;


    // malloc() // new But in C allocate memory

    // free() // delete in C   Freed up memory


    cout << ana->getAge();

    delete ana;

    delete ana2;
    delete ana3;


    int arrayOfIntegers[25] = {2, 23, 213, 12312, 12321};



























    return 0;
}
