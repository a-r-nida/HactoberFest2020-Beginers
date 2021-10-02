//Stack Example Program in Java

//Import the Stack class to allow stacks to be used
import java.util.Stack;

public class StackProgram {

	public static void main(String[] args) 
	{
		//declaring a new stack object
		//Stack is generic, so the data type must be defined in <> for each instance
		//Will still compile and run without a data type, but gives a warning
		Stack<String> s = new Stack<String>();
		
		//pushing values to the stack
		//must be strings since the stack was instantiated with a String data type
		System.out.println("Adding items:");
		System.out.println(s.push("Item 1"));
		System.out.println(s.push("Item 2"));
		System.out.println(s.push("Item 3"));
		System.out.println(s.push("Item 4"));
		
		System.out.println();
		
		//using the Peek method to print out the top of the stack
		System.out.println("Top Value: " + s.peek());
		
		System.out.println();
		
		System.out.println("Removing items:");
		
		//loop checks to see if the stack is empty and continues looping until it's empty
		while(!s.empty())
		{
			//pops the top value and prints out what is popped
			System.out.println(s.pop());
		}
		
		//because stacks use FIFO, the order is reversed by popping the items
	}

}
