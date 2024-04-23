#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
//class animal {
//public:
//	virtual void makesound()  {
//		cout << "animal \n";
//	}
//};
//class dog :public animal {
//public:
//	virtual void makesound() override {
//		cout << "dog \n";
//	}
//};
//class cat : public animal{
//public:
//     void makesound() override  {
//		cout << "cat \n";
//	}
//};
//class kitten : public cat {
//public:
//	void makesound() {
//		cout << "kitten \n";
//	}
//};

//class Shape {
//public:
//    // Declare a virtual function
//    virtual void draw() const {
//        cout << "Drawing a generic shape." << endl;
//    }
//
//    // Virtual destructor to ensure proper cleanup of derived types
//     ~Shape() {}
//};
//
//// Derived class Circle
//class Circle : public Shape {
//public:
//    // Override the draw function
//    void draw() const override {
//        cout << "Drawing a circle." << endl;
//    }
//};
//
//// Derived class Rectangle
//class Rectangle : public Shape {
//public:
//    // Override the draw function
//    void draw() const override {
//        cout << "Drawing a rectangle." << endl;
//    }
//};
//
//// Function to demonstrate polymorphism
//void displayShape(const Shape shape) {
//    // The type of shape will determine which draw method is called
//    shape.draw();
//}


//template <typename T>
//class temp {
//    T type;
//public:
//   temp(T t) : type(t) {}
//    void display() {
//        std::cout << "Type of vehicle: " << type << std::endl;
//    }
//};
//
//class Vehicle {
//protected:
//    string type;
//public:
//    Vehicle() : type("Generic Vehicle") {}
//    string getType() const {
//        return type;
//    }
//};
//
//// Derived class from Vehicle
//class Car : public Vehicle {
//public:
//    Car() {
//        type = "Car";
//    }
//};
//
//// Derived class from Car
//class SportsCar : public Car {
//public:
//    SportsCar() {
//        type = "Sports Car";
//    }
//};

//class Printer {
//public:
//    static void print() {
//        cout << " I am capable of printing\n";
//    }
//};
//class Scanner {
//public:
//    Scanner() {
//        cout << " scannne\n";
//    }
//   static void print() {
//        cout << " I am capable of scanning\n";
//    }
////public:
////    int return_print{
////        print();
////    }
//};
//class Copier : public Printer, public Scanner{
//public:
//    static void print() {
//        Printer::print();
//        Scanner::print();
//        cout << " I am capable of copying\n";
//    }
//};
//class shape {
//    virtual void draw() = 0;
//    virtual void area() = 0;
//    virtual void circumference() = 0;
//};
//class circle : private shape  {
//public:
//    virtual void make() {
//        cout << " naek ";
//    }
//    void draw() override {
//        cout << "circle is drawn";
//    }
//    void area() override {
//        cout << "circle is drawn";
//    }
//    void circumference() override {
//        cout << "circle is drawn";
//    }
//};
//class semi_circle : circle,public shape{
//public:
//    void draw() override {
//        cout<< "circle is drawn";
//    }
//    void area() override {
//        cout << "circle is drawn";
//    }
//    //void circumference() override {
//    //    cout << "circle is drawn";
//    //}
//};
//class emplooyee {
//    virtual void calculatePay() = 0;
//};
//class hourlyEmp: public emplooyee {
//    double salary;
//public:
//    void calculatePay() override {
//        cin >> salary;
//        salary = salary / (24 * 30);
//        cout << salary;
//    }
//};
//class dayeEmp : public emplooyee {
//    int salary;
//public:
//    void calculatePay() override {
//        cin >> salary;
//        salary = salary / (30);
//        cout << salary;
//    }
//};

template <typename t, 
int main() {
    ColoredBox cb(2,4);

    //dayeEmp d; 
    //d.calculatePay();
    //hourlyEmp h;
    //h.calculatePay();
    //circle cc;
    //cc.area(); 
    //cc.circumference();
    //cc.draw();


    
    //Vehicle veh;
    //temp<string> vehicle(veh.getType());
    //Car car;
    //temp<string> carTemp(car.getType());
    //SportsCar sportsCar;
    //temp<string> sportsCarTemp(sportsCar.getType());
    //vehicle.display();
    //carTemp.display();
    //sportsCarTemp.display();
    // Displays: Type of Vehicle: Sports Car, designed for high performance.
    
       // ~derived();
    //Shape* shape = nullptr;
    //Circle cc;
    //Rectangle rec;
    //shape = &cc;
    //displayShape(*shape);
    //shape = &rec;
    //displayShape(*shape);
    //shape = nullptr;
	//animal* anim;

/*	cat c;
	c.makesound()*/;
	//kitten kit;
	//kit.makesound();
	//c.animal::makesound();


	system("pause");
	return 0;
}
//string names = "John Alice Bob Carol David";
//
//// Using stringstream to extract names
//istringstream iss(names);
//int id = 1;
//// Extracting the name at the fourth position
//string name;
//for (int i = 0; i < id; ++i)
//    iss >> name;
//cout << "Name at position " << id << " is " << name << endl;