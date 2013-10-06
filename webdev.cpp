/* Florea Stefan - Razvan
 * 341C3
 * This file contains the main function and some additional functions.
 * The program take 
 */

#include <iostream>

#include "examples.hpp"

using namespace std;

vector<string> example;
map<string, func_type> functions_map;

/*Function that populates the dictionary with all the available functions.
*/
void populate_map()
{
	functions_map["add_one"] = add_one;
	functions_map["add_two"] = add_two;
	functions_map["add_three"] = add_three;
	functions_map["add_four"] = add_four;
	functions_map["add_five"] = add_five;
	functions_map["multiply_by_one"] = multiply_by_one;
	functions_map["multiply_by_two"] = multiply_by_two;
	functions_map["multiply_by_three"] = multiply_by_three;
	functions_map["multiply_by_four"] = multiply_by_four;
	functions_map["multiply_by_five"] = multiply_by_five;
	functions_map["subtract_one"] = subtract_one;
	functions_map["subtract_two"] = subtract_two;
	functions_map["subtract_three"] = subtract_three;
	functions_map["subtract_four"] = subtract_four;
	functions_map["subtract_five"] = subtract_five;
}

/*Function that populates the list with names of the functions that will be used
*/
void populate_example(int no_functions_map)
{
	int k = 0;
	map<string, func_type>::iterator it = functions_map.begin();
	for( ; it != functions_map.end() && k < no_functions_map; it++, k++) {
		example.push_back(it->first);
	}
}

int main(int argc, char *argv[])
{
	string function;
	int integer_used, no_functions_map, nr;

	if(argc < 3) {
		cout << "./webdev 'integer used' 'number of used functions_map'" << endl;
		return -1;
	}

	populate_map();

	integer_used = atoi(argv[1]);
	no_functions_map = atoi(argv[2]);
	populate_example(no_functions_map);

	cout << "integer used: " << integer_used << endl;
	for(int k = 0; k < no_functions_map; k++) {
		function = example[k];
		cout << function << ": " << functions_map[function](integer_used) << endl;
	}

	return 0;
}