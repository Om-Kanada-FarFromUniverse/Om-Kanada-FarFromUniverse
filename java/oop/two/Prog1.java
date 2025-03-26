import java.util.*;
public class Prog1 {

	public static void main(String[] args) {
/*		student obj=new student();
		
		obj.rno=5;
		obj.name="devi dodiya";
		obj.course="MSc";
		obj.attendclass();
		
*/
	Scanner sc=new Scanner(System.in);
	int b, l;
	Rectangle r=new Rectangle();

	System.out.print("Enter the length : ");
	l=sc.nextInt();
	System.out.print("Enter the breadth : ");
	b=sc.nextInt();
	r.setLength(l);
	r.setBreadth(b);

	System.out.println("Rectangle Length : "+r.getLength());
	System.out.println("Rectangle Breadth : "+r.getBreadth());

	}

}
