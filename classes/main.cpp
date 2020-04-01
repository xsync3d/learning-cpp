#include <iostream>
#include <string>

class Person {

	public:
		Person(std::string z) { //contructors do not have a return type and will always be ran automatically 
			setName(z);
		}

		void setName(std::string x) {
			name = x;
		}
		
		std::string getName() {
			return name;
		}
	private:
		std::string name; //class variables should always be private

};


int main() {

	Person person("clinton"); //constructors can take parameters 
	std::cout << person.getName();

	Person person2("obama"); /*whenever you create an object from a class, each object has its own set of variables. if objects are form the same class
						  they wont override each other*/
	std::cout << person2.getName();
	return 0;
}