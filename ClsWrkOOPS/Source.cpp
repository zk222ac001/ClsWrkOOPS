// include library in C++
//iostream : C++ language
// stdio : C language

#include <iostream>
using namespace std;
// How to create a Class
// How to create object instance
// Class is blueprint (prototype)
// Animal is a class name
class Animal
{   // constructor
	// cons is the same name of class
	// cons called at once when object is initialized or created
	// cons is saving values or storing values
	// const are parametric cons or parametric less cons
	
	// private : access modifier
	// attributes - charactertistcs
private: // Encapsulation - Data hiding
	int _height; // data memebers
	int _color;  // properties
   // behaviour -> method ( sleep , Eat)
public:
	Animal(int height) 
	{
		_height = height;
	}
	void Sleep() {
		cout << "Every animal have sleeping habit and " << _height << endl;
	}
	void Eat() {;
		cout << "Every animal have eating habit and " << _height << endl;
	}
	/*void setValues(int height) {
		_height = height;	
	}*/
	int getValues() {
		return _height;
	}
};// Main function for all 
int main() {
	// How to create an Object instance of Class animal
	Animal tiger(45);
	Animal lion(67);
	Animal elephant(78);
	Animal snake(54);

	tiger.getValues();
	elephant.getValues();
	snake.getValues();

	cout << "The height of tiger:" << tiger.getValues() << endl;
	cout << "The height of lion:" << lion.getValues() << endl;
	cout << "The height of elephant:" << elephant.getValues() << endl;
	cout << "The height of snake:" << snake.getValues() << endl;

	// Taking input from console
	// scanf function in cLanguage
	//int height;
	//cout << "Enter the height for tiger:" << endl;
	//// C++ , Cin (taking input from keyboard)
	//cin >> height;	
	//// setting values
	////tiger.setValues(height);
	//// get the values
	//tiger.getValues();
	//// Invoke function
	//tiger.Sleep();
	//tiger.Eat();
	//// Lion object 
	//int height1;
	//cout << "Enter the height for lion:" << endl;
	//// C++ , Cin (taking input from keyboard)
	//cin >> height;
	//// setting values
	////lion.setValues(height);
	//// get the values
	//lion.getValues();
	//// Invoke function
	//lion.Sleep();
	//lion.Eat();
}
