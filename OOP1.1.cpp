#include <iostream>
using namespace std;

class Person {
private:
	const char* name;
	int age;
	const char* gender;
	const char* number;
public:
	Person(const char* name, int age, const char* gender, const char* number) {
		this->name = name;
		this->age = age;
		this->gender = gender;
		this->number = number;
	}
	void set_name(const char* name) {
		this->name = name;
	}
	void set_age(int age) {
		this->age = age;
	}
	void set_gender(const char* gender) {
		this->gender = gender;
	}
	void set_number(const char* number) {
		this->number = number;
	}
	void print_person() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Gender: " << gender << endl;
		cout << "Number: " << number << endl;
	}
	~Person() {

	}
};

int main() {
	const char* name = "Bob";
	const char* gender = "male";
	const char* number = "0631111111";
	Person person(name, 19, gender, number);
	person.print_person();
	cout << endl;
	person.set_name("Emma");
	person.set_age(20);
	person.set_gender("female");
	person.set_number("0632222222");
	person.print_person();

	return 0;
}