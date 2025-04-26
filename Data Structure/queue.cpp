#include<iostream> // inlclude iostream library for input-output
#include<vector> // include vector library for dynamic arrays
#include<algorithm> // inlude algorithm library for sorting
#define MAX 1000
using namespace std; // using standard namespace 
class Queue
{
private:

   int front, rear; // initialize front,rear pointer
   vector<int>arr; // initialize a dynamic array
public:
   Queue(){
      front=rear=-1; // initially assign -1 to both front,rear pointer
      arr.resize(MAX); // resize the array 
   }
   // check whether the queue is full 
   bool isFull(){
      return rear==MAX-1;
   }
   // check wheter the queue is empty
   bool isEmpty(){
      return front ==-1 ||rear<front;
   }
   // creating enqueue function to insert value 
   void enqueue(int val){
      if (isFull()){
         cout << "Queue is overflow" << endl;
         return ;
      }
      // if the queue empty,assign front to zero
      if (isEmpty()){
         front = 0;
      }
      rear++;
      arr[rear] = val;
      cout << arr[rear] << " has inserted into the queue " << endl;
   }
   // creating a function to delete first element
   void dequeue(){
      if (isEmpty()){
         cout << "Queue is underflow" << endl;
         return;
      }
      cout << arr[front] << " has deleted from the queue." <<endl;
      front++;
   }
   // creating a function to display all elements
   void display(){
      if (isEmpty()){
         cout <<"Queue is empty.There are no elements to display." << endl;
         return ;
      }
      cout << "Queue elements are :" << " ";
      for(int i = front ; i <= rear ; i++){
         cout << arr[i] << " ";
      }
      cout << endl;
   }
   // creating a function to display first element
   void getFront(){
      if (isEmpty()){ 
         cout << "Queue is empty" << endl;
         return ;
      }
      cout <<"Front element is " << arr[front] << endl;
   }
   // creating a function to display last element
   void getRear(){
      if (isEmpty()){
         cout << "Queue is empty" << endl;
         return ;
      }
      cout <<"Rear element is " << arr[rear] << endl;
   }


};
int main(){
   Queue q;
   int choice , value , operation = 0; // declaring choice & value 
   // display menu
   cout << "1.Enqueue\n2.Dequeue\n3.Front_element\n4.Rear_element\n5.Display\n6.Exit" << endl;
   do{
      cout << "Enter your choice: "; // promt user for choice
      cin >> choice; // read user choice
      // creating switch to handle all cases
      switch(choice){
         // case-1 is for enqueue operation
         case 1:
         cout << "Enter a number: "; //promt user for value
         cin >> value; // read value
         q.enqueue(value); // push value onto queue
         break;
         case 2: // dequeue operation
         q.dequeue(); // delete the first element
         break;
         case 3: 
         q.getFront(); // display first element 
         break;
         case 4:
         q.getRear(); // dispaly last element
         break;
         case 5:
         q.display(); // display all element
         break;
         case 6:
         cout << "You have done " << operation <<" operation" <<endl; //display the number of operation
         cout <<"Exited" << endl; // exited from the loop
         return 0;
         default:
         cout << "Select a valid choice." << endl;
         break;
      }
      operation++; // increment the number of operation
   }
   while(choice!=6); // loop will break if choice is 6.
}