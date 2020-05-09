// C++ program to implement a queue using an array 
#include <iostream> 
using namespace std; 
#define SIZE 5

using namespace std;

int main() {
  int data, choice, i;
  int queue[SIZE];
  int rear = 0, front=0;
  int flag = 1;
cout << "Simple queue Using Array";
do {
cout <<"\n\n================="
<< "\n1.Queue"
<< "\n2.Dequeue" 
<< "\n3.Display" 
<< "\nAny other key to exit\n";
cout << "\nEnter Your Choice : ";
cin>>choice;
    switch (choice) {
      case 1://Queue
        // check queue is full or not 
        if (rear==SIZE) { 
            cout<<"\nQueue is full\n"; 
        } 
        // insert element at the rear 
        else { 
          cout << "Enter value to be pushed : ";
          cin>>data;
          queue[rear] = data; 
          rear++; 
        }
        break;
      case 2://Dequeue
// if queue is empty 
if (front == rear) { 
cout<<"\nQueue is empty\n"; 
} 
// shift all the elements to the left by one 
else { 
          for (int i = 0; i < rear - 1; i++) { 
              queue[i] = queue[i + 1]; 
          } 
          rear--; 
} 
        break;
      case 3:// Display 
        if (front == rear) { 
          cout<<"\nQueue is Empty\n"; 
        } 
        else{
          for (i = front; i < rear; i++) 
          { 
            cout<<queue[i]<<"\t"; 
          } 
        }
        break;
      default:
        flag = 0;
        break;
      }
  } while (flag==1);
return 0;

}

