
public class fibo {

	public static void main(String[] args) {
		int a=0, b=1, c=1;
		System.out.print(a+", "+b+", ");
		while(c < 100)
		{
			c=a+b;
			System.out.print(c+", ");
			a=b;
			b=c;
		}
		

	}

}
