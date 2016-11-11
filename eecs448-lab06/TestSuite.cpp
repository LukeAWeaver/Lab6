#include "TestSuite.h"

using namespace std;
void TestSuite::runTests()
{
  	LinkedListOfInts testableList;
  if(testableList.isEmpty() == true)
{
  cout << "Test 1: size of empty list is zero: PASSED" << endl;
}
else
  cout << "Test 1: size of empty list is zero: FAILED" << endl;
  testableList.addFront(3);
  std::vector<int> vector = testableList.toVector();
  if(vector[0] == 3)
  {
  cout <<"Test 2: size returns correct value after 1 addFront: PASSED" <<endl;
  cout <<"Test 3: Convert List to Vector: PASSED" <<endl;
}
else
{
  cout <<"Test 2: size returns correct value after 1 addFront: FAILED" <<endl;
  cout <<"Test 3: Convert List to Vector: FAILED" <<endl;
}
testableList.addBack(4); //addback adds to front
vector = testableList.toVector();
if(vector[1] == 4)
{
cout <<"Test 4: size returns correct value after 1 addBack: PASSED" <<endl;
}
else
cout <<"Test 4: size returns correct value after 1 addBack: FAILED" <<endl;
if(testableList.size() == 2)
{
  cout <<"Test 5: size returns correct value: PASSED" <<endl;
}
else
cout <<"Test 5: size returns correct value: FAILED" <<endl;

testableList.removeBack();
vector = testableList.toVector();
if(testableList.size() == 1 && vector[1] == 3)
{
  cout <<"Test 6: RemoveBack removes back: PASSED" <<endl;
}
else
cout <<"Test 6: RemoveBack removes back: FAILED" <<endl;

cout <<"---------------------------------------------" <<endl;
vector = testableList.toVector();
cout <<"Current VECTOR: {" <<vector[0] << "," << vector[1] <<"}"<<endl;
cout <<"---------------------------------------------" <<endl;
if(testableList.search(3) && testableList.search(4))
{
    cout <<"Test 7: Search if 3 and 4 are in the list: PASSED" <<endl;
}
else
cout <<"Test 7: Search identifies if an int is in the list or not: FAILED" <<endl;

if(testableList.search(1) == false)
{
    cout <<"Test 8: Search if 1 is not in the list: PASSED" <<endl;
}
else
cout <<"Test 8: Search if 1 is not in the list: FAILED" <<endl;

if(testableList.isEmpty()==false)
{
  cout <<"Test 9: isEmpty on a Populated List returns false: PASSED" <<endl;
}
else
  cout <<"Test 9: isEmpty on a Populated List returns false: FAILED" <<endl;
testableList.addFront(1);
testableList.removeFront();
vector = testableList.toVector();
if(vector[0] != 1)
{
  cout <<"Test 10: Remove Front removes front: PASSED" <<endl;
}
else
cout <<"Test 10: Remove Front removes front: FAILED" <<endl;
if(testableList.size() == 3)
{
  cout <<"Test 11: Size on large list: PASSED" <<endl;
}
else
cout <<"Test 11: Size on large list: FAILED" <<endl;
};
