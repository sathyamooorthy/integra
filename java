import java.io.*;
import java.io.InputStream;
import java.util.Scanner;
public class Main {
  public static void main(String args[]) {
      String str1,str2;
  Scanner sc = new Scanner(System.in);
  str1 = sc.next();
  str2 = "Rectangle mybox1 = new Rectangle();";
  if(str1.length()==0)
	{
		System.out.println("empty string");
	}
  else if(((str1.trim()).compareTo(str2))==0)
	{
		System.out.println("Given object creation is correct");
	}
  else
	{
  		System.out.println("Incorrect object creation " );
	}	
}
}
