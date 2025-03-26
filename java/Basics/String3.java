
public class String3 {

	public static void main(String[] args) {
		
		String str="The best of the best";
		int i=0, c=0;
		i=str.indexOf("e");
		while(i != -1)
		{
			System.out.println("e is found at : "+ i);
			i=str.indexOf("e",i+1);
		}
		
		System.out.println("Hello".concat("World"));
		System.out.println();
		
		for( String x : "The best of the best".split(" "))
		{
			System.out.println(x);
		}
	}

}
