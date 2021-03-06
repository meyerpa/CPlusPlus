// description: testing program
// author: Paige Meyer
// class: CSIS 352


#include <iostream>
#include "array.h"
using namespace std;
using namespace ArrayNameSpace;

int main() {  
  
  // DEALING WITH INTEGER ARRAYS
  
  // constructors
  cout << "\tTesting integer usage..." << endl << endl;
  cout << "\tTesting constructors..." << endl;
  try { Array<int> numbers(0,12); cout << "\tGood\n";}
  catch (const exception& ex) { cout << "\terror - constructor with two int indicies doesn't work \n"; } 
  
  try { Array<int> numbers(4,0); cout << "\terror - constructor with two int allows stop to be before start \n";}
  catch (const exception& ex) { cout <<"\tGood\n";} 
  
  try { Array<int> numbers(3); cout << "\tGood\n";}
  catch (const exception& ex) { cout << "\terror -constructor with one int index doesn't work \n"; } 
  
  try { Array<int> numbers(-3); cerr <<"\terror - allows negative length\n";}
  catch (const exception& ex) { cout << "\tGood\n";}
  
  Array<int> numbers(3);
  int num;
   
  // Indexing operators
  cout << "\tTesting indexing operators..." << endl;
  try { numbers[1] = -90; cout << "\tGood\n";}
  catch (const exception& ex) { cout << "\terror - assignment by indexing array doesn't work \n"; cout << ex.what() << endl;} 
  
  try { numbers[4] =2; cout << "\terror - shouldn't allow to assignment outside of array boundaries \n"; }
  catch (const exception& ex) { cout << "\tGood\n"; }  
  
  try { num = numbers[1];cout << "\tGood\n"; }
  catch (const exception& ex) { cout << "\terror - accessing by indexing array doesn't work \n"; } 
  
  try { numbers[4]; cout << "\terror - shouldn't allow to access outside of array boundaries \n";}
  catch (const exception& ex) { cout << "\tGood\n"; } 
 
  numbers[1] = 2;

  if (numbers[1]!=2)
    cout << "\terror- did not update indexes accordingly";
  
  cout << "\tTesting length..." << endl;
  if (numbers.getLength()==3) 
    cout << "\tGood\n";
  else 
    cout << "size is not right";
  
  // Resize
  cout << "\tTesting Resize..." << endl;
  numbers.Resize(9);
  try { numbers[4]; cout << "\tGood\n";}
  catch (const exception& ex) { cout << "\terror - didn't resize correctly \n"; } 

  if (numbers.getLength() == 9)
    cout << "\tGood\n";
  else
    cout << "\tError - didn't resize correctly";
  
  numbers.Resize(2);
  numbers[0]=30;
  numbers[1]=80;
  
  // Assignment operator
  cout << "\tTesting Assignment Operator..." << endl;
  Array<int> numbers2;
  numbers2 = numbers;
  numbers[1]=10;
  if (numbers2[0]==30 && numbers2[1]==80 && numbers.getLength()==2)
    cout << "\tGood\n";
  else 
    cout << "\tAssignment operator wrong\n";
  
  // Equals
  cout << "\tTesting Equals..." << endl;
  if (numbers==numbers2) 
    cout << "\tEquals operator wrong\n";
  else
    cout << "\tGood\n";

  numbers[1]=80;
  if (numbers==numbers2) 
    cout << "\tGood\n";
  else
    cout << "\tEquals operator wrong\n";

  // Less Than
  cout << "\tTesting Less Than..." << endl;
  if (numbers<numbers2) 
    cout << "\tLess Than operator wrong\n";
  else
    cout << "\tGood\n";

  numbers[1]=70;
  if (numbers<numbers2) 
    cout << "\tGood\n";
  else
    cout << "\tLess Than operator wrong\n";

  numbers[1] = 90;
  numbers[0] = 2;
  if (numbers<numbers2) 
    cout << "\tGood\n";
  else
    cout << "\tLess Than operator wrong\n"; 

  // Not Equals
  cout << "\tTesting Not Equals..." << endl;
  if (numbers!=numbers2) 
    cout << "\tGood\n";
  else
    cout << "\tNot Equals operator wrong\n";

  numbers[1]=70;
  numbers[0]=50;
  numbers2[0]=60;
  numbers2[1]=70;
  if (numbers!=numbers2) 
    cout << "\tGood\n";
  else
    cout << "\tNot Equals operator wrong\n";

  numbers[0]=60;
  if (numbers!=numbers2) 
    cout << "\tNot Equals operator wrong\n";
  else
    cout << "\tGood\n";

  // Greater Than
  cout << "\tTesting Greater Than..." << endl;
  if (numbers>numbers2) 
    cout << "\tGreater Than operator wrong\n";
  else
    cout << "\tGood\n";

  numbers[1]=90;
  if (numbers>numbers2) 
    cout << "\tGood\n";
  else
    cout << "\tGreater Than operator wrong\n";

  numbers[1] = 70;
  numbers[0] = 61;
  if (numbers>numbers2) 
    cout << "\tGood\n";
  else
    cout << "\tGreater Than operator wrong\n";

  numbers[1] = 69;
  numbers[0] = 60;
  if (numbers>numbers2) 
    cout << "\tGreater Than operator wrong\n";
  else
    cout << "\tGood\n";

  numbers[1] = 70;
  numbers[0] = 59;
  if (numbers>numbers2) 
    cout << "\tGreater Than operator wrong\n";
  else
    cout << "\tGood\n";

  // Greater Than Equals
  numbers[1]=70;
  numbers[0]=50;
  numbers2[0]=60;
  numbers2[1]=70;
  cout << "\tTesting Greater Than Equals..." << endl;
  if (numbers>=numbers2) 
    cout << "\tGreater Than Equals operator wrong\n";
  else
    cout << "\tGood\n";

  numbers[1]=90;
  if (numbers>=numbers2) 
    cout << "\tGood\n";
  else
    cout << "\tGreater Than Equals operator wrong\n";

  numbers[1] = 70;
  numbers[0] = 60;
  if (numbers>=numbers2) 
    cout << "\tGreater Than Equals operator wrong\n";
  else
    cout << "\tGood\n";

  numbers[1] = 69;
  numbers[0] = 60;
  if (numbers>=numbers2) 
    cout << "\tGreater Than Equals Than operator wrong\n";
  else
    cout << "\tGood\n";

  numbers[1] = 70;
  numbers[0] = 59;
  if (numbers>=numbers2) 
    cout << "\tGreater Than Equals Than operator wrong\n";
  else
    cout << "\tGood\n";


  // Less Than Equals
  numbers[1]=70;
  numbers[0]=60;
  numbers2[0]=60;
  numbers2[1]=70;
  cout << "\tTesting Less Than Equals..." << endl;
  if (numbers<=numbers2) 
    cout << "\tLess Than Equals operator wrong\n";
  else
    cout << "\tGood\n";

  numbers[1]=69;
  if (numbers<=numbers2) 
    cout << "\tGood\n";
  else
    cout << "\tLess Than Equals operator wrong\n";

  numbers[1] = 70;
  numbers[0] = 59;
  if (numbers<=numbers2) 
    cout << "\tGood\n";
  else
    cout << "\tLess Than Equals operator wrong\n";

  numbers[1] = 71;
  numbers[0] = 60;
  if (numbers<=numbers2) 
    cout << "\tLess Than Equals operator wrong\n";
  else
    cout << "\tGood\n";

  numbers[1] = 70;
  numbers[0] = 61;
  if (numbers<=numbers2) 
    cout << "\tLess Than Equals operator wrong\n";
  else
    cout << "\tGood\n";
  
  
  // DEALING WITH CHARACTER ARRAYS
  
  // constructors
  cout << "\tTesting char usage..." << endl << endl;
  cout << "\tTesting constructors..." << endl;
  try { Array<int> numbers('B','D"); cout << "\tGood\n";}
  catch (const exception& ex) { cout << "\terror - constructor with two char indicies doesn't work \n"; } 
  
  try { Array<int> numbers('D','B'); cout << "\terror - constructor with two char allows stop to be before start \n";}
  catch (const exception& ex) { cout <<"\tGood\n";} 
  
  try { Array<int> numbers('D'); cout << "\tGood\n";}
  catch (const exception& ex) { cout << "\terror -constructor with one char index doesn't work \n"; } 
  
  Array<int> numbers('A', 'B');
  int std1 = 70;
  int std2 = 80;
  int lt = 60;
  int gr = 90;
   
  // Indexing operators
  cout << "\tTesting indexing operators..." << endl;
  try { numbers['A'] = std1; cout << "\tGood\n";}
  catch (const exception& ex) { cout << "\terror - assignment by indexing array doesn't work \n"; cout << ex.what() << endl;} 
  
  try { numbers['C'] =2; cout << "\terror - shouldn't allow to assignment outside of array boundaries \n"; }
  catch (const exception& ex) { cout << "\tGood\n"; }  
  
  try { int tmp = numbers['B'];cout << "\tGood\n"; }
  catch (const exception& ex) { cout << "\terror - accessing by indexing array doesn't work \n"; } 
  
  try { numbers['a']; cout << "\terror - shouldn't allow to access outside of array boundaries \n";}
  catch (const exception& ex) { cout << "\tGood\n"; } 
 
  numbers['B'] = 2;

  if (numbers['B']!=2)
    cout << "\terror- did not update indexes accordingly";
/*  
  cout << "\tTesting length..." << endl;
  if (numbers.getLength()==2) 
    cout << "\tGood\n";
  else 
    cout << "size is not right";
  
  // Resize
  cout << "\tTesting Resize..." << endl;
  numbers.Resize('C');		// TODO: SHould I be able to resize a character array?
  try { numbers['C']; cout << "\tGood\n";}
  catch (const exception& ex) { cout << "\terror - didn't resize correctly \n"; } 

  if (numbers.getLength() == 3)
    cout << "\tGood\n";
  else
    cout << "\tError - didn't resize correctly";
  
  numbers.Resize('B');
  numbers['A']=std1;
  numbers['B']=std2;
  
  
  // Assignment operator
  cout << "\tTesting Assignment Operator..." << endl;
  Array<int> numbers2;
  numbers2 = numbers;
  numbers[1]=10;
  if (numbers2['A']==std1 && numbers2['B']==std2 && numbers2.getLength()==2)
    cout << "\tGood\n";
  else 
    cout << "\tAssignment operator wrong\n";
  
  // Equals
  if (numbers==numbers2) 
    cout << "\tGood\n";
  else
    cout << "\tEquals operator wrong\n";
  
  cout << "\tTesting Equals..." << endl;

  numbers['B']=lt1;
  if (numbers==numbers2) 
    cout << "\tEquals operator wrong\n";
  else
    cout << "\tGood\n";
  
  numbers['B']=gt1;
  if (numbers==numbers2) 
    cout << "\tEquals operator wrong\n";
  else
    cout << "\tGood\n";

  // Less Than
  cout << "\tTesting Less Than..." << endl;
  if (numbers<numbers2) 
    cout << "\tLess Than operator wrong\n";
  else
    cout << "\tGood\n";
  
  if (numbers<numbers2) 
    cout << "\tLess Than operator wrong\n";
  else
    cout << "\tGood\n";


  numbers['B']=lt1;
  if (numbers<numbers2) 
    cout << "\tGood\n";
  else
    cout << "\tLess Than operator wrong\n";

  numbers['B'] = std2;
  numbers['A'] = lt1;
  if (numbers<numbers2) 
    cout << "\tGood\n";
  else
    cout << "\tLess Than operator wrong\n"; 

  // Not Equals
  cout << "\tTesting Not Equals..." << endl;
  if (numbers!=numbers2) 
    cout << "\tGood\n";
  else
    cout << "\tNot Equals operator wrong\n";
  
  
  if (numbers!=numbers2) 
    cout << "\tGood\n";
  else
    cout << "\tNot Equals operator wrong\n";

  numbers['B']=std2;
  if (numbers!=numbers2) 
    cout << "\tNot Equals operator wrong\n";
  else
    cout << "\tGood\n";

  // Greater Than
  cout << "\tTesting Greater Than..." << endl;
  if (numbers>numbers2) 
    cout << "\tGreater Than operator wrong\n";
  else
    cout << "\tGood\n";

  numbers[1]=90;
  if (numbers>numbers2) 
    cout << "\tGood\n";
  else
    cout << "\tGreater Than operator wrong\n";

  numbers[1] = 70;
  numbers[0] = 61;
  if (numbers>numbers2) 
    cout << "\tGood\n";
  else
    cout << "\tGreater Than operator wrong\n";

  numbers[1] = 69;
  numbers[0] = 60;
  if (numbers>numbers2) 
    cout << "\tGreater Than operator wrong\n";
  else
    cout << "\tGood\n";

  numbers[1] = 70;
  numbers[0] = 59;
  if (numbers>numbers2) 
    cout << "\tGreater Than operator wrong\n";
  else
    cout << "\tGood\n";

  // Greater Than Equals
  numbers[1]=70;
  numbers[0]=50;
  numbers2[0]=60;
  numbers2[1]=70;
  cout << "\tTesting Greater Than Equals..." << endl;
  if (numbers>=numbers2) 
    cout << "\tGreater Than Equals operator wrong\n";
  else
    cout << "\tGood\n";

  numbers[1]=90;
  if (numbers>=numbers2) 
    cout << "\tGood\n";
  else
    cout << "\tGreater Than Equals operator wrong\n";

  numbers[1] = 70;
  numbers[0] = 60;
  if (numbers>=numbers2) 
    cout << "\tGreater Than Equals operator wrong\n";
  else
    cout << "\tGood\n";

  numbers[1] = 69;
  numbers[0] = 60;
  if (numbers>=numbers2) 
    cout << "\tGreater Than Equals Than operator wrong\n";
  else
    cout << "\tGood\n";

  numbers[1] = 70;
  numbers[0] = 59;
  if (numbers>=numbers2) 
    cout << "\tGreater Than Equals Than operator wrong\n";
  else
    cout << "\tGood\n";


  // Less Than Equals
  numbers[1]=70;
  numbers[0]=60;
  numbers2[0]=60;
  numbers2[1]=70;
  cout << "\tTesting Less Than Equals..." << endl;
  if (numbers<=numbers2) 
    cout << "\tLess Than Equals operator wrong\n";
  else
    cout << "\tGood\n";

  numbers[1]=69;
  if (numbers<=numbers2) 
    cout << "\tGood\n";
  else
    cout << "\tLess Than Equals operator wrong\n";

  numbers[1] = 70;
  numbers[0] = 59;
  if (numbers<=numbers2) 
    cout << "\tGood\n";
  else
    cout << "\tLess Than Equals operator wrong\n";

  numbers[1] = 71;
  numbers[0] = 60;
  if (numbers<=numbers2) 
    cout << "\tLess Than Equals operator wrong\n";
  else
    cout << "\tGood\n";

  numbers[1] = 70;
  numbers[0] = 61;
  if (numbers<=numbers2) 
    cout << "\tLess Than Equals operator wrong\n";
  else
    cout << "\tGood\n";
*/
  
  
  return 0;			// end program

} // end main
