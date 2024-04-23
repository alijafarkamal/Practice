//#include<iostream>
//#include<fstream>
//#include<string>
//#include<sstream>
//using namespace std; 
//template <typename T>
//class temp {
//    T type;
//public:
//    temp(T t) : type(t) {}
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
//
//int main() {
//    temp<string> vehicle("Generic Vehicle");
//    vehicle.display();
//    Car car;
//    temp<string> carTemp(car.getType());
//    carTemp.display();
//    SportsCar sportsCar;
//    temp<string> sportsCarTemp(sportsCar.getType());
//    sportsCarTemp.display();
//    system("pause");
//    return 0;
//}