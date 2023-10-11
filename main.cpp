/******************************************************************************
 * AUTHOR      : Saul Moreno
 * STUDENT ID  : 269491
 * ASSIGNMENT# : 2
 * CLASS       : CS1C
 * SECTION     : MW 5:00pm
 * DUE DATE    : 1/29/2020
 ******************************************************************************/

#include "header.h"
#include "date.h"
#include "employee.h"
#include "programmer.h"
#include "softwareArchitect.h"
/******************************************************************************
 * Employee-inheritance
 * ----------------------------------------------------------------------------
 * This program will output the class heading
 * ----------------------------------------------------------------------------
 * INPUT:
 *     <There is no input for this program - output data is obtained through
 *     the constant.>
 *
 * OUTPUT:
 *  <This program will output a class heading
 *****************************************************************************/
int main()
{
	Employee firstEmployee;    // variable that has access to the class
	Programmer programOne;     // variable that has access to the class
	SoftwareArchitect softOne; // variable that has access to the class

	//Calls the functions to print out class header
	PrintHeader("Employee-inheritance", 2, 'A');

	cout << "This Program will display the Data for the C1SCE Employee, The"
		 <<	" Programmers" << endl
		 << "and Software Architects. It will display all other pertinent data";
	cout << endl << endl;

	cout << "Data:" << endl << "C1SCEmployees\n\n";

	cout << "These two examples are me just setting the employee's information"
		 <<	" automatically\n";
	//Calls function to display the table
	firstEmployee.DisplayTable();
	//Calls the function to set the initial values
	firstEmployee.SetInitial("Tom Brady",12345,"949-555-1234",42,'M',
			                 "Quarterback",8000000,"8/31/2018");
	//Calls the functions to display the employee's information
	firstEmployee.Display();
	cout << endl;
	//Calls the function to set the initial values
	firstEmployee.SetInitial("Aaron Rogers", 12346, "310-555-5555",36,'M',
			                 "Quarterback", 777123, "05/08/2019");
	//Calls the functions to display the employee's information
	firstEmployee.Display();

	/***************************************************************************
	 * These functions call will change the values that the variables were
	 * set to
	 **************************************************************************/
	cout << endl << endl;
	cout << "This one is me manually changing the employee's information\n";
	firstEmployee.ChangeEmployeesName("Tom Rogers");
	firstEmployee.ChangeEmployeesId(354534);
	firstEmployee.ChangeEmployeesPhone("959-432-4325");
	firstEmployee.ChangeEmployeesAge(69);
	firstEmployee.ChangeEmployeesGender('F');
	firstEmployee.ChangeEmployeesJobTitle("Person");
	firstEmployee.ChangeEmployeesSalary(0);
	firstEmployee.ChangeEmployeesHireDate("12-12-12");

	//Calls the functions to display the employee's information
	firstEmployee.Display();
	cout << endl;

	cout << "\nBack to the information being added automatically\n\n";
	firstEmployee.SetInitial("Oprah Winfrey", 98765, "730-703-1234",64,'F',
				              "Talk Show Host", 9900000, "12/25/2017");
	//Calls the functions to display the employee's information
	firstEmployee.Display();
	cout << endl;

	//Calls the function to set the initial values
	firstEmployee.SetInitial("Sally Designer", 77777, "203-555-6789",36,'M',
				                 "Comedian", 500500, "03/01/2012");
	//Calls the functions to display the employee's information
	firstEmployee.Display();
	cout << endl << endl;

	cout << "Programmers:\n\n";

	//Calls function to display the table
	firstEmployee.DisplayTable();
	//Calls the function to set the initial values
	firstEmployee.SetInitial("Sam Software",54321,"819-123-4567",21,'M',
			                 "Programmer",223000,"12/24/2017");
	//Calls the functions to display the employee's information
	firstEmployee.Display();
	cout << endl;
	//Calls the function to set the initial values
	firstEmployee.SetInitial("Mary Coder",65432,"310-555-5555",28,'F',
				             "Programmer",770123,"02/08/2019");
	//Calls the functions to display the employee's information
	firstEmployee.Display();
	cout << endl << endl;

	//Calls function to display the table
	programOne.DisplayTable();
	//Calls the function to set the initial values
	programOne.SetInitial("Sam Software", 5432122, "Joe Boss", 4, "Yes", "No");
	//Calls the functions to display the employee's information
	programOne.Display();
	//Calls the function to set the initial values
	programOne.SetInitial("Mary Coder", 6543222,"Mary Leader", 7, "Yes", "Yes");
	//Calls the functions to display the employee's information
	programOne.Display();
	cout << endl;

	cout << "SoftWare Architects\n\n";

	//Calls function to display the table
	firstEmployee.DisplayTable();
	//Calls the function to set the initial values
	firstEmployee.SetInitial("Alex Arch",88888,"959-353-3243",21,'M',"Architect",
			              231243,"12/12/12");
	//Calls the functions to display the employee's information
	firstEmployee.Display();
	cout << endl;
	//Calls the function to set the initial values
	firstEmployee.SetInitial("Sally Dsigner",87878,"310-555-8888",38,'F',
							 "Architect", 870123,"12/12/13");
	//Calls the functions to display the employee's information
	firstEmployee.Display();

	cout << endl << endl;

	cout << "This one is me manually changing the employee's information\n";
	//Calls function to display the table
	softOne.DisplayTable();

	/***************************************************************************
	* These functions call will change the values that the variables were
	* set to
	**************************************************************************/
	softOne.SetInitial("Alex Arch",543422,"Big Boss",6,4);
	softOne.ChangeDepartNum(4545);
	softOne.ChangeSuperName("Nobody Cares");
	softOne.ChangeSalPer(-45);
	softOne.ChangeNumExp(3);
	//Calls the functions to display the employee's information
	softOne.Display();

	cout << endl << endl;

	return 0;
}


